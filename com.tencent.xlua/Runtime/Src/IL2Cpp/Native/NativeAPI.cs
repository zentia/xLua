#if ENABLE_IL2CPP

using System;
using System.Runtime.InteropServices;
using System.Runtime.CompilerServices;
using System.Reflection;
using System.Collections.Generic;

namespace XLuaIl2cpp
{
#pragma warning disable 414
    public class MonoPInvokeCallbackAttribute : System.Attribute
    {
        private Type type;
        public MonoPInvokeCallbackAttribute(Type t)
        {
            type = t;
        }
    }
#pragma warning restore 414

    public class NativeAPI
    {
#if (UNITY_IPHONE || UNITY_TVOS || UNITY_WEBGL || UNITY_SWITCH) && !UNITY_EDITOR
        const string DLLNAME = "__Internal";
#else
        const string DLLNAME = "xlua_il2cpp";
#endif

        [DllImport("__Internal", CallingConvention = CallingConvention.Cdecl)]
        public static extern void InitialXLua(IntPtr PesapiImpl);

        [DllImport(DLLNAME, CallingConvention = CallingConvention.Cdecl)]
        public static extern IntPtr CreateNativeLuaEnv();

        [DllImport(DLLNAME, CallingConvention = CallingConvention.Cdecl)]
        public static extern void DestroyNativeLuaEnv(IntPtr luaEnv);

        [DllImport(DLLNAME, CallingConvention = CallingConvention.Cdecl)]
        public static extern IntPtr GetRegisterApi();

        [DllImport(DLLNAME, CallingConvention = CallingConvention.Cdecl)]
        public static extern IntPtr GetFFIApi();
        
        [DllImport(DLLNAME, CallingConvention = CallingConvention.Cdecl)]
        public static extern IntPtr GetPapiEnvRef(IntPtr luaEnv);

        [MethodImpl(MethodImplOptions.InternalCall)]
        public static IntPtr InitialPapiEnvRef(IntPtr api, IntPtr envRef, Object obj, MethodBase addMethodBase, MethodBase removeMethodBase)
        {
            throw new NotImplementedException();
        }

        [MethodImpl(MethodImplOptions.InternalCall)]
        public static void CleanupPapiEnvRef(IntPtr api, IntPtr envRef)
        {
            throw new NotImplementedException();
        }

        [MethodImpl(MethodImplOptions.InternalCall)]
        public static void DestroyLuaEnvPrivate(IntPtr luaEnvPrivate)
        {
            throw new NotImplementedException();
        }

        [DllImport("__Internal", CallingConvention = CallingConvention.Cdecl)]
        public static extern IntPtr CreateCSharpTypeInfo(string name, IntPtr type_id, IntPtr super_type_id, bool isValueType, bool isDelegate, string delegateSignature);

        [DllImport("__Internal", CallingConvention = CallingConvention.Cdecl)]
        public static extern void ReleaseCSharpTypeInfo(IntPtr classInfo);

        [DllImport("__Internal", CallingConvention = CallingConvention.Cdecl)]
        public static extern IntPtr FindWrapFunc(string signature);

        [DllImport("__Internal", CallingConvention = CallingConvention.Cdecl)]
        public static extern IntPtr FindFieldWrap(string signature, out IntPtr getter, out IntPtr setter);

        [DllImport("__Internal", CallingConvention = CallingConvention.Cdecl)]
        public static extern IntPtr AddConstructor(IntPtr classInfo, string signature, IntPtr WrapFunc, IntPtr method, IntPtr methodPointer, int typeInfoNum);

        [DllImport("__Internal", CallingConvention = CallingConvention.Cdecl)]
        public static extern IntPtr AddMethod(IntPtr classInfo, string signature, IntPtr WrapFunc, string name, bool isStatic, bool isExtensionethod, bool isGetter, bool isSetter, IntPtr method, IntPtr methodPointer, int typeInfoNum);

        [DllImport("__Internal", CallingConvention = CallingConvention.Cdecl)]
        public static extern bool AddField(IntPtr classInfo, IntPtr getter, IntPtr setter, string name, bool isStatic, IntPtr fieldInfo, int offset, IntPtr fieldTypeInfo);

        [DllImport("__Internal", CallingConvention = CallingConvention.Cdecl)]
        public static extern void SetTypeInfo(IntPtr wrapData, int index, IntPtr typeId);

        [DllImport("__Internal", CallingConvention = CallingConvention.Cdecl)]
        public static extern bool RegisterCSharpType(IntPtr classInfo);

        [MethodImpl(MethodImplOptions.InternalCall)]
        public static void SetRegisterNoThrow(MethodBase methodInfo)
        {
        }

        [MethodImpl(MethodImplOptions.InternalCall)]
        public static void SetObjectToGlobal(IntPtr apis, IntPtr luaEnv, string key, Object obj)
        {
            throw new NotImplementedException();
        }

        [DllImport("__Internal", CallingConvention = CallingConvention.Cdecl)]
        public static extern void AddPendingKillScriptObjects(IntPtr luaEnv, IntPtr valueRef);

        [DllImport("__Internal", CallingConvention = CallingConvention.Cdecl)]
        public static extern void CleanupPendingKillScriptObjects(IntPtr luaEnv);

        [DllImport(DLLNAME, CallingConvention = CallingConvention.Cdecl)]
        public static extern bool LogicTick(IntPtr luaEnv);

        [MethodImpl(MethodImplOptions.InternalCall)]
        public static object GetModuleExecutor(IntPtr NativeLuaEnvPtr, Type type)
        {
            throw new NotImplementedException();
        }

        [MethodImpl(MethodImplOptions.InternalCall)]
        public static IntPtr GetMethodPointer(MethodBase methodInfo)
        {
            throw new NotImplementedException();
        }

        [MethodImpl(MethodImplOptions.InternalCall)]
        public static IntPtr GetMethodInfoPointer(MethodBase methodInfo)
        {
            throw new NotImplementedException();
        }

        [MethodImpl(MethodImplOptions.InternalCall)]
        public static int GetFieldOffset(FieldInfo fieldInfo, bool isInValueType)
        {
            throw new NotImplementedException();
        }

        [MethodImpl(MethodImplOptions.InternalCall)]
        public static IntPtr GetFieldInfoPointer(FieldInfo fieldInfo)
        {
            throw new NotImplementedException();
        }

        [MethodImpl(MethodImplOptions.InternalCall)]
        public static IntPtr GetTypeId(Type type)
        {
            throw new NotImplementedException();
        }

        [MethodImpl(MethodImplOptions.InternalCall)]
        public static Type TypeIdToType(IntPtr typeId)
        {
            throw new NotImplementedException();
        }

        [MethodImpl(MethodImplOptions.InternalCall)]
        public static void SetGlobalType_LuaObject(Type type)
        {
            throw new NotImplementedException();
        }
        
        [MethodImpl(MethodImplOptions.InternalCall)]
        public static void SetGlobalType_TypedValue(Type type)
        {
            throw new NotImplementedException();
        }

        [MethodImpl(MethodImplOptions.InternalCall)]
        public static void SetGlobalType_ArrayBuffer(Type type)
        {
        }

        [MethodImpl(MethodImplOptions.InternalCall)]
        public static void PesapiCallTest(Type type)
        {
            throw new NotImplementedException();
        }

        [MethodImpl(MethodImplOptions.InternalCall)]
        public static object[] DoString(IntPtr apis, IntPtr envHolder, byte[] code, string path, int luaEnvReference)
        {
            throw new NotImplementedException();
        }

#if UNITY_EDITOR_WIN || UNITY_STANDALONE_WIN || PUERTS_GENERAL || (UNITY_WSA && !UNITY_EDITOR)
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
#endif
        public delegate void LogCallback(string content);

        [MonoPInvokeCallback(typeof(LogCallback))]
        public static void LogImpl(string msg)
        {
            UnityEngine.Debug.Log("debug msg: " + msg);
        }

        public static LogCallback Log = LogImpl;

        [DllImport(DLLNAME, CallingConvention = CallingConvention.Cdecl)]
        public static extern void SetLogCallback(IntPtr log);

        //[UnityEngine.Scripting.RequiredByNativeCodeAttribute()]
        public static void SetLogCallback(LogCallback log)
        {
#if XLUA_GENERAL || (UNITY_WSA && !UNITY_EDITOR) || UNITY_STANDALONE_WIN
            GCHandle.Alloc(log);
#endif
            IntPtr fn1 = log == null ? IntPtr.Zero : Marshal.GetFunctionPointerForDelegate(log);

            try 
            {
                SetLogCallback(fn1);                
            }
            catch(DllNotFoundException)
            {
                UnityEngine.Debug.LogError("[XLua] XLua's Native Plugin(s) is missing. You can solve this problem following the FAQ.");
                throw;
            }
        }
    }
}

#endif