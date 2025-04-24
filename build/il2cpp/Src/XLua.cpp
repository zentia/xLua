#include <stdint.h>
#include "lua.hpp"

#include "lstate.h"

#include <string>

#include <CppObjectMapper.h>
#include "LuaClassRegister.h"
#include "XLua.h"

#define GetObjectData(Value, Type) ((Type*)(((uint8_t*)Value) + GUnityExports.SizeOfRuntimeObject))

extern "C" int luaopen_xlua(lua_State* L);

struct PersistentObjectInfo
{
    PersistentObjectInfo* EnvInfo;
    void* LuaObject;
    std::weak_ptr<int> LuaEnvLifeCycleTracker;
};
namespace xlua
{

    LogCallback GLogCallback        = nullptr;
    LogCallback GLogWarningCallback = nullptr;
    LogCallback GLogErrorCallback   = nullptr;
    LogCallback GLogExceptionCallback = nullptr;

    void PLog(LogLevel level, const std::string Fmt, ...)
    {
        static char SLogBuffer[1024];
        va_list list;
        va_start(list, Fmt);
        vsnprintf(SLogBuffer, sizeof(SLogBuffer), Fmt.c_str(), list);
        va_end(list);

        if (level == Log && GLogCallback)
        {
            GLogCallback(SLogBuffer);
        }
        else if (level == Warning && GLogWarningCallback)
        {
            GLogWarningCallback(SLogBuffer);
        }
        else if (level == Error && GLogErrorCallback)
        {
            GLogErrorCallback(SLogBuffer);
        }
    }
    LuaEnv::LuaEnv()
    {
        L = luaL_newstate();
        luaopen_xlua(L);
        CppObjectMapper.Initialize(L);
    }

} // namespace xlua

extern pesapi_func_ptr reg_apis[];


#ifdef __cplusplus
extern "C" {
#endif
    PESAPI_MODULE_EXPORT xlua::LuaEnv* CreateNativeLuaEnv()
    {
        return new xlua::LuaEnv();
    }

    PESAPI_MODULE_EXPORT lua_State* GetLuaState(xlua::LuaEnv* luaEnv)
    {
        return luaEnv->L;
    }

    PESAPI_MODULE_EXPORT void DestroyNativeLuaEnv(xlua::LuaEnv* luaEnv)
    {
        delete luaEnv;
    }

    PESAPI_MODULE_EXPORT pesapi_env_ref GetPapiEnvRef(xlua::LuaEnv* luaEnv)
    {
        lua_State* L = luaEnv->L;

        auto env = reinterpret_cast<pesapi_env>(L);
        return g_pesapi_ffi.create_env_ref(env);
    }

    PESAPI_MODULE_EXPORT void SetLogCallback(xlua::LogCallback Log, xlua::LogCallback LogWarning, xlua::LogCallback LogError, xlua::LogCallback logException)
    {
        xlua::GLogCallback = Log;
        xlua::GLogWarningCallback = LogWarning;
        xlua::GLogErrorCallback = LogError;
        xlua::GLogExceptionCallback = logException;
    }

    PESAPI_MODULE_EXPORT pesapi_func_ptr* GetRegisterApi()
    {
        return reg_apis;
    }

    PESAPI_MODULE_EXPORT pesapi_ffi* GetFFIApi()
    {
        return &g_pesapi_ffi;
    }
#ifdef __cplusplus
}
#endif
