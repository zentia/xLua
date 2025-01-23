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
    public static MethodInfo[] TryLoadExtensionMethod(string assemblyQualifiedName)
    {
        if (false) {}
        else if (typeof(System.Int32[]).AssemblyQualifiedName == assemblyQualifiedName)
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(System.Int32[]), typeof(XLua.ArrayExtension));
        }
        else if (typeof(System.Single[]).AssemblyQualifiedName == assemblyQualifiedName)
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(System.Single[]), typeof(XLua.ArrayExtension));
        }
        else if (typeof(System.Double[]).AssemblyQualifiedName == assemblyQualifiedName)
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(System.Double[]), typeof(XLua.ArrayExtension));
        }
        else if (typeof(System.Boolean[]).AssemblyQualifiedName == assemblyQualifiedName)
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(System.Boolean[]), typeof(XLua.ArrayExtension));
        }
        else if (typeof(System.Int64[]).AssemblyQualifiedName == assemblyQualifiedName)
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(System.Int64[]), typeof(XLua.ArrayExtension));
        }
        else if (typeof(System.UInt64[]).AssemblyQualifiedName == assemblyQualifiedName)
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(System.UInt64[]), typeof(XLua.ArrayExtension));
        }
        else if (typeof(System.SByte[]).AssemblyQualifiedName == assemblyQualifiedName)
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(System.SByte[]), typeof(XLua.ArrayExtension));
        }
        else if (typeof(System.Byte[]).AssemblyQualifiedName == assemblyQualifiedName)
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(System.Byte[]), typeof(XLua.ArrayExtension));
        }
        else if (typeof(System.UInt16[]).AssemblyQualifiedName == assemblyQualifiedName)
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(System.UInt16[]), typeof(XLua.ArrayExtension));
        }
        else if (typeof(System.Int16[]).AssemblyQualifiedName == assemblyQualifiedName)
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(System.Int16[]), typeof(XLua.ArrayExtension));
        }
        else if (typeof(System.Char[]).AssemblyQualifiedName == assemblyQualifiedName)
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(System.Char[]), typeof(XLua.ArrayExtension));
        }
        else if (typeof(System.UInt32[]).AssemblyQualifiedName == assemblyQualifiedName)
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(System.UInt32[]), typeof(XLua.ArrayExtension));
        }
        else if (typeof(System.String[]).AssemblyQualifiedName == assemblyQualifiedName)
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(System.String[]), typeof(XLua.ArrayExtension));
        }
        else if (typeof(System.Array).AssemblyQualifiedName == assemblyQualifiedName)
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(System.Array), typeof(XLua.ArrayExtension));
        }
        return null;
    }
}
}
#endif
