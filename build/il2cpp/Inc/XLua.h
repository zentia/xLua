#pragma once

#include <string>

#include "CppObjectMapper.h"
#include "lua.hpp"

typedef void (*LogCallback)(const char* value);

#define LUA_LOG(level, fmt, ...)                \
    xlua::sb_init();                            \
    xlua::sb_append(fmt, __VA_ARGS__);          \
    xlua::PLog(level)

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
    char* get_lua_stacktrace(lua_State* L);
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
    };
} // namespace xlua
