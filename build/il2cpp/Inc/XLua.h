#pragma once

#include <string>

#include "CppObjectMapper.h"
#include "pesapi.h"

typedef void (*LogCallback)(const char* value);

namespace xlua
{
void Log(const std::string Fmt, ...);
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
#ifdef __cplusplus
extern "C"
{
#endif
    LUA_API int lua_setfenv(lua_State* L, int idx);
    LUA_API void luaopen_xlua(lua_State* L);
    LUA_API pesapi_ffi* GetFFIApi();
    LUA_API xlua::LuaEnv* CreateNativeLuaEnv();
    LUA_API lua_State* GetLuaState(xlua::LuaEnv* luaEnv);
    LUA_API void DestroyNativeLuaEnv(xlua::LuaEnv* luaEnv);
    LUA_API void SetLogCallback(xlua::LogCallback Log);
    LUA_API pesapi_env_ref GetPapiEnvRef(xlua::LuaEnv* luaEnv);
    LUA_API pesapi_ffi* GetFFIApi();
    LUA_API pesapi_func_ptr* GetRegisterApi();
#ifdef __cplusplus
}
#endif