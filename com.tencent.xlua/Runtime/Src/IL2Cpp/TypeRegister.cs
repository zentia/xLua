#if ENABLE_IL2CPP && XLUA_IL2CPP

using System;
using System.Collections.Generic;
using System.Reflection;
using System.Linq;
using XLuaIl2cpp;

namespace XLua.TypeMapping
{
    internal class TypeRegister
    {
        internal static RegisterInfoManager RegisterInfoManager = null;

        internal static void AddRegisterInfoGetter(Type type, Func<RegisterInfo> getter)
        {
            if (RegisterInfoManager == null) RegisterInfoManager = new RegisterInfoManager();

            RegisterInfoManager.Add(type, getter);
        }

        private static IntPtr ReflectionWrapperFunc = IntPtr.Zero;
        private static IntPtr ReflectionGetFieldWrapper = IntPtr.Zero;
        private static IntPtr ReflectionSetFieldWrapper = IntPtr.Zero;
        private static BindingMode GetBindingMode(RegisterInfo info, string name, bool isStatic)
        {
            var _name = name + (isStatic ? "_static" : "");
            if (info == null || !info.Members.ContainsKey(_name)) return RegisterInfoManager.DefaultBindingMode;
            return info.Members[_name].UseBindingMode;
        }
        private static IntPtr GetWrapperFunc(RegisterInfo registerInfo, MemberInfo member, string signature)
        {
            string name = member.Name;
            bool isMethod = member is MethodInfo;
            if (isMethod)
            {
                var method = (MethodInfo)member;
                if (method.IsSpecialName && method.Name != "get_Item" && (method.Name.StartsWith("get_") || method.Name.StartsWith("set_")))
                {
                    name = member.Name.Substring(4);
                }
            }
            BindingMode bindingMode = GetBindingMode(registerInfo, name, isMethod ? ((MethodInfo)member).IsStatic : false);
            IntPtr wrapper = IntPtr.Zero;
            if (bindingMode == BindingMode.FastBinding)
            {
                wrapper = NativeAPI.FindWrapFunc(signature);
            }

#if NOT_GEN_WARNING
            if (member is MethodBase && wrapper == IntPtr.Zero)
            {
                UnityEngine.Debug.LogWarning(string.Format("can't get static member wrapper for {0} declare in {1}, signature:{2}", member, member.DeclaringType, signature));
            }
#endif
            if (wrapper == IntPtr.Zero && bindingMode != BindingMode.DontBinding)
            {
                wrapper = ReflectionWrapperFunc;
            }

            return wrapper;
        }

        private static void GetFieldWrapper(RegisterInfo registerInfo, string name, bool isStatic, string signature, out IntPtr getter, out IntPtr setter)
        {
            BindingMode bindingMode = GetBindingMode(registerInfo, name, isStatic);
            getter = IntPtr.Zero;
            setter = IntPtr.Zero;
            if (bindingMode == BindingMode.FastBinding)
            {
                NativeAPI.FindFieldWrap(signature, out getter, out setter);
            }

#if NOT_GEN_WARNING
            if (getter == IntPtr.Zero && setter == IntPtr.Zero)
            {
                UnityEngine.Debug.LogWarning(string.Format("can't get static field wrapper for {0}, signature:{1}", name, signature));
            }
#endif

            if (getter == IntPtr.Zero && setter == IntPtr.Zero && bindingMode != BindingMode.DontBinding)
            {
                getter = ReflectionGetFieldWrapper;
                setter = ReflectionSetFieldWrapper;
            }
        }

        // call by native, do not throw!
        public static void RegisterNoThrow(IntPtr typeId, bool includeNonPublic)
        {
            if (ReflectionWrapperFunc == IntPtr.Zero) ReflectionWrapperFunc = NativeAPI.FindWrapFunc(null);
            if (ReflectionGetFieldWrapper == IntPtr.Zero)
            {
                NativeAPI.FindFieldWrap(null, out ReflectionGetFieldWrapper, out ReflectionSetFieldWrapper);
            }
            if (RegisterInfoManager == null) RegisterInfoManager = new RegisterInfoManager();

            try
            {
                Type type = NativeAPI.TypeIdToType(typeId);
                if (type == null) return;
                Register(type, includeNonPublic);
            }
            catch (Exception e)
            {
                UnityEngine.Debug.LogError(string.Format("try load type throw {0}", e));
            }
        }

        private static void Register(Type type, bool includeNonPublic, bool throwifMemberFail = false)
        {
            BindingFlags flag = BindingFlags.DeclaredOnly | BindingFlags.Instance | BindingFlags.Static | BindingFlags.Public;
            if (includeNonPublic)
            {
                flag = flag | BindingFlags.NonPublic;
            }

            BindingFlags nonPublicInstance = BindingFlags.Instance | BindingFlags.NonPublic | BindingFlags.DeclaredOnly;
            Register(type, type.GetConstructors(flag), type.GetMethods(flag), type.GetProperties(flag), type.GetProperties(nonPublicInstance), type.GetFields(flag), throwifMemberFail);
        }

        private static void Register(Type type, MethodBase[] ctors = null, MethodBase[] methods = null, PropertyInfo[] properties = null, PropertyInfo[] nonpublic_properties = null, FieldInfo[] fields = null, bool throwifMemberFail = false)
        {
            IntPtr typeInfo = IntPtr.Zero;
            try
            {
                bool isDelegate = typeof(MulticastDelegate).IsAssignableFrom(type) && type != typeof(MulticastDelegate);
                var typeId = NativeAPI.GetTypeId(type);
                var superTypeId = (isDelegate || type == typeof(object) || type.BaseType == null) ? IntPtr.Zero : NativeAPI.GetTypeId(type.BaseType);

                Func<RegisterInfo> getRegisterInfoFunc;
                bool hasRegisterInfo = RegisterInfoManager.TryGetValue(type, out getRegisterInfoFunc);
                RegisterInfo registerInfo = null;
                if (hasRegisterInfo) registerInfo = getRegisterInfoFunc();

                typeInfo = NativeAPI.CreateCSharpTypeInfo(type.ToString(), typeId, superTypeId, type.IsValueType, isDelegate, isDelegate ? TypeUtils.GetMethodSignature(type.GetMethod("Invoke"), true) : "");
                if (typeInfo == IntPtr.Zero)
                {
                    if (isDelegate) throw new Exception(string.Format("create TypeInfo for {0} fail. maybe the Bridge of delegate is not found !", type));
                }
                if (!isDelegate)
                {
                    if (ctors != null && ctors.Length > 0 && (!type.IsArray || type == typeof(System.Array)))
                    {
                        foreach (var ctor in ctors)
                        {
                            if (ctor.IsGenericMethodDefinition) continue;
                            List<Type> usedTypes = TypeUtils.GetUsedTypes(ctor);
                            var signature = TypeUtils.GetMethodSignature(ctor);

                            var wrapper = GetWrapperFunc(registerInfo, ctor, signature);
                            if (wrapper == IntPtr.Zero)
                            {
                                UnityEngine.Debug.LogWarning(string.Format("wrapper is null for {0}", type));
                                continue;
                            }

                            var methodInfoPointer = NativeAPI.GetMethodInfoPointer(ctor);
                            var methodPointer = NativeAPI.GetMethodPointer(ctor);
                            if (methodInfoPointer == IntPtr.Zero)
                            {
                                UnityEngine.Debug.LogWarning(string.Format("cannot get method info for {0}:{1}, signature:{2}", type, ctor, TypeUtils.GetMethodSignature(ctor)));
                                continue;
                            }
                            if (methodPointer == IntPtr.Zero)
                            {
                                UnityEngine.Debug.LogWarning(string.Format("cannot get method pointer for {0}:{1}, signature:{2}", type, ctor, TypeUtils.GetMethodSignature(ctor)));
                                continue;
                            }
                            var wrapData = NativeAPI.AddConstructor(
                                typeInfo,
                                signature,
                                wrapper,
                                methodInfoPointer,
                                methodPointer,
                                usedTypes.Count
                            );
                            if (wrapData == IntPtr.Zero)
                            {
                                if (!throwifMemberFail)
                                {
#if WARNING_IF_MEMBERFAIL
                                    UnityEngine.Debug.LogWarning(string.Format("add constructor for {0} fail, signature:{1}", type, TypeUtils.GetMethodSignature(ctor)));
#endif
                                    continue;
                                }
                                throw new Exception(string.Format("add constructor for {0} fail, signature:{1}", type, TypeUtils.GetMethodSignature(ctor)));
                            }
                            for (int i = 0; i < usedTypes.Count; i++)
                            {
                                var usedTypeId = NativeAPI.GetTypeId(usedTypes[i]);
                                NativeAPI.SetTypeInfo(wrapData, i, usedTypeId);
                            }
                        }
                    }
                }
                Action<string, MethodInfo, bool, bool, bool> AddMethodToType = (string name, MethodInfo method, bool isGetter, bool isSetter, bool isExtensionethod) => 
                {
                    method = TypeUtils.HandleMaybeGenericMethod(method);
                    if (method == null) return;
                    List<Type> usedTypes = TypeUtils.GetUsedTypes(method, isExtensionethod);
                    var signature = TypeUtils.GetMethodSignature(method, false, isExtensionethod);

                    var wrapper = GetWrapperFunc(registerInfo, method, signature);
                    if (wrapper == IntPtr.Zero)
                    {
                        UnityEngine.Debug.LogWarning(string.Format("wrapper is null for {0}:{1}, signature:{2}", type, method, TypeUtils.GetMethodSignature(method, false, isExtensionethod)));
                        return;
                    }

                    var methodInfoPointer = NativeAPI.GetMethodInfoPointer(method);
                    var methodPointer = NativeAPI.GetMethodPointer(method);
                    if (methodInfoPointer == IntPtr.Zero)
                    {
                        UnityEngine.Debug.LogWarning(string.Format("cannot get method info for {0}:{1}, signature:{2}", type, method, TypeUtils.GetMethodSignature(method, false, isExtensionethod)));
                        return;
                    }
                    if (methodPointer == IntPtr.Zero)
                    {
                        UnityEngine.Debug.LogWarning(string.Format("cannot get method pointer for {0}:{1}, signature:{2}", type, method, TypeUtils.GetMethodSignature(method, false, isExtensionethod)));
                        return;
                    }
                    var wrapData = NativeAPI.AddMethod(
                        typeInfo,
                        signature,
                        wrapper,
                        name,
                        !isExtensionethod && method.IsStatic,
                        isExtensionethod,
                        isGetter,
                        isSetter,
                        methodInfoPointer,
                        methodPointer,
                        usedTypes.Count
                    );
                    if (wrapData == IntPtr.Zero)
                    {
                        if (throwifMemberFail)
                        {
                            throw new Exception(string.Format("add method for {0}:{1}, signature:{2}", type, method, TypeUtils.GetMethodSignature(method, false, isExtensionethod)));
                        }
                        else
                        {
#if WARNING_IF_MEMBERFAIL
                            UnityEngine.Debug.LogWarning(string.Format("add method for {0}:{1} fail, signature:{2}"), type, method, TypeUtils.GetMethodSignature(method, fail, isExtensionethod));
#endif
                            return;
                        }
                    }
                    for (int i = 0; i < usedTypes.Count; i++)
                    {
                        var usedTypeId = NativeAPI.GetTypeId(usedTypes[i]);
                        NativeAPI.SetTypeInfo(wrapData, i, usedTypeId);
                    }
                };

                if (methods != null && (!type.IsArray || type == typeof(System.Array)))
                {
                    foreach (var method in methods)
                    {
                        if (method.IsAbstract) continue;
                        AddMethodToType(method.Name, method as MethodInfo, false, false, false);
                    }
                }
                if (!isDelegate)
                {
                    var extensionMethods = ExtensionMethodInfo.Get(type);
                    if (extensionMethods != null)
                    {
                        foreach (var method in extensionMethods)
                        {
                            AddMethodToType(method.Name, method as MethodInfo, false, false, true);
                        }
                    }

                    if (properties != null)
                    {
                        foreach (var prop in properties)
                        {
                            var getter = prop.GetGetMethod();
                            if (getter != null && !getter.IsGenericMethodDefinition && !getter.IsAbstract)
                            {
                                AddMethodToType(prop.Name, getter, true, false, false);
                            }
                            var setter = prop.GetSetMethod();
                            if (setter != null && !setter.IsGenericMethodDefinition && !setter.IsAbstract)
                            {
                                AddMethodToType(prop.Name, setter, false, true, false);
                            }
                        }
                    }

                    if (nonpublic_properties != null)
                    {
                        foreach (var prop in nonpublic_properties)
                        {
                            int dotPos = prop.Name.LastIndexOf('.');
                            if (prop.Attributes == PropertyAttributes.None && dotPos != -1)
                            {
                                var typeNameWithDot = prop.Name.Substring(0, dotPos + 1);
                                var propName = prop.Name.Substring(dotPos + 1);
                                var getter = type.GetMethod(typeNameWithDot + "get_" + propName, BindingFlags.Instance | BindingFlags.NonPublic | BindingFlags.DeclaredOnly);
                                if (getter != null && !getter.IsGenericMethodDefinition && !getter.IsAbstract)
                                {
                                    AddMethodToType(propName, getter, true, false, false);
                                }
                                var setter = type.GetMethod(typeNameWithDot + "set_" + propName, BindingFlags.Instance | BindingFlags.NonPublic | BindingFlags.DeclaredOnly);
                                if (setter != null && !setter.IsGenericMethodDefinition && !setter.IsAbstract)
                                {
                                    AddMethodToType(propName, setter, false, true, false);
                                }
                            }
                        }
                    }

                    if (fields != null)
                    {
                        foreach (var field in fields)
                        {
                            string signature = (field.IsStatic ? "" : "t") + TypeUtils.GetTypeSignature(field.FieldType);
                            var name = field.Name;

                            IntPtr getter;
                            IntPtr setter;
                            GetFieldWrapper(registerInfo, name, field.IsStatic, signature, out getter, out setter);
                            if (getter == IntPtr.Zero && setter == IntPtr.Zero)
                            {
                                UnityEngine.Debug.LogWarning(string.Format("wrapper is null for {0}:{1}, signature{2}", type, name, signature));
                                continue;
                            }

                            if (!NativeAPI.AddField(
                                typeInfo,
                                getter,
                                setter,
                                name,
                                field.IsStatic,
                                NativeAPI.GetFieldInfoPointer(field),
                                NativeAPI.GetFieldOffset(field, type.IsValueType),
                                NativeAPI.GetTypeId(field.FieldType)
                            ))
                            {
                                if (!throwifMemberFail)
                                {
#if WARNING_IF_MEMBERFAIL
                                    UnityEngine.Debug.LogWarning(string.Format("add field for {0}:{1} fail, signature:{2}", type, field, signature));
#endif
                                    continue;
                                }
                                throw new Exception(string.Format("add field for {0}:{1} fail, signature:{2}", type, field, signature));
                            }
                        }
                    }
                }
                if (!NativeAPI.RegisterCSharpType(typeInfo))
                {
                    throw new Exception(string.Format("Register for {0} fail", type));
                }
            }
            catch (Exception e)
            {
                NativeAPI.ReleaseCSharpTypeInfo(typeInfo);
                throw e;
            }
        }
    }
}
#endif
