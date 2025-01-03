#include "UnityPrefix.h"

#include "Lua_Bindings.h"

extern pesapi_func_ptr engine_apis[];

void* Lua_Bindings::GetEngineAPI()
{
    return engine_apis;
}