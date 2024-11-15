#if XLUA_IL2CPP && ENABLE_IL2CPP
using System;
using System.Collections.Generic;
using System.Reflection;
using XLua;

namespace XLuaIl2cpp
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
            return ExtensionMethodInfo.GetExtensionMethods(typeof(System.Int32[]), typeof(XLuaIl2cpp.ArrayExtension));
        }
        else if (type == typeof(System.Single[]))
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(System.Single[]), typeof(XLuaIl2cpp.ArrayExtension));
        }
        else if (type == typeof(System.Double[]))
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(System.Double[]), typeof(XLuaIl2cpp.ArrayExtension));
        }
        else if (type == typeof(System.Boolean[]))
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(System.Boolean[]), typeof(XLuaIl2cpp.ArrayExtension));
        }
        else if (type == typeof(System.Int64[]))
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(System.Int64[]), typeof(XLuaIl2cpp.ArrayExtension));
        }
        else if (type == typeof(System.UInt64[]))
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(System.UInt64[]), typeof(XLuaIl2cpp.ArrayExtension));
        }
        else if (type == typeof(System.SByte[]))
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(System.SByte[]), typeof(XLuaIl2cpp.ArrayExtension));
        }
        else if (type == typeof(System.Byte[]))
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(System.Byte[]), typeof(XLuaIl2cpp.ArrayExtension));
        }
        else if (type == typeof(System.UInt16[]))
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(System.UInt16[]), typeof(XLuaIl2cpp.ArrayExtension));
        }
        else if (type == typeof(System.Int16[]))
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(System.Int16[]), typeof(XLuaIl2cpp.ArrayExtension));
        }
        else if (type == typeof(System.Char[]))
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(System.Char[]), typeof(XLuaIl2cpp.ArrayExtension));
        }
        else if (type == typeof(System.UInt32[]))
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(System.UInt32[]), typeof(XLuaIl2cpp.ArrayExtension));
        }
        else if (type == typeof(System.String[]))
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(System.String[]), typeof(XLuaIl2cpp.ArrayExtension));
        }
        else if (type == typeof(System.Array))
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(System.Array), typeof(XLuaIl2cpp.ArrayExtension));
        }
        return null;
    }
}
}
#endif