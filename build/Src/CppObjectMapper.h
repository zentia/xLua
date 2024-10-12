/*
 * Tencent is pleased to support the open source community by making Puerts available.
 * Copyright (C) 2020 THL A29 Limited, a Tencent company.  All rights reserved.
 * Puerts is licensed under the BSD 3-Clause License, except for the third-party components listed in the file 'LICENSE' which may
 * be subject to their corresponding license terms. This file is subject to the terms and conditions defined in file 'LICENSE',
 * which is part of this source code package.
 */

#pragma once

#include "lua.hpp"

#include <map>
#include "LuaClassRegister.h"
#include "ObjectCacheNode.h"
#include "ObjectMapper.h"

typedef struct {
	void* Ptr;
    const void* TypeId;
    bool NeedDelete;
} CppObject;

struct pesapi_callback_info__
{
    lua_State * L;
    int ArgStart; // 0 or 1
    int RetNum;
};

namespace xlua
{
class FCppObjectMapper final : public ICppObjectMapper
{
public:
    void Initialize(lua_State *L);

    int LoadCppType(lua_State *L);

    virtual bool IsInstanceOfCppObject(lua_State *L, const void* TypeId, int ObjectIndex) override;

    virtual std::weak_ptr<int> GetJsEnvLifeCycleTracker() override;

    virtual int FindOrAddCppObject(lua_State *L, const void* TypeId, void* Ptr, bool PassByPointer) override;

    virtual void UnBindCppObject(lua_State *L, LuaClassDefinition* ClassDefinition, void* Ptr) override;

    virtual void BindCppObject(lua_State *L, LuaClassDefinition* ClassDefinition, void* Ptr, bool PassByPointer) override;

    void UnInitialize(lua_State *L);
    
    static FCppObjectMapper* Get(lua_State *L);

private:
    std::map<void*, FObjectCacheNode> CDataCache;

    std::map<const void*, int> TypeIdToMetaMap;

    int PointerConstructor;

    std::map<void*, FinalizeFunc> CDataFinalizeMap;

    std::shared_ptr<int> Ref = std::make_shared<int>(0);
    
    int CacheRef = 0;;
    
    int GetMetaRefOfClass(lua_State *L, const LuaClassDefinition* ClassDefinition);
        
    void BindCppObject(lua_State *L, LuaClassDefinition* ClassDefinition, void* Ptr, bool PassByPointer, FObjectCacheNode* CacheNodePtr);
};

}    // namespace puerts