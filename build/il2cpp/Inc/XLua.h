#pragma once

#include <string>

#include "CppObjectMapper.h"
#include "lua.hpp"

typedef void (*LogCallback)(const char* value);

#define LUA_LOG(level, fmt, ...)                            \
    xlua::sb_init(&xlua::s_log_buffer);                     \
    xlua::sb_append(&xlua::s_log_buffer, fmt, __VA_ARGS__); \
    xlua::PLog(level, xlua::s_log_buffer.data);

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

    static StringBuffer s_log_buffer;
    void sb_init(StringBuffer* sb);
    int sb_append(StringBuffer* sb, const char* fmt, ...);
    void PLog(LogLevel level, const char* data);
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
