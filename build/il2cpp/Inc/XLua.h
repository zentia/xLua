#pragma once

#include <string>

#include "CppObjectMapper.h"
#include "pesapi.h"

typedef void (*LogCallback)(const char* value);

namespace xlua
{

enum LogLevel
{
    Log = 0,
    Warning = 1,
    Error = 2,
};

void PLog(LogLevel level, const std::string Fmt, ...);
typedef void (*LogCallback)(const char* value);

struct LuaEnv
{
    LuaEnv();
    

    ~LuaEnv()
    {
        CppObjectMapper.UnInitialize(L);
        lua_close(L);
        L = nullptr;
    }

    lua_State* L;

    xlua::CppObjectMapper CppObjectMapper;
};
}    // namespace xlua

EXTERN_C_START
PESAPI_MODULE_EXPORT int lua_setfenv(lua_State* L, int idx);
PESAPI_MODULE_EXPORT pesapi_ffi* GetFFIApi();
PESAPI_MODULE_EXPORT xlua::LuaEnv* CreateNativeLuaEnv();
PESAPI_MODULE_EXPORT lua_State* GetLuaState(xlua::LuaEnv* luaEnv);
PESAPI_MODULE_EXPORT void DestroyNativeLuaEnv(xlua::LuaEnv* luaEnv);
PESAPI_MODULE_EXPORT void SetLogCallback(xlua::LogCallback Log, xlua::LogCallback Warning, xlua::LogCallback Error);
PESAPI_MODULE_EXPORT pesapi_env_ref GetPapiEnvRef(xlua::LuaEnv* luaEnv);
PESAPI_MODULE_EXPORT pesapi_ffi* GetFFIApi();
PESAPI_MODULE_EXPORT pesapi_func_ptr* GetRegisterApi();
EXTERN_C_END
