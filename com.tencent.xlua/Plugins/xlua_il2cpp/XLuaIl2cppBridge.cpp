// Auto Gen

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
// System.Object Invoke(System.Object, System.Reflection.BindingFlags, System.Reflection.Binder, System.Object[], System.Globalization.CultureInfo) declare in System.Reflection.MethodBase
static Il2CppObject* b_OOi4ooo(void* target, Il2CppObject* p0, int32_t p1, Il2CppObject* p2, Il2CppObject* p3, Il2CppObject* p4, MethodInfo* method) {
    // PLog("Running b_OOi4ooo");

    auto TIret = GetReturnType(method);
            
    auto TIp0 = GetParameterType(method, 0);
                    
    auto TIp2 = GetParameterType(method, 2);
        
    auto TIp3 = GetParameterType(method, 3);
        
    auto TIp4 = GetParameterType(method, 4);

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

    pesapi_value argv[5]{
    CSRefToLuaValue(apis, env, TIp0, p0),
            converter::Converter<int32_t>::toScript(apis, env, p1),
            CSRefToLuaValue(apis, env, TIp2, p2),
            CSRefToLuaValue(apis, env, TIp3, p3),
            CSRefToLuaValue(apis, env, TIp4, p4)
    };
    auto luaret = apis->call_function(env, func, 0, 5, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        return {};
    }
         
    // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValueToCSRef(apis, TIret, env, luaret);
        
    return ret;

}
// System.Object Invoke(System.Object, System.Object[]) declare in System.Reflection.MethodBase
static Il2CppObject* b_OOo(void* target, Il2CppObject* p0, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_OOo");

    auto TIret = GetReturnType(method);
            
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
    CSRefToLuaValue(apis, env, TIp0, p0),
            CSRefToLuaValue(apis, env, TIp1, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        return {};
    }
         
    // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValueToCSRef(apis, TIret, env, luaret);
        
    return ret;

}
// System.Object Invoke(System.Reflection.BindingFlags, System.Reflection.Binder, System.Object[], System.Globalization.CultureInfo) declare in System.Reflection.ConstructorInfo
static Il2CppObject* b_Oi4ooo(void* target, int32_t p0, Il2CppObject* p1, Il2CppObject* p2, Il2CppObject* p3, MethodInfo* method) {
    // PLog("Running b_Oi4ooo");

    auto TIret = GetReturnType(method);
                        
    auto TIp1 = GetParameterType(method, 1);
        
    auto TIp2 = GetParameterType(method, 2);
        
    auto TIp3 = GetParameterType(method, 3);

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

    pesapi_value argv[4]{
    converter::Converter<int32_t>::toScript(apis, env, p0),
            CSRefToLuaValue(apis, env, TIp1, p1),
            CSRefToLuaValue(apis, env, TIp2, p2),
            CSRefToLuaValue(apis, env, TIp3, p3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        return {};
    }
         
    // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValueToCSRef(apis, TIret, env, luaret);
        
    return ret;

}
// System.Object Invoke(System.Object[]) declare in System.Reflection.ConstructorInfo
static Il2CppObject* b_Oo(void* target, Il2CppObject* p0, MethodInfo* method) {
    // PLog("Running b_Oo");

    auto TIret = GetReturnType(method);
            
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
    CSRefToLuaValue(apis, env, TIp0, p0)
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        return {};
    }
         
    // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValueToCSRef(apis, TIret, env, luaret);
        
    return ret;

}
// System.Object Invoke(IntPtr, Int32, System.Object) declare in XLua.ObjectCast
static Il2CppObject* b_Opi4O(void* target, void* p0, int32_t p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_Opi4O");

    auto TIret = GetReturnType(method);
            
    auto TIp0 = GetParameterType(method, 0);
                    
    auto TIp2 = GetParameterType(method, 2);

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

    pesapi_value argv[3]{
    apis->create_binary(env, p0, 0),
            converter::Converter<int32_t>::toScript(apis, env, p1),
            CSRefToLuaValue(apis, env, TIp2, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        return {};
    }
         
    // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValueToCSRef(apis, TIret, env, luaret);
        
    return ret;

}
// Boolean Invoke(System.Exception) declare in System.Func`2[System.Exception,System.Boolean]
static bool b_bo(void* target, Il2CppObject* p0, MethodInfo* method) {
    // PLog("Running b_bo");
            
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
    CSRefToLuaValue(apis, env, TIp0, p0)
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
// Boolean Invoke(System.Type, System.Object) declare in System.Reflection.TypeFilter
static bool b_boO(void* target, Il2CppObject* p0, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_boO");
            
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
    CSRefToLuaValue(apis, env, TIp0, p0),
            CSRefToLuaValue(apis, env, TIp1, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

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
// Int16 Invoke(XLua.LuaTable, System.String) declare in System.Func`3[XLua.LuaTable,System.String,System.Int16]
static int16_t b_i2os(void* target, Il2CppObject* p0, Il2CppString* p1, MethodInfo* method) {
    // PLog("Running b_i2os");
            
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
    CSRefToLuaValue(apis, env, TIp0, p0),
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
    int16_t ret = converter::Converter<int16_t>::toCpp(apis, env, luaret);
        
    return ret;

}
// Int32 Invoke() declare in System.Func`1[System.Int32]
static int32_t b_i4(void* target, MethodInfo* method) {
    // PLog("Running b_i4");

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
    int32_t ret = converter::Converter<int32_t>::toCpp(apis, env, luaret);
        
    return ret;

}
// Int32 Invoke(System.Object) declare in System.Func`2[System.Object,System.Int32]
static int32_t b_i4O(void* target, Il2CppObject* p0, MethodInfo* method) {
    // PLog("Running b_i4O");
            
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
    CSRefToLuaValue(apis, env, TIp0, p0)
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
// Int32 Invoke(TOutput, TOutput) declare in System.Comparison`1[TOutput]
static int32_t b_i4oo(void* target, Il2CppObject* p0, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_i4oo");
            
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
    CSRefToLuaValue(apis, env, TIp0, p0),
            CSRefToLuaValue(apis, env, TIp1, p1)
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
// Int32 Invoke(XLua.LuaTable, System.String) declare in System.Func`3[XLua.LuaTable,System.String,System.Int32]
static int32_t b_i4os(void* target, Il2CppObject* p0, Il2CppString* p1, MethodInfo* method) {
    // PLog("Running b_i4os");
            
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
    CSRefToLuaValue(apis, env, TIp0, p0),
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
// Int64 Invoke(XLua.LuaTable, System.String) declare in System.Func`3[XLua.LuaTable,System.String,System.Int64]
static int64_t b_i8os(void* target, Il2CppObject* p0, Il2CppString* p1, MethodInfo* method) {
    // PLog("Running b_i8os");
            
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
    CSRefToLuaValue(apis, env, TIp0, p0),
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
    int64_t ret = converter::Converter<int64_t>::toCpp(apis, env, luaret);
        
    return ret;

}
// TNewResult Invoke() declare in System.Func`1[TNewResult]
static Il2CppObject* b_o(void* target, MethodInfo* method) {
    // PLog("Running b_o");

    auto TIret = GetReturnType(method);

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
         
    // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValueToCSRef(apis, TIret, env, luaret);
        
    return ret;

}
// TNewResult Invoke(System.Object) declare in System.Func`2[System.Object,TNewResult]
static Il2CppObject* b_oO(void* target, Il2CppObject* p0, MethodInfo* method) {
    // PLog("Running b_oO");

    auto TIret = GetReturnType(method);
            
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
    CSRefToLuaValue(apis, env, TIp0, p0)
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        return {};
    }
         
    // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValueToCSRef(apis, TIret, env, luaret);
        
    return ret;

}
// System.Reflection.Module Invoke(System.Object, System.ResolveEventArgs) declare in System.Reflection.ModuleResolveEventHandler
static Il2CppObject* b_oOo(void* target, Il2CppObject* p0, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_oOo");

    auto TIret = GetReturnType(method);
            
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
    CSRefToLuaValue(apis, env, TIp0, p0),
            CSRefToLuaValue(apis, env, TIp1, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        return {};
    }
         
    // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValueToCSRef(apis, TIret, env, luaret);
        
    return ret;

}
// Byte[] Invoke(System.String ByRef) declare in XLua.LuaEnv+CustomLoader
static Il2CppObject* b_oPs(void* target, Il2CppString** p0, MethodInfo* method) {
    // PLog("Running b_oPs");

    auto TIret = GetReturnType(method);
            
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
    // unknown ret signature: Ps
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        return {};
    }
         
    // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValueToCSRef(apis, TIret, env, luaret);
        
    return ret;

}
// XLua.LuaBase Invoke(Int32, XLua.LuaEnv) declare in System.Func`3[System.Int32,XLua.LuaEnv,XLua.LuaBase]
static Il2CppObject* b_oi4o(void* target, int32_t p0, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_oi4o");

    auto TIret = GetReturnType(method);
                        
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
    converter::Converter<int32_t>::toScript(apis, env, p0),
            CSRefToLuaValue(apis, env, TIp1, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        return {};
    }
         
    // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValueToCSRef(apis, TIret, env, luaret);
        
    return ret;

}
// TOutput Invoke(TOutput) declare in System.Converter`2[TOutput,TOutput]
static Il2CppObject* b_oo(void* target, Il2CppObject* p0, MethodInfo* method) {
    // PLog("Running b_oo");

    auto TIret = GetReturnType(method);
            
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
    CSRefToLuaValue(apis, env, TIp0, p0)
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        return {};
    }
         
    // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValueToCSRef(apis, TIret, env, luaret);
        
    return ret;

}
// TNewResult Invoke(System.Threading.Tasks.Task`1[TNewResult], System.Object) declare in System.Func`3[System.Threading.Tasks.Task`1[TNewResult],System.Object,TNewResult]
static Il2CppObject* b_ooO(void* target, Il2CppObject* p0, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_ooO");

    auto TIret = GetReturnType(method);
            
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
    CSRefToLuaValue(apis, env, TIp0, p0),
            CSRefToLuaValue(apis, env, TIp1, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        return {};
    }
         
    // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValueToCSRef(apis, TIret, env, luaret);
        
    return ret;

}
// XLua.LuaTable Invoke(XLua.LuaTable, System.String) declare in System.Func`3[XLua.LuaTable,System.String,XLua.LuaTable]
static Il2CppObject* b_oos(void* target, Il2CppObject* p0, Il2CppString* p1, MethodInfo* method) {
    // PLog("Running b_oos");

    auto TIret = GetReturnType(method);
            
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
    CSRefToLuaValue(apis, env, TIp0, p0),
            converter::Converter<Il2CppString*>::toScript(apis, env, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        return {};
    }
         
    // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValueToCSRef(apis, TIret, env, luaret);
        
    return ret;

}
// TOutput Invoke(System.String) declare in System.Converter`2[System.String,TOutput]
static Il2CppObject* b_os(void* target, Il2CppString* p0, MethodInfo* method) {
    // PLog("Running b_os");

    auto TIret = GetReturnType(method);
            
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
         
    // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValueToCSRef(apis, TIret, env, luaret);
        
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
// Single Invoke(XLua.LuaTable, System.String) declare in System.Func`3[XLua.LuaTable,System.String,System.Single]
static float b_r4os(void* target, Il2CppObject* p0, Il2CppString* p1, MethodInfo* method) {
    // PLog("Running b_r4os");
            
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
    CSRefToLuaValue(apis, env, TIp0, p0),
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
    float ret = converter::Converter<float>::toCpp(apis, env, luaret);
        
    return ret;

}
// Double Invoke(XLua.LuaTable, System.String) declare in System.Func`3[XLua.LuaTable,System.String,System.Double]
static double b_r8os(void* target, Il2CppObject* p0, Il2CppString* p1, MethodInfo* method) {
    // PLog("Running b_r8os");
            
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
    CSRefToLuaValue(apis, env, TIp0, p0),
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
    double ret = converter::Converter<double>::toCpp(apis, env, luaret);
        
    return ret;

}
// System.String Invoke(XLua.LuaTable, System.String) declare in System.Func`3[XLua.LuaTable,System.String,System.String]
static Il2CppString* b_sos(void* target, Il2CppObject* p0, Il2CppString* p1, MethodInfo* method) {
    // PLog("Running b_sos");

    auto TIret = GetReturnType(method);
            
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
    CSRefToLuaValue(apis, env, TIp0, p0),
            converter::Converter<Il2CppString*>::toScript(apis, env, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        return {};
    }
         // LuaValToCSVal s
    Il2CppString* ret = converter::Converter<Il2CppString*>::toCpp(apis, env, luaret);
    return ret;

}
// UInt16 Invoke(XLua.LuaTable, System.String) declare in System.Func`3[XLua.LuaTable,System.String,System.UInt16]
static uint16_t b_u2os(void* target, Il2CppObject* p0, Il2CppString* p1, MethodInfo* method) {
    // PLog("Running b_u2os");
            
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
    CSRefToLuaValue(apis, env, TIp0, p0),
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
    uint16_t ret = converter::Converter<uint16_t>::toCpp(apis, env, luaret);
        
    return ret;

}
// UInt32 Invoke(XLua.LuaTable, System.String) declare in System.Func`3[XLua.LuaTable,System.String,System.UInt32]
static uint32_t b_u4os(void* target, Il2CppObject* p0, Il2CppString* p1, MethodInfo* method) {
    // PLog("Running b_u4os");
            
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
    CSRefToLuaValue(apis, env, TIp0, p0),
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
    uint32_t ret = converter::Converter<uint32_t>::toCpp(apis, env, luaret);
        
    return ret;

}
// UInt64 Invoke(XLua.LuaTable, System.String) declare in System.Func`3[XLua.LuaTable,System.String,System.UInt64]
static uint64_t b_u8os(void* target, Il2CppObject* p0, Il2CppString* p1, MethodInfo* method) {
    // PLog("Running b_u8os");
            
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
    CSRefToLuaValue(apis, env, TIp0, p0),
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
    uint64_t ret = converter::Converter<uint64_t>::toCpp(apis, env, luaret);
        
    return ret;

}
// Void Invoke() declare in System.Action
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
// Void Invoke(System.Object) declare in System.Action`1[System.Object]
static void b_vO(void* target, Il2CppObject* p0, MethodInfo* method) {
    // PLog("Running b_vO");
            
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
// Void Invoke(System.Object, System.EventArgs) declare in Mono.Security.Cryptography.DSAManaged+KeyGeneratedEventHandler
static void b_vOo(void* target, Il2CppObject* p0, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_vOo");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);

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
    CSRefToLuaValue(apis, env, TIp0, p0),
            CSRefToLuaValue(apis, env, TIp1, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

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
// Void Invoke(Int32, T) declare in System.Action`2[System.Int32,T]
static void b_vi4o(void* target, int32_t p0, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_vi4o");
                        
    auto TIp1 = GetParameterType(method, 1);

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
    converter::Converter<int32_t>::toScript(apis, env, p0),
            CSRefToLuaValue(apis, env, TIp1, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(System.IAsyncResult) declare in System.AsyncCallback
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
// Void Invoke(System.Threading.Tasks.Task`1[TNewResult], System.Object) declare in System.Action`2[System.Threading.Tasks.Task`1[TNewResult],System.Object]
static void b_voO(void* target, Il2CppObject* p0, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_voO");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);

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
    CSRefToLuaValue(apis, env, TIp0, p0),
            CSRefToLuaValue(apis, env, TIp1, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

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
// Void Invoke(IntPtr, Int32, T ByRef) declare in XLua.ObjectTranslator+GetFunc`1[T]
static void b_vpi4Po(void* target, void* p0, int32_t p1, Il2CppObject** p2, MethodInfo* method) {
    // PLog("Running b_vpi4Po");
            
    auto TIp0 = GetParameterType(method, 0);
                    
    auto TIp2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    AutoValueScope valueScope(apis, env);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy"));
    }
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
    apis->create_binary(env, p0, 0),
            converter::Converter<int32_t>::toScript(apis, env, p1),
            apis->boxing(env, apis->native_object_to_value(env, TIp2, p2, false))
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(IntPtr, Int32, T) declare in System.Action`3[System.IntPtr,System.Int32,T]
static void b_vpi4o(void* target, void* p0, int32_t p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_vpi4o");
            
    auto TIp0 = GetParameterType(method, 0);
                    
    auto TIp2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    AutoValueScope valueScope(apis, env);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy"));
    }
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
    apis->create_binary(env, p0, 0),
            converter::Converter<int32_t>::toScript(apis, env, p1),
            CSRefToLuaValue(apis, env, TIp2, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(IntPtr, T) declare in System.Action`2[System.IntPtr,T]
static void b_vpo(void* target, void* p0, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_vpo");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);

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
            CSRefToLuaValue(apis, env, TIp1, p1)
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
// Void Invoke(System.String, T) declare in System.Action`2[System.String,T]
static void b_vso(void* target, Il2CppString* p0, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_vso");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);

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
    converter::Converter<Il2CppString*>::toScript(apis, env, p0),
            CSRefToLuaValue(apis, env, TIp1, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
static BridgeFuncInfo g_bridgeFuncInfos[] = {
        {"OOi4ooo", (Il2CppMethodPointer)b_OOi4ooo},
    {"OOo", (Il2CppMethodPointer)b_OOo},
    {"Oi4ooo", (Il2CppMethodPointer)b_Oi4ooo},
    {"Oo", (Il2CppMethodPointer)b_Oo},
    {"Opi4O", (Il2CppMethodPointer)b_Opi4O},
    {"bo", (Il2CppMethodPointer)b_bo},
    {"boO", (Il2CppMethodPointer)b_boO},
    {"bs", (Il2CppMethodPointer)b_bs},
    {"i2os", (Il2CppMethodPointer)b_i2os},
    {"i4", (Il2CppMethodPointer)b_i4},
    {"i4O", (Il2CppMethodPointer)b_i4O},
    {"i4oo", (Il2CppMethodPointer)b_i4oo},
    {"i4os", (Il2CppMethodPointer)b_i4os},
    {"i4p", (Il2CppMethodPointer)b_i4p},
    {"i4ss", (Il2CppMethodPointer)b_i4ss},
    {"i8os", (Il2CppMethodPointer)b_i8os},
    {"o", (Il2CppMethodPointer)b_o},
    {"oO", (Il2CppMethodPointer)b_oO},
    {"oOo", (Il2CppMethodPointer)b_oOo},
    {"oPs", (Il2CppMethodPointer)b_oPs},
    {"oi4o", (Il2CppMethodPointer)b_oi4o},
    {"oo", (Il2CppMethodPointer)b_oo},
    {"ooO", (Il2CppMethodPointer)b_ooO},
    {"oos", (Il2CppMethodPointer)b_oos},
    {"os", (Il2CppMethodPointer)b_os},
    {"r4", (Il2CppMethodPointer)b_r4},
    {"r4os", (Il2CppMethodPointer)b_r4os},
    {"r8os", (Il2CppMethodPointer)b_r8os},
    {"sos", (Il2CppMethodPointer)b_sos},
    {"u2os", (Il2CppMethodPointer)b_u2os},
    {"u4os", (Il2CppMethodPointer)b_u4os},
    {"u8os", (Il2CppMethodPointer)b_u8os},
    {"v", (Il2CppMethodPointer)b_v},
    {"vO", (Il2CppMethodPointer)b_vO},
    {"vOo", (Il2CppMethodPointer)b_vOo},
    {"vS__", (Il2CppMethodPointer)b_vS__},
    {"vS_r4r4r4_", (Il2CppMethodPointer)b_vS_r4r4r4_},
    {"vi4", (Il2CppMethodPointer)b_vi4},
    {"vi4o", (Il2CppMethodPointer)b_vi4o},
    {"vo", (Il2CppMethodPointer)b_vo},
    {"voO", (Il2CppMethodPointer)b_voO},
    {"vp", (Il2CppMethodPointer)b_vp},
    {"vpi4", (Il2CppMethodPointer)b_vpi4},
    {"vpi4Po", (Il2CppMethodPointer)b_vpi4Po},
    {"vpi4o", (Il2CppMethodPointer)b_vpi4o},
    {"vpo", (Il2CppMethodPointer)b_vpo},
    {"vs", (Il2CppMethodPointer)b_vs},
    {"vso", (Il2CppMethodPointer)b_vso},
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

