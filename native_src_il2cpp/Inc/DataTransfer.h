/*
 * Tencent is pleased to support the open source community by making XLua available.
 * Copyright (C) 2020 THL A29 Limited, a Tencent company.  All rights reserved.
 * XLua is licensed under the BSD 3-Clause License, except for the third-party components listed in the file 'LICENSE' which may
 * be subject to their corresponding license terms. This file is subject to the terms and conditions defined in file 'LICENSE',
 * which is part of this source code package.
 */

#pragma once

#include "LuaClassRegister.h"
#include "DataTransfer.h"

#include "lua.hpp"
#include "xlua.h"

#if !defined(MAPPER_ISOLATE_DATA_POS)
#define MAPPER_STATE_DATA_POS "mapper_state_data_pos"
#endif
#if !defined(BACKENDENV_DATA_POS)
#define BACKENDENV_DATA_POS 1
#endif
#if !defined(PESAPI_PRIVATE_DATA_POS_IN_STATE)
#define PESAPI_PRIVATE_DATA_POS_IN_STATE "pesapi_private_data_pos_in_state"
#endif
#define RELEASED_UOBJECT ((UObject*) 12)
#define RELEASED_UOBJECT_MEMBER ((void*) 12)

#include <sstream>

namespace xlua
{
template <typename T, typename FT, typename = void>
struct TOuterLinker
{
    inline static void Link(lua_State* L, int Outer, int Inner)
    {
    }
};

inline void LinkOuterImpl(lua_State* L, int Outer, int Inner)
{
}

class LUAENV_API DataTransfer
{
public:
    template <typename T>
    FORCEINLINE static T* GetPointerFast(lua_State* L, int Index)
    {
        return xlua_tocsobj_fast(L, Index);
    }

    template <typename T>
    FORCEINLINE static T* GetPointerFast(lua_State* L)
    {
        return xlua_tocsobj_fast(L, 1);
    }

    template <typename T>
    FORCEINLINE static T* GetPointer(lua_State* L, int Index = 0)
    {
        return xlua_tocsobj_safe(L, Index);
    }

    // 替代 Object->SetAlignedPointerInInternalField(Index, Ptr);
    FORCEINLINE static void SetPointer(lua_State* L, void* Object, const void* Ptr, int Index)
    {
    }

    FORCEINLINE static void SetPointer(void* Object, const void* Ptr, int Index)
    {
    }

    template <typename T>
    FORCEINLINE static T* StateData(lua_State* L)
    {
        lua_pushlightuserdata(L, (void*) MAPPER_STATE_DATA_POS);
        lua_gettable(L, LUA_REGISTRYINDEX);
        T* data = (T*) lua_touserdata(L, -1);
        lua_pop(L, 1);
        return data;
    }

    FORCEINLINE static void* GetStatePrivateData(lua_State* L)
    {
        lua_pushlightuserdata(L, (void*) PESAPI_PRIVATE_DATA_POS_IN_STATE);
        lua_gettable(L, LUA_REGISTRYINDEX);
        void* data = lua_touserdata(L, -1);
        lua_pop(L, 1);
        return data;
    }

    FORCEINLINE static void SetStatePrivateData(lua_State* L, void* PrivateData)
    {
        lua_pushlightuserdata(L, (void*) PESAPI_PRIVATE_DATA_POS_IN_STATE);
        lua_pushlightuserdata(L, (void*) PrivateData);
        lua_settable(L, LUA_REGISTRYINDEX);
    }

    static int FindOrAddCData(lua_State* L, const void* TypeId, const void* Ptr, bool PassByPointer);

    static bool IsInstanceOf(lua_State* L, const void* TypeId, int ObjectIndex);

    static void UnRef(lua_State* L, int Ref);

    static void UpdateRef(lua_State* L, int Outer, int Value);

    static std::weak_ptr<int> GetLuaEnvLifeCycleTracker(lua_State* L);

    template <typename T1, typename T2>
    FORCEINLINE static void LinkOuter(lua_State* L, void* Outer, void* Inner)
    {
        TOuterLinker<T1, T2>::Link(Context, Outer, Inner);
    }

    FORCEINLINE static void ThrowException(lua_State* L, const char* Message)
    {
        luaL_error(L, "%s", Message);
    }

    FORCEINLINE static std::string ExceptionToString(lua_State* L, int oldTop)
    {
        return std::string();
    }

    template <typename T>
    FORCEINLINE void PushByType(lua_State* L, T v)
    {
    }
};
}    // namespace xlua
