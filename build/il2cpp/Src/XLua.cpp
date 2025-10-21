#include <stdint.h>
#include "lua.hpp"

#include <string>
#include "ldebug.h"
#include "lstate.h"

#include <CppObjectMapper.h>
#include "LuaClassRegister.h"
#include "XLua.h"

#include <assert.h>

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
    namespace
    {
        string_buffer s_debug_info;

        int panic(lua_State* L)
        {
            const char* msg = lua_tostring(L, -1);
            if (!msg)
                msg = "unknown error";
#if WITH_BIANQUE
            osgame_log->error(osgame_log->cat.Lua, msg);
#endif            
            return 0;
        }

        const char* get_lua_stacktrace(lua_State* L, int level, int top, string_buffer& buffer, const char* msg)
        {
            if (L == nullptr)
                return nullptr;
            lua_Debug ar;
            buffer.init();
            buffer.append(msg);
            while (level < top && lua_getstack(L, level, &ar))
            {
                if (lua_getinfo(L, "Snl", &ar))
                {
                    if (buffer.append("\n%s:%d", ar.short_src, ar.currentline) == -1)
                        return buffer.data;
                }
                level++;
            }
            return buffer.data;
        }
    } // namespace

    void snapshot_lua_debug_info(lua_State* L, int level, const char* msg)
    {
        get_lua_stacktrace(L, level + 1, level + 2, s_debug_info, msg);
    }

    LuaEnv* LuaEnv::ms_Instance = nullptr;
    int LuaEnv::ms_AuthCode = 0;

    LuaEnv::LuaEnv()
    {
        ms_Instance = this;
        ms_AuthCode++;
        L = luaL_newstate();
        luaopen_xlua(L);

        lua_atpanic(L, panic);
        CppObjectMapper.Initialize(L);
    }

    LuaEnv::~LuaEnv()
    {
        CppObjectMapper.UnInitialize(L);
        lua_close(L);
        L = nullptr;
        ms_Instance = nullptr;
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

PESAPI_MODULE_EXPORT pesapi_func_ptr* GetRegisterApi()
{
    return reg_apis;
}

PESAPI_MODULE_EXPORT pesapi_ffi* GetFFIApi()
{
    return &g_pesapi_ffi;
}

PESAPI_MODULE_EXPORT const char* GetLuaDebugSnapshot()
{
    return xlua::s_debug_info.data;
}
#ifdef __cplusplus
}
#endif
