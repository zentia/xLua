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
        if (false) {}
        else if (typeof(int[]).AssemblyQualifiedName == assemblyQualifiedName)
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(int[]), typeof(XLua.ArrayExtension));
        }
        else if (typeof(float[]).AssemblyQualifiedName == assemblyQualifiedName)
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(float[]), typeof(XLua.ArrayExtension));
        }
        else if (typeof(double[]).AssemblyQualifiedName == assemblyQualifiedName)
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(double[]), typeof(XLua.ArrayExtension));
        }
        else if (typeof(bool[]).AssemblyQualifiedName == assemblyQualifiedName)
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(bool[]), typeof(XLua.ArrayExtension));
        }
        else if (typeof(long[]).AssemblyQualifiedName == assemblyQualifiedName)
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(long[]), typeof(XLua.ArrayExtension));
        }
        else if (typeof(ulong[]).AssemblyQualifiedName == assemblyQualifiedName)
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(ulong[]), typeof(XLua.ArrayExtension));
        }
        else if (typeof(sbyte[]).AssemblyQualifiedName == assemblyQualifiedName)
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(sbyte[]), typeof(XLua.ArrayExtension));
        }
        else if (typeof(byte[]).AssemblyQualifiedName == assemblyQualifiedName)
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(byte[]), typeof(XLua.ArrayExtension));
        }
        else if (typeof(ushort[]).AssemblyQualifiedName == assemblyQualifiedName)
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(ushort[]), typeof(XLua.ArrayExtension));
        }
        else if (typeof(short[]).AssemblyQualifiedName == assemblyQualifiedName)
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(short[]), typeof(XLua.ArrayExtension));
        }
        else if (typeof(System.Char[]).AssemblyQualifiedName == assemblyQualifiedName)
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(System.Char[]), typeof(XLua.ArrayExtension));
        }
        else if (typeof(uint[]).AssemblyQualifiedName == assemblyQualifiedName)
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(uint[]), typeof(XLua.ArrayExtension));
        }
        else if (typeof(string[]).AssemblyQualifiedName == assemblyQualifiedName)
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(string[]), typeof(XLua.ArrayExtension));
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