#pragma once

#include "functional"

#ifdef _WIN32
#define LUAENV_API 
#else
#define LUAENV_API LUA_API
#endif
#ifndef FORCEINLINE
    #define FORCEINLINE inline
#endif
#define UPTRINT uintptr_t

#include <string>

#include "pesapi.h"

#include "TypeInfo.hpp"
#include "lua.hpp"

namespace xlua
{
    typedef pesapi_callback FunctionCallback;

    MSVC_PRAGMA(warning(push))

    struct LuaFunctionInfo
    {
        LuaFunctionInfo()
            : Name(nullptr)
            , Callback(nullptr)
        {
        }

        LuaFunctionInfo(const char* InName, pesapi_callback InCallback, void* Indata = nullptr, const FunctionInfo* InReflectionInfo = nullptr)
            : Name(InName)
            , Callback(reinterpret_cast<pesapi_callback>(InCallback))
            , Data(Indata)
            , ReflectionInfo(InReflectionInfo)
        {
        }

        const char* Name;
        FunctionCallback Callback;
        void* Data                         = nullptr;
        const FunctionInfo* ReflectionInfo = nullptr;
    };

    struct LuaPropertyInfo
    {
        LuaPropertyInfo()
            : Name(nullptr)
            , Getter(nullptr)
            , Setter(nullptr)
        {
        }

        LuaPropertyInfo(const char* InName, pesapi_callback InGetter, pesapi_callback InSetter, void* InGetterData = nullptr, void* InSetterData = nullptr)
            : Name(InName)
            , Getter(InGetter)
            , Setter(InSetter)
            , GetterData(InGetterData)
            , SetterData(InSetterData)
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

    struct LuaClassDefinition
    {
        const void* TypeId;
        const void* SuperTypeId;
        const char* ScriptName;
        InitializeFunc Initialize;
        LuaFunctionInfo* Methods;    // 成员方法
        LuaFunctionInfo* Functions;  // 静态方法
        LuaPropertyInfo* Properties; // 成员属性
        LuaPropertyInfo* Variables;  // 静态属性
        FinalizeFunc Finalize;
        // int InternalFieldCount;
        NamedFunctionInfo* ConstructorInfos;
        NamedFunctionInfo* MethodInfos;
        NamedFunctionInfo* FunctionInfos;
        NamedPropertyInfo* PropertyInfos;
        NamedPropertyInfo* VariableInfos;
        void* Data                            = nullptr;
        pesapi_on_native_object_enter OnEnter = nullptr;
        pesapi_on_native_object_exit OnExit   = nullptr;
        bool dictionary;
        bool enumerable;
        LuaClassDefinition(const void* typeId,
                           const void* superTypeId,
                           const char* scriptName,
                           InitializeFunc initialize,
                           LuaFunctionInfo* methods,
                           LuaFunctionInfo* functions,
                           LuaPropertyInfo* properties,
                           LuaPropertyInfo* variables,
                           FinalizeFunc finalize,
                           NamedFunctionInfo* constructorInfos,
                           NamedFunctionInfo* methodInfos,
                           NamedFunctionInfo* functionInfos,
                           NamedPropertyInfo* propertyInfos,
                           NamedPropertyInfo* variableInfos,
                           void* data,
                           pesapi_on_native_object_enter onEnter,
                           pesapi_on_native_object_exit onExit,
                           bool _dictionary,
                           bool _enumerable)
        {
            TypeId           = typeId;
            SuperTypeId      = superTypeId;
            ScriptName       = scriptName;
            Initialize       = initialize;
            Methods          = methods;
            Functions        = functions;
            Properties       = properties;
            Variables        = variables;
            Finalize         = finalize;
            ConstructorInfos = constructorInfos;
            MethodInfos      = methodInfos;
            FunctionInfos    = functionInfos;
            PropertyInfos    = propertyInfos;
            VariableInfos    = variableInfos;
            Data             = data;
            OnEnter          = onEnter;
            OnExit           = onExit;
            dictionary       = _dictionary;
            enumerable       = _enumerable;
        }
    };
    MSVC_PRAGMA(warning(pop));

#define LuaClassEmptyDefinition \
    xlua::LuaClassDefinition(   \
        nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, false, false)

    LUAENV_API void RegisterLuaClass(const LuaClassDefinition& ClassDefinition);

    void LUAENV_API SetClassTypeInfo(const void* TypeId,
                                     const NamedFunctionInfo* ConstructorInfos,
                                     const NamedFunctionInfo* MethodInfos,
                                     const NamedFunctionInfo* FunctionInfos,
                                     const NamedPropertyInfo* PropertyInfos,
                                     const NamedPropertyInfo* VariableInfos);

    void LUAENV_API ForeachRegisterClass(std::function<void(const LuaClassDefinition* ClassDefinition)>);

    LUAENV_API const LuaClassDefinition* FindClassByID(const void* TypeId);

    LUAENV_API void OnClassNotFound(pesapi_class_not_found_callback Callback);

    LUAENV_API const LuaClassDefinition* LoadClassByID(const void* typeId);

    LUAENV_API const LuaClassDefinition* FindCppTypeClassByName(const std::string& Name);

    LUAENV_API bool TraceObjectLifecycle(const void* TypeId, pesapi_on_native_object_enter OnEnter, pesapi_on_native_object_exit OnExit);

} // namespace xlua
