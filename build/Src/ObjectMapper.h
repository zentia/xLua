/*
 * Tencent is pleased to support the open source community by making Puerts available.
 * Copyright (C) 2020 THL A29 Limited, a Tencent company.  All rights reserved.
 * Puerts is licensed under the BSD 3-Clause License, except for the third-party components listed in the file 'LICENSE' which may
 * be subject to their corresponding license terms. This file is subject to the terms and conditions defined in file 'LICENSE',
 * which is part of this source code package.
 */

#pragma once

#include "LuaClassRegister.h"

#include "lua.hpp"

#include <memory>

namespace xlua
{
class ICppObjectMapper
{
public:
    virtual void BindCppObject(lua_State *L, LuaClassDefinition* ClassDefinition, void* Ptr, bool PassByPointer) = 0;

    virtual void UnBindCppObject(lua_State *L, LuaClassDefinition* ClassDefinition, void* Ptr) = 0;

    virtual int FindOrAddCppObject(lua_State *L, const void* TypeId, void* Ptr, bool PassByPointer) = 0;

    virtual bool IsInstanceOfCppObject(lua_State *L, const void* TypeId, int ObjectIndex) = 0;

    virtual std::weak_ptr<int> GetJsEnvLifeCycleTracker() = 0;

    virtual ~ICppObjectMapper()
    {
    }
};

}    // namespace xlua
