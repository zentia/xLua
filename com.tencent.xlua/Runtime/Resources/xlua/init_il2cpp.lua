local xlua = nil
if _G.xlua then
    xlua = _G.xlua
else
    _G.xlua = {}
    xlua = _G.xlua
end

local function map(tbl, func)
    local ret = {}
    for index, value in ipairs(tbl) do
        func(value)
    end
    return ret
end

function xlua.loadType(nameOrCSType, ...)
    local genericArgs = { ... }
    local csType = nameOrCSType
    if type(csType) == 'string' then
        csType = luaEnv:GetTypeByString(nameOrCSType)
    end
    if csType then
        if #genericArgs > 0 and csType.IsGenericTypeDefinition then
            genericArgs = map(genericArgs, function(g) return typeof(g) end)
            csType = csType:MakeGenericType(...)
        end
        local cls = loadType(csType)
        if not cls then
            error(string.format('load %s fail!', csType.Name or csType))
        end
        return cls
    end
end

local BindingFlags = xlua.loadType('System.Reflection.BindingFlags')
local GET_MEMBER_FLAGS = BindingFlags.DeclaredOnly | BindingFlags.Instance | BindingFlags.Static | BindingFlags.Public
function xlua.getNestedTypes(nameOrCSType)
    local csType = nameOrCSType
    if type(nameOrCSType) == 'string' then
        csType = luaEnv:GetTypeByString(nameOrCSType)
    end
    if csType then
        return csType:GetNestedType(GET_MEMBER_FLAGS)
    end
end

local MemberTypes = xlua.loadType('System.Reflection.MemberTypes')
local GENERIC_INVOKE_ERR_ARG_CHECK_FAILED = {}
local ARG_FLAG_OUT = 0x01
local ARG_FLAG_REF = 0x02
function xlua.get_generic_method(csType, ...)
    local genericArgs = { ... }
    if not csType or type(csType.GetMember) ~= 'function' then
        error('the class must be a constructor')
    end
    local members = CS.XLua.Utils.GetMethodAndOverrideMethodByName(csType, methodName)
    local overloadFunctions = {}
    for i = 1, members.Length do
        local method = members:GetValue(i - 1)
        if method.IsGenericMethodDefinition and method:GetGenericArguments().Length == #genericArgs then
            local methodImpl = method:MakeGenericType(map(function(x, index)
                local ret = typeof(x)
                if not ret then
                    error(string.format('invalid Type for generic arguments %d', index))
                end
                return ret
            end))
            table.insert(overloadFunctions, methodImpl)
        end
    end
    local overloadCount = #overloadFunctions
    if overloadCount == 0 then
        error(string.format('xlua get_generic_method not found, %s, %s', csType.Name, methodName))
        return
    end
    local createOverloadFunctionWrap = function(method)
        local typeof_System_Object = typeof(CS.System.Object)
        local paramDefs = method:GetParameters()
        local needArgCount = paramDefs.Length
        local argFlags = needArgCount > 0 and {} or nil
        local needArgTypeCode = needArgCount > 0 and {} or nil
        for i = 1, paramDefs.Length do
            local paramDef = paramDefs:GetValue(i - 1)
            local paramType = paramDef.ParameterType
            if paramDef.IsOut then
                argFlags[i] = (argFlags[i] or 0) | ARG_FLAG_OUT
                needArgTypeCode[i] = CS.System.Type.GetTypeCode(paramType:GetElementType())
            else
                needArgTypeCode[i] = CS.System.Type.GetTypeCode(paramType)
            end
        end
        local argsCsArr
        local checkArgs = function(...)
            local args = { ... }
            if needArgCount ~= #args then
                return GENERIC_INVOKE_ERR_ARG_CHECK_FAILED
            end
            if needArgCount == 0 then
                return
            end
            argsCsArr = argsCsArr or CS.System.Array.CreateInstance(typeof_System_Object, needArgCount)
            for i = 1, needArgCount do
                local val
                if argFlags[i] & ARG_FLAG_REF then
                    if not (argFlags[i] & ARG_FLAG_OUT) then
                        val = xlua.unref(args[i])
                    end
                else
                    val = args[i]
                end
                local luaValueType = type(val)
                if luaValueType == 'number' then
                    argsCsArr:set_Item(i, createTypedValueByTypeCode(val, needArgTypeCode[i]))
                else
                    argsCsArr:set_Item(i, val)
                end
            end
            return argsCsArr
        end
        local invoke = function(...)
            local argscs = checkArgs(...)
            if argscs == GENERIC_INVOKE_ERR_ARG_CHECK_FAILED then
                if overloadCount == 1 then
                    return
                end
                return GENERIC_INVOKE_ERR_ARG_CHECK_FAILED
            end
            local ret = method.invoke(xlua, 0, nil, argscs, nil)
            if argFlags then
                for i = 1, #argFlags do
                    if argFlags[i] & ARG_FLAG_REF then
                        args[i][1] = argscs:GetValue(i)
                    end
                end
            end
            return ret
        end
        return invoke
    end
    local invoke = map(overloadFunctions, function(x)
        return createOverloadFunctionWrap(x)
    end)
    if overloadCount == 1 then
        return invoke[1]
    else
        return function(...)
            local args = { ... }
            for index, value in ipairs(invoke) do
                local ret = value.call(xlua, ...)
                if ret ~= GENERIC_INVOKE_ERR_ARG_CHECK_FAILED then
                    return ret
                end
            end
            error('xlua.get_generic_method.overloadfunctions.invoke no match overload')
        end
    end
end

function createTypedValueByTypeCode(value, typeCode)
    if typeCode == CS.System.TypeCode.Char then
        return CS.XLua.CharValue(value)
    elseif typeCode == CS.System.TypeCode.SByte then
        return CS.XLua.SByteValue(value)
    elseif typeCode == CS.System.TypeCode.Int16 then
        return CS.XLua.Int16(value)
    elseif typeCode == CS.System.TypeCode.UInt16 then
        return CS.XLua.UInt16(value)
    elseif typeCode == CS.System.TypeCode.Int32 then
        return CS.XLua.Int32(value)
    elseif typeCode == CS.System.TypeCode.UInt32 then
        return CS.XLua.UInt32(value)
    elseif typeCode == CS.System.TypeCode.Int64 then
        return CS.XLua.Int64(value)
    elseif typeCode == CS.System.TypeCode.UInt64 then
        return CS.XLua.UInt64(value)
    elseif typeCode == CS.System.TypeCode.Single then
        return CS.XLua.FloatValue(value)
    elseif typeCode == CS.System.TypeCode.Double then
        return CS.XLua.DoubleValue(value)
    else
        return value
    end
end
