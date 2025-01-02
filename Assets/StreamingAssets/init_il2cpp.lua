if not luaEnv then
    return
end
local function getfunction(level)
    local info = debug.getinfo(level + 1, 'f')
    return info and info.func
end

function setfenv(fn, env)
    if type(fn) == 'number' then fn = getfunction(fn + 1) end
    local i = 1
    while true do
        local name = debug.getupvalue(fn, i)
        if name == '_ENV' then
            debug.upvaluejoin(fn, i, (function()
                return env
            end), 1)
            break
        elseif not name then
            break
        end

        i = i + 1
    end

    return fn
end

function getfenv(fn)
    if type(fn) == 'number' then fn = getfunction(fn + 1) end
    local i = 1
    while true do
        local name, val = debug.getupvalue(fn, i)
        if name == '_ENV' then
            return val
        elseif not name then
            break
        end
        i = i + 1
    end
end

local function map(tbl, func)
    local ret = {}
    for index, value in ipairs(tbl) do
        table.insert(ret, func(value))
    end
    return ret
end

xlua = {}
function xlua.loadType(nameOrCSType, ...)
    local genericArgs = { ... }
    local csType = nameOrCSType
    if type(csType) == 'string' then
        ---@suppress NOT_A_MEMBER
        csType = luaEnv:GetTypeByString(nameOrCSType)
    end
    if csType then
        if #genericArgs > 0 and csType.IsGenericTypeDefinition then
            genericArgs = map(genericArgs, function(g) return typeof(g) end)
            ---@suppress NOT_A_MEMBER
            csType = csType:MakeGenericType(...)
        end
        local cls = loadType(csType)
        if not cls then
            error(string.format('load %s fail!', csType.Name or csType))
        end
        rawset(cls, '__p_innerType', csType)
        return cls, csType
    end
end

local BindingFlags = xlua.loadType('System.Reflection.BindingFlags')
local GET_MEMBER_FLAGS = BindingFlags.DeclaredOnly | BindingFlags.Instance | BindingFlags.Static | BindingFlags.Public
function xlua.getNestedTypes(nameOrCSType)
    local csType = nameOrCSType
    if type(nameOrCSType) == 'string' then
        ---@suppress NOT_A_MEMBER
        csType = luaEnv:GetTypeByString(nameOrCSType)
    end
    if csType then
        ---@suppress NOT_A_MEMBER
        return csType:GetNestedTypes(GET_MEMBER_FLAGS)
    end
end

xlua.createFunction = createFunction
createFunction = nil

function xlua.get_generic_method(csType, methodName, ...)
    if not csType then
        return
    end
    csType = typeof(csType)
    local genericArgs = { ... }
    if not csType or type(csType.GetMember) ~= 'function' then
        error('the class must be a constructor')
    end
    ---@suppress NOT_A_MEMBER
    local members = CS.XLua.Utils.GetMethodAndOverrideMethodByName(csType, methodName)
    genericArgs = map(genericArgs, function(x, index)
        local ret = typeof(x)
        if not ret then
            error(string.format('invalid Type for generic arguments %d', index))
        end
        return ret
    end)
    local overloadFunctions = {}
    for i = 1, members.Length do
        ---@suppress NOT_A_MEMBER
        ---@type System.Reflection.MethodInfo
        local method = members:GetValue(i - 1)
        if method.IsGenericMethodDefinition and method:GetGenericArguments().Length == #genericArgs then
            local methodImpl = method:MakeGenericMethod(table.unpack(genericArgs))
            table.insert(overloadFunctions, methodImpl)
        end
    end
    local overloadCount = #overloadFunctions
    if overloadCount == 0 then
        error(string.format('xlua get_generic_method not found, %s, %s', csType.Name, methodName))
        return
    end
    return xlua.createFunction(table.unpack(overloadFunctions))
end

function xlua.ref(x)
    return { x }
end

function xlua.unref(r)
    return r[1]
end

function csTypeToClass(csType)
    ---@suppress NOT_A_MEMBER
    local cls, csType = xlua.loadType(csType)

    if cls then
        ---@suppress NOT_A_MEMBER
        local nestedTypes = xlua.getNestedTypes(csType)
        if nestedTypes then
            for i = 1, nestedTypes.Length do
                ---@suppress NOT_A_MEMBER
                local ntype = nestedTypes:get_Item(i - 1)
                if ntype.IsGenericType then
                else
                    ---@suppress NOT_A_MEMBER
                    rawset(cls, ntype.Name, csTypeToClass(ntype))
                end
            end
        end
    end
    return cls, csType
end

function typeof(cls)
    return cls.__p_innerType
end

function createTypeProxy(namespace)
    local metatable = {
        __index = function(tbl, name)
            if name == '__p_innerType' then
                return
            end
            local fullName = namespace and (namespace .. '.' .. name) or name
            local cls, csType = csTypeToClass(fullName)
            if cls then
                rawset(cls, '.fqn', fullName)
                tbl[name] = cls
            else
                tbl[name] = createTypeProxy(fullName)
            end
            return tbl[name]
        end,
        __call = function(tbl, ...)
            local n = select('#', ...)
            local fqn = rawget(tbl, '.fqn')
            if n > 0 then
                local name = string.format('%s`%d[', fqn, n)
                local args = { ... }
                for i = 1, n - 1 do
                    if type(args[i]) ~= 'table' then
                        return
                    end
                    local f = rawget(args[i], '.fqn')
                    name = name .. f .. ','
                end
                local f = rawget(args[n], '.fqn')
                name = name .. f .. ']'
                local ret = rawget(tbl, name)
                if not ret then
                    ret = csTypeToClass(name)
                    rawset(tbl, name, ret)
                end
                return ret
            end
        end
    }
    local ret = { ['.fqn'] = namespace }
    setmetatable(ret, metatable)
    return ret
end

CS = createTypeProxy()
