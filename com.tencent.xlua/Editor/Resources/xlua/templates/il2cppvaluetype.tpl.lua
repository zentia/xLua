require("tte")
require("il2cpp_snippets")

function defineValueType(valueTypeInfo)
    if not valueTypeInfo.Signature then
        return ''
    end
    local fieldSignatures = listToLuaArray(valueTypeInfo.FieldSignatures)
    return TaggedTemplateEngine('// ', valueTypeInfo.CsName, [[

struct ]], valueTypeInfo.Signature, [[

{]], IF(#fieldSignatures == 0), [[

    union
    {
        struct
        {
        };
        uint8_t __padding[1];
    };]],
        ELSE(),
        FOR(fieldSignatures, function(s, i)
            return TaggedTemplateEngine('',
                IF(isNullableStruct(valueTypeInfo.Signature) and i - 1 == valueTypeInfo.NullableHasValuePosition),
                string.format('\n\t%s hasValue;', SToCPPType(s)),
                ELSE(),
                string.format('\n\t%s p%d;', SToCPPType(s), i),
                ENDIF())
        end),
        ENDIF(), '\n};'
    )
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
