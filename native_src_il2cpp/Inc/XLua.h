#pragma once

#include <string>

typedef void (*LogCallback)(const char* value);

namespace xlua
{
enum LogLevel
{
    Log = 0,
    Wraning = 1,
    Error = 2
};

void PLog(LogLevel Level, const std::string Fmt, ...);

}    // namespace xlua
#ifdef __cplusplus
extern "C"
{
#endif
    LUA_API int lua_setfenv(lua_State* L, int idx);
#ifdef __cplusplus
}
#endif