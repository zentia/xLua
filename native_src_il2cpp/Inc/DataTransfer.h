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

    FORCEINLINE static void* GetLuaEnvPrivate()
    {
        return ms_LuaEnvPrivate;
    }

    FORCEINLINE static void SetLuaEnvPrivate(void* PrivateData)
    {
        ms_LuaEnvPrivate = PrivateData;
    }

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

    static void* ms_LuaEnvPrivate;
};
}    // namespace xlua
