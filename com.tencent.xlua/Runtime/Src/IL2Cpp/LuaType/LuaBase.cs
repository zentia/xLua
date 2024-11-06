#if ENABLE_IL2CPP
#if USE_UNI_LUA
using LuaAPI = UniLua.Lua;
using RealStatePtr = UniLua.ILuaState;
using LuaCSFunction = UniLua.CSharpFunctionDelegate;
#else
using LuaAPI = XLua.LuaDLL.Lua;
using RealStatePtr = System.IntPtr;
using LuaCSFunction = XLua.LuaDLL.lua_CSFunction;
#endif

using System;

namespace XLua
{
    public abstract class LuaBase : IDisposable
    {
        IntPtr apis; // PObjectRefInfo first ptr
        IntPtr valuePtr;
        IntPtr nativeLuaEnv;

        [MethodImpl(MethodImplOptions.InternalCall)]
        object GetLuaObjectValue(IntPtr apis, string key, Type resultType)
        {
            throw new NotImplementedException();
        }
        protected bool disposed;
        public readonly int luaReference;
        protected readonly LuaEnv luaEnv;

#if UNITY_EDITOR || XLUA_GENERAL
        protected int _errorFuncRef { get { return luaEnv.errorFuncRef; } }
        protected RealStatePtr _L { get { return luaEnv.L; } }
        protected ObjectTranslator _translator { get { return luaEnv.translator; } }
#endif

        public LuaBase(int reference, LuaEnv luaenv)
        {
            luaReference = reference;
            luaEnv = luaenv;
        }

        ~LuaBase()
        {
            Dispose(false);
            XLuaIl2cpp.NativeAPI.AddPendingKillScriptObjects(nativeLuaEnv, valueRef);
        }

        public void Dispose()
        {
            Dispose(true);
            GC.SuppressFinalize(this);
        }

        public virtual void Dispose(bool disposeManagedResources)
        {
            if (!disposed)
            {
                if (luaReference != 0)
                {
#if THREAD_SAFE || HOTFIX_ENABLE
                    lock (luaEnv.luaEnvLock)
                    {
#endif
                    bool is_delegate = this is DelegateBridgeBase;
                    if (disposeManagedResources)
                    {
                        luaEnv.translator.ReleaseLuaBase(luaEnv.L, luaReference, is_delegate);
                    }
                    else //will dispse by LuaEnv.GC
                    {
                        luaEnv.equeueGCAction(new LuaEnv.GCAction { Reference = luaReference, IsDelegate = is_delegate });
                    }
#if THREAD_SAFE || HOTFIX_ENABLE
                    }
#endif
                }
                disposed = true;
            }
        }

        public override bool Equals(object o)
        {
            if (o != null && this.GetType() == o.GetType())
            {
#if THREAD_SAFE || HOTFIX_ENABLE
                lock (luaEnv.luaEnvLock)
                {
#endif
                LuaBase rhs = (LuaBase)o;
                var L = luaEnv.L;
                if (L != rhs.luaEnv.L)
                    return false;
                int top = LuaAPI.lua_gettop(L);
                LuaAPI.lua_getref(L, rhs.luaReference);
                LuaAPI.lua_getref(L, luaReference);
                int equal = LuaAPI.lua_rawequal(L, -1, -2);
                LuaAPI.lua_settop(L, top);
                return (equal != 0);
#if THREAD_SAFE || HOTFIX_ENABLE
                }
#endif
            }
            else return false;
        }

        public override int GetHashCode()
        {
            LuaAPI.lua_getref(luaEnv.L, luaReference);
            var pointer = LuaAPI.lua_topointer(luaEnv.L, -1);
            LuaAPI.lua_pop(luaEnv.L, 1);
            return pointer.ToInt32();
        }

        internal virtual void push(RealStatePtr L)
        {
            LuaAPI.lua_getref(L, luaReference);
        }
    }
}
#endif