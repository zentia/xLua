#if !ENABLE_IL2CPP || !XLUA_IL2CPP
using LuaAPI = XLua.LuaDLL.Lua;
using LuaCSFunction = XLua.LuaDLL.lua_CSFunction;
using System;
using System.Collections.Generic;

namespace XLua
{
    public class LuaEnv : LuaEnvBase
    {
        public const string CSHARP_NAMESPACE = "xlua_csharp_namespace";
        public const string MAIN_SHREAD = "xlua_main_thread";

        public ObjectTranslator translator;

        public int errorFuncRef = -1;

        const int LIB_VERSION_EXPECT = 105;

        public LuaEnv(Type bridgeType = null, Type objectTranslator = null)
        {
            UnityEngine.Debug.Log("Default XLua Env");
            if (LuaAPI.xlua_get_lib_version() != LIB_VERSION_EXPECT)
            {
                throw new InvalidProgramException("wrong lib version expect:"
                    + LIB_VERSION_EXPECT + " but got:" + LuaAPI.xlua_get_lib_version());
            }
            LuaIndexes.LUA_REGISTRYINDEX = LuaAPI.xlua_get_registry_index();
            Init();

            if (objectTranslator != null)
            {
                translator = Activator.CreateInstance(objectTranslator, this, rawL, bridgeType) as ObjectTranslator;
            }
            else
            {
                translator = new ObjectTranslator(this, rawL, bridgeType);
            }
            translator.createFunctionMetatable(rawL);
            translator.OpenLib(rawL);
            ObjectTranslatorPool.Instance.Add(rawL, translator);

            //template engine lib register
            TemplateEngine.LuaTemplate.OpenLib(rawL);

            errorFuncRef = LuaAPI.get_error_func_ref(rawL);

            DoStringWithoutReturnValue(init_xlua, "Init");
            init_xlua = null;

            AddBuildin("CS", StaticLuaCallbacks.LoadCS);

            LuaAPI.lua_newtable(rawL); //metatable of indexs and newindexs functions
            LuaAPI.xlua_pushasciistring(rawL, "__index");
            LuaAPI.lua_pushstdcallcfunction(rawL, StaticLuaCallbacks.MetaFuncIndex);
            LuaAPI.lua_rawset(rawL, -3);

            LuaAPI.xlua_pushasciistring(rawL, Utils.LuaIndexsFieldName);
            LuaAPI.lua_newtable(rawL);
            LuaAPI.lua_pushvalue(rawL, -3);
            LuaAPI.lua_setmetatable(rawL, -2);
            LuaAPI.lua_rawset(rawL, LuaIndexes.LUA_REGISTRYINDEX);

            LuaAPI.xlua_pushasciistring(rawL, Utils.LuaNewIndexsFieldName);
            LuaAPI.lua_newtable(rawL);
            LuaAPI.lua_pushvalue(rawL, -3);
            LuaAPI.lua_setmetatable(rawL, -2);
            LuaAPI.lua_rawset(rawL, LuaIndexes.LUA_REGISTRYINDEX);

            LuaAPI.xlua_pushasciistring(rawL, Utils.LuaClassIndexsFieldName);
            LuaAPI.lua_newtable(rawL);
            LuaAPI.lua_pushvalue(rawL, -3);
            LuaAPI.lua_setmetatable(rawL, -2);
            LuaAPI.lua_rawset(rawL, LuaIndexes.LUA_REGISTRYINDEX);

            LuaAPI.xlua_pushasciistring(rawL, Utils.LuaClassNewIndexsFieldName);
            LuaAPI.lua_newtable(rawL);
            LuaAPI.lua_pushvalue(rawL, -3);
            LuaAPI.lua_setmetatable(rawL, -2);
            LuaAPI.lua_rawset(rawL, LuaIndexes.LUA_REGISTRYINDEX);

            LuaAPI.lua_pop(rawL, 1); // pop metatable of indexs and newindexs functions

            LuaAPI.xlua_pushasciistring(rawL, MAIN_SHREAD);
            LuaAPI.lua_pushthread(rawL);
            LuaAPI.lua_rawset(rawL, LuaIndexes.LUA_REGISTRYINDEX);

            LuaAPI.xlua_pushasciistring(rawL, CSHARP_NAMESPACE);
            if (0 != LuaAPI.xlua_getglobal(rawL, "CS"))
            {
                throw new Exception("get CS fail!");
            }
            LuaAPI.lua_rawset(rawL, LuaIndexes.LUA_REGISTRYINDEX);

#if (!UNITY_WSA || UNITY_EDITOR)
            translator.Alias(typeof(Type), "System.MonoType");
#endif

            if (0 != LuaAPI.xlua_getglobal(rawL, "_G"))
            {
                throw new Exception("get _G fail!");
            }
            translator.Get(rawL, -1, out _G);
            LuaAPI.lua_pop(rawL, 1);

            if (initers != null)
            {
                for (int i = 0; i < initers.Count; i++)
                {
                    initers[i](this, translator);
                }
            }

            translator.CreateEnumerablePairs(rawL);
            translator.CreateArrayMetatable(rawL);
            translator.CreateDelegateMetatable(rawL);
        }

        private static List<Action<LuaEnv, ObjectTranslator>> initers = null;

        public static void AddIniter(Action<LuaEnv, ObjectTranslator> initer)
        {
            if (initers == null)
            {
                initers = new List<Action<LuaEnv, ObjectTranslator>>();
            }
            initers.Add(initer);
        }

        public T LoadString<T>(byte[] chunk, string chunkName = "chunk", LuaTable env = null)
        {
#if THREAD_SAFE || HOTFIX_ENABLE
            lock (luaEnvLock)
            {
#endif
            if (typeof(T) != typeof(LuaFunction) && !typeof(T).IsSubclassOf(typeof(Delegate)))
            {
                throw new InvalidOperationException(typeof(T).Name + " is not a delegate type nor LuaFunction");
            }
            var _L = L;
            int oldTop = LuaAPI.lua_gettop(_L);

            if (LuaAPI.xluaL_loadbuffer(_L, chunk, chunk.Length, chunkName) != 0)
                ThrowExceptionFromError(oldTop);

            if (env != null)
            {
                env.push(_L);
                LuaAPI.lua_setfenv(_L, -2);
            }

            T result = (T)translator.GetObject(_L, -1, typeof(T));
            LuaAPI.lua_settop(_L, oldTop);

            return result;
#if THREAD_SAFE || HOTFIX_ENABLE
            }
#endif
        }

        public T LoadString<T>(string chunk, string chunkName = "chunk", LuaTable env = null)
        {
            byte[] bytes = System.Text.Encoding.UTF8.GetBytes(chunk);
            return LoadString<T>(bytes, chunkName, env);
        }

        public LuaFunction LoadString(string chunk, string chunkName = "chunk", LuaTable env = null)
        {
            return LoadString<LuaFunction>(chunk, chunkName, env);
        }
        // 为了兼容il2cpp模式，这里不支持多返回值，有需求请联系zentiali
        public T DoString<T>(byte[] chunk, string chunkName = "chunk", LuaTable env = null)
        {
#if THREAD_SAFE || HOTFIX_ENABLE
            lock (luaEnvLock)
            {
#endif
            var _L = L;
            int oldTop = LuaAPI.lua_gettop(_L);
            int errFunc = LuaAPI.load_error_func(_L, errorFuncRef);
            if (LuaAPI.xluaL_loadbuffer(_L, chunk, chunk.Length, chunkName) == 0)
            {
                if (env != null)
                {
                    env.push(_L);
                    LuaAPI.lua_setfenv(_L, -2);
                }

                if (LuaAPI.lua_pcall(_L, 0, -1, errFunc) == 0)
                {
                    LuaAPI.lua_remove(_L, errFunc);
                    return translator.popValue<T>(_L, oldTop);
                }
                else
                    ThrowExceptionFromError(oldTop);
            }
            else
                ThrowExceptionFromError(oldTop);

            return default;
#if THREAD_SAFE || HOTFIX_ENABLE
            }
#endif
        }

        public object DoString(byte[] chunk, Type type, string chunkName = "chunk", LuaTable env = null)
        {
#if THREAD_SAFE || HOTFIX_ENABLE
            lock (luaEnvLock)
            {
#endif
            var _L = L;
            int oldTop = LuaAPI.lua_gettop(_L);
            int errFunc = LuaAPI.load_error_func(_L, errorFuncRef);
            if (LuaAPI.xluaL_loadbuffer(_L, chunk, chunk.Length, chunkName) == 0)
            {
                if (env != null)
                {
                    env.push(_L);
                    LuaAPI.lua_setfenv(_L, -2);
                }

                if (LuaAPI.lua_pcall(_L, 0, -1, errFunc) == 0)
                {
                    LuaAPI.lua_remove(_L, errFunc);
                    return translator.popValue(_L, oldTop, type);
                }
                else
                    ThrowExceptionFromError(oldTop);
            }
            else
                ThrowExceptionFromError(oldTop);

            return default;
#if THREAD_SAFE || HOTFIX_ENABLE
            }
#endif
        }

        public void DoStringWithoutReturnValue(byte[] chunk, string chunkName = "chunk", LuaTable env = null)
        {
#if THREAD_SAFE || HOTFIX_ENABLE
            lock (luaEnvLock)
            {
#endif
            var _L = L;
            int oldTop = LuaAPI.lua_gettop(_L);
            int errFunc = LuaAPI.load_error_func(_L, errorFuncRef);
            if (LuaAPI.xluaL_loadbuffer(_L, chunk, chunk.Length, chunkName) == 0)
            {
                if (env != null)
                {
                    env.push(_L);
                    LuaAPI.lua_setfenv(_L, -2);
                }

                if (LuaAPI.lua_pcall(_L, 0, -1, errFunc) == 0)
                {
                    LuaAPI.lua_remove(_L, errFunc);
                }
                else
                    ThrowExceptionFromError(oldTop);
            }
            else
                ThrowExceptionFromError(oldTop);

#if THREAD_SAFE || HOTFIX_ENABLE
            }
#endif
        }

        public LuaFunction DoString(string chunk, string chunkName = "chunk", LuaTable env = null)
        {
            return DoString<LuaFunction>(chunk, chunkName, env);
        }

        //除了LuaEval调用任何地方都需要加入白名单，因为exporter找不到这个类型！
        public T DoString<T>(string chunk, string chunkName = "chunk", LuaTable env = null)
        {
            byte[] bytes = System.Text.Encoding.UTF8.GetBytes(chunk);
            return DoString<T>(bytes, chunkName, env);
        }

        public object DoString(string chunk, Type t, string chunkName = "chunk", LuaTable env = null)
        {
            byte[] bytes = System.Text.Encoding.UTF8.GetBytes(chunk);
            return DoString(bytes, t, chunkName, env);
        }

        public void DoStringWithoutReturnValue(string chunk, string chunkName = "chunk", LuaTable env = null)
        {
            byte[] bytes = System.Text.Encoding.UTF8.GetBytes(chunk);
            DoStringWithoutReturnValue(bytes, chunkName, env);
        }

        public void Alias(Type type, string alias)
        {
            translator.Alias(type, alias);
        }

#if !XLUA_GENERAL
        int last_check_point = 0;

        int max_check_per_tick = 20;

        static bool ObjectValidCheck(object obj)
        {
            return (!(obj is UnityEngine.Object)) || ((obj as UnityEngine.Object) != null);
        }

        Func<object, bool> object_valid_checker = new(ObjectValidCheck);
#endif

        public void Tick()
        {
#if THREAD_SAFE || HOTFIX_ENABLE
            lock (luaEnvLock)
            {
#endif
            var _L = L;
            lock (refQueue)
            {
                while (refQueue.Count > 0)
                {
                    GCAction gca = refQueue.Dequeue();
                    translator.ReleaseLuaBase(_L, gca.Reference, gca.IsDelegate);
                }
            }
#if !XLUA_GENERAL
            last_check_point = translator.objects.Check(last_check_point, max_check_per_tick, object_valid_checker, translator.reverseMap);
#endif
#if THREAD_SAFE || HOTFIX_ENABLE
            }
#endif
        }

        //兼容API
        public void GC()
        {
            Tick();
        }

        public LuaTable NewTable()
        {
#if THREAD_SAFE || HOTFIX_ENABLE
            lock (luaEnvLock)
            {
#endif
            var _L = L;
            int oldTop = LuaAPI.lua_gettop(_L);

            LuaAPI.lua_newtable(_L);
            LuaTable returnVal = (LuaTable)translator.GetObject(_L, -1, typeof(LuaTable));

            LuaAPI.lua_settop(_L, oldTop);
            return returnVal;
#if THREAD_SAFE || HOTFIX_ENABLE
            }
#endif
        }

        private bool disposed = false;

        public bool Disposed => disposed;

        public override void Dispose()
        {
            FullGc();
            System.GC.Collect();
            System.GC.WaitForPendingFinalizers();

            Dispose(true);
            base.Dispose();
            System.GC.Collect();
            System.GC.WaitForPendingFinalizers();
        }

        public void Dispose(bool dispose)
        {
#if THREAD_SAFE || HOTFIX_ENABLE
            lock (luaEnvLock)
            {
#endif
            if (disposed) return;
            Tick();

            if (!translator.AllDelegateBridgeReleased())
            {
                try
                {
                    LuaFunction func = Global.Get<LuaFunction>("print_func_ref_by_csharp");
                    if (func != null)
                    {
                        LuaTable table = NewTable();
                        func.Call(table);
                        for (int i = 0; i < table.Length; i++)
                        {
                            string error = table.Get<string>(i + 1);
                           UnityEngine.Debug.LogErrorFormat("Unreleased C# referenced lua function {0}", error);
                        }
                        table.Dispose();
                    }
                }
                catch (Exception) { }
            }

            ObjectTranslatorPool.Instance.Remove(L);

            translator = null;
            
            disposed = true;
#if THREAD_SAFE || HOTFIX_ENABLE
            }
#endif
        }

        public void ClearDelegateBridge()
        {
            if (translator != null)
            {
                translator.ClearDelegateBridge(rawL);
            }
        }

        public void ThrowExceptionFromError(int oldTop)
        {
#if THREAD_SAFE || HOTFIX_ENABLE
            lock (luaEnvLock)
            {
#endif
            object err = translator.GetObject(L, -1);
            LuaAPI.lua_settop(L, oldTop);

            // A pre-wrapped exception - just rethrow it (stack trace of InnerException will be preserved)
            Exception ex = err as Exception;
            if (ex != null) throw ex;

            // A non-wrapped Lua error (best interpreted as a string) - wrap it and throw it
            if (err == null) err = "Unknown Lua Error";
            throw new LuaException(err.ToString());
#if THREAD_SAFE || HOTFIX_ENABLE
            }
#endif
        }

        internal struct GCAction
        {
            public int Reference;
            public bool IsDelegate;
        }

        Queue<GCAction> refQueue = new();

        internal void equeueGCAction(GCAction action)
        {
            lock (refQueue)
            {
                refQueue.Enqueue(action);
            }
        }

        private string init_xlua = @"
            local metatable = {}
            local rawget = rawget
            local setmetatable = setmetatable
            local import_type = xlua.import_type
            local import_generic_type = xlua.import_generic_type
            local load_assembly = xlua.load_assembly

            function metatable:__index(key)
                local fqn = rawget(self,'.fqn')
                fqn = ((fqn and fqn .. '.') or '') .. key

                local obj = import_type(fqn)

                if obj == nil then
                    -- It might be an assembly, so we load it too.
                    obj = { ['.fqn'] = fqn }
                    setmetatable(obj, metatable)
                elseif obj == true then
                    return rawget(self, key)
                end

                -- Cache this lookup
                rawset(self, key, obj)
                return obj
            end

            function metatable:__newindex()
                error('No such type: ' .. rawget(self,'.fqn'), 2)
            end

            -- A non-type has been called; e.g. foo = System.Foo()
            function metatable:__call(...)
                local n = select('#', ...)
                local fqn = rawget(self,'.fqn')
                if n > 0 then
                    local gt = import_generic_type(fqn, ...)
                    if gt then
                        return rawget(CS, gt)
                    end
                end
                error('No such type: ' .. fqn, 2)
            end

            CS = CS or {}
            setmetatable(CS, metatable)

            typeof = function(t) return t.UnderlyingSystemType end
            cast = xlua.cast
            if not setfenv or not getfenv then
                local function getfunction(level)
                    local info = debug.getinfo(level + 1, 'f')
                    return info and info.func
                end

                function setfenv(fn, env)
                  if type(fn) == 'number' then fn = getfunction(fn + 1) end
                  local i = 1
                  while true do
                    local name = debug.getupvalue(fn, i)
                    if name == '_ENV' then
                      debug.upvaluejoin(fn, i, (function()
                        return env
                      end), 1)
                      break
                    elseif not name then
                      break
                    end

                    i = i + 1
                  end

                  return fn
                end

                function getfenv(fn)
                  if type(fn) == 'number' then fn = getfunction(fn + 1) end
                  local i = 1
                  while true do
                    local name, val = debug.getupvalue(fn, i)
                    if name == '_ENV' then
                      return val
                    elseif not name then
                      break
                    end
                    i = i + 1
                  end
                end
            end

            xlua.getmetatable = function(cs)
                return xlua.metatable_operation(cs)
            end
            xlua.setmetatable = function(cs, mt)
                return xlua.metatable_operation(cs, mt)
            end
            xlua.setclass = function(parent, name, impl)
                impl.UnderlyingSystemType = parent[name].UnderlyingSystemType
                rawset(parent, name, impl)
            end

            local base_mt = {
                __index = function(t, k)
                    local csobj = t['__csobj']
                    local func = csobj['<>xLuaBaseProxy_'..k]
                    return function(_, ...)
                         return func(csobj, ...)
                    end
                end
            }
            base = function(csobj)
                return setmetatable({__csobj = csobj}, base_mt)
            end

            local __print = print

            function print_func_ref_by_csharp(errorArray)
                local registry = debug.getregistry()
                for k, v in pairs(registry) do
                    if type(k) == 'number' and type(v) == 'function' and registry[v] == k then
                        if function_tostring then
                            errorArray[#errorArray + 1] = function_tostring(v)
                        else
                            local info = debug.getinfo(v)
                            errorArray[#errorArray + 1] = string.format('%s:%d', info.short_src, info.linedefined)
                        end
                    end
                end
            end
            ";

        public delegate byte[] CustomLoader(ref string filepath);

        internal List<CustomLoader> customLoaders = new();

        //loader : CustomLoader， filepath参数：（ref类型）输入是require的参数，如果需要支持调试，需要输出真实路径。
        //                        返回值：如果返回null，代表加载该源下无合适的文件，否则返回UTF8编码的byte[]
        public void AddLoader(CustomLoader loader)
        {
            customLoaders.Add(loader);
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

        //The garbage-collector pause controls how long the collector waits before starting a new cycle.
        //Larger values make the collector less aggressive. Values smaller than 100 mean the collector
        //will not wait to start a new cycle. A value of 200 means that the collector waits for the total
        //memory in use to double before starting a new cycle.
        public int GcPause
        {
            get
            {
#if THREAD_SAFE || HOTFIX_ENABLE
                lock (luaEnvLock)
                {
#endif
                int val = LuaAPI.lua_gc(L, LuaGCOptions.LUA_GCSETPAUSE, 200);
                LuaAPI.lua_gc(L, LuaGCOptions.LUA_GCSETPAUSE, val);
                return val;
#if THREAD_SAFE || HOTFIX_ENABLE
                }
#endif
            }
            set
            {
#if THREAD_SAFE || HOTFIX_ENABLE
                lock (luaEnvLock)
                {
#endif
                LuaAPI.lua_gc(L, LuaGCOptions.LUA_GCSETPAUSE, value);
#if THREAD_SAFE || HOTFIX_ENABLE
                }
#endif
            }
        }

        //The step multiplier controls the relative speed of the collector relative to memory allocation.
        //Larger values make the collector more aggressive but also increase the size of each incremental
        //step. Values smaller than 100 make the collector too slow and can result in the collector never
        //finishing a cycle. The default, 200, means that the collector runs at "twice" the speed of memory
        //allocation.
        public int GcStepmul
        {
            get
            {
#if THREAD_SAFE || HOTFIX_ENABLE
                lock (luaEnvLock)
                {
#endif
                int val = LuaAPI.lua_gc(L, LuaGCOptions.LUA_GCSETSTEPMUL, 200);
                LuaAPI.lua_gc(L, LuaGCOptions.LUA_GCSETSTEPMUL, val);
                return val;
#if THREAD_SAFE || HOTFIX_ENABLE
                }
#endif
            }
            set
            {
#if THREAD_SAFE || HOTFIX_ENABLE
                lock (luaEnvLock)
                {
#endif
                LuaAPI.lua_gc(L, LuaGCOptions.LUA_GCSETSTEPMUL, value);
#if THREAD_SAFE || HOTFIX_ENABLE
                }
#endif
            }
        }

        public void FullGc()
        {
#if THREAD_SAFE || HOTFIX_ENABLE
            lock (luaEnvLock)
            {
#endif
            LuaAPI.lua_gc(L, LuaGCOptions.LUA_GCCOLLECT, 0);
#if THREAD_SAFE || HOTFIX_ENABLE
            }
#endif
        }

        public void StopGc()
        {
#if THREAD_SAFE || HOTFIX_ENABLE
            lock (luaEnvLock)
            {
#endif
            LuaAPI.lua_gc(L, LuaGCOptions.LUA_GCSTOP, 0);
#if THREAD_SAFE || HOTFIX_ENABLE
            }
#endif
        }

        public void RestartGc()
        {
#if THREAD_SAFE || HOTFIX_ENABLE
            lock (luaEnvLock)
            {
#endif
            LuaAPI.lua_gc(L, LuaGCOptions.LUA_GCRESTART, 0);
#if THREAD_SAFE || HOTFIX_ENABLE
            }
#endif
        }

        public bool GcStep(int data)
        {
#if THREAD_SAFE || HOTFIX_ENABLE
            lock (luaEnvLock)
            {
#endif
            return LuaAPI.lua_gc(L, LuaGCOptions.LUA_GCSTEP, data) != 0;
#if THREAD_SAFE || HOTFIX_ENABLE
            }
#endif
        }

        public int Memroy
        {
            get
            {
#if THREAD_SAFE || HOTFIX_ENABLE
                lock (luaEnvLock)
                {
#endif
                return LuaAPI.lua_gc(L, LuaGCOptions.LUA_GCCOUNT, 0);
#if THREAD_SAFE || HOTFIX_ENABLE
                }
#endif
            }
        }
    }
}
#endif
