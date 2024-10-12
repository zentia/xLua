
require('tte')

local sigs = CS.PuertsIl2cpp.TypeUtils.TypeSignatures;

function listToLuaArray(csArr)
    local arr = {}
    if (not csArr) then return arr end
    
    for i = 1, csArr.Count do
        table.insert(csArr[i - 1])
    end
    return arr
end

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
    if (signature[1] == 'P' or signature[1] == 'D') then
        return signature.sub(1)
    else 
        return signature
    end
end
local CODE_SNIPPETS = {}
CODE_SNIPPETS.__index = CODE_SNIPPETS
function CODE_SNIPPETS:SToCPPType(signature)
    if signature[1] == 'D' then
        signature = signature.sub(2)
    end
    local t = PrimitiveSignatureCppTypeMap[t]
    if not t then
        t = "void*"
    end
    if (string.startsWith(signature, sigs.StructPrefix) or string.startsWith(signature, sigs.NullableStructPrefix)) and string.endsWith(signature, '_') then
        t = string.format('struct %s', signature)
    end
    if signature[1] == 'P' then
        t = string.format('%s*', CODE_SNIPPETS.SToCPPType(string.sub(signature, 2)))
    end
end
function CODE_SNIPPETS:defineValueType(valueTypeInfo)
    if not valueTypeInfo.Signature then
        return ''
    end
    return TaggedTemplateEngine(string.format('
struct %s
{
    %s
};', valueTypeInfo.Signature, FOR(listToLuaArray(valueTypeInfo.FieldSignatures, function(s, i) TaggedTemplateEngine(string.format('%s
    %s hasValue;
    %s
    %s p%s
    %s', IF(valueTypeInfo.Signature.startsWith(sigs.NullableStructPrefix) and i == valueTypeInfo.NullableStructPrefix),
    CODE_SNIPPETS.SToCPPType(s),ELSE(), CODE_SNIPPETS.SToCPPType(s), ENDIF()
    )) end))))
end

function CODE_SNIPPETS:getThis(signature)
    if signature == 't' then
        return 'auto self = puerts::DataTransfer::GetPointerFast<void>(info.Holder());'
    elseif signature == 'T' then
        return 'auto self = JsValueToCSRef(context, info.Holder(), GetTypeId(info.Holder()));'
    else
        return ''
    end
end

function CODE_SNIPPETS:getArgValue(signature, JSName, isRef)
    if PrimitiveSignatureCppTypeMap[signature] then
        if isRef then
            return string.format('converter::Converter<std::reference_wrapper<%s>>::toCpp(context, %s)', PrimitiveSignatureCppTypeMap[signature], JSName)
        else
            return string.format('converter::Converter<%s>::toCpp(context, %s)', PrimitiveSignatureCppTypeMap[signature], JSName)
        end
    elseif (signature == 'Pv' or signature == 'p') and not isRef then
        return string.format('DataTransfer::GetPointer<void>(context, %s)', JSName)
    else
        if (string.startsWith(signature, sigs.StructPrefix) or string.startsWith(signature, sigs.NullableStructPrefix)) and string.endsWith('_') then
            return '{}'
        end
        return 'nullptr'
    end
end

function CODE_SNIPPETS:declareTypeInfo(wrapperInfo)
    local returnHasTypeInfo = wrapperInfo.ReturnSignature and not PrimitiveSignatureCppTypeMap[getSignatureWithoutRefAndPrefix(wrapperInfo.ReturnSignature)]
    local ret = {}
    local i = 0
    if returnHasTypeInfo then
        i = i + 1
        table.insert(returnHasTypeInfo, string.format('auto TIret = wrapData->TypeInfos[%d];', i))
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

function CODE_SNIPPETS:checkLuaArg(signature, index)
    local ret = ''
    local TypeInfoIndex = index
    if signature[1] == 'D' then
        ret = ret + string.format('if (length > %d && ', index)
        signature = string.sub(signature, 2)
    elseif signature[1] == 'V' then
        TypeInfoIndex = index + "_V"
        ret = ret + string.format('auto TIp%d_V = GetArrayElementTypeId(TIp%d); if (!info[%d]->IsNullOrUndefined() && ', index, index, index)
        signature = string.sub(signature, 2)
    else
        ret = ret + 'if ('
    end

    if PrimitiveSignatureCppTypeMap[signature] then
        ret = ret + string.format('!converter::Converter<%s>::accept(context, info[%d])) return false;', PrimitiveSignatureCppTypeMap[signature], index)
    elseif signature == 'p' or signature == 'Pv' then -- IntPtr, void*
        ret = ret + string.format('!info[%d]->IsArrayBuffer()) return false;')
    elseif signature[1] == 'P' then
        ret = ret + string.format('!info[%d]->IsObject() return false;', index)
    elseif signature == 'a' then
        ret = ret + string.format('!info[%d]->IsArrayBuffer()) && !info[%d]->IsTypedArray() && !info[%d]->IsNullOrUndefined()) return false;', index, index, index)
    elseif signature == 's' then
        ret = ret + string.format('!info[%d]->IsString() && !info[%d]->IsNullOrUndefined()) return false;', index, index)
    elseif signature == 'o' then
        ret = ret + string.format('!info[%d]->IsNullOrUndefined() && (!info[%d]->IsObject() || (info[%d]->IsFunction() ? !IsDelegate(TIp%d) : !IsAssignableFrom(TIp%d, GetTypeId(info[%d].As<LuaTable>()))))) return false;', index, index, index, TypeInfoIndex, TypeInfoIndex, index)
    elseif signature == 'O' then
        return ''
    elseif (signature.startsWith(sigs.StructPrefix) or signature.startsWith(sigs.NullableStructPrefix)) and signature.endsWith('_') then
        ret = ret + string.format('(!info[%d]->IsObject() || !IsAssignableFrom(TIp%d, GetTypeId(info[%d].As<v8::Object())))) return false;', index, TypeInfoIndex, index)
    else
        ret = ret + '!!true) return false;'
    end
    return ret
end

function CODE_SNIPPETS:refSetback(signature, index)
    if signature[1] == 'P' and signature ~= 'Pv' then
        local elementSignature = signature.sub(2)
        local val = CODE_SNIPPETS.CSValToLuaVal(elementSignature, string.format('*p%d', index))

        if val then
            if string.startsWith(elementSignature, sigs.StructPrefix) and string.endsWith('_') then
                return string.format('if (!op%d.IsEmpty() && p%d == &up%d)
    {
        auto _unused = op%d->Set(context, 0, %s);
    }
            ', index, index, index, index, val)
            elseif string.startsWith(elementSignature, sigs.NullableStructPrefix) and string.endsWith(elementSignature, '_') then
                return string.format('if (!op%d.IsEmpty() && p%d == &up%d)
    {
        if (!p%d->hasValue) auto _unused = op%d->Set(context, 0, NULL));
        if (p%d == &up%d) auto _unused = op%d->Set(context, 0, %s);
    }
            ', index, index, index, index, index, index, index, index, val)
            else
                return string.format('if (!op%d.IsEmpty())
    {
        auto _unused = op%d->Set(context, 0, %s);
    }
                ', val)
            end
        end
    end
    
    return ''
end

function CODE_SNIPPETS:returnToLua(signature)
    if signature == 'i8' then
        return 'info.GetReturnValue().Set(lua_pushint64(L, ret));'
    elseif signature == 'u8' then
        return 'info.GetReturnValue().Set(lua_pushuint64(L, ret));'
    elseif PrimitiveSignatureCppTypeMap[signature] then
        return 'info.GetReturnValue().Set(ret);'
    elseif string.startsWith(signature, sigs.NullableStructPrefix) and string.endsWith(signature, '_') then
        return 'info.GetReturnValue().Set(CopyNullableValueType(L, context, TIret, &ret, ret.hasValue, sizeof(ret)));'
    elseif string.startsWith(signature, sigs.StructPrefix) and string.endsWith('_') then
        return 'info.GetReturnValue().Set(CopyValueType(L, context, TIret, &ret, sizeof(ret)));'
    elseif signature == 'o' then
        return 'info.GetReturnValue().Set(CSRefToLuaValue(L, context, ret));'
    end
end

function CODE_SNIPPETS:LuaValToCSVal(signature, LuaName, CSName)
    if signature == 's' then
         return string.format('    // LuaValToCSVal s
         ')
    end
end

function CODE_SNIPPETS:CSValToLuaVal(signature, CSName)
    if PrimitiveSignatureCppTypeMap[signature] then
        return string.format('converter::Converter<%s>::toScript(context, %s)', PrimitiveSignatureCppTypeMap[signature], CSName)
    elseif signature == 's' or signature == 'O' then
        return string.format('CSAnyToJsValue(luaState, context, %s)', CSName)
    elseif signature == 'o' or signature == 'a' then
        return string.format('CSRefToLuaValue(luaState, context, %s)', CSName)
    elseif signature.startsWith(sigs.NullableStructPrefix) and signature.endsWith('_') then
        return string.format('CopyNullableValueType(luaState, context, TI%s, %s, (%s)->hasValue, sizeof(%s))', ternary(CSName[1] == '*', CSName.sub(2), CSName), ternary(CSName[1] == '*', CSName.sub(2), string.format('&%s', CSName)), ternary(CSName[1] == '*', CSName.sub(2), string.format('&%s', CSName)), CSName)
    elseif signature.startsWith(sigs.StructPrefix) and signature.endsWith('_') then
        return string.format('CopyValueType(luaState, context, TI%s, %s, sizeof(%s))', ternary(CSName[1] == '*', CSName.sub(2), CSName), ternary(CSName[1] == '*', CSName.sub(2), string.format('&%s', CSName)), CSName)
    end
end

function genFieldWrapper(fieldWrapperInfo)
    return TaggedTemplateEngine(string.format('
static void ifg_%s(const 
    '
    ))
end

function Gen(genInfos)
    local valueTypeInfo = listToLuaArray(genInfos.ValueTypeInfos)
    local wrapperInfos = listToLuaArray(genInfos.WrapperInfos)
    local bridgeInfos = listToLuaArray(genInfos.BridgeInfos)
    local fieldWrapperInfos = listToLuaArray(genInfos.fieldWrapperInfos)
    print(string.format('valuetypes:%d, wrappers:%d, bridge:%d, fieldWrapper:%d', #valueTypeInfo, #wrapperInfos, #bridgeInfos, #fieldWrapperInfos))
    return string.format('
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
',
    )
end