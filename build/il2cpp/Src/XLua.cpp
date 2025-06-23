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

    void sb_init(StringBuffer* sb)
    {
        sb->capacity = 1024;
        sb->size = 0;
        sb->data = (char*)malloc(sb->capacity);
        if (sb->data)
            sb->data[0] = '\0';
    }

    void sb_free(StringBuffer* sb)
    {
        if (sb->data)
            free(sb->data);
        sb->data = nullptr;
        sb->size = sb->capacity = 0;
    }

    int sb_append(StringBuffer* sb, const char* fmt, ...)
    {
        va_list args;
        while (true)
        {
            va_start(args, fmt);
            int needed = vsnprintf(sb->data + sb->size, sb->capacity - sb->size, fmt, args);
            va_end(args);

            if (needed < 0)
                return -1;

            if ((size_t)needed < sb->capacity - sb->size)
            {
                sb->size += needed;
                return 0;
            }

            size_t new_capacity = sb->capacity * 2;
            char* new_data = (char*)realloc(sb->data, new_capacity);
            if (!new_data)
                return -1;
            sb->data = new_data;
            sb->capacity = new_capacity;
        }
    }
    namespace
    {
        char* get_lua_stacktrace(lua_State* L)
        {
            lua_Debug ar;
            int level = 0;
            sb_init(&s_log_buffer);
            if (!s_log_buffer.data)
                return nullptr;
            const char* msg = lua_tostring(L, -1);
            if (!msg)
                msg = "unknown error";
            sb_append(&s_log_buffer, "%s crash traceback:\n", msg);

            while (lua_getstack(L, level, &ar))
            {
                if (lua_getinfo(L, "Snl", &ar))
                {
                    sb_append(&s_log_buffer, "  [%d] %s:%d -- %s [%s]\n",
                        level,
                        ar.short_src,
                        ar.currentline,
                        ar.name ? ar.name : "?",
                        ar.what ? ar.what : "?");
                }
                else
                {
                    sb_append(&s_log_buffer, "  [%d] (failed to get debug info)\n", level);
                }
                level++;
            }
            return s_log_buffer.data;
        }

        int panic(lua_State* L)
        {
            PLog(Exception, get_lua_stacktrace(L));
            return 0;
        }    
    }
    

    void PLog(LogLevel level, const char* data)
    {
        if (data == nullptr)
            return;
        if (level == Log && GLogCallback)
        {
            GLogCallback(data);
        }
        else if (level == Warning && GLogWarningCallback)
        {
            GLogWarningCallback(data);
        }
        else if (level == Error && GLogErrorCallback)
        {
            GLogErrorCallback(data);
        }
        else if (level == Exception && GLogExceptionCallback)
        {
            GLogExceptionCallback(data);
        }
    }

    LuaEnv* LuaEnv::ms_Instance = nullptr;

    LuaEnv::LuaEnv()
    {
        ms_Instance = this;
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
