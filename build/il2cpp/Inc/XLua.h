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
