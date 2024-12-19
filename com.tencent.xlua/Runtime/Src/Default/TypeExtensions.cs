#if !XLUA_IL2CPP || !ENABLE_IL2CPP

using System;
using System.Linq;

namespace XLua
{
    public static partial class TypeExtensions
    {
        internal static bool IsStruct(this Type type)
        {
            return type.IsValueType() && !type.IsEnum() && !type.IsPrimitive();
        }

        static string GetNameWithoutNamespace(Type type)
        {
            if (type.IsGenericType)
            {
                var genericArgumentNames = type.GetGenericArguments()
                    .Select(x => GetFriendlyName(x)).ToArray();
                return type.Name.Split('`')[0] + "<" + string.Join(", ", genericArgumentNames) + ">";
            }
            return type.Name;
        }

        public static string GetLuaFriendlyName(Type type, Type[] genericArguments = null)
        {
            if (type == typeof(void))
                return "";// error type?
            if (type == typeof(int))
                return "CS.System.Int32";
            if (type == typeof(uint))
                return "CS.System.UInt32";
            if (type == typeof(short))
                return "CS.System.Int16";
            if (type == typeof(byte))
                return "CS.System.Byte";
            if (type == typeof(sbyte))
                return "CS.System.SByte";
            if (type == typeof(ushort))
                return "CS.System.UInt16";
            if (type == typeof(bool))
                return "CS.System.Boolean";
            if (type == typeof(long))
                return "CS.System.Int64";
            if (type == typeof(ulong))
                return "CS.System.UInt64";
            if (type == typeof(float))
                return "CS.System.Single";
            if (type == typeof(double))
                return "CS.System.Double";
            if (type == typeof(string))
                return "CS.System.String";
            if (type.IsArray)
                return "";
            if (type.IsGenericParameter)
                return type.Name;
            if (type.IsNested)
            {
                if (type.DeclaringType.IsNested)
                {
                    if (type.DeclaringType.IsGenericTypeDefinition)
                        return GetLuaFriendlyName(type.DeclaringType, type.GetGenericArguments()) + '.' + type.Name;
                    return GetLuaFriendlyName(type.DeclaringType) + '.' + type.Name;
                }

                if (type.DeclaringType.IsGenericTypeDefinition)
                {
                    var genericArgumentNames =
                        (genericArguments == null ? type.GetGenericArguments() : genericArguments)
                        .Select(x => GetLuaFriendlyName(x)).ToArray();
                    return type.DeclaringType.FullName.Split('`')[0] + "(" + string.Join(", ", genericArgumentNames) +
                           ")" + "." + type.Name;
                }
            }

            if (type.IsGenericType)
            {
                var genericArgumentNames = type.GetGenericArguments().Select(x => GetLuaFriendlyName(x)).ToArray();
                return "CS." + (type.FullName == null ? type.Namespace + "." + type.Name : type.FullName).Split('`')[0] + "(" +
                       string.Join(", ", genericArgumentNames) + ")";
            }
            return $"CS.{type.FullName}";
        }

        public static string GetFriendlyName(this Type type, Type[] genericArguments = null)
        {
            if (type == typeof(int))
                return "int";
            if (type == typeof(uint))
                return "uint";
            if (type == typeof(short))
                return "short";
            if (type == typeof(byte))
                return "byte";
            if (type == typeof(sbyte))
                return "sbyte";
            if (type == typeof(ushort))
                return "ushort";
            if (type == typeof(bool))
                return "bool";
            if (type == typeof(long))
                return "long";
            if (type == typeof(ulong))
                return "ulong";
            if (type == typeof(float))
                return "float";
            if (type == typeof(double))
                return "double";
            if (type == typeof(string))
                return "string";
            if (type == typeof(void))
                return "void";
            if (type.IsArray)
            {
                if (type.GetArrayRank() > 1)
                {
                    return GetFriendlyName(type.GetElementType()) + "[" + new String(',', type.GetArrayRank() - 1) + "]";
                }
                return GetFriendlyName(type.GetElementType()) + "[]";
            }
            if (type.IsGenericParameter)
            {
                return type.Name;
            }
            if (type.IsNested)
            {
                if (type.DeclaringType.IsNested) 
                {
                    if (type.DeclaringType.IsGenericTypeDefinition) 
                        return GetFriendlyName(type.DeclaringType, type.GetGenericArguments())+ '.' + type.Name;
                    return GetFriendlyName(type.DeclaringType) + '.' + type.Name;

                }
                if (type.DeclaringType.IsGenericTypeDefinition)
                {
                    var genericArgumentNames = (genericArguments == null ? type.GetGenericArguments() : genericArguments).Select(x => GetFriendlyName(x)).ToArray();
                    return type.DeclaringType.FullName.Split('`')[0] + "<" + string.Join(", ", genericArgumentNames) + ">" + '.' + type.Name;
                }
                return GetFriendlyName(type.DeclaringType) + '.' + GetNameWithoutNamespace(type);
            }
            if (type.IsGenericType)
            {
                var genericArgumentNames = type.GetGenericArguments()
                    .Select(x => GetFriendlyName(x)).ToArray();
                return (type.FullName == null ? type.Namespace + "." + type.Name : type.FullName).Split('`')[0] + "<" + string.Join(", ", genericArgumentNames) + ">";
            }
            return type.FullName;
        }
    }
}

#endif
