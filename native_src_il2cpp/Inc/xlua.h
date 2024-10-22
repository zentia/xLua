#ifndef xlua_h
#define xlua_h

#include "luaconf.h"

LUA_API int xlua_gettypeid(lua_State *L, int idx);
LUA_API int xlua_tocsobj_safe(lua_State *L,int index);
LUA_API int xlua_tocsobj_fast (lua_State *L,int index);
LUA_API void *xlua_pushstruct(lua_State *L, unsigned int size, int meta_ref);
LUA_API void xlua_pushcsobj(lua_State *L, int key, int meta_ref, int need_cache, int cache_ref);

#endif