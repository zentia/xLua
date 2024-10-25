package.cpath = package.cpath .. ';C:/Users/Administrator/AppData/Roaming/JetBrains/Rider2024.2/plugins/EmmyLua/debugger/emmy/windows/x64/?.dll'
local dbg = require('emmy_core')
dbg.tcpConnect('localhost', 9966)

require('tte')

local sigs = CS.XLuaIl2cpp.TypeUtils.TypeSignatures;

local PrimitiveSignatureCppTypeMap = {
    v = 'void',
    b = 'bool',
    u1 = 'uint8_t',
    i1 = 'int8_t',
    i2 = 'int16_t',
    u2 = 'uint16_t',
    i4 = 'int32_t',
    u4 = 'uint32_t',
    i8 = 'int64_t',
    u8 = 'uint64_t',
    c = 'Il2CppChar',
    r8 = 'double',
    r4 = 'float'
}

function needThis(wrapperInfo) 
    return wrapperInfo.ThisSignature == 't' or wrapperInfo.ThisSignature == 'T'
end

function getSignatureWithoutRefAndPrefix(signature) 
    if signature[1] == 'P' or signature[1] == 'D' then
        return string.sub(signature, 1)
    else 
        return signature
    end
end

function SToCPPType(signature)
    if signature[1] == 'D' then
        signature = string.sub(signature, 2)
    end
    local t = PrimitiveSignatureCppTypeMap[signature]
    if not t then
        t = "void*"
    end
    if (string.startsWith(signature, sigs.StructPrefix) or string.startsWith(signature, sigs.NullableStructPrefix)) and string.endsWith(signature, '_') then
        t = string.format('struct %s', signature)
    end
    if signature[1] == 'P' then
        t = string.format('%s*', SToCPPType(string.sub(signature, 2)))
    end
    return t
end

function defineValueType(valueTypeInfo)
    if not valueTypeInfo.Signature then
        return ''
    end
    local fieldSignatures = listToLuaArray(valueTypeInfo.FieldSignatures)
    local arg1 = FOR(fieldSignatures, function(s, i) return TaggedTemplateEngine({1, [[
    ]] }, {2, IF(string.startsWith(valueTypeInfo.Signature, sigs.NullableStructPrefix) and i == valueTypeInfo.NullableHasValuePosition) }, {1, [[
    ]] }, {2, SToCPPType(s) }, {1, [[ hasValue;
    ]] }, {2, ELSE() }, {1, [[
]] }, {2, SToCPPType(s) }, {1, ' p' }, {2, i }, {1, ';' }, {2, ENDIF() }
    ) end, '\n')
    return TaggedTemplateEngine({1, '// ' }, {2, valueTypeInfo.CsName }, {1, [[
    
struct ]] }, {2, valueTypeInfo.Signature }, {1, [[

{
]] }, {2, arg1 }, {1, [[

};]] })
end

function getThis(signature)
    if signature == 't' then
        return 'auto self = xlua::DataTransfer::GetPointerFast<void>(info.Holder());'
    elseif signature == 'T' then
        return 'auto self = LuaValueToCSRef(context, info.Holder(), GetTypeId(info.Holder()));'
    else
        return ''
    end
end

function getArgValue(signature, LuaName, isRef)
    if PrimitiveSignatureCppTypeMap[signature] then
        if isRef then
            return string.format('converter::Converter<std::reference_wrapper<%s>>::toCpp(context, %s)', PrimitiveSignatureCppTypeMap[signature], LuaName)
        else
            return string.format('converter::Converter<%s>::toCpp(context, %s)', PrimitiveSignatureCppTypeMap[signature], LuaName)
        end
    elseif (signature == 'Pv' or signature == 'p') and not isRef then
        return string.format('DataTransfer::GetPointer<void>(context, %s)', LuaName)
    else
        if (string.startsWith(signature, sigs.StructPrefix) or string.startsWith(signature, sigs.NullableStructPrefix)) and string.endsWith('_') then
            return '{}'
        end
        return 'nullptr'
    end
end

function declareTypeInfo(wrapperInfo)
    local returnHasTypeInfo = wrapperInfo.ReturnSignature and not PrimitiveSignatureCppTypeMap[getSignatureWithoutRefAndPrefix(wrapperInfo.ReturnSignature)]
    local ret = {}
    local i = 0
    if returnHasTypeInfo then
        i = i + 1
        table.insert(ret, string.format('auto TIret = wrapData->TypeInfos[%d];', i))
    end
    local luaArray = listToLuaArray(wrapperInfo.ParameterSignatures)
    for index, ps in ipairs(luaArray) do
        if not PrimitiveSignatureCppTypeMap[getSignatureWithoutRefAndPrefix(ps)] then
            i = i + 1
            table.insert(ret, string.format('auto TIp%d = wrapData->TypeInfos[%d];', index, i))
        end
    end
    return table.concat(ret, '\n    ')
end

function checkLuaArg(signature, index)
    local ret = ''
    local TypeInfoIndex = index
    if signature[1] == 'D' then
        ret = ret .. string.format('if (length > %d && ', index)
        signature = string.sub(signature, 2)
    elseif signature[1] == 'V' then
        TypeInfoIndex = index .. "_V"
        ret = ret .. string.format('auto TIp%d_V = GetArrayElementTypeId(TIp%d); if (!info[%d]->IsNullOrUndefined() && ', index, index, index)
        signature = string.sub(signature, 2)
    else
        ret = ret .. 'if ('
    end
    
    if PrimitiveSignatureCppTypeMap[signature] then
        ret = ret .. string.format('!converter::Converter<%s>::accept(context, info[%d])) return false;', PrimitiveSignatureCppTypeMap[signature], index)
    elseif signature == 'p' or signature == 'Pv' then -- IntPtr, void*
        ret = ret .. string.format('!info[%d]->IsArrayBuffer()) return false;', index)
    elseif signature[1] == 'P' then
        ret = ret .. string.format('!info[%d]->IsObject() return false;', index)
    elseif signature == 'a' then
        ret = ret .. string.format('!info[%d]->IsArrayBuffer()) && !info[%d]->IsTypedArray() && !info[%d]->IsNullOrUndefined()) return false;', index, index, index)
    elseif signature == 's' then
        ret = ret .. string.format('!info[%d]->IsString() && !info[%d]->IsNullOrUndefined()) return false;', index, index)
    elseif signature == 'o' then
        ret = ret .. string.format('!info[%d]->IsNullOrUndefined() && (!info[%d]->IsObject() || (info[%d]->IsFunction() ? !IsDelegate(TIp%d) : !IsAssignableFrom(TIp%d, GetTypeId(info[%d].As<LuaTable>()))))) return false;', index, index, index, TypeInfoIndex, TypeInfoIndex, index)
    elseif signature == 'O' then
        return ''
    elseif (string.startsWith(signature, sigs.StructPrefix) or string.startsWith(signature, sigs.NullableStructPrefix)) and string.endsWith(signature, '_') then
        ret = ret .. string.format('(!info[%d]->IsObject() || !IsAssignableFrom(TIp%d, GetTypeId(info[%d].As<v8::Object())))) return false;', index, TypeInfoIndex, index)
    else
        ret = ret .. '!!true) return false;'
    end
    return ret
end

function refSetback(signature, index)
    if signature[1] == 'P' and signature ~= 'Pv' then
        local elementSignature = signature.sub(2)
        local val = CSValToLuaVal(elementSignature, string.format('*p%d', index))

        if val then
            if string.startsWith(elementSignature, sigs.StructPrefix) and string.endsWith('_') then
                return string.format([[if (!op%d.IsEmpty() && p%d == &up%d)
    {
        auto _unused = op%d->Set(context, 0, %s);
    }
            ]], index, index, index, index, val)
            elseif string.startsWith(elementSignature, sigs.NullableStructPrefix) and string.endsWith(elementSignature, '_') then
                return string.format([[if (!op%d.IsEmpty() && p%d == &up%d)
    {
        if (!p%d->hasValue) auto _unused = op%d->Set(context, 0, NULL));
        if (p%d == &up%d) auto _unused = op%d->Set(context, 0, %s);
    }
            ]], index, index, index, index, index, index, index, index, val)
            else
                return string.format([[if (!op%d.IsEmpty())
    {
        auto _unused = op%d->Set(context, 0, %s);
    }
                ]], val)
            end
        end
    end
    
    return ''
end

function returnToLua(signature)
    if signature == 'i8' then
        return 'info.GetReturnValue().Set(lua_pushint64(L, ret));'
    elseif signature == 'u8' then
        return 'info.GetReturnValue().Set(lua_pushuint64(L, ret));'
    elseif PrimitiveSignatureCppTypeMap[signature] then
        return 'info.GetReturnValue().Set(ret);'
    elseif string.startsWith(signature, sigs.NullableStructPrefix) and string.endsWith(signature, '_') then
        return 'info.GetReturnValue().Set(CopyNullableValueType(L, TIret, &ret, ret.hasValue, sizeof(ret)));'
    elseif string.startsWith(signature, sigs.StructPrefix) and string.endsWith(signature, '_') then
        return 'info.GetReturnValue().Set(CopyValueType(L, TIret, &ret, sizeof(ret)));'
    elseif signature == 'o' then -- classes except System.Object
        return 'info.GetReturnValue().Set(CSRefToLuaValue(L, ret));'
    elseif signature == 'a' then -- ArrayBuffer
        return 'info.GetReturnValue().Set(CSAnyToLuaValue(L, ret));'
    elseif signature == 'O' then -- System.Object
        return 'info.GetReturnValue().Set(CSAnyToLuaValue(L, ret));'
    elseif signature == 's' then -- string
        return 'info.GetReturnValue().Set(CSAnyToLuaValue(L, ret));'
    elseif signature == 'p' or signature == 'Pv' then -- IntPtr, void*
        return 'info.GetReturnValue().Set(L, ret));'
    else
        return '// unknown ret signature: ' .. signature
    end
end

function LuaValToCSVal(signature, LuaName, CSName)
    if signature == 's' then -- string
        return string.format([[    // LuaValToCSVal s
    char* t%s = lua_tostring(L, %s);
    void* %s = CStringToCSharpString(*t%s);
         ]], CSName, LuaName, CSName, CSName)
    elseif signature == 'Ps' then -- string ref
        return string.format([[      // LuaValToCSVal Ps
    void* u%s = nullptr; // string ref
    void** %s = &u%s;
    ]], CSName, CSName, CSName)
    elseif signature == 'o' or signature == 'O' or signature == 'a' then -- Object
        return string.format([[    // LuaValToCSVal o/O
    void* %s = LuaValueToCSRef(L, %s, TI%s);]], CSName, LuaName, CSName)
    elseif signature == 'Po' or signature == 'PO' or signature == 'Pa' then
        return string.format([[    // LuaValToCSVal Po/PO
    void* u%s = nullptr; // object ref
    void** %s = &u%s;
    int o%s = 0;
    if (!lua_isnil(L, %s) && lua_type(L, %s) == LUA_TUSERDATA) {
        u%s = LuaValueToCSRef(L, t%s, TI%s);]], CSName, CSName, CSName, CSName, LuaName, LuaName, CSName, CSName, CSName)
    elseif (string.startsWith(signature, sigs.StructPrefix) or string.startsWith(signature, sigs.NullableStructPrefix)) and string.endsWith(signature, '_') then -- valuetype
        return string.format([[    // LuaValToCSVal struct
    %s* p%s = DataTransfer::GetPointer<%s>(L, %s);
    %s %s = p%s ? *p%s : %s {};]], signature, CSName, signature, LuaName, signature, CSName, CSName, CSName, signature)
    elseif (string.startsWith(signature, 'P' .. sigs.StructPrefix) or string.startsWith(signature, 'P' .. sigs.NullableStructPrefix)) and string.endsWith(signature, '_') then -- valuetype ref
        local S = string.sub(signature, 2)
        return string.format([[    // LuaValToCSVal Pstruct
    %s* %s = nullptr; // valuetype ref
    %s u%s;
    int o%s;
    if (!lua_isnil(L, %s) && lua_type(L, %s) == LUA_TUSERDATA) {
        %s = DataTransfer::GetPointer<%s>(L, t%s);
    }
    if (!%s) {
        memset(&u%s, 0, sizeof(%s));
        %s = &u%s;
    }]], S, CSName, S, CSName, CSName, CSName, LuaName, LuaName, CSName, S, CSName, CSName, CSName, S, CSName, CSName)
    elseif signature[1] == 'P' and signature ~= 'Pv' then
        local s = string.sub(2)
        if PrimitiveSignatureCppTypeMap[s] then
            return string.format([[    // LuaValToCSVal P primitive
        %s u%s = %s;
        %s* %s = &u%s;
        int o%s = 0;
        ]], SToCPPType(S), CSName, getArgValue(S, LuaName, true), SToCPPType(S), CSName, CSName, CSName)
        else
            return string.format([[    // LuaValToCSVal p not primitive
        %s %s = %s;]], SToCPPType(signature), CSName, getArgValue(S, LuaName, true))
        end
    elseif signature[1] == 'V' then
        local si = string.sub(signature, 2)
        local start = tonumber(string.match(LuaName, '%d+'))
        if PrimitiveSignatureCppTypeMap[si] then
            return string.format([[    // LuaValToCSVal primitive params
        void* %s = RestArguments<%s>::PackPrimitive(L, info, TI%s, %s);
        ]], CSName, PrimitiveSignatureCppTypeMap[si], CSName, start)
        elseif si == 's' then
            return string.format([[    // LuaValToCSVal string params
        void* %s = RestArguments<void*>::PackString(L, info, TI%s, %s);
        ]], CSName, CSName, start)
        elseif si == 'o' or si == 'S' or si == 'a' then
            return string.format([[     // LuaValToCSVal ref params
        void* %s = RestArguments<void*>::PackRef(L, info, TI%s, %s]], CSName, CSName, start)
        elseif (string.startsWith(si, sigs.StructPrefix) or string.startsWith(si, sigs.NullableStructPrefix)) and string.endsWith(si, '_') then
            return string.format([[    // LuaValToCSVal valuetype params type
        void* %s = RestArguments<%s>::PackValueType(L, info, TI%s, %s);]], CSName, CSName, start)
        else
            return string.format([[    // LuaValToCSVal unknown params type
        void* %s = nullptr;]], CSName)
        end
    elseif signature[1] == 'D' then
        local si = string.sub(signature, 2)
        local start = tonumber(string.match(LuaName, '%d+'))
        if PrimitiveSignatureCppTypeMap[si] then
            return string.format([[    // LuaValToCSVal primitive with default
        %s %s = OptionalParameter<%s>::GetPrimitive(L, info, method, wrapData, %s);
        ]], PrimitiveSignatureCppTypeMap[si], CSName, PrimitiveSignatureCppTypeMap[si], start)
        elseif si == 's' then
            return string.format([[    // LuaValToCSVal string with default
        void* %s = OptionalParameter<void*>::GetString(L, info, method, wrapData, %s);]], CSName, start, CSName)
        elseif si == 'o' or si == 'O' or si == 'a' then
            return string.format([[    // LuaValToCSVal ref with default
        void* %s = OptionalParameter<void*>::GetRefType(L, info, method, wrapData, %s, TI%s);]], CSName, string, CSName)
        elseif (string.startsWith(si, sigs.StructPrefix) or string.startsWith(si, sigs.NullableStructPrefix)) and string.endsWith(si, '_') then
            return string.format([[    // LuaValToCSVal valuetype with default
        %s %s = OptionalParameter<%s>::GetValueType(L, info, method, wrapData, %s);]], si, CSName, si, start)
        else
            return string.format([[    // LuaValToCSVal unknown type with default
        void* %s = nullptr]], CSName)
        end
    else
        return string.format([[    // LuaValToCSVal P any
        %s %s = %s;]], SToCPPType(signature), CSName, getArgValue(signature, LuaName))
    end
end

function returnToCS(signature)
    return string.format([[
%s
    return ret;]], LuaValToCSVal(signature, 'MaybeRet.ToLocalChecked()', 'ret'))
end

function CSValToLuaVal(signature, CSName)
    if PrimitiveSignatureCppTypeMap[signature] then
        return string.format('converter::Converter<%s>::toScript(L, %s)', PrimitiveSignatureCppTypeMap[signature], CSName)
    elseif signature == 's' or signature == 'O' then
        return string.format('CSAnyToLuaValue(L, %s)', CSName)
    elseif signature == 'o' or signature == 'a' then
        return string.format('CSRefToLuaValue(L, %s)', CSName)
    elseif string.startsWith(signature, sigs.NullableStructPrefix) and string.endsWith(signature, '_') then
        return string.format('CopyNullableValueType(L, TI%s, %s, (%s)->hasValue, sizeof(%s))', ternary(CSName[1] == '*', string.sub(CSName, 2), CSName), ternary(CSName[1] == '*', string.sub(CSName, 2), string.format('&%s', CSName)), ternary(CSName[1] == '*', string.sub(CSName, 2), string.format('&%s', CSName)), CSName)
    elseif string.startsWith(signature, sigs.StructPrefix) and string.endsWith(signature, '_') then
        return string.format('CopyValueType(L, TI%s, %s, sizeof(%s))', ternary(CSName[1] == '*', string.sub(CSName, 2), CSName), ternary(CSName[1] == '*', string.sub(CSName, 2), string.format('&%s', CSName)), CSName)
    end
end

function genArgsLenCheck(parameterSignatures)
    local requireNum = 1
    while requireNum <= #parameterSignatures and parameterSignatures[requireNum][1] ~= 'V' and parameterSignatures[requireNum][1] ~= 'D' do
        requireNum = requireNum + 1
    end
    if requireNum ~= #parameterSignatures then
        return string.format('length < %d', requireNum)
    end
    return string.format('length != %d', #parameterSignatures)
end

function genBridgeArgs(parameterSignatures)
    if #parameterSignatures ~= 0 then
        if parameterSignatures[#parameterSignatures][1] ~= 'V' then
            local ret = ''
            for i, v in ipairs(parameterSignatures) do
                local t = CSValToLuaVal(v, string.format('p%d', i))
                if not t then
                    ret = ret .. 'lua_pushnil(L);\n'
                else
                    ret = ret .. t .. ';\n'    
                end
            end
            return ret, #parameterSignatures
        else
            local si = string.sub(parameterSignatures[#parameterSignatures], 2)
            local unpackMethod = 'RestArguments<void*>::UnPackRefOrBoxedValueType'
            if PrimitiveSignatureCppTypeMap[si] then
                unpackMethod = string.format('RestArguments<%s>::UnPackPrimitive', PrimitiveSignatureCppTypeMap[si])
            elseif (string.startsWith(si, sigs.StructPrefix) or string.startsWith(si, sigs.NullableStructPrefix)) and string.endsWith(si, '_') then
                unpackMethod = string.format('RestArguments<%s>::UnPackValueType', si)
            end
            local arg2 = ''
            for i = 1, #parameterSignatures - 1 do
                local t = CSValToLuaVal(v, string.format('p%d', i))
                if not t then
                    arg2 = arg2 .. 'lua_pushnil(L);\n'
                else
                    arg2 = arg2 .. t .. ';\n'
                end
            end
            return arg2,#parameterSignatures - 1
        end
    else
        return '', 0
    end
end

function genBridge(bridgeInfo)
    local parameterSignatures = listToLuaArray(bridgeInfo.ParameterSignatures)
    local hasVarArgs = #parameterSignatures > 0 and parameterSignatures[#parameterSignatures][1] == 'V'
    local arg = ''
    if hasVarArgs then
        arg = ' + arrayLength - 1'
    end
    local arg2 = ''
    for i, v in ipairs(parameterSignatures) do
        arg2 = arg2 .. string.format('%s p%d', SToCPPType(v), i) .. ', '
    end
    local args, len = genBridgeArgs(parameterSignatures)
    return TaggedTemplateEngine({1, [[
static ]] }, {2, SToCPPType(bridgeInfo.ReturnSignature) }, {1, ' b_' }, {2, bridgeInfo.Signature}, {1, '(void* target, ' }, {2, arg2 }, {1, [[void* method) {
    // PLog(LogLevel::Log, "Return b_]] }, {2, bridgeInfo.Signature }, {1, '");\n' }, 
            {2, IF(bridgeInfo.ReturnSignature and not PrimitiveSignatureCppTypeMap[getSignatureWithoutRefAndPrefix(bridgeInfo.ReturnSignature)]) }, 
            {1, '\tauto TIret = GetReturnType(method);' }, 
            {2, ENDIF() },
            {1, '\n\t'},
            {2, FOR(parameterSignatures, function(ps, index)
                return TaggedTemplateEngine({1, '' }, {2, IF(not PrimitiveSignatureCppTypeMap[getSignatureWithoutRefAndPrefix(ps)]) }, {1, 'auto TIp' }, {2, index }, {1, ' = GetParameterType(method, ' }, {2, index }, {1, ');' } , {2, ENDIF() })
            end)},
            {1, [[
            
    PersistentObjectInfo* delegateInfo = GetObjectData(target, PersistentObjectInfo);
    if (delegateInfo->LuaEnvLifeCycleTracker.expired())
    {
        ThrowInvalidOperationException("LuaEnv had been destroy");
    ]] },
            {2, IF(bridgeInfo.ReturnSignature ~= 'v')},
            {1,'return {};\n' }, 
            {2, ENDIF() },
{1, [[
    }
    lua_State* L = delegateInfo->EnvInfo->L;
    int oldTop = lua_gettop(L);
    ]] },
            {2, args},
            {1, '\tint status = lua_pcall(L, ' },{2, len}, {1, [[, delegateInfo->EnvInfo->RetNum, 0);

    if (status != LUA_OK) {
        auto msg = DataTransfer::ExceptionToString(L, lua_tostring(L, -1));
        ThrowInvalidOperationException(msg);
    ]]},
            {2, IF(bridgeInfo.ReturnSignature == 'v') },
            {1, '}'},
            {2, ELSE() },
            {1, [[
            return {};
    }
    if (delegateInfo->EnvInfo->RetNum == 0)
    {
        return {};
    }
    lua_settop(L, oldTop);]]},
            {2, returnToCS(bridgeInfo.ReturnSignature)},
            {1, '\n'}, 
            {2, ENDIF()},
            {1, '\n}'})
end

function genFuncWrapper(wrapperInfo) 
    local parameterSignatures = listToLuaArray(wrapperInfo.ParameterSignatures)
    local arg6 = '\n'
    for i, v in ipairs(parameterSignatures) do
        arg6 = arg6 .. LuaValToCSVal(v, string.format('info[%d]', i), string.format('p%d', i)) .. '\n'
    end
    local arg9 = ''
    for i, v in ipairs(parameterSignatures) do
        arg9 = arg9 .. SToCPPType(v) .. string.format(' p%d, ', i)
    end
    if arg9 ~= '' then
        arg9 = string.sub(arg9, 1, #arg9 - 2)    
    end
    local arg14 = ''
    for i, v in ipairs(parameterSignatures) do
        arg14 = arg14 .. string.format('p%d, ', i)
    end
    if arg14 ~= '' then
        arg14 = string.sub(arg14, 1, #arg14 - 2)    
    end
    return TaggedTemplateEngine(
            {1, '//' }, {2, wrapperInfo.CsName }, 
            {1, '\nstatic bool w_' }, {2, wrapperInfo.Signature }, {1, [[(void* method, MethodPointer methodPointer, const pesapi_callback_info info, bool checkLuaArgument, WrapData* wrapData) {
    // PLog(LogLevel::Log, "Running w_]]}, {2, wrapperInfo.Signature }, {1, '");\n\t' },
            {2, declareTypeInfo(wrapperInfo) },
            {1, [[
    
    lua_State* L = info.L;
    
    if (]] },{2, #table.filter(parameterSignatures, function(s) return s[1] == 'D' end) == 0 and 'checkLuaArgument' or 'true' }, {1, [[) {
        auto length = info.Length();
        if (]] },{ 2,genArgsLenCheck(parameterSignatures) }, {1, ') return false;\n' },
            {2, FOR(parameterSignatures, function(x, i)
                return TaggedTemplateEngine({1, '' },{2, checkLuaArg(x, i) })
            end) }, 
            {1, '\t}\n\t' },
            {2, getThis(wrapperInfo.ThisSignature)},
            {1, '\n'},
            {2, arg6},
            {1, '\ttypedef '}, {2, SToCPPType(wrapperInfo.ReturnSignature)}, {1, ' (*FuncToCall)(' }, { 2,needThis(wrapperInfo) and 'void*, ' or '' }, {1, ''}, {2, arg9}, {1, 'const void* method);' },
            {2, IF(wrapperInfo.ReturnSignature ~= 'V')}, {1, '\n\t'}, {2, SToCPPType(wrapperInfo.ReturnSignature) }, {1, ' ret = '}, {2, ENDIF()}, {1, '((FuncToCall)methodPointer)('}, {2, needThis(wrapperInfo) and 'self, ' or '' }, {1, ''}, { 2,arg14 }, {1, 'method);'},
            {2, FOR(parameterSignatures, function(x, i)
                return TaggedTemplateEngine({1, ''}, {2, refSetback(x, i, wrapperInfo)})
            end)},
            {2, IF(wrapperInfo.ReturnSignature ~= 'V')},
            {1, '\n\t'},
            {2, returnToLua(wrapperInfo.ReturnSignature)},
            {1, '\n'},
            {2, ENDIF()},
            {1, '\n\treturn true;\n}\n'})
end

function genGetField(fieldWrapperInfo)
    local signature = fieldWrapperInfo.ReturnSignature
    if (string.startsWith(signature, sigs.StructPrefix) or string.startsWith(signature, sigs.NullableStructPrefix)) and string.endsWith(signature, '_') then
        if needThis(fieldWrapperInfo) then
            return [[auto ret = (char*)self + offset;
            
    info.GetReturnValue().Set(DataTransfer::FindOrAddCData(L, TIret, ret, true));]]
        else
            return [[auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);
            
    info.GetReturnValue().Set(DataTransfer::FindOrAddCData(L, TIret, ret, true));]]
        end
    else
        local arg = SToCPPType(fieldWrapperInfo.ReturnSignature) 
        local arg1 = 'nullptr, fieldInfo'
        if needThis(fieldWrapperInfo) then
            arg1 = 'self, fieldInfo'
        end
        local arg2 = returnToLua(fieldWrapperInfo.ReturnSignature)
        return string.format([[%s ret;
        
        FieldGet(%s, offset, &ret);
    
        %s]], arg, arg1, arg2)
    end
end

function genFieldWrapper(fieldWrapperInfo)
    return TaggedTemplateEngine({1, [[
static void ifg_]] }, { 2,fieldWrapperInfo.Signature }, { 1,[[(lua_State *L, void* fieldInfo, size_t offset, void* TIret) {
    // PLog(LogLevel::Log, "Running ifg_]] }, { 2,fieldWrapperInfo.Signature }, { 1,[[");
    
    
    ]] }, { 2,IF(needThis(fieldWrapperInfo)) }, { 1,[[
    ]] }, { 2,getThis(fieldWrapperInfo.ThisSignature) }, { 1,[[
    ]] }, { 2,ENDIF() }, { 1,[[
    ]] }, { 2,genGetField(fieldWrapperInfo) }
    )
end

function Gen(genInfos)
    local valueTypeInfos = listToLuaArray(genInfos.ValueTypeInfos)
    local wrapperInfos = listToLuaArray(genInfos.WrapperInfos)
    local bridgeInfos = listToLuaArray(genInfos.BridgeInfos)
    local fieldWrapperInfos = listToLuaArray(genInfos.FieldWrapperInfos)
    print(string.format('valuetypes:%d, wrappers:%d, bridge:%d, fieldWrapper:%d', #valueTypeInfos, #wrapperInfos, #bridgeInfos, #fieldWrapperInfos))
    local arg1 = ''
    for i, v in ipairs(valueTypeInfos) do
        arg1 = arg1 .. defineValueType(v) .. '\n'        
    end
    local arg2 = ''
    for i, v in ipairs(wrapperInfos) do
        arg2 = arg2 .. genFuncWrapper(v) .. '\n'
    end
    local arg3 = FOR(wrapperInfos, function(info) 
        return TaggedTemplateEngine({ 1,''}, { 1,', w_' }, { 1,'' } , { 2,info.Signature }, { 2,info.Signature })
    end)
    local arg4 = ''
    for i, v in ipairs(bridgeInfos) do
        arg4 = arg4 .. genBridge(v) .. '\n'
    end
    local arg5 = FOR(bridgeInfos, function(info) 
        return TaggedTemplateEngine({ 1,[[
    {"]] }, { 1,'", (MethodPointer)b_' }, { 1,[[},
    ]] }, { 2,info.Signature }, { 2,info.Signature })
    end)
    local arg6 = ''
    for i, v in ipairs(fieldWrapperInfos) do
        arg6 = arg6 .. genFieldWrapper(v) .. '\n'
    end
    local arg7 = FOR(fieldWrapperInfos, function(info) 
        return TaggedTemplateEngine({ 1,[[
    {"]] }, { 1,'", (ifg_' }, { 1,', ifs_' }, { 1,[[},
    ]] }, { 2,info.Signature }, { 2,info.Signature })
    end)
    return string.format([[
// Auto Gen

#if !__SNC__
#ifndef __has_feature
#define __has_feature(x) 0
#endif
#endif

#if _MSC_VER
typedef wchar_t Il2CppChar;
#elif __has_feature(cxx_unicode_literals)
typedef char16_t Il2CppChar;
#else
typedef uint16_t Il2CppChar;
#endif

%s

%s

static WrapFuncInfo g_wrapFuncInfos[] = {
    %s
    {nullptr, nullptr}
};

%s

static BridgeFuncInfo g_bridgeFuncInfos[] = {
    %s
    {nullptr, nullptr}
);

%s

static FieldWrapFunInfo g_fieldWrapFuncInfos[] = {
    %s
    {nullptr, nullptr, nullptr}
};

]], arg1, arg2, arg3, arg4, arg5, arg6, arg7)
end