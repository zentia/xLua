#pragma once

#include <string>

#include "CppObjectMapper.h"
#include "lua.hpp"

typedef void (*LogCallback)(const char* value);

namespace xlua
{
    enum LogLevel : std::uint8_t
    {
        Log     = 0,
        Warning = 1,
        Error   = 2,
        Exception = 3,
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
} // namespace xlua
