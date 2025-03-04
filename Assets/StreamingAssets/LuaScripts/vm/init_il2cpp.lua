local function map(tbl, func)
    local ret = {}
    for _, value in ipairs(tbl) do
        table.insert(ret, func(value))
    end
    return ret
end

xlua = {
    NativeLoadType = loadType,
    NativeCreateFunction = createFunction
}

localType = nil
createFunction = nil

function xlua.loadType(csType)
    if csType then
        local cls = xlua.NativeLoadType(csType)
        if not cls then
            error(string.format('load %s fail!', csType.Name or csType))
        end
        rawset(cls, '__p_innerType', csType)
        return cls
    end
end

---@class luaEnv
---@field GetTypeByString function

function xlua.loadTypeByName(name)
    local csType = luaEnv:GetTypeByString(name)
    return xlua.loadType(csType), csType
end

local BindingFlags = xlua.loadTypeByName('System.Reflection.BindingFlags')
local GET_MEMBER_FLAGS = BindingFlags.DeclaredOnly | BindingFlags.Instance | BindingFlags.Static | BindingFlags.Public
---@return System.Type[]
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
    return xlua.NativeCreateFunction(table.unpack(overloadFunctions))
end

local function csTypeToClassByType(csType)
    local cls = xlua.loadType(csType)
    if cls then
        local nestedTypes = xlua.getNestedTypes(csType)
        if nestedTypes then
            for i = 1, nestedTypes.Length do
                ---@suppress NOT_A_MEMBER
                local ntype = nestedTypes:get_Item(i - 1)
                if not ntype.IsGenericType then
                    ---@suppress NOT_A_MEMBER
                    rawset(cls, ntype.Name, csTypeToClassByType(ntype))
                end
            end
        end
    end
    return cls
end

local function csTypeToClass(name)
    local cls, csType = xlua.loadTypeByName(name)
    if cls then
        local nestedTypes = xlua.getNestedTypes(csType)
        if nestedTypes then
            for i = 1, nestedTypes.Length do
                ---@suppress NOT_A_MEMBER
                local ntype = nestedTypes:get_Item(i - 1)
                if not ntype.IsGenericType then
                    ---@suppress NOT_A_MEMBER
                    rawset(cls, ntype.Name, csTypeToClassByType(ntype))
                end
            end
        end
    end
    return cls
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
            local cls = csTypeToClass(fullName)
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

require "TypePreLoad"