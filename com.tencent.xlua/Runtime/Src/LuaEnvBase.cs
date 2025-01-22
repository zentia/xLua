using System;
using XLua.LuaDLL;

namespace XLua
{
    public class LuaEnvBase : IDisposable
    {
        protected IntPtr nativeLuaEnv;

        public IntPtr rawL;

        protected LuaTable _G;

        public IntPtr L
        {
            get
            {
                if (rawL == IntPtr.Zero)
                {
                    throw new InvalidOperationException("this lua env had disposed!");
                }
                return rawL;
            }
        }

        public LuaTable Global
        {
            get
            {
                return _G;
            }
        }

        protected void Init()
        {
            nativeLuaEnv = NativeAPI.CreateNativeLuaEnv();
            rawL = NativeAPI.GetLuaState(nativeLuaEnv);
            Lua.lua_atpanic(rawL, StaticLuaCallbacks.Panic);
            Lua.lua_pushstdcallcfunction(rawL, StaticLuaCallbacks.Print);
            if (0 != Lua.xlua_setglobal(rawL, "print"))
            {
                throw new Exception("call xlua_setglobal fail!");
            }
            AddSearcher(StaticLuaCallbacks.LoadBuiltinLib, -1); // just after the preload searcher
            AddSearcher(StaticLuaCallbacks.LoadFromCustomLoaders, -1);
        }

        public virtual void Dispose()
        {
            if (rawL == IntPtr.Zero)
                return;
            NativeAPI.DestroyNativeLuaEnv(nativeLuaEnv);
            rawL = IntPtr.Zero;
            nativeLuaEnv = IntPtr.Zero;
        }

        private void AddSearcher(lua_CSFunction searcher, int index)
        {
            var _L = L;
            //insert the loader
            Lua.xlua_getloaders(_L);
            if (!Lua.lua_istable(_L, -1))
            {
                throw new Exception("Can not set searcher!");
            }
            uint len = Lua.xlua_objlen(_L, -1);
            index = index < 0 ? (int)(len + index + 2) : index;
            for (int e = (int)len + 1; e > index; e--)
            {
                Lua.xlua_rawgeti(_L, -1, e - 1);
                Lua.xlua_rawseti(_L, -2, e);
            }
            Lua.lua_pushstdcallcfunction(_L, searcher);
            Lua.xlua_rawseti(_L, -2, index);
            Lua.lua_pop(_L, 1);
        }
    }
}
