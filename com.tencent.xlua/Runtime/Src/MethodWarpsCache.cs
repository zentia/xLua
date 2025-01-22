#if !ENABLE_IL2CPP || !XLUA_IL2CPP
using LuaAPI = XLua.LuaDLL.Lua;
using RealStatePtr = System.IntPtr;
using LuaCSFunction = XLua.LuaDLL.lua_CSFunction;
using System.Collections.Generic;
using System;
using System.Reflection;

namespace XLua
{
    public class OverloadMethodWrap
    {
        ObjectTranslator translator;
        Type targetType;
        readonly MethodBase m_Method;

        ObjectCheck[] checkArray;
        ObjectCast[] castArray;

        int[] inPosArray;
        int[] outPosArray;

        bool[] isOptionalArray;

        object[] defaultValueArray;

        bool isVoid = true;

        int luaStackPosStart = 1;

        bool targetNeeded = false;

        object[] args;

        int[] refPos;

        Type paramsType = null;

        public bool HasDefalutValue{ get; private set; }

        public OverloadMethodWrap(ObjectTranslator translator, Type targetType, MethodBase method)
        {
            this.translator = translator;
            this.targetType = targetType;
            m_Method = method;
            HasDefalutValue = false;
        }

        public void Init(ObjectCheckers objCheckers, ObjectCasters objCasters, Type type, string methodName)
        {
            if ((typeof(Delegate) != targetType && typeof(Delegate).IsAssignableFrom(targetType)) ||
                !m_Method.IsStatic || m_Method.IsConstructor)
            {
                luaStackPosStart = 2;
                if (!m_Method.IsConstructor)
                {
                    targetNeeded = true;
                }
            }

            var paramInfos = m_Method.GetParameters();
            refPos = new int[paramInfos.Length];

            List<int> inPosList = new List<int>();
            List<int> outPosList = new List<int>();

            List<ObjectCheck> paramsChecks = new List<ObjectCheck>();
            List<ObjectCast> paramsCasts = new List<ObjectCast>();
            List<bool> isOptionalList = new List<bool>();
            List<object> defaultValueList = new List<object>();

            for(int i = 0; i < paramInfos.Length; i++)
            {
                refPos[i] = -1;
                if (!paramInfos[i].IsIn && paramInfos[i].IsOut)  // out parameter
				{
					outPosList.Add(i);
				}
                else
                {
                    if(paramInfos[i].ParameterType.IsByRef)
                    {
                        var ttype = paramInfos[i].ParameterType.GetElementType();
                        if(CopyByValue.IsStruct(ttype) && ttype != typeof(decimal))
                        {
                            refPos[i] = inPosList.Count;
                        }
                        outPosList.Add(i);
                    }

                    inPosList.Add(i);
                    var paramType = paramInfos[i].IsDefined(typeof(ParamArrayAttribute), false) || (!paramInfos[i].ParameterType.IsArray && paramInfos[i].ParameterType.IsByRef ) ? 
                        paramInfos[i].ParameterType.GetElementType() : paramInfos[i].ParameterType;
                    paramsChecks.Add (objCheckers.GetChecker(paramType));
                    paramsCasts.Add (objCasters.GetCaster(paramType, type, methodName));
                    isOptionalList.Add(paramInfos[i].IsOptional);
                    var defalutValue = paramInfos[i].DefaultValue;
                    if (paramInfos[i].IsOptional)
                    {
                        if (defalutValue != null && defalutValue.GetType() != paramInfos[i].ParameterType)
                        {
                            defalutValue = defalutValue.GetType() == typeof(Missing) ? (paramInfos[i].ParameterType.IsValueType() ? Activator.CreateInstance(paramInfos[i].ParameterType) : Missing.Value) 
                                : Convert.ChangeType(defalutValue, paramInfos[i].ParameterType);
                        }
                        HasDefalutValue = true;
                    }
                    defaultValueList.Add(paramInfos[i].IsOptional ? defalutValue : null);
                }
            }
            checkArray = paramsChecks.ToArray();
            castArray = paramsCasts.ToArray();
            inPosArray = inPosList.ToArray();
            outPosArray = outPosList.ToArray();
            isOptionalArray = isOptionalList.ToArray();
            defaultValueArray = defaultValueList.ToArray();

            if (paramInfos.Length > 0 && paramInfos[paramInfos.Length - 1].IsDefined(typeof(ParamArrayAttribute), false))
            {
                paramsType = paramInfos[paramInfos.Length - 1].ParameterType.GetElementType();
            }

            args = new object[paramInfos.Length];

            if (m_Method is MethodInfo) //constructor is not MethodInfo?
            {
                isVoid = (m_Method as MethodInfo).ReturnType == typeof(void);
            }
            else if(m_Method is ConstructorInfo)
            {
                isVoid = false;
            }
        }

        public bool Check(RealStatePtr L)
        {
            int luaTop = LuaAPI.lua_gettop(L);
            int luaStackPos = luaStackPosStart;

            for(int i = 0; i < checkArray.Length; i++)
            {
                if ((i == (checkArray.Length - 1)) && (paramsType != null))
                {
                    break;
                }
                if(luaStackPos > luaTop && !isOptionalArray[i])
                {
                    return false;
                }
                else if(luaStackPos <= luaTop && !checkArray[i](L, luaStackPos))
                {
                    return false;
                }

                if (luaStackPos <= luaTop || !isOptionalArray[i])
                {
                    luaStackPos++;
                }
            }

            return paramsType != null ? (luaStackPos < luaTop + 1 ? 
                checkArray[checkArray.Length - 1](L, luaStackPos) : true) : luaStackPos == luaTop + 1;
        }

        public int Call(RealStatePtr L)
        {
            try
            {
#if UNITY_EDITOR && !DISABLE_OBSOLETE_WARNING
                if (m_Method.IsDefined(typeof(ObsoleteAttribute), true))
                {
                    ObsoleteAttribute info = Attribute.GetCustomAttribute(m_Method, typeof(ObsoleteAttribute)) as ObsoleteAttribute;
                    UnityEngine.Debug.LogWarning("Obsolete Method [" + m_Method.DeclaringType.ToString() + "." + m_Method.Name + "]: " + info.Message);
                } 
#endif
                object target = null;
                MethodBase toInvoke = m_Method;

                if (luaStackPosStart > 1)
                {
                    target = translator.FastGetCSObj(L, 1);
                    if (target is Delegate)
                    {
                        Delegate delegateInvoke = (Delegate)target;
#if !UNITY_EDITOR
                        toInvoke = delegateInvoke.GetMethodInfo();
#else
                        toInvoke = delegateInvoke.Method;
#endif
                    }
                }


                int luaTop = LuaAPI.lua_gettop(L);
                int luaStackPos = luaStackPosStart;
                for (int i = 0; i < castArray.Length; i++)
                {
                    //UnityEngine.Debug.Log("inPos:" + inPosArray[i]);
                    if (luaStackPos > luaTop) //after check
                    {
                        if (paramsType != null && i == castArray.Length - 1)
                        {
                            args[inPosArray[i]] = Array.CreateInstance(paramsType, 0);
                        }
                        else
                        {
                            args[inPosArray[i]] = defaultValueArray[i];
                        }
                    }
                    else
                    {
                        if (paramsType != null && i == castArray.Length - 1)
                        {
                            args[inPosArray[i]] = translator.GetParams(L, luaStackPos, paramsType);
                        }
                        else
                        {
                            try
                            {
                                args[inPosArray[i]] = castArray[i](L, luaStackPos, null);
                            }
                            catch (Exception e)
                            {
                                throw new Exception("Method [" + m_Method.DeclaringType.ToString() + "." + m_Method.Name + "]: " + e.Message);
                            }
                        }
                        luaStackPos++;
                    }
                    //UnityEngine.Debug.Log("value:" + args[inPosArray[i]]);
                }

                object ret = null;


                ret = toInvoke.IsConstructor ? ((ConstructorInfo)m_Method).Invoke(args) : m_Method.Invoke(targetNeeded ? target : null, args);

                if (targetNeeded && targetType.IsValueType())
                {
                    translator.Update(L, 1, target);
                }

                int nRet = 0;

                if (!isVoid)
                {
                    //UnityEngine.Debug.Log(toInvoke.ToString() + " ret:" + ret);
                    translator.PushAny(L, ret);
                    nRet++;
                }

                for (int i = 0; i < outPosArray.Length; i++)
                {
                    if (refPos[outPosArray[i]] != -1)
                    {
                        translator.Update(L, luaStackPosStart + refPos[outPosArray[i]], args[outPosArray[i]]);
                    }
                    translator.PushAny(L, args[outPosArray[i]]);
                    nRet++;
                }

                return nRet;
            }
            finally
            {
                for(int i = 0; i < args.Length; i++)
                {
                    args[i] = null;
                }
            }
        }
    }

    public class MethodWrap
    {
        private string methodName;
        private List<OverloadMethodWrap> overloads = new List<OverloadMethodWrap>();
        private bool forceCheck;

        public MethodWrap(string methodName, List<OverloadMethodWrap> overloads, bool forceCheck)
        {
            this.methodName = methodName;
            this.overloads = overloads;
            this.forceCheck = forceCheck;
        }

        public int Call(RealStatePtr L)
        {
            try
            {
                if (overloads.Count == 1 && !overloads[0].HasDefalutValue && !forceCheck) 
                    return overloads[0].Call(L);

                for (int i = 0; i < overloads.Count; ++i)
                {
                    var overload = overloads[i];
                    if (overload.Check(L))
                    {
                        return overload.Call(L);
                    }
                }
                return LuaAPI.luaL_error(L, "invalid arguments to " + methodName);
            }
            catch (TargetInvocationException e)
            {
                return LuaAPI.luaL_error(L, "c# exception:" + e.InnerException.Message + ",stack:" + e.InnerException.StackTrace);
            }
            catch (System.Exception e)
            {
                return LuaAPI.luaL_error(L, "c# exception:" + e.Message + ",stack:" + e.StackTrace);
            }
        }
    }

    public class MethodWrapsCache
    {
        ObjectTranslator translator;
        ObjectCheckers objCheckers;
        ObjectCasters objCasters;

        Dictionary<Type, LuaCSFunction> constructorCache = new Dictionary<Type, LuaCSFunction>();
        Dictionary<Type, Dictionary<string, LuaCSFunction>> methodsCache = new Dictionary<Type, Dictionary<string, LuaCSFunction>>();
        Dictionary<Type, LuaCSFunction> delegateCache = new Dictionary<Type, LuaCSFunction>();

        public MethodWrapsCache(ObjectTranslator translator, ObjectCheckers objCheckers, ObjectCasters objCasters)
        {
            this.translator = translator;
            this.objCheckers = objCheckers;
            this.objCasters = objCasters;
        }

        public LuaCSFunction GetConstructorWrap(Type type, IntPtr L)
        {
            //UnityEngine.Debug.LogWarning("GetConstructor:" + type);
            if (!constructorCache.ContainsKey(type))
            {
                var constructors = type.GetConstructors();
                if (type.IsAbstract() || constructors == null || constructors.Length == 0)
                {
                    if (type.IsValueType())
                    {
                        constructorCache[type] = (L) =>
                        {
                            translator.PushAny(L, Activator.CreateInstance(type));
                            return 1;
                        };
                    }
                    else
                    {
                        return null;
                    }
                }
                else
                {
                    LuaCSFunction ctor = _GenMethodWrap(type, ".ctor", constructors, true, L).Call;
                    
                    if (type.IsValueType())
                    {
                        bool hasZeroParamsCtor = false;
                        for (int i = 0; i < constructors.Length; i++)
                        {
                            if (constructors[i].GetParameters().Length == 0)
                            {
                                hasZeroParamsCtor = true;
                                break;
                            }
                        }
                        if (hasZeroParamsCtor)
                        {
                            constructorCache[type] = ctor;
                        }
                        else
                        {
                            constructorCache[type] = (L) =>
                            {
                                if (LuaAPI.lua_gettop(L) == 1)
                                {
                                    translator.PushAny(L, Activator.CreateInstance(type));
                                    return 1;
                                }
                                else
                                {
                                    return ctor(L);
                                }
                            };
                        }
                    }
                    else
                    {
                        constructorCache[type] = ctor;
                    }
                }
            }
            return constructorCache[type];
        }

        public LuaCSFunction GetMethodWrapInCache(Type type, string methodName)
        {
            //string retriKey = type.ToString() + "." + methodName;
            //return methodsCache.ContainsKey(retriKey) ? methodsCache[retriKey] : null;
            if (!methodsCache.ContainsKey(type))
            {
                methodsCache[type] = new Dictionary<string, LuaCSFunction>();
            }
            var methodsOfType = methodsCache[type];
            return methodsOfType.ContainsKey(methodName) ? methodsOfType[methodName] : null;
        }

        public LuaCSFunction GetDelegateWrap(Type type, IntPtr L)
        {
            if (!typeof(Delegate).IsAssignableFrom(type))
            {
                return null;
            }
            if (!delegateCache.ContainsKey(type))
            {
                delegateCache[type] = _GenMethodWrap(type, type.ToString(), new MethodBase[] { type.GetMethod("Invoke") }, false, L).Call;
            }
            return delegateCache[type];
        }

        public LuaCSFunction GetAddEventWrap(Type type, string eventName)
        {
            if (!methodsCache.ContainsKey(type))
            {
                methodsCache[type] = new Dictionary<string, LuaCSFunction>();
            }

            var methodsOfType = methodsCache[type];
            var addEventName = $"add_{eventName}";
            if (!methodsOfType.ContainsKey(addEventName))
            {
                {
                    EventInfo eventInfo = type.GetEvent(eventName, BindingFlags.Public | BindingFlags.Instance | BindingFlags.DeclaredOnly | BindingFlags.Static | BindingFlags.NonPublic);
                    if (eventInfo == null)
                    {
                        throw new Exception(type.Name + " has no event named: " + addEventName);
                    }
                    int start_idx = 0;

                    MethodInfo add = eventInfo.GetAddMethod(true);

                    if (add == null)
                    {
                        throw new Exception(type.Name + "'s " + eventName + " has either add nor remove");
                    }

                    bool is_static = add.IsStatic;
                    if (!is_static) start_idx = 1;

                    methodsOfType[addEventName] = (L) =>
                    {
                        object obj = null;

                        if (!is_static)
                        {
                            obj = translator.GetObject(L, 1, type);
                            if (obj == null)
                            {
                                return LuaAPI.luaL_error(L, "invalid #1, needed:" + type);
                            }
                        }

                        try
                        {
                            object handlerDelegate = translator.CreateDelegateBridge(L, eventInfo.EventHandlerType, start_idx + 1);
                            if (handlerDelegate == null)
                            {
                                return LuaAPI.luaL_error(L, "invalid #" + (start_idx + 2) + ", needed:" + eventInfo.EventHandlerType);
                            }
                            add.Invoke(obj, new object[] { handlerDelegate });
                        }
                        catch (System.Exception e)
                        {
                            return LuaAPI.luaL_error(L, "c# exception:" + e + ",stack:" + e.StackTrace);
                        }

                        return 0;
                    };
                }
            }
            return methodsOfType[addEventName];
        }

        public LuaCSFunction GetRemoveEventWrap(Type type, string eventName)
        {
            if (!methodsCache.ContainsKey(type))
            {
                methodsCache[type] = new Dictionary<string, LuaCSFunction>();
            }

            var methodsOfType = methodsCache[type];
            var removeEventName = $"remove_{eventName}";
            if (!methodsOfType.ContainsKey(removeEventName))
            {
                {
                    EventInfo eventInfo = type.GetEvent(eventName, BindingFlags.Public | BindingFlags.Instance | BindingFlags.DeclaredOnly | BindingFlags.Static | BindingFlags.NonPublic);
                    if (eventInfo == null)
                    {
                        throw new Exception(type.Name + " has no event named: " + removeEventName);
                    }
                    int start_idx = 0;

                    MethodInfo remove = eventInfo.GetRemoveMethod(true);

                    if (remove == null)
                    {
                        throw new Exception(type.Name + "'s " + removeEventName + " not exist!");
                    }

                    bool is_static = remove.IsStatic;
                    if (!is_static) start_idx = 1;

                    methodsOfType[removeEventName] = (L) =>
                    {
                        object obj = null;

                        if (!is_static)
                        {
                            obj = translator.GetObject(L, 1, type);
                            if (obj == null)
                            {
                                return LuaAPI.luaL_error(L, "invalid #1, needed:" + type);
                            }
                        }

                        try
                        {
                            object handlerDelegate = translator.CreateDelegateBridge(L, eventInfo.EventHandlerType, start_idx + 1);
                            if (handlerDelegate == null)
                            {
                                return LuaAPI.luaL_error(L, "invalid #" + (start_idx + 2) + ", needed:" + eventInfo.EventHandlerType);
                            }
                            remove.Invoke(obj, new object[] { handlerDelegate });
                        }
                        catch (System.Exception e)
                        {
                            return LuaAPI.luaL_error(L, "c# exception:" + e + ",stack:" + e.StackTrace);
                        }

                        return 0;
                    };
                }
            }
            return methodsOfType[removeEventName];
        }

        public MethodWrap _GenMethodWrap(Type type, string methodName, IEnumerable<MemberInfo> methodBases, bool forceCheck, IntPtr L)
        { 
            List<OverloadMethodWrap> overloads = new List<OverloadMethodWrap>();
            foreach(var methodBase in methodBases)
            {
                var mb = methodBase as MethodBase;
                if (mb == null)
                    continue;

                if (mb.IsGenericMethodDefinition
#if !ENABLE_IL2CPP
                     && !tryMakeGenericMethod(ref mb)
#endif
                    )
                    continue;

                var overload = new OverloadMethodWrap(translator, type, mb);
                overload.Init(objCheckers, objCasters, type, methodName);
                overloads.Add(overload);
            }
            return new MethodWrap(methodName, overloads, forceCheck);
        }

        private static bool tryMakeGenericMethod(ref MethodBase method)
        {
            try
            {
                if (!(method is MethodInfo) || !Utils.IsSupportedMethod(method as MethodInfo) )
                {
                    return false;
                }
                var genericArguments = method.GetGenericArguments();
                var constraintedArgumentTypes = new Type[genericArguments.Length];
                for (var i = 0; i < genericArguments.Length; i++)
                {
                    var argumentType = genericArguments[i];
                    var parameterConstraints = argumentType.GetGenericParameterConstraints();
                    constraintedArgumentTypes[i] = parameterConstraints[0];
                }
                method = ((MethodInfo)method).MakeGenericMethod(constraintedArgumentTypes);
                return true;
            }
            catch (Exception)
            {
                return false;
            }
        }
    }
}

#endif
