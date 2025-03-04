require('tte')

function TypingTemplate(rawInfo)
    return TaggedTemplateEngine([[
#if XLUA_IL2CPP && ENABLE_IL2CPP
using System;
using System.Collections.Generic;
using System.Reflection;

namespace XLua
{
public static class ExtensionMethodInfos_Gen
{
    [UnityEngine.Scripting.Preserve]
    public static MethodInfo[] TryLoadExtensionMethod(string assemblyQualifiedName)
    {
        if (false) {}]], FOR(getExtendedTypeToExtensionTypeInfo(rawInfo), function(e)
            return TaggedTemplateEngine([[
            
        else if (typeof(]], e.extendedType, [[).AssemblyQualifiedName == assemblyQualifiedName)
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(]], e.extendedType, ')',
                FOR(e.extendedTypes, function(extensionType) return string.format(', typeof(%s)', extensionType) end),
                [[);
        }]])
        end),
        [[

        return null;
    }
}
}
#endif]])
end

-- List<KeyValuePair<Type, List<Type>>> extendedType2extensionType
function getExtendedTypeToExtensionTypeInfo(rawInfo)
    if not rawInfo then
        return {}
    end
    local info = {}
    for i = 1, rawInfo.Count do
        local pair = rawInfo[i - 1]
        local extendedType = CS.XLua.TypeExtensions.GetFriendlyName(pair.Key)
        local t = listToLuaArray(pair.Value)
        local t1 = {}
        for _, v in ipairs(t) do
            table.insert(t1, CS.XLua.TypeExtensions.GetFriendlyName(v))
        end
        
        table.insert(info, { extendedType = extendedType, extendedTypes = t1 })
    end
    return info
end
