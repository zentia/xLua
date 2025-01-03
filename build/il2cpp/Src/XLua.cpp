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

} // namespace xlua

extern pesapi_func_ptr reg_apis[];

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
    xlua::GLogCallback        = Log;
    xlua::GLogWarningCallback = LogWarning;
    xlua::GLogErrorCallback   = LogError;
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
