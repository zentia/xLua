/*
 * Tencent is pleased to support the open source community by making Puerts available.
 * Copyright (C) 2020 THL A29 Limited, a Tencent company.  All rights reserved.
 * Puerts is licensed under the BSD 3-Clause License, except for the third-party components listed in the file 'LICENSE' which may
 * be subject to their corresponding license terms. This file is subject to the terms and conditions defined in file 'LICENSE',
 * which is part of this source code package.
 */

#pragma once

#include "functional"

#define LUAENV_API
#define FORCEINLINE inline
#define UPTRINT uintptr_t

#include <string>

#include "pesapi.h"

#include "TypeInfo.hpp"

namespace xlua
{
typedef pesapi_callback FunctionCallback;

struct LUAENV_API LuaFunctionInfo
{
    const char* Name;
    FunctionCallback Callback;
    void* Data = nullptr;
    const CFunctionInfo* ReflectionInfo = nullptr;
};

struct LUAENV_API LuaPropertyInfo
{
    const char* Name;
    FunctionCallback Getter;
    FunctionCallback Setter;
    void* Data = nullptr;
};

typedef pesapi_finalize FinalizeFunc;

typedef pesapi_constructor InitializeFunc;

struct LUAENV_API LuaClassDefinition
{
    const void* TypeId;
    const void* SuperTypeId;
    const char* ScriptName;
    const char* UETypeName;
    InitializeFunc Initialize;
    LuaFunctionInfo* Methods;       //成员方法
    LuaFunctionInfo* Functions;     //静态方法
    LuaPropertyInfo* Properties;    //成员属性
    LuaPropertyInfo* Variables;     //静态属性
    FinalizeFunc Finalize;
    // int InternalFieldCount;
    NamedFunctionInfo* ConstructorInfos;
    NamedFunctionInfo* MethodInfos;
    NamedFunctionInfo* FunctionInfos;
    NamedPropertyInfo* PropertyInfos;
    NamedPropertyInfo* VariableInfos;
    void* Data = nullptr;
};

#define LuaClassEmptyDefinition                      \
    {                                               \
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 \
    }

void LUAENV_API RegisterLuaClass(const LuaClassDefinition& ClassDefinition);

void LUAENV_API SetClassTypeInfo(const void* TypeId, const NamedFunctionInfo* ConstructorInfos, const NamedFunctionInfo* MethodInfos,
    const NamedFunctionInfo* FunctionInfos, const NamedPropertyInfo* PropertyInfos, const NamedPropertyInfo* VariableInfos);

void LUAENV_API ForeachRegisterClass(std::function<void(const LuaClassDefinition* ClassDefinition)>);

LUAENV_API const LuaClassDefinition* FindClassByID(const void* TypeId);

const LuaClassDefinition* FindCppTypeClassByName(const std::string& Name);

}    // namespace puerts

#define XLUA_MODULE(Name, RegFunc)                 \
    static struct FAutoRegisterFor##Name             \
    {                                                \
        FAutoRegisterFor##Name()                     \
        {                                            \
            xlua::RegisterAddon(#Name, (RegFunc)); \
        }                                            \
    } _AutoRegisterFor##Name
