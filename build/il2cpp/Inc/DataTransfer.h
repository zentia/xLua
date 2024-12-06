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

    static std::weak_ptr<int> GetLuaEnvLifeCycleTracker(lua_State* L);

    static void* ms_LuaEnvPrivate;
};
}    // namespace xlua
