#if XLUA_IL2CPP && ENABLE_IL2CPP
using System;
using System.Collections.Generic;
using System.Reflection;

namespace XLua
{
[LuaCallCSharp]
public static class ExtensionMethodInfos_Gen_Internal
{
    [UnityEngine.Scripting.Preserve]
    public static IEnumerable<MethodInfo> TryLoadExtensionMethod(Type type)
    {
        if (false) {}
        else if (type == typeof(System.Int32[]))
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(System.Int32[]), typeof(XLua.ArrayExtension));
        }
        else if (type == typeof(System.Single[]))
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(System.Single[]), typeof(XLua.ArrayExtension));
        }
        else if (type == typeof(System.Double[]))
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(System.Double[]), typeof(XLua.ArrayExtension));
        }
        else if (type == typeof(System.Boolean[]))
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(System.Boolean[]), typeof(XLua.ArrayExtension));
        }
        else if (type == typeof(System.Int64[]))
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(System.Int64[]), typeof(XLua.ArrayExtension));
        }
        else if (type == typeof(System.UInt64[]))
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(System.UInt64[]), typeof(XLua.ArrayExtension));
        }
        else if (type == typeof(System.SByte[]))
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(System.SByte[]), typeof(XLua.ArrayExtension));
        }
        else if (type == typeof(System.Byte[]))
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(System.Byte[]), typeof(XLua.ArrayExtension));
        }
        else if (type == typeof(System.UInt16[]))
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(System.UInt16[]), typeof(XLua.ArrayExtension));
        }
        else if (type == typeof(System.Int16[]))
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(System.Int16[]), typeof(XLua.ArrayExtension));
        }
        else if (type == typeof(System.Char[]))
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(System.Char[]), typeof(XLua.ArrayExtension));
        }
        else if (type == typeof(System.UInt32[]))
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(System.UInt32[]), typeof(XLua.ArrayExtension));
        }
        else if (type == typeof(System.String[]))
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(System.String[]), typeof(XLua.ArrayExtension));
        }
        else if (type == typeof(System.Array))
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(System.Array), typeof(XLua.ArrayExtension));
        }
        return null;
    }
}
}
#endif
