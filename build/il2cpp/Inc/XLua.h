#pragma once

#include <string>

#include "CppObjectMapper.h"
#include "lua.hpp"

typedef void (*LogCallback)(const char* value);

#define LUA_LOG(level, ...)                     \
    xlua::sb_init();                            \
    xlua::sb_append(__VA_ARGS__);               \
    xlua::PLog(level)
#define LUA_LOG_ERROR(...) LUA_LOG(xlua::LogLevel::Error, __VA_ARGS__)
#define LUA_LOG_WARNING(...) LUA_LOG(xlua::LogLevel::Warning, __VA_ARGS__)

namespace xlua
{
    enum LogLevel : std::uint8_t
    {
        Log     = 0,
        Warning = 1,
        Error   = 2,
        Exception = 3,
    };

    struct StringBuffer
    {
        char* data;
        size_t size;
        size_t capacity;
    };

    
    void sb_init();
    int sb_append(const char* fmt, ...);
    void get_lua_stacktrace();
    void PLog(LogLevel level);
    typedef void (*LogCallback)(const char* value);
    struct LuaEnv
    {
        LuaEnv();

        ~LuaEnv()
        {
            CppObjectMapper.UnInitialize(L);
            lua_close(L);
            L = nullptr;
            ms_Instance = nullptr;
        }

        lua_State* L;

        xlua::CppObjectMapper CppObjectMapper;
        static LuaEnv* ms_Instance;
        static int ms_AuthCode;
    };
} // namespace xlua
