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
    static StringBuffer s_log_buffer;

    void sb_init()
    {
        s_log_buffer.capacity = 1024;
        s_log_buffer.size = 0;
        s_log_buffer.data = (char*) malloc(s_log_buffer.capacity);
        if (s_log_buffer.data)
            s_log_buffer.data[0] = '\0';
    }

    void sb_free()
    {
        if (s_log_buffer.data)
            free(s_log_buffer.data);
        s_log_buffer.data = nullptr;
        s_log_buffer.size = s_log_buffer.capacity = 0;
    }

    int sb_append(const char* fmt, ...)
    {
        va_list args;
        while (true)
        {
            va_start(args, fmt);
            int needed = vsnprintf(s_log_buffer.data + s_log_buffer.size, s_log_buffer.capacity - s_log_buffer.size, fmt, args);
            va_end(args);

            if (needed < 0)
                return -1;

            if ((size_t) needed < s_log_buffer.capacity - s_log_buffer.size)
            {
                s_log_buffer.size += needed;
                return 0;
            }

            size_t new_capacity = s_log_buffer.capacity * 2;
            char* new_data = (char*) realloc(s_log_buffer.data, new_capacity);
            if (!new_data)
                return -1;
            s_log_buffer.data = new_data;
            s_log_buffer.capacity = new_capacity;
        }
    }

    void get_lua_stacktrace()
    {
        lua_Debug ar;
        int level = 0;
        LuaEnv* env = LuaEnv::ms_Instance;
        if (env == nullptr)
            return;
        lua_State* L = env->L;
        if (L == nullptr)
            return;
        while (lua_getstack(L, level, &ar))
        {
            if (lua_getinfo(L, "Snl", &ar))
            {
                sb_append("\n%s:%d", ar.short_src, ar.currentline);
            }
            level++;
        }
    }

    namespace
    {
        
        int panic(lua_State* L)
        {
            const char* msg = lua_tostring(L, -1);
            if (!msg)
                msg = "unknown error";
            LUA_LOG_ERROR(msg);
            return 0;
        }    
    }
    

    void PLog(LogLevel level)
    {
        if (s_log_buffer.data == nullptr)
            return;
        if (level == Log && GLogCallback)
        {
            GLogCallback(s_log_buffer.data);
        }
        else if (level == Warning && GLogWarningCallback)
        {
            GLogWarningCallback(s_log_buffer.data);
        }
        else if (level == Error && GLogErrorCallback)
        {
            GLogErrorCallback(s_log_buffer.data);
        }
        else if (level == Exception && GLogExceptionCallback)
        {
            GLogExceptionCallback(s_log_buffer.data);
        }
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

    PESAPI_MODULE_EXPORT const char* GetLuaStackTrace()
    {
        xlua::sb_init();
        xlua::get_lua_stacktrace();
        return xlua::s_log_buffer.data;
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
