/*
 * Tencent is pleased to support the open source community by making Puerts available.
 * Copyright (C) 2020 THL A29 Limited, a Tencent company.  All rights reserved.
 * Puerts is licensed under the BSD 3-Clause License, except for the third-party components listed in the file 'LICENSE' which may
 * be subject to their corresponding license terms. This file is subject to the terms and conditions defined in file 'LICENSE',
 * which is part of this source code package.
 */

#include "LuaClassRegister.h"
#include <map>
#include <cstring>

namespace xlua
{
template <class T>
static T* PropertyInfoDuplicate(T* Arr)
{
    if (Arr == nullptr)
        return nullptr;
    int Count = 0;
    ;
    while (true)
    {
        if (Arr[Count++].Name == nullptr)
            break;
    }
    T* Ret = new T[Count];
    ::memcpy(Ret, Arr, sizeof(T) * Count);
    return Ret;
}

LuaClassDefinition* LuaClassDefinitionDuplicate(const LuaClassDefinition* ClassDefinition)
{
    auto Ret = new LuaClassDefinition(nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr);
    ::memcpy(Ret, ClassDefinition, sizeof(LuaClassDefinition));
    Ret->Methods = PropertyInfoDuplicate(ClassDefinition->Methods);
    Ret->Functions = PropertyInfoDuplicate(ClassDefinition->Functions);
    Ret->Properties = PropertyInfoDuplicate(ClassDefinition->Properties);
    Ret->Variables = PropertyInfoDuplicate(ClassDefinition->Variables);
    Ret->ConstructorInfos = PropertyInfoDuplicate(ClassDefinition->ConstructorInfos);
    Ret->MethodInfos = PropertyInfoDuplicate(ClassDefinition->MethodInfos);
    Ret->FunctionInfos = PropertyInfoDuplicate(ClassDefinition->FunctionInfos);
    Ret->PropertyInfos = PropertyInfoDuplicate(ClassDefinition->PropertyInfos);
    Ret->VariableInfos = PropertyInfoDuplicate(ClassDefinition->VariableInfos);
    return Ret;
}

void LuaClassDefinitionDelete(LuaClassDefinition* ClassDefinition)
{
    delete[] ClassDefinition->Methods;
    delete[] ClassDefinition->Functions;
    delete[] ClassDefinition->Properties;
    delete[] ClassDefinition->Variables;
    delete[] ClassDefinition->ConstructorInfos;
    delete[] ClassDefinition->MethodInfos;
    delete[] ClassDefinition->FunctionInfos;
    delete[] ClassDefinition->PropertyInfos;
    delete[] ClassDefinition->VariableInfos;
    delete ClassDefinition;
}

class LuaClassRegister
{
public:
    LuaClassRegister();
    ~LuaClassRegister();

    void RegisterClass(const LuaClassDefinition& ClassDefinition);

    void SetClassTypeInfo(const void* TypeId, const NamedFunctionInfo* ConstructorInfos, const NamedFunctionInfo* MethodInfos,
        const NamedFunctionInfo* FunctionInfos, const NamedPropertyInfo* PropertyInfos, const NamedPropertyInfo* VariableInfos);

    void ForeachRegisterClass(std::function<void(const LuaClassDefinition* ClassDefinition)>);

    const LuaClassDefinition* FindClassByID(const void* TypeId);

    void OnClassNotFound(pesapi_class_not_found_callback InCallback)
    {
        ClassNotFoundCallback = InCallback;
    }

    const LuaClassDefinition* LoadClassByID(const void* TypeId)
    {
        if (!TypeId)
        {
            return nullptr;
        }
        auto clsDef = FindClassByID(TypeId);
        if (!clsDef && ClassNotFoundCallback)
        {
            if (!ClassNotFoundCallback(TypeId))
            {
                return nullptr;
            }
            clsDef = FindClassByID(TypeId);
        }
        return clsDef;
    }

    const LuaClassDefinition* FindCppTypeClassByName(const std::string& Name);

private:
    std::map<const void*, LuaClassDefinition*> CDataIdToClassDefinition;
    std::map<std::string, LuaClassDefinition*> CDataNameToClassDefinition;
    pesapi_class_not_found_callback ClassNotFoundCallback = nullptr;
};

LuaClassRegister::LuaClassRegister()
{
}

LuaClassRegister::~LuaClassRegister()
{
    for (auto& KV : CDataIdToClassDefinition)
    {
        LuaClassDefinitionDelete(KV.second);
    }
    CDataIdToClassDefinition.clear();
}

void LuaClassRegister::RegisterClass(const LuaClassDefinition& ClassDefinition)
{
    if (ClassDefinition.TypeId && ClassDefinition.ScriptName)
    {
        auto cd_iter = CDataIdToClassDefinition.find(ClassDefinition.TypeId);
        if (cd_iter != CDataIdToClassDefinition.end())
        {
            LuaClassDefinitionDelete(cd_iter->second);
        }
        CDataIdToClassDefinition[ClassDefinition.TypeId] = LuaClassDefinitionDuplicate(&ClassDefinition);
        std::string SN = ClassDefinition.ScriptName;
        CDataNameToClassDefinition[SN] = CDataIdToClassDefinition[ClassDefinition.TypeId];
        CDataIdToClassDefinition[ClassDefinition.TypeId]->ScriptName = CDataNameToClassDefinition.find(SN)->first.c_str();
    }
}

void LuaClassRegister::SetClassTypeInfo(const void* TypeId, const NamedFunctionInfo* ConstructorInfos,
    const NamedFunctionInfo* MethodInfos, const NamedFunctionInfo* FunctionInfos, const NamedPropertyInfo* PropertyInfos,
    const NamedPropertyInfo* VariableInfos)
{
    auto ClassDef = const_cast<LuaClassDefinition*>(FindClassByID(TypeId));
    if (ClassDef)
    {
        ClassDef->ConstructorInfos = PropertyInfoDuplicate(const_cast<NamedFunctionInfo*>(ConstructorInfos));
        ClassDef->MethodInfos = PropertyInfoDuplicate(const_cast<NamedFunctionInfo*>(MethodInfos));
        ClassDef->FunctionInfos = PropertyInfoDuplicate(const_cast<NamedFunctionInfo*>(FunctionInfos));
        ClassDef->PropertyInfos = PropertyInfoDuplicate(const_cast<NamedPropertyInfo*>(PropertyInfos));
        ClassDef->VariableInfos = PropertyInfoDuplicate(const_cast<NamedPropertyInfo*>(VariableInfos));
    }
}

const LuaClassDefinition* LuaClassRegister::FindClassByID(const void* TypeId)
{
    auto Iter = CDataIdToClassDefinition.find(TypeId);
    if (Iter == CDataIdToClassDefinition.end())
    {
        return nullptr;
    }
    else
    {
        return Iter->second;
    }
}

const LuaClassDefinition* LuaClassRegister::FindCppTypeClassByName(const std::string& Name)
{
    auto Iter = CDataNameToClassDefinition.find(Name);
    if (Iter == CDataNameToClassDefinition.end())
    {
        return nullptr;
    }
    else
    {
        return Iter->second;
    }
}

void LuaClassRegister::ForeachRegisterClass(std::function<void(const LuaClassDefinition* ClassDefinition)> Callback)
{
    for (auto& KV : CDataNameToClassDefinition)
    {
        Callback(KV.second);
    }
}

LuaClassRegister* GetLuaClassRegister()
{
    static LuaClassRegister S_LuaClassRegister;
    return &S_LuaClassRegister;
}

void RegisterLuaClass(const LuaClassDefinition& ClassDefinition)
{
    GetLuaClassRegister()->RegisterClass(ClassDefinition);
}

void SetClassTypeInfo(const void* TypeId, const NamedFunctionInfo* ConstructorInfos, const NamedFunctionInfo* MethodInfos,
    const NamedFunctionInfo* FunctionInfos, const NamedPropertyInfo* PropertyInfos, const NamedPropertyInfo* VariableInfos)
{
    GetLuaClassRegister()->SetClassTypeInfo(TypeId, ConstructorInfos, MethodInfos, FunctionInfos, PropertyInfos, VariableInfos);
}

void ForeachRegisterClass(std::function<void(const LuaClassDefinition* ClassDefinition)> Callback)
{
    GetLuaClassRegister()->ForeachRegisterClass(Callback);
}

const LuaClassDefinition* FindClassByID(const void* TypeId)
{
    return GetLuaClassRegister()->FindClassByID(TypeId);
}

const LuaClassDefinition* LoadClassByID(const void* TypeId)
{
    return GetLuaClassRegister()->LoadClassByID(TypeId);
}

void OnClassNotFound(pesapi_class_not_found_callback Callback)
{
    GetLuaClassRegister()->OnClassNotFound(Callback);
}

const LuaClassDefinition* FindCppTypeClassByName(const std::string& Name)
{
    return GetLuaClassRegister()->FindCppTypeClassByName(Name);
}

bool TraceObjectLifecycle(const void* TypeId, pesapi_on_native_object_enter OnEnter, pesapi_on_native_object_exit OnExit)
{
    if (auto clsDef = const_cast<LuaClassDefinition*>(GetLuaClassRegister()->FindClassByID(TypeId)))
    {
        clsDef->OnEnter = OnEnter;
        clsDef->OnExit = OnExit;
        return true;
    }
    return false;
}
}    // namespace xlua
