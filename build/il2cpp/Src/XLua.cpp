#ifdef __cplusplus
extern "C"
{
#endif
#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"
#ifdef __cplusplus
}
#endif
#include <string.h>
#include <stdint.h>
#include "i64lib.h"

#if USING_LUAJIT
#include "lj_obj.h"
#else
#include "lstate.h"
#endif

#include <string>
#include <vector>
#include <thread>
#include <mutex>

#include "XLua.h"
#include "LuaClassRegister.h"
#include <CppObjectMapper.h>

#include <chrono>
using namespace std::chrono;

#define GetObjectData(Value, Type) ((Type*) (((uint8_t*) Value) + GUnityExports.SizeOfRuntimeObject))

struct PersistentObjectInfo
{
    PersistentObjectInfo* EnvInfo;
    void* LuaObject;
    std::weak_ptr<int> LuaEnvLifeCycleTracker;
};
namespace xlua
{

LogCallback GLogCallback = nullptr;
LogCallback GLogWarningCallback = nullptr;
LogCallback GLogErrorCallback = nullptr;

void PLog(LogLevel Level, const std::string Fmt, ...)
{
    static char SLogBuffer[1024];
    va_list list;
    va_start(list, Fmt);
    vsnprintf(SLogBuffer, sizeof(SLogBuffer), Fmt.c_str(), list);
    va_end(list);

    if (Level == Log && GLogCallback)
    {
        GLogCallback(SLogBuffer);
    }
    else if (Level == Warning && GLogWarningCallback)
    {
        GLogWarningCallback(SLogBuffer);
    }
    else if (Level == Error && GLogErrorCallback)
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

}    // namespace xlua

extern pesapi_func_ptr reg_apis[];

#ifdef __cplusplus
extern "C"
{
#endif

    xlua::LuaEnv* CreateNativeLuaEnv()
    {
        return new xlua::LuaEnv();
    }

    lua_State* GetLuaState(xlua::LuaEnv* luaEnv)
    {
        return luaEnv->L;
    }

    void DestroyNativeLuaEnv(xlua::LuaEnv* luaEnv)
    {
        delete luaEnv;
    }

    void SetLogCallback(xlua::LogCallback Log, LogCallback LogWarning, LogCallback LogError)
    {
        xlua::GLogCallback = Log;
        xlua::GLogWarningCallback = LogWarning;
        xlua::GLogErrorCallback = LogError;
    }

    pesapi_env_ref GetPapiEnvRef(xlua::LuaEnv* luaEnv)
    {
        lua_State* L = luaEnv->L;

        auto env = reinterpret_cast<pesapi_env>(L);
        return g_pesapi_ffi.create_env_ref(env);
    }

    pesapi_ffi* GetFFIApi()
    {
        return &g_pesapi_ffi;
    }

    pesapi_func_ptr* GetRegisterApi()
    {
        return reg_apis;
    }
#ifdef __cplusplus
}
#endif
