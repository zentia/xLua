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
// System.Nullable`1[System.DateTimeOffset] Invoke() declare in System.Func`1[System.Nullable`1[System.DateTimeOffset]]
static struct N_bS_S_u8_i2__ b_N_bS_S_u8_i2__(void* target, MethodInfo* method) {
    // PLog("Running b_N_bS_S_u8_i2__");

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
          // LuaValToCSVal struct
    N_bS_S_u8_i2__* pret = DataTransfer::GetPointer<N_bS_S_u8_i2__>(apis, env, luaret);
    N_bS_S_u8_i2__ ret = pret ? *pret : N_bS_S_u8_i2__ {};
        
    return ret;

}
// System.Nullable`1[System.DateTimeOffset] Invoke(System.Object) declare in System.Func`2[System.Object,System.Nullable`1[System.DateTimeOffset]]
static struct N_bS_S_u8_i2__ b_N_bS_S_u8_i2__O(void* target, Il2CppObject* p0, MethodInfo* method) {
    // PLog("Running b_N_bS_S_u8_i2__O");

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
          // LuaValToCSVal struct
    N_bS_S_u8_i2__* pret = DataTransfer::GetPointer<N_bS_S_u8_i2__>(apis, env, luaret);
    N_bS_S_u8_i2__ ret = pret ? *pret : N_bS_S_u8_i2__ {};
        
    return ret;

}
// System.Nullable`1[System.Decimal] Invoke() declare in System.Func`1[System.Nullable`1[System.Decimal]]
static struct N_bS_i4i4i4i4u8__ b_N_bS_i4i4i4i4u8__(void* target, MethodInfo* method) {
    // PLog("Running b_N_bS_i4i4i4i4u8__");

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
          // LuaValToCSVal struct
    N_bS_i4i4i4i4u8__* pret = DataTransfer::GetPointer<N_bS_i4i4i4i4u8__>(apis, env, luaret);
    N_bS_i4i4i4i4u8__ ret = pret ? *pret : N_bS_i4i4i4i4u8__ {};
        
    return ret;

}
// System.Nullable`1[System.Decimal] Invoke(System.Object) declare in System.Func`2[System.Object,System.Nullable`1[System.Decimal]]
static struct N_bS_i4i4i4i4u8__ b_N_bS_i4i4i4i4u8__O(void* target, Il2CppObject* p0, MethodInfo* method) {
    // PLog("Running b_N_bS_i4i4i4i4u8__O");

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
          // LuaValToCSVal struct
    N_bS_i4i4i4i4u8__* pret = DataTransfer::GetPointer<N_bS_i4i4i4i4u8__>(apis, env, luaret);
    N_bS_i4i4i4i4u8__ ret = pret ? *pret : N_bS_i4i4i4i4u8__ {};
        
    return ret;

}
// System.Nullable`1[System.DateTime] Invoke() declare in System.Func`1[System.Nullable`1[System.DateTime]]
static struct N_bS_u8__ b_N_bS_u8__(void* target, MethodInfo* method) {
    // PLog("Running b_N_bS_u8__");

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
          // LuaValToCSVal struct
    N_bS_u8__* pret = DataTransfer::GetPointer<N_bS_u8__>(apis, env, luaret);
    N_bS_u8__ ret = pret ? *pret : N_bS_u8__ {};
        
    return ret;

}
// System.Nullable`1[System.DateTime] Invoke(System.Object) declare in System.Func`2[System.Object,System.Nullable`1[System.DateTime]]
static struct N_bS_u8__ b_N_bS_u8__O(void* target, Il2CppObject* p0, MethodInfo* method) {
    // PLog("Running b_N_bS_u8__O");

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
          // LuaValToCSVal struct
    N_bS_u8__* pret = DataTransfer::GetPointer<N_bS_u8__>(apis, env, luaret);
    N_bS_u8__ ret = pret ? *pret : N_bS_u8__ {};
        
    return ret;

}
// System.Nullable`1[System.Boolean] Invoke() declare in System.Func`1[System.Nullable`1[System.Boolean]]
static struct N_bb_ b_N_bb_(void* target, MethodInfo* method) {
    // PLog("Running b_N_bb_");

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
          // LuaValToCSVal struct
    N_bb_* pret = DataTransfer::GetPointer<N_bb_>(apis, env, luaret);
    N_bb_ ret = pret ? *pret : N_bb_ {};
        
    return ret;

}
// System.Nullable`1[System.Boolean] Invoke(System.Object) declare in System.Func`2[System.Object,System.Nullable`1[System.Boolean]]
static struct N_bb_ b_N_bb_O(void* target, Il2CppObject* p0, MethodInfo* method) {
    // PLog("Running b_N_bb_O");

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
          // LuaValToCSVal struct
    N_bb_* pret = DataTransfer::GetPointer<N_bb_>(apis, env, luaret);
    N_bb_ ret = pret ? *pret : N_bb_ {};
        
    return ret;

}
// System.Nullable`1[System.Int32] Invoke() declare in System.Func`1[System.Nullable`1[System.Int32]]
static struct N_bi4_ b_N_bi4_(void* target, MethodInfo* method) {
    // PLog("Running b_N_bi4_");

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
          // LuaValToCSVal struct
    N_bi4_* pret = DataTransfer::GetPointer<N_bi4_>(apis, env, luaret);
    N_bi4_ ret = pret ? *pret : N_bi4_ {};
        
    return ret;

}
// System.Nullable`1[System.Int32] Invoke(System.Object) declare in System.Func`2[System.Object,System.Nullable`1[System.Int32]]
static struct N_bi4_ b_N_bi4_O(void* target, Il2CppObject* p0, MethodInfo* method) {
    // PLog("Running b_N_bi4_O");

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
          // LuaValToCSVal struct
    N_bi4_* pret = DataTransfer::GetPointer<N_bi4_>(apis, env, luaret);
    N_bi4_ ret = pret ? *pret : N_bi4_ {};
        
    return ret;

}
// System.Nullable`1[System.Double] Invoke() declare in System.Func`1[System.Nullable`1[System.Double]]
static struct N_br8_ b_N_br8_(void* target, MethodInfo* method) {
    // PLog("Running b_N_br8_");

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
          // LuaValToCSVal struct
    N_br8_* pret = DataTransfer::GetPointer<N_br8_>(apis, env, luaret);
    N_br8_ ret = pret ? *pret : N_br8_ {};
        
    return ret;

}
// System.Nullable`1[System.Double] Invoke(System.Object) declare in System.Func`2[System.Object,System.Nullable`1[System.Double]]
static struct N_br8_ b_N_br8_O(void* target, Il2CppObject* p0, MethodInfo* method) {
    // PLog("Running b_N_br8_O");

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
          // LuaValToCSVal struct
    N_br8_* pret = DataTransfer::GetPointer<N_br8_>(apis, env, luaret);
    N_br8_ ret = pret ? *pret : N_br8_ {};
        
    return ret;

}
// System.Object Invoke() declare in System.Func`1[System.Object]
static Il2CppObject* b_O(void* target, MethodInfo* method) {
    // PLog("Running b_O");

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
// System.Object Invoke(System.Object, System.String, XLua.LuaTable) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateUILuaPrefabInvokeObject
static Il2CppObject* b_OOso(void* target, Il2CppObject* p0, Il2CppString* p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_OOso");

    auto TIret = GetReturnType(method);
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
        
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
    CSRefToLuaValue(apis, env, TIp0, p0),
            converter::Converter<Il2CppString*>::toScript(apis, env, p1),
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
// System.Object Invoke(Int32, IntPtr, PixPuerts.IGetValueFromJs, IntPtr, Boolean) declare in PixPuerts.GeneralGetter
static Il2CppObject* b_Oi4popb(void* target, int32_t p0, void* p1, Il2CppObject* p2, void* p3, bool p4, MethodInfo* method) {
    // PLog("Running b_Oi4popb");

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

    pesapi_value argv[5]{
    converter::Converter<int32_t>::toScript(apis, env, p0),
            apis->create_binary(env, p1, 0),
            CSRefToLuaValue(apis, env, TIp2, p2),
            apis->create_binary(env, p3, 0),
            converter::Converter<bool>::toScript(apis, env, p4)
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
// System.Object Invoke(Int32, System.String, XLua.LuaTable) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateUILuaPrefabInvokeId
static Il2CppObject* b_Oi4so(void* target, int32_t p0, Il2CppString* p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_Oi4so");

    auto TIret = GetReturnType(method);
                        
    auto TIp1 = GetParameterType(method, 1);
        
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
    converter::Converter<int32_t>::toScript(apis, env, p0),
            converter::Converter<Il2CppString*>::toScript(apis, env, p1),
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
// System.Object Invoke(System.String) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateResetDataService
static Il2CppObject* b_Os(void* target, Il2CppString* p0, MethodInfo* method) {
    // PLog("Running b_Os");

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
// System.Object Invoke(System.String, System.String) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateGetDataService
static Il2CppObject* b_Oss(void* target, Il2CppString* p0, Il2CppString* p1, MethodInfo* method) {
    // PLog("Running b_Oss");

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
         
    // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValueToCSRef(apis, TIret, env, luaret);
        
    return ret;

}
// unitytls_x509list* Invoke(unitytls_errorstate*) declare in Mono.Unity.UnityTls+unitytls_interface_struct+unitytls_x509list_create_t
static struct S__* b_PS__PS_u4u4u8_(void* target, struct S_u4u4u8_* p0, MethodInfo* method) {
    // PLog("Running b_PS__PS_u4u4u8_");

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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        return {};
    }
          
    // LuaValToCSVal Pstruct
    S__* ret = DataTransfer::GetPointer<S__>(apis, env, apis->unboxing(env, luaret)); // valuetype ref
    S__ uret;
    if (!ret) {
        memset(&uret, 0, sizeof(ret));
        ret = &uret;
    }
        
    return ret;

}
// unitytls_key* Invoke(Byte*, IntPtr, Byte*, IntPtr, unitytls_errorstate*) declare in Mono.Unity.UnityTls+unitytls_interface_struct+unitytls_key_parse_der_t
static struct S__* b_PS__Pu1pPu1pPS_u4u4u8_(void* target, uint8_t* p0, void* p1, uint8_t* p2, void* p3, struct S_u4u4u8_* p4, MethodInfo* method) {
    // PLog("Running b_PS__Pu1pPu1pPS_u4u4u8_");

    auto TIret = GetReturnType(method);
                        
    auto TIp1 = GetParameterType(method, 1);
                    
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
    converter::Converter<std::reference_wrapper<uint8_t>>::toScript(apis, env, *p0),
            apis->create_binary(env, p1, 0),
            converter::Converter<std::reference_wrapper<uint8_t>>::toScript(apis, env, *p2),
            apis->create_binary(env, p3, 0),
            apis->boxing(env, apis->native_object_to_value(env, TIp4, p4, false))
    };
    auto luaret = apis->call_function(env, func, 0, 5, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        return {};
    }
          
    // LuaValToCSVal Pstruct
    S__* ret = DataTransfer::GetPointer<S__>(apis, env, apis->unboxing(env, luaret)); // valuetype ref
    S__ uret;
    if (!ret) {
        memset(&uret, 0, sizeof(ret));
        ret = &uret;
    }
        
    return ret;

}
// unitytls_tlsctx* Invoke(unitytls_tlsctx_protocolrange, unitytls_tlsctx_callbacks, Byte*, IntPtr, unitytls_errorstate*) declare in Mono.Unity.UnityTls+unitytls_interface_struct+unitytls_tlsctx_create_client_t
static struct S__* b_PS__S_u4u4_S_ooPv_Pu1pPS_u4u4u8_(void* target, struct S_u4u4_ p0, struct S_ooPv_ p1, uint8_t* p2, void* p3, struct S_u4u4u8_* p4, MethodInfo* method) {
    // PLog("Running b_PS__S_u4u4_S_ooPv_Pu1pPS_u4u4u8_");

    auto TIret = GetReturnType(method);
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
                    
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1),
            converter::Converter<std::reference_wrapper<uint8_t>>::toScript(apis, env, *p2),
            apis->create_binary(env, p3, 0),
            apis->boxing(env, apis->native_object_to_value(env, TIp4, p4, false))
    };
    auto luaret = apis->call_function(env, func, 0, 5, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        return {};
    }
          
    // LuaValToCSVal Pstruct
    S__* ret = DataTransfer::GetPointer<S__>(apis, env, apis->unboxing(env, luaret)); // valuetype ref
    S__ uret;
    if (!ret) {
        memset(&uret, 0, sizeof(ret));
        ret = &uret;
    }
        
    return ret;

}
// unitytls_tlsctx* Invoke(unitytls_tlsctx_protocolrange, unitytls_tlsctx_callbacks, UInt64, UInt64, unitytls_errorstate*) declare in Mono.Unity.UnityTls+unitytls_interface_struct+unitytls_tlsctx_create_server_t
static struct S__* b_PS__S_u4u4_S_ooPv_u8u8PS_u4u4u8_(void* target, struct S_u4u4_ p0, struct S_ooPv_ p1, uint64_t p2, uint64_t p3, struct S_u4u4u8_* p4, MethodInfo* method) {
    // PLog("Running b_PS__S_u4u4_S_ooPv_u8u8PS_u4u4u8_");

    auto TIret = GetReturnType(method);
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
                                
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1),
            converter::Converter<uint64_t>::toScript(apis, env, p2),
            converter::Converter<uint64_t>::toScript(apis, env, p3),
            apis->boxing(env, apis->native_object_to_value(env, TIp4, p4, false))
    };
    auto luaret = apis->call_function(env, func, 0, 5, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        return {};
    }
          
    // LuaValToCSVal Pstruct
    S__* ret = DataTransfer::GetPointer<S__>(apis, env, apis->unboxing(env, luaret)); // valuetype ref
    S__ uret;
    if (!ret) {
        memset(&uret, 0, sizeof(ret));
        ret = &uret;
    }
        
    return ret;

}
// UnityEngine.UIElements.Experimental.StyleValues Invoke(UnityEngine.UIElements.Experimental.StyleValues, UnityEngine.UIElements.Experimental.StyleValues, Single) declare in System.Func`4[UnityEngine.UIElements.Experimental.StyleValues,UnityEngine.UIElements.Experimental.StyleValues,System.Single,UnityEngine.UIElements.Experimental.StyleValues]
static struct S_o_ b_S_o_S_o_S_o_r4(void* target, struct S_o_ p0, struct S_o_ p1, float p2, MethodInfo* method) {
    // PLog("Running b_S_o_S_o_S_o_r4");

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

    pesapi_value argv[3]{
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1),
            converter::Converter<float>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        return {};
    }
          // LuaValToCSVal struct
    S_o_* pret = DataTransfer::GetPointer<S_o_>(apis, env, luaret);
    S_o_ ret = pret ? *pret : S_o_ {};
        
    return ret;

}
// UnityEngine.UIElements.Experimental.StyleValues Invoke(UnityEngine.UIElements.VisualElement) declare in System.Func`2[UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.Experimental.StyleValues]
static struct S_o_ b_S_o_o(void* target, Il2CppObject* p0, MethodInfo* method) {
    // PLog("Running b_S_o_o");

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
          // LuaValToCSVal struct
    S_o_* pret = DataTransfer::GetPointer<S_o_>(apis, env, luaret);
    S_o_ ret = pret ? *pret : S_o_ {};
        
    return ret;

}
// UnityEngine.Vector2 Invoke(UnityEngine.Vector2, UnityEngine.Vector2, Single) declare in System.Func`4[UnityEngine.Vector2,UnityEngine.Vector2,System.Single,UnityEngine.Vector2]
static struct S_r4r4_ b_S_r4r4_S_r4r4_S_r4r4_r4(void* target, struct S_r4r4_ p0, struct S_r4r4_ p1, float p2, MethodInfo* method) {
    // PLog("Running b_S_r4r4_S_r4r4_S_r4r4_r4");

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

    pesapi_value argv[3]{
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1),
            converter::Converter<float>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        return {};
    }
          // LuaValToCSVal struct
    S_r4r4_* pret = DataTransfer::GetPointer<S_r4r4_>(apis, env, luaret);
    S_r4r4_ ret = pret ? *pret : S_r4r4_ {};
        
    return ret;

}
// UnityEngine.Vector2 Invoke(Int32) declare in System.Func`2[System.Int32,UnityEngine.Vector2]
static struct S_r4r4_ b_S_r4r4_i4(void* target, int32_t p0, MethodInfo* method) {
    // PLog("Running b_S_r4r4_i4");

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

    pesapi_value argv[1]{
    converter::Converter<int32_t>::toScript(apis, env, p0)
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        return {};
    }
          // LuaValToCSVal struct
    S_r4r4_* pret = DataTransfer::GetPointer<S_r4r4_>(apis, env, luaret);
    S_r4r4_ ret = pret ? *pret : S_r4r4_ {};
        
    return ret;

}
// UnityEngine.Vector2 Invoke(Finger) declare in FingerList+FingerPropertyGetterDelegate`1[UnityEngine.Vector2]
static struct S_r4r4_ b_S_r4r4_o(void* target, Il2CppObject* p0, MethodInfo* method) {
    // PLog("Running b_S_r4r4_o");

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
          // LuaValToCSVal struct
    S_r4r4_* pret = DataTransfer::GetPointer<S_r4r4_>(apis, env, luaret);
    S_r4r4_ ret = pret ? *pret : S_r4r4_ {};
        
    return ret;

}
// UnityEngine.Vector3 Invoke() declare in LTDescr+EaseTypeDelegate
static struct S_r4r4r4_ b_S_r4r4r4_(void* target, MethodInfo* method) {
    // PLog("Running b_S_r4r4r4_");

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
          // LuaValToCSVal struct
    S_r4r4r4_* pret = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, luaret);
    S_r4r4r4_ ret = pret ? *pret : S_r4r4r4_ {};
        
    return ret;

}
// UnityEngine.Vector3 Invoke(UnityEngine.Vector3, UnityEngine.Vector3, Single) declare in System.Func`4[UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3]
static struct S_r4r4r4_ b_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4(void* target, struct S_r4r4r4_ p0, struct S_r4r4r4_ p1, float p2, MethodInfo* method) {
    // PLog("Running b_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4");

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

    pesapi_value argv[3]{
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1),
            converter::Converter<float>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        return {};
    }
          // LuaValToCSVal struct
    S_r4r4r4_* pret = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, luaret);
    S_r4r4r4_ ret = pret ? *pret : S_r4r4r4_ {};
        
    return ret;

}
// UnityEngine.Vector3 Invoke(UnityEngine.UIElements.VisualElement) declare in System.Func`2[UnityEngine.UIElements.VisualElement,UnityEngine.Vector3]
static struct S_r4r4r4_ b_S_r4r4r4_o(void* target, Il2CppObject* p0, MethodInfo* method) {
    // PLog("Running b_S_r4r4r4_o");

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
          // LuaValToCSVal struct
    S_r4r4r4_* pret = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, luaret);
    S_r4r4r4_ ret = pret ? *pret : S_r4r4r4_ {};
        
    return ret;

}
// UnityEngine.Quaternion Invoke() declare in DG.Tweening.Core.DOGetter`1[UnityEngine.Quaternion]
static struct S_r4r4r4r4_ b_S_r4r4r4r4_(void* target, MethodInfo* method) {
    // PLog("Running b_S_r4r4r4r4_");

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
          // LuaValToCSVal struct
    S_r4r4r4r4_* pret = DataTransfer::GetPointer<S_r4r4r4r4_>(apis, env, luaret);
    S_r4r4r4r4_ ret = pret ? *pret : S_r4r4r4r4_ {};
        
    return ret;

}
// UnityEngine.Rect Invoke(UnityEngine.Rect, UnityEngine.Rect, Single) declare in System.Func`4[UnityEngine.Rect,UnityEngine.Rect,System.Single,UnityEngine.Rect]
static struct S_r4r4r4r4_ b_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_r4(void* target, struct S_r4r4r4r4_ p0, struct S_r4r4r4r4_ p1, float p2, MethodInfo* method) {
    // PLog("Running b_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_r4");

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

    pesapi_value argv[3]{
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1),
            converter::Converter<float>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        return {};
    }
          // LuaValToCSVal struct
    S_r4r4r4r4_* pret = DataTransfer::GetPointer<S_r4r4r4r4_>(apis, env, luaret);
    S_r4r4r4r4_ ret = pret ? *pret : S_r4r4r4r4_ {};
        
    return ret;

}
// UnityEngine.Rect Invoke(UnityEngine.UIElements.VisualElement) declare in System.Func`2[UnityEngine.UIElements.VisualElement,UnityEngine.Rect]
static struct S_r4r4r4r4_ b_S_r4r4r4r4_o(void* target, Il2CppObject* p0, MethodInfo* method) {
    // PLog("Running b_S_r4r4r4r4_o");

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
          // LuaValToCSVal struct
    S_r4r4r4r4_* pret = DataTransfer::GetPointer<S_r4r4r4r4_>(apis, env, luaret);
    S_r4r4r4r4_ ret = pret ? *pret : S_r4r4r4r4_ {};
        
    return ret;

}
// System.Net.WebSockets.ValueWebSocketReceiveResult Invoke() declare in System.Func`1[System.Net.WebSockets.ValueWebSocketReceiveResult]
static struct S_u4i4_ b_S_u4i4_(void* target, MethodInfo* method) {
    // PLog("Running b_S_u4i4_");

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
          // LuaValToCSVal struct
    S_u4i4_* pret = DataTransfer::GetPointer<S_u4i4_>(apis, env, luaret);
    S_u4i4_ ret = pret ? *pret : S_u4i4_ {};
        
    return ret;

}
// System.Net.WebSockets.ValueWebSocketReceiveResult Invoke(System.Object) declare in System.Func`2[System.Object,System.Net.WebSockets.ValueWebSocketReceiveResult]
static struct S_u4i4_ b_S_u4i4_O(void* target, Il2CppObject* p0, MethodInfo* method) {
    // PLog("Running b_S_u4i4_O");

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
          // LuaValToCSVal struct
    S_u4i4_* pret = DataTransfer::GetPointer<S_u4i4_>(apis, env, luaret);
    S_u4i4_ ret = pret ? *pret : S_u4i4_ {};
        
    return ret;

}
// unitytls_errorstate Invoke() declare in Mono.Unity.UnityTls+unitytls_interface_struct+unitytls_errorstate_create_t
static struct S_u4u4u8_ b_S_u4u4u8_(void* target, MethodInfo* method) {
    // PLog("Running b_S_u4u4u8_");

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
          // LuaValToCSVal struct
    S_u4u4u8_* pret = DataTransfer::GetPointer<S_u4u4u8_>(apis, env, luaret);
    S_u4u4u8_ ret = pret ? *pret : S_u4u4u8_ {};
        
    return ret;

}
// unitytls_key_ref Invoke(unitytls_key*, unitytls_errorstate*) declare in Mono.Unity.UnityTls+unitytls_interface_struct+unitytls_key_get_ref_t
static struct S_u8_ b_S_u8_PS__PS_u4u4u8_(void* target, struct S__* p0, struct S_u4u4u8_* p1, MethodInfo* method) {
    // PLog("Running b_S_u8_PS__PS_u4u4u8_");

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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false)),
            apis->boxing(env, apis->native_object_to_value(env, TIp1, p1, false))
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        return {};
    }
          // LuaValToCSVal struct
    S_u8_* pret = DataTransfer::GetPointer<S_u8_>(apis, env, luaret);
    S_u8_ ret = pret ? *pret : S_u8_ {};
        
    return ret;

}
// unitytls_x509_ref Invoke(unitytls_x509list_ref, IntPtr, unitytls_errorstate*) declare in Mono.Unity.UnityTls+unitytls_interface_struct+unitytls_x509list_get_x509_t
static struct S_u8_ b_S_u8_S_u8_pPS_u4u4u8_(void* target, struct S_u8_ p0, void* p1, struct S_u4u4u8_* p2, MethodInfo* method) {
    // PLog("Running b_S_u8_S_u8_pPS_u4u4u8_");

    auto TIret = GetReturnType(method);
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
        
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            apis->create_binary(env, p1, 0),
            apis->boxing(env, apis->native_object_to_value(env, TIp2, p2, false))
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        return {};
    }
          // LuaValToCSVal struct
    S_u8_* pret = DataTransfer::GetPointer<S_u8_>(apis, env, luaret);
    S_u8_ ret = pret ? *pret : S_u8_ {};
        
    return ret;

}
// Boolean Invoke() declare in GenericDelegate
static bool b_b(void* target, MethodInfo* method) {
    // PLog("Running b_b");

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
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);
        
    return ret;

}
// Boolean Invoke(System.Object) declare in System.Predicate`1[System.Object]
static bool b_bO(void* target, Il2CppObject* p0, MethodInfo* method) {
    // PLog("Running b_bO");
            
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
// Boolean Invoke(System.Object, System.Object) declare in UIEventID`1[System.Object]
static bool b_bOO(void* target, Il2CppObject* p0, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_bOO");
            
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
// Boolean Invoke(System.Object, System.Object, UnityEngine.Vector2) declare in UIEventID`2[System.Object,UnityEngine.Vector2]
static bool b_bOOS_r4r4_(void* target, Il2CppObject* p0, Il2CppObject* p1, struct S_r4r4_ p2, MethodInfo* method) {
    // PLog("Running b_bOOS_r4r4_");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
        
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
    CSRefToLuaValue(apis, env, TIp0, p0),
            CSRefToLuaValue(apis, env, TIp1, p1),
            DataTransfer::CopyValueType(apis, env, p2, TIp2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

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
// Boolean Invoke(System.Object, System.Object, UnityEngine.Vector2, UnityEngine.GameObject) declare in UIEventID`3[System.Object,UnityEngine.Vector2,UnityEngine.GameObject]
static bool b_bOOS_r4r4_o(void* target, Il2CppObject* p0, Il2CppObject* p1, struct S_r4r4_ p2, Il2CppObject* p3, MethodInfo* method) {
    // PLog("Running b_bOOS_r4r4_o");
            
    auto TIp0 = GetParameterType(method, 0);
        
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
    CSRefToLuaValue(apis, env, TIp0, p0),
            CSRefToLuaValue(apis, env, TIp1, p1),
            DataTransfer::CopyValueType(apis, env, p2, TIp2),
            CSRefToLuaValue(apis, env, TIp3, p3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

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
// Boolean Invoke(System.Object, Assets.Scripts.UI.InTheGame.OSOHUD.OSOLevelRetInfo) declare in UIEventID`1[Assets.Scripts.UI.InTheGame.OSOHUD.OSOLevelRetInfo]
static bool b_bOS_i4i4_(void* target, Il2CppObject* p0, struct S_i4i4_ p1, MethodInfo* method) {
    // PLog("Running b_bOS_i4i4_");
            
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
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Boolean Invoke(System.Object, Assets.Scripts.UI.InGameCommon.ActiveHighRelativeInfo) declare in UIEventID`1[Assets.Scripts.UI.InGameCommon.ActiveHighRelativeInfo]
static bool b_bOS_i4i4o_(void* target, Il2CppObject* p0, struct S_i4i4o_ p1, MethodInfo* method) {
    // PLog("Running b_bOS_i4i4o_");
            
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
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Boolean Invoke(System.Object, UnityEngine.Vector2) declare in GenericDelegate`2[System.Object,UnityEngine.Vector2]
static bool b_bOS_r4r4_(void* target, Il2CppObject* p0, struct S_r4r4_ p1, MethodInfo* method) {
    // PLog("Running b_bOS_r4r4_");
            
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
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Boolean Invoke(System.Object, UnityEngine.Vector2, UnityEngine.GameObject) declare in GenericDelegate`3[System.Object,UnityEngine.Vector2,UnityEngine.GameObject]
static bool b_bOS_r4r4_o(void* target, Il2CppObject* p0, struct S_r4r4_ p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_bOS_r4r4_o");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
        
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
    CSRefToLuaValue(apis, env, TIp0, p0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1),
            CSRefToLuaValue(apis, env, TIp2, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

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
// Boolean Invoke(System.Object, Assets.Scripts.UI.InTheGame.GlobalInfo.GlobalTipsPlayerInfo) declare in UIEventID`1[Assets.Scripts.UI.InTheGame.GlobalInfo.GlobalTipsPlayerInfo]
static bool b_bOS_u4oob_(void* target, Il2CppObject* p0, struct S_u4oob_ p1, MethodInfo* method) {
    // PLog("Running b_bOS_u4oob_");
            
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
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Boolean Invoke(System.Object, BackpackDragInfo) declare in UIEventID`1[Assets.Scripts.UI.InTheGame.Standard.UIEquip+BackpackDragInfo]
static bool b_bOS_u4u4i4S_r4r4_u4_(void* target, Il2CppObject* p0, struct S_u4u4i4S_r4r4_u4_ p1, MethodInfo* method) {
    // PLog("Running b_bOS_u4u4i4S_r4r4_u4_");
            
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
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Boolean Invoke(System.Object, RankChangeInfo) declare in UIEventID`1[Assets.Scripts.UI.InTheGame.PlayerRank.UIMiddleLeftInfo+RankChangeInfo]
static bool b_bOS_u4u4r4i4b_(void* target, Il2CppObject* p0, struct S_u4u4r4i4b_ p1, MethodInfo* method) {
    // PLog("Running b_bOS_u4u4r4i4b_");
            
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
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Boolean Invoke(System.Object, AddEquipmentToHeroData) declare in UIEventID`1[Assets.Scripts.UI.InTheGame.Standard.UIEquip+AddEquipmentToHeroData]
static bool b_bOS_u4u4u4_(void* target, Il2CppObject* p0, struct S_u4u4u4_ p1, MethodInfo* method) {
    // PLog("Running b_bOS_u4u4u4_");
            
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
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Boolean Invoke(System.Object, SelectEquipmentData) declare in UIEventID`1[Assets.Scripts.UI.InTheGame.Standard.UIEquip+SelectEquipmentData]
static bool b_bOS_u4u4u4u4_(void* target, Il2CppObject* p0, struct S_u4u4u4u4_ p1, MethodInfo* method) {
    // PLog("Running b_bOS_u4u4u4u4_");
            
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
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Boolean Invoke(System.Object, UICommonPlayerHeadData, Boolean) declare in UIEventID`2[Assets.Scripts.UI.InGameCommon.UIPlayerData+UICommonPlayerHeadData,System.Boolean]
static bool b_bOS_u8i4si4u8u8u8_b(void* target, Il2CppObject* p0, struct S_u8i4si4u8u8u8_ p1, bool p2, MethodInfo* method) {
    // PLog("Running b_bOS_u8i4si4u8u8u8_b");
            
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

    pesapi_value argv[3]{
    CSRefToLuaValue(apis, env, TIp0, p0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1),
            converter::Converter<bool>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

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
// Boolean Invoke(System.Object, Boolean) declare in UIEventID`1[System.Boolean]
static bool b_bOb(void* target, Il2CppObject* p0, bool p1, MethodInfo* method) {
    // PLog("Running b_bOb");
            
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

    pesapi_value argv[2]{
    CSRefToLuaValue(apis, env, TIp0, p0),
            converter::Converter<bool>::toScript(apis, env, p1)
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
// Boolean Invoke(System.Object, Boolean, Int32) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateUILuaPrefabSetVisibleByObject
static bool b_bObi4(void* target, Il2CppObject* p0, bool p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_bObi4");
            
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

    pesapi_value argv[3]{
    CSRefToLuaValue(apis, env, TIp0, p0),
            converter::Converter<bool>::toScript(apis, env, p1),
            converter::Converter<int32_t>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

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
// Boolean Invoke(System.Object, Boolean, Int32, ResData.COM_LINEUP_GAMETYPE) declare in UIEventID`3[System.Boolean,System.Int32,ResData.COM_LINEUP_GAMETYPE]
static bool b_bObi4i4(void* target, Il2CppObject* p0, bool p1, int32_t p2, int32_t p3, MethodInfo* method) {
    // PLog("Running b_bObi4i4");
            
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

    pesapi_value argv[4]{
    CSRefToLuaValue(apis, env, TIp0, p0),
            converter::Converter<bool>::toScript(apis, env, p1),
            converter::Converter<int32_t>::toScript(apis, env, p2),
            converter::Converter<int32_t>::toScript(apis, env, p3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

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
// Boolean Invoke(System.Object, Int32) declare in UIEventID`1[System.Int32]
static bool b_bOi4(void* target, Il2CppObject* p0, int32_t p1, MethodInfo* method) {
    // PLog("Running b_bOi4");
            
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

    pesapi_value argv[2]{
    CSRefToLuaValue(apis, env, TIp0, p0),
            converter::Converter<int32_t>::toScript(apis, env, p1)
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
// Boolean Invoke(System.Object, Int32, Boolean) declare in UIEventID`2[System.Int32,System.Boolean]
static bool b_bOi4b(void* target, Il2CppObject* p0, int32_t p1, bool p2, MethodInfo* method) {
    // PLog("Running b_bOi4b");
            
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

    pesapi_value argv[3]{
    CSRefToLuaValue(apis, env, TIp0, p0),
            converter::Converter<int32_t>::toScript(apis, env, p1),
            converter::Converter<bool>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

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
// Boolean Invoke(System.Object, Int32, Boolean, Boolean) declare in UIEventID`3[System.Int32,System.Boolean,System.Boolean]
static bool b_bOi4bb(void* target, Il2CppObject* p0, int32_t p1, bool p2, bool p3, MethodInfo* method) {
    // PLog("Running b_bOi4bb");
            
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

    pesapi_value argv[4]{
    CSRefToLuaValue(apis, env, TIp0, p0),
            converter::Converter<int32_t>::toScript(apis, env, p1),
            converter::Converter<bool>::toScript(apis, env, p2),
            converter::Converter<bool>::toScript(apis, env, p3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

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
// Boolean Invoke(System.Object, Int32, Boolean, UnityEngine.RectTransform) declare in UIEventID`3[System.Int32,System.Boolean,UnityEngine.RectTransform]
static bool b_bOi4bo(void* target, Il2CppObject* p0, int32_t p1, bool p2, Il2CppObject* p3, MethodInfo* method) {
    // PLog("Running b_bOi4bo");
            
    auto TIp0 = GetParameterType(method, 0);
                                
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
    CSRefToLuaValue(apis, env, TIp0, p0),
            converter::Converter<int32_t>::toScript(apis, env, p1),
            converter::Converter<bool>::toScript(apis, env, p2),
            CSRefToLuaValue(apis, env, TIp3, p3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

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
// Boolean Invoke(System.Object, Int32, Int32) declare in UIEventID`2[System.Int32,System.Int32]
static bool b_bOi4i4(void* target, Il2CppObject* p0, int32_t p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_bOi4i4");
            
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

    pesapi_value argv[3]{
    CSRefToLuaValue(apis, env, TIp0, p0),
            converter::Converter<int32_t>::toScript(apis, env, p1),
            converter::Converter<int32_t>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

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
// Boolean Invoke(System.Object, Int32, Int32, Boolean) declare in UIEventID`3[System.Int32,System.Int32,System.Boolean]
static bool b_bOi4i4b(void* target, Il2CppObject* p0, int32_t p1, int32_t p2, bool p3, MethodInfo* method) {
    // PLog("Running b_bOi4i4b");
            
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

    pesapi_value argv[4]{
    CSRefToLuaValue(apis, env, TIp0, p0),
            converter::Converter<int32_t>::toScript(apis, env, p1),
            converter::Converter<int32_t>::toScript(apis, env, p2),
            converter::Converter<bool>::toScript(apis, env, p3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

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
// Boolean Invoke(System.Object, Int32, Int32, Boolean, LuaUIPointerEventData) declare in UIEventID`4[System.Int32,System.Int32,System.Boolean,LuaUIPointerEventData]
static bool b_bOi4i4bo(void* target, Il2CppObject* p0, int32_t p1, int32_t p2, bool p3, Il2CppObject* p4, MethodInfo* method) {
    // PLog("Running b_bOi4i4bo");
            
    auto TIp0 = GetParameterType(method, 0);
                                            
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
            converter::Converter<int32_t>::toScript(apis, env, p2),
            converter::Converter<bool>::toScript(apis, env, p3),
            CSRefToLuaValue(apis, env, TIp4, p4)
    };
    auto luaret = apis->call_function(env, func, 0, 5, argv);

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
// Boolean Invoke(System.Object, Int32, XLua.LuaTable) declare in UIEventID`2[System.Int32,XLua.LuaTable]
static bool b_bOi4o(void* target, Il2CppObject* p0, int32_t p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_bOi4o");
            
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
    CSRefToLuaValue(apis, env, TIp0, p0),
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
             
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);
        
    return ret;

}
// Boolean Invoke(System.Object, Int32, Assets.Scripts.UI.CardComponent.Item.UICardItem, System.Action) declare in UIEventID`3[System.Int32,Assets.Scripts.UI.CardComponent.Item.UICardItem,System.Action]
static bool b_bOi4oo(void* target, Il2CppObject* p0, int32_t p1, Il2CppObject* p2, Il2CppObject* p3, MethodInfo* method) {
    // PLog("Running b_bOi4oo");
            
    auto TIp0 = GetParameterType(method, 0);
                    
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
    CSRefToLuaValue(apis, env, TIp0, p0),
            converter::Converter<int32_t>::toScript(apis, env, p1),
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
             
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);
        
    return ret;

}
// Boolean Invoke(System.Object, Int32, UInt32, UInt32, UInt32) declare in UIEventID`4[System.Int32,System.UInt32,System.UInt32,System.UInt32]
static bool b_bOi4u4u4u4(void* target, Il2CppObject* p0, int32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, MethodInfo* method) {
    // PLog("Running b_bOi4u4u4u4");
            
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

    pesapi_value argv[5]{
    CSRefToLuaValue(apis, env, TIp0, p0),
            converter::Converter<int32_t>::toScript(apis, env, p1),
            converter::Converter<uint32_t>::toScript(apis, env, p2),
            converter::Converter<uint32_t>::toScript(apis, env, p3),
            converter::Converter<uint32_t>::toScript(apis, env, p4)
    };
    auto luaret = apis->call_function(env, func, 0, 5, argv);

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
// Boolean Invoke(System.Object, T1) declare in UIEventID`1[T1]
static bool b_bOo(void* target, Il2CppObject* p0, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_bOo");
            
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
// Boolean Invoke(System.Object, EquipWithActor, UnityEngine.Vector2, Boolean) declare in UIEventID`3[Assets.Scripts.UI.InTheGame.Common.UIEquipCommonItem+EquipWithActor,UnityEngine.Vector2,System.Boolean]
static bool b_bOoS_r4r4_b(void* target, Il2CppObject* p0, Il2CppObject* p1, struct S_r4r4_ p2, bool p3, MethodInfo* method) {
    // PLog("Running b_bOoS_r4r4_b");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
        
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

    pesapi_value argv[4]{
    CSRefToLuaValue(apis, env, TIp0, p0),
            CSRefToLuaValue(apis, env, TIp1, p1),
            DataTransfer::CopyValueType(apis, env, p2, TIp2),
            converter::Converter<bool>::toScript(apis, env, p3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

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
// Boolean Invoke(System.Object, EquipWithActor, UnityEngine.Vector2, Assets.Scripts.UI.InTheGame.Equip.UIEquipToastSyntheticItem, Boolean) declare in UIEventID`4[Assets.Scripts.UI.InTheGame.Common.UIEquipCommonItem+EquipWithActor,UnityEngine.Vector2,Assets.Scripts.UI.InTheGame.Equip.UIEquipToastSyntheticItem,System.Boolean]
static bool b_bOoS_r4r4_ob(void* target, Il2CppObject* p0, Il2CppObject* p1, struct S_r4r4_ p2, Il2CppObject* p3, bool p4, MethodInfo* method) {
    // PLog("Running b_bOoS_r4r4_ob");
            
    auto TIp0 = GetParameterType(method, 0);
        
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

    pesapi_value argv[5]{
    CSRefToLuaValue(apis, env, TIp0, p0),
            CSRefToLuaValue(apis, env, TIp1, p1),
            DataTransfer::CopyValueType(apis, env, p2, TIp2),
            CSRefToLuaValue(apis, env, TIp3, p3),
            converter::Converter<bool>::toScript(apis, env, p4)
    };
    auto luaret = apis->call_function(env, func, 0, 5, argv);

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
// Boolean Invoke(System.Object, Assets.Scripts.UI.InTheGame.Base.UIDpsDataItemBase, Boolean) declare in UIEventID`2[Assets.Scripts.UI.InTheGame.Base.UIDpsDataItemBase,System.Boolean]
static bool b_bOob(void* target, Il2CppObject* p0, Il2CppObject* p1, bool p2, MethodInfo* method) {
    // PLog("Running b_bOob");
            
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

    pesapi_value argv[3]{
    CSRefToLuaValue(apis, env, TIp0, p0),
            CSRefToLuaValue(apis, env, TIp1, p1),
            converter::Converter<bool>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

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
// Boolean Invoke(System.Object, Assets.Scripts.UI.InTheGame.Replay.ControlItemConfig, Int32) declare in UIEventID`2[Assets.Scripts.UI.InTheGame.Replay.ControlItemConfig,System.Int32]
static bool b_bOoi4(void* target, Il2CppObject* p0, Il2CppObject* p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_bOoi4");
            
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

    pesapi_value argv[3]{
    CSRefToLuaValue(apis, env, TIp0, p0),
            CSRefToLuaValue(apis, env, TIp1, p1),
            converter::Converter<int32_t>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

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
// Boolean Invoke(System.Object, T1, T2) declare in UIEventID`2[T1,T2]
static bool b_bOoo(void* target, Il2CppObject* p0, Il2CppObject* p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_bOoo");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
        
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
    CSRefToLuaValue(apis, env, TIp0, p0),
            CSRefToLuaValue(apis, env, TIp1, p1),
            CSRefToLuaValue(apis, env, TIp2, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

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
// Boolean Invoke(System.Object, EquipWithActor, Assets.Scripts.UI.InTheGame.Equip.UIEquipToastSyntheticItem, UnityEngine.Vector2, Boolean) declare in UIEventID`4[Assets.Scripts.UI.InTheGame.Common.UIEquipCommonItem+EquipWithActor,Assets.Scripts.UI.InTheGame.Equip.UIEquipToastSyntheticItem,UnityEngine.Vector2,System.Boolean]
static bool b_bOooS_r4r4_b(void* target, Il2CppObject* p0, Il2CppObject* p1, Il2CppObject* p2, struct S_r4r4_ p3, bool p4, MethodInfo* method) {
    // PLog("Running b_bOooS_r4r4_b");
            
    auto TIp0 = GetParameterType(method, 0);
        
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

    pesapi_value argv[5]{
    CSRefToLuaValue(apis, env, TIp0, p0),
            CSRefToLuaValue(apis, env, TIp1, p1),
            CSRefToLuaValue(apis, env, TIp2, p2),
            DataTransfer::CopyValueType(apis, env, p3, TIp3),
            converter::Converter<bool>::toScript(apis, env, p4)
    };
    auto luaret = apis->call_function(env, func, 0, 5, argv);

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
// Boolean Invoke(System.Object, EquipWithActor, Assets.Scripts.UI.InTheGame.Equip.UIEquipToastSyntheticItem, Boolean) declare in UIEventID`3[Assets.Scripts.UI.InTheGame.Common.UIEquipCommonItem+EquipWithActor,Assets.Scripts.UI.InTheGame.Equip.UIEquipToastSyntheticItem,System.Boolean]
static bool b_bOoob(void* target, Il2CppObject* p0, Il2CppObject* p1, Il2CppObject* p2, bool p3, MethodInfo* method) {
    // PLog("Running b_bOoob");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
        
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

    pesapi_value argv[4]{
    CSRefToLuaValue(apis, env, TIp0, p0),
            CSRefToLuaValue(apis, env, TIp1, p1),
            CSRefToLuaValue(apis, env, TIp2, p2),
            converter::Converter<bool>::toScript(apis, env, p3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

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
// Boolean Invoke(System.Object, T1, T2, T3) declare in UIEventID`3[T1,T2,T3]
static bool b_bOooo(void* target, Il2CppObject* p0, Il2CppObject* p1, Il2CppObject* p2, Il2CppObject* p3, MethodInfo* method) {
    // PLog("Running b_bOooo");
            
    auto TIp0 = GetParameterType(method, 0);
        
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
    CSRefToLuaValue(apis, env, TIp0, p0),
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
             
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);
        
    return ret;

}
// Boolean Invoke(System.Object, T1, T2, T3, T4) declare in UIEventID`4[T1,T2,T3,T4]
static bool b_bOoooo(void* target, Il2CppObject* p0, Il2CppObject* p1, Il2CppObject* p2, Il2CppObject* p3, Il2CppObject* p4, MethodInfo* method) {
    // PLog("Running b_bOoooo");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
        
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
            CSRefToLuaValue(apis, env, TIp1, p1),
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
             
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);
        
    return ret;

}
// Boolean Invoke(System.Object, Timi.TimiPointerEventData, Assets.Scripts.UI.CardComponent.Item.UICardItem, Assets.Scripts.UI.CardComponent.Item.UICardItemShowData, UInt32) declare in UIEventID`4[Timi.TimiPointerEventData,Assets.Scripts.UI.CardComponent.Item.UICardItem,Assets.Scripts.UI.CardComponent.Item.UICardItemShowData,System.UInt32]
static bool b_bOooou4(void* target, Il2CppObject* p0, Il2CppObject* p1, Il2CppObject* p2, Il2CppObject* p3, uint32_t p4, MethodInfo* method) {
    // PLog("Running b_bOooou4");
            
    auto TIp0 = GetParameterType(method, 0);
        
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

    pesapi_value argv[5]{
    CSRefToLuaValue(apis, env, TIp0, p0),
            CSRefToLuaValue(apis, env, TIp1, p1),
            CSRefToLuaValue(apis, env, TIp2, p2),
            CSRefToLuaValue(apis, env, TIp3, p3),
            converter::Converter<uint32_t>::toScript(apis, env, p4)
    };
    auto luaret = apis->call_function(env, func, 0, 5, argv);

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
// Boolean Invoke(System.Object, System.Collections.Generic.Dictionary`2[System.UInt32,RectRtRecord], Single) declare in UIEventID`2[System.Collections.Generic.Dictionary`2[System.UInt32,RectRtRecord],System.Single]
static bool b_bOor4(void* target, Il2CppObject* p0, Il2CppObject* p1, float p2, MethodInfo* method) {
    // PLog("Running b_bOor4");
            
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

    pesapi_value argv[3]{
    CSRefToLuaValue(apis, env, TIp0, p0),
            CSRefToLuaValue(apis, env, TIp1, p1),
            converter::Converter<float>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

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
// Boolean Invoke(System.Object, ResData.ResEquipDataBin, UInt32, Assets.Scripts.Framework.UI.UIPrefab2DClass, UnityEngine.RectTransform) declare in UIEventID`4[ResData.ResEquipDataBin,System.UInt32,Assets.Scripts.Framework.UI.UIPrefab2DClass,UnityEngine.RectTransform]
static bool b_bOou4oo(void* target, Il2CppObject* p0, Il2CppObject* p1, uint32_t p2, Il2CppObject* p3, Il2CppObject* p4, MethodInfo* method) {
    // PLog("Running b_bOou4oo");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
                    
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
            CSRefToLuaValue(apis, env, TIp1, p1),
            converter::Converter<uint32_t>::toScript(apis, env, p2),
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
             
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);
        
    return ret;

}
// Boolean Invoke(System.Object, System.String) declare in UIEventID`1[System.String]
static bool b_bOs(void* target, Il2CppObject* p0, Il2CppString* p1, MethodInfo* method) {
    // PLog("Running b_bOs");
            
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
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);
        
    return ret;

}
// Boolean Invoke(System.Object, UInt32) declare in UIEventID`1[System.UInt32]
static bool b_bOu4(void* target, Il2CppObject* p0, uint32_t p1, MethodInfo* method) {
    // PLog("Running b_bOu4");
            
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

    pesapi_value argv[2]{
    CSRefToLuaValue(apis, env, TIp0, p0),
            converter::Converter<uint32_t>::toScript(apis, env, p1)
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
// Boolean Invoke(System.Object, UInt32, RankItemAnimInfo) declare in UIEventID`2[System.UInt32,Assets.Scripts.UI.InTheGame.PlayerRank.UIMiddleLeftInfo+RankItemAnimInfo]
static bool b_bOu4S_i4i4i4sS_u4u4u4i4u4o__(void* target, Il2CppObject* p0, uint32_t p1, struct S_i4i4i4sS_u4u4u4i4u4o__ p2, MethodInfo* method) {
    // PLog("Running b_bOu4S_i4i4i4sS_u4u4u4i4u4o__");
            
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
    CSRefToLuaValue(apis, env, TIp0, p0),
            converter::Converter<uint32_t>::toScript(apis, env, p1),
            DataTransfer::CopyValueType(apis, env, p2, TIp2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

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
// Boolean Invoke(System.Object, UInt32, UnityEngine.Vector3) declare in UIEventID`2[System.UInt32,UnityEngine.Vector3]
static bool b_bOu4S_r4r4r4_(void* target, Il2CppObject* p0, uint32_t p1, struct S_r4r4r4_ p2, MethodInfo* method) {
    // PLog("Running b_bOu4S_r4r4r4_");
            
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
    CSRefToLuaValue(apis, env, TIp0, p0),
            converter::Converter<uint32_t>::toScript(apis, env, p1),
            DataTransfer::CopyValueType(apis, env, p2, TIp2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

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
// Boolean Invoke(System.Object, UInt32, ChatLikeBooInfo) declare in UIEventID`2[System.UInt32,SGW+ChatLikeBooInfo]
static bool b_bOu4S_u4u4u4_(void* target, Il2CppObject* p0, uint32_t p1, struct S_u4u4u4_ p2, MethodInfo* method) {
    // PLog("Running b_bOu4S_u4u4u4_");
            
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
    CSRefToLuaValue(apis, env, TIp0, p0),
            converter::Converter<uint32_t>::toScript(apis, env, p1),
            DataTransfer::CopyValueType(apis, env, p2, TIp2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

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
// Boolean Invoke(System.Object, UInt32, Boolean) declare in UIEventID`2[System.UInt32,System.Boolean]
static bool b_bOu4b(void* target, Il2CppObject* p0, uint32_t p1, bool p2, MethodInfo* method) {
    // PLog("Running b_bOu4b");
            
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

    pesapi_value argv[3]{
    CSRefToLuaValue(apis, env, TIp0, p0),
            converter::Converter<uint32_t>::toScript(apis, env, p1),
            converter::Converter<bool>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

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
// Boolean Invoke(System.Object, UInt32, ResData.RES_RELATION_ID) declare in UIEventID`2[System.UInt32,ResData.RES_RELATION_ID]
static bool b_bOu4i4(void* target, Il2CppObject* p0, uint32_t p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_bOu4i4");
            
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

    pesapi_value argv[3]{
    CSRefToLuaValue(apis, env, TIp0, p0),
            converter::Converter<uint32_t>::toScript(apis, env, p1),
            converter::Converter<int32_t>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

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
// Boolean Invoke(System.Object, UInt32, UnityEngine.RectTransform) declare in UIEventID`2[System.UInt32,UnityEngine.RectTransform]
static bool b_bOu4o(void* target, Il2CppObject* p0, uint32_t p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_bOu4o");
            
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
    CSRefToLuaValue(apis, env, TIp0, p0),
            converter::Converter<uint32_t>::toScript(apis, env, p1),
            CSRefToLuaValue(apis, env, TIp2, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

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
// Boolean Invoke(System.Object, UInt32, Assets.Scripts.UI.InTheGame.Equip.UIEquipToastSyntheticItem, Boolean) declare in UIEventID`3[System.UInt32,Assets.Scripts.UI.InTheGame.Equip.UIEquipToastSyntheticItem,System.Boolean]
static bool b_bOu4ob(void* target, Il2CppObject* p0, uint32_t p1, Il2CppObject* p2, bool p3, MethodInfo* method) {
    // PLog("Running b_bOu4ob");
            
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

    pesapi_value argv[4]{
    CSRefToLuaValue(apis, env, TIp0, p0),
            converter::Converter<uint32_t>::toScript(apis, env, p1),
            CSRefToLuaValue(apis, env, TIp2, p2),
            converter::Converter<bool>::toScript(apis, env, p3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

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
// Boolean Invoke(System.Object, UInt32, UnityEngine.RectTransform, Int32) declare in UIEventID`3[System.UInt32,UnityEngine.RectTransform,System.Int32]
static bool b_bOu4oi4(void* target, Il2CppObject* p0, uint32_t p1, Il2CppObject* p2, int32_t p3, MethodInfo* method) {
    // PLog("Running b_bOu4oi4");
            
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

    pesapi_value argv[4]{
    CSRefToLuaValue(apis, env, TIp0, p0),
            converter::Converter<uint32_t>::toScript(apis, env, p1),
            CSRefToLuaValue(apis, env, TIp2, p2),
            converter::Converter<int32_t>::toScript(apis, env, p3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

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
// Boolean Invoke(System.Object, UInt32, Single) declare in UIEventID`2[System.UInt32,System.Single]
static bool b_bOu4r4(void* target, Il2CppObject* p0, uint32_t p1, float p2, MethodInfo* method) {
    // PLog("Running b_bOu4r4");
            
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

    pesapi_value argv[3]{
    CSRefToLuaValue(apis, env, TIp0, p0),
            converter::Converter<uint32_t>::toScript(apis, env, p1),
            converter::Converter<float>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

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
// Boolean Invoke(System.Object, UInt32, Single, Boolean) declare in UIEventID`3[System.UInt32,System.Single,System.Boolean]
static bool b_bOu4r4b(void* target, Il2CppObject* p0, uint32_t p1, float p2, bool p3, MethodInfo* method) {
    // PLog("Running b_bOu4r4b");
            
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

    pesapi_value argv[4]{
    CSRefToLuaValue(apis, env, TIp0, p0),
            converter::Converter<uint32_t>::toScript(apis, env, p1),
            converter::Converter<float>::toScript(apis, env, p2),
            converter::Converter<bool>::toScript(apis, env, p3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

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
// Boolean Invoke(System.Object, UInt32, UInt32) declare in UIEventID`2[System.UInt32,System.UInt32]
static bool b_bOu4u4(void* target, Il2CppObject* p0, uint32_t p1, uint32_t p2, MethodInfo* method) {
    // PLog("Running b_bOu4u4");
            
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

    pesapi_value argv[3]{
    CSRefToLuaValue(apis, env, TIp0, p0),
            converter::Converter<uint32_t>::toScript(apis, env, p1),
            converter::Converter<uint32_t>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

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
// Boolean Invoke(System.Object, UInt32, UInt32, Int32, UnityEngine.RectTransform) declare in UIEventID`4[System.UInt32,System.UInt32,System.Int32,UnityEngine.RectTransform]
static bool b_bOu4u4i4o(void* target, Il2CppObject* p0, uint32_t p1, uint32_t p2, int32_t p3, Il2CppObject* p4, MethodInfo* method) {
    // PLog("Running b_bOu4u4i4o");
            
    auto TIp0 = GetParameterType(method, 0);
                                            
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
            converter::Converter<uint32_t>::toScript(apis, env, p1),
            converter::Converter<uint32_t>::toScript(apis, env, p2),
            converter::Converter<int32_t>::toScript(apis, env, p3),
            CSRefToLuaValue(apis, env, TIp4, p4)
    };
    auto luaret = apis->call_function(env, func, 0, 5, argv);

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
// Boolean Invoke(System.Object, UInt32, UInt32, UnityEngine.RectTransform) declare in UIEventID`3[System.UInt32,System.UInt32,UnityEngine.RectTransform]
static bool b_bOu4u4o(void* target, Il2CppObject* p0, uint32_t p1, uint32_t p2, Il2CppObject* p3, MethodInfo* method) {
    // PLog("Running b_bOu4u4o");
            
    auto TIp0 = GetParameterType(method, 0);
                                
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
    CSRefToLuaValue(apis, env, TIp0, p0),
            converter::Converter<uint32_t>::toScript(apis, env, p1),
            converter::Converter<uint32_t>::toScript(apis, env, p2),
            CSRefToLuaValue(apis, env, TIp3, p3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

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
// Boolean Invoke(System.Object, UInt32, UInt32, UInt32, UInt32) declare in UIEventID`4[System.UInt32,System.UInt32,System.UInt32,System.UInt32]
static bool b_bOu4u4u4u4(void* target, Il2CppObject* p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, MethodInfo* method) {
    // PLog("Running b_bOu4u4u4u4");
            
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

    pesapi_value argv[5]{
    CSRefToLuaValue(apis, env, TIp0, p0),
            converter::Converter<uint32_t>::toScript(apis, env, p1),
            converter::Converter<uint32_t>::toScript(apis, env, p2),
            converter::Converter<uint32_t>::toScript(apis, env, p3),
            converter::Converter<uint32_t>::toScript(apis, env, p4)
    };
    auto luaret = apis->call_function(env, func, 0, 5, argv);

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
// Boolean Invoke(System.__DTString ByRef, Int32, Int32 ByRef) declare in System.DateTimeParse+MatchNumberDelegate
static bool b_bPS_S_S_p_i4_i4cob_i4Pi4(void* target, struct S_S_S_p_i4_i4cob_* p0, int32_t p1, int32_t* p2, MethodInfo* method) {
    // PLog("Running b_bPS_S_S_p_i4_i4cob_i4Pi4");
            
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

    pesapi_value argv[3]{
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false)),
            converter::Converter<int32_t>::toScript(apis, env, p1),
            converter::Converter<std::reference_wrapper<int32_t>>::toScript(apis, env, *p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

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
// Boolean Invoke(PooledCollections.PoolObjHandle`1[Assets.Scripts.GameLogic.ActorLinker] ByRef) declare in Assets.Scripts.GameLogic.ActorFilterDelegate
static bool b_bPS_u4o_(void* target, struct S_u4o_* p0, MethodInfo* method) {
    // PLog("Running b_bPS_u4o_");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
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
// Boolean Invoke(UnityEngine.Rendering.SubMeshDescriptor) declare in System.Predicate`1[UnityEngine.Rendering.SubMeshDescriptor]
static bool b_bS_S_S_r4r4r4_S_r4r4r4__i4i4i4i4i4i4_(void* target, struct S_S_S_r4r4r4_S_r4r4r4__i4i4i4i4i4i4_ p0, MethodInfo* method) {
    // PLog("Running b_bS_S_S_r4r4r4_S_r4r4r4__i4i4i4i4i4i4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(UnityEngine.UICharInfo) declare in System.Predicate`1[UnityEngine.UICharInfo]
static bool b_bS_S_r4r4_r4_(void* target, struct S_S_r4r4_r4_ p0, MethodInfo* method) {
    // PLog("Running b_bS_S_r4r4_r4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(Particle) declare in System.Predicate`1[UnityEngine.ParticleSystem+Particle]
static bool b_bS_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_i4u1u1u1u1_u4u4r4r4i4r4r4u4_(void* target, struct S_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_i4u1u1u1u1_u4u4r4r4i4r4r4u4_ p0, MethodInfo* method) {
    // PLog("Running b_bS_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_i4u1u1u1u1_u4u4r4r4i4r4r4u4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(UnityEngine.UIVertex) declare in System.Predicate`1[UnityEngine.UIVertex]
static bool b_bS_S_r4r4r4_S_r4r4r4_S_r4r4r4r4_S_i4u1u1u1u1_S_r4r4_S_r4r4_S_r4r4_S_r4r4__(void* target, struct S_S_r4r4r4_S_r4r4r4_S_r4r4r4r4_S_i4u1u1u1u1_S_r4r4_S_r4r4_S_r4r4_S_r4r4__ p0, MethodInfo* method) {
    // PLog("Running b_bS_S_r4r4r4_S_r4r4r4_S_r4r4r4r4_S_i4u1u1u1u1_S_r4r4_S_r4r4_S_r4r4_S_r4r4__");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(ActorFloatScore) declare in System.Predicate`1[Assets.Scripts.GameLogic.BattleFloatActorComponent+ActorFloatScore]
static bool b_bS_S_u4o_i8_(void* target, struct S_S_u4o_i8_ p0, MethodInfo* method) {
    // PLog("Running b_bS_S_u4o_i8_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(stGridEquipInfo) declare in System.Predicate`1[SGW+stGridEquipInfo]
static bool b_bS_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4_(void* target, struct S_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4_ p0, MethodInfo* method) {
    // PLog("Running b_bS_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(T) declare in System.Predicate`1[T]
static bool b_bS__(void* target, struct S__ p0, MethodInfo* method) {
    // PLog("Running b_bS__");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(PixPuerts.LazyMemberRegisterInfo) declare in System.Predicate`1[PixPuerts.LazyMemberRegisterInfo]
static bool b_bS_bsi4bb_(void* target, struct S_bsi4bb_ p0, MethodInfo* method) {
    // PLog("Running b_bS_bsi4bb_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(UnityEngine.UIElements.EasingFunction) declare in System.Predicate`1[UnityEngine.UIElements.EasingFunction]
static bool b_bS_i4_(void* target, struct S_i4_ p0, MethodInfo* method) {
    // PLog("Running b_bS_i4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(VInt2) declare in System.Predicate`1[VInt2]
static bool b_bS_i4i4_(void* target, struct S_i4i4_ p0, MethodInfo* method) {
    // PLog("Running b_bS_i4i4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(BlurCameraData) declare in System.Predicate`1[Yarp.UIBlurSetting+BlurCameraData]
static bool b_bS_i4i4i4bbi4_(void* target, struct S_i4i4i4bbi4_ p0, MethodInfo* method) {
    // PLog("Running b_bS_i4i4i4bbi4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(UnityEngine.Rendering.VertexAttributeDescriptor) declare in System.Predicate`1[UnityEngine.Rendering.VertexAttributeDescriptor]
static bool b_bS_i4i4i4i4_(void* target, struct S_i4i4i4i4_ p0, MethodInfo* method) {
    // PLog("Running b_bS_i4i4i4i4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(Assets.Scripts.UI.InGameCommon.ActiveHighRelativeInfo) declare in GenericDelegate`1[Assets.Scripts.UI.InGameCommon.ActiveHighRelativeInfo]
static bool b_bS_i4i4o_(void* target, struct S_i4i4o_ p0, MethodInfo* method) {
    // PLog("Running b_bS_i4i4o_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(Assets.Scripts.Framework.AssetService.AssetData) declare in System.Predicate`1[Assets.Scripts.Framework.AssetService.AssetData]
static bool b_bS_i4i4ossOosi4i4i1i1i1i4Oob_(void* target, struct S_i4i4ossOosi4i4i1i1i1i4Oob_ p0, MethodInfo* method) {
    // PLog("Running b_bS_i4i4ossOosi4i4i1i1i1i4Oob_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(UnityEngine.UILineInfo) declare in System.Predicate`1[UnityEngine.UILineInfo]
static bool b_bS_i4i4r4r4_(void* target, struct S_i4i4r4r4_ p0, MethodInfo* method) {
    // PLog("Running b_bS_i4i4r4r4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(Assets.Scripts.GameLogic.Project8PreLoadHeroConfig) declare in System.Predicate`1[Assets.Scripts.GameLogic.Project8PreLoadHeroConfig]
static bool b_bS_i4i4so_(void* target, struct S_i4i4so_ p0, MethodInfo* method) {
    // PLog("Running b_bS_i4i4so_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(Assets.Scripts.GameLogic.Project8PreLoadLordConfig) declare in System.Predicate`1[Assets.Scripts.GameLogic.Project8PreLoadLordConfig]
static bool b_bS_i4i4u1o_(void* target, struct S_i4i4u1o_ p0, MethodInfo* method) {
    // PLog("Running b_bS_i4i4u1o_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(RenderRequest) declare in System.Predicate`1[UnityEngine.Camera+RenderRequest]
static bool b_bS_i4oi4_(void* target, struct S_i4oi4_ p0, MethodInfo* method) {
    // PLog("Running b_bS_i4oi4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(UnityEngine.AnimatorClipInfo) declare in System.Predicate`1[UnityEngine.AnimatorClipInfo]
static bool b_bS_i4r4_(void* target, struct S_i4r4_ p0, MethodInfo* method) {
    // PLog("Running b_bS_i4r4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(UnityEngine.UIElements.StylePropertyName) declare in System.Predicate`1[UnityEngine.UIElements.StylePropertyName]
static bool b_bS_i4s_(void* target, struct S_i4s_ p0, MethodInfo* method) {
    // PLog("Running b_bS_i4s_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(Assets.Scripts.Update.StepWeight) declare in System.Predicate`1[Assets.Scripts.Update.StepWeight]
static bool b_bS_i4si4_(void* target, struct S_i4si4_ p0, MethodInfo* method) {
    // PLog("Running b_bS_i4si4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(UnityEngine.Color32) declare in System.Predicate`1[UnityEngine.Color32]
static bool b_bS_i4u1u1u1u1_(void* target, struct S_i4u1u1u1u1_ p0, MethodInfo* method) {
    // PLog("Running b_bS_i4u1u1u1u1_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(RecordItem) declare in System.Predicate`1[EventRouter+EventRouterRecord+RecordItem]
static bool b_bS_oO_(void* target, struct S_oO_ p0, MethodInfo* method) {
    // PLog("Running b_bS_oO_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(UnityEngine.EventSystems.RaycastResult) declare in System.Predicate`1[UnityEngine.EventSystems.RaycastResult]
static bool b_bS_oor4r4i4i4i4S_r4r4r4_S_r4r4r4_S_r4r4_i4_(void* target, struct S_oor4r4i4i4i4S_r4r4r4_S_r4r4r4_S_r4r4_i4_ p0, MethodInfo* method) {
    // PLog("Running b_bS_oor4r4i4i4i4S_r4r4r4_S_r4r4r4_S_r4r4_i4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(NOAH.VFX.AnimPlayInfo) declare in System.Predicate`1[NOAH.VFX.AnimPlayInfo]
static bool b_bS_oosr4r4_(void* target, struct S_oosr4r4_ p0, MethodInfo* method) {
    // PLog("Running b_bS_oosr4r4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(Data) declare in System.Predicate`1[CMTweener+Data]
static bool b_bS_oosr4r4i4soooS_r4r4r4_S_r4r4r4_r4r4r4r4bi4osbor4bS_r4r4r4_i4r4i4ooo_(void* target, struct S_oosr4r4i4soooS_r4r4r4_S_r4r4r4_r4r4r4r4bi4osbor4bS_r4r4r4_i4r4i4ooo_ p0, MethodInfo* method) {
    // PLog("Running b_bS_oosr4r4i4soooS_r4r4r4_S_r4r4r4_r4r4r4r4bi4osbor4bS_r4r4r4_i4r4i4ooo_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(UnityEngine.Rendering.ReflectionProbeBlendInfo) declare in System.Predicate`1[UnityEngine.Rendering.ReflectionProbeBlendInfo]
static bool b_bS_or4_(void* target, struct S_or4_ p0, MethodInfo* method) {
    // PLog("Running b_bS_or4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(UnityEngine.Rendering.RendererList) declare in System.Predicate`1[UnityEngine.Rendering.RendererList]
static bool b_bS_pu4u4u4_(void* target, struct S_pu4u4u4_ p0, MethodInfo* method) {
    // PLog("Running b_bS_pu4u4u4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(UnityEngine.UIElements.TimeValue) declare in System.Predicate`1[UnityEngine.UIElements.TimeValue]
static bool b_bS_r4i4_(void* target, struct S_r4i4_ p0, MethodInfo* method) {
    // PLog("Running b_bS_r4i4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(UnityEngine.Vector2) declare in System.Predicate`1[UnityEngine.Vector2]
static bool b_bS_r4r4_(void* target, struct S_r4r4_ p0, MethodInfo* method) {
    // PLog("Running b_bS_r4r4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(UnityEngine.Vector3) declare in System.Predicate`1[UnityEngine.Vector3]
static bool b_bS_r4r4r4_(void* target, struct S_r4r4r4_ p0, MethodInfo* method) {
    // PLog("Running b_bS_r4r4r4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(UnityEngine.Color) declare in System.Predicate`1[UnityEngine.Color]
static bool b_bS_r4r4r4r4_(void* target, struct S_r4r4r4r4_ p0, MethodInfo* method) {
    // PLog("Running b_bS_r4r4r4r4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(UnityEngine.BoneWeight) declare in System.Predicate`1[UnityEngine.BoneWeight]
static bool b_bS_r4r4r4r4i4i4i4i4_(void* target, struct S_r4r4r4r4i4i4i4i4_ p0, MethodInfo* method) {
    // PLog("Running b_bS_r4r4r4r4i4i4i4i4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(UnityEngine.Matrix4x4) declare in System.Predicate`1[UnityEngine.Matrix4x4]
static bool b_bS_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_(void* target, struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p0, MethodInfo* method) {
    // PLog("Running b_bS_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(UnityEngine.Rendering.SphericalHarmonicsL2) declare in System.Predicate`1[UnityEngine.Rendering.SphericalHarmonicsL2]
static bool b_bS_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_(void* target, struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p0, MethodInfo* method) {
    // PLog("Running b_bS_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(Project8FormatPreLoadPrefabConfig) declare in System.Predicate`1[Assets.Scripts.GameLogic.Project8PreLoadConfig+Project8FormatPreLoadPrefabConfig]
static bool b_bS_si4i4_(void* target, struct S_si4i4_ p0, MethodInfo* method) {
    // PLog("Running b_bS_si4i4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(System.Collections.Generic.KeyValuePair`2[System.String,System.String]) declare in System.Predicate`1[System.Collections.Generic.KeyValuePair`2[System.String,System.String]]
static bool b_bS_ss_(void* target, struct S_ss_ p0, MethodInfo* method) {
    // PLog("Running b_bS_ss_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(Assets.Scripts.GameLogic.Project8PreLoadPrefabConfig) declare in System.Predicate`1[Assets.Scripts.GameLogic.Project8PreLoadPrefabConfig]
static bool b_bS_su1i2_(void* target, struct S_su1i2_ p0, MethodInfo* method) {
    // PLog("Running b_bS_su1i2_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(Project8RelationMod) declare in System.Predicate`1[SGW+Project8RelationMod]
static bool b_bS_u4i4i4i4_(void* target, struct S_u4i4i4i4_ p0, MethodInfo* method) {
    // PLog("Running b_bS_u4i4i4i4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(PooledCollections.PoolObjHandle`1[Assets.Scripts.GameLogic.ActorLinker]) declare in System.Predicate`1[PooledCollections.PoolObjHandle`1[Assets.Scripts.GameLogic.ActorLinker]]
static bool b_bS_u4o_(void* target, struct S_u4o_ p0, MethodInfo* method) {
    // PLog("Running b_bS_u4o_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(Assets.Scripts.UI.InTheGame.GlobalInfo.GlobalTipsPlayerInfo) declare in System.Predicate`1[Assets.Scripts.UI.InTheGame.GlobalInfo.GlobalTipsPlayerInfo]
static bool b_bS_u4oob_(void* target, struct S_u4oob_ p0, MethodInfo* method) {
    // PLog("Running b_bS_u4oob_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(Project8BossAwardItem) declare in System.Predicate`1[SGW+Project8BossAwardItem]
static bool b_bS_u4u1u4i4i4_(void* target, struct S_u4u1u4i4i4_ p0, MethodInfo* method) {
    // PLog("Running b_bS_u4u1u4i4i4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(Assets.Scripts.GameLogic.LordIDInfo) declare in System.Predicate`1[Assets.Scripts.GameLogic.LordIDInfo]
static bool b_bS_u4u4_(void* target, struct S_u4u4_ p0, MethodInfo* method) {
    // PLog("Running b_bS_u4u4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(EquipRecommendInfo) declare in System.Predicate`1[Assets.Scripts.GameLogic.Project8Equipment+EquipRecommendInfo]
static bool b_bS_u4u4bo_(void* target, struct S_u4u4bo_ p0, MethodInfo* method) {
    // PLog("Running b_bS_u4u4bo_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(BackpackDragInfo) declare in GenericDelegate`1[Assets.Scripts.UI.InTheGame.Standard.UIEquip+BackpackDragInfo]
static bool b_bS_u4u4i4S_r4r4_u4_(void* target, struct S_u4u4i4S_r4r4_u4_ p0, MethodInfo* method) {
    // PLog("Running b_bS_u4u4i4S_r4r4_u4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(Assets.Scripts.GameLogic.Project8EquipPair) declare in System.Predicate`1[Assets.Scripts.GameLogic.Project8EquipPair]
static bool b_bS_u4u4i4_(void* target, struct S_u4u4i4_ p0, MethodInfo* method) {
    // PLog("Running b_bS_u4u4i4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(RankChangeInfo) declare in GenericDelegate`1[Assets.Scripts.UI.InTheGame.PlayerRank.UIMiddleLeftInfo+RankChangeInfo]
static bool b_bS_u4u4r4i4b_(void* target, struct S_u4u4r4i4b_ p0, MethodInfo* method) {
    // PLog("Running b_bS_u4u4r4i4b_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(Assets.Scripts.GameSystem.EquipRecipe) declare in System.Predicate`1[Assets.Scripts.GameSystem.EquipRecipe]
static bool b_bS_u4u4u4_(void* target, struct S_u4u4u4_ p0, MethodInfo* method) {
    // PLog("Running b_bS_u4u4u4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(SelectEquipmentData) declare in GenericDelegate`1[Assets.Scripts.UI.InTheGame.Standard.UIEquip+SelectEquipmentData]
static bool b_bS_u4u4u4u4_(void* target, struct S_u4u4u4u4_ p0, MethodInfo* method) {
    // PLog("Running b_bS_u4u4u4u4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(stEquipItem) declare in System.Predicate`1[SGW+stEquipItem]
static bool b_bS_u4u4u4u4u4u4u4u4_(void* target, struct S_u4u4u4u4u4u4u4u4_ p0, MethodInfo* method) {
    // PLog("Running b_bS_u4u4u4u4u4u4u4u4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(UnityEngine.DisplayInfo) declare in System.Predicate`1[UnityEngine.DisplayInfo]
static bool b_bS_u8i4i4S_u4u4_S_i4i4i4i4_s_(void* target, struct S_u8i4i4S_u4u4_S_i4i4i4i4_s_ p0, MethodInfo* method) {
    // PLog("Running b_bS_u8i4i4S_u4u4_S_i4i4i4i4_s_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(UICommonPlayerHeadData) declare in System.Predicate`1[Assets.Scripts.UI.InGameCommon.UIPlayerData+UICommonPlayerHeadData]
static bool b_bS_u8i4si4u8u8u8_(void* target, struct S_u8i4si4u8u8u8_ p0, MethodInfo* method) {
    // PLog("Running b_bS_u8i4si4u8u8u8_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// Boolean Invoke(UICommonPlayerHeadData, Boolean) declare in GenericDelegate`2[Assets.Scripts.UI.InGameCommon.UIPlayerData+UICommonPlayerHeadData,System.Boolean]
static bool b_bS_u8i4si4u8u8u8_b(void* target, struct S_u8i4si4u8u8u8_ p0, bool p1, MethodInfo* method) {
    // PLog("Running b_bS_u8i4si4u8u8u8_b");
            
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

    pesapi_value argv[2]{
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            converter::Converter<bool>::toScript(apis, env, p1)
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
// Boolean Invoke(Boolean) declare in GenericDelegate`1[System.Boolean]
static bool b_bb(void* target, bool p0, MethodInfo* method) {
    // PLog("Running b_bb");

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
    converter::Converter<bool>::toScript(apis, env, p0)
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
// Boolean Invoke(Boolean, PrefabVisibleMask) declare in UIPrefabBase+FuncSetVisibleAction
static bool b_bbi4(void* target, bool p0, int32_t p1, MethodInfo* method) {
    // PLog("Running b_bbi4");

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
    converter::Converter<bool>::toScript(apis, env, p0),
            converter::Converter<int32_t>::toScript(apis, env, p1)
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
// Boolean Invoke(Boolean, Int32, ResData.COM_LINEUP_GAMETYPE) declare in GenericDelegate`3[System.Boolean,System.Int32,ResData.COM_LINEUP_GAMETYPE]
static bool b_bbi4i4(void* target, bool p0, int32_t p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_bbi4i4");

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
    converter::Converter<bool>::toScript(apis, env, p0),
            converter::Converter<int32_t>::toScript(apis, env, p1),
            converter::Converter<int32_t>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

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
// Boolean Invoke(Char) declare in System.Predicate`1[System.Char]
static bool b_bc(void* target, Il2CppChar p0, MethodInfo* method) {
    // PLog("Running b_bc");

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
    converter::Converter<Il2CppChar>::toScript(apis, env, p0)
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
// Boolean Invoke(Int32) declare in System.Predicate`1[System.Int32]
static bool b_bi4(void* target, int32_t p0, MethodInfo* method) {
    // PLog("Running b_bi4");

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
    converter::Converter<int32_t>::toScript(apis, env, p0)
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
// Boolean Invoke(Int32, UnityEngine.Vector2) declare in FingerInputManager+CheckFingerDownEventHandler
static bool b_bi4S_r4r4_(void* target, int32_t p0, struct S_r4r4_ p1, MethodInfo* method) {
    // PLog("Running b_bi4S_r4r4_");
                        
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
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Boolean Invoke(Int32, Boolean) declare in GenericDelegate`2[System.Int32,System.Boolean]
static bool b_bi4b(void* target, int32_t p0, bool p1, MethodInfo* method) {
    // PLog("Running b_bi4b");

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
            converter::Converter<bool>::toScript(apis, env, p1)
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
// Boolean Invoke(Int32, Boolean, Boolean) declare in GenericDelegate`3[System.Int32,System.Boolean,System.Boolean]
static bool b_bi4bb(void* target, int32_t p0, bool p1, bool p2, MethodInfo* method) {
    // PLog("Running b_bi4bb");

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
    converter::Converter<int32_t>::toScript(apis, env, p0),
            converter::Converter<bool>::toScript(apis, env, p1),
            converter::Converter<bool>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

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
// Boolean Invoke(Int32, Boolean, Int32) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateUILuaPrefabSetVisibleById
static bool b_bi4bi4(void* target, int32_t p0, bool p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_bi4bi4");

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
    converter::Converter<int32_t>::toScript(apis, env, p0),
            converter::Converter<bool>::toScript(apis, env, p1),
            converter::Converter<int32_t>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

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
// Boolean Invoke(Int32, Boolean, UnityEngine.RectTransform) declare in GenericDelegate`3[System.Int32,System.Boolean,UnityEngine.RectTransform]
static bool b_bi4bo(void* target, int32_t p0, bool p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_bi4bo");
                                    
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
    converter::Converter<int32_t>::toScript(apis, env, p0),
            converter::Converter<bool>::toScript(apis, env, p1),
            CSRefToLuaValue(apis, env, TIp2, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

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
// Boolean Invoke(OSProto.ECltSysType, Int32) declare in System.Func`3[OSProto.ECltSysType,System.Int32,System.Boolean]
static bool b_bi4i4(void* target, int32_t p0, int32_t p1, MethodInfo* method) {
    // PLog("Running b_bi4i4");

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
            converter::Converter<int32_t>::toScript(apis, env, p1)
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
// Boolean Invoke(Int32, Int32, Boolean) declare in GenericDelegate`3[System.Int32,System.Int32,System.Boolean]
static bool b_bi4i4b(void* target, int32_t p0, int32_t p1, bool p2, MethodInfo* method) {
    // PLog("Running b_bi4i4b");

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
    converter::Converter<int32_t>::toScript(apis, env, p0),
            converter::Converter<int32_t>::toScript(apis, env, p1),
            converter::Converter<bool>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

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
// Boolean Invoke(Int32, Int32, Boolean, LuaUIPointerEventData) declare in GenericDelegate`4[System.Int32,System.Int32,System.Boolean,LuaUIPointerEventData]
static bool b_bi4i4bo(void* target, int32_t p0, int32_t p1, bool p2, Il2CppObject* p3, MethodInfo* method) {
    // PLog("Running b_bi4i4bo");
                                                
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
            converter::Converter<int32_t>::toScript(apis, env, p1),
            converter::Converter<bool>::toScript(apis, env, p2),
            CSRefToLuaValue(apis, env, TIp3, p3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

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
// Boolean Invoke(Int32, XLua.LuaTable) declare in GenericDelegate`2[System.Int32,XLua.LuaTable]
static bool b_bi4o(void* target, int32_t p0, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_bi4o");
                        
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
             
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);
        
    return ret;

}
// Boolean Invoke(Int32, Assets.Scripts.UI.CardComponent.Item.UICardItem, System.Action) declare in GenericDelegate`3[System.Int32,Assets.Scripts.UI.CardComponent.Item.UICardItem,System.Action]
static bool b_bi4oo(void* target, int32_t p0, Il2CppObject* p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_bi4oo");
                        
    auto TIp1 = GetParameterType(method, 1);
        
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
    converter::Converter<int32_t>::toScript(apis, env, p0),
            CSRefToLuaValue(apis, env, TIp1, p1),
            CSRefToLuaValue(apis, env, TIp2, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

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
// Boolean Invoke(Int32, Single, Single, Single, Single, Single) declare in Assets.Scripts.Framework.Lua.LuaFingerInput+FingerEventHandler
static bool b_bi4r4r4r4r4r4(void* target, int32_t p0, float p1, float p2, float p3, float p4, float p5, MethodInfo* method) {
    // PLog("Running b_bi4r4r4r4r4r4");

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

    pesapi_value argv[6]{
    converter::Converter<int32_t>::toScript(apis, env, p0),
            converter::Converter<float>::toScript(apis, env, p1),
            converter::Converter<float>::toScript(apis, env, p2),
            converter::Converter<float>::toScript(apis, env, p3),
            converter::Converter<float>::toScript(apis, env, p4),
            converter::Converter<float>::toScript(apis, env, p5)
    };
    auto luaret = apis->call_function(env, func, 0, 6, argv);

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
// Boolean Invoke(Int32, UInt32, UInt32, UInt32) declare in GenericDelegate`4[System.Int32,System.UInt32,System.UInt32,System.UInt32]
static bool b_bi4u4u4u4(void* target, int32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, MethodInfo* method) {
    // PLog("Running b_bi4u4u4u4");

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
            converter::Converter<uint32_t>::toScript(apis, env, p1),
            converter::Converter<uint32_t>::toScript(apis, env, p2),
            converter::Converter<uint32_t>::toScript(apis, env, p3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

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
// Boolean Invoke(Int64) declare in MultifunctionRawImage+NotExpiredDelegate
static bool b_bi8(void* target, int64_t p0, MethodInfo* method) {
    // PLog("Running b_bi8");

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
    converter::Converter<int64_t>::toScript(apis, env, p0)
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
// Boolean Invoke(System.Type, System.Type ByRef) declare in ClassCreator+CSharpTypeReplacer
static bool b_boPo(void* target, Il2CppObject* p0, Il2CppObject** p1, MethodInfo* method) {
    // PLog("Running b_boPo");
            
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
            apis->boxing(env, apis->native_object_to_value(env, TIp1, p1, false))
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
// Boolean Invoke(EquipWithActor, UnityEngine.Vector2, Boolean) declare in GenericDelegate`3[Assets.Scripts.UI.InTheGame.Common.UIEquipCommonItem+EquipWithActor,UnityEngine.Vector2,System.Boolean]
static bool b_boS_r4r4_b(void* target, Il2CppObject* p0, struct S_r4r4_ p1, bool p2, MethodInfo* method) {
    // PLog("Running b_boS_r4r4_b");
            
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

    pesapi_value argv[3]{
    CSRefToLuaValue(apis, env, TIp0, p0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1),
            converter::Converter<bool>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

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
// Boolean Invoke(EquipWithActor, UnityEngine.Vector2, Assets.Scripts.UI.InTheGame.Equip.UIEquipToastSyntheticItem, Boolean) declare in GenericDelegate`4[Assets.Scripts.UI.InTheGame.Common.UIEquipCommonItem+EquipWithActor,UnityEngine.Vector2,Assets.Scripts.UI.InTheGame.Equip.UIEquipToastSyntheticItem,System.Boolean]
static bool b_boS_r4r4_ob(void* target, Il2CppObject* p0, struct S_r4r4_ p1, Il2CppObject* p2, bool p3, MethodInfo* method) {
    // PLog("Running b_boS_r4r4_ob");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
        
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

    pesapi_value argv[4]{
    CSRefToLuaValue(apis, env, TIp0, p0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1),
            CSRefToLuaValue(apis, env, TIp2, p2),
            converter::Converter<bool>::toScript(apis, env, p3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

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
// Boolean Invoke(Assets.Scripts.GameSystem.MuteLayerPopupBase, Boolean) declare in Assets.Scripts.GameSystem.DelegatePopupLayerVisibleChanged
static bool b_bob(void* target, Il2CppObject* p0, bool p1, MethodInfo* method) {
    // PLog("Running b_bob");
            
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

    pesapi_value argv[2]{
    CSRefToLuaValue(apis, env, TIp0, p0),
            converter::Converter<bool>::toScript(apis, env, p1)
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
// Boolean Invoke(Assets.Scripts.GameSystem.MuteLayerPopupBase, Boolean, HeroDetailParam) declare in Assets.Scripts.GameSystem.DelegatePopupLayerVisibleChanged`1[Assets.Scripts.UI.InTheGame.Standard.UIPopGrid+HeroDetailParam]
static bool b_bobo(void* target, Il2CppObject* p0, bool p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_bobo");
            
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
    CSRefToLuaValue(apis, env, TIp0, p0),
            converter::Converter<bool>::toScript(apis, env, p1),
            CSRefToLuaValue(apis, env, TIp2, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

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
// Boolean Invoke(Assets.Scripts.UI.InTheGame.Replay.ControlItemConfig, Int32) declare in GenericDelegate`2[Assets.Scripts.UI.InTheGame.Replay.ControlItemConfig,System.Int32]
static bool b_boi4(void* target, Il2CppObject* p0, int32_t p1, MethodInfo* method) {
    // PLog("Running b_boi4");
            
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

    pesapi_value argv[2]{
    CSRefToLuaValue(apis, env, TIp0, p0),
            converter::Converter<int32_t>::toScript(apis, env, p1)
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
// Boolean Invoke(T1, T2) declare in GenericDelegate`2[T1,T2]
static bool b_boo(void* target, Il2CppObject* p0, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_boo");
            
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
// Boolean Invoke(EquipWithActor, Assets.Scripts.UI.InTheGame.Equip.UIEquipToastSyntheticItem, UnityEngine.Vector2, Boolean) declare in GenericDelegate`4[Assets.Scripts.UI.InTheGame.Common.UIEquipCommonItem+EquipWithActor,Assets.Scripts.UI.InTheGame.Equip.UIEquipToastSyntheticItem,UnityEngine.Vector2,System.Boolean]
static bool b_booS_r4r4_b(void* target, Il2CppObject* p0, Il2CppObject* p1, struct S_r4r4_ p2, bool p3, MethodInfo* method) {
    // PLog("Running b_booS_r4r4_b");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
        
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

    pesapi_value argv[4]{
    CSRefToLuaValue(apis, env, TIp0, p0),
            CSRefToLuaValue(apis, env, TIp1, p1),
            DataTransfer::CopyValueType(apis, env, p2, TIp2),
            converter::Converter<bool>::toScript(apis, env, p3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

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
// Boolean Invoke(EquipWithActor, Assets.Scripts.UI.InTheGame.Equip.UIEquipToastSyntheticItem, Boolean) declare in GenericDelegate`3[Assets.Scripts.UI.InTheGame.Common.UIEquipCommonItem+EquipWithActor,Assets.Scripts.UI.InTheGame.Equip.UIEquipToastSyntheticItem,System.Boolean]
static bool b_boob(void* target, Il2CppObject* p0, Il2CppObject* p1, bool p2, MethodInfo* method) {
    // PLog("Running b_boob");
            
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

    pesapi_value argv[3]{
    CSRefToLuaValue(apis, env, TIp0, p0),
            CSRefToLuaValue(apis, env, TIp1, p1),
            converter::Converter<bool>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

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
// Boolean Invoke(T1, T2, T3) declare in GenericDelegate`3[T1,T2,T3]
static bool b_booo(void* target, Il2CppObject* p0, Il2CppObject* p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_booo");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
        
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
    CSRefToLuaValue(apis, env, TIp0, p0),
            CSRefToLuaValue(apis, env, TIp1, p1),
            CSRefToLuaValue(apis, env, TIp2, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

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
// Boolean Invoke(T1, T2, T3, T4) declare in GenericDelegate`4[T1,T2,T3,T4]
static bool b_boooo(void* target, Il2CppObject* p0, Il2CppObject* p1, Il2CppObject* p2, Il2CppObject* p3, MethodInfo* method) {
    // PLog("Running b_boooo");
            
    auto TIp0 = GetParameterType(method, 0);
        
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
    CSRefToLuaValue(apis, env, TIp0, p0),
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
             
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);
        
    return ret;

}
// Boolean Invoke(Timi.TimiPointerEventData, Assets.Scripts.UI.CardComponent.Item.UICardItem, Assets.Scripts.UI.CardComponent.Item.UICardItemShowData, UInt32) declare in GenericDelegate`4[Timi.TimiPointerEventData,Assets.Scripts.UI.CardComponent.Item.UICardItem,Assets.Scripts.UI.CardComponent.Item.UICardItemShowData,System.UInt32]
static bool b_booou4(void* target, Il2CppObject* p0, Il2CppObject* p1, Il2CppObject* p2, uint32_t p3, MethodInfo* method) {
    // PLog("Running b_booou4");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
        
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

    pesapi_value argv[4]{
    CSRefToLuaValue(apis, env, TIp0, p0),
            CSRefToLuaValue(apis, env, TIp1, p1),
            CSRefToLuaValue(apis, env, TIp2, p2),
            converter::Converter<uint32_t>::toScript(apis, env, p3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

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
// Boolean Invoke(System.Collections.Generic.Dictionary`2[System.UInt32,RectRtRecord], Single) declare in GenericDelegate`2[System.Collections.Generic.Dictionary`2[System.UInt32,RectRtRecord],System.Single]
static bool b_bor4(void* target, Il2CppObject* p0, float p1, MethodInfo* method) {
    // PLog("Running b_bor4");
            
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

    pesapi_value argv[2]{
    CSRefToLuaValue(apis, env, TIp0, p0),
            converter::Converter<float>::toScript(apis, env, p1)
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
// Boolean Invoke(ResData.ResEquipDataBin, UInt32, Assets.Scripts.Framework.UI.UIPrefab2DClass, UnityEngine.RectTransform) declare in GenericDelegate`4[ResData.ResEquipDataBin,System.UInt32,Assets.Scripts.Framework.UI.UIPrefab2DClass,UnityEngine.RectTransform]
static bool b_bou4oo(void* target, Il2CppObject* p0, uint32_t p1, Il2CppObject* p2, Il2CppObject* p3, MethodInfo* method) {
    // PLog("Running b_bou4oo");
            
    auto TIp0 = GetParameterType(method, 0);
                    
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
    CSRefToLuaValue(apis, env, TIp0, p0),
            converter::Converter<uint32_t>::toScript(apis, env, p1),
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
             
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);
        
    return ret;

}
// Boolean Invoke(Single) declare in System.Predicate`1[System.Single]
static bool b_br4(void* target, float p0, MethodInfo* method) {
    // PLog("Running b_br4");

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
    converter::Converter<float>::toScript(apis, env, p0)
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
// Boolean Invoke(System.String, IntPtr ByRef) declare in com.vasd.gamelet.GMLPixAssetLoader+JSFreeModuleDelegate
static bool b_bsPp(void* target, Il2CppString* p0, void** p1, MethodInfo* method) {
    // PLog("Running b_bsPp");
            
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
            // unknown ret signature: Pp
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
// Boolean Invoke(System.String, System.String ByRef) declare in ClassCreator+LuaTypeReplacer
static bool b_bsPs(void* target, Il2CppString* p0, Il2CppString** p1, MethodInfo* method) {
    // PLog("Running b_bsPs");
            
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
            // unknown ret signature: Ps
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
// Boolean Invoke(System.String, Int32, System.Action`2[com.pixui.PxDrawableAsset,System.String]) declare in System.Func`4[System.String,System.Int32,System.Action`2[com.pixui.PxDrawableAsset,System.String],System.Boolean]
static bool b_bsi4o(void* target, Il2CppString* p0, int32_t p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_bsi4o");
            
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
    converter::Converter<Il2CppString*>::toScript(apis, env, p0),
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
             
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);
        
    return ret;

}
// Boolean Invoke(System.String, System.Security.Cryptography.X509Certificates.X509Certificate, System.Security.Cryptography.X509Certificates.X509Chain, Mono.Security.Interface.MonoSslPolicyErrors) declare in Mono.Security.Interface.MonoRemoteCertificateValidationCallback
static bool b_bsooi4(void* target, Il2CppString* p0, Il2CppObject* p1, Il2CppObject* p2, int32_t p3, MethodInfo* method) {
    // PLog("Running b_bsooi4");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
        
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

    pesapi_value argv[4]{
    converter::Converter<Il2CppString*>::toScript(apis, env, p0),
            CSRefToLuaValue(apis, env, TIp1, p1),
            CSRefToLuaValue(apis, env, TIp2, p2),
            converter::Converter<int32_t>::toScript(apis, env, p3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

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
// Boolean Invoke(System.String, UInt32, Int32) declare in Assets.Scripts.Framework.Lua.LuaQtsPackage+IsPackageReadyDelegate
static bool b_bsu4i4(void* target, Il2CppString* p0, uint32_t p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_bsu4i4");
            
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

    pesapi_value argv[3]{
    converter::Converter<Il2CppString*>::toScript(apis, env, p0),
            converter::Converter<uint32_t>::toScript(apis, env, p1),
            converter::Converter<int32_t>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

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
// Boolean Invoke(Byte) declare in System.Predicate`1[System.Byte]
static bool b_bu1(void* target, uint8_t p0, MethodInfo* method) {
    // PLog("Running b_bu1");

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
    converter::Converter<uint8_t>::toScript(apis, env, p0)
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
// Boolean Invoke(UInt16) declare in System.Predicate`1[System.UInt16]
static bool b_bu2(void* target, uint16_t p0, MethodInfo* method) {
    // PLog("Running b_bu2");

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
    converter::Converter<uint16_t>::toScript(apis, env, p0)
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
// Boolean Invoke(UInt32) declare in System.Predicate`1[System.UInt32]
static bool b_bu4(void* target, uint32_t p0, MethodInfo* method) {
    // PLog("Running b_bu4");

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
    converter::Converter<uint32_t>::toScript(apis, env, p0)
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
// Boolean Invoke(UInt32, RankItemAnimInfo) declare in GenericDelegate`2[System.UInt32,Assets.Scripts.UI.InTheGame.PlayerRank.UIMiddleLeftInfo+RankItemAnimInfo]
static bool b_bu4S_i4i4i4sS_u4u4u4i4u4o__(void* target, uint32_t p0, struct S_i4i4i4sS_u4u4u4i4u4o__ p1, MethodInfo* method) {
    // PLog("Running b_bu4S_i4i4i4sS_u4u4u4i4u4o__");
                        
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
    converter::Converter<uint32_t>::toScript(apis, env, p0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Boolean Invoke(UInt32, UnityEngine.Vector3) declare in GenericDelegate`2[System.UInt32,UnityEngine.Vector3]
static bool b_bu4S_r4r4r4_(void* target, uint32_t p0, struct S_r4r4r4_ p1, MethodInfo* method) {
    // PLog("Running b_bu4S_r4r4r4_");
                        
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
    converter::Converter<uint32_t>::toScript(apis, env, p0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Boolean Invoke(UInt32, ChatLikeBooInfo) declare in GenericDelegate`2[System.UInt32,SGW+ChatLikeBooInfo]
static bool b_bu4S_u4u4u4_(void* target, uint32_t p0, struct S_u4u4u4_ p1, MethodInfo* method) {
    // PLog("Running b_bu4S_u4u4u4_");
                        
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
    converter::Converter<uint32_t>::toScript(apis, env, p0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Boolean Invoke(UInt32, Boolean) declare in GenericDelegate`2[System.UInt32,System.Boolean]
static bool b_bu4b(void* target, uint32_t p0, bool p1, MethodInfo* method) {
    // PLog("Running b_bu4b");

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
    converter::Converter<uint32_t>::toScript(apis, env, p0),
            converter::Converter<bool>::toScript(apis, env, p1)
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
// Boolean Invoke(UInt32, ResData.RES_RELATION_ID) declare in GenericDelegate`2[System.UInt32,ResData.RES_RELATION_ID]
static bool b_bu4i4(void* target, uint32_t p0, int32_t p1, MethodInfo* method) {
    // PLog("Running b_bu4i4");

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
    converter::Converter<uint32_t>::toScript(apis, env, p0),
            converter::Converter<int32_t>::toScript(apis, env, p1)
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
// Boolean Invoke(UInt32, UnityEngine.RectTransform) declare in GenericDelegate`2[System.UInt32,UnityEngine.RectTransform]
static bool b_bu4o(void* target, uint32_t p0, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_bu4o");
                        
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
    converter::Converter<uint32_t>::toScript(apis, env, p0),
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
// Boolean Invoke(UInt32, Assets.Scripts.UI.InTheGame.Equip.UIEquipToastSyntheticItem, Boolean) declare in GenericDelegate`3[System.UInt32,Assets.Scripts.UI.InTheGame.Equip.UIEquipToastSyntheticItem,System.Boolean]
static bool b_bu4ob(void* target, uint32_t p0, Il2CppObject* p1, bool p2, MethodInfo* method) {
    // PLog("Running b_bu4ob");
                        
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

    pesapi_value argv[3]{
    converter::Converter<uint32_t>::toScript(apis, env, p0),
            CSRefToLuaValue(apis, env, TIp1, p1),
            converter::Converter<bool>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

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
// Boolean Invoke(UInt32, UnityEngine.RectTransform, Int32) declare in GenericDelegate`3[System.UInt32,UnityEngine.RectTransform,System.Int32]
static bool b_bu4oi4(void* target, uint32_t p0, Il2CppObject* p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_bu4oi4");
                        
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

    pesapi_value argv[3]{
    converter::Converter<uint32_t>::toScript(apis, env, p0),
            CSRefToLuaValue(apis, env, TIp1, p1),
            converter::Converter<int32_t>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

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
// Boolean Invoke(UInt32, Single[], UInt32, UInt32) declare in AkAudioInputManager+AudioSamplesInteropDelegate
static bool b_bu4ou4u4(void* target, uint32_t p0, Il2CppObject* p1, uint32_t p2, uint32_t p3, MethodInfo* method) {
    // PLog("Running b_bu4ou4u4");
                        
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

    pesapi_value argv[4]{
    converter::Converter<uint32_t>::toScript(apis, env, p0),
            CSRefToLuaValue(apis, env, TIp1, p1),
            converter::Converter<uint32_t>::toScript(apis, env, p2),
            converter::Converter<uint32_t>::toScript(apis, env, p3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

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
// Boolean Invoke(UInt32, Single) declare in GenericDelegate`2[System.UInt32,System.Single]
static bool b_bu4r4(void* target, uint32_t p0, float p1, MethodInfo* method) {
    // PLog("Running b_bu4r4");

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
    converter::Converter<uint32_t>::toScript(apis, env, p0),
            converter::Converter<float>::toScript(apis, env, p1)
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
// Boolean Invoke(UInt32, Single, Boolean) declare in GenericDelegate`3[System.UInt32,System.Single,System.Boolean]
static bool b_bu4r4b(void* target, uint32_t p0, float p1, bool p2, MethodInfo* method) {
    // PLog("Running b_bu4r4b");

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
    converter::Converter<uint32_t>::toScript(apis, env, p0),
            converter::Converter<float>::toScript(apis, env, p1),
            converter::Converter<bool>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

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
// Boolean Invoke(UInt32, UInt32) declare in Assets.Scripts.GameLogic.PlayerRelation+CheckCustomCoinIsEnoughDelegate
static bool b_bu4u4(void* target, uint32_t p0, uint32_t p1, MethodInfo* method) {
    // PLog("Running b_bu4u4");

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
    converter::Converter<uint32_t>::toScript(apis, env, p0),
            converter::Converter<uint32_t>::toScript(apis, env, p1)
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
// Boolean Invoke(UInt32, UInt32, Int32, UnityEngine.RectTransform) declare in GenericDelegate`4[System.UInt32,System.UInt32,System.Int32,UnityEngine.RectTransform]
static bool b_bu4u4i4o(void* target, uint32_t p0, uint32_t p1, int32_t p2, Il2CppObject* p3, MethodInfo* method) {
    // PLog("Running b_bu4u4i4o");
                                                
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
    converter::Converter<uint32_t>::toScript(apis, env, p0),
            converter::Converter<uint32_t>::toScript(apis, env, p1),
            converter::Converter<int32_t>::toScript(apis, env, p2),
            CSRefToLuaValue(apis, env, TIp3, p3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

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
// Boolean Invoke(UInt32, UInt32, UnityEngine.RectTransform) declare in GenericDelegate`3[System.UInt32,System.UInt32,UnityEngine.RectTransform]
static bool b_bu4u4o(void* target, uint32_t p0, uint32_t p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_bu4u4o");
                                    
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
    converter::Converter<uint32_t>::toScript(apis, env, p0),
            converter::Converter<uint32_t>::toScript(apis, env, p1),
            CSRefToLuaValue(apis, env, TIp2, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

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
// Boolean Invoke(UInt32, UInt32, UInt32, UInt32) declare in GenericDelegate`4[System.UInt32,System.UInt32,System.UInt32,System.UInt32]
static bool b_bu4u4u4u4(void* target, uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, MethodInfo* method) {
    // PLog("Running b_bu4u4u4u4");

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
    converter::Converter<uint32_t>::toScript(apis, env, p0),
            converter::Converter<uint32_t>::toScript(apis, env, p1),
            converter::Converter<uint32_t>::toScript(apis, env, p2),
            converter::Converter<uint32_t>::toScript(apis, env, p3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

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
// Boolean Invoke(UInt64) declare in System.Predicate`1[System.UInt64]
static bool b_bu8(void* target, uint64_t p0, MethodInfo* method) {
    // PLog("Running b_bu8");

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
    converter::Converter<uint64_t>::toScript(apis, env, p0)
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
// Boolean Invoke(UInt64, Int64, System.String, UInt64, Int64, System.String) declare in System.Func`7[System.UInt64,System.Int64,System.String,System.UInt64,System.Int64,System.String,System.Boolean]
static bool b_bu8i8su8i8s(void* target, uint64_t p0, int64_t p1, Il2CppString* p2, uint64_t p3, int64_t p4, Il2CppString* p5, MethodInfo* method) {
    // PLog("Running b_bu8i8su8i8s");
                                    
    auto TIp2 = GetParameterType(method, 2);
                                
    auto TIp5 = GetParameterType(method, 5);

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

    pesapi_value argv[6]{
    converter::Converter<uint64_t>::toScript(apis, env, p0),
            converter::Converter<int64_t>::toScript(apis, env, p1),
            converter::Converter<Il2CppString*>::toScript(apis, env, p2),
            converter::Converter<uint64_t>::toScript(apis, env, p3),
            converter::Converter<int64_t>::toScript(apis, env, p4),
            converter::Converter<Il2CppString*>::toScript(apis, env, p5)
    };
    auto luaret = apis->call_function(env, func, 0, 6, argv);

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
// Boolean Invoke(UInt64, System.String, System.String, Int32) declare in System.Func`5[System.UInt64,System.String,System.String,System.Int32,System.Boolean]
static bool b_bu8ssi4(void* target, uint64_t p0, Il2CppString* p1, Il2CppString* p2, int32_t p3, MethodInfo* method) {
    // PLog("Running b_bu8ssi4");
                        
    auto TIp1 = GetParameterType(method, 1);
        
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

    pesapi_value argv[4]{
    converter::Converter<uint64_t>::toScript(apis, env, p0),
            converter::Converter<Il2CppString*>::toScript(apis, env, p1),
            converter::Converter<Il2CppString*>::toScript(apis, env, p2),
            converter::Converter<int32_t>::toScript(apis, env, p3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

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
// Char Invoke(System.String, Int32, Char) declare in UnityEngine.UI.InputField+OnValidateInput
static Il2CppChar b_csi4c(void* target, Il2CppString* p0, int32_t p1, Il2CppChar p2, MethodInfo* method) {
    // PLog("Running b_csi4c");
            
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

    pesapi_value argv[3]{
    converter::Converter<Il2CppString*>::toScript(apis, env, p0),
            converter::Converter<int32_t>::toScript(apis, env, p1),
            converter::Converter<Il2CppChar>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        return {};
    }
             
    // LuaValToCSVal P any
    Il2CppChar ret = converter::Converter<Il2CppChar>::toCpp(apis, env, luaret);
        
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
// Int32 Invoke(System.Object, System.Object) declare in System.Comparison`1[System.Object]
static int32_t b_i4OO(void* target, Il2CppObject* p0, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_i4OO");
            
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
// Int32 Invoke(UnityEngine.Rendering.SubMeshDescriptor, UnityEngine.Rendering.SubMeshDescriptor) declare in System.Comparison`1[UnityEngine.Rendering.SubMeshDescriptor]
static int32_t b_i4S_S_S_r4r4r4_S_r4r4r4__i4i4i4i4i4i4_S_S_S_r4r4r4_S_r4r4r4__i4i4i4i4i4i4_(void* target, struct S_S_S_r4r4r4_S_r4r4r4__i4i4i4i4i4i4_ p0, struct S_S_S_r4r4r4_S_r4r4r4__i4i4i4i4i4i4_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_S_S_r4r4r4_S_r4r4r4__i4i4i4i4i4i4_S_S_S_r4r4r4_S_r4r4r4__i4i4i4i4i4i4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(UnityEngine.UICharInfo, UnityEngine.UICharInfo) declare in System.Comparison`1[UnityEngine.UICharInfo]
static int32_t b_i4S_S_r4r4_r4_S_S_r4r4_r4_(void* target, struct S_S_r4r4_r4_ p0, struct S_S_r4r4_r4_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_S_r4r4_r4_S_S_r4r4_r4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(Particle, Particle) declare in System.Comparison`1[UnityEngine.ParticleSystem+Particle]
static int32_t b_i4S_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_i4u1u1u1u1_u4u4r4r4i4r4r4u4_S_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_i4u1u1u1u1_u4u4r4r4i4r4r4u4_(void* target, struct S_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_i4u1u1u1u1_u4u4r4r4i4r4r4u4_ p0, struct S_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_i4u1u1u1u1_u4u4r4r4i4r4r4u4_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_i4u1u1u1u1_u4u4r4r4i4r4r4u4_S_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_i4u1u1u1u1_u4u4r4r4i4r4r4u4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(UnityEngine.UIVertex, UnityEngine.UIVertex) declare in System.Comparison`1[UnityEngine.UIVertex]
static int32_t b_i4S_S_r4r4r4_S_r4r4r4_S_r4r4r4r4_S_i4u1u1u1u1_S_r4r4_S_r4r4_S_r4r4_S_r4r4__S_S_r4r4r4_S_r4r4r4_S_r4r4r4r4_S_i4u1u1u1u1_S_r4r4_S_r4r4_S_r4r4_S_r4r4__(void* target, struct S_S_r4r4r4_S_r4r4r4_S_r4r4r4r4_S_i4u1u1u1u1_S_r4r4_S_r4r4_S_r4r4_S_r4r4__ p0, struct S_S_r4r4r4_S_r4r4r4_S_r4r4r4r4_S_i4u1u1u1u1_S_r4r4_S_r4r4_S_r4r4_S_r4r4__ p1, MethodInfo* method) {
    // PLog("Running b_i4S_S_r4r4r4_S_r4r4r4_S_r4r4r4r4_S_i4u1u1u1u1_S_r4r4_S_r4r4_S_r4r4_S_r4r4__S_S_r4r4r4_S_r4r4r4_S_r4r4r4r4_S_i4u1u1u1u1_S_r4r4_S_r4r4_S_r4r4_S_r4r4__");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(ActorFloatScore, ActorFloatScore) declare in System.Comparison`1[Assets.Scripts.GameLogic.BattleFloatActorComponent+ActorFloatScore]
static int32_t b_i4S_S_u4o_i8_S_S_u4o_i8_(void* target, struct S_S_u4o_i8_ p0, struct S_S_u4o_i8_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_S_u4o_i8_S_S_u4o_i8_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(stGridEquipInfo, stGridEquipInfo) declare in System.Comparison`1[SGW+stGridEquipInfo]
static int32_t b_i4S_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4_S_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4_(void* target, struct S_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4_ p0, struct S_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4_S_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(T, T) declare in System.Comparison`1[T]
static int32_t b_i4S__S__(void* target, struct S__ p0, struct S__ p1, MethodInfo* method) {
    // PLog("Running b_i4S__S__");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(PixPuerts.LazyMemberRegisterInfo, PixPuerts.LazyMemberRegisterInfo) declare in System.Comparison`1[PixPuerts.LazyMemberRegisterInfo]
static int32_t b_i4S_bsi4bb_S_bsi4bb_(void* target, struct S_bsi4bb_ p0, struct S_bsi4bb_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_bsi4bb_S_bsi4bb_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(UnityEngine.UIElements.EasingFunction, UnityEngine.UIElements.EasingFunction) declare in System.Comparison`1[UnityEngine.UIElements.EasingFunction]
static int32_t b_i4S_i4_S_i4_(void* target, struct S_i4_ p0, struct S_i4_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_i4_S_i4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(VInt2, VInt2) declare in System.Comparison`1[VInt2]
static int32_t b_i4S_i4i4_S_i4i4_(void* target, struct S_i4i4_ p0, struct S_i4i4_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_i4i4_S_i4i4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(BlurCameraData, BlurCameraData) declare in System.Comparison`1[Yarp.UIBlurSetting+BlurCameraData]
static int32_t b_i4S_i4i4i4bbi4_S_i4i4i4bbi4_(void* target, struct S_i4i4i4bbi4_ p0, struct S_i4i4i4bbi4_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_i4i4i4bbi4_S_i4i4i4bbi4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(UnityEngine.Rendering.VertexAttributeDescriptor, UnityEngine.Rendering.VertexAttributeDescriptor) declare in System.Comparison`1[UnityEngine.Rendering.VertexAttributeDescriptor]
static int32_t b_i4S_i4i4i4i4_S_i4i4i4i4_(void* target, struct S_i4i4i4i4_ p0, struct S_i4i4i4i4_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_i4i4i4i4_S_i4i4i4i4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(Assets.Scripts.UI.InGameCommon.ActiveHighRelativeInfo, Assets.Scripts.UI.InGameCommon.ActiveHighRelativeInfo) declare in System.Comparison`1[Assets.Scripts.UI.InGameCommon.ActiveHighRelativeInfo]
static int32_t b_i4S_i4i4o_S_i4i4o_(void* target, struct S_i4i4o_ p0, struct S_i4i4o_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_i4i4o_S_i4i4o_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(Assets.Scripts.Framework.AssetService.AssetData, Assets.Scripts.Framework.AssetService.AssetData) declare in System.Comparison`1[Assets.Scripts.Framework.AssetService.AssetData]
static int32_t b_i4S_i4i4ossOosi4i4i1i1i1i4Oob_S_i4i4ossOosi4i4i1i1i1i4Oob_(void* target, struct S_i4i4ossOosi4i4i1i1i1i4Oob_ p0, struct S_i4i4ossOosi4i4i1i1i1i4Oob_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_i4i4ossOosi4i4i1i1i1i4Oob_S_i4i4ossOosi4i4i1i1i1i4Oob_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(UnityEngine.UILineInfo, UnityEngine.UILineInfo) declare in System.Comparison`1[UnityEngine.UILineInfo]
static int32_t b_i4S_i4i4r4r4_S_i4i4r4r4_(void* target, struct S_i4i4r4r4_ p0, struct S_i4i4r4r4_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_i4i4r4r4_S_i4i4r4r4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(Assets.Scripts.GameLogic.Project8PreLoadHeroConfig, Assets.Scripts.GameLogic.Project8PreLoadHeroConfig) declare in System.Comparison`1[Assets.Scripts.GameLogic.Project8PreLoadHeroConfig]
static int32_t b_i4S_i4i4so_S_i4i4so_(void* target, struct S_i4i4so_ p0, struct S_i4i4so_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_i4i4so_S_i4i4so_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(Assets.Scripts.GameLogic.Project8PreLoadLordConfig, Assets.Scripts.GameLogic.Project8PreLoadLordConfig) declare in System.Comparison`1[Assets.Scripts.GameLogic.Project8PreLoadLordConfig]
static int32_t b_i4S_i4i4u1o_S_i4i4u1o_(void* target, struct S_i4i4u1o_ p0, struct S_i4i4u1o_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_i4i4u1o_S_i4i4u1o_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(RenderRequest, RenderRequest) declare in System.Comparison`1[UnityEngine.Camera+RenderRequest]
static int32_t b_i4S_i4oi4_S_i4oi4_(void* target, struct S_i4oi4_ p0, struct S_i4oi4_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_i4oi4_S_i4oi4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(UnityEngine.AnimatorClipInfo, UnityEngine.AnimatorClipInfo) declare in System.Comparison`1[UnityEngine.AnimatorClipInfo]
static int32_t b_i4S_i4r4_S_i4r4_(void* target, struct S_i4r4_ p0, struct S_i4r4_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_i4r4_S_i4r4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(UnityEngine.UIElements.StylePropertyName, UnityEngine.UIElements.StylePropertyName) declare in System.Comparison`1[UnityEngine.UIElements.StylePropertyName]
static int32_t b_i4S_i4s_S_i4s_(void* target, struct S_i4s_ p0, struct S_i4s_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_i4s_S_i4s_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(Assets.Scripts.Update.StepWeight, Assets.Scripts.Update.StepWeight) declare in System.Comparison`1[Assets.Scripts.Update.StepWeight]
static int32_t b_i4S_i4si4_S_i4si4_(void* target, struct S_i4si4_ p0, struct S_i4si4_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_i4si4_S_i4si4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(UnityEngine.Color32, UnityEngine.Color32) declare in System.Comparison`1[UnityEngine.Color32]
static int32_t b_i4S_i4u1u1u1u1_S_i4u1u1u1u1_(void* target, struct S_i4u1u1u1u1_ p0, struct S_i4u1u1u1u1_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_i4u1u1u1u1_S_i4u1u1u1u1_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(RecordItem, RecordItem) declare in System.Comparison`1[EventRouter+EventRouterRecord+RecordItem]
static int32_t b_i4S_oO_S_oO_(void* target, struct S_oO_ p0, struct S_oO_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_oO_S_oO_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(UnityEngine.EventSystems.RaycastResult, UnityEngine.EventSystems.RaycastResult) declare in System.Comparison`1[UnityEngine.EventSystems.RaycastResult]
static int32_t b_i4S_oor4r4i4i4i4S_r4r4r4_S_r4r4r4_S_r4r4_i4_S_oor4r4i4i4i4S_r4r4r4_S_r4r4r4_S_r4r4_i4_(void* target, struct S_oor4r4i4i4i4S_r4r4r4_S_r4r4r4_S_r4r4_i4_ p0, struct S_oor4r4i4i4i4S_r4r4r4_S_r4r4r4_S_r4r4_i4_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_oor4r4i4i4i4S_r4r4r4_S_r4r4r4_S_r4r4_i4_S_oor4r4i4i4i4S_r4r4r4_S_r4r4r4_S_r4r4_i4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(NOAH.VFX.AnimPlayInfo, NOAH.VFX.AnimPlayInfo) declare in System.Comparison`1[NOAH.VFX.AnimPlayInfo]
static int32_t b_i4S_oosr4r4_S_oosr4r4_(void* target, struct S_oosr4r4_ p0, struct S_oosr4r4_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_oosr4r4_S_oosr4r4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(Data, Data) declare in System.Comparison`1[CMTweener+Data]
static int32_t b_i4S_oosr4r4i4soooS_r4r4r4_S_r4r4r4_r4r4r4r4bi4osbor4bS_r4r4r4_i4r4i4ooo_S_oosr4r4i4soooS_r4r4r4_S_r4r4r4_r4r4r4r4bi4osbor4bS_r4r4r4_i4r4i4ooo_(void* target, struct S_oosr4r4i4soooS_r4r4r4_S_r4r4r4_r4r4r4r4bi4osbor4bS_r4r4r4_i4r4i4ooo_ p0, struct S_oosr4r4i4soooS_r4r4r4_S_r4r4r4_r4r4r4r4bi4osbor4bS_r4r4r4_i4r4i4ooo_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_oosr4r4i4soooS_r4r4r4_S_r4r4r4_r4r4r4r4bi4osbor4bS_r4r4r4_i4r4i4ooo_S_oosr4r4i4soooS_r4r4r4_S_r4r4r4_r4r4r4r4bi4osbor4bS_r4r4r4_i4r4i4ooo_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(UnityEngine.Rendering.ReflectionProbeBlendInfo, UnityEngine.Rendering.ReflectionProbeBlendInfo) declare in System.Comparison`1[UnityEngine.Rendering.ReflectionProbeBlendInfo]
static int32_t b_i4S_or4_S_or4_(void* target, struct S_or4_ p0, struct S_or4_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_or4_S_or4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(UnityEngine.Rendering.RendererList, UnityEngine.Rendering.RendererList) declare in System.Comparison`1[UnityEngine.Rendering.RendererList]
static int32_t b_i4S_pu4u4u4_S_pu4u4u4_(void* target, struct S_pu4u4u4_ p0, struct S_pu4u4u4_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_pu4u4u4_S_pu4u4u4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(UnityEngine.UIElements.TimeValue, UnityEngine.UIElements.TimeValue) declare in System.Comparison`1[UnityEngine.UIElements.TimeValue]
static int32_t b_i4S_r4i4_S_r4i4_(void* target, struct S_r4i4_ p0, struct S_r4i4_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_r4i4_S_r4i4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(UnityEngine.Vector2, UnityEngine.Vector2) declare in System.Comparison`1[UnityEngine.Vector2]
static int32_t b_i4S_r4r4_S_r4r4_(void* target, struct S_r4r4_ p0, struct S_r4r4_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_r4r4_S_r4r4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(UnityEngine.Vector3, UnityEngine.Vector3) declare in System.Comparison`1[UnityEngine.Vector3]
static int32_t b_i4S_r4r4r4_S_r4r4r4_(void* target, struct S_r4r4r4_ p0, struct S_r4r4r4_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_r4r4r4_S_r4r4r4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(UnityEngine.Color, UnityEngine.Color) declare in System.Comparison`1[UnityEngine.Color]
static int32_t b_i4S_r4r4r4r4_S_r4r4r4r4_(void* target, struct S_r4r4r4r4_ p0, struct S_r4r4r4r4_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_r4r4r4r4_S_r4r4r4r4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(UnityEngine.BoneWeight, UnityEngine.BoneWeight) declare in System.Comparison`1[UnityEngine.BoneWeight]
static int32_t b_i4S_r4r4r4r4i4i4i4i4_S_r4r4r4r4i4i4i4i4_(void* target, struct S_r4r4r4r4i4i4i4i4_ p0, struct S_r4r4r4r4i4i4i4i4_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_r4r4r4r4i4i4i4i4_S_r4r4r4r4i4i4i4i4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(UnityEngine.Matrix4x4, UnityEngine.Matrix4x4) declare in System.Comparison`1[UnityEngine.Matrix4x4]
static int32_t b_i4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_(void* target, struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p0, struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(UnityEngine.Rendering.SphericalHarmonicsL2, UnityEngine.Rendering.SphericalHarmonicsL2) declare in System.Comparison`1[UnityEngine.Rendering.SphericalHarmonicsL2]
static int32_t b_i4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_(void* target, struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p0, struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(Project8FormatPreLoadPrefabConfig, Project8FormatPreLoadPrefabConfig) declare in System.Comparison`1[Assets.Scripts.GameLogic.Project8PreLoadConfig+Project8FormatPreLoadPrefabConfig]
static int32_t b_i4S_si4i4_S_si4i4_(void* target, struct S_si4i4_ p0, struct S_si4i4_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_si4i4_S_si4i4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(System.Collections.Generic.KeyValuePair`2[System.String,System.String], System.Collections.Generic.KeyValuePair`2[System.String,System.String]) declare in System.Comparison`1[System.Collections.Generic.KeyValuePair`2[System.String,System.String]]
static int32_t b_i4S_ss_S_ss_(void* target, struct S_ss_ p0, struct S_ss_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_ss_S_ss_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(Assets.Scripts.GameLogic.Project8PreLoadPrefabConfig, Assets.Scripts.GameLogic.Project8PreLoadPrefabConfig) declare in System.Comparison`1[Assets.Scripts.GameLogic.Project8PreLoadPrefabConfig]
static int32_t b_i4S_su1i2_S_su1i2_(void* target, struct S_su1i2_ p0, struct S_su1i2_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_su1i2_S_su1i2_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(Project8RelationMod, Project8RelationMod) declare in System.Comparison`1[SGW+Project8RelationMod]
static int32_t b_i4S_u4i4i4i4_S_u4i4i4i4_(void* target, struct S_u4i4i4i4_ p0, struct S_u4i4i4i4_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_u4i4i4i4_S_u4i4i4i4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(PooledCollections.PoolObjHandle`1[Assets.Scripts.GameLogic.ActorLinker], PooledCollections.PoolObjHandle`1[Assets.Scripts.GameLogic.ActorLinker]) declare in System.Comparison`1[PooledCollections.PoolObjHandle`1[Assets.Scripts.GameLogic.ActorLinker]]
static int32_t b_i4S_u4o_S_u4o_(void* target, struct S_u4o_ p0, struct S_u4o_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_u4o_S_u4o_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(Assets.Scripts.UI.InTheGame.GlobalInfo.GlobalTipsPlayerInfo, Assets.Scripts.UI.InTheGame.GlobalInfo.GlobalTipsPlayerInfo) declare in System.Comparison`1[Assets.Scripts.UI.InTheGame.GlobalInfo.GlobalTipsPlayerInfo]
static int32_t b_i4S_u4oob_S_u4oob_(void* target, struct S_u4oob_ p0, struct S_u4oob_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_u4oob_S_u4oob_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(Project8BossAwardItem, Project8BossAwardItem) declare in System.Comparison`1[SGW+Project8BossAwardItem]
static int32_t b_i4S_u4u1u4i4i4_S_u4u1u4i4i4_(void* target, struct S_u4u1u4i4i4_ p0, struct S_u4u1u4i4i4_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_u4u1u4i4i4_S_u4u1u4i4i4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(Assets.Scripts.GameLogic.LordIDInfo, Assets.Scripts.GameLogic.LordIDInfo) declare in System.Comparison`1[Assets.Scripts.GameLogic.LordIDInfo]
static int32_t b_i4S_u4u4_S_u4u4_(void* target, struct S_u4u4_ p0, struct S_u4u4_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_u4u4_S_u4u4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(EquipRecommendInfo, EquipRecommendInfo) declare in System.Comparison`1[Assets.Scripts.GameLogic.Project8Equipment+EquipRecommendInfo]
static int32_t b_i4S_u4u4bo_S_u4u4bo_(void* target, struct S_u4u4bo_ p0, struct S_u4u4bo_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_u4u4bo_S_u4u4bo_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(Assets.Scripts.GameLogic.Project8EquipPair, Assets.Scripts.GameLogic.Project8EquipPair) declare in System.Comparison`1[Assets.Scripts.GameLogic.Project8EquipPair]
static int32_t b_i4S_u4u4i4_S_u4u4i4_(void* target, struct S_u4u4i4_ p0, struct S_u4u4i4_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_u4u4i4_S_u4u4i4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(Assets.Scripts.GameSystem.EquipRecipe, Assets.Scripts.GameSystem.EquipRecipe) declare in System.Comparison`1[Assets.Scripts.GameSystem.EquipRecipe]
static int32_t b_i4S_u4u4u4_S_u4u4u4_(void* target, struct S_u4u4u4_ p0, struct S_u4u4u4_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_u4u4u4_S_u4u4u4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(stEquipItem, stEquipItem) declare in System.Comparison`1[SGW+stEquipItem]
static int32_t b_i4S_u4u4u4u4u4u4u4u4_S_u4u4u4u4u4u4u4u4_(void* target, struct S_u4u4u4u4u4u4u4u4_ p0, struct S_u4u4u4u4u4u4u4u4_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_u4u4u4u4u4u4u4u4_S_u4u4u4u4u4u4u4u4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(UnityEngine.DisplayInfo, UnityEngine.DisplayInfo) declare in System.Comparison`1[UnityEngine.DisplayInfo]
static int32_t b_i4S_u8i4i4S_u4u4_S_i4i4i4i4_s_S_u8i4i4S_u4u4_S_i4i4i4i4_s_(void* target, struct S_u8i4i4S_u4u4_S_i4i4i4i4_s_ p0, struct S_u8i4i4S_u4u4_S_i4i4i4i4_s_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_u8i4i4S_u4u4_S_i4i4i4i4_s_S_u8i4i4S_u4u4_S_i4i4i4i4_s_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(UICommonPlayerHeadData, UICommonPlayerHeadData) declare in System.Comparison`1[Assets.Scripts.UI.InGameCommon.UIPlayerData+UICommonPlayerHeadData]
static int32_t b_i4S_u8i4si4u8u8u8_S_u8i4si4u8u8u8_(void* target, struct S_u8i4si4u8u8u8_ p0, struct S_u8i4si4u8u8u8_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_u8i4si4u8u8u8_S_u8i4si4u8u8u8_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// Int32 Invoke(Boolean) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateStatsSetEnable
static int32_t b_i4b(void* target, bool p0, MethodInfo* method) {
    // PLog("Running b_i4b");

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
    converter::Converter<bool>::toScript(apis, env, p0)
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
// Int32 Invoke(Boolean, Boolean) declare in System.Comparison`1[System.Boolean]
static int32_t b_i4bb(void* target, bool p0, bool p1, MethodInfo* method) {
    // PLog("Running b_i4bb");

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
    converter::Converter<bool>::toScript(apis, env, p0),
            converter::Converter<bool>::toScript(apis, env, p1)
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
// Int32 Invoke(Int32) declare in Assets.Scripts.GameLogic.PlayerCaptainControl+CustomRepickPriceHandler
static int32_t b_i4i4(void* target, int32_t p0, MethodInfo* method) {
    // PLog("Running b_i4i4");

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
    converter::Converter<int32_t>::toScript(apis, env, p0)
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
// Int32 Invoke(Int32, System.Object) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegatUILuaPrefabInit
static int32_t b_i4i4O(void* target, int32_t p0, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_i4i4O");
                        
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
             
    // LuaValToCSVal P any
    int32_t ret = converter::Converter<int32_t>::toCpp(apis, env, luaret);
        
    return ret;

}
// Int32 Invoke(Int32, Int32) declare in System.Comparison`1[System.Int32]
static int32_t b_i4i4i4(void* target, int32_t p0, int32_t p1, MethodInfo* method) {
    // PLog("Running b_i4i4i4");

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
            converter::Converter<int32_t>::toScript(apis, env, p1)
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
// Int32 Invoke(Int32, System.String) declare in com.vasd.gamelet.OpenPlatformDll+SetLogProxyFuncDelegate
static int32_t b_i4i4s(void* target, int32_t p0, Il2CppString* p1, MethodInfo* method) {
    // PLog("Running b_i4i4s");
                        
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
// Int32 Invoke(Int64, Int64) declare in System.Comparison`1[System.Int64]
static int32_t b_i4i8i8(void* target, int64_t p0, int64_t p1, MethodInfo* method) {
    // PLog("Running b_i4i8i8");

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
    converter::Converter<int64_t>::toScript(apis, env, p0),
            converter::Converter<int64_t>::toScript(apis, env, p1)
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
// Int32 Invoke(HeroBroadcastResult) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateOnBattleBroadcast
static int32_t b_i4o(void* target, Il2CppObject* p0, MethodInfo* method) {
    // PLog("Running b_i4o");
            
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
// Int32 Invoke(Assets.Scripts.Framework.UI.UILuaPrefabClass, System.String, Assets.Scripts.Framework.UI.UIPrefab2DClass, UnityEngine.Transform, System.Object, Boolean, System.Nullable`1[UnityEngine.Vector3]) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateCreateUILuaPrefab
static int32_t b_i4osDoDoDODbDN_bS_r4r4r4__(void* target, Il2CppObject* p0, Il2CppString* p1, Il2CppObject* p2, Il2CppObject* p3, Il2CppObject* p4, bool p5, struct N_bS_r4r4r4__ p6, MethodInfo* method) {
    // PLog("Running b_i4osDoDoDODbDN_bS_r4r4r4__");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
        
    auto TIp2 = GetParameterType(method, 2);
        
    auto TIp3 = GetParameterType(method, 3);
        
    auto TIp4 = GetParameterType(method, 4);
                    
    auto TIp6 = GetParameterType(method, 6);

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

    pesapi_value argv[7]{
    CSRefToLuaValue(apis, env, TIp0, p0),
            converter::Converter<Il2CppString*>::toScript(apis, env, p1),
            CSRefToLuaValue(apis, env, TIp2, p2),
            CSRefToLuaValue(apis, env, TIp3, p3),
            CSRefToLuaValue(apis, env, TIp4, p4),
            converter::Converter<bool>::toScript(apis, env, p5),
            DataTransfer::CopyNullableValueType(apis, env, p6, TIp6)
    };
    auto luaret = apis->call_function(env, func, 0, 7, argv);

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
// Int32 Invoke(IntPtr, Int32) declare in System.Func`3[System.IntPtr,System.Int32,System.Int32]
static int32_t b_i4pi4(void* target, void* p0, int32_t p1, MethodInfo* method) {
    // PLog("Running b_i4pi4");
            
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

    pesapi_value argv[2]{
    apis->create_binary(env, p0, 0),
            converter::Converter<int32_t>::toScript(apis, env, p1)
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
// Int32 Invoke(IntPtr, Int32, Int32, IntPtr) declare in CurlUnity.Delegates+ReadFunction
static int32_t b_i4pi4i4p(void* target, void* p0, int32_t p1, int32_t p2, void* p3, MethodInfo* method) {
    // PLog("Running b_i4pi4i4p");
            
    auto TIp0 = GetParameterType(method, 0);
                                
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
    apis->create_binary(env, p0, 0),
            converter::Converter<int32_t>::toScript(apis, env, p1),
            converter::Converter<int32_t>::toScript(apis, env, p2),
            apis->create_binary(env, p3, 0)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

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
// Int32 Invoke(IntPtr, CurlUnity.CURLINFODEBUG, IntPtr, Int32, IntPtr) declare in CurlUnity.Delegates+DebugFunction
static int32_t b_i4pi4pi4p(void* target, void* p0, int32_t p1, void* p2, int32_t p3, void* p4, MethodInfo* method) {
    // PLog("Running b_i4pi4pi4p");
            
    auto TIp0 = GetParameterType(method, 0);
                    
    auto TIp2 = GetParameterType(method, 2);
                    
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
    apis->create_binary(env, p0, 0),
            converter::Converter<int32_t>::toScript(apis, env, p1),
            apis->create_binary(env, p2, 0),
            converter::Converter<int32_t>::toScript(apis, env, p3),
            apis->create_binary(env, p4, 0)
    };
    auto luaret = apis->call_function(env, func, 0, 5, argv);

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
// Int32 Invoke(IntPtr, Int64, Int64, Int64, Int64) declare in CurlUnity.Delegates+ProgressFunction
static int32_t b_i4pi8i8i8i8(void* target, void* p0, int64_t p1, int64_t p2, int64_t p3, int64_t p4, MethodInfo* method) {
    // PLog("Running b_i4pi8i8i8i8");
            
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

    pesapi_value argv[5]{
    apis->create_binary(env, p0, 0),
            converter::Converter<int64_t>::toScript(apis, env, p1),
            converter::Converter<int64_t>::toScript(apis, env, p2),
            converter::Converter<int64_t>::toScript(apis, env, p3),
            converter::Converter<int64_t>::toScript(apis, env, p4)
    };
    auto luaret = apis->call_function(env, func, 0, 5, argv);

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
// Int32 Invoke(Single, Single) declare in System.Comparison`1[System.Single]
static int32_t b_i4r4r4(void* target, float p0, float p1, MethodInfo* method) {
    // PLog("Running b_i4r4r4");

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
    converter::Converter<float>::toScript(apis, env, p0),
            converter::Converter<float>::toScript(apis, env, p1)
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
// Int32 Invoke(System.String) declare in System.Func`2[System.String,System.Int32]
static int32_t b_i4s(void* target, Il2CppString* p0, MethodInfo* method) {
    // PLog("Running b_i4s");
            
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
    int32_t ret = converter::Converter<int32_t>::toCpp(apis, env, luaret);
        
    return ret;

}
// Int32 Invoke(System.String, Boolean, UnityEngine.Vector3, UnityEngine.Vector3, System.String, System.String) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateBubbleShowGetTip
static int32_t b_i4sbS_r4r4r4_S_r4r4r4_ss(void* target, Il2CppString* p0, bool p1, struct S_r4r4r4_ p2, struct S_r4r4r4_ p3, Il2CppString* p4, Il2CppString* p5, MethodInfo* method) {
    // PLog("Running b_i4sbS_r4r4r4_S_r4r4r4_ss");
            
    auto TIp0 = GetParameterType(method, 0);
                    
    auto TIp2 = GetParameterType(method, 2);
        
    auto TIp3 = GetParameterType(method, 3);
        
    auto TIp4 = GetParameterType(method, 4);
        
    auto TIp5 = GetParameterType(method, 5);

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

    pesapi_value argv[6]{
    converter::Converter<Il2CppString*>::toScript(apis, env, p0),
            converter::Converter<bool>::toScript(apis, env, p1),
            DataTransfer::CopyValueType(apis, env, p2, TIp2),
            DataTransfer::CopyValueType(apis, env, p3, TIp3),
            converter::Converter<Il2CppString*>::toScript(apis, env, p4),
            converter::Converter<Il2CppString*>::toScript(apis, env, p5)
    };
    auto luaret = apis->call_function(env, func, 0, 6, argv);

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
// Int32 Invoke(System.String, Int32, Boolean, Boolean) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegatePlayerPrefsGetInt
static int32_t b_i4si4DbDb(void* target, Il2CppString* p0, int32_t p1, bool p2, bool p3, MethodInfo* method) {
    // PLog("Running b_i4si4DbDb");
            
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

    pesapi_value argv[4]{
    converter::Converter<Il2CppString*>::toScript(apis, env, p0),
            converter::Converter<int32_t>::toScript(apis, env, p1),
            converter::Converter<bool>::toScript(apis, env, p2),
            converter::Converter<bool>::toScript(apis, env, p3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

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
// Int32 Invoke(System.String, System.String, System.String) declare in com.vasd.gamelet.OpenPlatformDll+CreateWindowWithUrlFuncDelegate
static int32_t b_i4sss(void* target, Il2CppString* p0, Il2CppString* p1, Il2CppString* p2, MethodInfo* method) {
    // PLog("Running b_i4sss");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
        
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
    converter::Converter<Il2CppString*>::toScript(apis, env, p0),
            converter::Converter<Il2CppString*>::toScript(apis, env, p1),
            converter::Converter<Il2CppString*>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

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
// Int32 Invoke(Byte, Byte) declare in System.Comparison`1[System.Byte]
static int32_t b_i4u1u1(void* target, uint8_t p0, uint8_t p1, MethodInfo* method) {
    // PLog("Running b_i4u1u1");

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
    converter::Converter<uint8_t>::toScript(apis, env, p0),
            converter::Converter<uint8_t>::toScript(apis, env, p1)
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
// Int32 Invoke(UInt16, UInt16) declare in System.Comparison`1[System.UInt16]
static int32_t b_i4u2u2(void* target, uint16_t p0, uint16_t p1, MethodInfo* method) {
    // PLog("Running b_i4u2u2");

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
    converter::Converter<uint16_t>::toScript(apis, env, p0),
            converter::Converter<uint16_t>::toScript(apis, env, p1)
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
// Int32 Invoke(UInt32) declare in Assets.Scripts.Framework.Lua.LuaMsgBox+DelegateMsgBoxClose
static int32_t b_i4u4(void* target, uint32_t p0, MethodInfo* method) {
    // PLog("Running b_i4u4");

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
    converter::Converter<uint32_t>::toScript(apis, env, p0)
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
// Int32 Invoke(UInt32, ResData.RES_SETTINGS_TYPE) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateSettingsServiceGetBitData
static int32_t b_i4u4i4(void* target, uint32_t p0, int32_t p1, MethodInfo* method) {
    // PLog("Running b_i4u4i4");

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
    converter::Converter<uint32_t>::toScript(apis, env, p0),
            converter::Converter<int32_t>::toScript(apis, env, p1)
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
// Int32 Invoke(UInt32, ResData.RES_SETTINGS_TYPE, Int32) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateSettingsServiceSetHuanHuaTipBitData
static int32_t b_i4u4i4i4(void* target, uint32_t p0, int32_t p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_i4u4i4i4");

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
    converter::Converter<uint32_t>::toScript(apis, env, p0),
            converter::Converter<int32_t>::toScript(apis, env, p1),
            converter::Converter<int32_t>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

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
// Int32 Invoke(UInt32, UInt32) declare in System.Comparison`1[System.UInt32]
static int32_t b_i4u4u4(void* target, uint32_t p0, uint32_t p1, MethodInfo* method) {
    // PLog("Running b_i4u4u4");

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
    converter::Converter<uint32_t>::toScript(apis, env, p0),
            converter::Converter<uint32_t>::toScript(apis, env, p1)
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
// Int32 Invoke(UInt64, UInt64) declare in System.Comparison`1[System.UInt64]
static int32_t b_i4u8u8(void* target, uint64_t p0, uint64_t p1, MethodInfo* method) {
    // PLog("Running b_i4u8u8");

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
    converter::Converter<uint64_t>::toScript(apis, env, p0),
            converter::Converter<uint64_t>::toScript(apis, env, p1)
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
// TOutput Invoke(UnityEngine.Rendering.SubMeshDescriptor) declare in System.Converter`2[UnityEngine.Rendering.SubMeshDescriptor,TOutput]
static Il2CppObject* b_oS_S_S_r4r4r4_S_r4r4r4__i4i4i4i4i4i4_(void* target, struct S_S_S_r4r4r4_S_r4r4r4__i4i4i4i4i4i4_ p0, MethodInfo* method) {
    // PLog("Running b_oS_S_S_r4r4r4_S_r4r4r4__i4i4i4i4i4i4_");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(UnityEngine.UICharInfo) declare in System.Converter`2[UnityEngine.UICharInfo,TOutput]
static Il2CppObject* b_oS_S_r4r4_r4_(void* target, struct S_S_r4r4_r4_ p0, MethodInfo* method) {
    // PLog("Running b_oS_S_r4r4_r4_");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(Particle) declare in System.Converter`2[UnityEngine.ParticleSystem+Particle,TOutput]
static Il2CppObject* b_oS_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_i4u1u1u1u1_u4u4r4r4i4r4r4u4_(void* target, struct S_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_i4u1u1u1u1_u4u4r4r4i4r4r4u4_ p0, MethodInfo* method) {
    // PLog("Running b_oS_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_i4u1u1u1u1_u4u4r4r4i4r4r4u4_");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(UnityEngine.UIVertex) declare in System.Converter`2[UnityEngine.UIVertex,TOutput]
static Il2CppObject* b_oS_S_r4r4r4_S_r4r4r4_S_r4r4r4r4_S_i4u1u1u1u1_S_r4r4_S_r4r4_S_r4r4_S_r4r4__(void* target, struct S_S_r4r4r4_S_r4r4r4_S_r4r4r4r4_S_i4u1u1u1u1_S_r4r4_S_r4r4_S_r4r4_S_r4r4__ p0, MethodInfo* method) {
    // PLog("Running b_oS_S_r4r4r4_S_r4r4r4_S_r4r4r4r4_S_i4u1u1u1u1_S_r4r4_S_r4r4_S_r4r4_S_r4r4__");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(ActorFloatScore) declare in System.Converter`2[Assets.Scripts.GameLogic.BattleFloatActorComponent+ActorFloatScore,TOutput]
static Il2CppObject* b_oS_S_u4o_i8_(void* target, struct S_S_u4o_i8_ p0, MethodInfo* method) {
    // PLog("Running b_oS_S_u4o_i8_");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(stGridEquipInfo) declare in System.Converter`2[SGW+stGridEquipInfo,TOutput]
static Il2CppObject* b_oS_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4_(void* target, struct S_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4_ p0, MethodInfo* method) {
    // PLog("Running b_oS_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4_");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(T) declare in System.Converter`2[T,TOutput]
static Il2CppObject* b_oS__(void* target, struct S__ p0, MethodInfo* method) {
    // PLog("Running b_oS__");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(PixPuerts.LazyMemberRegisterInfo) declare in System.Converter`2[PixPuerts.LazyMemberRegisterInfo,TOutput]
static Il2CppObject* b_oS_bsi4bb_(void* target, struct S_bsi4bb_ p0, MethodInfo* method) {
    // PLog("Running b_oS_bsi4bb_");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(UnityEngine.UIElements.EasingFunction) declare in System.Converter`2[UnityEngine.UIElements.EasingFunction,TOutput]
static Il2CppObject* b_oS_i4_(void* target, struct S_i4_ p0, MethodInfo* method) {
    // PLog("Running b_oS_i4_");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(VInt2) declare in System.Converter`2[VInt2,TOutput]
static Il2CppObject* b_oS_i4i4_(void* target, struct S_i4i4_ p0, MethodInfo* method) {
    // PLog("Running b_oS_i4i4_");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(BlurCameraData) declare in System.Converter`2[Yarp.UIBlurSetting+BlurCameraData,TOutput]
static Il2CppObject* b_oS_i4i4i4bbi4_(void* target, struct S_i4i4i4bbi4_ p0, MethodInfo* method) {
    // PLog("Running b_oS_i4i4i4bbi4_");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(UnityEngine.Rendering.VertexAttributeDescriptor) declare in System.Converter`2[UnityEngine.Rendering.VertexAttributeDescriptor,TOutput]
static Il2CppObject* b_oS_i4i4i4i4_(void* target, struct S_i4i4i4i4_ p0, MethodInfo* method) {
    // PLog("Running b_oS_i4i4i4i4_");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(Assets.Scripts.UI.InGameCommon.ActiveHighRelativeInfo) declare in System.Converter`2[Assets.Scripts.UI.InGameCommon.ActiveHighRelativeInfo,TOutput]
static Il2CppObject* b_oS_i4i4o_(void* target, struct S_i4i4o_ p0, MethodInfo* method) {
    // PLog("Running b_oS_i4i4o_");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(Assets.Scripts.Framework.AssetService.AssetData) declare in System.Converter`2[Assets.Scripts.Framework.AssetService.AssetData,TOutput]
static Il2CppObject* b_oS_i4i4ossOosi4i4i1i1i1i4Oob_(void* target, struct S_i4i4ossOosi4i4i1i1i1i4Oob_ p0, MethodInfo* method) {
    // PLog("Running b_oS_i4i4ossOosi4i4i1i1i1i4Oob_");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(UnityEngine.UILineInfo) declare in System.Converter`2[UnityEngine.UILineInfo,TOutput]
static Il2CppObject* b_oS_i4i4r4r4_(void* target, struct S_i4i4r4r4_ p0, MethodInfo* method) {
    // PLog("Running b_oS_i4i4r4r4_");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(Assets.Scripts.GameLogic.Project8PreLoadHeroConfig) declare in System.Converter`2[Assets.Scripts.GameLogic.Project8PreLoadHeroConfig,TOutput]
static Il2CppObject* b_oS_i4i4so_(void* target, struct S_i4i4so_ p0, MethodInfo* method) {
    // PLog("Running b_oS_i4i4so_");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(Assets.Scripts.GameLogic.Project8PreLoadLordConfig) declare in System.Converter`2[Assets.Scripts.GameLogic.Project8PreLoadLordConfig,TOutput]
static Il2CppObject* b_oS_i4i4u1o_(void* target, struct S_i4i4u1o_ p0, MethodInfo* method) {
    // PLog("Running b_oS_i4i4u1o_");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(RenderRequest) declare in System.Converter`2[UnityEngine.Camera+RenderRequest,TOutput]
static Il2CppObject* b_oS_i4oi4_(void* target, struct S_i4oi4_ p0, MethodInfo* method) {
    // PLog("Running b_oS_i4oi4_");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(UnityEngine.AnimatorClipInfo) declare in System.Converter`2[UnityEngine.AnimatorClipInfo,TOutput]
static Il2CppObject* b_oS_i4r4_(void* target, struct S_i4r4_ p0, MethodInfo* method) {
    // PLog("Running b_oS_i4r4_");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(UnityEngine.UIElements.StylePropertyName) declare in System.Converter`2[UnityEngine.UIElements.StylePropertyName,TOutput]
static Il2CppObject* b_oS_i4s_(void* target, struct S_i4s_ p0, MethodInfo* method) {
    // PLog("Running b_oS_i4s_");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(Assets.Scripts.Update.StepWeight) declare in System.Converter`2[Assets.Scripts.Update.StepWeight,TOutput]
static Il2CppObject* b_oS_i4si4_(void* target, struct S_i4si4_ p0, MethodInfo* method) {
    // PLog("Running b_oS_i4si4_");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(UnityEngine.Color32) declare in System.Converter`2[UnityEngine.Color32,TOutput]
static Il2CppObject* b_oS_i4u1u1u1u1_(void* target, struct S_i4u1u1u1u1_ p0, MethodInfo* method) {
    // PLog("Running b_oS_i4u1u1u1u1_");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(RecordItem) declare in System.Converter`2[EventRouter+EventRouterRecord+RecordItem,TOutput]
static Il2CppObject* b_oS_oO_(void* target, struct S_oO_ p0, MethodInfo* method) {
    // PLog("Running b_oS_oO_");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(UnityEngine.EventSystems.RaycastResult) declare in System.Converter`2[UnityEngine.EventSystems.RaycastResult,TOutput]
static Il2CppObject* b_oS_oor4r4i4i4i4S_r4r4r4_S_r4r4r4_S_r4r4_i4_(void* target, struct S_oor4r4i4i4i4S_r4r4r4_S_r4r4r4_S_r4r4_i4_ p0, MethodInfo* method) {
    // PLog("Running b_oS_oor4r4i4i4i4S_r4r4r4_S_r4r4r4_S_r4r4_i4_");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(NOAH.VFX.AnimPlayInfo) declare in System.Converter`2[NOAH.VFX.AnimPlayInfo,TOutput]
static Il2CppObject* b_oS_oosr4r4_(void* target, struct S_oosr4r4_ p0, MethodInfo* method) {
    // PLog("Running b_oS_oosr4r4_");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(Data) declare in System.Converter`2[CMTweener+Data,TOutput]
static Il2CppObject* b_oS_oosr4r4i4soooS_r4r4r4_S_r4r4r4_r4r4r4r4bi4osbor4bS_r4r4r4_i4r4i4ooo_(void* target, struct S_oosr4r4i4soooS_r4r4r4_S_r4r4r4_r4r4r4r4bi4osbor4bS_r4r4r4_i4r4i4ooo_ p0, MethodInfo* method) {
    // PLog("Running b_oS_oosr4r4i4soooS_r4r4r4_S_r4r4r4_r4r4r4r4bi4osbor4bS_r4r4r4_i4r4i4ooo_");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(UnityEngine.Rendering.ReflectionProbeBlendInfo) declare in System.Converter`2[UnityEngine.Rendering.ReflectionProbeBlendInfo,TOutput]
static Il2CppObject* b_oS_or4_(void* target, struct S_or4_ p0, MethodInfo* method) {
    // PLog("Running b_oS_or4_");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(UnityEngine.Rendering.RendererList) declare in System.Converter`2[UnityEngine.Rendering.RendererList,TOutput]
static Il2CppObject* b_oS_pu4u4u4_(void* target, struct S_pu4u4u4_ p0, MethodInfo* method) {
    // PLog("Running b_oS_pu4u4u4_");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(UnityEngine.UIElements.TimeValue) declare in System.Converter`2[UnityEngine.UIElements.TimeValue,TOutput]
static Il2CppObject* b_oS_r4i4_(void* target, struct S_r4i4_ p0, MethodInfo* method) {
    // PLog("Running b_oS_r4i4_");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(UnityEngine.Vector2) declare in System.Converter`2[UnityEngine.Vector2,TOutput]
static Il2CppObject* b_oS_r4r4_(void* target, struct S_r4r4_ p0, MethodInfo* method) {
    // PLog("Running b_oS_r4r4_");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(UnityEngine.Vector3) declare in System.Converter`2[UnityEngine.Vector3,TOutput]
static Il2CppObject* b_oS_r4r4r4_(void* target, struct S_r4r4r4_ p0, MethodInfo* method) {
    // PLog("Running b_oS_r4r4r4_");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(UnityEngine.Color) declare in System.Converter`2[UnityEngine.Color,TOutput]
static Il2CppObject* b_oS_r4r4r4r4_(void* target, struct S_r4r4r4r4_ p0, MethodInfo* method) {
    // PLog("Running b_oS_r4r4r4r4_");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(UnityEngine.BoneWeight) declare in System.Converter`2[UnityEngine.BoneWeight,TOutput]
static Il2CppObject* b_oS_r4r4r4r4i4i4i4i4_(void* target, struct S_r4r4r4r4i4i4i4i4_ p0, MethodInfo* method) {
    // PLog("Running b_oS_r4r4r4r4i4i4i4i4_");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(UnityEngine.Matrix4x4) declare in System.Converter`2[UnityEngine.Matrix4x4,TOutput]
static Il2CppObject* b_oS_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_(void* target, struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p0, MethodInfo* method) {
    // PLog("Running b_oS_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(UnityEngine.Rendering.SphericalHarmonicsL2) declare in System.Converter`2[UnityEngine.Rendering.SphericalHarmonicsL2,TOutput]
static Il2CppObject* b_oS_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_(void* target, struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p0, MethodInfo* method) {
    // PLog("Running b_oS_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(Project8FormatPreLoadPrefabConfig) declare in System.Converter`2[Assets.Scripts.GameLogic.Project8PreLoadConfig+Project8FormatPreLoadPrefabConfig,TOutput]
static Il2CppObject* b_oS_si4i4_(void* target, struct S_si4i4_ p0, MethodInfo* method) {
    // PLog("Running b_oS_si4i4_");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(System.Collections.Generic.KeyValuePair`2[System.String,System.String]) declare in System.Converter`2[System.Collections.Generic.KeyValuePair`2[System.String,System.String],TOutput]
static Il2CppObject* b_oS_ss_(void* target, struct S_ss_ p0, MethodInfo* method) {
    // PLog("Running b_oS_ss_");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(Assets.Scripts.GameLogic.Project8PreLoadPrefabConfig) declare in System.Converter`2[Assets.Scripts.GameLogic.Project8PreLoadPrefabConfig,TOutput]
static Il2CppObject* b_oS_su1i2_(void* target, struct S_su1i2_ p0, MethodInfo* method) {
    // PLog("Running b_oS_su1i2_");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(Project8RelationMod) declare in System.Converter`2[SGW+Project8RelationMod,TOutput]
static Il2CppObject* b_oS_u4i4i4i4_(void* target, struct S_u4i4i4i4_ p0, MethodInfo* method) {
    // PLog("Running b_oS_u4i4i4i4_");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(PooledCollections.PoolObjHandle`1[Assets.Scripts.GameLogic.ActorLinker]) declare in System.Converter`2[PooledCollections.PoolObjHandle`1[Assets.Scripts.GameLogic.ActorLinker],TOutput]
static Il2CppObject* b_oS_u4o_(void* target, struct S_u4o_ p0, MethodInfo* method) {
    // PLog("Running b_oS_u4o_");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(Assets.Scripts.UI.InTheGame.GlobalInfo.GlobalTipsPlayerInfo) declare in System.Converter`2[Assets.Scripts.UI.InTheGame.GlobalInfo.GlobalTipsPlayerInfo,TOutput]
static Il2CppObject* b_oS_u4oob_(void* target, struct S_u4oob_ p0, MethodInfo* method) {
    // PLog("Running b_oS_u4oob_");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(Project8BossAwardItem) declare in System.Converter`2[SGW+Project8BossAwardItem,TOutput]
static Il2CppObject* b_oS_u4u1u4i4i4_(void* target, struct S_u4u1u4i4i4_ p0, MethodInfo* method) {
    // PLog("Running b_oS_u4u1u4i4i4_");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(Assets.Scripts.GameLogic.LordIDInfo) declare in System.Converter`2[Assets.Scripts.GameLogic.LordIDInfo,TOutput]
static Il2CppObject* b_oS_u4u4_(void* target, struct S_u4u4_ p0, MethodInfo* method) {
    // PLog("Running b_oS_u4u4_");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(EquipRecommendInfo) declare in System.Converter`2[Assets.Scripts.GameLogic.Project8Equipment+EquipRecommendInfo,TOutput]
static Il2CppObject* b_oS_u4u4bo_(void* target, struct S_u4u4bo_ p0, MethodInfo* method) {
    // PLog("Running b_oS_u4u4bo_");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(Assets.Scripts.GameLogic.Project8EquipPair) declare in System.Converter`2[Assets.Scripts.GameLogic.Project8EquipPair,TOutput]
static Il2CppObject* b_oS_u4u4i4_(void* target, struct S_u4u4i4_ p0, MethodInfo* method) {
    // PLog("Running b_oS_u4u4i4_");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(Assets.Scripts.GameSystem.EquipRecipe) declare in System.Converter`2[Assets.Scripts.GameSystem.EquipRecipe,TOutput]
static Il2CppObject* b_oS_u4u4u4_(void* target, struct S_u4u4u4_ p0, MethodInfo* method) {
    // PLog("Running b_oS_u4u4u4_");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(stEquipItem) declare in System.Converter`2[SGW+stEquipItem,TOutput]
static Il2CppObject* b_oS_u4u4u4u4u4u4u4u4_(void* target, struct S_u4u4u4u4u4u4u4u4_ p0, MethodInfo* method) {
    // PLog("Running b_oS_u4u4u4u4u4u4u4u4_");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(UnityEngine.DisplayInfo) declare in System.Converter`2[UnityEngine.DisplayInfo,TOutput]
static Il2CppObject* b_oS_u8i4i4S_u4u4_S_i4i4i4i4_s_(void* target, struct S_u8i4i4S_u4u4_S_i4i4i4i4_s_ p0, MethodInfo* method) {
    // PLog("Running b_oS_u8i4i4S_u4u4_S_i4i4i4i4_s_");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(UICommonPlayerHeadData) declare in System.Converter`2[Assets.Scripts.UI.InGameCommon.UIPlayerData+UICommonPlayerHeadData,TOutput]
static Il2CppObject* b_oS_u8i4si4u8u8u8_(void* target, struct S_u8i4si4u8u8u8_ p0, MethodInfo* method) {
    // PLog("Running b_oS_u8i4si4u8u8u8_");

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
    DataTransfer::CopyValueType(apis, env, p0, TIp0)
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
// TOutput Invoke(Boolean) declare in System.Converter`2[System.Boolean,TOutput]
static Il2CppObject* b_ob(void* target, bool p0, MethodInfo* method) {
    // PLog("Running b_ob");

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

    pesapi_value argv[1]{
    converter::Converter<bool>::toScript(apis, env, p0)
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
// TOutput Invoke(Int32) declare in System.Converter`2[System.Int32,TOutput]
static Il2CppObject* b_oi4(void* target, int32_t p0, MethodInfo* method) {
    // PLog("Running b_oi4");

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

    pesapi_value argv[1]{
    converter::Converter<int32_t>::toScript(apis, env, p0)
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
// UnityEngine.RectTransform Invoke(Int32, UnityEngine.Vector3) declare in Timi.TimiListView+DelegateCreateItem
static Il2CppObject* b_oi4S_r4r4r4_(void* target, int32_t p0, struct S_r4r4r4_ p1, MethodInfo* method) {
    // PLog("Running b_oi4S_r4r4r4_");

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
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
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
// TOutput Invoke(Int64) declare in System.Converter`2[System.Int64,TOutput]
static Il2CppObject* b_oi8(void* target, int64_t p0, MethodInfo* method) {
    // PLog("Running b_oi8");

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

    pesapi_value argv[1]{
    converter::Converter<int64_t>::toScript(apis, env, p0)
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
// TNewResult Invoke(System.Threading.Tasks.Task`1[TNewResult]) declare in System.Func`2[System.Threading.Tasks.Task`1[TNewResult],TNewResult]
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
// UnityEngine.Shader Invoke(CriWare.CriMana.MovieInfo, Boolean) declare in CriWare.CriMana.Player+ShaderDispatchCallback
static Il2CppObject* b_oob(void* target, Il2CppObject* p0, bool p1, MethodInfo* method) {
    // PLog("Running b_oob");

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

    pesapi_value argv[2]{
    CSRefToLuaValue(apis, env, TIp0, p0),
            converter::Converter<bool>::toScript(apis, env, p1)
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
// System.Type Invoke(System.Reflection.Assembly, System.String, Boolean) declare in System.Func`4[System.Reflection.Assembly,System.String,System.Boolean,System.Type]
static Il2CppObject* b_oosb(void* target, Il2CppObject* p0, Il2CppString* p1, bool p2, MethodInfo* method) {
    // PLog("Running b_oosb");

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

    pesapi_value argv[3]{
    CSRefToLuaValue(apis, env, TIp0, p0),
            converter::Converter<Il2CppString*>::toScript(apis, env, p1),
            converter::Converter<bool>::toScript(apis, env, p2)
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
// OnUpdateDelegate Invoke(IntPtr, Int32) declare in System.Func`3[System.IntPtr,System.Int32,Assets.Scripts.Framework.Lua.LuaSchedule+OnUpdateDelegate]
static Il2CppObject* b_opi4(void* target, void* p0, int32_t p1, MethodInfo* method) {
    // PLog("Running b_opi4");

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

    pesapi_value argv[2]{
    apis->create_binary(env, p0, 0),
            converter::Converter<int32_t>::toScript(apis, env, p1)
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
// TOutput Invoke(Single) declare in System.Converter`2[System.Single,TOutput]
static Il2CppObject* b_or4(void* target, float p0, MethodInfo* method) {
    // PLog("Running b_or4");

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

    pesapi_value argv[1]{
    converter::Converter<float>::toScript(apis, env, p0)
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
// Byte[] Invoke(System.String, XLua.LuaTable) declare in System.Func`3[System.String,XLua.LuaTable,System.Byte[]]
static Il2CppObject* b_oso(void* target, Il2CppString* p0, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_oso");

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
    converter::Converter<Il2CppString*>::toScript(apis, env, p0),
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
// System.Security.Cryptography.X509Certificates.X509Certificate Invoke(System.String, System.Security.Cryptography.X509Certificates.X509CertificateCollection, System.Security.Cryptography.X509Certificates.X509Certificate, System.String[]) declare in Mono.Security.Interface.MonoLocalCertificateSelectionCallback
static Il2CppObject* b_osooo(void* target, Il2CppString* p0, Il2CppObject* p1, Il2CppObject* p2, Il2CppObject* p3, MethodInfo* method) {
    // PLog("Running b_osooo");

    auto TIret = GetReturnType(method);
            
    auto TIp0 = GetParameterType(method, 0);
        
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
    converter::Converter<Il2CppString*>::toScript(apis, env, p0),
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
// TOutput Invoke(Byte) declare in System.Converter`2[System.Byte,TOutput]
static Il2CppObject* b_ou1(void* target, uint8_t p0, MethodInfo* method) {
    // PLog("Running b_ou1");

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

    pesapi_value argv[1]{
    converter::Converter<uint8_t>::toScript(apis, env, p0)
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
// TOutput Invoke(UInt16) declare in System.Converter`2[System.UInt16,TOutput]
static Il2CppObject* b_ou2(void* target, uint16_t p0, MethodInfo* method) {
    // PLog("Running b_ou2");

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

    pesapi_value argv[1]{
    converter::Converter<uint16_t>::toScript(apis, env, p0)
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
// TOutput Invoke(UInt32) declare in System.Converter`2[System.UInt32,TOutput]
static Il2CppObject* b_ou4(void* target, uint32_t p0, MethodInfo* method) {
    // PLog("Running b_ou4");

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

    pesapi_value argv[1]{
    converter::Converter<uint32_t>::toScript(apis, env, p0)
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
// TOutput Invoke(UInt64) declare in System.Converter`2[System.UInt64,TOutput]
static Il2CppObject* b_ou8(void* target, uint64_t p0, MethodInfo* method) {
    // PLog("Running b_ou8");

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

    pesapi_value argv[1]{
    converter::Converter<uint64_t>::toScript(apis, env, p0)
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
// IntPtr Invoke(unitytls_tlsctx*, Byte*, IntPtr, unitytls_errorstate*) declare in Mono.Unity.UnityTls+unitytls_interface_struct+unitytls_tlsctx_read_t
static void* b_pPS__Pu1pPS_u4u4u8_(void* target, struct S__* p0, uint8_t* p1, void* p2, struct S_u4u4u8_* p3, MethodInfo* method) {
    // PLog("Running b_pPS__Pu1pPS_u4u4u8_");

    auto TIret = GetReturnType(method);
            
    auto TIp0 = GetParameterType(method, 0);
                    
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false)),
            converter::Converter<std::reference_wrapper<uint8_t>>::toScript(apis, env, *p1),
            apis->create_binary(env, p2, 0),
            apis->boxing(env, apis->native_object_to_value(env, TIp3, p3, false))
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        return {};
    }
             
    // LuaValToCSVal P any
    void* ret = DataTransfer::GetPointer<void>(apis, env, luaret);
        
    return ret;

}
// IntPtr Invoke(Void*, Byte*, IntPtr, unitytls_errorstate*) declare in Mono.Unity.UnityTls+unitytls_tlsctx_read_callback
static void* b_pPvPu1pPS_u4u4u8_(void* target, void* p0, uint8_t* p1, void* p2, struct S_u4u4u8_* p3, MethodInfo* method) {
    // PLog("Running b_pPvPu1pPS_u4u4u8_");

    auto TIret = GetReturnType(method);
                                    
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
    apis->create_binary(env, p0, 0),
            converter::Converter<std::reference_wrapper<uint8_t>>::toScript(apis, env, *p1),
            apis->create_binary(env, p2, 0),
            apis->boxing(env, apis->native_object_to_value(env, TIp3, p3, false))
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        return {};
    }
             
    // LuaValToCSVal P any
    void* ret = DataTransfer::GetPointer<void>(apis, env, luaret);
        
    return ret;

}
// IntPtr Invoke(unitytls_x509_ref, Byte*, IntPtr, unitytls_errorstate*) declare in Mono.Unity.UnityTls+unitytls_interface_struct+unitytls_x509_export_der_t
static void* b_pS_u8_Pu1pPS_u4u4u8_(void* target, struct S_u8_ p0, uint8_t* p1, void* p2, struct S_u4u4u8_* p3, MethodInfo* method) {
    // PLog("Running b_pS_u8_Pu1pPS_u4u4u8_");

    auto TIret = GetReturnType(method);
            
    auto TIp0 = GetParameterType(method, 0);
                    
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            converter::Converter<std::reference_wrapper<uint8_t>>::toScript(apis, env, *p1),
            apis->create_binary(env, p2, 0),
            apis->boxing(env, apis->native_object_to_value(env, TIp3, p3, false))
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        return {};
    }
             
    // LuaValToCSVal P any
    void* ret = DataTransfer::GetPointer<void>(apis, env, luaret);
        
    return ret;

}
// IntPtr Invoke(IntPtr, IntPtr, Int32, Int64) declare in PixPuerts.V8ConstructorCallback
static void* b_pppi4i8(void* target, void* p0, void* p1, int32_t p2, int64_t p3, MethodInfo* method) {
    // PLog("Running b_pppi4i8");

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

    pesapi_value argv[4]{
    apis->create_binary(env, p0, 0),
            apis->create_binary(env, p1, 0),
            converter::Converter<int32_t>::toScript(apis, env, p2),
            converter::Converter<int64_t>::toScript(apis, env, p3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        return {};
    }
             
    // LuaValToCSVal P any
    void* ret = DataTransfer::GetPointer<void>(apis, env, luaret);
        
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
// Single Invoke(Finger) declare in FingerList+FingerPropertyGetterDelegate`1[System.Single]
static float b_r4o(void* target, Il2CppObject* p0, MethodInfo* method) {
    // PLog("Running b_r4o");
            
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
// Single Invoke(Single) declare in System.Func`2[System.Single,System.Single]
static float b_r4r4(void* target, float p0, MethodInfo* method) {
    // PLog("Running b_r4r4");

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
    converter::Converter<float>::toScript(apis, env, p0)
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

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
// Single Invoke(Single, Single, Single) declare in System.Func`4[System.Single,System.Single,System.Single,System.Single]
static float b_r4r4r4r4(void* target, float p0, float p1, float p2, MethodInfo* method) {
    // PLog("Running b_r4r4r4r4");

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
    converter::Converter<float>::toScript(apis, env, p0),
            converter::Converter<float>::toScript(apis, env, p1),
            converter::Converter<float>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

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
// Single Invoke(System.String) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateComputeValueExpressions
static float b_r4s(void* target, Il2CppString* p0, MethodInfo* method) {
    // PLog("Running b_r4s");
            
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
// System.String Invoke() declare in System.Func`1[System.String]
static Il2CppString* b_s(void* target, MethodInfo* method) {
    // PLog("Running b_s");

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
         // LuaValToCSVal s
    Il2CppString* ret = converter::Converter<Il2CppString*>::toCpp(apis, env, luaret);
    return ret;

}
// System.String Invoke(System.Object) declare in System.Func`2[System.Object,System.String]
static Il2CppString* b_sO(void* target, Il2CppObject* p0, MethodInfo* method) {
    // PLog("Running b_sO");

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
         // LuaValToCSVal s
    Il2CppString* ret = converter::Converter<Il2CppString*>::toCpp(apis, env, luaret);
    return ret;

}
// System.String Invoke(Int32) declare in System.Func`2[System.Int32,System.String]
static Il2CppString* b_si4(void* target, int32_t p0, MethodInfo* method) {
    // PLog("Running b_si4");

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

    pesapi_value argv[1]{
    converter::Converter<int32_t>::toScript(apis, env, p0)
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

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
// System.String Invoke(Int32, Int32) declare in GCloud.UQM.OnUQMStringRetEventHandler`1[System.Int32]
static Il2CppString* b_si4i4(void* target, int32_t p0, int32_t p1, MethodInfo* method) {
    // PLog("Running b_si4i4");

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

    pesapi_value argv[2]{
    converter::Converter<int32_t>::toScript(apis, env, p0),
            converter::Converter<int32_t>::toScript(apis, env, p1)
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
// System.String Invoke(System.Text.RegularExpressions.Match) declare in System.Text.RegularExpressions.MatchEvaluator
static Il2CppString* b_so(void* target, Il2CppObject* p0, MethodInfo* method) {
    // PLog("Running b_so");

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
         // LuaValToCSVal s
    Il2CppString* ret = converter::Converter<Il2CppString*>::toCpp(apis, env, luaret);
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
// System.String Invoke(System.String) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateGetUIPrefabPath
static Il2CppString* b_ss(void* target, Il2CppString* p0, MethodInfo* method) {
    // PLog("Running b_ss");

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
         // LuaValToCSVal s
    Il2CppString* ret = converter::Converter<Il2CppString*>::toCpp(apis, env, luaret);
    return ret;

}
// System.String Invoke(System.String, Int32) declare in PixPuerts.ModuleResolveCallback
static Il2CppString* b_ssi4(void* target, Il2CppString* p0, int32_t p1, MethodInfo* method) {
    // PLog("Running b_ssi4");

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

    pesapi_value argv[2]{
    converter::Converter<Il2CppString*>::toScript(apis, env, p0),
            converter::Converter<int32_t>::toScript(apis, env, p1)
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
// System.String Invoke(System.String, System.String, System.String) declare in GUA.IExtendService
static Il2CppString* b_sssDs(void* target, Il2CppString* p0, Il2CppString* p1, Il2CppString* p2, MethodInfo* method) {
    // PLog("Running b_sssDs");

    auto TIret = GetReturnType(method);
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
        
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
    converter::Converter<Il2CppString*>::toScript(apis, env, p0),
            converter::Converter<Il2CppString*>::toScript(apis, env, p1),
            converter::Converter<Il2CppString*>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

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
// System.String Invoke(System.String, System.String, UnityEngine.GameObject, System.Action`2[System.String,UnityEngine.GameObject]) declare in System.Func`5[System.String,System.String,UnityEngine.GameObject,System.Action`2[System.String,UnityEngine.GameObject],System.String]
static Il2CppString* b_sssoo(void* target, Il2CppString* p0, Il2CppString* p1, Il2CppObject* p2, Il2CppObject* p3, MethodInfo* method) {
    // PLog("Running b_sssoo");

    auto TIret = GetReturnType(method);
            
    auto TIp0 = GetParameterType(method, 0);
        
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
    converter::Converter<Il2CppString*>::toScript(apis, env, p0),
            converter::Converter<Il2CppString*>::toScript(apis, env, p1),
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
// UInt32 Invoke() declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateGetCurrentServerSecUInt
static uint32_t b_u4(void* target, MethodInfo* method) {
    // PLog("Running b_u4");

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
    uint32_t ret = converter::Converter<uint32_t>::toCpp(apis, env, luaret);
        
    return ret;

}
// unitytls_ciphersuite Invoke(unitytls_tlsctx*, unitytls_errorstate*) declare in Mono.Unity.UnityTls+unitytls_interface_struct+unitytls_tlsctx_get_ciphersuite_t
static uint32_t b_u4PS__PS_u4u4u8_(void* target, struct S__* p0, struct S_u4u4u8_* p1, MethodInfo* method) {
    // PLog("Running b_u4PS__PS_u4u4u8_");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false)),
            apis->boxing(env, apis->native_object_to_value(env, TIp1, p1, false))
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
// unitytls_x509verify_result Invoke(Void*, unitytls_x509list_ref, unitytls_errorstate*) declare in Mono.Unity.UnityTls+unitytls_tlsctx_x509verify_callback
static uint32_t b_u4PvS_u8_PS_u4u4u8_(void* target, void* p0, struct S_u8_ p1, struct S_u4u4u8_* p2, MethodInfo* method) {
    // PLog("Running b_u4PvS_u8_PS_u4u4u8_");
                        
    auto TIp1 = GetParameterType(method, 1);
        
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
            DataTransfer::CopyValueType(apis, env, p1, TIp1),
            apis->boxing(env, apis->native_object_to_value(env, TIp2, p2, false))
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

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
// unitytls_x509verify_result Invoke(Void*, unitytls_x509_ref, unitytls_x509verify_result, unitytls_errorstate*) declare in Mono.Unity.UnityTls+unitytls_x509verify_callback
static uint32_t b_u4PvS_u8_u4PS_u4u4u8_(void* target, void* p0, struct S_u8_ p1, uint32_t p2, struct S_u4u4u8_* p3, MethodInfo* method) {
    // PLog("Running b_u4PvS_u8_u4PS_u4u4u8_");
                        
    auto TIp1 = GetParameterType(method, 1);
                    
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
    apis->create_binary(env, p0, 0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1),
            converter::Converter<uint32_t>::toScript(apis, env, p2),
            apis->boxing(env, apis->native_object_to_value(env, TIp3, p3, false))
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

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
// unitytls_x509verify_result Invoke(unitytls_x509list_ref, Byte*, IntPtr, unitytls_x509verify_callback, Void*, unitytls_errorstate*) declare in Mono.Unity.UnityTls+unitytls_interface_struct+unitytls_x509verify_default_ca_t
static uint32_t b_u4S_u8_Pu1poPvPS_u4u4u8_(void* target, struct S_u8_ p0, uint8_t* p1, void* p2, Il2CppObject* p3, void* p4, struct S_u4u4u8_* p5, MethodInfo* method) {
    // PLog("Running b_u4S_u8_Pu1poPvPS_u4u4u8_");
            
    auto TIp0 = GetParameterType(method, 0);
                    
    auto TIp2 = GetParameterType(method, 2);
        
    auto TIp3 = GetParameterType(method, 3);
                    
    auto TIp5 = GetParameterType(method, 5);

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

    pesapi_value argv[6]{
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            converter::Converter<std::reference_wrapper<uint8_t>>::toScript(apis, env, *p1),
            apis->create_binary(env, p2, 0),
            CSRefToLuaValue(apis, env, TIp3, p3),
            apis->create_binary(env, p4, 0),
            apis->boxing(env, apis->native_object_to_value(env, TIp5, p5, false))
    };
    auto luaret = apis->call_function(env, func, 0, 6, argv);

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
// unitytls_x509verify_result Invoke(unitytls_x509list_ref, unitytls_x509list_ref, Byte*, IntPtr, unitytls_x509verify_callback, Void*, unitytls_errorstate*) declare in Mono.Unity.UnityTls+unitytls_interface_struct+unitytls_x509verify_explicit_ca_t
static uint32_t b_u4S_u8_S_u8_Pu1poPvPS_u4u4u8_(void* target, struct S_u8_ p0, struct S_u8_ p1, uint8_t* p2, void* p3, Il2CppObject* p4, void* p5, struct S_u4u4u8_* p6, MethodInfo* method) {
    // PLog("Running b_u4S_u8_S_u8_Pu1poPvPS_u4u4u8_");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
                    
    auto TIp3 = GetParameterType(method, 3);
        
    auto TIp4 = GetParameterType(method, 4);
                    
    auto TIp6 = GetParameterType(method, 6);

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

    pesapi_value argv[7]{
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1),
            converter::Converter<std::reference_wrapper<uint8_t>>::toScript(apis, env, *p2),
            apis->create_binary(env, p3, 0),
            CSRefToLuaValue(apis, env, TIp4, p4),
            apis->create_binary(env, p5, 0),
            apis->boxing(env, apis->native_object_to_value(env, TIp6, p6, false))
    };
    auto luaret = apis->call_function(env, func, 0, 7, argv);

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
// UInt32 Invoke(Int32, UInt32) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateGetHeroPortraitShowSign
static uint32_t b_u4i4u4(void* target, int32_t p0, uint32_t p1, MethodInfo* method) {
    // PLog("Running b_u4i4u4");

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
            converter::Converter<uint32_t>::toScript(apis, env, p1)
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
// UInt32 Invoke(IntPtr, Int32) declare in System.Func`3[System.IntPtr,System.Int32,System.UInt32]
static uint32_t b_u4pi4(void* target, void* p0, int32_t p1, MethodInfo* method) {
    // PLog("Running b_u4pi4");
            
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

    pesapi_value argv[2]{
    apis->create_binary(env, p0, 0),
            converter::Converter<int32_t>::toScript(apis, env, p1)
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
// UInt32 Invoke(System.String, MsgBoxDelegate, OSProto.MsgBoxStyle, OSProto.MsgBoxForm) declare in Assets.Scripts.Framework.Lua.LuaMsgBox+DelegateMsgBoxShow
static uint32_t b_u4soi4i4(void* target, Il2CppString* p0, Il2CppObject* p1, int32_t p2, int32_t p3, MethodInfo* method) {
    // PLog("Running b_u4soi4i4");
            
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

    pesapi_value argv[4]{
    converter::Converter<Il2CppString*>::toScript(apis, env, p0),
            CSRefToLuaValue(apis, env, TIp1, p1),
            converter::Converter<int32_t>::toScript(apis, env, p2),
            converter::Converter<int32_t>::toScript(apis, env, p3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

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
// UInt64 Invoke(UnityEngine.GameObject) declare in AkSoundEngine+GameObjectHashFunction
static uint64_t b_u8o(void* target, Il2CppObject* p0, MethodInfo* method) {
    // PLog("Running b_u8o");
            
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
    uint64_t ret = converter::Converter<uint64_t>::toCpp(apis, env, luaret);
        
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
// Void Invoke(System.Object, System.Object) declare in System.Action`2[System.Object,System.Object]
static void b_vOO(void* target, Il2CppObject* p0, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_vOO");
            
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
// Void Invoke(System.Object, System.Runtime.Serialization.StreamingContext) declare in Newtonsoft.Json.Serialization.SerializationCallback
static void b_vOS_Oi4_(void* target, Il2CppObject* p0, struct S_Oi4_ p1, MethodInfo* method) {
    // PLog("Running b_vOS_Oi4_");
            
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
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(System.Object, System.Runtime.Serialization.StreamingContext, Newtonsoft.Json.Serialization.ErrorContext) declare in Newtonsoft.Json.Serialization.SerializationErrorCallback
static void b_vOS_Oi4_o(void* target, Il2CppObject* p0, struct S_Oi4_ p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_vOS_Oi4_o");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
        
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
    CSRefToLuaValue(apis, env, TIp0, p0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1),
            CSRefToLuaValue(apis, env, TIp2, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(System.Object, AkCallbackType, AkCallbackInfo) declare in AkCallbackManager+EventCallback
static void b_vOi4o(void* target, Il2CppObject* p0, int32_t p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_vOi4o");
            
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
    CSRefToLuaValue(apis, env, TIp0, p0),
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
// Void Invoke(System.Object, Assets.Scripts.Framework.MouseEventArgs) declare in Assets.Scripts.Framework.MouseActions
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
// Void Invoke(ViewportParams ByRef) declare in SGW+ViewportParamsTypeDelegate
static void b_vPS_S_i4i4i4_i4_(void* target, struct S_S_i4i4i4_i4_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_S_i4i4i4_i4_");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(GameWatchPlayerInfo ByRef) declare in SGW+GameWatchPlayerInfoTypeDelegate
static void b_vPS_S_o_S_S_u4u1u1i4i4i4o_oS_S_S_u4u4u4u4u4u4u1u1u4u4S_r4r4r4_u4u2i2u1_S_S_i4i4i4_S_r4r4r4_S_i4i4i4_u1u1u1_S_i4i4i4i4i4i4i4i4i4i4_S_oo_S_i4i4__S_u4S_S_u8_u4u4u4u4u4u1u1u1u1_u1u1u1_S_u4S_S_u8_u4u4u4u4u4u1u1u1u1_u1u1u1__u1u1__(void* target, struct S_S_o_S_S_u4u1u1i4i4i4o_oS_S_S_u4u4u4u4u4u4u1u1u4u4S_r4r4r4_u4u2i2u1_S_S_i4i4i4_S_r4r4r4_S_i4i4i4_u1u1u1_S_i4i4i4i4i4i4i4i4i4i4_S_oo_S_i4i4__S_u4S_S_u8_u4u4u4u4u4u1u1u1u1_u1u1u1_S_u4S_S_u8_u4u4u4u4u4u1u1u1u1_u1u1u1__u1u1__* p0, MethodInfo* method) {
    // PLog("Running b_vPS_S_o_S_S_u4u1u1i4i4i4o_oS_S_S_u4u4u4u4u4u4u1u1u4u4S_r4r4r4_u4u2i2u1_S_S_i4i4i4_S_r4r4r4_S_i4i4i4_u1u1u1_S_i4i4i4i4i4i4i4i4i4i4_S_oo_S_i4i4__S_u4S_S_u8_u4u4u4u4u4u1u1u1u1_u1u1u1_S_u4S_S_u8_u4u4u4u4u4u1u1u1u1_u1u1u1__u1u1__");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Assets.Scripts.GameLogic.ActorDeadEventParam ByRef) declare in System.RefAction`1[Assets.Scripts.GameLogic.ActorDeadEventParam]
static void b_vPS_S_u4o_S_u4o_S_u4o_S_u4o_bbo_(void* target, struct S_S_u4o_S_u4o_S_u4o_S_u4o_bbo_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_S_u4o_S_u4o_S_u4o_S_u4o_bbo_");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Assets.Scripts.GameLogic.SkillPassiveChangedEventParam ByRef) declare in System.RefAction`1[Assets.Scripts.GameLogic.SkillPassiveChangedEventParam]
static void b_vPS_S_u4o_bS_u4o__(void* target, struct S_S_u4o_bS_u4o__* p0, MethodInfo* method) {
    // PLog("Running b_vPS_S_u4o_bS_u4o__");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Assets.Scripts.GameLogic.BuffChangeEventParam ByRef) declare in System.RefAction`1[Assets.Scripts.GameLogic.BuffChangeEventParam]
static void b_vPS_S_u4o_i4S_u4o__(void* target, struct S_S_u4o_i4S_u4o__* p0, MethodInfo* method) {
    // PLog("Running b_vPS_S_u4o_i4S_u4o__");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Assets.Scripts.GameLogic.SkillCounterChangeEventParam ByRef) declare in System.RefAction`1[Assets.Scripts.GameLogic.SkillCounterChangeEventParam]
static void b_vPS_S_u4o_i4_(void* target, struct S_S_u4o_i4_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_S_u4o_i4_");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Assets.Scripts.GameLogic.ActorCommonEventParam ByRef) declare in System.RefAction`1[Assets.Scripts.GameLogic.ActorCommonEventParam]
static void b_vPS_S_u4o_i4i4u4_(void* target, struct S_S_u4o_i4i4u4_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_S_u4o_i4i4u4_");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(ActorRecoverData ByRef) declare in System.RefAction`1[SGW+ActorRecoverData]
static void b_vPS_S_u4u4u4u4u4u4u1u1u4u4S_r4r4r4_u4u2i2u1_S_S_i4i4i4_S_r4r4r4_S_i4i4i4_u1u1u1_S_i4i4i4i4i4i4i4i4i4i4_S_oo_S_i4i4__(void* target, struct S_S_u4u4u4u4u4u4u1u1u4u4S_r4r4r4_u4u2i2u1_S_S_i4i4i4_S_r4r4r4_S_i4i4i4_u1u1u1_S_i4i4i4i4i4i4i4i4i4i4_S_oo_S_i4i4__* p0, MethodInfo* method) {
    // PLog("Running b_vPS_S_u4u4u4u4u4u4u1u1u4u4S_r4r4r4_u4u2i2u1_S_S_i4i4i4_S_r4r4r4_S_i4i4i4_u1u1u1_S_i4i4i4i4i4i4i4i4i4i4_S_oo_S_i4i4__");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(unitytls_key*) declare in Mono.Unity.UnityTls+unitytls_interface_struct+unitytls_key_free_t
static void b_vPS__(void* target, struct S__* p0, MethodInfo* method) {
    // PLog("Running b_vPS__");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(unitytls_tlsctx*, unitytls_errorstate*) declare in Mono.Unity.UnityTls+unitytls_interface_struct+unitytls_tlsctx_notify_close_t
static void b_vPS__PS_u4u4u8_(void* target, struct S__* p0, struct S_u4u4u8_* p1, MethodInfo* method) {
    // PLog("Running b_vPS__PS_u4u4u8_");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false)),
            apis->boxing(env, apis->native_object_to_value(env, TIp1, p1, false))
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(unitytls_x509list*, Byte*, IntPtr, unitytls_errorstate*) declare in Mono.Unity.UnityTls+unitytls_interface_struct+unitytls_x509list_append_der_t
static void b_vPS__Pu1pPS_u4u4u8_(void* target, struct S__* p0, uint8_t* p1, void* p2, struct S_u4u4u8_* p3, MethodInfo* method) {
    // PLog("Running b_vPS__Pu1pPS_u4u4u8_");
            
    auto TIp0 = GetParameterType(method, 0);
                    
    auto TIp2 = GetParameterType(method, 2);
        
    auto TIp3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    AutoValueScope valueScope(apis, env);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy"));
    }
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[4]{
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false)),
            converter::Converter<std::reference_wrapper<uint8_t>>::toScript(apis, env, *p1),
            apis->create_binary(env, p2, 0),
            apis->boxing(env, apis->native_object_to_value(env, TIp3, p3, false))
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(unitytls_tlsctx*, unitytls_ciphersuite*, IntPtr, unitytls_errorstate*) declare in Mono.Unity.UnityTls+unitytls_interface_struct+unitytls_tlsctx_set_supported_ciphersuites_t
static void b_vPS__Pu4pPS_u4u4u8_(void* target, struct S__* p0, uint32_t* p1, void* p2, struct S_u4u4u8_* p3, MethodInfo* method) {
    // PLog("Running b_vPS__Pu4pPS_u4u4u8_");
            
    auto TIp0 = GetParameterType(method, 0);
                    
    auto TIp2 = GetParameterType(method, 2);
        
    auto TIp3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    AutoValueScope valueScope(apis, env);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy"));
    }
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[4]{
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false)),
            converter::Converter<std::reference_wrapper<uint32_t>>::toScript(apis, env, *p1),
            apis->create_binary(env, p2, 0),
            apis->boxing(env, apis->native_object_to_value(env, TIp3, p3, false))
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(unitytls_x509list*, unitytls_x509_ref, unitytls_errorstate*) declare in Mono.Unity.UnityTls+unitytls_interface_struct+unitytls_x509list_append_t
static void b_vPS__S_u8_PS_u4u4u8_(void* target, struct S__* p0, struct S_u8_ p1, struct S_u4u4u8_* p2, MethodInfo* method) {
    // PLog("Running b_vPS__S_u8_PS_u4u4u8_");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
        
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false)),
            DataTransfer::CopyValueType(apis, env, p1, TIp1),
            apis->boxing(env, apis->native_object_to_value(env, TIp2, p2, false))
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(unitytls_tlsctx*, unitytls_tlsctx_certificate_callback, Void*, unitytls_errorstate*) declare in Mono.Unity.UnityTls+unitytls_interface_struct+unitytls_tlsctx_set_certificate_callback_t
static void b_vPS__oPvPS_u4u4u8_(void* target, struct S__* p0, Il2CppObject* p1, void* p2, struct S_u4u4u8_* p3, MethodInfo* method) {
    // PLog("Running b_vPS__oPvPS_u4u4u8_");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
                    
    auto TIp3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    AutoValueScope valueScope(apis, env);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy"));
    }
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[4]{
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false)),
            CSRefToLuaValue(apis, env, TIp1, p1),
            apis->create_binary(env, p2, 0),
            apis->boxing(env, apis->native_object_to_value(env, TIp3, p3, false))
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(UnityEngine.ApplicationMemoryUsageChange ByRef) declare in UnityEngine.Application+MemoryUsageChangedCallback
static void b_vPS_i4_(void* target, struct S_i4_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_i4_");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(FormationMatchDegree ByRef) declare in SGW+FormationMatchDegreeTypeDelegate
static void b_vPS_i4i4_(void* target, struct S_i4i4_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_i4i4_");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Assets.Scripts.GameLogic.GameCommonEventParam ByRef) declare in System.RefAction`1[Assets.Scripts.GameLogic.GameCommonEventParam]
static void b_vPS_i4i4i4_(void* target, struct S_i4i4i4_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_i4i4i4_");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(CardSourceInfoArray ByRef) declare in SGW+CardSourceInfoArrayTypeDelegate
static void b_vPS_i4o_(void* target, struct S_i4o_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_i4o_");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(DebugMatchData ByRef) declare in SGW+DebugMatchDataTypeDelegate
static void b_vPS_o_(void* target, struct S_o_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_o_");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Project8AllPlayersFightStat ByRef) declare in SGW+Project8AllPlayersFightStatTypeDelegate
static void b_vPS_oo_(void* target, struct S_oo_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_oo_");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(AllPlayerStaticInfo ByRef) declare in SGW+AllPlayerStaticInfoTypeDelegate
static void b_vPS_ooo_(void* target, struct S_ooo_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_ooo_");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(MultiEquipExchangeRet ByRef) declare in SGW+MultiEquipExchangeRetTypeDelegate
static void b_vPS_oou4_(void* target, struct S_oou4_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_oou4_");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Info ByRef) declare in CriWare.CriAtomExBeatSync+CbFunc
static void b_vPS_pu4u4u4r4r4i4u4p_(void* target, struct S_pu4u4u4r4r4i4u4p_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_pu4u4u4r4r4i4u4p_");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(CriWare.CriMana.EventPoint ByRef) declare in CriWare.CriMana.Player+CuePointCallback
static void b_vPS_pu4u8u8i4pu4u4_(void* target, struct S_pu4u8u8i4pu4u4_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_pu4u8u8i4pu4u4_");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Assets.Scripts.GameLogic.AutoTestBattleRoundChangedParam ByRef) declare in System.RefAction`1[Assets.Scripts.GameLogic.AutoTestBattleRoundChangedParam]
static void b_vPS_u1i4i4_(void* target, struct S_u1i4i4_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_u1i4i4_");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(TargetLordInfo ByRef) declare in SGW+TargetLordInfoTypeDelegate
static void b_vPS_u1u4i4i4i4_(void* target, struct S_u1u4i4i4i4_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_u1u4i4i4i4_");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(DisplayInfoData ByRef) declare in SGW+DisplayInfoDataTypeDelegate
static void b_vPS_u4S_i4i4i4_S_r4r4r4_i4S_r4r4r4r4_u4u1_(void* target, struct S_u4S_i4i4i4_S_r4r4r4_i4S_r4r4r4r4_u4u1_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_u4S_i4i4i4_S_r4r4r4_i4S_r4r4r4r4_u4u1_");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(LordFloatTipData ByRef) declare in System.RefAction`1[SGW+LordFloatTipData]
static void b_vPS_u4S_u8_u4u4u4u4u4_(void* target, struct S_u4S_u8_u4u4u4u4u4_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_u4S_u8_u4u4u4u4u4_");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Assets.Scripts.GameLogic.NewPlayerInstanceParam ByRef) declare in System.RefAction`1[Assets.Scripts.GameLogic.NewPlayerInstanceParam]
static void b_vPS_u4_(void* target, struct S_u4_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_u4_");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Assets.Scripts.GameLogic.PlayerRelationEffectDetailChangeParam ByRef) declare in System.RefAction`1[Assets.Scripts.GameLogic.PlayerRelationEffectDetailChangeParam]
static void b_vPS_u4i4_(void* target, struct S_u4i4_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_u4i4_");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(RecommendHeroToBattle ByRef) declare in SGW+RecommendHeroToBattleTypeDelegate
static void b_vPS_u4i4i4_(void* target, struct S_u4i4i4_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_u4i4i4_");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(PlayerGoldChangeInfo ByRef) declare in System.RefAction`1[SGW+PlayerGoldChangeInfo]
static void b_vPS_u4i4i4i4_(void* target, struct S_u4i4i4i4_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_u4i4i4i4_");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(ShieldData ByRef) declare in SGW+SGCSkill+ShieldDataTypeDelegate
static void b_vPS_u4i4o_(void* target, struct S_u4i4o_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_u4i4o_");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(PlayerFormationInfo ByRef) declare in SGW+PlayerFormationInfoTypeDelegate
static void b_vPS_u4i4s_(void* target, struct S_u4i4s_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_u4i4s_");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(PlayerCardInfos ByRef) declare in SGW+PlayerCardInfosTypeDelegate
static void b_vPS_u4o_(void* target, struct S_u4o_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_u4o_");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(PlayerStaticDataInfo ByRef) declare in SGW+PlayerStaticDataInfoTypeDelegate
static void b_vPS_u4oi4i4i4i4_(void* target, struct S_u4oi4i4i4i4_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_u4oi4i4i4i4_");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(PlayerStaticRewardInfo ByRef) declare in SGW+PlayerStaticRewardInfoTypeDelegate
static void b_vPS_u4oo_(void* target, struct S_u4oo_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_u4oo_");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(SkillData ByRef) declare in SGW+SGCSkill+SkillDataTypeDelegate
static void b_vPS_u4ooo_(void* target, struct S_u4ooo_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_u4ooo_");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(PlayerStaticInfo ByRef) declare in SGW+PlayerStaticInfoTypeDelegate
static void b_vPS_u4oooi4i4_(void* target, struct S_u4oooi4i4_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_u4oooi4i4_");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(stValueDataInfo ByRef) declare in SGW+stValueDataInfoTypeDelegate
static void b_vPS_u4u1i4i4oo_(void* target, struct S_u4u1i4i4oo_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_u4u1i4i4oo_");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Project8NSelectOneInfos ByRef) declare in System.RefAction`1[SGW+Project8NSelectOneInfos]
static void b_vPS_u4u1o_(void* target, struct S_u4u1o_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_u4u1o_");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(BattleDamageData ByRef) declare in SGW+BattleDamageDataTypeDelegate
static void b_vPS_u4u1u4u4u1u4u4_(void* target, struct S_u4u1u4u4u1u4u4_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_u4u1u4u4u1u4u4_");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Assets.Scripts.GameLogic.BattleHeroPosChangedParam ByRef) declare in System.RefAction`1[Assets.Scripts.GameLogic.BattleHeroPosChangedParam]
static void b_vPS_u4u4S_i4i4__(void* target, struct S_u4u4S_i4i4__* p0, MethodInfo* method) {
    // PLog("Running b_vPS_u4u4S_i4i4__");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(PlayerTeamIdInfo ByRef) declare in SGW+PlayerTeamIdInfoTypeDelegate
static void b_vPS_u4u4_(void* target, struct S_u4u4_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_u4u4_");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(CardFilterChessInfo ByRef) declare in SGW+CardFilterChessInfoTypeDelegate
static void b_vPS_u4u4oo_(void* target, struct S_u4u4oo_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_u4u4oo_");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(CardAdvanceUseInfo ByRef) declare in SGW+CardAdvanceUseInfoTypeDelegate
static void b_vPS_u4u4ooo_(void* target, struct S_u4u4ooo_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_u4u4ooo_");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(stProject8BattleFiledActorData ByRef) declare in SGW+stProject8BattleFiledActorDataTypeDelegate
static void b_vPS_u4u4oooo_(void* target, struct S_u4u4oooo_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_u4u4oooo_");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(ActorEquipGroupInfo ByRef) declare in System.RefAction`1[SGW+ActorEquipGroupInfo]
static void b_vPS_u4u4u1u4_(void* target, struct S_u4u4u1u4_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_u4u4u1u4_");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(EquipQueryRet ByRef) declare in SGW+EquipQueryRetTypeDelegate
static void b_vPS_u4u4u4_(void* target, struct S_u4u4u4_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_u4u4u4_");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(CardNumData ByRef) declare in SGW+CardNumDataTypeDelegate
static void b_vPS_u4u4u4i4_(void* target, struct S_u4u4u4i4_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_u4u4u4i4_");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(LordEmojiInfo ByRef) declare in System.RefAction`1[SGW+LordEmojiInfo]
static void b_vPS_u4u4u4u1_(void* target, struct S_u4u4u4u1_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_u4u4u4u1_");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Project8CastLordSkillContext ByRef) declare in System.RefAction`1[SGW+Project8CastLordSkillContext]
static void b_vPS_u4u4u4u4u4u4u4u4u4S_u1u4u4_ou4u4u4u4si4i4i4su4o_(void* target, struct S_u4u4u4u4u4u4u4u4u4S_u1u4u4_ou4u4u4u4si4i4i4su4o_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_u4u4u4u4u4u4u4u4u4S_u1u4u4_ou4u4u4u4si4i4i4su4o_");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(CommonMemoryStat ByRef) declare in SGW+CommonMemoryStatTypeDelegate
static void b_vPS_u4u4u4u4u4u4u4u4u4u4_(void* target, struct S_u4u4u4u4u4u4u4u4u4u4_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_u4u4u4u4u4u4u4u4u4u4_");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(unitytls_errorstate*, unitytls_error_code) declare in Mono.Unity.UnityTls+unitytls_interface_struct+unitytls_errorstate_raise_error_t
static void b_vPS_u4u4u8_u4(void* target, struct S_u4u4u8_* p0, uint32_t p1, MethodInfo* method) {
    // PLog("Running b_vPS_u4u4u8_u4");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false)),
            converter::Converter<uint32_t>::toScript(apis, env, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(CriAtomExSequenceEventInfo ByRef) declare in CriWare.CriAtomExSequencer+EventCallback
static void b_vPS_u8psu4i4u4u4_(void* target, struct S_u8psu4i4u4u4_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_u8psu4i4u4u4_");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(PooledMemoryInspect ByRef) declare in SGW+PooledMemoryInspectTypeDelegate
static void b_vPS_u8u4u4u4u4u4u4u4u4u2S_u4u4u4u4u4u4_S_u4u4u4u4u4u4__(void* target, struct S_u8u4u4u4u4u4u4u4u4u2S_u4u4u4u4u4u4_S_u4u4u4u4u4u4__* p0, MethodInfo* method) {
    // PLog("Running b_vPS_u8u4u4u4u4u4u4u4u4u2S_u4u4u4u4u4u4_S_u4u4u4u4u4u4__");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(T1 ByRef) declare in Assets.Scripts.GameLogic.Project8RoundStateEvent+RefEventDelegate1`1[T1]
static void b_vPo(void* target, Il2CppObject** p0, MethodInfo* method) {
    // PLog("Running b_vPo");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false))
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(T1 ByRef, T2 ByRef) declare in Assets.Scripts.GameLogic.Project8RoundStateEvent+RefEventDelegate2`2[T1,T2]
static void b_vPoPo(void* target, Il2CppObject** p0, Il2CppObject** p1, MethodInfo* method) {
    // PLog("Running b_vPoPo");
            
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false)),
            apis->boxing(env, apis->native_object_to_value(env, TIp1, p1, false))
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(T1 ByRef, T2 ByRef, T3 ByRef) declare in Assets.Scripts.GameLogic.Project8RoundStateEvent+RefEventDelegate3`3[T1,T2,T3]
static void b_vPoPoPo(void* target, Il2CppObject** p0, Il2CppObject** p1, Il2CppObject** p2, MethodInfo* method) {
    // PLog("Running b_vPoPoPo");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
        
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
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false)),
            apis->boxing(env, apis->native_object_to_value(env, TIp1, p1, false)),
            apis->boxing(env, apis->native_object_to_value(env, TIp2, p2, false))
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Single ByRef) declare in System.RefAction`1[System.Single]
static void b_vPr4(void* target, float* p0, MethodInfo* method) {
    // PLog("Running b_vPr4");

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
    converter::Converter<std::reference_wrapper<float>>::toScript(apis, env, *p0)
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Byte*) declare in SGW+WrapperFunction
static void b_vPu1(void* target, uint8_t* p0, MethodInfo* method) {
    // PLog("Running b_vPu1");

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
    converter::Converter<std::reference_wrapper<uint8_t>>::toScript(apis, env, *p0)
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Byte*, IntPtr, unitytls_errorstate*) declare in Mono.Unity.UnityTls+unitytls_interface_struct+unitytls_random_generate_bytes_t
static void b_vPu1pPS_u4u4u8_(void* target, uint8_t* p0, void* p1, struct S_u4u4u8_* p2, MethodInfo* method) {
    // PLog("Running b_vPu1pPS_u4u4u8_");
                        
    auto TIp1 = GetParameterType(method, 1);
        
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
    converter::Converter<std::reference_wrapper<uint8_t>>::toScript(apis, env, *p0),
            apis->create_binary(env, p1, 0),
            apis->boxing(env, apis->native_object_to_value(env, TIp2, p2, false))
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(UInt32 ByRef) declare in System.RefAction`1[System.UInt32]
static void b_vPu4(void* target, uint32_t* p0, MethodInfo* method) {
    // PLog("Running b_vPu4");

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
    converter::Converter<std::reference_wrapper<uint32_t>>::toScript(apis, env, *p0)
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Void*, unitytls_tlsctx*, Byte*, IntPtr) declare in Mono.Unity.UnityTls+unitytls_tlsctx_trace_callback
static void b_vPvPS__Pu1p(void* target, void* p0, struct S__* p1, uint8_t* p2, void* p3, MethodInfo* method) {
    // PLog("Running b_vPvPS__Pu1p");
                        
    auto TIp1 = GetParameterType(method, 1);
                    
    auto TIp3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    AutoValueScope valueScope(apis, env);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy"));
    }
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[4]{
    apis->create_binary(env, p0, 0),
            apis->boxing(env, apis->native_object_to_value(env, TIp1, p1, false)),
            converter::Converter<std::reference_wrapper<uint8_t>>::toScript(apis, env, *p2),
            apis->create_binary(env, p3, 0)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Void*, unitytls_tlsctx*, Byte*, IntPtr, unitytls_x509name*, IntPtr, unitytls_x509list_ref*, unitytls_key_ref*, unitytls_errorstate*) declare in Mono.Unity.UnityTls+unitytls_tlsctx_certificate_callback
static void b_vPvPS__Pu1pPS__pPS_u8_PS_u8_PS_u4u4u8_(void* target, void* p0, struct S__* p1, uint8_t* p2, void* p3, struct S__* p4, void* p5, struct S_u8_* p6, struct S_u8_* p7, struct S_u4u4u8_* p8, MethodInfo* method) {
    // PLog("Running b_vPvPS__Pu1pPS__pPS_u8_PS_u8_PS_u4u4u8_");
                        
    auto TIp1 = GetParameterType(method, 1);
                    
    auto TIp3 = GetParameterType(method, 3);
        
    auto TIp4 = GetParameterType(method, 4);
        
    auto TIp5 = GetParameterType(method, 5);
        
    auto TIp6 = GetParameterType(method, 6);
        
    auto TIp7 = GetParameterType(method, 7);
        
    auto TIp8 = GetParameterType(method, 8);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    AutoValueScope valueScope(apis, env);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy"));
    }
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[9]{
    apis->create_binary(env, p0, 0),
            apis->boxing(env, apis->native_object_to_value(env, TIp1, p1, false)),
            converter::Converter<std::reference_wrapper<uint8_t>>::toScript(apis, env, *p2),
            apis->create_binary(env, p3, 0),
            apis->boxing(env, apis->native_object_to_value(env, TIp4, p4, false)),
            apis->create_binary(env, p5, 0),
            apis->boxing(env, apis->native_object_to_value(env, TIp6, p6, false)),
            apis->boxing(env, apis->native_object_to_value(env, TIp7, p7, false)),
            apis->boxing(env, apis->native_object_to_value(env, TIp8, p8, false))
    };
    auto luaret = apis->call_function(env, func, 0, 9, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(UnityEditor.ShortcutManagement.ShortcutArguments) declare in System.Action`1[UnityEditor.ShortcutManagement.ShortcutArguments]
static void b_vS_Oi4_(void* target, struct S_Oi4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_Oi4_");
            
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
// Void Invoke(UnityEngine.Rendering.SubMeshDescriptor) declare in System.Action`1[UnityEngine.Rendering.SubMeshDescriptor]
static void b_vS_S_S_r4r4r4_S_r4r4r4__i4i4i4i4i4i4_(void* target, struct S_S_S_r4r4r4_S_r4r4r4__i4i4i4i4i4i4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_S_S_r4r4r4_S_r4r4r4__i4i4i4i4i4i4_");
            
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
// Void Invoke(ViewportParams) declare in SGW+ViewportParamsLuaDelegate
static void b_vS_S_i4i4i4_i4_(void* target, struct S_S_i4i4i4_i4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_S_i4i4i4_i4_");
            
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
// Void Invoke(GameWatchPlayerInfo) declare in SGW+GameWatchPlayerInfoLuaDelegate
static void b_vS_S_o_S_S_u4u1u1i4i4i4o_oS_S_S_u4u4u4u4u4u4u1u1u4u4S_r4r4r4_u4u2i2u1_S_S_i4i4i4_S_r4r4r4_S_i4i4i4_u1u1u1_S_i4i4i4i4i4i4i4i4i4i4_S_oo_S_i4i4__S_u4S_S_u8_u4u4u4u4u4u1u1u1u1_u1u1u1_S_u4S_S_u8_u4u4u4u4u4u1u1u1u1_u1u1u1__u1u1__(void* target, struct S_S_o_S_S_u4u1u1i4i4i4o_oS_S_S_u4u4u4u4u4u4u1u1u4u4S_r4r4r4_u4u2i2u1_S_S_i4i4i4_S_r4r4r4_S_i4i4i4_u1u1u1_S_i4i4i4i4i4i4i4i4i4i4_S_oo_S_i4i4__S_u4S_S_u8_u4u4u4u4u4u1u1u1u1_u1u1u1_S_u4S_S_u8_u4u4u4u4u4u1u1u1u1_u1u1u1__u1u1__ p0, MethodInfo* method) {
    // PLog("Running b_vS_S_o_S_S_u4u1u1i4i4i4o_oS_S_S_u4u4u4u4u4u4u1u1u4u4S_r4r4r4_u4u2i2u1_S_S_i4i4i4_S_r4r4r4_S_i4i4i4_u1u1u1_S_i4i4i4i4i4i4i4i4i4i4_S_oo_S_i4i4__S_u4S_S_u8_u4u4u4u4u4u1u1u1u1_u1u1u1_S_u4S_S_u8_u4u4u4u4u4u1u1u1u1_u1u1u1__u1u1__");
            
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
// Void Invoke(System.Span`1[System.Char], TState) declare in System.Buffers.SpanAction`2[System.Char,TState]
static void b_vS_S_p_i4_o(void* target, struct S_S_p_i4_ p0, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_vS_S_p_i4_o");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            CSRefToLuaValue(apis, env, TIp1, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(UnityEngine.UICharInfo) declare in System.Action`1[UnityEngine.UICharInfo]
static void b_vS_S_r4r4_r4_(void* target, struct S_S_r4r4_r4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_S_r4r4_r4_");
            
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
// Void Invoke(Particle) declare in System.Action`1[UnityEngine.ParticleSystem+Particle]
static void b_vS_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_i4u1u1u1u1_u4u4r4r4i4r4r4u4_(void* target, struct S_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_i4u1u1u1u1_u4u4r4r4i4r4r4u4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_i4u1u1u1u1_u4u4r4r4i4r4r4u4_");
            
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
// Void Invoke(UnityEngine.UIVertex) declare in System.Action`1[UnityEngine.UIVertex]
static void b_vS_S_r4r4r4_S_r4r4r4_S_r4r4r4r4_S_i4u1u1u1u1_S_r4r4_S_r4r4_S_r4r4_S_r4r4__(void* target, struct S_S_r4r4r4_S_r4r4r4_S_r4r4r4r4_S_i4u1u1u1u1_S_r4r4_S_r4r4_S_r4r4_S_r4r4__ p0, MethodInfo* method) {
    // PLog("Running b_vS_S_r4r4r4_S_r4r4r4_S_r4r4r4r4_S_i4u1u1u1u1_S_r4r4_S_r4r4_S_r4r4_S_r4r4__");
            
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
// Void Invoke(ActorFloatScore) declare in System.Action`1[Assets.Scripts.GameLogic.BattleFloatActorComponent+ActorFloatScore]
static void b_vS_S_u4o_i8_(void* target, struct S_S_u4o_i8_ p0, MethodInfo* method) {
    // PLog("Running b_vS_S_u4o_i8_");
            
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
// Void Invoke(stGridEquipInfo) declare in System.Action`1[SGW+stGridEquipInfo]
static void b_vS_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4_(void* target, struct S_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4_");
            
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
// Void Invoke(T) declare in System.Action`1[T]
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
// Void Invoke(PixPuerts.LazyMemberRegisterInfo) declare in System.Action`1[PixPuerts.LazyMemberRegisterInfo]
static void b_vS_bsi4bb_(void* target, struct S_bsi4bb_ p0, MethodInfo* method) {
    // PLog("Running b_vS_bsi4bb_");
            
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
// Void Invoke(UnityEngine.SortingLayer) declare in UnityEngine.SortingLayer+LayerCallback
static void b_vS_i4_(void* target, struct S_i4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_i4_");
            
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
// Void Invoke(UnityEngine.SceneManagement.Scene, UnityEngine.SceneManagement.LoadSceneMode) declare in UnityEngine.Events.UnityAction`2[UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode]
static void b_vS_i4_i4(void* target, struct S_i4_ p0, int32_t p1, MethodInfo* method) {
    // PLog("Running b_vS_i4_i4");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            converter::Converter<int32_t>::toScript(apis, env, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(UnityEditor.DataModeChangeEventArgs) declare in System.Action`1[UnityEditor.DataModeChangeEventArgs]
static void b_vS_i4b_(void* target, struct S_i4b_ p0, MethodInfo* method) {
    // PLog("Running b_vS_i4b_");
            
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
// Void Invoke(VInt2) declare in System.Action`1[VInt2]
static void b_vS_i4i4_(void* target, struct S_i4i4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_i4i4_");
            
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
// Void Invoke(BlurCameraData) declare in System.Action`1[Yarp.UIBlurSetting+BlurCameraData]
static void b_vS_i4i4i4bbi4_(void* target, struct S_i4i4i4bbi4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_i4i4i4bbi4_");
            
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
// Void Invoke(UnityEngine.Rendering.VertexAttributeDescriptor) declare in System.Action`1[UnityEngine.Rendering.VertexAttributeDescriptor]
static void b_vS_i4i4i4i4_(void* target, struct S_i4i4i4i4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_i4i4i4i4_");
            
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
// Void Invoke(Assets.Scripts.UI.InGameCommon.ActiveHighRelativeInfo) declare in System.Action`1[Assets.Scripts.UI.InGameCommon.ActiveHighRelativeInfo]
static void b_vS_i4i4o_(void* target, struct S_i4i4o_ p0, MethodInfo* method) {
    // PLog("Running b_vS_i4i4o_");
            
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
// Void Invoke(Assets.Scripts.Framework.AssetService.AssetData) declare in System.Action`1[Assets.Scripts.Framework.AssetService.AssetData]
static void b_vS_i4i4ossOosi4i4i1i1i1i4Oob_(void* target, struct S_i4i4ossOosi4i4i1i1i1i4Oob_ p0, MethodInfo* method) {
    // PLog("Running b_vS_i4i4ossOosi4i4i1i1i1i4Oob_");
            
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
// Void Invoke(UnityEngine.UILineInfo) declare in System.Action`1[UnityEngine.UILineInfo]
static void b_vS_i4i4r4r4_(void* target, struct S_i4i4r4r4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_i4i4r4r4_");
            
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
// Void Invoke(Assets.Scripts.GameLogic.Project8PreLoadHeroConfig) declare in System.Action`1[Assets.Scripts.GameLogic.Project8PreLoadHeroConfig]
static void b_vS_i4i4so_(void* target, struct S_i4i4so_ p0, MethodInfo* method) {
    // PLog("Running b_vS_i4i4so_");
            
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
// Void Invoke(Assets.Scripts.GameLogic.Project8PreLoadLordConfig) declare in System.Action`1[Assets.Scripts.GameLogic.Project8PreLoadLordConfig]
static void b_vS_i4i4u1o_(void* target, struct S_i4i4u1o_ p0, MethodInfo* method) {
    // PLog("Running b_vS_i4i4u1o_");
            
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
// Void Invoke(CardSourceInfoArray) declare in SGW+CardSourceInfoArrayLuaDelegate
static void b_vS_i4o_(void* target, struct S_i4o_ p0, MethodInfo* method) {
    // PLog("Running b_vS_i4o_");
            
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
// Void Invoke(Project8BossAwardItems, UInt32) declare in System.Action`2[SGW+Project8BossAwardItems,System.UInt32]
static void b_vS_i4o_u4(void* target, struct S_i4o_ p0, uint32_t p1, MethodInfo* method) {
    // PLog("Running b_vS_i4o_u4");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            converter::Converter<uint32_t>::toScript(apis, env, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(RenderRequest) declare in System.Action`1[UnityEngine.Camera+RenderRequest]
static void b_vS_i4oi4_(void* target, struct S_i4oi4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_i4oi4_");
            
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
// Void Invoke(UnityEngine.AnimatorClipInfo) declare in System.Action`1[UnityEngine.AnimatorClipInfo]
static void b_vS_i4r4_(void* target, struct S_i4r4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_i4r4_");
            
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
// Void Invoke(UnityEngine.UIElements.StylePropertyName) declare in System.Action`1[UnityEngine.UIElements.StylePropertyName]
static void b_vS_i4s_(void* target, struct S_i4s_ p0, MethodInfo* method) {
    // PLog("Running b_vS_i4s_");
            
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
// Void Invoke(Assets.Scripts.Update.StepWeight) declare in System.Action`1[Assets.Scripts.Update.StepWeight]
static void b_vS_i4si4_(void* target, struct S_i4si4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_i4si4_");
            
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
// Void Invoke(UnityEngine.Color32) declare in System.Action`1[UnityEngine.Color32]
static void b_vS_i4u1u1u1u1_(void* target, struct S_i4u1u1u1u1_ p0, MethodInfo* method) {
    // PLog("Running b_vS_i4u1u1u1u1_");
            
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
// Void Invoke(UnityEngine.UIElements.TimerState) declare in System.Action`1[UnityEngine.UIElements.TimerState]
static void b_vS_i8i8_(void* target, struct S_i8i8_ p0, MethodInfo* method) {
    // PLog("Running b_vS_i8i8_");
            
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
// Void Invoke(RecordItem) declare in System.Action`1[EventRouter+EventRouterRecord+RecordItem]
static void b_vS_oO_(void* target, struct S_oO_ p0, MethodInfo* method) {
    // PLog("Running b_vS_oO_");
            
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
// Void Invoke(DebugMatchData) declare in SGW+DebugMatchDataLuaDelegate
static void b_vS_o_(void* target, struct S_o_ p0, MethodInfo* method) {
    // PLog("Running b_vS_o_");
            
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
// Void Invoke(Project8AllPlayersFightStat) declare in SGW+Project8AllPlayersFightStatLuaDelegate
static void b_vS_oo_(void* target, struct S_oo_ p0, MethodInfo* method) {
    // PLog("Running b_vS_oo_");
            
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
// Void Invoke(AllPlayerStaticInfo) declare in SGW+AllPlayerStaticInfoLuaDelegate
static void b_vS_ooo_(void* target, struct S_ooo_ p0, MethodInfo* method) {
    // PLog("Running b_vS_ooo_");
            
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
// Void Invoke(UnityEngine.EventSystems.RaycastResult) declare in System.Action`1[UnityEngine.EventSystems.RaycastResult]
static void b_vS_oor4r4i4i4i4S_r4r4r4_S_r4r4r4_S_r4r4_i4_(void* target, struct S_oor4r4i4i4i4S_r4r4r4_S_r4r4r4_S_r4r4_i4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_oor4r4i4i4i4S_r4r4r4_S_r4r4r4_S_r4r4_i4_");
            
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
// Void Invoke(NOAH.VFX.AnimPlayInfo) declare in System.Action`1[NOAH.VFX.AnimPlayInfo]
static void b_vS_oosr4r4_(void* target, struct S_oosr4r4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_oosr4r4_");
            
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
// Void Invoke(Data) declare in System.Action`1[CMTweener+Data]
static void b_vS_oosr4r4i4soooS_r4r4r4_S_r4r4r4_r4r4r4r4bi4osbor4bS_r4r4r4_i4r4i4ooo_(void* target, struct S_oosr4r4i4soooS_r4r4r4_S_r4r4r4_r4r4r4r4bi4osbor4bS_r4r4r4_i4r4i4ooo_ p0, MethodInfo* method) {
    // PLog("Running b_vS_oosr4r4i4soooS_r4r4r4_S_r4r4r4_r4r4r4r4bi4osbor4bS_r4r4r4_i4r4i4ooo_");
            
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
// Void Invoke(MultiEquipExchangeRet) declare in SGW+MultiEquipExchangeRetLuaDelegate
static void b_vS_oou4_(void* target, struct S_oou4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_oou4_");
            
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
// Void Invoke(UnityEngine.Rendering.ReflectionProbeBlendInfo) declare in System.Action`1[UnityEngine.Rendering.ReflectionProbeBlendInfo]
static void b_vS_or4_(void* target, struct S_or4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_or4_");
            
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
// Void Invoke(UnityEngine.Rendering.AsyncGPUReadbackRequest) declare in System.Action`1[UnityEngine.Rendering.AsyncGPUReadbackRequest]
static void b_vS_pi4_(void* target, struct S_pi4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_pi4_");
            
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
// Void Invoke(PixPuerts.JSCallInfo) declare in PixPuerts.OverloadReflectionWrap
static void b_vS_pppi4ooo_(void* target, struct S_pppi4ooo_ p0, MethodInfo* method) {
    // PLog("Running b_vS_pppi4ooo_");
            
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
// Void Invoke(UnityEngine.Rendering.RendererList) declare in System.Action`1[UnityEngine.Rendering.RendererList]
static void b_vS_pu4u4u4_(void* target, struct S_pu4u4u4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_pu4u4u4_");
            
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
// Void Invoke(UnityEngine.UIElements.TimeValue) declare in System.Action`1[UnityEngine.UIElements.TimeValue]
static void b_vS_r4i4_(void* target, struct S_r4i4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_r4i4_");
            
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
// Void Invoke(UnityEngine.Vector2) declare in System.Action`1[UnityEngine.Vector2]
static void b_vS_r4r4_(void* target, struct S_r4r4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_r4r4_");
            
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
// Void Invoke(UnityEngine.Vector2, UnityEngine.Vector2) declare in FingerInputManager+DragBeginEventHandler
static void b_vS_r4r4_S_r4r4_(void* target, struct S_r4r4_ p0, struct S_r4r4_ p1, MethodInfo* method) {
    // PLog("Running b_vS_r4r4_S_r4r4_");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(UnityEngine.Vector2, UnityEngine.Vector2, Single) declare in FingerInputManager+PinchMoveEventHandler
static void b_vS_r4r4_S_r4r4_r4(void* target, struct S_r4r4_ p0, struct S_r4r4_ p1, float p2, MethodInfo* method) {
    // PLog("Running b_vS_r4r4_S_r4r4_r4");
            
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

    pesapi_value argv[3]{
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1),
            converter::Converter<float>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(UnityEngine.Vector2, Int32) declare in FingerInputManager+TapEventHandler
static void b_vS_r4r4_i4(void* target, struct S_r4r4_ p0, int32_t p1, MethodInfo* method) {
    // PLog("Running b_vS_r4r4_i4");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            converter::Converter<int32_t>::toScript(apis, env, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(UnityEngine.Vector2, SwipeDirection, Single) declare in FingerInputManager+SwipeEventHandler
static void b_vS_r4r4_i4r4(void* target, struct S_r4r4_ p0, int32_t p1, float p2, MethodInfo* method) {
    // PLog("Running b_vS_r4r4_i4r4");
            
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

    pesapi_value argv[3]{
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            converter::Converter<int32_t>::toScript(apis, env, p1),
            converter::Converter<float>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(UnityEngine.Vector3) declare in System.Action`1[UnityEngine.Vector3]
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
// Void Invoke(UnityEngine.Vector3, System.Object) declare in System.Action`2[UnityEngine.Vector3,System.Object]
static void b_vS_r4r4r4_O(void* target, struct S_r4r4r4_ p0, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_vS_r4r4r4_O");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            CSRefToLuaValue(apis, env, TIp1, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(UnityEngine.Vector3, PooledCollections.PoolObjHandle`1[Assets.Scripts.GameLogic.ActorLinker], Assets.Scripts.GameSystem.ItemFlyType) declare in System.Action`3[UnityEngine.Vector3,PooledCollections.PoolObjHandle`1[Assets.Scripts.GameLogic.ActorLinker],Assets.Scripts.GameSystem.ItemFlyType]
static void b_vS_r4r4r4_S_u4o_i4(void* target, struct S_r4r4r4_ p0, struct S_u4o_ p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_vS_r4r4r4_S_u4o_i4");
            
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

    pesapi_value argv[3]{
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1),
            converter::Converter<int32_t>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(UnityEngine.Vector3, Int32) declare in System.Action`2[UnityEngine.Vector3,System.Int32]
static void b_vS_r4r4r4_i4(void* target, struct S_r4r4r4_ p0, int32_t p1, MethodInfo* method) {
    // PLog("Running b_vS_r4r4r4_i4");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            converter::Converter<int32_t>::toScript(apis, env, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(UnityEngine.Vector3, Byte, Assets.Scripts.GameSystem.ItemFlyType) declare in System.Action`3[UnityEngine.Vector3,System.Byte,Assets.Scripts.GameSystem.ItemFlyType]
static void b_vS_r4r4r4_u1i4(void* target, struct S_r4r4r4_ p0, uint8_t p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_vS_r4r4r4_u1i4");
            
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

    pesapi_value argv[3]{
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            converter::Converter<uint8_t>::toScript(apis, env, p1),
            converter::Converter<int32_t>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(UnityEngine.Color) declare in System.Action`1[UnityEngine.Color]
static void b_vS_r4r4r4r4_(void* target, struct S_r4r4r4r4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_r4r4r4r4_");
            
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
// Void Invoke(UnityEngine.Color, System.Object) declare in System.Action`2[UnityEngine.Color,System.Object]
static void b_vS_r4r4r4r4_O(void* target, struct S_r4r4r4r4_ p0, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_vS_r4r4r4r4_O");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            CSRefToLuaValue(apis, env, TIp1, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(UnityEngine.BoneWeight) declare in System.Action`1[UnityEngine.BoneWeight]
static void b_vS_r4r4r4r4i4i4i4i4_(void* target, struct S_r4r4r4r4i4i4i4i4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_r4r4r4r4i4i4i4i4_");
            
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
// Void Invoke(UnityEngine.Matrix4x4) declare in System.Action`1[UnityEngine.Matrix4x4]
static void b_vS_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_(void* target, struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_");
            
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
// Void Invoke(UnityEngine.Rendering.SphericalHarmonicsL2) declare in System.Action`1[UnityEngine.Rendering.SphericalHarmonicsL2]
static void b_vS_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_(void* target, struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_");
            
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
// Void Invoke(Project8FormatPreLoadPrefabConfig) declare in System.Action`1[Assets.Scripts.GameLogic.Project8PreLoadConfig+Project8FormatPreLoadPrefabConfig]
static void b_vS_si4i4_(void* target, struct S_si4i4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_si4i4_");
            
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
// Void Invoke(System.Collections.Generic.KeyValuePair`2[System.String,System.String]) declare in System.Action`1[System.Collections.Generic.KeyValuePair`2[System.String,System.String]]
static void b_vS_ss_(void* target, struct S_ss_ p0, MethodInfo* method) {
    // PLog("Running b_vS_ss_");
            
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
// Void Invoke(Assets.Scripts.GameLogic.Project8PreLoadPrefabConfig) declare in System.Action`1[Assets.Scripts.GameLogic.Project8PreLoadPrefabConfig]
static void b_vS_su1i2_(void* target, struct S_su1i2_ p0, MethodInfo* method) {
    // PLog("Running b_vS_su1i2_");
            
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
// Void Invoke(TargetLordInfo) declare in SGW+TargetLordInfoLuaDelegate
static void b_vS_u1u4i4i4i4_(void* target, struct S_u1u4i4i4i4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_u1u4i4i4i4_");
            
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
// Void Invoke(DisplayInfoData) declare in SGW+DisplayInfoDataLuaDelegate
static void b_vS_u4S_i4i4i4_S_r4r4r4_i4S_r4r4r4r4_u4u1_(void* target, struct S_u4S_i4i4i4_S_r4r4r4_i4S_r4r4r4r4_u4u1_ p0, MethodInfo* method) {
    // PLog("Running b_vS_u4S_i4i4i4_S_r4r4r4_i4S_r4r4r4r4_u4u1_");
            
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
// Void Invoke(RecommendHeroToBattle) declare in SGW+RecommendHeroToBattleLuaDelegate
static void b_vS_u4i4i4_(void* target, struct S_u4i4i4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_u4i4i4_");
            
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
// Void Invoke(Project8RelationMod) declare in System.Action`1[SGW+Project8RelationMod]
static void b_vS_u4i4i4i4_(void* target, struct S_u4i4i4i4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_u4i4i4i4_");
            
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
// Void Invoke(ShieldData) declare in SGW+SGCSkill+ShieldDataLuaDelegate
static void b_vS_u4i4o_(void* target, struct S_u4i4o_ p0, MethodInfo* method) {
    // PLog("Running b_vS_u4i4o_");
            
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
// Void Invoke(PlayerFormationInfo) declare in SGW+PlayerFormationInfoLuaDelegate
static void b_vS_u4i4s_(void* target, struct S_u4i4s_ p0, MethodInfo* method) {
    // PLog("Running b_vS_u4i4s_");
            
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
// Void Invoke(OSHPlayerEnergyChangeInfo) declare in System.Action`1[SGW+OSHPlayerEnergyChangeInfo]
static void b_vS_u4i4u1u4_(void* target, struct S_u4i4u1u4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_u4i4u1u4_");
            
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
// Void Invoke(PooledCollections.PoolObjHandle`1[Assets.Scripts.GameLogic.ActorLinker]) declare in System.Action`1[PooledCollections.PoolObjHandle`1[Assets.Scripts.GameLogic.ActorLinker]]
static void b_vS_u4o_(void* target, struct S_u4o_ p0, MethodInfo* method) {
    // PLog("Running b_vS_u4o_");
            
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
// Void Invoke(PooledCollections.PoolObjHandle`1[Assets.Scripts.GameLogic.ActorLinker], stEquipChangeInfo) declare in System.Action`2[PooledCollections.PoolObjHandle`1[Assets.Scripts.GameLogic.ActorLinker],SGW+stEquipChangeInfo]
static void b_vS_u4o_S_u1u2u1u1S_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4__(void* target, struct S_u4o_ p0, struct S_u1u2u1u1S_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4__ p1, MethodInfo* method) {
    // PLog("Running b_vS_u4o_S_u1u2u1u1S_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4__");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(PooledCollections.PoolObjHandle`1[Assets.Scripts.GameLogic.ActorLinker], Boolean) declare in System.Action`2[PooledCollections.PoolObjHandle`1[Assets.Scripts.GameLogic.ActorLinker],System.Boolean]
static void b_vS_u4o_b(void* target, struct S_u4o_ p0, bool p1, MethodInfo* method) {
    // PLog("Running b_vS_u4o_b");
            
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
    DataTransfer::CopyValueType(apis, env, p0, TIp0),
            converter::Converter<bool>::toScript(apis, env, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(PlayerStaticDataInfo) declare in SGW+PlayerStaticDataInfoLuaDelegate
static void b_vS_u4oi4i4i4i4_(void* target, struct S_u4oi4i4i4i4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_u4oi4i4i4i4_");
            
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
// Void Invoke(PlayerStaticRewardInfo) declare in SGW+PlayerStaticRewardInfoLuaDelegate
static void b_vS_u4oo_(void* target, struct S_u4oo_ p0, MethodInfo* method) {
    // PLog("Running b_vS_u4oo_");
            
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
// Void Invoke(Assets.Scripts.UI.InTheGame.GlobalInfo.GlobalTipsPlayerInfo) declare in System.Action`1[Assets.Scripts.UI.InTheGame.GlobalInfo.GlobalTipsPlayerInfo]
static void b_vS_u4oob_(void* target, struct S_u4oob_ p0, MethodInfo* method) {
    // PLog("Running b_vS_u4oob_");
            
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
// Void Invoke(SkillData) declare in SGW+SGCSkill+SkillDataLuaDelegate
static void b_vS_u4ooo_(void* target, struct S_u4ooo_ p0, MethodInfo* method) {
    // PLog("Running b_vS_u4ooo_");
            
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
// Void Invoke(PlayerStaticInfo) declare in SGW+PlayerStaticInfoLuaDelegate
static void b_vS_u4oooi4i4_(void* target, struct S_u4oooi4i4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_u4oooi4i4_");
            
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
// Void Invoke(stValueDataInfo) declare in SGW+stValueDataInfoLuaDelegate
static void b_vS_u4u1i4i4oo_(void* target, struct S_u4u1i4i4oo_ p0, MethodInfo* method) {
    // PLog("Running b_vS_u4u1i4i4oo_");
            
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
// Void Invoke(Project8BossAwardItem) declare in System.Action`1[SGW+Project8BossAwardItem]
static void b_vS_u4u1u4i4i4_(void* target, struct S_u4u1u4i4i4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_u4u1u4i4i4_");
            
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
// Void Invoke(BattleDamageData) declare in SGW+BattleDamageDataLuaDelegate
static void b_vS_u4u1u4u4u1u4u4_(void* target, struct S_u4u1u4u4u1u4u4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_u4u1u4u4u1u4u4_");
            
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
// Void Invoke(Assets.Scripts.GameLogic.LordIDInfo) declare in System.Action`1[Assets.Scripts.GameLogic.LordIDInfo]
static void b_vS_u4u4_(void* target, struct S_u4u4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_u4u4_");
            
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
// Void Invoke(Assets.Scripts.GameLogic.PlayerMatchTargetParam) declare in System.Action`1[Assets.Scripts.GameLogic.PlayerMatchTargetParam]
static void b_vS_u4u4b_(void* target, struct S_u4u4b_ p0, MethodInfo* method) {
    // PLog("Running b_vS_u4u4b_");
            
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
// Void Invoke(EquipRecommendInfo) declare in System.Action`1[Assets.Scripts.GameLogic.Project8Equipment+EquipRecommendInfo]
static void b_vS_u4u4bo_(void* target, struct S_u4u4bo_ p0, MethodInfo* method) {
    // PLog("Running b_vS_u4u4bo_");
            
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
// Void Invoke(Assets.Scripts.GameLogic.Project8EquipPair) declare in System.Action`1[Assets.Scripts.GameLogic.Project8EquipPair]
static void b_vS_u4u4i4_(void* target, struct S_u4u4i4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_u4u4i4_");
            
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
// Void Invoke(CardFilterChessInfo) declare in SGW+CardFilterChessInfoLuaDelegate
static void b_vS_u4u4oo_(void* target, struct S_u4u4oo_ p0, MethodInfo* method) {
    // PLog("Running b_vS_u4u4oo_");
            
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
// Void Invoke(CardAdvanceUseInfo) declare in SGW+CardAdvanceUseInfoLuaDelegate
static void b_vS_u4u4ooo_(void* target, struct S_u4u4ooo_ p0, MethodInfo* method) {
    // PLog("Running b_vS_u4u4ooo_");
            
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
// Void Invoke(stProject8BattleFiledActorData) declare in SGW+stProject8BattleFiledActorDataLuaDelegate
static void b_vS_u4u4oooo_(void* target, struct S_u4u4oooo_ p0, MethodInfo* method) {
    // PLog("Running b_vS_u4u4oooo_");
            
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
// Void Invoke(Assets.Scripts.GameSystem.EquipRecipe) declare in System.Action`1[Assets.Scripts.GameSystem.EquipRecipe]
static void b_vS_u4u4u4_(void* target, struct S_u4u4u4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_u4u4u4_");
            
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
// Void Invoke(CardNumData) declare in SGW+CardNumDataLuaDelegate
static void b_vS_u4u4u4i4_(void* target, struct S_u4u4u4i4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_u4u4u4i4_");
            
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
// Void Invoke(Assets.Scripts.GameLogic.PlayerEquipActorParam) declare in System.Action`1[Assets.Scripts.GameLogic.PlayerEquipActorParam]
static void b_vS_u4u4u4u4_(void* target, struct S_u4u4u4u4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_u4u4u4u4_");
            
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
// Void Invoke(Project8BattleBroadcast) declare in System.Action`1[SGW+Project8BattleBroadcast]
static void b_vS_u4u4u4u4u4_(void* target, struct S_u4u4u4u4u4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_u4u4u4u4u4_");
            
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
// Void Invoke(stEquipItem) declare in System.Action`1[SGW+stEquipItem]
static void b_vS_u4u4u4u4u4u4u4u4_(void* target, struct S_u4u4u4u4u4u4u4u4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_u4u4u4u4u4u4u4u4_");
            
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
// Void Invoke(CommonMemoryStat) declare in SGW+CommonMemoryStatLuaDelegate
static void b_vS_u4u4u4u4u4u4u4u4u4u4_(void* target, struct S_u4u4u4u4u4u4u4u4u4u4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_u4u4u4u4u4u4u4u4u4u4_");
            
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
// Void Invoke(UnityEngine.DisplayInfo) declare in System.Action`1[UnityEngine.DisplayInfo]
static void b_vS_u8i4i4S_u4u4_S_i4i4i4i4_s_(void* target, struct S_u8i4i4S_u4u4_S_i4i4i4i4_s_ p0, MethodInfo* method) {
    // PLog("Running b_vS_u8i4i4S_u4u4_S_i4i4i4i4_s_");
            
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
// Void Invoke(UICommonPlayerHeadData) declare in System.Action`1[Assets.Scripts.UI.InGameCommon.UIPlayerData+UICommonPlayerHeadData]
static void b_vS_u8i4si4u8u8u8_(void* target, struct S_u8i4si4u8u8u8_ p0, MethodInfo* method) {
    // PLog("Running b_vS_u8i4si4u8u8u8_");
            
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
// Void Invoke(PooledMemoryInspect) declare in SGW+PooledMemoryInspectLuaDelegate
static void b_vS_u8u4u4u4u4u4u4u4u4u2S_u4u4u4u4u4u4_S_u4u4u4u4u4u4__(void* target, struct S_u8u4u4u4u4u4u4u4u4u2S_u4u4u4u4u4u4_S_u4u4u4u4u4u4__ p0, MethodInfo* method) {
    // PLog("Running b_vS_u8u4u4u4u4u4u4u4u4u2S_u4u4u4u4u4u4_S_u4u4u4u4u4u4__");
            
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
// Void Invoke(Boolean) declare in UnityEngine.Events.UnityEvent`1[System.Boolean]
static void b_vb(void* target, bool p0, MethodInfo* method) {
    // PLog("Running b_vb");

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
    converter::Converter<bool>::toScript(apis, env, p0)
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Boolean, PrefabVisibleParam ByRef) declare in UIPrefabBase+DelegatePrefabVisible
static void b_vbPS_i4i4_(void* target, bool p0, struct S_i4i4_* p1, MethodInfo* method) {
    // PLog("Running b_vbPS_i4i4_");
                        
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
    converter::Converter<bool>::toScript(apis, env, p0),
            apis->boxing(env, apis->native_object_to_value(env, TIp1, p1, false))
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Boolean, QTSErrorCode) declare in System.Action`2[System.Boolean,QTSErrorCode]
static void b_vbi4(void* target, bool p0, int32_t p1, MethodInfo* method) {
    // PLog("Running b_vbi4");

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
    converter::Converter<bool>::toScript(apis, env, p0),
            converter::Converter<int32_t>::toScript(apis, env, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Boolean, Assets.Scripts.GameSystem.CardDragArea, UInt32) declare in System.Action`3[System.Boolean,Assets.Scripts.GameSystem.CardDragArea,System.UInt32]
static void b_vbi4u4(void* target, bool p0, int32_t p1, uint32_t p2, MethodInfo* method) {
    // PLog("Running b_vbi4u4");

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
    converter::Converter<bool>::toScript(apis, env, p0),
            converter::Converter<int32_t>::toScript(apis, env, p1),
            converter::Converter<uint32_t>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Boolean, Assets.Scripts.UI.UINested) declare in UnityEngine.Events.UnityEvent`2[System.Boolean,Assets.Scripts.UI.UINested]
static void b_vbo(void* target, bool p0, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_vbo");
                        
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
    converter::Converter<bool>::toScript(apis, env, p0),
            CSRefToLuaValue(apis, env, TIp1, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Boolean, TResult, System.String) declare in com.pixui.PxAsyncTaskDispatcher+AsyncTask`1+OnReturn[TResult]
static void b_vbos(void* target, bool p0, Il2CppObject* p1, Il2CppString* p2, MethodInfo* method) {
    // PLog("Running b_vbos");
                        
    auto TIp1 = GetParameterType(method, 1);
        
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
    converter::Converter<bool>::toScript(apis, env, p0),
            CSRefToLuaValue(apis, env, TIp1, p1),
            converter::Converter<Il2CppString*>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Boolean, UInt32) declare in System.Action`2[System.Boolean,System.UInt32]
static void b_vbu4(void* target, bool p0, uint32_t p1, MethodInfo* method) {
    // PLog("Running b_vbu4");

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
    converter::Converter<bool>::toScript(apis, env, p0),
            converter::Converter<uint32_t>::toScript(apis, env, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Int32) declare in System.Action`1[System.Int32]
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
// Void Invoke(Int32, System.Object) declare in UnityEngine.Events.UnityEvent`2[System.Int32,System.Object]
static void b_vi4O(void* target, int32_t p0, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_vi4O");
                        
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
// Void Invoke(Int32, UnityEngine.Vector2) declare in FingerInputManager+FingerDownEventHandler
static void b_vi4S_r4r4_(void* target, int32_t p0, struct S_r4r4_ p1, MethodInfo* method) {
    // PLog("Running b_vi4S_r4r4_");
                        
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
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Int32, UnityEngine.Vector2, UnityEngine.Vector2) declare in FingerInputManager+FingerDragBeginEventHandler
static void b_vi4S_r4r4_S_r4r4_(void* target, int32_t p0, struct S_r4r4_ p1, struct S_r4r4_ p2, MethodInfo* method) {
    // PLog("Running b_vi4S_r4r4_S_r4r4_");
                        
    auto TIp1 = GetParameterType(method, 1);
        
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
    converter::Converter<int32_t>::toScript(apis, env, p0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1),
            DataTransfer::CopyValueType(apis, env, p2, TIp2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Int32, UnityEngine.Vector2, Int32) declare in FingerInputManager+FingerTapEventHandler
static void b_vi4S_r4r4_i4(void* target, int32_t p0, struct S_r4r4_ p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_vi4S_r4r4_i4");
                        
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

    pesapi_value argv[3]{
    converter::Converter<int32_t>::toScript(apis, env, p0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1),
            converter::Converter<int32_t>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Int32, UnityEngine.Vector2, SwipeDirection, Single) declare in FingerInputManager+FingerSwipeEventHandler
static void b_vi4S_r4r4_i4r4(void* target, int32_t p0, struct S_r4r4_ p1, int32_t p2, float p3, MethodInfo* method) {
    // PLog("Running b_vi4S_r4r4_i4r4");
                        
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

    pesapi_value argv[4]{
    converter::Converter<int32_t>::toScript(apis, env, p0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1),
            converter::Converter<int32_t>::toScript(apis, env, p2),
            converter::Converter<float>::toScript(apis, env, p3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Int32, UnityEngine.Vector2, Single) declare in FingerInputManager+FingerStationaryEventHandler
static void b_vi4S_r4r4_r4(void* target, int32_t p0, struct S_r4r4_ p1, float p2, MethodInfo* method) {
    // PLog("Running b_vi4S_r4r4_r4");
                        
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

    pesapi_value argv[3]{
    converter::Converter<int32_t>::toScript(apis, env, p0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1),
            converter::Converter<float>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Int32, PooledCollections.PoolObjHandle`1[Assets.Scripts.Framework.UI.UIPrefab2DClass]) declare in System.Action`2[System.Int32,PooledCollections.PoolObjHandle`1[Assets.Scripts.Framework.UI.UIPrefab2DClass]]
static void b_vi4S_u4o_(void* target, int32_t p0, struct S_u4o_ p1, MethodInfo* method) {
    // PLog("Running b_vi4S_u4o_");
                        
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
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Int32, stTimerParams) declare in CTimer+OnTimeUpWithParamsHandler
static void b_vi4S_u8u8_(void* target, int32_t p0, struct S_u8u8_ p1, MethodInfo* method) {
    // PLog("Running b_vi4S_u8u8_");
                        
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
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(gcloud_voice.GCloudVoiceCompleteCode, Boolean) declare in gcloud_voice.IGCloudVoiceNotify+EnableRecvMagicVoiceHandler
static void b_vi4b(void* target, int32_t p0, bool p1, MethodInfo* method) {
    // PLog("Running b_vi4b");

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
            converter::Converter<bool>::toScript(apis, env, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Int32, Int32) declare in UIWidgets.EasyListView+RefreshItemCallback
static void b_vi4i4(void* target, int32_t p0, int32_t p1, MethodInfo* method) {
    // PLog("Running b_vi4i4");

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
            converter::Converter<int32_t>::toScript(apis, env, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Int32, Int32, Assets.Scripts.Framework.UI.SafeAreaBoundBox, UnityEngine.ScreenOrientation) declare in UnityEngine.Events.UnityEvent`4[System.Int32,System.Int32,Assets.Scripts.Framework.UI.SafeAreaBoundBox,UnityEngine.ScreenOrientation]
static void b_vi4i4S_i4i4i4i4_i4(void* target, int32_t p0, int32_t p1, struct S_i4i4i4i4_ p2, int32_t p3, MethodInfo* method) {
    // PLog("Running b_vi4i4S_i4i4i4i4_i4");
                                    
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

    pesapi_value argv[4]{
    converter::Converter<int32_t>::toScript(apis, env, p0),
            converter::Converter<int32_t>::toScript(apis, env, p1),
            DataTransfer::CopyValueType(apis, env, p2, TIp2),
            converter::Converter<int32_t>::toScript(apis, env, p3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Int32, Int32, Int32) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+PasswordRoomReq
static void b_vi4i4i4(void* target, int32_t p0, int32_t p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_vi4i4i4");

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
    converter::Converter<int32_t>::toScript(apis, env, p0),
            converter::Converter<int32_t>::toScript(apis, env, p1),
            converter::Converter<int32_t>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(gcloud_voice.GCloudVoiceCompleteCode, gcloud_voice.SpeechLanguageType, gcloud_voice.SpeechLanguageType, System.String, System.String, Int32, System.String) declare in gcloud_voice.IGCloudVoiceNotify+RSTSSpeechToTextHandler
static void b_vi4i4i4ssi4s(void* target, int32_t p0, int32_t p1, int32_t p2, Il2CppString* p3, Il2CppString* p4, int32_t p5, Il2CppString* p6, MethodInfo* method) {
    // PLog("Running b_vi4i4i4ssi4s");
                                                
    auto TIp3 = GetParameterType(method, 3);
        
    auto TIp4 = GetParameterType(method, 4);
                    
    auto TIp6 = GetParameterType(method, 6);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    AutoValueScope valueScope(apis, env);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy"));
    }
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[7]{
    converter::Converter<int32_t>::toScript(apis, env, p0),
            converter::Converter<int32_t>::toScript(apis, env, p1),
            converter::Converter<int32_t>::toScript(apis, env, p2),
            converter::Converter<Il2CppString*>::toScript(apis, env, p3),
            converter::Converter<Il2CppString*>::toScript(apis, env, p4),
            converter::Converter<int32_t>::toScript(apis, env, p5),
            converter::Converter<Il2CppString*>::toScript(apis, env, p6)
    };
    auto luaret = apis->call_function(env, func, 0, 7, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(gcloud_voice.GCloudVoiceCompleteCode, gcloud_voice.SpeechLanguageType, gcloud_voice.SpeechLanguageType, System.String, System.String, System.String, Int32, System.String) declare in gcloud_voice.IGCloudVoiceNotify+RSTSHandler
static void b_vi4i4i4sssi4s(void* target, int32_t p0, int32_t p1, int32_t p2, Il2CppString* p3, Il2CppString* p4, Il2CppString* p5, int32_t p6, Il2CppString* p7, MethodInfo* method) {
    // PLog("Running b_vi4i4i4sssi4s");
                                                
    auto TIp3 = GetParameterType(method, 3);
        
    auto TIp4 = GetParameterType(method, 4);
        
    auto TIp5 = GetParameterType(method, 5);
                    
    auto TIp7 = GetParameterType(method, 7);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    AutoValueScope valueScope(apis, env);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy"));
    }
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[8]{
    converter::Converter<int32_t>::toScript(apis, env, p0),
            converter::Converter<int32_t>::toScript(apis, env, p1),
            converter::Converter<int32_t>::toScript(apis, env, p2),
            converter::Converter<Il2CppString*>::toScript(apis, env, p3),
            converter::Converter<Il2CppString*>::toScript(apis, env, p4),
            converter::Converter<Il2CppString*>::toScript(apis, env, p5),
            converter::Converter<int32_t>::toScript(apis, env, p6),
            converter::Converter<Il2CppString*>::toScript(apis, env, p7)
    };
    auto luaret = apis->call_function(env, func, 0, 8, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(gcloud_voice.GCloudVoiceCompleteCode, gcloud_voice.SpeechLanguageType, System.String, gcloud_voice.SpeechLanguageType, System.String) declare in gcloud_voice.IGCloudVoiceNotify+TextTranslateHandler
static void b_vi4i4si4s(void* target, int32_t p0, int32_t p1, Il2CppString* p2, int32_t p3, Il2CppString* p4, MethodInfo* method) {
    // PLog("Running b_vi4i4si4s");
                                    
    auto TIp2 = GetParameterType(method, 2);
                    
    auto TIp4 = GetParameterType(method, 4);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    AutoValueScope valueScope(apis, env);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy"));
    }
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[5]{
    converter::Converter<int32_t>::toScript(apis, env, p0),
            converter::Converter<int32_t>::toScript(apis, env, p1),
            converter::Converter<Il2CppString*>::toScript(apis, env, p2),
            converter::Converter<int32_t>::toScript(apis, env, p3),
            converter::Converter<Il2CppString*>::toScript(apis, env, p4)
    };
    auto luaret = apis->call_function(env, func, 0, 5, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(gcloud_voice.GCloudVoiceCompleteCode, Int32, System.String, System.String) declare in gcloud_voice.IGCloudVoiceNotify+StreamSpeechToTextHandler
static void b_vi4i4ss(void* target, int32_t p0, int32_t p1, Il2CppString* p2, Il2CppString* p3, MethodInfo* method) {
    // PLog("Running b_vi4i4ss");
                                    
    auto TIp2 = GetParameterType(method, 2);
        
    auto TIp3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    AutoValueScope valueScope(apis, env);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy"));
    }
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[4]{
    converter::Converter<int32_t>::toScript(apis, env, p0),
            converter::Converter<int32_t>::toScript(apis, env, p1),
            converter::Converter<Il2CppString*>::toScript(apis, env, p2),
            converter::Converter<Il2CppString*>::toScript(apis, env, p3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

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
// Void Invoke(Int32, XLua.LuaTable, Int32) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateGetLineUpCallback
static void b_vi4oi4(void* target, int32_t p0, Il2CppObject* p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_vi4oi4");
                        
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

    pesapi_value argv[3]{
    converter::Converter<int32_t>::toScript(apis, env, p0),
            CSRefToLuaValue(apis, env, TIp1, p1),
            converter::Converter<int32_t>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Int32, IntPtr, PixPuerts.ISetValueToJs, IntPtr, System.Object) declare in PixPuerts.GeneralSetter
static void b_vi4popO(void* target, int32_t p0, void* p1, Il2CppObject* p2, void* p3, Il2CppObject* p4, MethodInfo* method) {
    // PLog("Running b_vi4popO");
                        
    auto TIp1 = GetParameterType(method, 1);
        
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
    }
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[5]{
    converter::Converter<int32_t>::toScript(apis, env, p0),
            apis->create_binary(env, p1, 0),
            CSRefToLuaValue(apis, env, TIp2, p2),
            apis->create_binary(env, p3, 0),
            CSRefToLuaValue(apis, env, TIp4, p4)
    };
    auto luaret = apis->call_function(env, func, 0, 5, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(gcloud_voice.GCloudVoiceCompleteCode, System.String) declare in gcloud_voice.IGCloudVoiceNotify+PlayRecordFilCompleteHandler
static void b_vi4s(void* target, int32_t p0, Il2CppString* p1, MethodInfo* method) {
    // PLog("Running b_vi4s");
                        
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
            converter::Converter<Il2CppString*>::toScript(apis, env, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(AssetRefType, System.String, UInt64, Assets.Scripts.GameLogic.ActorPreloadMeta, Int32) declare in Assets.Scripts.GameLogic.PreloadResTypeDelegate
static void b_vi4sDu8DoDi4(void* target, int32_t p0, Il2CppString* p1, uint64_t p2, Il2CppObject* p3, int32_t p4, MethodInfo* method) {
    // PLog("Running b_vi4sDu8DoDi4");
                        
    auto TIp1 = GetParameterType(method, 1);
                    
    auto TIp3 = GetParameterType(method, 3);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    AutoValueScope valueScope(apis, env);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy"));
    }
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[5]{
    converter::Converter<int32_t>::toScript(apis, env, p0),
            converter::Converter<Il2CppString*>::toScript(apis, env, p1),
            converter::Converter<uint64_t>::toScript(apis, env, p2),
            CSRefToLuaValue(apis, env, TIp3, p3),
            converter::Converter<int32_t>::toScript(apis, env, p4)
    };
    auto luaret = apis->call_function(env, func, 0, 5, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(gcloud_voice.GCloudVoiceCompleteCode, System.String, Boolean) declare in gcloud_voice.IGCloudVoiceNotify+EnableMagicVoiceHandler
static void b_vi4sb(void* target, int32_t p0, Il2CppString* p1, bool p2, MethodInfo* method) {
    // PLog("Running b_vi4sb");
                        
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

    pesapi_value argv[3]{
    converter::Converter<int32_t>::toScript(apis, env, p0),
            converter::Converter<Il2CppString*>::toScript(apis, env, p1),
            converter::Converter<bool>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(gcloud_voice.GCloudVoiceCompleteCode, System.String, Int32) declare in gcloud_voice.IGCloudVoiceNotify+JoinRoomCompleteHandler
static void b_vi4si4(void* target, int32_t p0, Il2CppString* p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_vi4si4");
                        
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

    pesapi_value argv[3]{
    converter::Converter<int32_t>::toScript(apis, env, p0),
            converter::Converter<Il2CppString*>::toScript(apis, env, p1),
            converter::Converter<int32_t>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(gcloud_voice.GCloudVoiceCompleteCode, System.String, Int32, Int32) declare in gcloud_voice.IGCloudVoiceNotify+ChangeRoleCompleteHandler
static void b_vi4si4i4(void* target, int32_t p0, Il2CppString* p1, int32_t p2, int32_t p3, MethodInfo* method) {
    // PLog("Running b_vi4si4i4");
                        
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

    pesapi_value argv[4]{
    converter::Converter<int32_t>::toScript(apis, env, p0),
            converter::Converter<Il2CppString*>::toScript(apis, env, p1),
            converter::Converter<int32_t>::toScript(apis, env, p2),
            converter::Converter<int32_t>::toScript(apis, env, p3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(gcloud_voice.GCloudVoiceCompleteCode, System.String, Int32, System.String) declare in gcloud_voice.IGCloudVoiceNotify+RoomMemberChangedCompleteHandler
static void b_vi4si4s(void* target, int32_t p0, Il2CppString* p1, int32_t p2, Il2CppString* p3, MethodInfo* method) {
    // PLog("Running b_vi4si4s");
                        
    auto TIp1 = GetParameterType(method, 1);
                    
    auto TIp3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    AutoValueScope valueScope(apis, env);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy"));
    }
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[4]{
    converter::Converter<int32_t>::toScript(apis, env, p0),
            converter::Converter<Il2CppString*>::toScript(apis, env, p1),
            converter::Converter<int32_t>::toScript(apis, env, p2),
            converter::Converter<Il2CppString*>::toScript(apis, env, p3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(gcloud_voice.GCloudVoiceCompleteCode, System.String, WXMemberInfo) declare in gcloud_voice.IGCloudVoiceNotify+QueryUserInfoHandler
static void b_vi4so(void* target, int32_t p0, Il2CppString* p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_vi4so");
                        
    auto TIp1 = GetParameterType(method, 1);
        
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
    converter::Converter<int32_t>::toScript(apis, env, p0),
            converter::Converter<Il2CppString*>::toScript(apis, env, p1),
            CSRefToLuaValue(apis, env, TIp2, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(gcloud_voice.GCloudVoiceCompleteCode, System.String, System.String) declare in gcloud_voice.IGCloudVoiceNotify+UploadReccordFileCompleteHandler
static void b_vi4ss(void* target, int32_t p0, Il2CppString* p1, Il2CppString* p2, MethodInfo* method) {
    // PLog("Running b_vi4ss");
                        
    auto TIp1 = GetParameterType(method, 1);
        
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
    converter::Converter<int32_t>::toScript(apis, env, p0),
            converter::Converter<Il2CppString*>::toScript(apis, env, p1),
            converter::Converter<Il2CppString*>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(gcloud_voice.GCloudVoiceCompleteCode, System.String, System.String, Int32) declare in gcloud_voice.IGCloudVoiceNotify+SpeechFileToTextHandler
static void b_vi4ssi4(void* target, int32_t p0, Il2CppString* p1, Il2CppString* p2, int32_t p3, MethodInfo* method) {
    // PLog("Running b_vi4ssi4");
                        
    auto TIp1 = GetParameterType(method, 1);
        
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

    pesapi_value argv[4]{
    converter::Converter<int32_t>::toScript(apis, env, p0),
            converter::Converter<Il2CppString*>::toScript(apis, env, p1),
            converter::Converter<Il2CppString*>::toScript(apis, env, p2),
            converter::Converter<int32_t>::toScript(apis, env, p3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(gcloud_voice.GCloudVoiceCompleteCode, System.String, System.String, System.String) declare in gcloud_voice.IGCloudVoiceNotify+STTReportHandler
static void b_vi4sss(void* target, int32_t p0, Il2CppString* p1, Il2CppString* p2, Il2CppString* p3, MethodInfo* method) {
    // PLog("Running b_vi4sss");
                        
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
    }
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[4]{
    converter::Converter<int32_t>::toScript(apis, env, p0),
            converter::Converter<Il2CppString*>::toScript(apis, env, p1),
            converter::Converter<Il2CppString*>::toScript(apis, env, p2),
            converter::Converter<Il2CppString*>::toScript(apis, env, p3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(gcloud_voice.GCloudVoiceCompleteCode, System.String, System.String, System.String, Int32) declare in gcloud_voice.IGCloudVoiceNotify+SpeechTranslateHandler
static void b_vi4sssi4(void* target, int32_t p0, Il2CppString* p1, Il2CppString* p2, Il2CppString* p3, int32_t p4, MethodInfo* method) {
    // PLog("Running b_vi4sssi4");
                        
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
    }
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[5]{
    converter::Converter<int32_t>::toScript(apis, env, p0),
            converter::Converter<Il2CppString*>::toScript(apis, env, p1),
            converter::Converter<Il2CppString*>::toScript(apis, env, p2),
            converter::Converter<Il2CppString*>::toScript(apis, env, p3),
            converter::Converter<int32_t>::toScript(apis, env, p4)
    };
    auto luaret = apis->call_function(env, func, 0, 5, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Assets.Scripts.Framework.ScheduleService.ScheduleType, UInt32) declare in Assets.Scripts.Framework.ScheduleService.IScheduleHandler
static void b_vi4u4(void* target, int32_t p0, uint32_t p1, MethodInfo* method) {
    // PLog("Running b_vi4u4");

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
            converter::Converter<uint32_t>::toScript(apis, env, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Int32, UInt64) declare in GCloud.PingEventHandler
static void b_vi4u8(void* target, int32_t p0, uint64_t p1, MethodInfo* method) {
    // PLog("Running b_vi4u8");

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
            converter::Converter<uint64_t>::toScript(apis, env, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Int64) declare in System.Action`1[System.Int64]
static void b_vi8(void* target, int64_t p0, MethodInfo* method) {
    // PLog("Running b_vi8");

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
    converter::Converter<int64_t>::toScript(apis, env, p0)
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Int64, Boolean, UInt32, UInt32) declare in Assets.Scripts.Resource.Package.QtsPackageManager+OnInstallCompleteDelegate
static void b_vi8bu4u4(void* target, int64_t p0, bool p1, uint32_t p2, uint32_t p3, MethodInfo* method) {
    // PLog("Running b_vi8bu4u4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    AutoValueScope valueScope(apis, env);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy"));
    }
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[4]{
    converter::Converter<int64_t>::toScript(apis, env, p0),
            converter::Converter<bool>::toScript(apis, env, p1),
            converter::Converter<uint32_t>::toScript(apis, env, p2),
            converter::Converter<uint32_t>::toScript(apis, env, p3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Int64, Int32) declare in Assets.Scripts.Resource.Package.QtsPackageManager+OnInstallStateChangeDelegate
static void b_vi8i4(void* target, int64_t p0, int32_t p1, MethodInfo* method) {
    // PLog("Running b_vi8i4");

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
    converter::Converter<int64_t>::toScript(apis, env, p0),
            converter::Converter<int32_t>::toScript(apis, env, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Int64, Stage, Int64, Int64, Int64) declare in Assets.Scripts.Resource.Package.QtsDownloader+OnQtsDownloadProgress
static void b_vi8i4i8i8i8(void* target, int64_t p0, int32_t p1, int64_t p2, int64_t p3, int64_t p4, MethodInfo* method) {
    // PLog("Running b_vi8i4i8i8i8");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    AutoValueScope valueScope(apis, env);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy"));
    }
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[5]{
    converter::Converter<int64_t>::toScript(apis, env, p0),
            converter::Converter<int32_t>::toScript(apis, env, p1),
            converter::Converter<int64_t>::toScript(apis, env, p2),
            converter::Converter<int64_t>::toScript(apis, env, p3),
            converter::Converter<int64_t>::toScript(apis, env, p4)
    };
    auto luaret = apis->call_function(env, func, 0, 5, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Int64, Int64, Int64, Int64) declare in Assets.Scripts.Resource.Package.QtsPackageManager+OnInstallProgressDelegate
static void b_vi8i8i8i8(void* target, int64_t p0, int64_t p1, int64_t p2, int64_t p3, MethodInfo* method) {
    // PLog("Running b_vi8i8i8i8");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    AutoValueScope valueScope(apis, env);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy"));
    }
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[4]{
    converter::Converter<int64_t>::toScript(apis, env, p0),
            converter::Converter<int64_t>::toScript(apis, env, p1),
            converter::Converter<int64_t>::toScript(apis, env, p2),
            converter::Converter<int64_t>::toScript(apis, env, p3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Int64, Int64, Int64, Int64, CurlUnity.CurlEasy) declare in CurlUnity.CurlEasy+ProgressCallback
static void b_vi8i8i8i8o(void* target, int64_t p0, int64_t p1, int64_t p2, int64_t p3, Il2CppObject* p4, MethodInfo* method) {
    // PLog("Running b_vi8i8i8i8o");
                                                            
    auto TIp4 = GetParameterType(method, 4);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    AutoValueScope valueScope(apis, env);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy"));
    }
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[5]{
    converter::Converter<int64_t>::toScript(apis, env, p0),
            converter::Converter<int64_t>::toScript(apis, env, p1),
            converter::Converter<int64_t>::toScript(apis, env, p2),
            converter::Converter<int64_t>::toScript(apis, env, p3),
            CSRefToLuaValue(apis, env, TIp4, p4)
    };
    auto luaret = apis->call_function(env, func, 0, 5, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Int64, IntPtr, UInt32) declare in AkAudioOutputCapture+CaptureOutputCallbackDelegate
static void b_vi8pu4(void* target, int64_t p0, void* p1, uint32_t p2, MethodInfo* method) {
    // PLog("Running b_vi8pu4");
                        
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

    pesapi_value argv[3]{
    converter::Converter<int64_t>::toScript(apis, env, p0),
            apis->create_binary(env, p1, 0),
            converter::Converter<uint32_t>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Int64, System.String, UInt32) declare in Assets.Scripts.Resource.Package.QtsDownloader+OnQtsDownloadCompleteDelegate
static void b_vi8su4(void* target, int64_t p0, Il2CppString* p1, uint32_t p2, MethodInfo* method) {
    // PLog("Running b_vi8su4");
                        
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

    pesapi_value argv[3]{
    converter::Converter<int64_t>::toScript(apis, env, p0),
            converter::Converter<Il2CppString*>::toScript(apis, env, p1),
            converter::Converter<uint32_t>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

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
// Void Invoke(UnityEditor.ShortcutManagement.ShortcutEntry, UnityEditor.ShortcutManagement.ShortcutArguments) declare in System.Action`2[UnityEditor.ShortcutManagement.ShortcutEntry,UnityEditor.ShortcutManagement.ShortcutArguments]
static void b_voS_Oi4_(void* target, Il2CppObject* p0, struct S_Oi4_ p1, MethodInfo* method) {
    // PLog("Running b_voS_Oi4_");
            
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
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(UnityEngine.UIElements.VisualElement, UnityEngine.UIElements.Experimental.StyleValues) declare in System.Action`2[UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.Experimental.StyleValues]
static void b_voS_o_(void* target, Il2CppObject* p0, struct S_o_ p1, MethodInfo* method) {
    // PLog("Running b_voS_o_");
            
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
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(EquipWithActor, UnityEngine.Vector2) declare in System.Action`2[Assets.Scripts.UI.InTheGame.Common.UIEquipCommonItem+EquipWithActor,UnityEngine.Vector2]
static void b_voS_r4r4_(void* target, Il2CppObject* p0, struct S_r4r4_ p1, MethodInfo* method) {
    // PLog("Running b_voS_r4r4_");
            
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
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(UnityEngine.UIElements.VisualElement, UnityEngine.Vector3) declare in System.Action`2[UnityEngine.UIElements.VisualElement,UnityEngine.Vector3]
static void b_voS_r4r4r4_(void* target, Il2CppObject* p0, struct S_r4r4r4_ p1, MethodInfo* method) {
    // PLog("Running b_voS_r4r4r4_");
            
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
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(UnityEngine.UIElements.VisualElement, UnityEngine.Rect) declare in System.Action`2[UnityEngine.UIElements.VisualElement,UnityEngine.Rect]
static void b_voS_r4r4r4r4_(void* target, Il2CppObject* p0, struct S_r4r4r4r4_ p1, MethodInfo* method) {
    // PLog("Running b_voS_r4r4r4r4_");
            
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
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(UIPrefab2D, Boolean) declare in System.Action`2[UIPrefab2D,System.Boolean]
static void b_vob(void* target, Il2CppObject* p0, bool p1, MethodInfo* method) {
    // PLog("Running b_vob");
            
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
    CSRefToLuaValue(apis, env, TIp0, p0),
            converter::Converter<bool>::toScript(apis, env, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Int32[], Int32) declare in gcloud_voice.IGCloudVoiceNotify+MemberVoiceHandler
static void b_voi4(void* target, Il2CppObject* p0, int32_t p1, MethodInfo* method) {
    // PLog("Running b_voi4");
            
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
    CSRefToLuaValue(apis, env, TIp0, p0),
            converter::Converter<int32_t>::toScript(apis, env, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Assets.Scripts.UI.InTheGame.Standard.UILordSkillForBianQueItem, Int32, LuaUIPointerEventData) declare in Assets.Scripts.UI.InTheGame.Standard.UILordSkillForBianQueAllItem+OnDragItemEndDelegate
static void b_voi4o(void* target, Il2CppObject* p0, int32_t p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_voi4o");
            
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
    CSRefToLuaValue(apis, env, TIp0, p0),
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
// Void Invoke(DelegateOpenEmbattleH5Callback, Int32, System.String) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateOpenEmbattleH5
static void b_voi4s(void* target, Il2CppObject* p0, int32_t p1, Il2CppString* p2, MethodInfo* method) {
    // PLog("Running b_voi4s");
            
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
    CSRefToLuaValue(apis, env, TIp0, p0),
            converter::Converter<int32_t>::toScript(apis, env, p1),
            converter::Converter<Il2CppString*>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(T, UnityEngine.EventSystems.BaseEventData) declare in UnityEngine.EventSystems.ExecuteEvents+EventFunction`1[T]
static void b_voo(void* target, Il2CppObject* p0, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_voo");
            
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
// Void Invoke(Assets.Scripts.Framework.UI.UIPrefab2DClass, UnityEngine.RectTransform, Int32, System.Action, Assets.Scripts.UI.TipExtraParam) declare in System.Action`5[Assets.Scripts.Framework.UI.UIPrefab2DClass,UnityEngine.RectTransform,System.Int32,System.Action,Assets.Scripts.UI.TipExtraParam]
static void b_vooi4oS_bbbbbbb_(void* target, Il2CppObject* p0, Il2CppObject* p1, int32_t p2, Il2CppObject* p3, struct S_bbbbbbb_ p4, MethodInfo* method) {
    // PLog("Running b_vooi4oS_bbbbbbb_");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
                    
    auto TIp3 = GetParameterType(method, 3);
        
    auto TIp4 = GetParameterType(method, 4);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    AutoValueScope valueScope(apis, env);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy"));
    }
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[5]{
    CSRefToLuaValue(apis, env, TIp0, p0),
            CSRefToLuaValue(apis, env, TIp1, p1),
            converter::Converter<int32_t>::toScript(apis, env, p2),
            CSRefToLuaValue(apis, env, TIp3, p3),
            DataTransfer::CopyValueType(apis, env, p4, TIp4)
    };
    auto luaret = apis->call_function(env, func, 0, 5, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Assets.Scripts.Framework.AssetService.BaseAsset, Single[], UnityEngine.Vector3[]) declare in Assets.Scripts.Framework.AssetService.AssetService+OnDelayRecycleDelegate
static void b_vooo(void* target, Il2CppObject* p0, Il2CppObject* p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_vooo");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
        
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
    CSRefToLuaValue(apis, env, TIp0, p0),
            CSRefToLuaValue(apis, env, TIp1, p1),
            CSRefToLuaValue(apis, env, TIp2, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(UnityEngine.UIElements.VisualElement, Single) declare in System.Action`2[UnityEngine.UIElements.VisualElement,System.Single]
static void b_vor4(void* target, Il2CppObject* p0, float p1, MethodInfo* method) {
    // PLog("Running b_vor4");
            
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
    CSRefToLuaValue(apis, env, TIp0, p0),
            converter::Converter<float>::toScript(apis, env, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Assets.Scripts.Framework.AssetService.ParticleAsset, Single, UnityEngine.Transform, Boolean) declare in Assets.Scripts.GameLogic.LogicGlue+SetParticleScaleDelegate
static void b_vor4ob(void* target, Il2CppObject* p0, float p1, Il2CppObject* p2, bool p3, MethodInfo* method) {
    // PLog("Running b_vor4ob");
            
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

    pesapi_value argv[4]{
    CSRefToLuaValue(apis, env, TIp0, p0),
            converter::Converter<float>::toScript(apis, env, p1),
            CSRefToLuaValue(apis, env, TIp2, p2),
            converter::Converter<bool>::toScript(apis, env, p3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(UnityEngine.EventSystems.PointerEventData, Single, Single) declare in System.Action`3[UnityEngine.EventSystems.PointerEventData,System.Single,System.Single]
static void b_vor4r4(void* target, Il2CppObject* p0, float p1, float p2, MethodInfo* method) {
    // PLog("Running b_vor4r4");
            
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

    pesapi_value argv[3]{
    CSRefToLuaValue(apis, env, TIp0, p0),
            converter::Converter<float>::toScript(apis, env, p1),
            converter::Converter<float>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Timi.TimiMenuIndex, System.String) declare in UnityEngine.Events.UnityEvent`2[Timi.TimiMenuIndex,System.String]
static void b_vos(void* target, Il2CppObject* p0, Il2CppString* p1, MethodInfo* method) {
    // PLog("Running b_vos");
            
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
            converter::Converter<Il2CppString*>::toScript(apis, env, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(ResData.ResEquipDataBin, UInt32, Assets.Scripts.Framework.UI.UIPrefab2DClass, UnityEngine.RectTransform) declare in System.Action`4[ResData.ResEquipDataBin,System.UInt32,Assets.Scripts.Framework.UI.UIPrefab2DClass,UnityEngine.RectTransform]
static void b_vou4oo(void* target, Il2CppObject* p0, uint32_t p1, Il2CppObject* p2, Il2CppObject* p3, MethodInfo* method) {
    // PLog("Running b_vou4oo");
            
    auto TIp0 = GetParameterType(method, 0);
                    
    auto TIp2 = GetParameterType(method, 2);
        
    auto TIp3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    AutoValueScope valueScope(apis, env);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy"));
    }
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[4]{
    CSRefToLuaValue(apis, env, TIp0, p0),
            converter::Converter<uint32_t>::toScript(apis, env, p1),
            CSRefToLuaValue(apis, env, TIp2, p2),
            CSRefToLuaValue(apis, env, TIp3, p3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(IntPtr) declare in CriWare.CriMana.Player+SubtitleChangeCallback
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
// Void Invoke(IntPtr, System.Object) declare in System.Action`2[System.IntPtr,System.Object]
static void b_vpO(void* target, void* p0, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_vpO");
            
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
// Void Invoke(IntPtr, UnityEngine.Vector2) declare in System.Action`2[System.IntPtr,UnityEngine.Vector2]
static void b_vpS_r4r4_(void* target, void* p0, struct S_r4r4_ p1, MethodInfo* method) {
    // PLog("Running b_vpS_r4r4_");
            
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
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(IntPtr, UnityEngine.Vector3) declare in System.Action`2[System.IntPtr,UnityEngine.Vector3]
static void b_vpS_r4r4r4_(void* target, void* p0, struct S_r4r4r4_ p1, MethodInfo* method) {
    // PLog("Running b_vpS_r4r4r4_");
            
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
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(IntPtr, Boolean) declare in System.Action`2[System.IntPtr,System.Boolean]
static void b_vpb(void* target, void* p0, bool p1, MethodInfo* method) {
    // PLog("Running b_vpb");
            
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
            converter::Converter<bool>::toScript(apis, env, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(IntPtr, Int32) declare in gcloud_voice.IGCloudVoiceNotify+RecordingDataHandler
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
// Void Invoke(IntPtr, Int32, Int32, Int32) declare in gcloud_voice.IGCloudVoiceNotify+PlayingDataHandler
static void b_vpi4i4i4(void* target, void* p0, int32_t p1, int32_t p2, int32_t p3, MethodInfo* method) {
    // PLog("Running b_vpi4i4i4");
            
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

    pesapi_value argv[4]{
    apis->create_binary(env, p0, 0),
            converter::Converter<int32_t>::toScript(apis, env, p1),
            converter::Converter<int32_t>::toScript(apis, env, p2),
            converter::Converter<int32_t>::toScript(apis, env, p3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

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
// Void Invoke(IntPtr, Int64) declare in PixPuerts.V8DestructorCallback
static void b_vpi8(void* target, void* p0, int64_t p1, MethodInfo* method) {
    // PLog("Running b_vpi8");
            
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
            converter::Converter<int64_t>::toScript(apis, env, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

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
// Void Invoke(IntPtr, IntPtr, IntPtr, Int32, Int64) declare in PixPuerts.V8FunctionCallback
static void b_vpppi4i8(void* target, void* p0, void* p1, void* p2, int32_t p3, int64_t p4, MethodInfo* method) {
    // PLog("Running b_vpppi4i8");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
        
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

    pesapi_value argv[5]{
    apis->create_binary(env, p0, 0),
            apis->create_binary(env, p1, 0),
            apis->create_binary(env, p2, 0),
            converter::Converter<int32_t>::toScript(apis, env, p3),
            converter::Converter<int64_t>::toScript(apis, env, p4)
    };
    auto luaret = apis->call_function(env, func, 0, 5, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(IntPtr, System.String) declare in System.Action`2[System.IntPtr,System.String]
static void b_vps(void* target, void* p0, Il2CppString* p1, MethodInfo* method) {
    // PLog("Running b_vps");
            
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
            converter::Converter<Il2CppString*>::toScript(apis, env, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(IntPtr, UInt32) declare in System.Action`2[System.IntPtr,System.UInt32]
static void b_vpu4(void* target, void* p0, uint32_t p1, MethodInfo* method) {
    // PLog("Running b_vpu4");
            
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
            converter::Converter<uint32_t>::toScript(apis, env, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Single) declare in System.Action`1[System.Single]
static void b_vr4(void* target, float p0, MethodInfo* method) {
    // PLog("Running b_vr4");

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
    converter::Converter<float>::toScript(apis, env, p0)
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Single, System.Object) declare in System.Action`2[System.Single,System.Object]
static void b_vr4O(void* target, float p0, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_vr4O");
                        
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
    converter::Converter<float>::toScript(apis, env, p0),
            CSRefToLuaValue(apis, env, TIp1, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Single, Single) declare in System.Action`2[System.Single,System.Single]
static void b_vr4r4(void* target, float p0, float p1, MethodInfo* method) {
    // PLog("Running b_vr4r4");

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
    converter::Converter<float>::toScript(apis, env, p0),
            converter::Converter<float>::toScript(apis, env, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(System.String) declare in UnityEngine.Events.UnityEvent`1[System.String]
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
// Void Invoke(System.String, System.Object) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+SendLuaEventID
static void b_vsO(void* target, Il2CppString* p0, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_vsO");
            
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
// Void Invoke(System.String, Boolean) declare in System.Action`2[System.String,System.Boolean]
static void b_vsb(void* target, Il2CppString* p0, bool p1, MethodInfo* method) {
    // PLog("Running b_vsb");
            
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
    converter::Converter<Il2CppString*>::toScript(apis, env, p0),
            converter::Converter<bool>::toScript(apis, env, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(System.String, Boolean, Unity.Profiling.DebugScreenCapture) declare in System.Action`3[System.String,System.Boolean,Unity.Profiling.DebugScreenCapture]
static void b_vsbS_S_Pvi4i4i4S_pi4i4_i4_i4i4i4_(void* target, Il2CppString* p0, bool p1, struct S_S_Pvi4i4i4S_pi4i4_i4_i4i4i4_ p2, MethodInfo* method) {
    // PLog("Running b_vsbS_S_Pvi4i4i4S_pi4i4_i4_i4i4i4_");
            
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
    converter::Converter<Il2CppString*>::toScript(apis, env, p0),
            converter::Converter<bool>::toScript(apis, env, p1),
            DataTransfer::CopyValueType(apis, env, p2, TIp2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(System.String, Boolean, UnityEngine.Vector3, UnityEngine.Vector3) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateBubbleShow
static void b_vsbS_r4r4r4_S_r4r4r4_(void* target, Il2CppString* p0, bool p1, struct S_r4r4r4_ p2, struct S_r4r4r4_ p3, MethodInfo* method) {
    // PLog("Running b_vsbS_r4r4r4_S_r4r4r4_");
            
    auto TIp0 = GetParameterType(method, 0);
                    
    auto TIp2 = GetParameterType(method, 2);
        
    auto TIp3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    AutoValueScope valueScope(apis, env);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy"));
    }
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[4]{
    converter::Converter<Il2CppString*>::toScript(apis, env, p0),
            converter::Converter<bool>::toScript(apis, env, p1),
            DataTransfer::CopyValueType(apis, env, p2, TIp2),
            DataTransfer::CopyValueType(apis, env, p3, TIp3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(System.String, Boolean, System.String) declare in UnityEngine.Application+AdvertisingIdentifierCallback
static void b_vsbs(void* target, Il2CppString* p0, bool p1, Il2CppString* p2, MethodInfo* method) {
    // PLog("Running b_vsbs");
            
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
    converter::Converter<Il2CppString*>::toScript(apis, env, p0),
            converter::Converter<bool>::toScript(apis, env, p1),
            converter::Converter<Il2CppString*>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(System.String, Int32, Boolean, Boolean) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegatePlayerPrefsSetInt
static void b_vsi4DbDb(void* target, Il2CppString* p0, int32_t p1, bool p2, bool p3, MethodInfo* method) {
    // PLog("Running b_vsi4DbDb");
            
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

    pesapi_value argv[4]{
    converter::Converter<Il2CppString*>::toScript(apis, env, p0),
            converter::Converter<int32_t>::toScript(apis, env, p1),
            converter::Converter<bool>::toScript(apis, env, p2),
            converter::Converter<bool>::toScript(apis, env, p3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(System.String, Int32, Int32) declare in gcloud_voice.IGCloudVoiceNotify+RoomMemberVoiceHandler
static void b_vsi4i4(void* target, Il2CppString* p0, int32_t p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_vsi4i4");
            
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

    pesapi_value argv[3]{
    converter::Converter<Il2CppString*>::toScript(apis, env, p0),
            converter::Converter<int32_t>::toScript(apis, env, p1),
            converter::Converter<int32_t>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(System.String, Int32, System.String, Int32, System.String) declare in gcloud_voice.IGCloudVoiceNotify+RealTimeTranslateTextHandler
static void b_vsi4si4s(void* target, Il2CppString* p0, int32_t p1, Il2CppString* p2, int32_t p3, Il2CppString* p4, MethodInfo* method) {
    // PLog("Running b_vsi4si4s");
            
    auto TIp0 = GetParameterType(method, 0);
                    
    auto TIp2 = GetParameterType(method, 2);
                    
    auto TIp4 = GetParameterType(method, 4);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    AutoValueScope valueScope(apis, env);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy"));
    }
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[5]{
    converter::Converter<Il2CppString*>::toScript(apis, env, p0),
            converter::Converter<int32_t>::toScript(apis, env, p1),
            converter::Converter<Il2CppString*>::toScript(apis, env, p2),
            converter::Converter<int32_t>::toScript(apis, env, p3),
            converter::Converter<Il2CppString*>::toScript(apis, env, p4)
    };
    auto luaret = apis->call_function(env, func, 0, 5, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(System.String, Int32, System.String, System.String) declare in com.tencent.mna.MNA+MNAPingObserver
static void b_vsi4ss(void* target, Il2CppString* p0, int32_t p1, Il2CppString* p2, Il2CppString* p3, MethodInfo* method) {
    // PLog("Running b_vsi4ss");
            
    auto TIp0 = GetParameterType(method, 0);
                    
    auto TIp2 = GetParameterType(method, 2);
        
    auto TIp3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    AutoValueScope valueScope(apis, env);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy"));
    }
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[4]{
    converter::Converter<Il2CppString*>::toScript(apis, env, p0),
            converter::Converter<int32_t>::toScript(apis, env, p1),
            converter::Converter<Il2CppString*>::toScript(apis, env, p2),
            converter::Converter<Il2CppString*>::toScript(apis, env, p3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(System.String, Int64, Int32, Boolean, Int32) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+BeginReplayBattle
static void b_vsi8i4bi4(void* target, Il2CppString* p0, int64_t p1, int32_t p2, bool p3, int32_t p4, MethodInfo* method) {
    // PLog("Running b_vsi8i4bi4");
            
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

    pesapi_value argv[5]{
    converter::Converter<Il2CppString*>::toScript(apis, env, p0),
            converter::Converter<int64_t>::toScript(apis, env, p1),
            converter::Converter<int32_t>::toScript(apis, env, p2),
            converter::Converter<bool>::toScript(apis, env, p3),
            converter::Converter<int32_t>::toScript(apis, env, p4)
    };
    auto luaret = apis->call_function(env, func, 0, 5, argv);

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
// Void Invoke(System.String, UnityEngine.RectTransform, Boolean) declare in System.Action`3[System.String,UnityEngine.RectTransform,System.Boolean]
static void b_vsob(void* target, Il2CppString* p0, Il2CppObject* p1, bool p2, MethodInfo* method) {
    // PLog("Running b_vsob");
            
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

    pesapi_value argv[3]{
    converter::Converter<Il2CppString*>::toScript(apis, env, p0),
            CSRefToLuaValue(apis, env, TIp1, p1),
            converter::Converter<bool>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(System.String, Int32[], Int32) declare in gcloud_voice.IGCloudVoiceNotify+WXMemberVoiceHandler
static void b_vsoi4(void* target, Il2CppString* p0, Il2CppObject* p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_vsoi4");
            
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

    pesapi_value argv[3]{
    converter::Converter<Il2CppString*>::toScript(apis, env, p0),
            CSRefToLuaValue(apis, env, TIp1, p1),
            converter::Converter<int32_t>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(System.String, Byte[], Int32, Int32) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateSendFrameCmd
static void b_vsoi4i4(void* target, Il2CppString* p0, Il2CppObject* p1, int32_t p2, int32_t p3, MethodInfo* method) {
    // PLog("Running b_vsoi4i4");
            
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

    pesapi_value argv[4]{
    converter::Converter<Il2CppString*>::toScript(apis, env, p0),
            CSRefToLuaValue(apis, env, TIp1, p1),
            converter::Converter<int32_t>::toScript(apis, env, p2),
            converter::Converter<int32_t>::toScript(apis, env, p3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(System.String, Single) declare in UnityEngine.MonoBehaviour
static void b_vsr4(void* target, Il2CppString* p0, float p1, MethodInfo* method) {
    // PLog("Running b_vsr4");
            
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
    converter::Converter<Il2CppString*>::toScript(apis, env, p0),
            converter::Converter<float>::toScript(apis, env, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(System.String, System.String) declare in gcloud_voice.IGCloudVoiceNotify+AIRecognitionHandler
static void b_vss(void* target, Il2CppString* p0, Il2CppString* p1, MethodInfo* method) {
    // PLog("Running b_vss");
            
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
            converter::Converter<Il2CppString*>::toScript(apis, env, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(System.String, System.String, System.Object) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateSetDataService
static void b_vssO(void* target, Il2CppString* p0, Il2CppString* p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_vssO");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
        
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
    converter::Converter<Il2CppString*>::toScript(apis, env, p0),
            converter::Converter<Il2CppString*>::toScript(apis, env, p1),
            CSRefToLuaValue(apis, env, TIp2, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(System.String, System.String, Int32) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateShowSystemTips
static void b_vssi4(void* target, Il2CppString* p0, Il2CppString* p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_vssi4");
            
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

    pesapi_value argv[3]{
    converter::Converter<Il2CppString*>::toScript(apis, env, p0),
            converter::Converter<Il2CppString*>::toScript(apis, env, p1),
            converter::Converter<int32_t>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(System.String, System.String, Int32, Int32) declare in gcloud_voice.IGCloudVoiceNotify+RoomMemberVoiceWithOpenIDHandler
static void b_vssi4i4(void* target, Il2CppString* p0, Il2CppString* p1, int32_t p2, int32_t p3, MethodInfo* method) {
    // PLog("Running b_vssi4i4");
            
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

    pesapi_value argv[4]{
    converter::Converter<Il2CppString*>::toScript(apis, env, p0),
            converter::Converter<Il2CppString*>::toScript(apis, env, p1),
            converter::Converter<int32_t>::toScript(apis, env, p2),
            converter::Converter<int32_t>::toScript(apis, env, p3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(System.String, System.String, enFileOperation, System.Exception) declare in CFileManager+DelegateOnOperateFileFail
static void b_vssi4o(void* target, Il2CppString* p0, Il2CppString* p1, int32_t p2, Il2CppObject* p3, MethodInfo* method) {
    // PLog("Running b_vssi4o");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
                    
    auto TIp3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    AutoValueScope valueScope(apis, env);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy"));
    }
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[4]{
    converter::Converter<Il2CppString*>::toScript(apis, env, p0),
            converter::Converter<Il2CppString*>::toScript(apis, env, p1),
            converter::Converter<int32_t>::toScript(apis, env, p2),
            CSRefToLuaValue(apis, env, TIp3, p3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(System.String, System.String, XLua.LuaTable) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+SendUpdateUI
static void b_vsso(void* target, Il2CppString* p0, Il2CppString* p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_vsso");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
        
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
    converter::Converter<Il2CppString*>::toScript(apis, env, p0),
            converter::Converter<Il2CppString*>::toScript(apis, env, p1),
            CSRefToLuaValue(apis, env, TIp2, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(System.String, System.String, UnityEngine.GameObject, System.Action`2[System.String,UnityEngine.GameObject]) declare in System.Action`4[System.String,System.String,UnityEngine.GameObject,System.Action`2[System.String,UnityEngine.GameObject]]
static void b_vssoo(void* target, Il2CppString* p0, Il2CppString* p1, Il2CppObject* p2, Il2CppObject* p3, MethodInfo* method) {
    // PLog("Running b_vssoo");
            
    auto TIp0 = GetParameterType(method, 0);
        
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
    }
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[4]{
    converter::Converter<Il2CppString*>::toScript(apis, env, p0),
            converter::Converter<Il2CppString*>::toScript(apis, env, p1),
            CSRefToLuaValue(apis, env, TIp2, p2),
            CSRefToLuaValue(apis, env, TIp3, p3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(System.String, UInt32) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateChessboardInteractionClick
static void b_vsu4(void* target, Il2CppString* p0, uint32_t p1, MethodInfo* method) {
    // PLog("Running b_vsu4");
            
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
    converter::Converter<Il2CppString*>::toScript(apis, env, p0),
            converter::Converter<uint32_t>::toScript(apis, env, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(Byte) declare in System.Action`1[System.Byte]
static void b_vu1(void* target, uint8_t p0, MethodInfo* method) {
    // PLog("Running b_vu1");

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
    converter::Converter<uint8_t>::toScript(apis, env, p0)
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(UInt16) declare in System.Action`1[System.UInt16]
static void b_vu2(void* target, uint16_t p0, MethodInfo* method) {
    // PLog("Running b_vu2");

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
    converter::Converter<uint16_t>::toScript(apis, env, p0)
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(UInt32) declare in System.Action`1[System.UInt32]
static void b_vu4(void* target, uint32_t p0, MethodInfo* method) {
    // PLog("Running b_vu4");

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
    converter::Converter<uint32_t>::toScript(apis, env, p0)
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(UInt32, PlayerRandomHpData) declare in System.Action`2[System.UInt32,SGW+PlayerRandomHpData]
static void b_vu4S_i4i4i4i4i4_(void* target, uint32_t p0, struct S_i4i4i4i4i4_ p1, MethodInfo* method) {
    // PLog("Running b_vu4S_i4i4i4i4i4_");
                        
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
    converter::Converter<uint32_t>::toScript(apis, env, p0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(UInt32, UnityEngine.Vector3) declare in System.Action`2[System.UInt32,UnityEngine.Vector3]
static void b_vu4S_r4r4r4_(void* target, uint32_t p0, struct S_r4r4r4_ p1, MethodInfo* method) {
    // PLog("Running b_vu4S_r4r4r4_");
                        
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
    converter::Converter<uint32_t>::toScript(apis, env, p0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(UInt32, UnityEngine.Vector3, Assets.Scripts.GameLogic.Project8SceneAwardItem) declare in System.Action`3[System.UInt32,UnityEngine.Vector3,Assets.Scripts.GameLogic.Project8SceneAwardItem]
static void b_vu4S_r4r4r4_o(void* target, uint32_t p0, struct S_r4r4r4_ p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_vu4S_r4r4r4_o");
                        
    auto TIp1 = GetParameterType(method, 1);
        
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
    converter::Converter<uint32_t>::toScript(apis, env, p0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1),
            CSRefToLuaValue(apis, env, TIp2, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(UInt32, Assets.Scripts.GameLogic.Project8EquipPair) declare in System.Action`2[System.UInt32,Assets.Scripts.GameLogic.Project8EquipPair]
static void b_vu4S_u4u4i4_(void* target, uint32_t p0, struct S_u4u4i4_ p1, MethodInfo* method) {
    // PLog("Running b_vu4S_u4u4i4_");
                        
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
    converter::Converter<uint32_t>::toScript(apis, env, p0),
            DataTransfer::CopyValueType(apis, env, p1, TIp1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(UInt32, Boolean) declare in System.Action`2[System.UInt32,System.Boolean]
static void b_vu4b(void* target, uint32_t p0, bool p1, MethodInfo* method) {
    // PLog("Running b_vu4b");

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
    converter::Converter<uint32_t>::toScript(apis, env, p0),
            converter::Converter<bool>::toScript(apis, env, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(UInt32, Boolean, Boolean) declare in System.Action`3[System.UInt32,System.Boolean,System.Boolean]
static void b_vu4bb(void* target, uint32_t p0, bool p1, bool p2, MethodInfo* method) {
    // PLog("Running b_vu4bb");

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
    converter::Converter<uint32_t>::toScript(apis, env, p0),
            converter::Converter<bool>::toScript(apis, env, p1),
            converter::Converter<bool>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(UInt32, ResData.RES_RELATION_ID) declare in System.Action`2[System.UInt32,ResData.RES_RELATION_ID]
static void b_vu4i4(void* target, uint32_t p0, int32_t p1, MethodInfo* method) {
    // PLog("Running b_vu4i4");

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
    converter::Converter<uint32_t>::toScript(apis, env, p0),
            converter::Converter<int32_t>::toScript(apis, env, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(UInt32, Int32, System.Object) declare in Assets.Scripts.Framework.UI.NativeMsgBox+MsgBoxDelegate
static void b_vu4i4O(void* target, uint32_t p0, int32_t p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_vu4i4O");
                                    
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
    converter::Converter<uint32_t>::toScript(apis, env, p0),
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
// Void Invoke(UInt32, Int32, System.Object, System.Object) declare in Assets.Scripts.Framework.Lua.LuaMsgBox+MsgBoxDelegate
static void b_vu4i4OO(void* target, uint32_t p0, int32_t p1, Il2CppObject* p2, Il2CppObject* p3, MethodInfo* method) {
    // PLog("Running b_vu4i4OO");
                                    
    auto TIp2 = GetParameterType(method, 2);
        
    auto TIp3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    AutoValueScope valueScope(apis, env);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy"));
    }
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[4]{
    converter::Converter<uint32_t>::toScript(apis, env, p0),
            converter::Converter<int32_t>::toScript(apis, env, p1),
            CSRefToLuaValue(apis, env, TIp2, p2),
            CSRefToLuaValue(apis, env, TIp3, p3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(UInt32, Int32, Int32) declare in System.Action`3[System.UInt32,System.Int32,System.Int32]
static void b_vu4i4i4(void* target, uint32_t p0, int32_t p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_vu4i4i4");

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
    converter::Converter<uint32_t>::toScript(apis, env, p0),
            converter::Converter<int32_t>::toScript(apis, env, p1),
            converter::Converter<int32_t>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(UInt32, Int32, Int32, Int32) declare in System.Action`4[System.UInt32,System.Int32,System.Int32,System.Int32]
static void b_vu4i4i4i4(void* target, uint32_t p0, int32_t p1, int32_t p2, int32_t p3, MethodInfo* method) {
    // PLog("Running b_vu4i4i4i4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    AutoValueScope valueScope(apis, env);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy"));
    }
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[4]{
    converter::Converter<uint32_t>::toScript(apis, env, p0),
            converter::Converter<int32_t>::toScript(apis, env, p1),
            converter::Converter<int32_t>::toScript(apis, env, p2),
            converter::Converter<int32_t>::toScript(apis, env, p3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(UInt32, ResData.HighlightLogicType, System.Collections.Generic.List`1[System.Int32]) declare in System.Action`3[System.UInt32,ResData.HighlightLogicType,System.Collections.Generic.List`1[System.Int32]]
static void b_vu4i4o(void* target, uint32_t p0, int32_t p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_vu4i4o");
                                    
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
    converter::Converter<uint32_t>::toScript(apis, env, p0),
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
// Void Invoke(UInt32, Int32, UInt32) declare in System.Action`3[System.UInt32,System.Int32,System.UInt32]
static void b_vu4i4u4(void* target, uint32_t p0, int32_t p1, uint32_t p2, MethodInfo* method) {
    // PLog("Running b_vu4i4u4");

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
    converter::Converter<uint32_t>::toScript(apis, env, p0),
            converter::Converter<int32_t>::toScript(apis, env, p1),
            converter::Converter<uint32_t>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(UInt32, System.Collections.Generic.Dictionary`2[ResData.ActorAbilitySymmetryType,System.Int32]) declare in System.Action`2[System.UInt32,System.Collections.Generic.Dictionary`2[ResData.ActorAbilitySymmetryType,System.Int32]]
static void b_vu4o(void* target, uint32_t p0, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_vu4o");
                        
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
    converter::Converter<uint32_t>::toScript(apis, env, p0),
            CSRefToLuaValue(apis, env, TIp1, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(UInt32, Assets.Scripts.Framework.AssetService.InstantiatableAsset, System.Object) declare in UnityObjAsynMgr+OnAsyncCreateUnityObjectCallBack
static void b_vu4oO(void* target, uint32_t p0, Il2CppObject* p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_vu4oO");
                        
    auto TIp1 = GetParameterType(method, 1);
        
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
    converter::Converter<uint32_t>::toScript(apis, env, p0),
            CSRefToLuaValue(apis, env, TIp1, p1),
            CSRefToLuaValue(apis, env, TIp2, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(UInt32, IntPtr) declare in AkAudioInputManager+AudioFormatInteropDelegate
static void b_vu4p(void* target, uint32_t p0, void* p1, MethodInfo* method) {
    // PLog("Running b_vu4p");
                        
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
    converter::Converter<uint32_t>::toScript(apis, env, p0),
            apis->create_binary(env, p1, 0)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(UInt32, IntPtr, AKRESULT, System.Object) declare in AkCallbackManager+BankCallback
static void b_vu4pi4O(void* target, uint32_t p0, void* p1, int32_t p2, Il2CppObject* p3, MethodInfo* method) {
    // PLog("Running b_vu4pi4O");
                        
    auto TIp1 = GetParameterType(method, 1);
                    
    auto TIp3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    AutoValueScope valueScope(apis, env);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy"));
    }
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[4]{
    converter::Converter<uint32_t>::toScript(apis, env, p0),
            apis->create_binary(env, p1, 0),
            converter::Converter<int32_t>::toScript(apis, env, p2),
            CSRefToLuaValue(apis, env, TIp3, p3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(UInt32, System.String) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+NtfUploadlockstepMD5
static void b_vu4s(void* target, uint32_t p0, Il2CppString* p1, MethodInfo* method) {
    // PLog("Running b_vu4s");
                        
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
    converter::Converter<uint32_t>::toScript(apis, env, p0),
            converter::Converter<Il2CppString*>::toScript(apis, env, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(UInt32, System.String, System.String) declare in System.Action`3[System.UInt32,System.String,System.String]
static void b_vu4ss(void* target, uint32_t p0, Il2CppString* p1, Il2CppString* p2, MethodInfo* method) {
    // PLog("Running b_vu4ss");
                        
    auto TIp1 = GetParameterType(method, 1);
        
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
    converter::Converter<uint32_t>::toScript(apis, env, p0),
            converter::Converter<Il2CppString*>::toScript(apis, env, p1),
            converter::Converter<Il2CppString*>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(UInt32, UInt32) declare in System.Action`2[System.UInt32,System.UInt32]
static void b_vu4u4(void* target, uint32_t p0, uint32_t p1, MethodInfo* method) {
    // PLog("Running b_vu4u4");

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
    converter::Converter<uint32_t>::toScript(apis, env, p0),
            converter::Converter<uint32_t>::toScript(apis, env, p1)
    };
    auto luaret = apis->call_function(env, func, 0, 2, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(UInt32, UInt32, Boolean) declare in System.Action`3[System.UInt32,System.UInt32,System.Boolean]
static void b_vu4u4b(void* target, uint32_t p0, uint32_t p1, bool p2, MethodInfo* method) {
    // PLog("Running b_vu4u4b");

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
    converter::Converter<uint32_t>::toScript(apis, env, p0),
            converter::Converter<uint32_t>::toScript(apis, env, p1),
            converter::Converter<bool>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(UInt32, UInt32, UnityEngine.RectTransform) declare in System.Action`3[System.UInt32,System.UInt32,UnityEngine.RectTransform]
static void b_vu4u4o(void* target, uint32_t p0, uint32_t p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_vu4u4o");
                                    
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
    converter::Converter<uint32_t>::toScript(apis, env, p0),
            converter::Converter<uint32_t>::toScript(apis, env, p1),
            CSRefToLuaValue(apis, env, TIp2, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(UInt32, UInt32, UInt32) declare in System.Action`3[System.UInt32,System.UInt32,System.UInt32]
static void b_vu4u4u4(void* target, uint32_t p0, uint32_t p1, uint32_t p2, MethodInfo* method) {
    // PLog("Running b_vu4u4u4");

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
    converter::Converter<uint32_t>::toScript(apis, env, p0),
            converter::Converter<uint32_t>::toScript(apis, env, p1),
            converter::Converter<uint32_t>::toScript(apis, env, p2)
    };
    auto luaret = apis->call_function(env, func, 0, 3, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(UInt32, UInt32, UInt32, UInt32) declare in System.Action`4[System.UInt32,System.UInt32,System.UInt32,System.UInt32]
static void b_vu4u4u4u4(void* target, uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, MethodInfo* method) {
    // PLog("Running b_vu4u4u4u4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    AutoValueScope valueScope(apis, env);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy"));
    }
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[4]{
    converter::Converter<uint32_t>::toScript(apis, env, p0),
            converter::Converter<uint32_t>::toScript(apis, env, p1),
            converter::Converter<uint32_t>::toScript(apis, env, p2),
            converter::Converter<uint32_t>::toScript(apis, env, p3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(UInt32, UInt32, UInt32, UInt32, UInt32) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+ReqInGameAuctionRaiseDelegate
static void b_vu4u4u4u4u4(void* target, uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, MethodInfo* method) {
    // PLog("Running b_vu4u4u4u4u4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    AutoValueScope valueScope(apis, env);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy"));
    }
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[5]{
    converter::Converter<uint32_t>::toScript(apis, env, p0),
            converter::Converter<uint32_t>::toScript(apis, env, p1),
            converter::Converter<uint32_t>::toScript(apis, env, p2),
            converter::Converter<uint32_t>::toScript(apis, env, p3),
            converter::Converter<uint32_t>::toScript(apis, env, p4)
    };
    auto luaret = apis->call_function(env, func, 0, 5, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
// Void Invoke(UInt64) declare in System.Action`1[System.UInt64]
static void b_vu8(void* target, uint64_t p0, MethodInfo* method) {
    // PLog("Running b_vu8");

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
    converter::Converter<uint64_t>::toScript(apis, env, p0)
    };
    auto luaret = apis->call_function(env, func, 0, 1, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
static BridgeFuncInfo g_bridgeFuncInfos[] = {
        {"N_bS_S_u8_i2__", (Il2CppMethodPointer)b_N_bS_S_u8_i2__},
    {"N_bS_S_u8_i2__O", (Il2CppMethodPointer)b_N_bS_S_u8_i2__O},
    {"N_bS_i4i4i4i4u8__", (Il2CppMethodPointer)b_N_bS_i4i4i4i4u8__},
    {"N_bS_i4i4i4i4u8__O", (Il2CppMethodPointer)b_N_bS_i4i4i4i4u8__O},
    {"N_bS_u8__", (Il2CppMethodPointer)b_N_bS_u8__},
    {"N_bS_u8__O", (Il2CppMethodPointer)b_N_bS_u8__O},
    {"N_bb_", (Il2CppMethodPointer)b_N_bb_},
    {"N_bb_O", (Il2CppMethodPointer)b_N_bb_O},
    {"N_bi4_", (Il2CppMethodPointer)b_N_bi4_},
    {"N_bi4_O", (Il2CppMethodPointer)b_N_bi4_O},
    {"N_br8_", (Il2CppMethodPointer)b_N_br8_},
    {"N_br8_O", (Il2CppMethodPointer)b_N_br8_O},
    {"O", (Il2CppMethodPointer)b_O},
    {"OOi4ooo", (Il2CppMethodPointer)b_OOi4ooo},
    {"OOo", (Il2CppMethodPointer)b_OOo},
    {"OOso", (Il2CppMethodPointer)b_OOso},
    {"Oi4ooo", (Il2CppMethodPointer)b_Oi4ooo},
    {"Oi4popb", (Il2CppMethodPointer)b_Oi4popb},
    {"Oi4so", (Il2CppMethodPointer)b_Oi4so},
    {"Oo", (Il2CppMethodPointer)b_Oo},
    {"Opi4O", (Il2CppMethodPointer)b_Opi4O},
    {"Os", (Il2CppMethodPointer)b_Os},
    {"Oss", (Il2CppMethodPointer)b_Oss},
    {"PS__PS_u4u4u8_", (Il2CppMethodPointer)b_PS__PS_u4u4u8_},
    {"PS__Pu1pPu1pPS_u4u4u8_", (Il2CppMethodPointer)b_PS__Pu1pPu1pPS_u4u4u8_},
    {"PS__S_u4u4_S_ooPv_Pu1pPS_u4u4u8_", (Il2CppMethodPointer)b_PS__S_u4u4_S_ooPv_Pu1pPS_u4u4u8_},
    {"PS__S_u4u4_S_ooPv_u8u8PS_u4u4u8_", (Il2CppMethodPointer)b_PS__S_u4u4_S_ooPv_u8u8PS_u4u4u8_},
    {"S_o_S_o_S_o_r4", (Il2CppMethodPointer)b_S_o_S_o_S_o_r4},
    {"S_o_o", (Il2CppMethodPointer)b_S_o_o},
    {"S_r4r4_S_r4r4_S_r4r4_r4", (Il2CppMethodPointer)b_S_r4r4_S_r4r4_S_r4r4_r4},
    {"S_r4r4_i4", (Il2CppMethodPointer)b_S_r4r4_i4},
    {"S_r4r4_o", (Il2CppMethodPointer)b_S_r4r4_o},
    {"S_r4r4r4_", (Il2CppMethodPointer)b_S_r4r4r4_},
    {"S_r4r4r4_S_r4r4r4_S_r4r4r4_r4", (Il2CppMethodPointer)b_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4},
    {"S_r4r4r4_o", (Il2CppMethodPointer)b_S_r4r4r4_o},
    {"S_r4r4r4r4_", (Il2CppMethodPointer)b_S_r4r4r4r4_},
    {"S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_r4", (Il2CppMethodPointer)b_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_r4},
    {"S_r4r4r4r4_o", (Il2CppMethodPointer)b_S_r4r4r4r4_o},
    {"S_u4i4_", (Il2CppMethodPointer)b_S_u4i4_},
    {"S_u4i4_O", (Il2CppMethodPointer)b_S_u4i4_O},
    {"S_u4u4u8_", (Il2CppMethodPointer)b_S_u4u4u8_},
    {"S_u8_PS__PS_u4u4u8_", (Il2CppMethodPointer)b_S_u8_PS__PS_u4u4u8_},
    {"S_u8_S_u8_pPS_u4u4u8_", (Il2CppMethodPointer)b_S_u8_S_u8_pPS_u4u4u8_},
    {"b", (Il2CppMethodPointer)b_b},
    {"bO", (Il2CppMethodPointer)b_bO},
    {"bOO", (Il2CppMethodPointer)b_bOO},
    {"bOOS_r4r4_", (Il2CppMethodPointer)b_bOOS_r4r4_},
    {"bOOS_r4r4_o", (Il2CppMethodPointer)b_bOOS_r4r4_o},
    {"bOS_i4i4_", (Il2CppMethodPointer)b_bOS_i4i4_},
    {"bOS_i4i4o_", (Il2CppMethodPointer)b_bOS_i4i4o_},
    {"bOS_r4r4_", (Il2CppMethodPointer)b_bOS_r4r4_},
    {"bOS_r4r4_o", (Il2CppMethodPointer)b_bOS_r4r4_o},
    {"bOS_u4oob_", (Il2CppMethodPointer)b_bOS_u4oob_},
    {"bOS_u4u4i4S_r4r4_u4_", (Il2CppMethodPointer)b_bOS_u4u4i4S_r4r4_u4_},
    {"bOS_u4u4r4i4b_", (Il2CppMethodPointer)b_bOS_u4u4r4i4b_},
    {"bOS_u4u4u4_", (Il2CppMethodPointer)b_bOS_u4u4u4_},
    {"bOS_u4u4u4u4_", (Il2CppMethodPointer)b_bOS_u4u4u4u4_},
    {"bOS_u8i4si4u8u8u8_b", (Il2CppMethodPointer)b_bOS_u8i4si4u8u8u8_b},
    {"bOb", (Il2CppMethodPointer)b_bOb},
    {"bObi4", (Il2CppMethodPointer)b_bObi4},
    {"bObi4i4", (Il2CppMethodPointer)b_bObi4i4},
    {"bOi4", (Il2CppMethodPointer)b_bOi4},
    {"bOi4b", (Il2CppMethodPointer)b_bOi4b},
    {"bOi4bb", (Il2CppMethodPointer)b_bOi4bb},
    {"bOi4bo", (Il2CppMethodPointer)b_bOi4bo},
    {"bOi4i4", (Il2CppMethodPointer)b_bOi4i4},
    {"bOi4i4b", (Il2CppMethodPointer)b_bOi4i4b},
    {"bOi4i4bo", (Il2CppMethodPointer)b_bOi4i4bo},
    {"bOi4o", (Il2CppMethodPointer)b_bOi4o},
    {"bOi4oo", (Il2CppMethodPointer)b_bOi4oo},
    {"bOi4u4u4u4", (Il2CppMethodPointer)b_bOi4u4u4u4},
    {"bOo", (Il2CppMethodPointer)b_bOo},
    {"bOoS_r4r4_b", (Il2CppMethodPointer)b_bOoS_r4r4_b},
    {"bOoS_r4r4_ob", (Il2CppMethodPointer)b_bOoS_r4r4_ob},
    {"bOob", (Il2CppMethodPointer)b_bOob},
    {"bOoi4", (Il2CppMethodPointer)b_bOoi4},
    {"bOoo", (Il2CppMethodPointer)b_bOoo},
    {"bOooS_r4r4_b", (Il2CppMethodPointer)b_bOooS_r4r4_b},
    {"bOoob", (Il2CppMethodPointer)b_bOoob},
    {"bOooo", (Il2CppMethodPointer)b_bOooo},
    {"bOoooo", (Il2CppMethodPointer)b_bOoooo},
    {"bOooou4", (Il2CppMethodPointer)b_bOooou4},
    {"bOor4", (Il2CppMethodPointer)b_bOor4},
    {"bOou4oo", (Il2CppMethodPointer)b_bOou4oo},
    {"bOs", (Il2CppMethodPointer)b_bOs},
    {"bOu4", (Il2CppMethodPointer)b_bOu4},
    {"bOu4S_i4i4i4sS_u4u4u4i4u4o__", (Il2CppMethodPointer)b_bOu4S_i4i4i4sS_u4u4u4i4u4o__},
    {"bOu4S_r4r4r4_", (Il2CppMethodPointer)b_bOu4S_r4r4r4_},
    {"bOu4S_u4u4u4_", (Il2CppMethodPointer)b_bOu4S_u4u4u4_},
    {"bOu4b", (Il2CppMethodPointer)b_bOu4b},
    {"bOu4i4", (Il2CppMethodPointer)b_bOu4i4},
    {"bOu4o", (Il2CppMethodPointer)b_bOu4o},
    {"bOu4ob", (Il2CppMethodPointer)b_bOu4ob},
    {"bOu4oi4", (Il2CppMethodPointer)b_bOu4oi4},
    {"bOu4r4", (Il2CppMethodPointer)b_bOu4r4},
    {"bOu4r4b", (Il2CppMethodPointer)b_bOu4r4b},
    {"bOu4u4", (Il2CppMethodPointer)b_bOu4u4},
    {"bOu4u4i4o", (Il2CppMethodPointer)b_bOu4u4i4o},
    {"bOu4u4o", (Il2CppMethodPointer)b_bOu4u4o},
    {"bOu4u4u4u4", (Il2CppMethodPointer)b_bOu4u4u4u4},
    {"bPS_S_S_p_i4_i4cob_i4Pi4", (Il2CppMethodPointer)b_bPS_S_S_p_i4_i4cob_i4Pi4},
    {"bPS_u4o_", (Il2CppMethodPointer)b_bPS_u4o_},
    {"bS_S_S_r4r4r4_S_r4r4r4__i4i4i4i4i4i4_", (Il2CppMethodPointer)b_bS_S_S_r4r4r4_S_r4r4r4__i4i4i4i4i4i4_},
    {"bS_S_r4r4_r4_", (Il2CppMethodPointer)b_bS_S_r4r4_r4_},
    {"bS_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_i4u1u1u1u1_u4u4r4r4i4r4r4u4_", (Il2CppMethodPointer)b_bS_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_i4u1u1u1u1_u4u4r4r4i4r4r4u4_},
    {"bS_S_r4r4r4_S_r4r4r4_S_r4r4r4r4_S_i4u1u1u1u1_S_r4r4_S_r4r4_S_r4r4_S_r4r4__", (Il2CppMethodPointer)b_bS_S_r4r4r4_S_r4r4r4_S_r4r4r4r4_S_i4u1u1u1u1_S_r4r4_S_r4r4_S_r4r4_S_r4r4__},
    {"bS_S_u4o_i8_", (Il2CppMethodPointer)b_bS_S_u4o_i8_},
    {"bS_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4_", (Il2CppMethodPointer)b_bS_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4_},
    {"bS__", (Il2CppMethodPointer)b_bS__},
    {"bS_bsi4bb_", (Il2CppMethodPointer)b_bS_bsi4bb_},
    {"bS_i4_", (Il2CppMethodPointer)b_bS_i4_},
    {"bS_i4i4_", (Il2CppMethodPointer)b_bS_i4i4_},
    {"bS_i4i4i4bbi4_", (Il2CppMethodPointer)b_bS_i4i4i4bbi4_},
    {"bS_i4i4i4i4_", (Il2CppMethodPointer)b_bS_i4i4i4i4_},
    {"bS_i4i4o_", (Il2CppMethodPointer)b_bS_i4i4o_},
    {"bS_i4i4ossOosi4i4i1i1i1i4Oob_", (Il2CppMethodPointer)b_bS_i4i4ossOosi4i4i1i1i1i4Oob_},
    {"bS_i4i4r4r4_", (Il2CppMethodPointer)b_bS_i4i4r4r4_},
    {"bS_i4i4so_", (Il2CppMethodPointer)b_bS_i4i4so_},
    {"bS_i4i4u1o_", (Il2CppMethodPointer)b_bS_i4i4u1o_},
    {"bS_i4oi4_", (Il2CppMethodPointer)b_bS_i4oi4_},
    {"bS_i4r4_", (Il2CppMethodPointer)b_bS_i4r4_},
    {"bS_i4s_", (Il2CppMethodPointer)b_bS_i4s_},
    {"bS_i4si4_", (Il2CppMethodPointer)b_bS_i4si4_},
    {"bS_i4u1u1u1u1_", (Il2CppMethodPointer)b_bS_i4u1u1u1u1_},
    {"bS_oO_", (Il2CppMethodPointer)b_bS_oO_},
    {"bS_oor4r4i4i4i4S_r4r4r4_S_r4r4r4_S_r4r4_i4_", (Il2CppMethodPointer)b_bS_oor4r4i4i4i4S_r4r4r4_S_r4r4r4_S_r4r4_i4_},
    {"bS_oosr4r4_", (Il2CppMethodPointer)b_bS_oosr4r4_},
    {"bS_oosr4r4i4soooS_r4r4r4_S_r4r4r4_r4r4r4r4bi4osbor4bS_r4r4r4_i4r4i4ooo_", (Il2CppMethodPointer)b_bS_oosr4r4i4soooS_r4r4r4_S_r4r4r4_r4r4r4r4bi4osbor4bS_r4r4r4_i4r4i4ooo_},
    {"bS_or4_", (Il2CppMethodPointer)b_bS_or4_},
    {"bS_pu4u4u4_", (Il2CppMethodPointer)b_bS_pu4u4u4_},
    {"bS_r4i4_", (Il2CppMethodPointer)b_bS_r4i4_},
    {"bS_r4r4_", (Il2CppMethodPointer)b_bS_r4r4_},
    {"bS_r4r4r4_", (Il2CppMethodPointer)b_bS_r4r4r4_},
    {"bS_r4r4r4r4_", (Il2CppMethodPointer)b_bS_r4r4r4r4_},
    {"bS_r4r4r4r4i4i4i4i4_", (Il2CppMethodPointer)b_bS_r4r4r4r4i4i4i4i4_},
    {"bS_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_", (Il2CppMethodPointer)b_bS_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_},
    {"bS_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_", (Il2CppMethodPointer)b_bS_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_},
    {"bS_si4i4_", (Il2CppMethodPointer)b_bS_si4i4_},
    {"bS_ss_", (Il2CppMethodPointer)b_bS_ss_},
    {"bS_su1i2_", (Il2CppMethodPointer)b_bS_su1i2_},
    {"bS_u4i4i4i4_", (Il2CppMethodPointer)b_bS_u4i4i4i4_},
    {"bS_u4o_", (Il2CppMethodPointer)b_bS_u4o_},
    {"bS_u4oob_", (Il2CppMethodPointer)b_bS_u4oob_},
    {"bS_u4u1u4i4i4_", (Il2CppMethodPointer)b_bS_u4u1u4i4i4_},
    {"bS_u4u4_", (Il2CppMethodPointer)b_bS_u4u4_},
    {"bS_u4u4bo_", (Il2CppMethodPointer)b_bS_u4u4bo_},
    {"bS_u4u4i4S_r4r4_u4_", (Il2CppMethodPointer)b_bS_u4u4i4S_r4r4_u4_},
    {"bS_u4u4i4_", (Il2CppMethodPointer)b_bS_u4u4i4_},
    {"bS_u4u4r4i4b_", (Il2CppMethodPointer)b_bS_u4u4r4i4b_},
    {"bS_u4u4u4_", (Il2CppMethodPointer)b_bS_u4u4u4_},
    {"bS_u4u4u4u4_", (Il2CppMethodPointer)b_bS_u4u4u4u4_},
    {"bS_u4u4u4u4u4u4u4u4_", (Il2CppMethodPointer)b_bS_u4u4u4u4u4u4u4u4_},
    {"bS_u8i4i4S_u4u4_S_i4i4i4i4_s_", (Il2CppMethodPointer)b_bS_u8i4i4S_u4u4_S_i4i4i4i4_s_},
    {"bS_u8i4si4u8u8u8_", (Il2CppMethodPointer)b_bS_u8i4si4u8u8u8_},
    {"bS_u8i4si4u8u8u8_b", (Il2CppMethodPointer)b_bS_u8i4si4u8u8u8_b},
    {"bb", (Il2CppMethodPointer)b_bb},
    {"bbi4", (Il2CppMethodPointer)b_bbi4},
    {"bbi4i4", (Il2CppMethodPointer)b_bbi4i4},
    {"bc", (Il2CppMethodPointer)b_bc},
    {"bi4", (Il2CppMethodPointer)b_bi4},
    {"bi4S_r4r4_", (Il2CppMethodPointer)b_bi4S_r4r4_},
    {"bi4b", (Il2CppMethodPointer)b_bi4b},
    {"bi4bb", (Il2CppMethodPointer)b_bi4bb},
    {"bi4bi4", (Il2CppMethodPointer)b_bi4bi4},
    {"bi4bo", (Il2CppMethodPointer)b_bi4bo},
    {"bi4i4", (Il2CppMethodPointer)b_bi4i4},
    {"bi4i4b", (Il2CppMethodPointer)b_bi4i4b},
    {"bi4i4bo", (Il2CppMethodPointer)b_bi4i4bo},
    {"bi4o", (Il2CppMethodPointer)b_bi4o},
    {"bi4oo", (Il2CppMethodPointer)b_bi4oo},
    {"bi4r4r4r4r4r4", (Il2CppMethodPointer)b_bi4r4r4r4r4r4},
    {"bi4u4u4u4", (Il2CppMethodPointer)b_bi4u4u4u4},
    {"bi8", (Il2CppMethodPointer)b_bi8},
    {"bo", (Il2CppMethodPointer)b_bo},
    {"boO", (Il2CppMethodPointer)b_boO},
    {"boPo", (Il2CppMethodPointer)b_boPo},
    {"boS_r4r4_b", (Il2CppMethodPointer)b_boS_r4r4_b},
    {"boS_r4r4_ob", (Il2CppMethodPointer)b_boS_r4r4_ob},
    {"bob", (Il2CppMethodPointer)b_bob},
    {"bobo", (Il2CppMethodPointer)b_bobo},
    {"boi4", (Il2CppMethodPointer)b_boi4},
    {"boo", (Il2CppMethodPointer)b_boo},
    {"booS_r4r4_b", (Il2CppMethodPointer)b_booS_r4r4_b},
    {"boob", (Il2CppMethodPointer)b_boob},
    {"booo", (Il2CppMethodPointer)b_booo},
    {"boooo", (Il2CppMethodPointer)b_boooo},
    {"booou4", (Il2CppMethodPointer)b_booou4},
    {"bor4", (Il2CppMethodPointer)b_bor4},
    {"bou4oo", (Il2CppMethodPointer)b_bou4oo},
    {"br4", (Il2CppMethodPointer)b_br4},
    {"bs", (Il2CppMethodPointer)b_bs},
    {"bsPp", (Il2CppMethodPointer)b_bsPp},
    {"bsPs", (Il2CppMethodPointer)b_bsPs},
    {"bsi4o", (Il2CppMethodPointer)b_bsi4o},
    {"bsooi4", (Il2CppMethodPointer)b_bsooi4},
    {"bsu4i4", (Il2CppMethodPointer)b_bsu4i4},
    {"bu1", (Il2CppMethodPointer)b_bu1},
    {"bu2", (Il2CppMethodPointer)b_bu2},
    {"bu4", (Il2CppMethodPointer)b_bu4},
    {"bu4S_i4i4i4sS_u4u4u4i4u4o__", (Il2CppMethodPointer)b_bu4S_i4i4i4sS_u4u4u4i4u4o__},
    {"bu4S_r4r4r4_", (Il2CppMethodPointer)b_bu4S_r4r4r4_},
    {"bu4S_u4u4u4_", (Il2CppMethodPointer)b_bu4S_u4u4u4_},
    {"bu4b", (Il2CppMethodPointer)b_bu4b},
    {"bu4i4", (Il2CppMethodPointer)b_bu4i4},
    {"bu4o", (Il2CppMethodPointer)b_bu4o},
    {"bu4ob", (Il2CppMethodPointer)b_bu4ob},
    {"bu4oi4", (Il2CppMethodPointer)b_bu4oi4},
    {"bu4ou4u4", (Il2CppMethodPointer)b_bu4ou4u4},
    {"bu4r4", (Il2CppMethodPointer)b_bu4r4},
    {"bu4r4b", (Il2CppMethodPointer)b_bu4r4b},
    {"bu4u4", (Il2CppMethodPointer)b_bu4u4},
    {"bu4u4i4o", (Il2CppMethodPointer)b_bu4u4i4o},
    {"bu4u4o", (Il2CppMethodPointer)b_bu4u4o},
    {"bu4u4u4u4", (Il2CppMethodPointer)b_bu4u4u4u4},
    {"bu8", (Il2CppMethodPointer)b_bu8},
    {"bu8i8su8i8s", (Il2CppMethodPointer)b_bu8i8su8i8s},
    {"bu8ssi4", (Il2CppMethodPointer)b_bu8ssi4},
    {"csi4c", (Il2CppMethodPointer)b_csi4c},
    {"i2os", (Il2CppMethodPointer)b_i2os},
    {"i4", (Il2CppMethodPointer)b_i4},
    {"i4O", (Il2CppMethodPointer)b_i4O},
    {"i4OO", (Il2CppMethodPointer)b_i4OO},
    {"i4S_S_S_r4r4r4_S_r4r4r4__i4i4i4i4i4i4_S_S_S_r4r4r4_S_r4r4r4__i4i4i4i4i4i4_", (Il2CppMethodPointer)b_i4S_S_S_r4r4r4_S_r4r4r4__i4i4i4i4i4i4_S_S_S_r4r4r4_S_r4r4r4__i4i4i4i4i4i4_},
    {"i4S_S_r4r4_r4_S_S_r4r4_r4_", (Il2CppMethodPointer)b_i4S_S_r4r4_r4_S_S_r4r4_r4_},
    {"i4S_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_i4u1u1u1u1_u4u4r4r4i4r4r4u4_S_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_i4u1u1u1u1_u4u4r4r4i4r4r4u4_", (Il2CppMethodPointer)b_i4S_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_i4u1u1u1u1_u4u4r4r4i4r4r4u4_S_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_i4u1u1u1u1_u4u4r4r4i4r4r4u4_},
    {"i4S_S_r4r4r4_S_r4r4r4_S_r4r4r4r4_S_i4u1u1u1u1_S_r4r4_S_r4r4_S_r4r4_S_r4r4__S_S_r4r4r4_S_r4r4r4_S_r4r4r4r4_S_i4u1u1u1u1_S_r4r4_S_r4r4_S_r4r4_S_r4r4__", (Il2CppMethodPointer)b_i4S_S_r4r4r4_S_r4r4r4_S_r4r4r4r4_S_i4u1u1u1u1_S_r4r4_S_r4r4_S_r4r4_S_r4r4__S_S_r4r4r4_S_r4r4r4_S_r4r4r4r4_S_i4u1u1u1u1_S_r4r4_S_r4r4_S_r4r4_S_r4r4__},
    {"i4S_S_u4o_i8_S_S_u4o_i8_", (Il2CppMethodPointer)b_i4S_S_u4o_i8_S_S_u4o_i8_},
    {"i4S_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4_S_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4_", (Il2CppMethodPointer)b_i4S_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4_S_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4_},
    {"i4S__S__", (Il2CppMethodPointer)b_i4S__S__},
    {"i4S_bsi4bb_S_bsi4bb_", (Il2CppMethodPointer)b_i4S_bsi4bb_S_bsi4bb_},
    {"i4S_i4_S_i4_", (Il2CppMethodPointer)b_i4S_i4_S_i4_},
    {"i4S_i4i4_S_i4i4_", (Il2CppMethodPointer)b_i4S_i4i4_S_i4i4_},
    {"i4S_i4i4i4bbi4_S_i4i4i4bbi4_", (Il2CppMethodPointer)b_i4S_i4i4i4bbi4_S_i4i4i4bbi4_},
    {"i4S_i4i4i4i4_S_i4i4i4i4_", (Il2CppMethodPointer)b_i4S_i4i4i4i4_S_i4i4i4i4_},
    {"i4S_i4i4o_S_i4i4o_", (Il2CppMethodPointer)b_i4S_i4i4o_S_i4i4o_},
    {"i4S_i4i4ossOosi4i4i1i1i1i4Oob_S_i4i4ossOosi4i4i1i1i1i4Oob_", (Il2CppMethodPointer)b_i4S_i4i4ossOosi4i4i1i1i1i4Oob_S_i4i4ossOosi4i4i1i1i1i4Oob_},
    {"i4S_i4i4r4r4_S_i4i4r4r4_", (Il2CppMethodPointer)b_i4S_i4i4r4r4_S_i4i4r4r4_},
    {"i4S_i4i4so_S_i4i4so_", (Il2CppMethodPointer)b_i4S_i4i4so_S_i4i4so_},
    {"i4S_i4i4u1o_S_i4i4u1o_", (Il2CppMethodPointer)b_i4S_i4i4u1o_S_i4i4u1o_},
    {"i4S_i4oi4_S_i4oi4_", (Il2CppMethodPointer)b_i4S_i4oi4_S_i4oi4_},
    {"i4S_i4r4_S_i4r4_", (Il2CppMethodPointer)b_i4S_i4r4_S_i4r4_},
    {"i4S_i4s_S_i4s_", (Il2CppMethodPointer)b_i4S_i4s_S_i4s_},
    {"i4S_i4si4_S_i4si4_", (Il2CppMethodPointer)b_i4S_i4si4_S_i4si4_},
    {"i4S_i4u1u1u1u1_S_i4u1u1u1u1_", (Il2CppMethodPointer)b_i4S_i4u1u1u1u1_S_i4u1u1u1u1_},
    {"i4S_oO_S_oO_", (Il2CppMethodPointer)b_i4S_oO_S_oO_},
    {"i4S_oor4r4i4i4i4S_r4r4r4_S_r4r4r4_S_r4r4_i4_S_oor4r4i4i4i4S_r4r4r4_S_r4r4r4_S_r4r4_i4_", (Il2CppMethodPointer)b_i4S_oor4r4i4i4i4S_r4r4r4_S_r4r4r4_S_r4r4_i4_S_oor4r4i4i4i4S_r4r4r4_S_r4r4r4_S_r4r4_i4_},
    {"i4S_oosr4r4_S_oosr4r4_", (Il2CppMethodPointer)b_i4S_oosr4r4_S_oosr4r4_},
    {"i4S_oosr4r4i4soooS_r4r4r4_S_r4r4r4_r4r4r4r4bi4osbor4bS_r4r4r4_i4r4i4ooo_S_oosr4r4i4soooS_r4r4r4_S_r4r4r4_r4r4r4r4bi4osbor4bS_r4r4r4_i4r4i4ooo_", (Il2CppMethodPointer)b_i4S_oosr4r4i4soooS_r4r4r4_S_r4r4r4_r4r4r4r4bi4osbor4bS_r4r4r4_i4r4i4ooo_S_oosr4r4i4soooS_r4r4r4_S_r4r4r4_r4r4r4r4bi4osbor4bS_r4r4r4_i4r4i4ooo_},
    {"i4S_or4_S_or4_", (Il2CppMethodPointer)b_i4S_or4_S_or4_},
    {"i4S_pu4u4u4_S_pu4u4u4_", (Il2CppMethodPointer)b_i4S_pu4u4u4_S_pu4u4u4_},
    {"i4S_r4i4_S_r4i4_", (Il2CppMethodPointer)b_i4S_r4i4_S_r4i4_},
    {"i4S_r4r4_S_r4r4_", (Il2CppMethodPointer)b_i4S_r4r4_S_r4r4_},
    {"i4S_r4r4r4_S_r4r4r4_", (Il2CppMethodPointer)b_i4S_r4r4r4_S_r4r4r4_},
    {"i4S_r4r4r4r4_S_r4r4r4r4_", (Il2CppMethodPointer)b_i4S_r4r4r4r4_S_r4r4r4r4_},
    {"i4S_r4r4r4r4i4i4i4i4_S_r4r4r4r4i4i4i4i4_", (Il2CppMethodPointer)b_i4S_r4r4r4r4i4i4i4i4_S_r4r4r4r4i4i4i4i4_},
    {"i4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_", (Il2CppMethodPointer)b_i4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_},
    {"i4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_", (Il2CppMethodPointer)b_i4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_},
    {"i4S_si4i4_S_si4i4_", (Il2CppMethodPointer)b_i4S_si4i4_S_si4i4_},
    {"i4S_ss_S_ss_", (Il2CppMethodPointer)b_i4S_ss_S_ss_},
    {"i4S_su1i2_S_su1i2_", (Il2CppMethodPointer)b_i4S_su1i2_S_su1i2_},
    {"i4S_u4i4i4i4_S_u4i4i4i4_", (Il2CppMethodPointer)b_i4S_u4i4i4i4_S_u4i4i4i4_},
    {"i4S_u4o_S_u4o_", (Il2CppMethodPointer)b_i4S_u4o_S_u4o_},
    {"i4S_u4oob_S_u4oob_", (Il2CppMethodPointer)b_i4S_u4oob_S_u4oob_},
    {"i4S_u4u1u4i4i4_S_u4u1u4i4i4_", (Il2CppMethodPointer)b_i4S_u4u1u4i4i4_S_u4u1u4i4i4_},
    {"i4S_u4u4_S_u4u4_", (Il2CppMethodPointer)b_i4S_u4u4_S_u4u4_},
    {"i4S_u4u4bo_S_u4u4bo_", (Il2CppMethodPointer)b_i4S_u4u4bo_S_u4u4bo_},
    {"i4S_u4u4i4_S_u4u4i4_", (Il2CppMethodPointer)b_i4S_u4u4i4_S_u4u4i4_},
    {"i4S_u4u4u4_S_u4u4u4_", (Il2CppMethodPointer)b_i4S_u4u4u4_S_u4u4u4_},
    {"i4S_u4u4u4u4u4u4u4u4_S_u4u4u4u4u4u4u4u4_", (Il2CppMethodPointer)b_i4S_u4u4u4u4u4u4u4u4_S_u4u4u4u4u4u4u4u4_},
    {"i4S_u8i4i4S_u4u4_S_i4i4i4i4_s_S_u8i4i4S_u4u4_S_i4i4i4i4_s_", (Il2CppMethodPointer)b_i4S_u8i4i4S_u4u4_S_i4i4i4i4_s_S_u8i4i4S_u4u4_S_i4i4i4i4_s_},
    {"i4S_u8i4si4u8u8u8_S_u8i4si4u8u8u8_", (Il2CppMethodPointer)b_i4S_u8i4si4u8u8u8_S_u8i4si4u8u8u8_},
    {"i4b", (Il2CppMethodPointer)b_i4b},
    {"i4bb", (Il2CppMethodPointer)b_i4bb},
    {"i4i4", (Il2CppMethodPointer)b_i4i4},
    {"i4i4O", (Il2CppMethodPointer)b_i4i4O},
    {"i4i4i4", (Il2CppMethodPointer)b_i4i4i4},
    {"i4i4s", (Il2CppMethodPointer)b_i4i4s},
    {"i4i8i8", (Il2CppMethodPointer)b_i4i8i8},
    {"i4o", (Il2CppMethodPointer)b_i4o},
    {"i4oo", (Il2CppMethodPointer)b_i4oo},
    {"i4os", (Il2CppMethodPointer)b_i4os},
    {"i4osDoDoDODbDN_bS_r4r4r4__", (Il2CppMethodPointer)b_i4osDoDoDODbDN_bS_r4r4r4__},
    {"i4p", (Il2CppMethodPointer)b_i4p},
    {"i4pi4", (Il2CppMethodPointer)b_i4pi4},
    {"i4pi4i4p", (Il2CppMethodPointer)b_i4pi4i4p},
    {"i4pi4pi4p", (Il2CppMethodPointer)b_i4pi4pi4p},
    {"i4pi8i8i8i8", (Il2CppMethodPointer)b_i4pi8i8i8i8},
    {"i4r4r4", (Il2CppMethodPointer)b_i4r4r4},
    {"i4s", (Il2CppMethodPointer)b_i4s},
    {"i4sbS_r4r4r4_S_r4r4r4_ss", (Il2CppMethodPointer)b_i4sbS_r4r4r4_S_r4r4r4_ss},
    {"i4si4DbDb", (Il2CppMethodPointer)b_i4si4DbDb},
    {"i4ss", (Il2CppMethodPointer)b_i4ss},
    {"i4sss", (Il2CppMethodPointer)b_i4sss},
    {"i4u1u1", (Il2CppMethodPointer)b_i4u1u1},
    {"i4u2u2", (Il2CppMethodPointer)b_i4u2u2},
    {"i4u4", (Il2CppMethodPointer)b_i4u4},
    {"i4u4i4", (Il2CppMethodPointer)b_i4u4i4},
    {"i4u4i4i4", (Il2CppMethodPointer)b_i4u4i4i4},
    {"i4u4u4", (Il2CppMethodPointer)b_i4u4u4},
    {"i4u8u8", (Il2CppMethodPointer)b_i4u8u8},
    {"i8os", (Il2CppMethodPointer)b_i8os},
    {"o", (Il2CppMethodPointer)b_o},
    {"oO", (Il2CppMethodPointer)b_oO},
    {"oOo", (Il2CppMethodPointer)b_oOo},
    {"oPs", (Il2CppMethodPointer)b_oPs},
    {"oS_S_S_r4r4r4_S_r4r4r4__i4i4i4i4i4i4_", (Il2CppMethodPointer)b_oS_S_S_r4r4r4_S_r4r4r4__i4i4i4i4i4i4_},
    {"oS_S_r4r4_r4_", (Il2CppMethodPointer)b_oS_S_r4r4_r4_},
    {"oS_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_i4u1u1u1u1_u4u4r4r4i4r4r4u4_", (Il2CppMethodPointer)b_oS_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_i4u1u1u1u1_u4u4r4r4i4r4r4u4_},
    {"oS_S_r4r4r4_S_r4r4r4_S_r4r4r4r4_S_i4u1u1u1u1_S_r4r4_S_r4r4_S_r4r4_S_r4r4__", (Il2CppMethodPointer)b_oS_S_r4r4r4_S_r4r4r4_S_r4r4r4r4_S_i4u1u1u1u1_S_r4r4_S_r4r4_S_r4r4_S_r4r4__},
    {"oS_S_u4o_i8_", (Il2CppMethodPointer)b_oS_S_u4o_i8_},
    {"oS_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4_", (Il2CppMethodPointer)b_oS_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4_},
    {"oS__", (Il2CppMethodPointer)b_oS__},
    {"oS_bsi4bb_", (Il2CppMethodPointer)b_oS_bsi4bb_},
    {"oS_i4_", (Il2CppMethodPointer)b_oS_i4_},
    {"oS_i4i4_", (Il2CppMethodPointer)b_oS_i4i4_},
    {"oS_i4i4i4bbi4_", (Il2CppMethodPointer)b_oS_i4i4i4bbi4_},
    {"oS_i4i4i4i4_", (Il2CppMethodPointer)b_oS_i4i4i4i4_},
    {"oS_i4i4o_", (Il2CppMethodPointer)b_oS_i4i4o_},
    {"oS_i4i4ossOosi4i4i1i1i1i4Oob_", (Il2CppMethodPointer)b_oS_i4i4ossOosi4i4i1i1i1i4Oob_},
    {"oS_i4i4r4r4_", (Il2CppMethodPointer)b_oS_i4i4r4r4_},
    {"oS_i4i4so_", (Il2CppMethodPointer)b_oS_i4i4so_},
    {"oS_i4i4u1o_", (Il2CppMethodPointer)b_oS_i4i4u1o_},
    {"oS_i4oi4_", (Il2CppMethodPointer)b_oS_i4oi4_},
    {"oS_i4r4_", (Il2CppMethodPointer)b_oS_i4r4_},
    {"oS_i4s_", (Il2CppMethodPointer)b_oS_i4s_},
    {"oS_i4si4_", (Il2CppMethodPointer)b_oS_i4si4_},
    {"oS_i4u1u1u1u1_", (Il2CppMethodPointer)b_oS_i4u1u1u1u1_},
    {"oS_oO_", (Il2CppMethodPointer)b_oS_oO_},
    {"oS_oor4r4i4i4i4S_r4r4r4_S_r4r4r4_S_r4r4_i4_", (Il2CppMethodPointer)b_oS_oor4r4i4i4i4S_r4r4r4_S_r4r4r4_S_r4r4_i4_},
    {"oS_oosr4r4_", (Il2CppMethodPointer)b_oS_oosr4r4_},
    {"oS_oosr4r4i4soooS_r4r4r4_S_r4r4r4_r4r4r4r4bi4osbor4bS_r4r4r4_i4r4i4ooo_", (Il2CppMethodPointer)b_oS_oosr4r4i4soooS_r4r4r4_S_r4r4r4_r4r4r4r4bi4osbor4bS_r4r4r4_i4r4i4ooo_},
    {"oS_or4_", (Il2CppMethodPointer)b_oS_or4_},
    {"oS_pu4u4u4_", (Il2CppMethodPointer)b_oS_pu4u4u4_},
    {"oS_r4i4_", (Il2CppMethodPointer)b_oS_r4i4_},
    {"oS_r4r4_", (Il2CppMethodPointer)b_oS_r4r4_},
    {"oS_r4r4r4_", (Il2CppMethodPointer)b_oS_r4r4r4_},
    {"oS_r4r4r4r4_", (Il2CppMethodPointer)b_oS_r4r4r4r4_},
    {"oS_r4r4r4r4i4i4i4i4_", (Il2CppMethodPointer)b_oS_r4r4r4r4i4i4i4i4_},
    {"oS_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_", (Il2CppMethodPointer)b_oS_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_},
    {"oS_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_", (Il2CppMethodPointer)b_oS_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_},
    {"oS_si4i4_", (Il2CppMethodPointer)b_oS_si4i4_},
    {"oS_ss_", (Il2CppMethodPointer)b_oS_ss_},
    {"oS_su1i2_", (Il2CppMethodPointer)b_oS_su1i2_},
    {"oS_u4i4i4i4_", (Il2CppMethodPointer)b_oS_u4i4i4i4_},
    {"oS_u4o_", (Il2CppMethodPointer)b_oS_u4o_},
    {"oS_u4oob_", (Il2CppMethodPointer)b_oS_u4oob_},
    {"oS_u4u1u4i4i4_", (Il2CppMethodPointer)b_oS_u4u1u4i4i4_},
    {"oS_u4u4_", (Il2CppMethodPointer)b_oS_u4u4_},
    {"oS_u4u4bo_", (Il2CppMethodPointer)b_oS_u4u4bo_},
    {"oS_u4u4i4_", (Il2CppMethodPointer)b_oS_u4u4i4_},
    {"oS_u4u4u4_", (Il2CppMethodPointer)b_oS_u4u4u4_},
    {"oS_u4u4u4u4u4u4u4u4_", (Il2CppMethodPointer)b_oS_u4u4u4u4u4u4u4u4_},
    {"oS_u8i4i4S_u4u4_S_i4i4i4i4_s_", (Il2CppMethodPointer)b_oS_u8i4i4S_u4u4_S_i4i4i4i4_s_},
    {"oS_u8i4si4u8u8u8_", (Il2CppMethodPointer)b_oS_u8i4si4u8u8u8_},
    {"ob", (Il2CppMethodPointer)b_ob},
    {"oi4", (Il2CppMethodPointer)b_oi4},
    {"oi4S_r4r4r4_", (Il2CppMethodPointer)b_oi4S_r4r4r4_},
    {"oi4o", (Il2CppMethodPointer)b_oi4o},
    {"oi8", (Il2CppMethodPointer)b_oi8},
    {"oo", (Il2CppMethodPointer)b_oo},
    {"ooO", (Il2CppMethodPointer)b_ooO},
    {"oob", (Il2CppMethodPointer)b_oob},
    {"oos", (Il2CppMethodPointer)b_oos},
    {"oosb", (Il2CppMethodPointer)b_oosb},
    {"opi4", (Il2CppMethodPointer)b_opi4},
    {"or4", (Il2CppMethodPointer)b_or4},
    {"os", (Il2CppMethodPointer)b_os},
    {"oso", (Il2CppMethodPointer)b_oso},
    {"osooo", (Il2CppMethodPointer)b_osooo},
    {"ou1", (Il2CppMethodPointer)b_ou1},
    {"ou2", (Il2CppMethodPointer)b_ou2},
    {"ou4", (Il2CppMethodPointer)b_ou4},
    {"ou8", (Il2CppMethodPointer)b_ou8},
    {"pPS__Pu1pPS_u4u4u8_", (Il2CppMethodPointer)b_pPS__Pu1pPS_u4u4u8_},
    {"pPvPu1pPS_u4u4u8_", (Il2CppMethodPointer)b_pPvPu1pPS_u4u4u8_},
    {"pS_u8_Pu1pPS_u4u4u8_", (Il2CppMethodPointer)b_pS_u8_Pu1pPS_u4u4u8_},
    {"pppi4i8", (Il2CppMethodPointer)b_pppi4i8},
    {"r4", (Il2CppMethodPointer)b_r4},
    {"r4o", (Il2CppMethodPointer)b_r4o},
    {"r4os", (Il2CppMethodPointer)b_r4os},
    {"r4r4", (Il2CppMethodPointer)b_r4r4},
    {"r4r4r4r4", (Il2CppMethodPointer)b_r4r4r4r4},
    {"r4s", (Il2CppMethodPointer)b_r4s},
    {"r8os", (Il2CppMethodPointer)b_r8os},
    {"s", (Il2CppMethodPointer)b_s},
    {"sO", (Il2CppMethodPointer)b_sO},
    {"si4", (Il2CppMethodPointer)b_si4},
    {"si4i4", (Il2CppMethodPointer)b_si4i4},
    {"so", (Il2CppMethodPointer)b_so},
    {"sos", (Il2CppMethodPointer)b_sos},
    {"ss", (Il2CppMethodPointer)b_ss},
    {"ssi4", (Il2CppMethodPointer)b_ssi4},
    {"sssDs", (Il2CppMethodPointer)b_sssDs},
    {"sssoo", (Il2CppMethodPointer)b_sssoo},
    {"u2os", (Il2CppMethodPointer)b_u2os},
    {"u4", (Il2CppMethodPointer)b_u4},
    {"u4PS__PS_u4u4u8_", (Il2CppMethodPointer)b_u4PS__PS_u4u4u8_},
    {"u4PvS_u8_PS_u4u4u8_", (Il2CppMethodPointer)b_u4PvS_u8_PS_u4u4u8_},
    {"u4PvS_u8_u4PS_u4u4u8_", (Il2CppMethodPointer)b_u4PvS_u8_u4PS_u4u4u8_},
    {"u4S_u8_Pu1poPvPS_u4u4u8_", (Il2CppMethodPointer)b_u4S_u8_Pu1poPvPS_u4u4u8_},
    {"u4S_u8_S_u8_Pu1poPvPS_u4u4u8_", (Il2CppMethodPointer)b_u4S_u8_S_u8_Pu1poPvPS_u4u4u8_},
    {"u4i4u4", (Il2CppMethodPointer)b_u4i4u4},
    {"u4os", (Il2CppMethodPointer)b_u4os},
    {"u4pi4", (Il2CppMethodPointer)b_u4pi4},
    {"u4soi4i4", (Il2CppMethodPointer)b_u4soi4i4},
    {"u8o", (Il2CppMethodPointer)b_u8o},
    {"u8os", (Il2CppMethodPointer)b_u8os},
    {"v", (Il2CppMethodPointer)b_v},
    {"vO", (Il2CppMethodPointer)b_vO},
    {"vOO", (Il2CppMethodPointer)b_vOO},
    {"vOS_Oi4_", (Il2CppMethodPointer)b_vOS_Oi4_},
    {"vOS_Oi4_o", (Il2CppMethodPointer)b_vOS_Oi4_o},
    {"vOi4o", (Il2CppMethodPointer)b_vOi4o},
    {"vOo", (Il2CppMethodPointer)b_vOo},
    {"vPS_S_i4i4i4_i4_", (Il2CppMethodPointer)b_vPS_S_i4i4i4_i4_},
    {"vPS_S_o_S_S_u4u1u1i4i4i4o_oS_S_S_u4u4u4u4u4u4u1u1u4u4S_r4r4r4_u4u2i2u1_S_S_i4i4i4_S_r4r4r4_S_i4i4i4_u1u1u1_S_i4i4i4i4i4i4i4i4i4i4_S_oo_S_i4i4__S_u4S_S_u8_u4u4u4u4u4u1u1u1u1_u1u1u1_S_u4S_S_u8_u4u4u4u4u4u1u1u1u1_u1u1u1__u1u1__", (Il2CppMethodPointer)b_vPS_S_o_S_S_u4u1u1i4i4i4o_oS_S_S_u4u4u4u4u4u4u1u1u4u4S_r4r4r4_u4u2i2u1_S_S_i4i4i4_S_r4r4r4_S_i4i4i4_u1u1u1_S_i4i4i4i4i4i4i4i4i4i4_S_oo_S_i4i4__S_u4S_S_u8_u4u4u4u4u4u1u1u1u1_u1u1u1_S_u4S_S_u8_u4u4u4u4u4u1u1u1u1_u1u1u1__u1u1__},
    {"vPS_S_u4o_S_u4o_S_u4o_S_u4o_bbo_", (Il2CppMethodPointer)b_vPS_S_u4o_S_u4o_S_u4o_S_u4o_bbo_},
    {"vPS_S_u4o_bS_u4o__", (Il2CppMethodPointer)b_vPS_S_u4o_bS_u4o__},
    {"vPS_S_u4o_i4S_u4o__", (Il2CppMethodPointer)b_vPS_S_u4o_i4S_u4o__},
    {"vPS_S_u4o_i4_", (Il2CppMethodPointer)b_vPS_S_u4o_i4_},
    {"vPS_S_u4o_i4i4u4_", (Il2CppMethodPointer)b_vPS_S_u4o_i4i4u4_},
    {"vPS_S_u4u4u4u4u4u4u1u1u4u4S_r4r4r4_u4u2i2u1_S_S_i4i4i4_S_r4r4r4_S_i4i4i4_u1u1u1_S_i4i4i4i4i4i4i4i4i4i4_S_oo_S_i4i4__", (Il2CppMethodPointer)b_vPS_S_u4u4u4u4u4u4u1u1u4u4S_r4r4r4_u4u2i2u1_S_S_i4i4i4_S_r4r4r4_S_i4i4i4_u1u1u1_S_i4i4i4i4i4i4i4i4i4i4_S_oo_S_i4i4__},
    {"vPS__", (Il2CppMethodPointer)b_vPS__},
    {"vPS__PS_u4u4u8_", (Il2CppMethodPointer)b_vPS__PS_u4u4u8_},
    {"vPS__Pu1pPS_u4u4u8_", (Il2CppMethodPointer)b_vPS__Pu1pPS_u4u4u8_},
    {"vPS__Pu4pPS_u4u4u8_", (Il2CppMethodPointer)b_vPS__Pu4pPS_u4u4u8_},
    {"vPS__S_u8_PS_u4u4u8_", (Il2CppMethodPointer)b_vPS__S_u8_PS_u4u4u8_},
    {"vPS__oPvPS_u4u4u8_", (Il2CppMethodPointer)b_vPS__oPvPS_u4u4u8_},
    {"vPS_i4_", (Il2CppMethodPointer)b_vPS_i4_},
    {"vPS_i4i4_", (Il2CppMethodPointer)b_vPS_i4i4_},
    {"vPS_i4i4i4_", (Il2CppMethodPointer)b_vPS_i4i4i4_},
    {"vPS_i4o_", (Il2CppMethodPointer)b_vPS_i4o_},
    {"vPS_o_", (Il2CppMethodPointer)b_vPS_o_},
    {"vPS_oo_", (Il2CppMethodPointer)b_vPS_oo_},
    {"vPS_ooo_", (Il2CppMethodPointer)b_vPS_ooo_},
    {"vPS_oou4_", (Il2CppMethodPointer)b_vPS_oou4_},
    {"vPS_pu4u4u4r4r4i4u4p_", (Il2CppMethodPointer)b_vPS_pu4u4u4r4r4i4u4p_},
    {"vPS_pu4u8u8i4pu4u4_", (Il2CppMethodPointer)b_vPS_pu4u8u8i4pu4u4_},
    {"vPS_u1i4i4_", (Il2CppMethodPointer)b_vPS_u1i4i4_},
    {"vPS_u1u4i4i4i4_", (Il2CppMethodPointer)b_vPS_u1u4i4i4i4_},
    {"vPS_u4S_i4i4i4_S_r4r4r4_i4S_r4r4r4r4_u4u1_", (Il2CppMethodPointer)b_vPS_u4S_i4i4i4_S_r4r4r4_i4S_r4r4r4r4_u4u1_},
    {"vPS_u4S_u8_u4u4u4u4u4_", (Il2CppMethodPointer)b_vPS_u4S_u8_u4u4u4u4u4_},
    {"vPS_u4_", (Il2CppMethodPointer)b_vPS_u4_},
    {"vPS_u4i4_", (Il2CppMethodPointer)b_vPS_u4i4_},
    {"vPS_u4i4i4_", (Il2CppMethodPointer)b_vPS_u4i4i4_},
    {"vPS_u4i4i4i4_", (Il2CppMethodPointer)b_vPS_u4i4i4i4_},
    {"vPS_u4i4o_", (Il2CppMethodPointer)b_vPS_u4i4o_},
    {"vPS_u4i4s_", (Il2CppMethodPointer)b_vPS_u4i4s_},
    {"vPS_u4o_", (Il2CppMethodPointer)b_vPS_u4o_},
    {"vPS_u4oi4i4i4i4_", (Il2CppMethodPointer)b_vPS_u4oi4i4i4i4_},
    {"vPS_u4oo_", (Il2CppMethodPointer)b_vPS_u4oo_},
    {"vPS_u4ooo_", (Il2CppMethodPointer)b_vPS_u4ooo_},
    {"vPS_u4oooi4i4_", (Il2CppMethodPointer)b_vPS_u4oooi4i4_},
    {"vPS_u4u1i4i4oo_", (Il2CppMethodPointer)b_vPS_u4u1i4i4oo_},
    {"vPS_u4u1o_", (Il2CppMethodPointer)b_vPS_u4u1o_},
    {"vPS_u4u1u4u4u1u4u4_", (Il2CppMethodPointer)b_vPS_u4u1u4u4u1u4u4_},
    {"vPS_u4u4S_i4i4__", (Il2CppMethodPointer)b_vPS_u4u4S_i4i4__},
    {"vPS_u4u4_", (Il2CppMethodPointer)b_vPS_u4u4_},
    {"vPS_u4u4oo_", (Il2CppMethodPointer)b_vPS_u4u4oo_},
    {"vPS_u4u4ooo_", (Il2CppMethodPointer)b_vPS_u4u4ooo_},
    {"vPS_u4u4oooo_", (Il2CppMethodPointer)b_vPS_u4u4oooo_},
    {"vPS_u4u4u1u4_", (Il2CppMethodPointer)b_vPS_u4u4u1u4_},
    {"vPS_u4u4u4_", (Il2CppMethodPointer)b_vPS_u4u4u4_},
    {"vPS_u4u4u4i4_", (Il2CppMethodPointer)b_vPS_u4u4u4i4_},
    {"vPS_u4u4u4u1_", (Il2CppMethodPointer)b_vPS_u4u4u4u1_},
    {"vPS_u4u4u4u4u4u4u4u4u4S_u1u4u4_ou4u4u4u4si4i4i4su4o_", (Il2CppMethodPointer)b_vPS_u4u4u4u4u4u4u4u4u4S_u1u4u4_ou4u4u4u4si4i4i4su4o_},
    {"vPS_u4u4u4u4u4u4u4u4u4u4_", (Il2CppMethodPointer)b_vPS_u4u4u4u4u4u4u4u4u4u4_},
    {"vPS_u4u4u8_u4", (Il2CppMethodPointer)b_vPS_u4u4u8_u4},
    {"vPS_u8psu4i4u4u4_", (Il2CppMethodPointer)b_vPS_u8psu4i4u4u4_},
    {"vPS_u8u4u4u4u4u4u4u4u4u2S_u4u4u4u4u4u4_S_u4u4u4u4u4u4__", (Il2CppMethodPointer)b_vPS_u8u4u4u4u4u4u4u4u4u2S_u4u4u4u4u4u4_S_u4u4u4u4u4u4__},
    {"vPo", (Il2CppMethodPointer)b_vPo},
    {"vPoPo", (Il2CppMethodPointer)b_vPoPo},
    {"vPoPoPo", (Il2CppMethodPointer)b_vPoPoPo},
    {"vPr4", (Il2CppMethodPointer)b_vPr4},
    {"vPu1", (Il2CppMethodPointer)b_vPu1},
    {"vPu1pPS_u4u4u8_", (Il2CppMethodPointer)b_vPu1pPS_u4u4u8_},
    {"vPu4", (Il2CppMethodPointer)b_vPu4},
    {"vPvPS__Pu1p", (Il2CppMethodPointer)b_vPvPS__Pu1p},
    {"vPvPS__Pu1pPS__pPS_u8_PS_u8_PS_u4u4u8_", (Il2CppMethodPointer)b_vPvPS__Pu1pPS__pPS_u8_PS_u8_PS_u4u4u8_},
    {"vS_Oi4_", (Il2CppMethodPointer)b_vS_Oi4_},
    {"vS_S_S_r4r4r4_S_r4r4r4__i4i4i4i4i4i4_", (Il2CppMethodPointer)b_vS_S_S_r4r4r4_S_r4r4r4__i4i4i4i4i4i4_},
    {"vS_S_i4i4i4_i4_", (Il2CppMethodPointer)b_vS_S_i4i4i4_i4_},
    {"vS_S_o_S_S_u4u1u1i4i4i4o_oS_S_S_u4u4u4u4u4u4u1u1u4u4S_r4r4r4_u4u2i2u1_S_S_i4i4i4_S_r4r4r4_S_i4i4i4_u1u1u1_S_i4i4i4i4i4i4i4i4i4i4_S_oo_S_i4i4__S_u4S_S_u8_u4u4u4u4u4u1u1u1u1_u1u1u1_S_u4S_S_u8_u4u4u4u4u4u1u1u1u1_u1u1u1__u1u1__", (Il2CppMethodPointer)b_vS_S_o_S_S_u4u1u1i4i4i4o_oS_S_S_u4u4u4u4u4u4u1u1u4u4S_r4r4r4_u4u2i2u1_S_S_i4i4i4_S_r4r4r4_S_i4i4i4_u1u1u1_S_i4i4i4i4i4i4i4i4i4i4_S_oo_S_i4i4__S_u4S_S_u8_u4u4u4u4u4u1u1u1u1_u1u1u1_S_u4S_S_u8_u4u4u4u4u4u1u1u1u1_u1u1u1__u1u1__},
    {"vS_S_p_i4_o", (Il2CppMethodPointer)b_vS_S_p_i4_o},
    {"vS_S_r4r4_r4_", (Il2CppMethodPointer)b_vS_S_r4r4_r4_},
    {"vS_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_i4u1u1u1u1_u4u4r4r4i4r4r4u4_", (Il2CppMethodPointer)b_vS_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_i4u1u1u1u1_u4u4r4r4i4r4r4u4_},
    {"vS_S_r4r4r4_S_r4r4r4_S_r4r4r4r4_S_i4u1u1u1u1_S_r4r4_S_r4r4_S_r4r4_S_r4r4__", (Il2CppMethodPointer)b_vS_S_r4r4r4_S_r4r4r4_S_r4r4r4r4_S_i4u1u1u1u1_S_r4r4_S_r4r4_S_r4r4_S_r4r4__},
    {"vS_S_u4o_i8_", (Il2CppMethodPointer)b_vS_S_u4o_i8_},
    {"vS_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4_", (Il2CppMethodPointer)b_vS_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4_},
    {"vS__", (Il2CppMethodPointer)b_vS__},
    {"vS_bsi4bb_", (Il2CppMethodPointer)b_vS_bsi4bb_},
    {"vS_i4_", (Il2CppMethodPointer)b_vS_i4_},
    {"vS_i4_i4", (Il2CppMethodPointer)b_vS_i4_i4},
    {"vS_i4b_", (Il2CppMethodPointer)b_vS_i4b_},
    {"vS_i4i4_", (Il2CppMethodPointer)b_vS_i4i4_},
    {"vS_i4i4i4bbi4_", (Il2CppMethodPointer)b_vS_i4i4i4bbi4_},
    {"vS_i4i4i4i4_", (Il2CppMethodPointer)b_vS_i4i4i4i4_},
    {"vS_i4i4o_", (Il2CppMethodPointer)b_vS_i4i4o_},
    {"vS_i4i4ossOosi4i4i1i1i1i4Oob_", (Il2CppMethodPointer)b_vS_i4i4ossOosi4i4i1i1i1i4Oob_},
    {"vS_i4i4r4r4_", (Il2CppMethodPointer)b_vS_i4i4r4r4_},
    {"vS_i4i4so_", (Il2CppMethodPointer)b_vS_i4i4so_},
    {"vS_i4i4u1o_", (Il2CppMethodPointer)b_vS_i4i4u1o_},
    {"vS_i4o_", (Il2CppMethodPointer)b_vS_i4o_},
    {"vS_i4o_u4", (Il2CppMethodPointer)b_vS_i4o_u4},
    {"vS_i4oi4_", (Il2CppMethodPointer)b_vS_i4oi4_},
    {"vS_i4r4_", (Il2CppMethodPointer)b_vS_i4r4_},
    {"vS_i4s_", (Il2CppMethodPointer)b_vS_i4s_},
    {"vS_i4si4_", (Il2CppMethodPointer)b_vS_i4si4_},
    {"vS_i4u1u1u1u1_", (Il2CppMethodPointer)b_vS_i4u1u1u1u1_},
    {"vS_i8i8_", (Il2CppMethodPointer)b_vS_i8i8_},
    {"vS_oO_", (Il2CppMethodPointer)b_vS_oO_},
    {"vS_o_", (Il2CppMethodPointer)b_vS_o_},
    {"vS_oo_", (Il2CppMethodPointer)b_vS_oo_},
    {"vS_ooo_", (Il2CppMethodPointer)b_vS_ooo_},
    {"vS_oor4r4i4i4i4S_r4r4r4_S_r4r4r4_S_r4r4_i4_", (Il2CppMethodPointer)b_vS_oor4r4i4i4i4S_r4r4r4_S_r4r4r4_S_r4r4_i4_},
    {"vS_oosr4r4_", (Il2CppMethodPointer)b_vS_oosr4r4_},
    {"vS_oosr4r4i4soooS_r4r4r4_S_r4r4r4_r4r4r4r4bi4osbor4bS_r4r4r4_i4r4i4ooo_", (Il2CppMethodPointer)b_vS_oosr4r4i4soooS_r4r4r4_S_r4r4r4_r4r4r4r4bi4osbor4bS_r4r4r4_i4r4i4ooo_},
    {"vS_oou4_", (Il2CppMethodPointer)b_vS_oou4_},
    {"vS_or4_", (Il2CppMethodPointer)b_vS_or4_},
    {"vS_pi4_", (Il2CppMethodPointer)b_vS_pi4_},
    {"vS_pppi4ooo_", (Il2CppMethodPointer)b_vS_pppi4ooo_},
    {"vS_pu4u4u4_", (Il2CppMethodPointer)b_vS_pu4u4u4_},
    {"vS_r4i4_", (Il2CppMethodPointer)b_vS_r4i4_},
    {"vS_r4r4_", (Il2CppMethodPointer)b_vS_r4r4_},
    {"vS_r4r4_S_r4r4_", (Il2CppMethodPointer)b_vS_r4r4_S_r4r4_},
    {"vS_r4r4_S_r4r4_r4", (Il2CppMethodPointer)b_vS_r4r4_S_r4r4_r4},
    {"vS_r4r4_i4", (Il2CppMethodPointer)b_vS_r4r4_i4},
    {"vS_r4r4_i4r4", (Il2CppMethodPointer)b_vS_r4r4_i4r4},
    {"vS_r4r4r4_", (Il2CppMethodPointer)b_vS_r4r4r4_},
    {"vS_r4r4r4_O", (Il2CppMethodPointer)b_vS_r4r4r4_O},
    {"vS_r4r4r4_S_u4o_i4", (Il2CppMethodPointer)b_vS_r4r4r4_S_u4o_i4},
    {"vS_r4r4r4_i4", (Il2CppMethodPointer)b_vS_r4r4r4_i4},
    {"vS_r4r4r4_u1i4", (Il2CppMethodPointer)b_vS_r4r4r4_u1i4},
    {"vS_r4r4r4r4_", (Il2CppMethodPointer)b_vS_r4r4r4r4_},
    {"vS_r4r4r4r4_O", (Il2CppMethodPointer)b_vS_r4r4r4r4_O},
    {"vS_r4r4r4r4i4i4i4i4_", (Il2CppMethodPointer)b_vS_r4r4r4r4i4i4i4i4_},
    {"vS_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_", (Il2CppMethodPointer)b_vS_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_},
    {"vS_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_", (Il2CppMethodPointer)b_vS_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_},
    {"vS_si4i4_", (Il2CppMethodPointer)b_vS_si4i4_},
    {"vS_ss_", (Il2CppMethodPointer)b_vS_ss_},
    {"vS_su1i2_", (Il2CppMethodPointer)b_vS_su1i2_},
    {"vS_u1u4i4i4i4_", (Il2CppMethodPointer)b_vS_u1u4i4i4i4_},
    {"vS_u4S_i4i4i4_S_r4r4r4_i4S_r4r4r4r4_u4u1_", (Il2CppMethodPointer)b_vS_u4S_i4i4i4_S_r4r4r4_i4S_r4r4r4r4_u4u1_},
    {"vS_u4i4i4_", (Il2CppMethodPointer)b_vS_u4i4i4_},
    {"vS_u4i4i4i4_", (Il2CppMethodPointer)b_vS_u4i4i4i4_},
    {"vS_u4i4o_", (Il2CppMethodPointer)b_vS_u4i4o_},
    {"vS_u4i4s_", (Il2CppMethodPointer)b_vS_u4i4s_},
    {"vS_u4i4u1u4_", (Il2CppMethodPointer)b_vS_u4i4u1u4_},
    {"vS_u4o_", (Il2CppMethodPointer)b_vS_u4o_},
    {"vS_u4o_S_u1u2u1u1S_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4__", (Il2CppMethodPointer)b_vS_u4o_S_u1u2u1u1S_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4__},
    {"vS_u4o_b", (Il2CppMethodPointer)b_vS_u4o_b},
    {"vS_u4oi4i4i4i4_", (Il2CppMethodPointer)b_vS_u4oi4i4i4i4_},
    {"vS_u4oo_", (Il2CppMethodPointer)b_vS_u4oo_},
    {"vS_u4oob_", (Il2CppMethodPointer)b_vS_u4oob_},
    {"vS_u4ooo_", (Il2CppMethodPointer)b_vS_u4ooo_},
    {"vS_u4oooi4i4_", (Il2CppMethodPointer)b_vS_u4oooi4i4_},
    {"vS_u4u1i4i4oo_", (Il2CppMethodPointer)b_vS_u4u1i4i4oo_},
    {"vS_u4u1u4i4i4_", (Il2CppMethodPointer)b_vS_u4u1u4i4i4_},
    {"vS_u4u1u4u4u1u4u4_", (Il2CppMethodPointer)b_vS_u4u1u4u4u1u4u4_},
    {"vS_u4u4_", (Il2CppMethodPointer)b_vS_u4u4_},
    {"vS_u4u4b_", (Il2CppMethodPointer)b_vS_u4u4b_},
    {"vS_u4u4bo_", (Il2CppMethodPointer)b_vS_u4u4bo_},
    {"vS_u4u4i4_", (Il2CppMethodPointer)b_vS_u4u4i4_},
    {"vS_u4u4oo_", (Il2CppMethodPointer)b_vS_u4u4oo_},
    {"vS_u4u4ooo_", (Il2CppMethodPointer)b_vS_u4u4ooo_},
    {"vS_u4u4oooo_", (Il2CppMethodPointer)b_vS_u4u4oooo_},
    {"vS_u4u4u4_", (Il2CppMethodPointer)b_vS_u4u4u4_},
    {"vS_u4u4u4i4_", (Il2CppMethodPointer)b_vS_u4u4u4i4_},
    {"vS_u4u4u4u4_", (Il2CppMethodPointer)b_vS_u4u4u4u4_},
    {"vS_u4u4u4u4u4_", (Il2CppMethodPointer)b_vS_u4u4u4u4u4_},
    {"vS_u4u4u4u4u4u4u4u4_", (Il2CppMethodPointer)b_vS_u4u4u4u4u4u4u4u4_},
    {"vS_u4u4u4u4u4u4u4u4u4u4_", (Il2CppMethodPointer)b_vS_u4u4u4u4u4u4u4u4u4u4_},
    {"vS_u8i4i4S_u4u4_S_i4i4i4i4_s_", (Il2CppMethodPointer)b_vS_u8i4i4S_u4u4_S_i4i4i4i4_s_},
    {"vS_u8i4si4u8u8u8_", (Il2CppMethodPointer)b_vS_u8i4si4u8u8u8_},
    {"vS_u8u4u4u4u4u4u4u4u4u2S_u4u4u4u4u4u4_S_u4u4u4u4u4u4__", (Il2CppMethodPointer)b_vS_u8u4u4u4u4u4u4u4u4u2S_u4u4u4u4u4u4_S_u4u4u4u4u4u4__},
    {"vb", (Il2CppMethodPointer)b_vb},
    {"vbPS_i4i4_", (Il2CppMethodPointer)b_vbPS_i4i4_},
    {"vbi4", (Il2CppMethodPointer)b_vbi4},
    {"vbi4u4", (Il2CppMethodPointer)b_vbi4u4},
    {"vbo", (Il2CppMethodPointer)b_vbo},
    {"vbos", (Il2CppMethodPointer)b_vbos},
    {"vbu4", (Il2CppMethodPointer)b_vbu4},
    {"vi4", (Il2CppMethodPointer)b_vi4},
    {"vi4O", (Il2CppMethodPointer)b_vi4O},
    {"vi4S_r4r4_", (Il2CppMethodPointer)b_vi4S_r4r4_},
    {"vi4S_r4r4_S_r4r4_", (Il2CppMethodPointer)b_vi4S_r4r4_S_r4r4_},
    {"vi4S_r4r4_i4", (Il2CppMethodPointer)b_vi4S_r4r4_i4},
    {"vi4S_r4r4_i4r4", (Il2CppMethodPointer)b_vi4S_r4r4_i4r4},
    {"vi4S_r4r4_r4", (Il2CppMethodPointer)b_vi4S_r4r4_r4},
    {"vi4S_u4o_", (Il2CppMethodPointer)b_vi4S_u4o_},
    {"vi4S_u8u8_", (Il2CppMethodPointer)b_vi4S_u8u8_},
    {"vi4b", (Il2CppMethodPointer)b_vi4b},
    {"vi4i4", (Il2CppMethodPointer)b_vi4i4},
    {"vi4i4S_i4i4i4i4_i4", (Il2CppMethodPointer)b_vi4i4S_i4i4i4i4_i4},
    {"vi4i4i4", (Il2CppMethodPointer)b_vi4i4i4},
    {"vi4i4i4ssi4s", (Il2CppMethodPointer)b_vi4i4i4ssi4s},
    {"vi4i4i4sssi4s", (Il2CppMethodPointer)b_vi4i4i4sssi4s},
    {"vi4i4si4s", (Il2CppMethodPointer)b_vi4i4si4s},
    {"vi4i4ss", (Il2CppMethodPointer)b_vi4i4ss},
    {"vi4o", (Il2CppMethodPointer)b_vi4o},
    {"vi4oi4", (Il2CppMethodPointer)b_vi4oi4},
    {"vi4popO", (Il2CppMethodPointer)b_vi4popO},
    {"vi4s", (Il2CppMethodPointer)b_vi4s},
    {"vi4sDu8DoDi4", (Il2CppMethodPointer)b_vi4sDu8DoDi4},
    {"vi4sb", (Il2CppMethodPointer)b_vi4sb},
    {"vi4si4", (Il2CppMethodPointer)b_vi4si4},
    {"vi4si4i4", (Il2CppMethodPointer)b_vi4si4i4},
    {"vi4si4s", (Il2CppMethodPointer)b_vi4si4s},
    {"vi4so", (Il2CppMethodPointer)b_vi4so},
    {"vi4ss", (Il2CppMethodPointer)b_vi4ss},
    {"vi4ssi4", (Il2CppMethodPointer)b_vi4ssi4},
    {"vi4sss", (Il2CppMethodPointer)b_vi4sss},
    {"vi4sssi4", (Il2CppMethodPointer)b_vi4sssi4},
    {"vi4u4", (Il2CppMethodPointer)b_vi4u4},
    {"vi4u8", (Il2CppMethodPointer)b_vi4u8},
    {"vi8", (Il2CppMethodPointer)b_vi8},
    {"vi8bu4u4", (Il2CppMethodPointer)b_vi8bu4u4},
    {"vi8i4", (Il2CppMethodPointer)b_vi8i4},
    {"vi8i4i8i8i8", (Il2CppMethodPointer)b_vi8i4i8i8i8},
    {"vi8i8i8i8", (Il2CppMethodPointer)b_vi8i8i8i8},
    {"vi8i8i8i8o", (Il2CppMethodPointer)b_vi8i8i8i8o},
    {"vi8pu4", (Il2CppMethodPointer)b_vi8pu4},
    {"vi8su4", (Il2CppMethodPointer)b_vi8su4},
    {"vo", (Il2CppMethodPointer)b_vo},
    {"voO", (Il2CppMethodPointer)b_voO},
    {"voS_Oi4_", (Il2CppMethodPointer)b_voS_Oi4_},
    {"voS_o_", (Il2CppMethodPointer)b_voS_o_},
    {"voS_r4r4_", (Il2CppMethodPointer)b_voS_r4r4_},
    {"voS_r4r4r4_", (Il2CppMethodPointer)b_voS_r4r4r4_},
    {"voS_r4r4r4r4_", (Il2CppMethodPointer)b_voS_r4r4r4r4_},
    {"vob", (Il2CppMethodPointer)b_vob},
    {"voi4", (Il2CppMethodPointer)b_voi4},
    {"voi4o", (Il2CppMethodPointer)b_voi4o},
    {"voi4s", (Il2CppMethodPointer)b_voi4s},
    {"voo", (Il2CppMethodPointer)b_voo},
    {"vooi4oS_bbbbbbb_", (Il2CppMethodPointer)b_vooi4oS_bbbbbbb_},
    {"vooo", (Il2CppMethodPointer)b_vooo},
    {"vor4", (Il2CppMethodPointer)b_vor4},
    {"vor4ob", (Il2CppMethodPointer)b_vor4ob},
    {"vor4r4", (Il2CppMethodPointer)b_vor4r4},
    {"vos", (Il2CppMethodPointer)b_vos},
    {"vou4oo", (Il2CppMethodPointer)b_vou4oo},
    {"vp", (Il2CppMethodPointer)b_vp},
    {"vpO", (Il2CppMethodPointer)b_vpO},
    {"vpS_r4r4_", (Il2CppMethodPointer)b_vpS_r4r4_},
    {"vpS_r4r4r4_", (Il2CppMethodPointer)b_vpS_r4r4r4_},
    {"vpb", (Il2CppMethodPointer)b_vpb},
    {"vpi4", (Il2CppMethodPointer)b_vpi4},
    {"vpi4Po", (Il2CppMethodPointer)b_vpi4Po},
    {"vpi4i4i4", (Il2CppMethodPointer)b_vpi4i4i4},
    {"vpi4o", (Il2CppMethodPointer)b_vpi4o},
    {"vpi8", (Il2CppMethodPointer)b_vpi8},
    {"vpo", (Il2CppMethodPointer)b_vpo},
    {"vpppi4i8", (Il2CppMethodPointer)b_vpppi4i8},
    {"vps", (Il2CppMethodPointer)b_vps},
    {"vpu4", (Il2CppMethodPointer)b_vpu4},
    {"vr4", (Il2CppMethodPointer)b_vr4},
    {"vr4O", (Il2CppMethodPointer)b_vr4O},
    {"vr4r4", (Il2CppMethodPointer)b_vr4r4},
    {"vs", (Il2CppMethodPointer)b_vs},
    {"vsO", (Il2CppMethodPointer)b_vsO},
    {"vsb", (Il2CppMethodPointer)b_vsb},
    {"vsbS_S_Pvi4i4i4S_pi4i4_i4_i4i4i4_", (Il2CppMethodPointer)b_vsbS_S_Pvi4i4i4S_pi4i4_i4_i4i4i4_},
    {"vsbS_r4r4r4_S_r4r4r4_", (Il2CppMethodPointer)b_vsbS_r4r4r4_S_r4r4r4_},
    {"vsbs", (Il2CppMethodPointer)b_vsbs},
    {"vsi4DbDb", (Il2CppMethodPointer)b_vsi4DbDb},
    {"vsi4i4", (Il2CppMethodPointer)b_vsi4i4},
    {"vsi4si4s", (Il2CppMethodPointer)b_vsi4si4s},
    {"vsi4ss", (Il2CppMethodPointer)b_vsi4ss},
    {"vsi8i4bi4", (Il2CppMethodPointer)b_vsi8i4bi4},
    {"vso", (Il2CppMethodPointer)b_vso},
    {"vsob", (Il2CppMethodPointer)b_vsob},
    {"vsoi4", (Il2CppMethodPointer)b_vsoi4},
    {"vsoi4i4", (Il2CppMethodPointer)b_vsoi4i4},
    {"vsr4", (Il2CppMethodPointer)b_vsr4},
    {"vss", (Il2CppMethodPointer)b_vss},
    {"vssO", (Il2CppMethodPointer)b_vssO},
    {"vssi4", (Il2CppMethodPointer)b_vssi4},
    {"vssi4i4", (Il2CppMethodPointer)b_vssi4i4},
    {"vssi4o", (Il2CppMethodPointer)b_vssi4o},
    {"vsso", (Il2CppMethodPointer)b_vsso},
    {"vssoo", (Il2CppMethodPointer)b_vssoo},
    {"vsu4", (Il2CppMethodPointer)b_vsu4},
    {"vu1", (Il2CppMethodPointer)b_vu1},
    {"vu2", (Il2CppMethodPointer)b_vu2},
    {"vu4", (Il2CppMethodPointer)b_vu4},
    {"vu4S_i4i4i4i4i4_", (Il2CppMethodPointer)b_vu4S_i4i4i4i4i4_},
    {"vu4S_r4r4r4_", (Il2CppMethodPointer)b_vu4S_r4r4r4_},
    {"vu4S_r4r4r4_o", (Il2CppMethodPointer)b_vu4S_r4r4r4_o},
    {"vu4S_u4u4i4_", (Il2CppMethodPointer)b_vu4S_u4u4i4_},
    {"vu4b", (Il2CppMethodPointer)b_vu4b},
    {"vu4bb", (Il2CppMethodPointer)b_vu4bb},
    {"vu4i4", (Il2CppMethodPointer)b_vu4i4},
    {"vu4i4O", (Il2CppMethodPointer)b_vu4i4O},
    {"vu4i4OO", (Il2CppMethodPointer)b_vu4i4OO},
    {"vu4i4i4", (Il2CppMethodPointer)b_vu4i4i4},
    {"vu4i4i4i4", (Il2CppMethodPointer)b_vu4i4i4i4},
    {"vu4i4o", (Il2CppMethodPointer)b_vu4i4o},
    {"vu4i4u4", (Il2CppMethodPointer)b_vu4i4u4},
    {"vu4o", (Il2CppMethodPointer)b_vu4o},
    {"vu4oO", (Il2CppMethodPointer)b_vu4oO},
    {"vu4p", (Il2CppMethodPointer)b_vu4p},
    {"vu4pi4O", (Il2CppMethodPointer)b_vu4pi4O},
    {"vu4s", (Il2CppMethodPointer)b_vu4s},
    {"vu4ss", (Il2CppMethodPointer)b_vu4ss},
    {"vu4u4", (Il2CppMethodPointer)b_vu4u4},
    {"vu4u4b", (Il2CppMethodPointer)b_vu4u4b},
    {"vu4u4o", (Il2CppMethodPointer)b_vu4u4o},
    {"vu4u4u4", (Il2CppMethodPointer)b_vu4u4u4},
    {"vu4u4u4u4", (Il2CppMethodPointer)b_vu4u4u4u4},
    {"vu4u4u4u4u4", (Il2CppMethodPointer)b_vu4u4u4u4u4},
    {"vu8", (Il2CppMethodPointer)b_vu8},
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

