﻿// Auto Gen

#include "il2cpp-api.h"
#include "il2cpp-class-internals.h"
#include "il2cpp-object-internals.h"
#include "vm/InternalCalls.h"
#include "vm/Object.h"
#include "vm/Array.h"
#include "vm/Runtime.h"
#include "vm/Reflection.h"
#include "vm/MetadataCache.h"
#include "vm/Field.h"
#include "vm/GenericClass.h"
#include "vm/Thread.h"
#include "vm/Method.h"
#include "vm/Parameter.h"
#include "vm/Image.h"
#include "utils/StringUtils.h"
#include "gc/WriteBarrier.h"
#include "pesapi.h"
#include "TDataTrans.h"
#include "XLuaValueType.h"

namespace xlua
{
// Boolean Invoke(System.String) declare in System.Predicate`1[System.String]
static bool b_bs(void* target, Il2CppString* p0, MethodInfo* method) {
    // PLog("Running b_bs");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    AutoValueScope valueScope(apis, env);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy"));
        return {};
    }
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
    converter::Converter<Il2CppString*>::toScript(apis, env, p0)
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        return {};
    }
             
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);

    return ret;

}
// Int32 Invoke(IntPtr) declare in XLua.LuaDLL.lua_CSFunction
static int32_t b_i4p(void* target, void* p0, MethodInfo* method) {
    // PLog("Running b_i4p");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    AutoValueScope valueScope(apis, env);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy"));
        return {};
    }
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
    apis->create_binary(env, p0, 0)
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        return {};
    }
             
    // LuaValToCSVal P any
    int32_t ret = converter::Converter<int32_t>::toCpp(apis, env, luaret);

    return ret;

}
// Int32 Invoke(System.String, System.String) declare in System.Comparison`1[System.String]
static int32_t b_i4ss(void* target, Il2CppString* p0, Il2CppString* p1, MethodInfo* method) {
    // PLog("Running b_i4ss");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    AutoValueScope valueScope(apis, env);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy"));
        return {};
    }
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
    converter::Converter<Il2CppString*>::toScript(apis, env, p0),
            converter::Converter<Il2CppString*>::toScript(apis, env, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        return {};
    }
             
    // LuaValToCSVal P any
    int32_t ret = converter::Converter<int32_t>::toCpp(apis, env, luaret);

    return ret;

}
// Single Invoke() declare in System.Func`1[System.Single]
static float b_r4(void* target, MethodInfo* method) {
    // PLog("Running b_r4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    AutoValueScope valueScope(apis, env);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy"));
        return {};
    }
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value *argv = nullptr;
    auto luaret = apis->call_function(env, func, 0, 0, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        return {};
    }
             
    // LuaValToCSVal P any
    float ret = converter::Converter<float>::toCpp(apis, env, luaret);

    return ret;

}
// Void Invoke() declare in NullEventHandler
static void b_v(void* target, MethodInfo* method) {
    // PLog("Running b_v");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    AutoValueScope valueScope(apis, env);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy"));
    }
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value *argv = nullptr;
    auto luaret = apis->call_function(env, func, 0, 0, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(ParaStruct) declare in StructParaEventHandler
static void b_vS__(void* target, struct S__ p0, MethodInfo* method) {
    // PLog("Running b_vS__");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    AutoValueScope valueScope(apis, env);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy"));
    }
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(UnityEngine.Vector3) declare in Vec3ParamEventHandler
static void b_vS_r4r4r4_(void* target, struct S_r4r4r4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_r4r4r4_");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    AutoValueScope valueScope(apis, env);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy"));
    }
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Int32) declare in BaseParaEventHandler
static void b_vi4(void* target, int32_t p0, MethodInfo* method) {
    // PLog("Running b_vi4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    AutoValueScope valueScope(apis, env);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy"));
    }
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
    converter::Converter<int32_t>::toScript(apis, env, p0)
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(ParaClass) declare in ClassParaEventHandler
static void b_vo(void* target, Il2CppObject* p0, MethodInfo* method) {
    // PLog("Running b_vo");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    AutoValueScope valueScope(apis, env);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy"));
    }
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
    CSRefToLuaValue(apis, env, TIp0, p0)
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(IntPtr) declare in System.Action`1[System.IntPtr]
static void b_vp(void* target, void* p0, MethodInfo* method) {
    // PLog("Running b_vp");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    AutoValueScope valueScope(apis, env);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy"));
    }
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
    apis->create_binary(env, p0, 0)
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(IntPtr, Int32) declare in System.Action`2[System.IntPtr,System.Int32]
static void b_vpi4(void* target, void* p0, int32_t p1, MethodInfo* method) {
    // PLog("Running b_vpi4");
            
    auto TIp0 = GetParameterType(method, 0);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    AutoValueScope valueScope(apis, env);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy"));
    }
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
    apis->create_binary(env, p0, 0),
            converter::Converter<int32_t>::toScript(apis, env, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(System.String) declare in System.Action`1[System.String]
static void b_vs(void* target, Il2CppString* p0, MethodInfo* method) {
    // PLog("Running b_vs");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    AutoValueScope valueScope(apis, env);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy"));
    }
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
    converter::Converter<Il2CppString*>::toScript(apis, env, p0)
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
static BridgeFuncInfo g_bridgeFuncInfos[] = {
        {"bs", (Il2CppMethodPointer)b_bs},
    {"i4p", (Il2CppMethodPointer)b_i4p},
    {"i4ss", (Il2CppMethodPointer)b_i4ss},
    {"r4", (Il2CppMethodPointer)b_r4},
    {"v", (Il2CppMethodPointer)b_v},
    {"vS__", (Il2CppMethodPointer)b_vS__},
    {"vS_r4r4r4_", (Il2CppMethodPointer)b_vS_r4r4r4_},
    {"vi4", (Il2CppMethodPointer)b_vi4},
    {"vo", (Il2CppMethodPointer)b_vo},
    {"vp", (Il2CppMethodPointer)b_vp},
    {"vpi4", (Il2CppMethodPointer)b_vpi4},
    {"vs", (Il2CppMethodPointer)b_vs},
    {nullptr, nullptr}
};

Il2CppMethodPointer FindBridgeFunc(const char* signature)
{
    auto begin = &g_bridgeFuncInfos[0];
    auto end = &g_bridgeFuncInfos[sizeof(g_bridgeFuncInfos) / sizeof(BridgeFuncInfo) - 1];
    auto first = std::lower_bound(begin, end, signature, [](const BridgeFuncInfo& x, const char* signature) {return strcmp(x.Signature, signature) < 0;});
    if (first != end && strcmp(first->Signature, signature) == 0) {
        return first->Method;
    }
    return nullptr;
}

}

