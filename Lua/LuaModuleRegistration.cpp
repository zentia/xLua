#include "UnityPrefix.h"

#define UNITY_MODULE_HAS_INITIALIZE_CLEANUP 1

#include "Runtime/Modules/ModuleRegistration.h"

#define UNITY_MODULE_NAME Lua
#define UNITY_MODULE_INCLUDE "Modules/Lua/LuaModule.inc.h"
#include "Runtime/Modules/ModuleTemplate.inc.h"
#undef UNITY_MODULE_NAME
#undef UNITY_MODULE_INCLUDE

void InitializeLuaModule();
void CleanupLuaModule();

UNITY_MODULE_INITIALIZE(Lua)
{
    InitializeLuaModule();
}

UNITY_MODULE_CLEANUP(Lua)
{
    CleanupLuaModule();
}