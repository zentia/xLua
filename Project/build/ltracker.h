#pragma once

#include <stdint.h>

// Minimal standalone replacement for the game engine's `ltracker.h`.
// The Lua memory profiler (LUA_MEM_PROFILER) is disabled in this xLua-only
// build, so these are no-op stubs that only need to compile.

static inline void luaT_register_profile(
    void (*add_lua_data)(void* ptr, const char* stack, uint32_t size),
    void (*remove_lua_data)(void* ptr),
    void (*resize_lua_data)(void* ptr, uint32_t size))
{
    (void)add_lua_data;
    (void)remove_lua_data;
    (void)resize_lua_data;
}

static inline const char* luaT_print_stack(void* L)
{
    (void)L;
    return "";
}
