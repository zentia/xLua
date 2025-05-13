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
    public class LuaEnv : LuaEnvBase
    {
        private static List<LuaEnv> luaEnvs = new List<LuaEnv>();
        private static bool isInitialized = false;
        private static MethodInfo extensionMethodGetMethodInfo;

        IntPtr apis;
        IntPtr nativePesapiEnv;
        IntPtr luaEnvPrivate;

        ObjectPool objectPool = new ObjectPool();

        [UnityEngine.Scripting.Preserve]
        private void Preserver()
        {
            var p1 = typeof(Type).GetNestedTypes();
        }

        public const string CSHARP_NAMESPACE = "xlua_csharp_namespace";
        public const string MAIN_SHREAD = "xlua_main_thread";

        public int errorFuncRef = -1;

        const int LIB_VERSION_EXPECT = 105;
        public XLua.pesapi_ffi ffi;

        public static LuaEnv Instance;

        public LuaEnv(CustomLoader loader)
        {
            UnityEngine.Debug.Log("Native XLua Env");
            if (!isInitialized)
            {
                lock (luaEnvs)
                {
                    if (!isInitialized)
                    {
                        //only once is enough
                        XLua.NativeAPI.SetLogCallback(LogCallback, LogWarningCallback, LogErrorCallback, LogExceptionCallback);
                        XLua.NativeAPI.InitialXLua(XLua.NativeAPI.GetRegisterApi());
                        extensionMethodGetMethodInfo = typeof(XLua.ExtensionMethodInfo).GetMethod("Get");

                        XLua.NativeAPI.SetExtensionMethodGet(extensionMethodGetMethodInfo);
                        NativeAPI.SetGlobalType_LuaTable(typeof(LuaTable));
                        NativeAPI.SetGlobalType_Array(typeof(Array));
                        NativeAPI.SetGlobalType_ArrayBuffer(typeof(byte[]));
                        NativeAPI.SetGlobalType_IntPtr(typeof(IntPtr));
                        NativeAPI.SetGlobalType_IEnumerable(typeof(IEnumerable));
                        NativeAPI.SetGlobalType_IDictionary(typeof(IDictionary));
                        XLua.ExtensionMethodInfo.LoadExtensionMethodInfo();
                        isInitialized = true;
                    }
                }
            }
            Instance = this;
            apis = XLua.NativeAPI.GetFFIApi();
            Init(loader);

            nativePesapiEnv = XLua.NativeAPI.GetPapiEnvRef(nativeLuaEnv);
            var objectPoolType = typeof(ObjectPool);
            luaEnvPrivate = NativeAPI.InitialPapiEnvRef(apis, nativePesapiEnv, objectPool, objectPoolType.GetMethod("Add"), objectPoolType.GetMethod("Remove"));

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

            ffi = Marshal.PtrToStructure<XLua.pesapi_ffi>(apis);
            var scope = ffi.open_scope(rawL);
            var env = ffi.get_env_from_ref(nativePesapiEnv);
            var func = ffi.create_function(env, FooImpl, IntPtr.Zero, null);
            var global = ffi.global(env);
            ffi.set_property(env, global, "CSharpFoo", func);
            ffi.close_scope(rawL, scope, 0);
            _G = (LuaTable)XLua.NativeAPI.GetGlobalTable(apis, nativePesapiEnv);

            DoString("require 'vm/init'");
        }

        [MonoPInvokeCallback(typeof(XLua.NativeAPI.LogCallback))]
        private static void LogCallback(string msg)
        {
            UnityEngine.Debug.Log(msg);
        }

        [MonoPInvokeCallback(typeof(XLua.NativeAPI.LogCallback))]
        private static void LogWarningCallback(string msg)
        {
            UnityEngine.Debug.LogWarning(msg);
        }

        [MonoPInvokeCallback(typeof(XLua.NativeAPI.LogCallback))]
        private static void LogErrorCallback(string msg)
        {
            UnityEngine.Debug.LogError(msg);
        }
        
        [MonoPInvokeCallback(typeof(XLua.NativeAPI.LogCallback))]
        private static void LogExceptionCallback(string msg)
        {
            UnityEngine.Debug.LogException(new LuaException(msg));
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

        public T LoadString<T>(byte[] chunk, string chunkName = "chunk", LuaTable env = null)
        {
            return (T)XLua.NativeAPI.LoadString(apis, nativePesapiEnv, chunk, chunkName, env, typeof(T));
        }

        public T LoadString<T>(string chunk, string chunkName = "chunk", LuaTable env = null)
        {
            byte[] bytes = System.Text.Encoding.UTF8.GetBytes(chunk + '\0');
            return LoadString<T>(bytes, chunkName, env);
        }

        public T DoString<T>(byte[] chunk, string chunkName = "chunk", LuaTable env = null)
        {
            return (T)XLua.NativeAPI.DoString(apis, nativePesapiEnv, chunk, chunkName, env, typeof(T));
        }

        public T DoString<T>(string chunk, string chunkName = "chunk", LuaTable env = null)
        {
            byte[] bytes = System.Text.Encoding.UTF8.GetBytes(chunk);
            return DoString<T>(bytes, chunkName, env);
        }

        public void DoString(string chunk, string chunkName = "chunk", LuaTable env = null)
        {
            byte[] bytes = System.Text.Encoding.UTF8.GetBytes(chunk);
            XLua.NativeAPI.DoString(apis, nativePesapiEnv, bytes, chunkName, env, null);
        }

        public object DoString(string chunk, Type t, string chunkName = "chunk", LuaTable env = null)
        {
            byte[] bytes = System.Text.Encoding.UTF8.GetBytes(chunk);
            return XLua.NativeAPI.DoString(apis, nativePesapiEnv, bytes, chunkName, env, t);
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
            XLua.NativeAPI.CleanupPendingKillScriptObjects(luaEnvPrivate);
        }

        public void GC()
        {
#if OSGAME
            Int32 sampleIndex = -1;
            Assets.Plugins.Perf.StatsLite.BeginSample(Assets.Plugins.Perf.StatsSampleId.LuaEnv_GC, ref sampleIndex);
#endif
            Tick();
#if OSGAME
            Assets.Plugins.Perf.StatsLite.EndSampleByIndex(ref sampleIndex);
#endif
        }

        public void FullGc()
        {
            LuaAPI.lua_gc(L, XLua.LuaGCOptions.LUA_GCCOLLECT, 0);
        }

        public LuaTable NewTable()
        {
            return (LuaTable)XLua.NativeAPI.NewTable(apis, nativePesapiEnv);
        }

        private bool disposed = false;

        public override void Dispose()
        {
            Dispose(true);
            base.Dispose();
        }

        public virtual void Dispose(bool dispose)
        {
            lock (this)
            {
                if (disposed)
                    return;
                XLua.NativeAPI.DestroyLuaEnvPrivate();
                XLua.NativeAPI.CleanupPapiEnvRef(apis, nativePesapiEnv);
                Instance = null;
                apis = IntPtr.Zero;
                nativePesapiEnv = IntPtr.Zero;
                luaEnvPrivate = IntPtr.Zero;
                disposed = true;
            }
        }
        
        [UnityEngine.Scripting.Preserve]
        public Type GetTypeByString(string className)
        {
            return XLua.TypeUtils.GetType(className);
        }

        public void AddRegisterInfoGetter(Type type, Func<RegisterInfo> getter)
        {
            TypeRegister.AddRegisterInfoGetter(type, getter);
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
