#if ENABLE_IL2CPP
using System;
using System.Reflection;

namespace XLua
{
    [UnityEngine.Scripting.Preserve]
    public class LuaEnv : IDisposable
    {
        IntPtr nativeLuaEnv;
        IntPtr nativePesapiEnv;

        // TypeRegister TypeRegister

        Type persistentObjectInfoType;
        MethodInfo objectPoolAddMethodInfo;
        MethodInfo objectPoolRemoveMethodInfo;
        MethodInfo tryLoadTypeMethodInfo;

        XLuaIl2cpp.ObjectPool objectPool = new XLuaIl2cpp.ObjectPool();

        private Func<string, LuaObject> moduleExecutor;

        ILoader loader;

        public LuaEnv() 
        {
            XLuaIl2cpp.NativeAPI.SetLogCallback(XLuaIl2cpp.NativeAPI.Log);
            XLuaIl2cpp.NativeAPI.InitialXLua(XLuaIl2cpp.NativeAPI.GetPesapiImpl());
            tryLoadTypeMethodInfo = typeof(TypeRegister).GetMethod("RegisterNoThrow");
            XLuaIl2cpp.NativeAPI.SetRegisterNoThrow(tryLoadTypeMethodInfo);

            persistentObjectInfoType = typeof(XLua.LuaTable);
            XLuaIl2cpp.NativeAPI.SetGlobalType_LuaTable(typeof(LuaTable));
        }
        
        public void Dispose()
        {

        }

        public virtual void Dispose(bool dispose)
        {
            
        }
    }
}
#endif
