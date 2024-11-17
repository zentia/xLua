#pragma once

#include <string>

typedef void (*LogCallback)(const char* value);

namespace xlua
{
void Log(const std::string Fmt, ...);

}    // namespace xlua
#ifdef __cplusplus
extern "C"
{
#endif
    LUA_API int lua_setfenv(lua_State* L, int idx);
    LUA_API void luaopen_xlua(lua_State* L);
#ifdef __cplusplus
}
#endif