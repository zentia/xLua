#pragma once

#include "LuaClassRegister.h"
#include "DataTransfer.h"

#include "lua.hpp"

#if !defined(BACKENDENV_DATA_POS)
#define BACKENDENV_DATA_POS 1
#endif
#if !defined(PESAPI_PRIVATE_DATA_POS_IN_STATE)
#define PESAPI_PRIVATE_DATA_POS_IN_STATE "PESAPI_PRIVATE_DATA_POS_IN_STATE"
#endif
#define RELEASED_UOBJECT ((UObject*) 12)
#define RELEASED_UOBJECT_MEMBER ((void*) 12)

#include <sstream>

namespace xlua
{
class LUAENV_API DataTransfer
{
public:
    FORCEINLINE static void* GetLuaEnvPrivate()
    {
        return ms_LuaEnvPrivate;
    }

    FORCEINLINE static void SetLuaEnvPrivate(void* PrivateData)
    {
        ms_LuaEnvPrivate = PrivateData;
    }

    static bool IsInstanceOf(lua_State* L, const void* TypeId, int ObjectIndex);

    static std::weak_ptr<int> GetLuaEnvLifeCycleTracker(lua_State* L);

    static void* ms_LuaEnvPrivate;
};
}    // namespace xlua
