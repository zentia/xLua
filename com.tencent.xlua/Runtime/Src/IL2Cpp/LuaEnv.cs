#if ENABLE_IL2CPP && XLUA_IL2CPP
using System;
using System.Reflection;
using XLua.TypeMapping;
using System.Collections;
using System.Collections.Generic;
using RealStatePtr = System.IntPtr;
using System.Runtime.InteropServices;
using LuaAPI = XLua.LuaDLL.Lua;
using LuaCSFunction = XLua.LuaDLL.lua_CSFunction;
using UnityEngine;

namespace XLua
{
    [UnityEngine.Scripting.Preserve]
    public class LuaEnv : IDisposable
    {
        IntPtr apis;
        IntPtr nativeLuaEnv;
        IntPtr nativePesapiEnv;
        IntPtr nativeScriptObjectsRefsMgr;

        Type persistentObjectInfoType;
        MethodInfo objectPoolAddMethodInfo;
        MethodInfo objectPoolRemoveMethodInfo;
        MethodInfo tryLoadTypeMethodInfo;

        [UnityEngine.Scripting.Preserve]
        private void Preserver()
        {
            var p1 = typeof(Type).GetNestedTypes();
        }

        XLuaIl2cpp.ObjectPool objectPool = new XLuaIl2cpp.ObjectPool();

        public const string CSHARP_NAMESPACE = "xlua_csharp_namespace";
        public const string MAIN_SHREAD = "xlua_main_thread";

        public RealStatePtr rawL;

        public RealStatePtr L
        {
            get
            {
                if (rawL == RealStatePtr.Zero)
                {
                    throw new InvalidOperationException("this lua env had disposed!");
                }
                return rawL;
            }
        }

        private LuaTable _G;

        public int errorFuncRef = -1;

        const int LIB_VERSION_EXPECT = 105;
        public XLua.pesapi_ffi ffi;

        public static LuaEnv Instance;

        public LuaEnv()
        {
            UnityEngine.Debug.Log("Native XLua Env");
            Instance = this;
            LuaDLL.Lua.SetLogCallback(LogCallback, LogWarningCallback, LogErrorCallback);
            XLua.NativeAPI.InitialXLua(XLua.NativeAPI.GetRegisterApi());
            apis = XLua.NativeAPI.GetFFIApi();
            tryLoadTypeMethodInfo = typeof(TypeRegister).GetMethod("RegisterNoThrow");
            XLua.NativeAPI.SetRegisterNoThrow(tryLoadTypeMethodInfo);

            persistentObjectInfoType = typeof(XLua.LuaTable);
            XLua.NativeAPI.SetGlobalType_LuaTable(typeof(LuaTable));
            XLua.NativeAPI.SetGlobalType_Array(typeof(Array));
            XLua.NativeAPI.SetGlobalType_ArrayBuffer(typeof(byte[]));

            nativeLuaEnv = XLua.NativeAPI.CreateNativeLuaEnv();
            nativePesapiEnv = XLua.NativeAPI.GetPapiEnvRef(nativeLuaEnv);
            var objectPoolType = typeof(XLua.ObjectPool);
            nativeScriptObjectsRefsMgr = XLua.NativeAPI.InitialPapiEnvRef(apis, nativePesapiEnv, objectPool, objectPoolType.GetMethod("Add"), objectPoolType.GetMethod("Remove"));

            XLua.NativeAPI.SetObjectToGlobal(apis, nativePesapiEnv, "luaEnv", this);

            const string AutoStaticCodeRegisterClassName = "XLuaStaticWrap.XLuaRegisterInfo_Gen";
            var autoRegister = Type.GetType(AutoStaticCodeRegisterClassName, false);
            if (autoRegister == null)
            {
                foreach (var assembly in AppDomain.CurrentDomain.GetAssemblies())
                {
                    autoRegister = assembly.GetType(AutoStaticCodeRegisterClassName, false);
                    if (autoRegister != null) break;
                }
            }
            if (autoRegister != null)
            {
                var methodInfoOfRegister = autoRegister.GetMethod("AddRegisterInfoGetterIntoLuaEnv");
                methodInfoOfRegister.Invoke(null, new object[] { this });
            }

            XLua.ExtensionMethodInfo.LoadExtensionMethodInfo();
            rawL = XLua.NativeAPI.GetLuaState(nativeLuaEnv);
            AddSearcher(StaticLuaCallbacks.LoadBuiltinLib, 2);
            AddSearcher(StaticLuaCallbacks.LoadFromCustomLoaders, 3);

            ffi = Marshal.PtrToStructure<XLua.pesapi_ffi>(apis);
            var scope = ffi.open_scope(rawL);
            var env = ffi.get_env_from_ref(nativePesapiEnv);
            var func = ffi.create_function(env, FooImpl, IntPtr.Zero, null);
            var global = ffi.global(env);
            ffi.set_property(env, global, "CSharpFoo", func);
            ffi.close_scope(rawL, scope, 0);
            _G = (LuaTable)XLua.NativeAPI.GetGlobalTable(apis, nativePesapiEnv);
        }

        [XLua.MonoPInovokeCallback(typeof(XLua.NativeAPI.LogCallback))]
        private static void LogCallback(string msg)
        {
            UnityEngine.Debug.Log(msg);
        }

        [XLua.MonoPInovokeCallback(typeof(XLua.NativeAPI.LogCallback))]
        private static void LogWarningCallback(string msg)
        {
            UnityEngine.Debug.Log(msg);
        }

        [XLua.MonoPInovokeCallback(typeof(XLua.NativeAPI.LogCallback))]
        private static void LogErrorCallback(string msg)
        {
            UnityEngine.Debug.Log(msg);
        }
        
        static IntPtr storeCallback = IntPtr.Zero;

        [MonoPInvokeCallback(typeof(XLua.pesapi_callback))]
        static void FooImpl(IntPtr apis, IntPtr info)
        {
            XLua.pesapi_ffi ffi = Marshal.PtrToStructure<XLua.pesapi_ffi>(apis);
            var env = ffi.get_env(info);

            int p0 = ffi.get_arg(info, 0);
            if (ffi.is_function(env, p0))
            {
                if (storeCallback == IntPtr.Zero)
                {
                    storeCallback = ffi.create_value_ref(env, p0, 0);
                }
                return;
            }

            if (storeCallback != IntPtr.Zero)
            {
                IntPtr func = ffi.get_value_from_ref(env, storeCallback);
                int[] argv = new int[2] {p0, ffi.get_arg(info, 1)};
                int res = ffi.call_function(env, func, IntPtr.Zero, 2, argv);
                int sum = ffi.get_value_int32(env, res);
                UnityEngine.Debug.Log(string.Format("callback result = {0}", sum));
                return;
            }

            int x = ffi.get_value_int32(env, p0);
            int y = ffi.get_value_int32(env, ffi.get_arg(info, 1));
            UnityEngine.Debug.Log(string.Format("CSharpFoo called, x = {0}, y = {1}", x, y));
            ffi.add_return(info, ffi.create_int32(env, x + y));
        }

        [MonoPInvokeCallback(typeof(LuaCSFunction))]
        internal static int LoadFromResource(RealStatePtr L)
        {
            try
            {
                string filename = LuaAPI.lua_tostring(L, 1).Replace('.', '/');

                // Load with Unity3D resources
                UnityEngine.TextAsset file = (UnityEngine.TextAsset)UnityEngine.Resources.Load(filename);
                if (file == null)
                {
                    LuaAPI.lua_pushstring(L, string.Format(
                        "\n\tno such resource '{0}'", filename));
                }
                else
                {
                    if (LuaAPI.xluaL_loadbuffer(L, file.bytes, file.bytes.Length, "@" + filename) != 0)
                    {
                        return LuaAPI.luaL_error(L, String.Format("error loading module {0} from resource, {1}",
                            LuaAPI.lua_tostring(L, 1), LuaAPI.lua_tostring(L, -1)));
                    }
                }

                return 1;
            }
            catch (System.Exception e)
            {
                return LuaAPI.luaL_error(L, "c# exception in LoadFromResource:" + e);
            }
        }

        private void AddSearcher(LuaCSFunction searcher, int index)
        {
            var _L = L;
            //insert the loader
            LuaAPI.xlua_getloaders(_L);
            if (!LuaAPI.lua_istable(_L, -1))
            {
                throw new Exception("Can not set searcher!");
            }
            uint len = LuaAPI.xlua_objlen(_L, -1);
            index = index < 0 ? (int)(len + index + 2) : index;
            for (int e = (int)len + 1; e > index; e--)
            {
                LuaAPI.xlua_rawgeti(_L, -1, e - 1);
                LuaAPI.xlua_rawseti(_L, -2, e);
            }
            LuaAPI.lua_pushstdcallcfunction(_L, searcher);
            LuaAPI.xlua_rawseti(_L, -2, index);
            LuaAPI.lua_pop(_L, 1);
        }

        public LuaTable Global
        {
            get
            {
                return _G;
            }
        }

        public T LoadString<T>(byte[] chunk, string chunkName = "chunk", LuaTable env = null)
        {
            return (T)XLuaIl2cpp.NativeAPI.LoadString(apis, nativePesapiEnv, chunk, chunkName, env, typeof(T));
        }

        public T LoadString<T>(string chunk, string chunkName = "chunk", LuaTable env = null)
        {
            byte[] bytes = System.Text.Encoding.UTF8.GetBytes(chunk + '\0');
            return LoadString<T>(bytes, chunkName, env);
        }

        public T DoString<T>(byte[] chunk, string chunkName = "chunk", LuaTable env = null)
        {
            return (T)XLuaIl2cpp.NativeAPI.DoString(apis, nativePesapiEnv, chunk, chunkName, env, typeof(T));
        }

        public T DoString<T>(string chunk, string chunkName = "chunk", LuaTable env = null)
        {
            byte[] bytes = System.Text.Encoding.UTF8.GetBytes(chunk);
            return DoString<T>(bytes, chunkName, env);
        }

        public void DoString(string chunk, string chunkName = "chunk", LuaTable env = null)
        {
            byte[] bytes = System.Text.Encoding.UTF8.GetBytes(chunk);
            XLuaIl2cpp.NativeAPI.DoString(apis, nativePesapiEnv, bytes, chunkName, env, null);
        }

        public object DoString(string chunk, Type t, string chunkName = "chunk", LuaTable env = null)
        {
            byte[] bytes = System.Text.Encoding.UTF8.GetBytes(chunk);
            return XLuaIl2cpp.NativeAPI.DoString(apis, nativePesapiEnv, bytes, chunkName, env, t);
        }

        int last_check_point = 0;

        int max_check_per_tick = 20;

        static bool ObjectValidCheck(object obj)
        {
            return (!(obj is UnityEngine.Object)) || ((obj as UnityEngine.Object) != null);
        }

        Func<object, bool> object_valid_checker = new Func<object, bool>(ObjectValidCheck);


        public void Tick()
        {
            XLua.NativeAPI.CleanupPendingKillScriptObjects(nativeScriptObjectsRefsMgr);
        }

        public void GC()
        {
            Tick();
        }
        
        public void FullGc()
        {
            LuaAPI.lua_gc(L, XLua.LuaGCOptions.LUA_GCCOLLECT, 0);
        }

        public LuaTable NewTable()
        {
            return (LuaTable)XLuaIl2cpp.NativeAPI.NewTable(apis, nativePesapiEnv);
        }

        private bool disposed = false;

        public void Dispose()
        {
            Dispose(true);
        }

        public virtual void Dispose(bool dispose)
        {
            lock (this)
            {
                if (disposed) return;
                XLuaIl2cpp.NativeAPI.CleanupPapiEnvRef(apis, nativePesapiEnv);
                XLuaIl2cpp.NativeAPI.DestroyNativeLuaEnv(nativeLuaEnv);
                XLuaIl2cpp.NativeAPI.DestroyLuaEnvPrivate(nativeScriptObjectsRefsMgr);
                nativeScriptObjectsRefsMgr = IntPtr.Zero;
                rawL = IntPtr.Zero;
                Instance = null;
                disposed = true;
            }
        }

        internal struct GCAction
        {
            public int Reference;
            public bool IsDelegate;
        }

        Queue<GCAction> refQueue = new Queue<GCAction>();

        internal void equeueGCAction(GCAction action)
        {
            lock (refQueue)
            {
                refQueue.Enqueue(action);
            }
        }

        public delegate byte[] CustomLoader(ref string filepath);

        internal List<CustomLoader> customLoaders = new List<CustomLoader>();

        public void AddLoader(CustomLoader loader)
        {
            customLoaders.Add(loader);
        }

        [UnityEngine.Scripting.Preserve]
        public Type GetTypeByString(string className)
        {
            return XLuaIl2cpp.TypeUtils.GetType(className);
        }

        public void AddRegisterInfoGetter(Type type, Func<RegisterInfo> getter)
        {
#if THREAD_SAFE
            lock (this)
            {
#endif
            TypeRegister.AddRegisterInfoGetter(type, getter);
#if THREAD_SAFE
            }
#endif
        }

        public object SafeGetCSObj(IntPtr l, int index)
        {
            var idx = ffi.get_native_object_index(l, index);
            return objectPool[idx];
        }

        internal Dictionary<string, LuaCSFunction> buildin_initer = new();

        public void AddBuildin(string name, LuaCSFunction initer)
        {
            if (!Utils.IsStaticPInvokeCSFunction(initer))
            {
                throw new Exception("initer must be static and has MonoPInvokeCallback Attribute!");
            }
            buildin_initer.Add(name, initer);
        }
    }
}

#endif
