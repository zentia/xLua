require("tte")
require("il2cpp_snippets")

function defineValueType(valueTypeInfo)
    if not valueTypeInfo.Signature then
        return ''
    end
    return TaggedTemplateEngine('// ', valueTypeInfo.CsName, [[

struct ]], valueTypeInfo.Signature, [[

{
]], FOR(listToLuaArray(valueTypeInfo.FieldSignatures), function(s, i)
        return TaggedTemplateEngine([[
]], IF(isNullableStruct(valueTypeInfo.Signature) and i == valueTypeInfo.NullableHasValuePosition), [[
    ]], SToCPPType(s), [[ hasValue;
    ]], ELSE(), [[
    ]], SToCPPType(s), ' p', i, [[;
    ]], ENDIF())
    end), [[
};
    ]])
end

function Gen(genInfos)
    local valueTypeInfos = listToLuaArray(genInfos.ValueTypeInfos)
    print(string.format('valuetypes:%d', #valueTypeInfos))
    return TaggedTemplateEngine([[// Auto Gen

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

namespace xlua
{
    ]], table.join(table.map(valueTypeInfos, defineValueType), '\n'), [[

}

]])
end
