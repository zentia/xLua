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

MSVC_PRAGMA(warning(push))

struct LUAENV_API LuaFunctionInfo
{
    LuaFunctionInfo() : Name(nullptr), Callback(nullptr)
    {
    }

    LuaFunctionInfo(
        const char* InName, pesapi_callback InCallback, void* Indata = nullptr, const FunctionInfo* InReflectionInfo = nullptr)
        : Name(InName), Callback(reinterpret_cast<pesapi_callback>(InCallback)), Data(Indata), ReflectionInfo(InReflectionInfo)
    {
    }

    const char* Name;
    FunctionCallback Callback;
    void* Data = nullptr;
    const FunctionInfo* ReflectionInfo = nullptr;
};

struct LUAENV_API LuaPropertyInfo
{
    LuaPropertyInfo() : Name(nullptr), Getter(nullptr), Setter(nullptr)
    {
    }

    LuaPropertyInfo(const char* InName, pesapi_callback InGetter, pesapi_callback InSetter, void* InGetterData = nullptr,
        void* InSetterData = nullptr)
        : Name(InName), Getter(InGetter), Setter(InSetter), GetterData(InGetterData), SetterData(InSetterData)
    {
    }

    const char* Name;
    FunctionCallback Getter;
    FunctionCallback Setter;
    void* GetterData = nullptr;
    void* SetterData = nullptr;
};

typedef pesapi_finalize FinalizeFunc;

typedef pesapi_constructor InitializeFunc;

struct LUAENV_API LuaClassDefinition
{
    const void* TypeId;
    const void* SuperTypeId;
    const char* ScriptName;
    InitializeFunc Initialize;
    LuaFunctionInfo* Methods;       // 成员方法
    LuaFunctionInfo* Functions;     // 静态方法
    LuaPropertyInfo* Properties;    // 成员属性
    LuaPropertyInfo* Variables;     // 静态属性
    FinalizeFunc Finalize;
    // int InternalFieldCount;
    NamedFunctionInfo* ConstructorInfos;
    NamedFunctionInfo* MethodInfos;
    NamedFunctionInfo* FunctionInfos;
    NamedPropertyInfo* PropertyInfos;
    NamedPropertyInfo* VariableInfos;
    void* Data = nullptr;
    pesapi_on_native_object_enter OnEnter = nullptr;
    pesapi_on_native_object_exit OnExit = nullptr;
};
MSVC_PRAGMA(warning(pop));

#define LuaClassEmptyDefinition {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}

void LUAENV_API RegisterLuaClass(const LuaClassDefinition& ClassDefinition);

void LUAENV_API SetClassTypeInfo(const void* TypeId, const NamedFunctionInfo* ConstructorInfos,
    const NamedFunctionInfo* MethodInfos, const NamedFunctionInfo* FunctionInfos, const NamedPropertyInfo* PropertyInfos,
    const NamedPropertyInfo* VariableInfos);

void LUAENV_API ForeachRegisterClass(std::function<void(const LuaClassDefinition* ClassDefinition)>);

LUAENV_API const LuaClassDefinition* FindClassByID(const void* TypeId);

LUAENV_API void OnClassNotFound(pesapi_class_not_found_callback Callback);

LUAENV_API const LuaClassDefinition* LoadClassByID(const void* TypeId);

LUAENV_API const LuaClassDefinition* FindCppTypeClassByName(const std::string& Name);

LUAENV_API bool TraceObjectLifecycle(
    const void* TypeId, pesapi_on_native_object_enter OnEnter, pesapi_on_native_object_exit OnExit);

}    // namespace xlua
