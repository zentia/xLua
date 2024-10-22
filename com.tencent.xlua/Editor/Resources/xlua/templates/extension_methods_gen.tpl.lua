require('tte')

function TypingTemplate(rawInfo)
    local arg1 = FOR(getExtendedTypeToExtensionTypeInfo(rawInfo), function(e)
        return string.format([[
        else if (type == typeof(%s))
        {
            return ExtensionMethod.GetExtensionMethods(typeof(%s)%s);
        }]], e.extendedType, e.extendedType, FOR(e.extendedType, function(extendedType)
            return string.format(', typeof(%s)', extendedType)
        end))
    end)
    return string.format([[
#if EXPERIMENTAL_IL2CPP_XLUA && ENABLE_IL2CPP
using System;
using System.Collections.Generaic;
using System.Reflection;
namespace XLua2Il2cpp
{
    public static class ExtensionMethodInfos_Gen
    {
        [UnityEngine.Scripting.Preserve]
        public static IEnumerable<MethodInfo> TryLoadExtensionMethod(Type type)
        {
            if (false) {}%s
            return null;
        }
    }
}
#endif]], arg1)
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
        table.insert(info, {extendedType, t1})
    end
    return info    
end