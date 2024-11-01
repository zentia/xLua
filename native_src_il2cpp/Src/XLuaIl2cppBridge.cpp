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
static struct N_bS_i4i4i4i4u8__ b_N_bS_i4i4i4i4u8__o(void* target, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_N_bS_i4i4i4i4u8__o");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        CSRefToLuaValue(env, TIp1, p1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal struct
    N_bS_i4i4i4i4u8__* pret = DataTransfer::GetPointer<N_bS_i4i4i4i4u8__>(env, luaret);
    N_bS_i4i4i4i4u8__ ret = pret ? *pret : N_bS_i4i4i4i4u8__ {};
        
    return ret;
        
static struct N_bi4_ b_N_bi4_S_oo_o(void* target, struct S_oo_ p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_N_bi4_S_oo_o");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        DataTransfer::CopyValueType(env, p1, TIp1),
            CSRefToLuaValue(env, TIp2, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal struct
    N_bi4_* pret = DataTransfer::GetPointer<N_bi4_>(env, luaret);
    N_bi4_ ret = pret ? *pret : N_bi4_ {};
        
    return ret;
        
static struct N_bi4_ b_N_bi4_o(void* target, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_N_bi4_o");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        CSRefToLuaValue(env, TIp1, p1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal struct
    N_bi4_* pret = DataTransfer::GetPointer<N_bi4_>(env, luaret);
    N_bi4_ ret = pret ? *pret : N_bi4_ {};
        
    return ret;
        
static struct N_bi8_ b_N_bi8_o(void* target, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_N_bi8_o");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        CSRefToLuaValue(env, TIp1, p1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal struct
    N_bi8_* pret = DataTransfer::GetPointer<N_bi8_>(env, luaret);
    N_bi8_ ret = pret ? *pret : N_bi8_ {};
        
    return ret;
        
static struct N_br4_ b_N_br4_o(void* target, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_N_br4_o");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        CSRefToLuaValue(env, TIp1, p1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal struct
    N_br4_* pret = DataTransfer::GetPointer<N_br4_>(env, luaret);
    N_br4_ ret = pret ? *pret : N_br4_ {};
        
    return ret;
        
static struct N_br8_ b_N_br8_o(void* target, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_N_br8_o");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        CSRefToLuaValue(env, TIp1, p1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal struct
    N_br8_* pret = DataTransfer::GetPointer<N_br8_>(env, luaret);
    N_br8_ ret = pret ? *pret : N_br8_ {};
        
    return ret;
        
static Il2CppObject* b_O(void* target, MethodInfo* method) {
    // PLog("Running b_O");

    auto TIret = GetReturnType(method);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value *argv = nullptr;    auto luaRet = pesapi_call_function(env, func, nullptr, 0, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_OS_oooObS_r4r4r4r4_bb_(void* target, struct S_oooObS_r4r4r4r4_bb_ p1, MethodInfo* method) {
    // PLog("Running b_OS_oooObS_r4r4r4r4_bb_");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        DataTransfer::CopyValueType(env, p1, TIp1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_Oi4(void* target, int32_t p1, MethodInfo* method) {
    // PLog("Running b_Oi4");

    auto TIret = GetReturnType(method);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        converter::Converter<int32_t>::toScript(env, p1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_Oo(void* target, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_Oo");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        CSRefToLuaValue(env, TIp1, p1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_Ooo(void* target, Il2CppObject* p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_Ooo");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_Oooo(void* target, Il2CppObject* p1, Il2CppObject* p2, Il2CppObject* p3, MethodInfo* method) {
    // PLog("Running b_Oooo");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2),
            CSRefToLuaValue(env, TIp3, p3)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_Opi4(void* target, void* p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_Opi4");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        pesapi_create_binary(env, p1, 0),
            converter::Converter<int32_t>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_Opi4O(void* target, void* p1, int32_t p2, Il2CppObject* p3, MethodInfo* method) {
    // PLog("Running b_Opi4O");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
                            
    auto Tip3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        pesapi_create_binary(env, p1, 0),
            converter::Converter<int32_t>::toScript(env, p2),
            CSRefToLuaValue(env, TIp3, p3)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_Oso(void* target, Il2CppString* p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_Oso");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        converter::Converter<Il2CppString*>::toScript(env, p1),
            CSRefToLuaValue(env, TIp2, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static struct S_S_r4r4r4_S_r4r4r4__ b_S_S_r4r4r4_S_r4r4r4__(void* target, MethodInfo* method) {
    // PLog("Running b_S_S_r4r4r4_S_r4r4r4__");

    auto TIret = GetReturnType(method);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value *argv = nullptr;    auto luaRet = pesapi_call_function(env, func, nullptr, 0, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal struct
    S_S_r4r4r4_S_r4r4r4__* pret = DataTransfer::GetPointer<S_S_r4r4r4_S_r4r4r4__>(env, luaret);
    S_S_r4r4r4_S_r4r4r4__ ret = pret ? *pret : S_S_r4r4r4_S_r4r4r4__ {};
        
    return ret;
        
static struct S__ b_S__(void* target, MethodInfo* method) {
    // PLog("Running b_S__");

    auto TIret = GetReturnType(method);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value *argv = nullptr;    auto luaRet = pesapi_call_function(env, func, nullptr, 0, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal struct
    S__* pret = DataTransfer::GetPointer<S__>(env, luaret);
    S__ ret = pret ? *pret : S__ {};
        
    return ret;
        
static struct S_bo_ b_S_bo_s(void* target, Il2CppString* p1, MethodInfo* method) {
    // PLog("Running b_S_bo_s");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        converter::Converter<Il2CppString*>::toScript(env, p1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal struct
    S_bo_* pret = DataTransfer::GetPointer<S_bo_>(env, luaret);
    S_bo_ ret = pret ? *pret : S_bo_ {};
        
    return ret;
        
static struct S_i4i4S_i4i4i4i4u8_S_u1__ b_S_i4i4S_i4i4i4i4u8_S_u1__S_i4i4S_i4i4i4i4u8_S_u1__(void* target, struct S_i4i4S_i4i4i4i4u8_S_u1__ p1, MethodInfo* method) {
    // PLog("Running b_S_i4i4S_i4i4i4i4u8_S_u1__S_i4i4S_i4i4i4i4u8_S_u1__");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        DataTransfer::CopyValueType(env, p1, TIp1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal struct
    S_i4i4S_i4i4i4i4u8_S_u1__* pret = DataTransfer::GetPointer<S_i4i4S_i4i4i4i4u8_S_u1__>(env, luaret);
    S_i4i4S_i4i4i4i4u8_S_u1__ ret = pret ? *pret : S_i4i4S_i4i4i4i4u8_S_u1__ {};
        
    return ret;
        
static struct S_i4i4S_i4i4i4i4u8_S_u1__ b_S_i4i4S_i4i4i4i4u8_S_u1__pi4(void* target, void* p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_S_i4i4S_i4i4i4i4u8_S_u1__pi4");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        pesapi_create_binary(env, p1, 0),
            converter::Converter<int32_t>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal struct
    S_i4i4S_i4i4i4i4u8_S_u1__* pret = DataTransfer::GetPointer<S_i4i4S_i4i4i4i4u8_S_u1__>(env, luaret);
    S_i4i4S_i4i4i4i4u8_S_u1__ ret = pret ? *pret : S_i4i4S_i4i4i4i4u8_S_u1__ {};
        
    return ret;
        
static struct S_i4i4i4i4u8_ b_S_i4i4i4i4u8_S_i4i4i4i4u8_(void* target, struct S_i4i4i4i4u8_ p1, MethodInfo* method) {
    // PLog("Running b_S_i4i4i4i4u8_S_i4i4i4i4u8_");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        DataTransfer::CopyValueType(env, p1, TIp1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal struct
    S_i4i4i4i4u8_* pret = DataTransfer::GetPointer<S_i4i4i4i4u8_>(env, luaret);
    S_i4i4i4i4u8_ ret = pret ? *pret : S_i4i4i4i4u8_ {};
        
    return ret;
        
static struct S_i4i4i4i4u8_ b_S_i4i4i4i4u8_o(void* target, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_S_i4i4i4i4u8_o");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        CSRefToLuaValue(env, TIp1, p1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal struct
    S_i4i4i4i4u8_* pret = DataTransfer::GetPointer<S_i4i4i4i4u8_>(env, luaret);
    S_i4i4i4i4u8_ ret = pret ? *pret : S_i4i4i4i4u8_ {};
        
    return ret;
        
static struct S_i4i4i4i4u8_ b_S_i4i4i4i4u8_pi4(void* target, void* p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_S_i4i4i4i4u8_pi4");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        pesapi_create_binary(env, p1, 0),
            converter::Converter<int32_t>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal struct
    S_i4i4i4i4u8_* pret = DataTransfer::GetPointer<S_i4i4i4i4u8_>(env, luaret);
    S_i4i4i4i4u8_ ret = pret ? *pret : S_i4i4i4i4u8_ {};
        
    return ret;
        
static struct S_oooS_r4r4__ b_S_oooS_r4r4__S_oooS_r4r4__(void* target, struct S_oooS_r4r4__ p1, MethodInfo* method) {
    // PLog("Running b_S_oooS_r4r4__S_oooS_r4r4__");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        DataTransfer::CopyValueType(env, p1, TIp1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal struct
    S_oooS_r4r4__* pret = DataTransfer::GetPointer<S_oooS_r4r4__>(env, luaret);
    S_oooS_r4r4__ ret = pret ? *pret : S_oooS_r4r4__ {};
        
    return ret;
        
static struct S_ossi4i4i4i4o_ b_S_ossi4i4i4i4o_S_ossi4i4i4i4o_(void* target, struct S_ossi4i4i4i4o_ p1, MethodInfo* method) {
    // PLog("Running b_S_ossi4i4i4i4o_S_ossi4i4i4i4o_");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        DataTransfer::CopyValueType(env, p1, TIp1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal struct
    S_ossi4i4i4i4o_* pret = DataTransfer::GetPointer<S_ossi4i4i4i4o_>(env, luaret);
    S_ossi4i4i4i4o_ ret = pret ? *pret : S_ossi4i4i4i4o_ {};
        
    return ret;
        
static struct S_r4r4_ b_S_r4r4_(void* target, MethodInfo* method) {
    // PLog("Running b_S_r4r4_");

    auto TIret = GetReturnType(method);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value *argv = nullptr;    auto luaRet = pesapi_call_function(env, func, nullptr, 0, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal struct
    S_r4r4_* pret = DataTransfer::GetPointer<S_r4r4_>(env, luaret);
    S_r4r4_ ret = pret ? *pret : S_r4r4_ {};
        
    return ret;
        
static struct S_r4r4_ b_S_r4r4_S_r4r4_(void* target, struct S_r4r4_ p1, MethodInfo* method) {
    // PLog("Running b_S_r4r4_S_r4r4_");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        DataTransfer::CopyValueType(env, p1, TIp1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal struct
    S_r4r4_* pret = DataTransfer::GetPointer<S_r4r4_>(env, luaret);
    S_r4r4_ ret = pret ? *pret : S_r4r4_ {};
        
    return ret;
        
static struct S_r4r4_ b_S_r4r4_o(void* target, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_S_r4r4_o");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        CSRefToLuaValue(env, TIp1, p1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal struct
    S_r4r4_* pret = DataTransfer::GetPointer<S_r4r4_>(env, luaret);
    S_r4r4_ ret = pret ? *pret : S_r4r4_ {};
        
    return ret;
        
static struct S_r4r4r4_ b_S_r4r4r4_S_r4r4r4_(void* target, struct S_r4r4r4_ p1, MethodInfo* method) {
    // PLog("Running b_S_r4r4r4_S_r4r4r4_");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        DataTransfer::CopyValueType(env, p1, TIp1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal struct
    S_r4r4r4_* pret = DataTransfer::GetPointer<S_r4r4r4_>(env, luaret);
    S_r4r4r4_ ret = pret ? *pret : S_r4r4r4_ {};
        
    return ret;
        
static struct S_r4r4r4_ b_S_r4r4r4_o(void* target, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_S_r4r4r4_o");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        CSRefToLuaValue(env, TIp1, p1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal struct
    S_r4r4r4_* pret = DataTransfer::GetPointer<S_r4r4r4_>(env, luaret);
    S_r4r4r4_ ret = pret ? *pret : S_r4r4r4_ {};
        
    return ret;
        
static struct S_r4r4r4r4_ b_S_r4r4r4r4_o(void* target, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_S_r4r4r4r4_o");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        CSRefToLuaValue(env, TIp1, p1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal struct
    S_r4r4r4r4_* pret = DataTransfer::GetPointer<S_r4r4r4r4_>(env, luaret);
    S_r4r4r4r4_ ret = pret ? *pret : S_r4r4r4r4_ {};
        
    return ret;
        
static struct S_u8_ b_S_u8_o(void* target, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_S_u8_o");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        CSRefToLuaValue(env, TIp1, p1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal struct
    S_u8_* pret = DataTransfer::GetPointer<S_u8_>(env, luaret);
    S_u8_ ret = pret ? *pret : S_u8_ {};
        
    return ret;
        
static struct S_u8i4i4p_ b_S_u8i4i4p_oS_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_i4S_r4r4r4_r4r4i4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_i4i4i4S_u8_u4u8u1i4i4_S_S_Pvi4i4i4S_pi4i4_i4__p(void* target, Il2CppObject* p1, struct S_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_i4S_r4r4r4_r4r4i4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_i4i4i4S_u8_u4u8u1i4i4_ p2, struct S_S_Pvi4i4i4S_pi4i4_i4__ p3, void* p4, MethodInfo* method) {
    // PLog("Running b_S_u8i4i4p_oS_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_i4S_r4r4r4_r4r4i4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_i4i4i4S_u8_u4u8u1i4i4_S_S_Pvi4i4i4S_pi4i4_i4__p");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
                
    auto Tip4 = GetParameterType(method, 4);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[4]{
        CSRefToLuaValue(env, TIp1, p1),
            DataTransfer::CopyValueType(env, p2, TIp2),
            DataTransfer::CopyValueType(env, p3, TIp3),
            pesapi_create_binary(env, p4, 0)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 4, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal struct
    S_u8i4i4p_* pret = DataTransfer::GetPointer<S_u8i4i4p_>(env, luaret);
    S_u8i4i4p_ ret = pret ? *pret : S_u8i4i4p_ {};
        
    return ret;
        
static bool b_b(void* target, MethodInfo* method) {
    // PLog("Running b_b");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value *argv = nullptr;    auto luaRet = pesapi_call_function(env, func, nullptr, 0, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(env, luaret);        
        
    return ret;
        
static bool b_bO(void* target, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_bO");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        CSRefToLuaValue(env, TIp1, p1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(env, luaret);        
        
    return ret;
        
static bool b_bOooi4(void* target, Il2CppObject* p1, Il2CppObject* p2, Il2CppObject* p3, int32_t p4, MethodInfo* method) {
    // PLog("Running b_bOooi4");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[4]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2),
            CSRefToLuaValue(env, TIp3, p3),
            converter::Converter<int32_t>::toScript(env, p4)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 4, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(env, luaret);        
        
    return ret;
        
static bool b_bPS_PS_u4u4S_i8_S_i8_S_i8_S_i8_i8i8i4u4u4c_S_S_p_i4_S_S_p_i4_S_S_p_i4__(void* target, void* p1, MethodInfo* method) {
    // PLog("Running b_bPS_PS_u4u4S_i8_S_i8_S_i8_S_i8_i8i8i4u4u4c_S_S_p_i4_S_S_p_i4_S_S_p_i4__");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        // unknown ret signature: PS_PS_u4u4S_i8_S_i8_S_i8_S_i8_i8i8i4u4u4c_S_S_p_i4_S_S_p_i4_S_S_p_i4__
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(env, luaret);        
        
    return ret;
        
static bool b_bPS_S_S_p_i4_i4cob_i4Pi4(void* target, void* p1, int32_t p2, void* p3, MethodInfo* method) {
    // PLog("Running b_bPS_S_S_p_i4_i4cob_i4Pi4");
                    
    auto Tip1 = GetParameterType(method, 1);
                            
    auto Tip3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        // unknown ret signature: PS_S_S_p_i4_i4cob_,
            converter::Converter<int32_t>::toScript(env, p2),
            // unknown ret signature: Pi4
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(env, luaret);        
        
    return ret;
        
static bool b_bPs(void* target, void* p1, MethodInfo* method) {
    // PLog("Running b_bPs");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        // unknown ret signature: Ps
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(env, luaret);        
        
    return ret;
        
static bool b_bPsPo(void* target, void* p1, void* p2, MethodInfo* method) {
    // PLog("Running b_bPsPo");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        // unknown ret signature: Ps,
            // unknown ret signature: Po
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(env, luaret);        
        
    return ret;
        
static bool b_bS_S_S_u8u8_S_u4u4u4u4_i4_oo_oo(void* target, struct S_S_S_u8u8_S_u4u4u4u4_i4_oo_ p1, Il2CppObject* p2, Il2CppObject* p3, MethodInfo* method) {
    // PLog("Running b_bS_S_S_u8u8_S_u4u4u4u4_i4_oo_oo");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        DataTransfer::CopyValueType(env, p1, TIp1),
            CSRefToLuaValue(env, TIp2, p2),
            CSRefToLuaValue(env, TIp3, p3)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(env, luaret);        
        
    return ret;
        
static bool b_bS_i4ss_(void* target, struct S_i4ss_ p1, MethodInfo* method) {
    // PLog("Running b_bS_i4ss_");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        DataTransfer::CopyValueType(env, p1, TIp1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(env, luaret);        
        
    return ret;
        
static bool b_bS_r4r4_PS_r4r4r4_PS_r4r4r4_(void* target, struct S_r4r4_ p1, void* p2, void* p3, MethodInfo* method) {
    // PLog("Running b_bS_r4r4_PS_r4r4r4_PS_r4r4r4_");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        DataTransfer::CopyValueType(env, p1, TIp1),
            // unknown ret signature: PS_r4r4r4_,
            // unknown ret signature: PS_r4r4r4_
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(env, luaret);        
        
    return ret;
        
static bool b_bb(void* target, bool p1, MethodInfo* method) {
    // PLog("Running b_bb");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        converter::Converter<bool>::toScript(env, p1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(env, luaret);        
        
    return ret;
        
static bool b_bi4(void* target, int32_t p1, MethodInfo* method) {
    // PLog("Running b_bi4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        converter::Converter<int32_t>::toScript(env, p1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(env, luaret);        
        
    return ret;
        
static bool b_bo(void* target, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_bo");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        CSRefToLuaValue(env, TIp1, p1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(env, luaret);        
        
    return ret;
        
static bool b_boO(void* target, Il2CppObject* p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_boO");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(env, luaret);        
        
    return ret;
        
static bool b_boPi4(void* target, Il2CppObject* p1, void* p2, MethodInfo* method) {
    // PLog("Running b_boPi4");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        CSRefToLuaValue(env, TIp1, p1),
            // unknown ret signature: Pi4
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(env, luaret);        
        
    return ret;
        
static bool b_boPsPs(void* target, Il2CppObject* p1, void* p2, void* p3, MethodInfo* method) {
    // PLog("Running b_boPsPs");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        CSRefToLuaValue(env, TIp1, p1),
            // unknown ret signature: Ps,
            // unknown ret signature: Ps
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(env, luaret);        
        
    return ret;
        
static bool b_boi4(void* target, Il2CppObject* p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_boi4");
                    
    auto Tip1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        CSRefToLuaValue(env, TIp1, p1),
            converter::Converter<int32_t>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(env, luaret);        
        
    return ret;
        
static bool b_boi4O(void* target, Il2CppObject* p1, int32_t p2, Il2CppObject* p3, MethodInfo* method) {
    // PLog("Running b_boi4O");
                    
    auto Tip1 = GetParameterType(method, 1);
                            
    auto Tip3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        CSRefToLuaValue(env, TIp1, p1),
            converter::Converter<int32_t>::toScript(env, p2),
            CSRefToLuaValue(env, TIp3, p3)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(env, luaret);        
        
    return ret;
        
static bool b_boo(void* target, Il2CppObject* p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_boo");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(env, luaret);        
        
    return ret;
        
static bool b_booi4(void* target, Il2CppObject* p1, Il2CppObject* p2, int32_t p3, MethodInfo* method) {
    // PLog("Running b_booi4");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2),
            converter::Converter<int32_t>::toScript(env, p3)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(env, luaret);        
        
    return ret;
        
static bool b_booso(void* target, Il2CppObject* p1, Il2CppObject* p2, Il2CppString* p3, Il2CppObject* p4, MethodInfo* method) {
    // PLog("Running b_booso");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
                
    auto Tip4 = GetParameterType(method, 4);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[4]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2),
            converter::Converter<Il2CppString*>::toScript(env, p3),
            CSRefToLuaValue(env, TIp4, p4)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 4, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(env, luaret);        
        
    return ret;
        
static bool b_bopoOi4(void* target, Il2CppObject* p1, void* p2, Il2CppObject* p3, Il2CppObject* p4, int32_t p5, MethodInfo* method) {
    // PLog("Running b_bopoOi4");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
                
    auto Tip4 = GetParameterType(method, 4);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[5]{
        CSRefToLuaValue(env, TIp1, p1),
            pesapi_create_binary(env, p2, 0),
            CSRefToLuaValue(env, TIp3, p3),
            CSRefToLuaValue(env, TIp4, p4),
            converter::Converter<int32_t>::toScript(env, p5)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 5, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(env, luaret);        
        
    return ret;
        
static bool b_bopoOi4i4(void* target, Il2CppObject* p1, void* p2, Il2CppObject* p3, Il2CppObject* p4, int32_t p5, int32_t p6, MethodInfo* method) {
    // PLog("Running b_bopoOi4i4");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
                
    auto Tip4 = GetParameterType(method, 4);
                        
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[6]{
        CSRefToLuaValue(env, TIp1, p1),
            pesapi_create_binary(env, p2, 0),
            CSRefToLuaValue(env, TIp3, p3),
            CSRefToLuaValue(env, TIp4, p4),
            converter::Converter<int32_t>::toScript(env, p5),
            converter::Converter<int32_t>::toScript(env, p6)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 6, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(env, luaret);        
        
    return ret;
        
static bool b_boso(void* target, Il2CppObject* p1, Il2CppString* p2, Il2CppObject* p3, MethodInfo* method) {
    // PLog("Running b_boso");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        CSRefToLuaValue(env, TIp1, p1),
            converter::Converter<Il2CppString*>::toScript(env, p2),
            CSRefToLuaValue(env, TIp3, p3)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(env, luaret);        
        
    return ret;
        
static bool b_bososo(void* target, Il2CppObject* p1, Il2CppString* p2, Il2CppObject* p3, Il2CppString* p4, Il2CppObject* p5, MethodInfo* method) {
    // PLog("Running b_bososo");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
                
    auto Tip4 = GetParameterType(method, 4);
                
    auto Tip5 = GetParameterType(method, 5);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[5]{
        CSRefToLuaValue(env, TIp1, p1),
            converter::Converter<Il2CppString*>::toScript(env, p2),
            CSRefToLuaValue(env, TIp3, p3),
            converter::Converter<Il2CppString*>::toScript(env, p4),
            CSRefToLuaValue(env, TIp5, p5)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 5, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(env, luaret);        
        
    return ret;
        
static bool b_bosso(void* target, Il2CppObject* p1, Il2CppString* p2, Il2CppString* p3, Il2CppObject* p4, MethodInfo* method) {
    // PLog("Running b_bosso");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
                
    auto Tip4 = GetParameterType(method, 4);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[4]{
        CSRefToLuaValue(env, TIp1, p1),
            converter::Converter<Il2CppString*>::toScript(env, p2),
            converter::Converter<Il2CppString*>::toScript(env, p3),
            CSRefToLuaValue(env, TIp4, p4)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 4, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(env, luaret);        
        
    return ret;
        
static bool b_bosss(void* target, Il2CppObject* p1, Il2CppString* p2, Il2CppString* p3, Il2CppString* p4, MethodInfo* method) {
    // PLog("Running b_bosss");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
                
    auto Tip4 = GetParameterType(method, 4);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[4]{
        CSRefToLuaValue(env, TIp1, p1),
            converter::Converter<Il2CppString*>::toScript(env, p2),
            converter::Converter<Il2CppString*>::toScript(env, p3),
            converter::Converter<Il2CppString*>::toScript(env, p4)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 4, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(env, luaret);        
        
    return ret;
        
static bool b_bossss(void* target, Il2CppObject* p1, Il2CppString* p2, Il2CppString* p3, Il2CppString* p4, Il2CppString* p5, MethodInfo* method) {
    // PLog("Running b_bossss");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
                
    auto Tip4 = GetParameterType(method, 4);
                
    auto Tip5 = GetParameterType(method, 5);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[5]{
        CSRefToLuaValue(env, TIp1, p1),
            converter::Converter<Il2CppString*>::toScript(env, p2),
            converter::Converter<Il2CppString*>::toScript(env, p3),
            converter::Converter<Il2CppString*>::toScript(env, p4),
            converter::Converter<Il2CppString*>::toScript(env, p5)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 5, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(env, luaret);        
        
    return ret;
        
static bool b_bpi4(void* target, void* p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_bpi4");
                    
    auto Tip1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        pesapi_create_binary(env, p1, 0),
            converter::Converter<int32_t>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(env, luaret);        
        
    return ret;
        
static bool b_bs(void* target, Il2CppString* p1, MethodInfo* method) {
    // PLog("Running b_bs");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        converter::Converter<Il2CppString*>::toScript(env, p1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(env, luaret);        
        
    return ret;
        
static bool b_bsO(void* target, Il2CppString* p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_bsO");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        converter::Converter<Il2CppString*>::toScript(env, p1),
            CSRefToLuaValue(env, TIp2, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(env, luaret);        
        
    return ret;
        
static bool b_bsbi4s(void* target, Il2CppString* p1, bool p2, int32_t p3, Il2CppString* p4, MethodInfo* method) {
    // PLog("Running b_bsbi4s");
                    
    auto Tip1 = GetParameterType(method, 1);
                                        
    auto Tip4 = GetParameterType(method, 4);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[4]{
        converter::Converter<Il2CppString*>::toScript(env, p1),
            converter::Converter<bool>::toScript(env, p2),
            converter::Converter<int32_t>::toScript(env, p3),
            converter::Converter<Il2CppString*>::toScript(env, p4)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 4, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(env, luaret);        
        
    return ret;
        
static bool b_bsooi4(void* target, Il2CppString* p1, Il2CppObject* p2, Il2CppObject* p3, int32_t p4, MethodInfo* method) {
    // PLog("Running b_bsooi4");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[4]{
        converter::Converter<Il2CppString*>::toScript(env, p1),
            CSRefToLuaValue(env, TIp2, p2),
            CSRefToLuaValue(env, TIp3, p3),
            converter::Converter<int32_t>::toScript(env, p4)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 4, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(env, luaret);        
        
    return ret;
        
static bool b_bu8i8su8i8s(void* target, uint64_t p1, int64_t p2, Il2CppString* p3, uint64_t p4, int64_t p5, Il2CppString* p6, MethodInfo* method) {
    // PLog("Running b_bu8i8su8i8s");
                                            
    auto Tip3 = GetParameterType(method, 3);
                                        
    auto Tip6 = GetParameterType(method, 6);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[6]{
        converter::Converter<uint64_t>::toScript(env, p1),
            converter::Converter<int64_t>::toScript(env, p2),
            converter::Converter<Il2CppString*>::toScript(env, p3),
            converter::Converter<uint64_t>::toScript(env, p4),
            converter::Converter<int64_t>::toScript(env, p5),
            converter::Converter<Il2CppString*>::toScript(env, p6)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 6, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(env, luaret);        
        
    return ret;
        
static bool b_bu8ssi4(void* target, uint64_t p1, Il2CppString* p2, Il2CppString* p3, int32_t p4, MethodInfo* method) {
    // PLog("Running b_bu8ssi4");
                                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[4]{
        converter::Converter<uint64_t>::toScript(env, p1),
            converter::Converter<Il2CppString*>::toScript(env, p2),
            converter::Converter<Il2CppString*>::toScript(env, p3),
            converter::Converter<int32_t>::toScript(env, p4)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 4, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(env, luaret);        
        
    return ret;
        
static Il2CppChar b_cpi4(void* target, void* p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_cpi4");
                    
    auto Tip1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        pesapi_create_binary(env, p1, 0),
            converter::Converter<int32_t>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    Il2CppChar ret = converter::Converter<Il2CppChar>::toCpp(env, luaret);        
        
    return ret;
        
static Il2CppChar b_csi4c(void* target, Il2CppString* p1, int32_t p2, Il2CppChar p3, MethodInfo* method) {
    // PLog("Running b_csi4c");
                    
    auto Tip1 = GetParameterType(method, 1);
                        
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        converter::Converter<Il2CppString*>::toScript(env, p1),
            converter::Converter<int32_t>::toScript(env, p2),
            converter::Converter<Il2CppChar>::toScript(env, p3)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    Il2CppChar ret = converter::Converter<Il2CppChar>::toCpp(env, luaret);        
        
    return ret;
        
static int8_t b_i1pi4(void* target, void* p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_i1pi4");
                    
    auto Tip1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        pesapi_create_binary(env, p1, 0),
            converter::Converter<int32_t>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    int8_t ret = converter::Converter<int8_t>::toCpp(env, luaret);        
        
    return ret;
        
static int16_t b_i2os(void* target, Il2CppObject* p1, Il2CppString* p2, MethodInfo* method) {
    // PLog("Running b_i2os");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        CSRefToLuaValue(env, TIp1, p1),
            converter::Converter<Il2CppString*>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    int16_t ret = converter::Converter<int16_t>::toCpp(env, luaret);        
        
    return ret;
        
static int16_t b_i2pi4(void* target, void* p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_i2pi4");
                    
    auto Tip1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        pesapi_create_binary(env, p1, 0),
            converter::Converter<int32_t>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    int16_t ret = converter::Converter<int16_t>::toCpp(env, luaret);        
        
    return ret;
        
static int32_t b_i4(void* target, MethodInfo* method) {
    // PLog("Running b_i4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value *argv = nullptr;    auto luaRet = pesapi_call_function(env, func, nullptr, 0, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    int32_t ret = converter::Converter<int32_t>::toCpp(env, luaret);        
        
    return ret;
        
static int32_t b_i4S_S_oooObS_r4r4r4r4_bb_S_oooObS_r4r4r4r4_bb_b_(void* target, struct S_S_oooObS_r4r4r4r4_bb_S_oooObS_r4r4r4r4_bb_b_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_S_oooObS_r4r4r4r4_bb_S_oooObS_r4r4r4r4_bb_b_");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        DataTransfer::CopyValueType(env, p1, TIp1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    int32_t ret = converter::Converter<int32_t>::toCpp(env, luaret);        
        
    return ret;
        
static int32_t b_i4S_oo_o(void* target, struct S_oo_ p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_i4S_oo_o");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        DataTransfer::CopyValueType(env, p1, TIp1),
            CSRefToLuaValue(env, TIp2, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    int32_t ret = converter::Converter<int32_t>::toCpp(env, luaret);        
        
    return ret;
        
static int32_t b_i4i4(void* target, int32_t p1, MethodInfo* method) {
    // PLog("Running b_i4i4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        converter::Converter<int32_t>::toScript(env, p1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    int32_t ret = converter::Converter<int32_t>::toCpp(env, luaret);        
        
    return ret;
        
static int32_t b_i4i4i4(void* target, int32_t p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_i4i4i4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        converter::Converter<int32_t>::toScript(env, p1),
            converter::Converter<int32_t>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    int32_t ret = converter::Converter<int32_t>::toCpp(env, luaret);        
        
    return ret;
        
static int32_t b_i4i4i4ob(void* target, int32_t p1, int32_t p2, Il2CppObject* p3, bool p4, MethodInfo* method) {
    // PLog("Running b_i4i4i4ob");
                                            
    auto Tip3 = GetParameterType(method, 3);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[4]{
        converter::Converter<int32_t>::toScript(env, p1),
            converter::Converter<int32_t>::toScript(env, p2),
            CSRefToLuaValue(env, TIp3, p3),
            converter::Converter<bool>::toScript(env, p4)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 4, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    int32_t ret = converter::Converter<int32_t>::toCpp(env, luaret);        
        
    return ret;
        
static int32_t b_i4i4sb(void* target, int32_t p1, Il2CppString* p2, bool p3, MethodInfo* method) {
    // PLog("Running b_i4i4sb");
                                
    auto Tip2 = GetParameterType(method, 2);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        converter::Converter<int32_t>::toScript(env, p1),
            converter::Converter<Il2CppString*>::toScript(env, p2),
            converter::Converter<bool>::toScript(env, p3)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    int32_t ret = converter::Converter<int32_t>::toCpp(env, luaret);        
        
    return ret;
        
static int32_t b_i4o(void* target, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_i4o");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        CSRefToLuaValue(env, TIp1, p1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    int32_t ret = converter::Converter<int32_t>::toCpp(env, luaret);        
        
    return ret;
        
static int32_t b_i4oS_r4r4r4_S_r4r4_ob(void* target, Il2CppObject* p1, struct S_r4r4r4_ p2, struct S_r4r4_ p3, Il2CppObject* p4, bool p5, MethodInfo* method) {
    // PLog("Running b_i4oS_r4r4r4_S_r4r4_ob");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
                
    auto Tip4 = GetParameterType(method, 4);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[5]{
        CSRefToLuaValue(env, TIp1, p1),
            DataTransfer::CopyValueType(env, p2, TIp2),
            DataTransfer::CopyValueType(env, p3, TIp3),
            CSRefToLuaValue(env, TIp4, p4),
            converter::Converter<bool>::toScript(env, p5)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 5, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    int32_t ret = converter::Converter<int32_t>::toCpp(env, luaret);        
        
    return ret;
        
static int32_t b_i4ob(void* target, Il2CppObject* p1, bool p2, MethodInfo* method) {
    // PLog("Running b_i4ob");
                    
    auto Tip1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        CSRefToLuaValue(env, TIp1, p1),
            converter::Converter<bool>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    int32_t ret = converter::Converter<int32_t>::toCpp(env, luaret);        
        
    return ret;
        
static int32_t b_i4oo(void* target, Il2CppObject* p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_i4oo");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    int32_t ret = converter::Converter<int32_t>::toCpp(env, luaret);        
        
    return ret;
        
static int32_t b_i4os(void* target, Il2CppObject* p1, Il2CppString* p2, MethodInfo* method) {
    // PLog("Running b_i4os");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        CSRefToLuaValue(env, TIp1, p1),
            converter::Converter<Il2CppString*>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    int32_t ret = converter::Converter<int32_t>::toCpp(env, luaret);        
        
    return ret;
        
static int32_t b_i4p(void* target, void* p1, MethodInfo* method) {
    // PLog("Running b_i4p");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        pesapi_create_binary(env, p1, 0)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    int32_t ret = converter::Converter<int32_t>::toCpp(env, luaret);        
        
    return ret;
        
static int32_t b_i4pi4(void* target, void* p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_i4pi4");
                    
    auto Tip1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        pesapi_create_binary(env, p1, 0),
            converter::Converter<int32_t>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    int32_t ret = converter::Converter<int32_t>::toCpp(env, luaret);        
        
    return ret;
        
static int32_t b_i4pp(void* target, void* p1, void* p2, MethodInfo* method) {
    // PLog("Running b_i4pp");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        pesapi_create_binary(env, p1, 0),
            pesapi_create_binary(env, p2, 0)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    int32_t ret = converter::Converter<int32_t>::toCpp(env, luaret);        
        
    return ret;
        
static int32_t b_i4ppi4(void* target, void* p1, void* p2, int32_t p3, MethodInfo* method) {
    // PLog("Running b_i4ppi4");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        pesapi_create_binary(env, p1, 0),
            pesapi_create_binary(env, p2, 0),
            converter::Converter<int32_t>::toScript(env, p3)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    int32_t ret = converter::Converter<int32_t>::toCpp(env, luaret);        
        
    return ret;
        
static int32_t b_i4ppi4Pi4(void* target, void* p1, void* p2, int32_t p3, void* p4, MethodInfo* method) {
    // PLog("Running b_i4ppi4Pi4");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                            
    auto Tip4 = GetParameterType(method, 4);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[4]{
        pesapi_create_binary(env, p1, 0),
            pesapi_create_binary(env, p2, 0),
            converter::Converter<int32_t>::toScript(env, p3),
            // unknown ret signature: Pi4
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 4, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    int32_t ret = converter::Converter<int32_t>::toCpp(env, luaret);        
        
    return ret;
        
static int32_t b_i4r4(void* target, float p1, MethodInfo* method) {
    // PLog("Running b_i4r4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        converter::Converter<float>::toScript(env, p1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    int32_t ret = converter::Converter<int32_t>::toCpp(env, luaret);        
        
    return ret;
        
static int32_t b_i4u1r4(void* target, uint8_t p1, float p2, MethodInfo* method) {
    // PLog("Running b_i4u1r4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        converter::Converter<uint8_t>::toScript(env, p1),
            converter::Converter<float>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    int32_t ret = converter::Converter<int32_t>::toCpp(env, luaret);        
        
    return ret;
        
static int64_t b_i8o(void* target, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_i8o");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        CSRefToLuaValue(env, TIp1, p1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    int64_t ret = converter::Converter<int64_t>::toCpp(env, luaret);        
        
    return ret;
        
static int64_t b_i8os(void* target, Il2CppObject* p1, Il2CppString* p2, MethodInfo* method) {
    // PLog("Running b_i8os");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        CSRefToLuaValue(env, TIp1, p1),
            converter::Converter<Il2CppString*>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    int64_t ret = converter::Converter<int64_t>::toCpp(env, luaret);        
        
    return ret;
        
static int64_t b_i8pi4(void* target, void* p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_i8pi4");
                    
    auto Tip1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        pesapi_create_binary(env, p1, 0),
            converter::Converter<int32_t>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    int64_t ret = converter::Converter<int64_t>::toCpp(env, luaret);        
        
    return ret;
        
static int64_t b_i8pi4i8(void* target, void* p1, int32_t p2, int64_t p3, MethodInfo* method) {
    // PLog("Running b_i8pi4i8");
                    
    auto Tip1 = GetParameterType(method, 1);
                        
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        pesapi_create_binary(env, p1, 0),
            converter::Converter<int32_t>::toScript(env, p2),
            converter::Converter<int64_t>::toScript(env, p3)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    int64_t ret = converter::Converter<int64_t>::toCpp(env, luaret);        
        
    return ret;
        
static Il2CppObject* b_o(void* target, MethodInfo* method) {
    // PLog("Running b_o");

    auto TIret = GetReturnType(method);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value *argv = nullptr;    auto luaRet = pesapi_call_function(env, func, nullptr, 0, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_oO(void* target, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_oO");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        CSRefToLuaValue(env, TIp1, p1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_oOo(void* target, Il2CppObject* p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_oOo");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_oOs(void* target, Il2CppObject* p1, Il2CppString* p2, MethodInfo* method) {
    // PLog("Running b_oOs");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        CSRefToLuaValue(env, TIp1, p1),
            converter::Converter<Il2CppString*>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_oOsooo(void* target, Il2CppObject* p1, Il2CppString* p2, Il2CppObject* p3, Il2CppObject* p4, Il2CppObject* p5, MethodInfo* method) {
    // PLog("Running b_oOsooo");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
                
    auto Tip4 = GetParameterType(method, 4);
                
    auto Tip5 = GetParameterType(method, 5);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[5]{
        CSRefToLuaValue(env, TIp1, p1),
            converter::Converter<Il2CppString*>::toScript(env, p2),
            CSRefToLuaValue(env, TIp3, p3),
            CSRefToLuaValue(env, TIp4, p4),
            CSRefToLuaValue(env, TIp5, p5)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 5, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_oPS_PS_u4u4S_i8_S_i8_S_i8_S_i8_i8i8i4u4u4c_S_S_p_i4_S_S_p_i4_S_S_p_i4__(void* target, void* p1, MethodInfo* method) {
    // PLog("Running b_oPS_PS_u4u4S_i8_S_i8_S_i8_S_i8_i8i8i4u4u4c_S_S_p_i4_S_S_p_i4_S_S_p_i4__");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        // unknown ret signature: PS_PS_u4u4S_i8_S_i8_S_i8_S_i8_i8i8i4u4u4c_S_S_p_i4_S_S_p_i4_S_S_p_i4__
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_oPo(void* target, void* p1, MethodInfo* method) {
    // PLog("Running b_oPo");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        // unknown ret signature: Po
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_oPs(void* target, void* p1, MethodInfo* method) {
    // PLog("Running b_oPs");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        // unknown ret signature: Ps
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_oS_oo_o(void* target, struct S_oo_ p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_oS_oo_o");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        DataTransfer::CopyValueType(env, p1, TIp1),
            CSRefToLuaValue(env, TIp2, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_oi4(void* target, int32_t p1, MethodInfo* method) {
    // PLog("Running b_oi4");

    auto TIret = GetReturnType(method);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        converter::Converter<int32_t>::toScript(env, p1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_oi4Vs(void* target, int32_t p1, void* p2, MethodInfo* method) {
    // PLog("Running b_oi4Vs");

    auto TIret = GetReturnType(method);
                                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        converter::Converter<int32_t>::toScript(env, p1),
            // unknown ret signature: Vs
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_oi4o(void* target, int32_t p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_oi4o");

    auto TIret = GetReturnType(method);
                                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        converter::Converter<int32_t>::toScript(env, p1),
            CSRefToLuaValue(env, TIp2, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_oi4oo(void* target, int32_t p1, Il2CppObject* p2, Il2CppObject* p3, MethodInfo* method) {
    // PLog("Running b_oi4oo");

    auto TIret = GetReturnType(method);
                                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        converter::Converter<int32_t>::toScript(env, p1),
            CSRefToLuaValue(env, TIp2, p2),
            CSRefToLuaValue(env, TIp3, p3)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_oi8oo(void* target, int64_t p1, Il2CppObject* p2, Il2CppObject* p3, MethodInfo* method) {
    // PLog("Running b_oi8oo");

    auto TIret = GetReturnType(method);
                                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        converter::Converter<int64_t>::toScript(env, p1),
            CSRefToLuaValue(env, TIp2, p2),
            CSRefToLuaValue(env, TIp3, p3)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_oo(void* target, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_oo");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        CSRefToLuaValue(env, TIp1, p1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_ooO(void* target, Il2CppObject* p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_ooO");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_ooS_ooo_(void* target, Il2CppObject* p1, struct S_ooo_ p2, MethodInfo* method) {
    // PLog("Running b_ooS_ooo_");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        CSRefToLuaValue(env, TIp1, p1),
            DataTransfer::CopyValueType(env, p2, TIp2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_oobb(void* target, Il2CppObject* p1, bool p2, bool p3, MethodInfo* method) {
    // PLog("Running b_oobb");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
                        
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        CSRefToLuaValue(env, TIp1, p1),
            converter::Converter<bool>::toScript(env, p2),
            converter::Converter<bool>::toScript(env, p3)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_ooi4(void* target, Il2CppObject* p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_ooi4");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        CSRefToLuaValue(env, TIp1, p1),
            converter::Converter<int32_t>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_ooi4S_r4r4_ooPi4(void* target, Il2CppObject* p1, int32_t p2, struct S_r4r4_ p3, Il2CppObject* p4, Il2CppObject* p5, void* p6, MethodInfo* method) {
    // PLog("Running b_ooi4S_r4r4_ooPi4");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
                            
    auto Tip3 = GetParameterType(method, 3);
                
    auto Tip4 = GetParameterType(method, 4);
                
    auto Tip5 = GetParameterType(method, 5);
                
    auto Tip6 = GetParameterType(method, 6);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[6]{
        CSRefToLuaValue(env, TIp1, p1),
            converter::Converter<int32_t>::toScript(env, p2),
            DataTransfer::CopyValueType(env, p3, TIp3),
            CSRefToLuaValue(env, TIp4, p4),
            CSRefToLuaValue(env, TIp5, p5),
            // unknown ret signature: Pi4
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 6, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_ooo(void* target, Il2CppObject* p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_ooo");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_oooO(void* target, Il2CppObject* p1, Il2CppObject* p2, Il2CppObject* p3, MethodInfo* method) {
    // PLog("Running b_oooO");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2),
            CSRefToLuaValue(env, TIp3, p3)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_oooS_r4r4_i4(void* target, Il2CppObject* p1, Il2CppObject* p2, struct S_r4r4_ p3, int32_t p4, MethodInfo* method) {
    // PLog("Running b_oooS_r4r4_i4");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[4]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2),
            DataTransfer::CopyValueType(env, p3, TIp3),
            converter::Converter<int32_t>::toScript(env, p4)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 4, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_oooi4(void* target, Il2CppObject* p1, Il2CppObject* p2, int32_t p3, MethodInfo* method) {
    // PLog("Running b_oooi4");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2),
            converter::Converter<int32_t>::toScript(env, p3)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_oooi8o(void* target, Il2CppObject* p1, Il2CppObject* p2, int64_t p3, Il2CppObject* p4, MethodInfo* method) {
    // PLog("Running b_oooi8o");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                            
    auto Tip4 = GetParameterType(method, 4);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[4]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2),
            converter::Converter<int64_t>::toScript(env, p3),
            CSRefToLuaValue(env, TIp4, p4)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 4, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_oooo(void* target, Il2CppObject* p1, Il2CppObject* p2, Il2CppObject* p3, MethodInfo* method) {
    // PLog("Running b_oooo");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2),
            CSRefToLuaValue(env, TIp3, p3)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_ooooO(void* target, Il2CppObject* p1, Il2CppObject* p2, Il2CppObject* p3, Il2CppObject* p4, MethodInfo* method) {
    // PLog("Running b_ooooO");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
                
    auto Tip4 = GetParameterType(method, 4);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[4]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2),
            CSRefToLuaValue(env, TIp3, p3),
            CSRefToLuaValue(env, TIp4, p4)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 4, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_ooooo(void* target, Il2CppObject* p1, Il2CppObject* p2, Il2CppObject* p3, Il2CppObject* p4, MethodInfo* method) {
    // PLog("Running b_ooooo");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
                
    auto Tip4 = GetParameterType(method, 4);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[4]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2),
            CSRefToLuaValue(env, TIp3, p3),
            CSRefToLuaValue(env, TIp4, p4)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 4, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_oooooO(void* target, Il2CppObject* p1, Il2CppObject* p2, Il2CppObject* p3, Il2CppObject* p4, Il2CppObject* p5, MethodInfo* method) {
    // PLog("Running b_oooooO");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
                
    auto Tip4 = GetParameterType(method, 4);
                
    auto Tip5 = GetParameterType(method, 5);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[5]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2),
            CSRefToLuaValue(env, TIp3, p3),
            CSRefToLuaValue(env, TIp4, p4),
            CSRefToLuaValue(env, TIp5, p5)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 5, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_oooooo(void* target, Il2CppObject* p1, Il2CppObject* p2, Il2CppObject* p3, Il2CppObject* p4, Il2CppObject* p5, MethodInfo* method) {
    // PLog("Running b_oooooo");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
                
    auto Tip4 = GetParameterType(method, 4);
                
    auto Tip5 = GetParameterType(method, 5);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[5]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2),
            CSRefToLuaValue(env, TIp3, p3),
            CSRefToLuaValue(env, TIp4, p4),
            CSRefToLuaValue(env, TIp5, p5)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 5, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_ooooooo(void* target, Il2CppObject* p1, Il2CppObject* p2, Il2CppObject* p3, Il2CppObject* p4, Il2CppObject* p5, Il2CppObject* p6, MethodInfo* method) {
    // PLog("Running b_ooooooo");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
                
    auto Tip4 = GetParameterType(method, 4);
                
    auto Tip5 = GetParameterType(method, 5);
                
    auto Tip6 = GetParameterType(method, 6);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[6]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2),
            CSRefToLuaValue(env, TIp3, p3),
            CSRefToLuaValue(env, TIp4, p4),
            CSRefToLuaValue(env, TIp5, p5),
            CSRefToLuaValue(env, TIp6, p6)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 6, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_oooooooo(void* target, Il2CppObject* p1, Il2CppObject* p2, Il2CppObject* p3, Il2CppObject* p4, Il2CppObject* p5, Il2CppObject* p6, Il2CppObject* p7, MethodInfo* method) {
    // PLog("Running b_oooooooo");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
                
    auto Tip4 = GetParameterType(method, 4);
                
    auto Tip5 = GetParameterType(method, 5);
                
    auto Tip6 = GetParameterType(method, 6);
                
    auto Tip7 = GetParameterType(method, 7);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[7]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2),
            CSRefToLuaValue(env, TIp3, p3),
            CSRefToLuaValue(env, TIp4, p4),
            CSRefToLuaValue(env, TIp5, p5),
            CSRefToLuaValue(env, TIp6, p6),
            CSRefToLuaValue(env, TIp7, p7)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 7, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_ooooooooo(void* target, Il2CppObject* p1, Il2CppObject* p2, Il2CppObject* p3, Il2CppObject* p4, Il2CppObject* p5, Il2CppObject* p6, Il2CppObject* p7, Il2CppObject* p8, MethodInfo* method) {
    // PLog("Running b_ooooooooo");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
                
    auto Tip4 = GetParameterType(method, 4);
                
    auto Tip5 = GetParameterType(method, 5);
                
    auto Tip6 = GetParameterType(method, 6);
                
    auto Tip7 = GetParameterType(method, 7);
                
    auto Tip8 = GetParameterType(method, 8);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[8]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2),
            CSRefToLuaValue(env, TIp3, p3),
            CSRefToLuaValue(env, TIp4, p4),
            CSRefToLuaValue(env, TIp5, p5),
            CSRefToLuaValue(env, TIp6, p6),
            CSRefToLuaValue(env, TIp7, p7),
            CSRefToLuaValue(env, TIp8, p8)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 8, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_oooooooooo(void* target, Il2CppObject* p1, Il2CppObject* p2, Il2CppObject* p3, Il2CppObject* p4, Il2CppObject* p5, Il2CppObject* p6, Il2CppObject* p7, Il2CppObject* p8, Il2CppObject* p9, MethodInfo* method) {
    // PLog("Running b_oooooooooo");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
                
    auto Tip4 = GetParameterType(method, 4);
                
    auto Tip5 = GetParameterType(method, 5);
                
    auto Tip6 = GetParameterType(method, 6);
                
    auto Tip7 = GetParameterType(method, 7);
                
    auto Tip8 = GetParameterType(method, 8);
                
    auto Tip9 = GetParameterType(method, 9);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[9]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2),
            CSRefToLuaValue(env, TIp3, p3),
            CSRefToLuaValue(env, TIp4, p4),
            CSRefToLuaValue(env, TIp5, p5),
            CSRefToLuaValue(env, TIp6, p6),
            CSRefToLuaValue(env, TIp7, p7),
            CSRefToLuaValue(env, TIp8, p8),
            CSRefToLuaValue(env, TIp9, p9)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 9, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_ooooooooooo(void* target, Il2CppObject* p1, Il2CppObject* p2, Il2CppObject* p3, Il2CppObject* p4, Il2CppObject* p5, Il2CppObject* p6, Il2CppObject* p7, Il2CppObject* p8, Il2CppObject* p9, Il2CppObject* p10, MethodInfo* method) {
    // PLog("Running b_ooooooooooo");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
                
    auto Tip4 = GetParameterType(method, 4);
                
    auto Tip5 = GetParameterType(method, 5);
                
    auto Tip6 = GetParameterType(method, 6);
                
    auto Tip7 = GetParameterType(method, 7);
                
    auto Tip8 = GetParameterType(method, 8);
                
    auto Tip9 = GetParameterType(method, 9);
                
    auto Tip10 = GetParameterType(method, 10);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[10]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2),
            CSRefToLuaValue(env, TIp3, p3),
            CSRefToLuaValue(env, TIp4, p4),
            CSRefToLuaValue(env, TIp5, p5),
            CSRefToLuaValue(env, TIp6, p6),
            CSRefToLuaValue(env, TIp7, p7),
            CSRefToLuaValue(env, TIp8, p8),
            CSRefToLuaValue(env, TIp9, p9),
            CSRefToLuaValue(env, TIp10, p10)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 10, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_oooooooooooo(void* target, Il2CppObject* p1, Il2CppObject* p2, Il2CppObject* p3, Il2CppObject* p4, Il2CppObject* p5, Il2CppObject* p6, Il2CppObject* p7, Il2CppObject* p8, Il2CppObject* p9, Il2CppObject* p10, Il2CppObject* p11, MethodInfo* method) {
    // PLog("Running b_oooooooooooo");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
                
    auto Tip4 = GetParameterType(method, 4);
                
    auto Tip5 = GetParameterType(method, 5);
                
    auto Tip6 = GetParameterType(method, 6);
                
    auto Tip7 = GetParameterType(method, 7);
                
    auto Tip8 = GetParameterType(method, 8);
                
    auto Tip9 = GetParameterType(method, 9);
                
    auto Tip10 = GetParameterType(method, 10);
                
    auto Tip11 = GetParameterType(method, 11);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[11]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2),
            CSRefToLuaValue(env, TIp3, p3),
            CSRefToLuaValue(env, TIp4, p4),
            CSRefToLuaValue(env, TIp5, p5),
            CSRefToLuaValue(env, TIp6, p6),
            CSRefToLuaValue(env, TIp7, p7),
            CSRefToLuaValue(env, TIp8, p8),
            CSRefToLuaValue(env, TIp9, p9),
            CSRefToLuaValue(env, TIp10, p10),
            CSRefToLuaValue(env, TIp11, p11)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 11, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_ooooooooooooo(void* target, Il2CppObject* p1, Il2CppObject* p2, Il2CppObject* p3, Il2CppObject* p4, Il2CppObject* p5, Il2CppObject* p6, Il2CppObject* p7, Il2CppObject* p8, Il2CppObject* p9, Il2CppObject* p10, Il2CppObject* p11, Il2CppObject* p12, MethodInfo* method) {
    // PLog("Running b_ooooooooooooo");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
                
    auto Tip4 = GetParameterType(method, 4);
                
    auto Tip5 = GetParameterType(method, 5);
                
    auto Tip6 = GetParameterType(method, 6);
                
    auto Tip7 = GetParameterType(method, 7);
                
    auto Tip8 = GetParameterType(method, 8);
                
    auto Tip9 = GetParameterType(method, 9);
                
    auto Tip10 = GetParameterType(method, 10);
                
    auto Tip11 = GetParameterType(method, 11);
                
    auto Tip12 = GetParameterType(method, 12);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[12]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2),
            CSRefToLuaValue(env, TIp3, p3),
            CSRefToLuaValue(env, TIp4, p4),
            CSRefToLuaValue(env, TIp5, p5),
            CSRefToLuaValue(env, TIp6, p6),
            CSRefToLuaValue(env, TIp7, p7),
            CSRefToLuaValue(env, TIp8, p8),
            CSRefToLuaValue(env, TIp9, p9),
            CSRefToLuaValue(env, TIp10, p10),
            CSRefToLuaValue(env, TIp11, p11),
            CSRefToLuaValue(env, TIp12, p12)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 12, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_oooooooooooooo(void* target, Il2CppObject* p1, Il2CppObject* p2, Il2CppObject* p3, Il2CppObject* p4, Il2CppObject* p5, Il2CppObject* p6, Il2CppObject* p7, Il2CppObject* p8, Il2CppObject* p9, Il2CppObject* p10, Il2CppObject* p11, Il2CppObject* p12, Il2CppObject* p13, MethodInfo* method) {
    // PLog("Running b_oooooooooooooo");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
                
    auto Tip4 = GetParameterType(method, 4);
                
    auto Tip5 = GetParameterType(method, 5);
                
    auto Tip6 = GetParameterType(method, 6);
                
    auto Tip7 = GetParameterType(method, 7);
                
    auto Tip8 = GetParameterType(method, 8);
                
    auto Tip9 = GetParameterType(method, 9);
                
    auto Tip10 = GetParameterType(method, 10);
                
    auto Tip11 = GetParameterType(method, 11);
                
    auto Tip12 = GetParameterType(method, 12);
                
    auto Tip13 = GetParameterType(method, 13);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[13]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2),
            CSRefToLuaValue(env, TIp3, p3),
            CSRefToLuaValue(env, TIp4, p4),
            CSRefToLuaValue(env, TIp5, p5),
            CSRefToLuaValue(env, TIp6, p6),
            CSRefToLuaValue(env, TIp7, p7),
            CSRefToLuaValue(env, TIp8, p8),
            CSRefToLuaValue(env, TIp9, p9),
            CSRefToLuaValue(env, TIp10, p10),
            CSRefToLuaValue(env, TIp11, p11),
            CSRefToLuaValue(env, TIp12, p12),
            CSRefToLuaValue(env, TIp13, p13)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 13, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_ooooooooooooooo(void* target, Il2CppObject* p1, Il2CppObject* p2, Il2CppObject* p3, Il2CppObject* p4, Il2CppObject* p5, Il2CppObject* p6, Il2CppObject* p7, Il2CppObject* p8, Il2CppObject* p9, Il2CppObject* p10, Il2CppObject* p11, Il2CppObject* p12, Il2CppObject* p13, Il2CppObject* p14, MethodInfo* method) {
    // PLog("Running b_ooooooooooooooo");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
                
    auto Tip4 = GetParameterType(method, 4);
                
    auto Tip5 = GetParameterType(method, 5);
                
    auto Tip6 = GetParameterType(method, 6);
                
    auto Tip7 = GetParameterType(method, 7);
                
    auto Tip8 = GetParameterType(method, 8);
                
    auto Tip9 = GetParameterType(method, 9);
                
    auto Tip10 = GetParameterType(method, 10);
                
    auto Tip11 = GetParameterType(method, 11);
                
    auto Tip12 = GetParameterType(method, 12);
                
    auto Tip13 = GetParameterType(method, 13);
                
    auto Tip14 = GetParameterType(method, 14);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[14]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2),
            CSRefToLuaValue(env, TIp3, p3),
            CSRefToLuaValue(env, TIp4, p4),
            CSRefToLuaValue(env, TIp5, p5),
            CSRefToLuaValue(env, TIp6, p6),
            CSRefToLuaValue(env, TIp7, p7),
            CSRefToLuaValue(env, TIp8, p8),
            CSRefToLuaValue(env, TIp9, p9),
            CSRefToLuaValue(env, TIp10, p10),
            CSRefToLuaValue(env, TIp11, p11),
            CSRefToLuaValue(env, TIp12, p12),
            CSRefToLuaValue(env, TIp13, p13),
            CSRefToLuaValue(env, TIp14, p14)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 14, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_oooooooooooooooo(void* target, Il2CppObject* p1, Il2CppObject* p2, Il2CppObject* p3, Il2CppObject* p4, Il2CppObject* p5, Il2CppObject* p6, Il2CppObject* p7, Il2CppObject* p8, Il2CppObject* p9, Il2CppObject* p10, Il2CppObject* p11, Il2CppObject* p12, Il2CppObject* p13, Il2CppObject* p14, Il2CppObject* p15, MethodInfo* method) {
    // PLog("Running b_oooooooooooooooo");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
                
    auto Tip4 = GetParameterType(method, 4);
                
    auto Tip5 = GetParameterType(method, 5);
                
    auto Tip6 = GetParameterType(method, 6);
                
    auto Tip7 = GetParameterType(method, 7);
                
    auto Tip8 = GetParameterType(method, 8);
                
    auto Tip9 = GetParameterType(method, 9);
                
    auto Tip10 = GetParameterType(method, 10);
                
    auto Tip11 = GetParameterType(method, 11);
                
    auto Tip12 = GetParameterType(method, 12);
                
    auto Tip13 = GetParameterType(method, 13);
                
    auto Tip14 = GetParameterType(method, 14);
                
    auto Tip15 = GetParameterType(method, 15);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[15]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2),
            CSRefToLuaValue(env, TIp3, p3),
            CSRefToLuaValue(env, TIp4, p4),
            CSRefToLuaValue(env, TIp5, p5),
            CSRefToLuaValue(env, TIp6, p6),
            CSRefToLuaValue(env, TIp7, p7),
            CSRefToLuaValue(env, TIp8, p8),
            CSRefToLuaValue(env, TIp9, p9),
            CSRefToLuaValue(env, TIp10, p10),
            CSRefToLuaValue(env, TIp11, p11),
            CSRefToLuaValue(env, TIp12, p12),
            CSRefToLuaValue(env, TIp13, p13),
            CSRefToLuaValue(env, TIp14, p14),
            CSRefToLuaValue(env, TIp15, p15)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 15, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_ooooooooooooooooo(void* target, Il2CppObject* p1, Il2CppObject* p2, Il2CppObject* p3, Il2CppObject* p4, Il2CppObject* p5, Il2CppObject* p6, Il2CppObject* p7, Il2CppObject* p8, Il2CppObject* p9, Il2CppObject* p10, Il2CppObject* p11, Il2CppObject* p12, Il2CppObject* p13, Il2CppObject* p14, Il2CppObject* p15, Il2CppObject* p16, MethodInfo* method) {
    // PLog("Running b_ooooooooooooooooo");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
                
    auto Tip4 = GetParameterType(method, 4);
                
    auto Tip5 = GetParameterType(method, 5);
                
    auto Tip6 = GetParameterType(method, 6);
                
    auto Tip7 = GetParameterType(method, 7);
                
    auto Tip8 = GetParameterType(method, 8);
                
    auto Tip9 = GetParameterType(method, 9);
                
    auto Tip10 = GetParameterType(method, 10);
                
    auto Tip11 = GetParameterType(method, 11);
                
    auto Tip12 = GetParameterType(method, 12);
                
    auto Tip13 = GetParameterType(method, 13);
                
    auto Tip14 = GetParameterType(method, 14);
                
    auto Tip15 = GetParameterType(method, 15);
                
    auto Tip16 = GetParameterType(method, 16);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[16]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2),
            CSRefToLuaValue(env, TIp3, p3),
            CSRefToLuaValue(env, TIp4, p4),
            CSRefToLuaValue(env, TIp5, p5),
            CSRefToLuaValue(env, TIp6, p6),
            CSRefToLuaValue(env, TIp7, p7),
            CSRefToLuaValue(env, TIp8, p8),
            CSRefToLuaValue(env, TIp9, p9),
            CSRefToLuaValue(env, TIp10, p10),
            CSRefToLuaValue(env, TIp11, p11),
            CSRefToLuaValue(env, TIp12, p12),
            CSRefToLuaValue(env, TIp13, p13),
            CSRefToLuaValue(env, TIp14, p14),
            CSRefToLuaValue(env, TIp15, p15),
            CSRefToLuaValue(env, TIp16, p16)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 16, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_ooor4(void* target, Il2CppObject* p1, Il2CppObject* p2, float p3, MethodInfo* method) {
    // PLog("Running b_ooor4");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2),
            converter::Converter<float>::toScript(env, p3)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_oos(void* target, Il2CppObject* p1, Il2CppString* p2, MethodInfo* method) {
    // PLog("Running b_oos");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        CSRefToLuaValue(env, TIp1, p1),
            converter::Converter<Il2CppString*>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_oosb(void* target, Il2CppObject* p1, Il2CppString* p2, bool p3, MethodInfo* method) {
    // PLog("Running b_oosb");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        CSRefToLuaValue(env, TIp1, p1),
            converter::Converter<Il2CppString*>::toScript(env, p2),
            converter::Converter<bool>::toScript(env, p3)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_ooso(void* target, Il2CppObject* p1, Il2CppString* p2, Il2CppObject* p3, MethodInfo* method) {
    // PLog("Running b_ooso");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        CSRefToLuaValue(env, TIp1, p1),
            converter::Converter<Il2CppString*>::toScript(env, p2),
            CSRefToLuaValue(env, TIp3, p3)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_oou4u4(void* target, Il2CppObject* p1, uint32_t p2, uint32_t p3, MethodInfo* method) {
    // PLog("Running b_oou4u4");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
                        
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        CSRefToLuaValue(env, TIp1, p1),
            converter::Converter<uint32_t>::toScript(env, p2),
            converter::Converter<uint32_t>::toScript(env, p3)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_opi4(void* target, void* p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_opi4");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        pesapi_create_binary(env, p1, 0),
            converter::Converter<int32_t>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_or4(void* target, float p1, MethodInfo* method) {
    // PLog("Running b_or4");

    auto TIret = GetReturnType(method);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        converter::Converter<float>::toScript(env, p1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_os(void* target, Il2CppString* p1, MethodInfo* method) {
    // PLog("Running b_os");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        converter::Converter<Il2CppString*>::toScript(env, p1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_osooo(void* target, Il2CppString* p1, Il2CppObject* p2, Il2CppObject* p3, Il2CppObject* p4, MethodInfo* method) {
    // PLog("Running b_osooo");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
                
    auto Tip4 = GetParameterType(method, 4);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[4]{
        converter::Converter<Il2CppString*>::toScript(env, p1),
            CSRefToLuaValue(env, TIp2, p2),
            CSRefToLuaValue(env, TIp3, p3),
            CSRefToLuaValue(env, TIp4, p4)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 4, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static Il2CppObject* b_oss(void* target, Il2CppString* p1, Il2CppString* p2, MethodInfo* method) {
    // PLog("Running b_oss");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        converter::Converter<Il2CppString*>::toScript(env, p1),
            converter::Converter<Il2CppString*>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValToCSRef(TIret, env luaret);
        
    return ret;
        
static void* b_pp(void* target, void* p1, MethodInfo* method) {
    // PLog("Running b_pp");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        pesapi_create_binary(env, p1, 0)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    void* ret = DataTransfer::GetPointer<void>(env, luaret);        
        
    return ret;
        
static float b_r4S_r4r4r4_(void* target, struct S_r4r4r4_ p1, MethodInfo* method) {
    // PLog("Running b_r4S_r4r4r4_");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        DataTransfer::CopyValueType(env, p1, TIp1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    float ret = converter::Converter<float>::toCpp(env, luaret);        
        
    return ret;
        
static float b_r4i4(void* target, int32_t p1, MethodInfo* method) {
    // PLog("Running b_r4i4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        converter::Converter<int32_t>::toScript(env, p1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    float ret = converter::Converter<float>::toCpp(env, luaret);        
        
    return ret;
        
static float b_r4o(void* target, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_r4o");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        CSRefToLuaValue(env, TIp1, p1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    float ret = converter::Converter<float>::toCpp(env, luaret);        
        
    return ret;
        
static float b_r4os(void* target, Il2CppObject* p1, Il2CppString* p2, MethodInfo* method) {
    // PLog("Running b_r4os");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        CSRefToLuaValue(env, TIp1, p1),
            converter::Converter<Il2CppString*>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    float ret = converter::Converter<float>::toCpp(env, luaret);        
        
    return ret;
        
static float b_r4pi4(void* target, void* p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_r4pi4");
                    
    auto Tip1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        pesapi_create_binary(env, p1, 0),
            converter::Converter<int32_t>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    float ret = converter::Converter<float>::toCpp(env, luaret);        
        
    return ret;
        
static float b_r4r4(void* target, float p1, MethodInfo* method) {
    // PLog("Running b_r4r4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        converter::Converter<float>::toScript(env, p1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    float ret = converter::Converter<float>::toCpp(env, luaret);        
        
    return ret;
        
static float b_r4r4PS_r4r4r4r4_(void* target, float p1, void* p2, MethodInfo* method) {
    // PLog("Running b_r4r4PS_r4r4r4r4_");
                                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        converter::Converter<float>::toScript(env, p1),
            // unknown ret signature: PS_r4r4r4r4_
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    float ret = converter::Converter<float>::toCpp(env, luaret);        
        
    return ret;
        
static double b_r8(void* target, MethodInfo* method) {
    // PLog("Running b_r8");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value *argv = nullptr;    auto luaRet = pesapi_call_function(env, func, nullptr, 0, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    double ret = converter::Converter<double>::toCpp(env, luaret);        
        
    return ret;
        
static double b_r8o(void* target, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_r8o");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        CSRefToLuaValue(env, TIp1, p1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    double ret = converter::Converter<double>::toCpp(env, luaret);        
        
    return ret;
        
static double b_r8os(void* target, Il2CppObject* p1, Il2CppString* p2, MethodInfo* method) {
    // PLog("Running b_r8os");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        CSRefToLuaValue(env, TIp1, p1),
            converter::Converter<Il2CppString*>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    double ret = converter::Converter<double>::toCpp(env, luaret);        
        
    return ret;
        
static double b_r8pi4(void* target, void* p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_r8pi4");
                    
    auto Tip1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        pesapi_create_binary(env, p1, 0),
            converter::Converter<int32_t>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    double ret = converter::Converter<double>::toCpp(env, luaret);        
        
    return ret;
        
static Il2CppString* b_s(void* target, MethodInfo* method) {
    // PLog("Running b_s");

    auto TIret = GetReturnType(method);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value *argv = nullptr;    auto luaRet = pesapi_call_function(env, func, nullptr, 0, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal s
    Il2CppString* ret = converter::Converter<Il2CppString*>::toCpp(env, luaret);
    return ret;
        
static Il2CppString* b_sO(void* target, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_sO");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        CSRefToLuaValue(env, TIp1, p1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal s
    Il2CppString* ret = converter::Converter<Il2CppString*>::toCpp(env, luaret);
    return ret;
        
static Il2CppString* b_sS_oS_i4_osS_i4u1u1u1u1__(void* target, struct S_oS_i4_osS_i4u1u1u1u1__ p1, MethodInfo* method) {
    // PLog("Running b_sS_oS_i4_osS_i4u1u1u1u1__");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        DataTransfer::CopyValueType(env, p1, TIp1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal s
    Il2CppString* ret = converter::Converter<Il2CppString*>::toCpp(env, luaret);
    return ret;
        
static Il2CppString* b_sS_oo_o(void* target, struct S_oo_ p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_sS_oo_o");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        DataTransfer::CopyValueType(env, p1, TIp1),
            CSRefToLuaValue(env, TIp2, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal s
    Il2CppString* ret = converter::Converter<Il2CppString*>::toCpp(env, luaret);
    return ret;
        
static Il2CppString* b_si4(void* target, int32_t p1, MethodInfo* method) {
    // PLog("Running b_si4");

    auto TIret = GetReturnType(method);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        converter::Converter<int32_t>::toScript(env, p1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal s
    Il2CppString* ret = converter::Converter<Il2CppString*>::toCpp(env, luaret);
    return ret;
        
static Il2CppString* b_so(void* target, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_so");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        CSRefToLuaValue(env, TIp1, p1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal s
    Il2CppString* ret = converter::Converter<Il2CppString*>::toCpp(env, luaret);
    return ret;
        
static Il2CppString* b_soo(void* target, Il2CppObject* p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_soo");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal s
    Il2CppString* ret = converter::Converter<Il2CppString*>::toCpp(env, luaret);
    return ret;
        
static Il2CppString* b_sos(void* target, Il2CppObject* p1, Il2CppString* p2, MethodInfo* method) {
    // PLog("Running b_sos");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        CSRefToLuaValue(env, TIp1, p1),
            converter::Converter<Il2CppString*>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal s
    Il2CppString* ret = converter::Converter<Il2CppString*>::toCpp(env, luaret);
    return ret;
        
static Il2CppString* b_spi4(void* target, void* p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_spi4");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        pesapi_create_binary(env, p1, 0),
            converter::Converter<int32_t>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal s
    Il2CppString* ret = converter::Converter<Il2CppString*>::toCpp(env, luaret);
    return ret;
        
static Il2CppString* b_ss(void* target, Il2CppString* p1, MethodInfo* method) {
    // PLog("Running b_ss");

    auto TIret = GetReturnType(method);
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        converter::Converter<Il2CppString*>::toScript(env, p1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
          // LuaValToCSVal s
    Il2CppString* ret = converter::Converter<Il2CppString*>::toCpp(env, luaret);
    return ret;
        
static uint8_t b_u1pi4(void* target, void* p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_u1pi4");
                    
    auto Tip1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        pesapi_create_binary(env, p1, 0),
            converter::Converter<int32_t>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    uint8_t ret = converter::Converter<uint8_t>::toCpp(env, luaret);        
        
    return ret;
        
static uint16_t b_u2os(void* target, Il2CppObject* p1, Il2CppString* p2, MethodInfo* method) {
    // PLog("Running b_u2os");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        CSRefToLuaValue(env, TIp1, p1),
            converter::Converter<Il2CppString*>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    uint16_t ret = converter::Converter<uint16_t>::toCpp(env, luaret);        
        
    return ret;
        
static uint16_t b_u2pi4(void* target, void* p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_u2pi4");
                    
    auto Tip1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        pesapi_create_binary(env, p1, 0),
            converter::Converter<int32_t>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    uint16_t ret = converter::Converter<uint16_t>::toCpp(env, luaret);        
        
    return ret;
        
static uint32_t b_u4os(void* target, Il2CppObject* p1, Il2CppString* p2, MethodInfo* method) {
    // PLog("Running b_u4os");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        CSRefToLuaValue(env, TIp1, p1),
            converter::Converter<Il2CppString*>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    uint32_t ret = converter::Converter<uint32_t>::toCpp(env, luaret);        
        
    return ret;
        
static uint32_t b_u4pi4(void* target, void* p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_u4pi4");
                    
    auto Tip1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        pesapi_create_binary(env, p1, 0),
            converter::Converter<int32_t>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    uint32_t ret = converter::Converter<uint32_t>::toCpp(env, luaret);        
        
    return ret;
        
static uint32_t b_u4u4pu4(void* target, uint32_t p1, void* p2, uint32_t p3, MethodInfo* method) {
    // PLog("Running b_u4u4pu4");
                                
    auto Tip2 = GetParameterType(method, 2);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        converter::Converter<uint32_t>::toScript(env, p1),
            pesapi_create_binary(env, p2, 0),
            converter::Converter<uint32_t>::toScript(env, p3)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    uint32_t ret = converter::Converter<uint32_t>::toCpp(env, luaret);        
        
    return ret;
        
static uint64_t b_u8os(void* target, Il2CppObject* p1, Il2CppString* p2, MethodInfo* method) {
    // PLog("Running b_u8os");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        CSRefToLuaValue(env, TIp1, p1),
            converter::Converter<Il2CppString*>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    uint64_t ret = converter::Converter<uint64_t>::toCpp(env, luaret);        
        
    return ret;
        
static uint64_t b_u8pi4(void* target, void* p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_u8pi4");
                    
    auto Tip1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
                return {};
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        pesapi_create_binary(env, p1, 0),
            converter::Converter<int32_t>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
            return {};
    }
      // LuaValToCSVal P any
    uint64_t ret = converter::Converter<uint64_t>::toCpp(env, luaret);        
        
    return ret;
        
static void b_v(void* target, MethodInfo* method) {
    // PLog("Running b_v");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value *argv = nullptr;    auto luaRet = pesapi_call_function(env, func, nullptr, 0, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vO(void* target, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_vO");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        CSRefToLuaValue(env, TIp1, p1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vOO(void* target, Il2CppObject* p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_vOO");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vOb(void* target, Il2CppObject* p1, bool p2, MethodInfo* method) {
    // PLog("Running b_vOb");
                    
    auto Tip1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        CSRefToLuaValue(env, TIp1, p1),
            converter::Converter<bool>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vOo(void* target, Il2CppObject* p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_vOo");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vOoi4(void* target, Il2CppObject* p1, Il2CppObject* p2, int32_t p3, MethodInfo* method) {
    // PLog("Running b_vOoi4");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2),
            converter::Converter<int32_t>::toScript(env, p3)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vPS_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4__(void* target, void* p1, MethodInfo* method) {
    // PLog("Running b_vPS_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4__");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        // unknown ret signature: PS_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4__
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vPS_i4_(void* target, void* p1, MethodInfo* method) {
    // PLog("Running b_vPS_i4_");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        // unknown ret signature: PS_i4_
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vPS_r4r4r4r4i4i4r4r4_(void* target, void* p1, MethodInfo* method) {
    // PLog("Running b_vPS_r4r4r4r4i4i4r4r4_");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        // unknown ret signature: PS_r4r4r4r4i4i4r4r4_
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vPS_si4i4_(void* target, void* p1, MethodInfo* method) {
    // PLog("Running b_vPS_si4i4_");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        // unknown ret signature: PS_si4i4_
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vPbPi4PsPi4(void* target, void* p1, void* p2, void* p3, void* p4, MethodInfo* method) {
    // PLog("Running b_vPbPi4PsPi4");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
                
    auto Tip4 = GetParameterType(method, 4);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[4]{
        // unknown ret signature: Pb,
            // unknown ret signature: Pi4,
            // unknown ret signature: Ps,
            // unknown ret signature: Pi4
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 4, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vPbPsPo(void* target, void* p1, void* p2, void* p3, MethodInfo* method) {
    // PLog("Running b_vPbPsPo");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        // unknown ret signature: Pb,
            // unknown ret signature: Ps,
            // unknown ret signature: Po
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vPbPsPoPi4(void* target, void* p1, void* p2, void* p3, void* p4, MethodInfo* method) {
    // PLog("Running b_vPbPsPoPi4");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
                
    auto Tip4 = GetParameterType(method, 4);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[4]{
        // unknown ret signature: Pb,
            // unknown ret signature: Ps,
            // unknown ret signature: Po,
            // unknown ret signature: Pi4
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 4, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vPbPsPoPo(void* target, void* p1, void* p2, void* p3, void* p4, MethodInfo* method) {
    // PLog("Running b_vPbPsPoPo");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
                
    auto Tip4 = GetParameterType(method, 4);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[4]{
        // unknown ret signature: Pb,
            // unknown ret signature: Ps,
            // unknown ret signature: Po,
            // unknown ret signature: Po
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 4, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vPi4i4Pb(void* target, void* p1, int32_t p2, void* p3, MethodInfo* method) {
    // PLog("Running b_vPi4i4Pb");
                    
    auto Tip1 = GetParameterType(method, 1);
                            
    auto Tip3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        // unknown ret signature: Pi4,
            converter::Converter<int32_t>::toScript(env, p2),
            // unknown ret signature: Pb
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vPoo(void* target, void* p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_vPoo");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        // unknown ret signature: Po,
            CSRefToLuaValue(env, TIp2, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_Oi4_(void* target, struct S_Oi4_ p1, MethodInfo* method) {
    // PLog("Running b_vS_Oi4_");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        DataTransfer::CopyValueType(env, p1, TIp1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_Pvi4i4i4S_pi4i4_i4_(void* target, struct S_Pvi4i4i4S_pi4i4_i4_ p1, MethodInfo* method) {
    // PLog("Running b_vS_Pvi4i4i4S_pi4i4_i4_");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        DataTransfer::CopyValueType(env, p1, TIp1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_S_p_i4_o(void* target, struct S_S_p_i4_ p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_vS_S_p_i4_o");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        DataTransfer::CopyValueType(env, p1, TIp1),
            CSRefToLuaValue(env, TIp2, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_S_r4r4_oi4_(void* target, struct S_S_r4r4_oi4_ p1, MethodInfo* method) {
    // PLog("Running b_vS_S_r4r4_oi4_");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        DataTransfer::CopyValueType(env, p1, TIp1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_S_u8u8_ooi4i4u8S_r4r4r4_S_r4r4r4r4_S_r4r4r4__(void* target, struct S_S_u8u8_ooi4i4u8S_r4r4r4_S_r4r4r4r4_S_r4r4r4__ p1, MethodInfo* method) {
    // PLog("Running b_vS_S_u8u8_ooi4i4u8S_r4r4r4_S_r4r4r4r4_S_r4r4r4__");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        DataTransfer::CopyValueType(env, p1, TIp1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS__(void* target, struct S__ p1, MethodInfo* method) {
    // PLog("Running b_vS__");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        DataTransfer::CopyValueType(env, p1, TIp1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_i4S_r4r4_i4_(void* target, struct S_i4S_r4r4_i4_ p1, MethodInfo* method) {
    // PLog("Running b_vS_i4S_r4r4_i4_");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        DataTransfer::CopyValueType(env, p1, TIp1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_i4_(void* target, struct S_i4_ p1, MethodInfo* method) {
    // PLog("Running b_vS_i4_");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        DataTransfer::CopyValueType(env, p1, TIp1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_i4_S_Pvi4S_pi4i4__(void* target, struct S_i4_ p1, struct S_Pvi4S_pi4i4__ p2, MethodInfo* method) {
    // PLog("Running b_vS_i4_S_Pvi4S_pi4i4__");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        DataTransfer::CopyValueType(env, p1, TIp1),
            DataTransfer::CopyValueType(env, p2, TIp2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_i4_S_Pvi4i4i4S_pi4i4_i4_(void* target, struct S_i4_ p1, struct S_Pvi4i4i4S_pi4i4_i4_ p2, MethodInfo* method) {
    // PLog("Running b_vS_i4_S_Pvi4i4i4S_pi4i4_i4_");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        DataTransfer::CopyValueType(env, p1, TIp1),
            DataTransfer::CopyValueType(env, p2, TIp2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_i4_S_i4_(void* target, struct S_i4_ p1, struct S_i4_ p2, MethodInfo* method) {
    // PLog("Running b_vS_i4_S_i4_");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        DataTransfer::CopyValueType(env, p1, TIp1),
            DataTransfer::CopyValueType(env, p2, TIp2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_i4_b(void* target, struct S_i4_ p1, bool p2, MethodInfo* method) {
    // PLog("Running b_vS_i4_b");
                    
    auto Tip1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        DataTransfer::CopyValueType(env, p1, TIp1),
            converter::Converter<bool>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_i4_i4(void* target, struct S_i4_ p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_vS_i4_i4");
                    
    auto Tip1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        DataTransfer::CopyValueType(env, p1, TIp1),
            converter::Converter<int32_t>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_i4_i4i4(void* target, struct S_i4_ p1, int32_t p2, int32_t p3, MethodInfo* method) {
    // PLog("Running b_vS_i4_i4i4");
                    
    auto Tip1 = GetParameterType(method, 1);
                        
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        DataTransfer::CopyValueType(env, p1, TIp1),
            converter::Converter<int32_t>::toScript(env, p2),
            converter::Converter<int32_t>::toScript(env, p3)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_i4_s(void* target, struct S_i4_ p1, Il2CppString* p2, MethodInfo* method) {
    // PLog("Running b_vS_i4_s");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        DataTransfer::CopyValueType(env, p1, TIp1),
            converter::Converter<Il2CppString*>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_i4b_(void* target, struct S_i4b_ p1, MethodInfo* method) {
    // PLog("Running b_vS_i4b_");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        DataTransfer::CopyValueType(env, p1, TIp1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_i4i4S_r4r4r4_S_r4r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_i4u8_(void* target, struct S_i4i4S_r4r4r4_S_r4r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_i4u8_ p1, MethodInfo* method) {
    // PLog("Running b_vS_i4i4S_r4r4r4_S_r4r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_i4u8_");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        DataTransfer::CopyValueType(env, p1, TIp1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_i4i4_(void* target, struct S_i4i4_ p1, MethodInfo* method) {
    // PLog("Running b_vS_i4i4_");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        DataTransfer::CopyValueType(env, p1, TIp1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_i4i4i4i4i4_(void* target, struct S_i4i4i4i4i4_ p1, MethodInfo* method) {
    // PLog("Running b_vS_i4i4i4i4i4_");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        DataTransfer::CopyValueType(env, p1, TIp1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_i4i4i4ssssssi4i4i4_(void* target, struct S_i4i4i4ssssssi4i4i4_ p1, MethodInfo* method) {
    // PLog("Running b_vS_i4i4i4ssssssi4i4i4_");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        DataTransfer::CopyValueType(env, p1, TIp1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_i4i8_(void* target, struct S_i4i8_ p1, MethodInfo* method) {
    // PLog("Running b_vS_i4i8_");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        DataTransfer::CopyValueType(env, p1, TIp1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_i4i8_o(void* target, struct S_i4i8_ p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_vS_i4i8_o");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        DataTransfer::CopyValueType(env, p1, TIp1),
            CSRefToLuaValue(env, TIp2, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_i4o_(void* target, struct S_i4o_ p1, MethodInfo* method) {
    // PLog("Running b_vS_i4o_");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        DataTransfer::CopyValueType(env, p1, TIp1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_i4osS_u8_S_i8__(void* target, struct S_i4osS_u8_S_i8__ p1, MethodInfo* method) {
    // PLog("Running b_vS_i4osS_u8_S_i8__");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        DataTransfer::CopyValueType(env, p1, TIp1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_i4ss_(void* target, struct S_i4ss_ p1, MethodInfo* method) {
    // PLog("Running b_vS_i4ss_");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        DataTransfer::CopyValueType(env, p1, TIp1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_i4u1u1_(void* target, struct S_i4u1u1_ p1, MethodInfo* method) {
    // PLog("Running b_vS_i4u1u1_");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        DataTransfer::CopyValueType(env, p1, TIp1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_i8i8_(void* target, struct S_i8i8_ p1, MethodInfo* method) {
    // PLog("Running b_vS_i8i8_");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        DataTransfer::CopyValueType(env, p1, TIp1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_oo_(void* target, struct S_oo_ p1, MethodInfo* method) {
    // PLog("Running b_vS_oo_");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        DataTransfer::CopyValueType(env, p1, TIp1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_oo_oN_bi4_(void* target, struct S_oo_ p1, Il2CppObject* p2, struct N_bi4_ p3, MethodInfo* method) {
    // PLog("Running b_vS_oo_oN_bi4_");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        DataTransfer::CopyValueType(env, p1, TIp1),
            CSRefToLuaValue(env, TIp2, p2),
            DataTransfer::CopyNullableValueType(env, p3, TIp3)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_oo_oi4(void* target, struct S_oo_ p1, Il2CppObject* p2, int32_t p3, MethodInfo* method) {
    // PLog("Running b_vS_oo_oi4");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        DataTransfer::CopyValueType(env, p1, TIp1),
            CSRefToLuaValue(env, TIp2, p2),
            converter::Converter<int32_t>::toScript(env, p3)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_oo_oo(void* target, struct S_oo_ p1, Il2CppObject* p2, Il2CppObject* p3, MethodInfo* method) {
    // PLog("Running b_vS_oo_oo");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        DataTransfer::CopyValueType(env, p1, TIp1),
            CSRefToLuaValue(env, TIp2, p2),
            CSRefToLuaValue(env, TIp3, p3)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_oo_os(void* target, struct S_oo_ p1, Il2CppObject* p2, Il2CppString* p3, MethodInfo* method) {
    // PLog("Running b_vS_oo_os");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        DataTransfer::CopyValueType(env, p1, TIp1),
            CSRefToLuaValue(env, TIp2, p2),
            converter::Converter<Il2CppString*>::toScript(env, p3)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_oob_(void* target, struct S_oob_ p1, MethodInfo* method) {
    // PLog("Running b_vS_oob_");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        DataTransfer::CopyValueType(env, p1, TIp1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_oooObS_r4r4r4r4_bb_(void* target, struct S_oooObS_r4r4r4r4_bb_ p1, MethodInfo* method) {
    // PLog("Running b_vS_oooObS_r4r4r4r4_bb_");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        DataTransfer::CopyValueType(env, p1, TIp1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_ooooo_(void* target, struct S_ooooo_ p1, MethodInfo* method) {
    // PLog("Running b_vS_ooooo_");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        DataTransfer::CopyValueType(env, p1, TIp1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_ossi4i4i4i4o_(void* target, struct S_ossi4i4i4i4o_ p1, MethodInfo* method) {
    // PLog("Running b_vS_ossi4i4i4i4o_");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        DataTransfer::CopyValueType(env, p1, TIp1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_pS_pi4i4__o(void* target, struct S_pS_pi4i4__ p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_vS_pS_pi4i4__o");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        DataTransfer::CopyValueType(env, p1, TIp1),
            CSRefToLuaValue(env, TIp2, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_pi4_(void* target, struct S_pi4_ p1, MethodInfo* method) {
    // PLog("Running b_vS_pi4_");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        DataTransfer::CopyValueType(env, p1, TIp1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_pu4_(void* target, struct S_pu4_ p1, MethodInfo* method) {
    // PLog("Running b_vS_pu4_");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        DataTransfer::CopyValueType(env, p1, TIp1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_r4r4_(void* target, struct S_r4r4_ p1, MethodInfo* method) {
    // PLog("Running b_vS_r4r4_");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        DataTransfer::CopyValueType(env, p1, TIp1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_r4r4r4_(void* target, struct S_r4r4r4_ p1, MethodInfo* method) {
    // PLog("Running b_vS_r4r4r4_");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        DataTransfer::CopyValueType(env, p1, TIp1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_r4r4r4r4_(void* target, struct S_r4r4r4r4_ p1, MethodInfo* method) {
    // PLog("Running b_vS_r4r4r4r4_");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        DataTransfer::CopyValueType(env, p1, TIp1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_r4r4r4r4_i4bb(void* target, struct S_r4r4r4r4_ p1, int32_t p2, bool p3, bool p4, MethodInfo* method) {
    // PLog("Running b_vS_r4r4r4r4_i4bb");
                    
    auto Tip1 = GetParameterType(method, 1);
                                    
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[4]{
        DataTransfer::CopyValueType(env, p1, TIp1),
            converter::Converter<int32_t>::toScript(env, p2),
            converter::Converter<bool>::toScript(env, p3),
            converter::Converter<bool>::toScript(env, p4)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 4, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_r4r4r4r4_o(void* target, struct S_r4r4r4r4_ p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_vS_r4r4r4r4_o");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        DataTransfer::CopyValueType(env, p1, TIp1),
            CSRefToLuaValue(env, TIp2, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_r4r4r4r4_oo(void* target, struct S_r4r4r4r4_ p1, Il2CppObject* p2, Il2CppObject* p3, MethodInfo* method) {
    // PLog("Running b_vS_r4r4r4r4_oo");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        DataTransfer::CopyValueType(env, p1, TIp1),
            CSRefToLuaValue(env, TIp2, p2),
            CSRefToLuaValue(env, TIp3, p3)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_sS_o_S_o__(void* target, struct S_sS_o_S_o__ p1, MethodInfo* method) {
    // PLog("Running b_vS_sS_o_S_o__");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        DataTransfer::CopyValueType(env, p1, TIp1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_so_(void* target, struct S_so_ p1, MethodInfo* method) {
    // PLog("Running b_vS_so_");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        DataTransfer::CopyValueType(env, p1, TIp1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_ss_(void* target, struct S_ss_ p1, MethodInfo* method) {
    // PLog("Running b_vS_ss_");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        DataTransfer::CopyValueType(env, p1, TIp1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_u8_(void* target, struct S_u8_ p1, MethodInfo* method) {
    // PLog("Running b_vS_u8_");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        DataTransfer::CopyValueType(env, p1, TIp1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vS_u8b_(void* target, struct S_u8b_ p1, MethodInfo* method) {
    // PLog("Running b_vS_u8b_");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        DataTransfer::CopyValueType(env, p1, TIp1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vb(void* target, bool p1, MethodInfo* method) {
    // PLog("Running b_vb");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        converter::Converter<bool>::toScript(env, p1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vbb(void* target, bool p1, bool p2, MethodInfo* method) {
    // PLog("Running b_vbb");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        converter::Converter<bool>::toScript(env, p1),
            converter::Converter<bool>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vbbi4(void* target, bool p1, bool p2, int32_t p3, MethodInfo* method) {
    // PLog("Running b_vbbi4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        converter::Converter<bool>::toScript(env, p1),
            converter::Converter<bool>::toScript(env, p2),
            converter::Converter<int32_t>::toScript(env, p3)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vbi4ss(void* target, bool p1, int32_t p2, Il2CppString* p3, Il2CppString* p4, MethodInfo* method) {
    // PLog("Running b_vbi4ss");
                                            
    auto Tip3 = GetParameterType(method, 3);
                
    auto Tip4 = GetParameterType(method, 4);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[4]{
        converter::Converter<bool>::toScript(env, p1),
            converter::Converter<int32_t>::toScript(env, p2),
            converter::Converter<Il2CppString*>::toScript(env, p3),
            converter::Converter<Il2CppString*>::toScript(env, p4)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 4, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vbs(void* target, bool p1, Il2CppString* p2, MethodInfo* method) {
    // PLog("Running b_vbs");
                                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        converter::Converter<bool>::toScript(env, p1),
            converter::Converter<Il2CppString*>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vi4(void* target, int32_t p1, MethodInfo* method) {
    // PLog("Running b_vi4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        converter::Converter<int32_t>::toScript(env, p1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vi4Pi4Pb(void* target, int32_t p1, void* p2, void* p3, MethodInfo* method) {
    // PLog("Running b_vi4Pi4Pb");
                                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        converter::Converter<int32_t>::toScript(env, p1),
            // unknown ret signature: Pi4,
            // unknown ret signature: Pb
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vi4S_r4r4r4_S_r4r4r4r4_r4i4(void* target, int32_t p1, struct S_r4r4r4_ p2, struct S_r4r4r4r4_ p3, float p4, int32_t p5, MethodInfo* method) {
    // PLog("Running b_vi4S_r4r4r4_S_r4r4r4r4_r4i4");
                                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
                        
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[5]{
        converter::Converter<int32_t>::toScript(env, p1),
            DataTransfer::CopyValueType(env, p2, TIp2),
            DataTransfer::CopyValueType(env, p3, TIp3),
            converter::Converter<float>::toScript(env, p4),
            converter::Converter<int32_t>::toScript(env, p5)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 5, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vi4S_r4r4r4r4_(void* target, int32_t p1, struct S_r4r4r4r4_ p2, MethodInfo* method) {
    // PLog("Running b_vi4S_r4r4r4r4_");
                                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        converter::Converter<int32_t>::toScript(env, p1),
            DataTransfer::CopyValueType(env, p2, TIp2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vi4i4(void* target, int32_t p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_vi4i4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        converter::Converter<int32_t>::toScript(env, p1),
            converter::Converter<int32_t>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vi4i8i8b(void* target, int32_t p1, int64_t p2, int64_t p3, bool p4, MethodInfo* method) {
    // PLog("Running b_vi4i8i8b");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[4]{
        converter::Converter<int32_t>::toScript(env, p1),
            converter::Converter<int64_t>::toScript(env, p2),
            converter::Converter<int64_t>::toScript(env, p3),
            converter::Converter<bool>::toScript(env, p4)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 4, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vi4o(void* target, int32_t p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_vi4o");
                                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        converter::Converter<int32_t>::toScript(env, p1),
            CSRefToLuaValue(env, TIp2, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vi4oi4(void* target, int32_t p1, Il2CppObject* p2, int32_t p3, MethodInfo* method) {
    // PLog("Running b_vi4oi4");
                                
    auto Tip2 = GetParameterType(method, 2);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        converter::Converter<int32_t>::toScript(env, p1),
            CSRefToLuaValue(env, TIp2, p2),
            converter::Converter<int32_t>::toScript(env, p3)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vi4r4(void* target, int32_t p1, float p2, MethodInfo* method) {
    // PLog("Running b_vi4r4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        converter::Converter<int32_t>::toScript(env, p1),
            converter::Converter<float>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vi4r8(void* target, int32_t p1, double p2, MethodInfo* method) {
    // PLog("Running b_vi4r8");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        converter::Converter<int32_t>::toScript(env, p1),
            converter::Converter<double>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vi4ss(void* target, int32_t p1, Il2CppString* p2, Il2CppString* p3, MethodInfo* method) {
    // PLog("Running b_vi4ss");
                                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        converter::Converter<int32_t>::toScript(env, p1),
            converter::Converter<Il2CppString*>::toScript(env, p2),
            converter::Converter<Il2CppString*>::toScript(env, p3)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vi8(void* target, int64_t p1, MethodInfo* method) {
    // PLog("Running b_vi8");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        converter::Converter<int64_t>::toScript(env, p1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vi8o(void* target, int64_t p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_vi8o");
                                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        converter::Converter<int64_t>::toScript(env, p1),
            CSRefToLuaValue(env, TIp2, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vo(void* target, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_vo");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        CSRefToLuaValue(env, TIp1, p1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_voO(void* target, Il2CppObject* p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_voO");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_voS_Oi4_(void* target, Il2CppObject* p1, struct S_Oi4_ p2, MethodInfo* method) {
    // PLog("Running b_voS_Oi4_");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        CSRefToLuaValue(env, TIp1, p1),
            DataTransfer::CopyValueType(env, p2, TIp2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_voS_Pvi4i4i4S_pi4i4_i4_(void* target, Il2CppObject* p1, struct S_Pvi4i4i4S_pi4i4_i4_ p2, MethodInfo* method) {
    // PLog("Running b_voS_Pvi4i4i4S_pi4i4_i4_");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        CSRefToLuaValue(env, TIp1, p1),
            DataTransfer::CopyValueType(env, p2, TIp2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_voS_i4_(void* target, Il2CppObject* p1, struct S_i4_ p2, MethodInfo* method) {
    // PLog("Running b_voS_i4_");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        CSRefToLuaValue(env, TIp1, p1),
            DataTransfer::CopyValueType(env, p2, TIp2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_voS_i4_ob(void* target, Il2CppObject* p1, struct S_i4_ p2, Il2CppObject* p3, bool p4, MethodInfo* method) {
    // PLog("Running b_voS_i4_ob");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[4]{
        CSRefToLuaValue(env, TIp1, p1),
            DataTransfer::CopyValueType(env, p2, TIp2),
            CSRefToLuaValue(env, TIp3, p3),
            converter::Converter<bool>::toScript(env, p4)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 4, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_voS_i4i4i4i4_b(void* target, Il2CppObject* p1, struct S_i4i4i4i4_ p2, bool p3, MethodInfo* method) {
    // PLog("Running b_voS_i4i4i4i4_b");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        CSRefToLuaValue(env, TIp1, p1),
            DataTransfer::CopyValueType(env, p2, TIp2),
            converter::Converter<bool>::toScript(env, p3)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_voS_oS_i4_osS_i4u1u1u1u1__(void* target, Il2CppObject* p1, struct S_oS_i4_osS_i4u1u1u1u1__ p2, MethodInfo* method) {
    // PLog("Running b_voS_oS_i4_osS_i4u1u1u1u1__");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        CSRefToLuaValue(env, TIp1, p1),
            DataTransfer::CopyValueType(env, p2, TIp2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_voS_r4r4_(void* target, Il2CppObject* p1, struct S_r4r4_ p2, MethodInfo* method) {
    // PLog("Running b_voS_r4r4_");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        CSRefToLuaValue(env, TIp1, p1),
            DataTransfer::CopyValueType(env, p2, TIp2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_voS_r4r4r4_(void* target, Il2CppObject* p1, struct S_r4r4r4_ p2, MethodInfo* method) {
    // PLog("Running b_voS_r4r4r4_");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        CSRefToLuaValue(env, TIp1, p1),
            DataTransfer::CopyValueType(env, p2, TIp2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_voS_r4r4r4r4_(void* target, Il2CppObject* p1, struct S_r4r4r4r4_ p2, MethodInfo* method) {
    // PLog("Running b_voS_r4r4r4r4_");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        CSRefToLuaValue(env, TIp1, p1),
            DataTransfer::CopyValueType(env, p2, TIp2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_voS_sosi4i4i4i4i4i4i4_i4(void* target, Il2CppObject* p1, struct S_sosi4i4i4i4i4i4i4_ p2, int32_t p3, MethodInfo* method) {
    // PLog("Running b_voS_sosi4i4i4i4i4i4i4_i4");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        CSRefToLuaValue(env, TIp1, p1),
            DataTransfer::CopyValueType(env, p2, TIp2),
            converter::Converter<int32_t>::toScript(env, p3)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vob(void* target, Il2CppObject* p1, bool p2, MethodInfo* method) {
    // PLog("Running b_vob");
                    
    auto Tip1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        CSRefToLuaValue(env, TIp1, p1),
            converter::Converter<bool>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_voi4(void* target, Il2CppObject* p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_voi4");
                    
    auto Tip1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        CSRefToLuaValue(env, TIp1, p1),
            converter::Converter<int32_t>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_voi4i4(void* target, Il2CppObject* p1, int32_t p2, int32_t p3, MethodInfo* method) {
    // PLog("Running b_voi4i4");
                    
    auto Tip1 = GetParameterType(method, 1);
                        
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        CSRefToLuaValue(env, TIp1, p1),
            converter::Converter<int32_t>::toScript(env, p2),
            converter::Converter<int32_t>::toScript(env, p3)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_voi4o(void* target, Il2CppObject* p1, int32_t p2, Il2CppObject* p3, MethodInfo* method) {
    // PLog("Running b_voi4o");
                    
    auto Tip1 = GetParameterType(method, 1);
                            
    auto Tip3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        CSRefToLuaValue(env, TIp1, p1),
            converter::Converter<int32_t>::toScript(env, p2),
            CSRefToLuaValue(env, TIp3, p3)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_voi8(void* target, Il2CppObject* p1, int64_t p2, MethodInfo* method) {
    // PLog("Running b_voi8");
                    
    auto Tip1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        CSRefToLuaValue(env, TIp1, p1),
            converter::Converter<int64_t>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_voo(void* target, Il2CppObject* p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_voo");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vooi4(void* target, Il2CppObject* p1, Il2CppObject* p2, int32_t p3, MethodInfo* method) {
    // PLog("Running b_vooi4");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2),
            converter::Converter<int32_t>::toScript(env, p3)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vooi8(void* target, Il2CppObject* p1, Il2CppObject* p2, int64_t p3, MethodInfo* method) {
    // PLog("Running b_vooi8");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2),
            converter::Converter<int64_t>::toScript(env, p3)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vooo(void* target, Il2CppObject* p1, Il2CppObject* p2, Il2CppObject* p3, MethodInfo* method) {
    // PLog("Running b_vooo");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2),
            CSRefToLuaValue(env, TIp3, p3)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_voooo(void* target, Il2CppObject* p1, Il2CppObject* p2, Il2CppObject* p3, Il2CppObject* p4, MethodInfo* method) {
    // PLog("Running b_voooo");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
                
    auto Tip4 = GetParameterType(method, 4);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[4]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2),
            CSRefToLuaValue(env, TIp3, p3),
            CSRefToLuaValue(env, TIp4, p4)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 4, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vooooo(void* target, Il2CppObject* p1, Il2CppObject* p2, Il2CppObject* p3, Il2CppObject* p4, Il2CppObject* p5, MethodInfo* method) {
    // PLog("Running b_vooooo");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
                
    auto Tip4 = GetParameterType(method, 4);
                
    auto Tip5 = GetParameterType(method, 5);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[5]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2),
            CSRefToLuaValue(env, TIp3, p3),
            CSRefToLuaValue(env, TIp4, p4),
            CSRefToLuaValue(env, TIp5, p5)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 5, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_voooooo(void* target, Il2CppObject* p1, Il2CppObject* p2, Il2CppObject* p3, Il2CppObject* p4, Il2CppObject* p5, Il2CppObject* p6, MethodInfo* method) {
    // PLog("Running b_voooooo");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
                
    auto Tip4 = GetParameterType(method, 4);
                
    auto Tip5 = GetParameterType(method, 5);
                
    auto Tip6 = GetParameterType(method, 6);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[6]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2),
            CSRefToLuaValue(env, TIp3, p3),
            CSRefToLuaValue(env, TIp4, p4),
            CSRefToLuaValue(env, TIp5, p5),
            CSRefToLuaValue(env, TIp6, p6)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 6, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vooooooo(void* target, Il2CppObject* p1, Il2CppObject* p2, Il2CppObject* p3, Il2CppObject* p4, Il2CppObject* p5, Il2CppObject* p6, Il2CppObject* p7, MethodInfo* method) {
    // PLog("Running b_vooooooo");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
                
    auto Tip4 = GetParameterType(method, 4);
                
    auto Tip5 = GetParameterType(method, 5);
                
    auto Tip6 = GetParameterType(method, 6);
                
    auto Tip7 = GetParameterType(method, 7);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[7]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2),
            CSRefToLuaValue(env, TIp3, p3),
            CSRefToLuaValue(env, TIp4, p4),
            CSRefToLuaValue(env, TIp5, p5),
            CSRefToLuaValue(env, TIp6, p6),
            CSRefToLuaValue(env, TIp7, p7)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 7, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_voooooooo(void* target, Il2CppObject* p1, Il2CppObject* p2, Il2CppObject* p3, Il2CppObject* p4, Il2CppObject* p5, Il2CppObject* p6, Il2CppObject* p7, Il2CppObject* p8, MethodInfo* method) {
    // PLog("Running b_voooooooo");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
                
    auto Tip4 = GetParameterType(method, 4);
                
    auto Tip5 = GetParameterType(method, 5);
                
    auto Tip6 = GetParameterType(method, 6);
                
    auto Tip7 = GetParameterType(method, 7);
                
    auto Tip8 = GetParameterType(method, 8);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[8]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2),
            CSRefToLuaValue(env, TIp3, p3),
            CSRefToLuaValue(env, TIp4, p4),
            CSRefToLuaValue(env, TIp5, p5),
            CSRefToLuaValue(env, TIp6, p6),
            CSRefToLuaValue(env, TIp7, p7),
            CSRefToLuaValue(env, TIp8, p8)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 8, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vooooooooo(void* target, Il2CppObject* p1, Il2CppObject* p2, Il2CppObject* p3, Il2CppObject* p4, Il2CppObject* p5, Il2CppObject* p6, Il2CppObject* p7, Il2CppObject* p8, Il2CppObject* p9, MethodInfo* method) {
    // PLog("Running b_vooooooooo");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
                
    auto Tip4 = GetParameterType(method, 4);
                
    auto Tip5 = GetParameterType(method, 5);
                
    auto Tip6 = GetParameterType(method, 6);
                
    auto Tip7 = GetParameterType(method, 7);
                
    auto Tip8 = GetParameterType(method, 8);
                
    auto Tip9 = GetParameterType(method, 9);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[9]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2),
            CSRefToLuaValue(env, TIp3, p3),
            CSRefToLuaValue(env, TIp4, p4),
            CSRefToLuaValue(env, TIp5, p5),
            CSRefToLuaValue(env, TIp6, p6),
            CSRefToLuaValue(env, TIp7, p7),
            CSRefToLuaValue(env, TIp8, p8),
            CSRefToLuaValue(env, TIp9, p9)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 9, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_voooooooooo(void* target, Il2CppObject* p1, Il2CppObject* p2, Il2CppObject* p3, Il2CppObject* p4, Il2CppObject* p5, Il2CppObject* p6, Il2CppObject* p7, Il2CppObject* p8, Il2CppObject* p9, Il2CppObject* p10, MethodInfo* method) {
    // PLog("Running b_voooooooooo");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
                
    auto Tip4 = GetParameterType(method, 4);
                
    auto Tip5 = GetParameterType(method, 5);
                
    auto Tip6 = GetParameterType(method, 6);
                
    auto Tip7 = GetParameterType(method, 7);
                
    auto Tip8 = GetParameterType(method, 8);
                
    auto Tip9 = GetParameterType(method, 9);
                
    auto Tip10 = GetParameterType(method, 10);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[10]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2),
            CSRefToLuaValue(env, TIp3, p3),
            CSRefToLuaValue(env, TIp4, p4),
            CSRefToLuaValue(env, TIp5, p5),
            CSRefToLuaValue(env, TIp6, p6),
            CSRefToLuaValue(env, TIp7, p7),
            CSRefToLuaValue(env, TIp8, p8),
            CSRefToLuaValue(env, TIp9, p9),
            CSRefToLuaValue(env, TIp10, p10)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 10, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vooooooooooo(void* target, Il2CppObject* p1, Il2CppObject* p2, Il2CppObject* p3, Il2CppObject* p4, Il2CppObject* p5, Il2CppObject* p6, Il2CppObject* p7, Il2CppObject* p8, Il2CppObject* p9, Il2CppObject* p10, Il2CppObject* p11, MethodInfo* method) {
    // PLog("Running b_vooooooooooo");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
                
    auto Tip4 = GetParameterType(method, 4);
                
    auto Tip5 = GetParameterType(method, 5);
                
    auto Tip6 = GetParameterType(method, 6);
                
    auto Tip7 = GetParameterType(method, 7);
                
    auto Tip8 = GetParameterType(method, 8);
                
    auto Tip9 = GetParameterType(method, 9);
                
    auto Tip10 = GetParameterType(method, 10);
                
    auto Tip11 = GetParameterType(method, 11);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[11]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2),
            CSRefToLuaValue(env, TIp3, p3),
            CSRefToLuaValue(env, TIp4, p4),
            CSRefToLuaValue(env, TIp5, p5),
            CSRefToLuaValue(env, TIp6, p6),
            CSRefToLuaValue(env, TIp7, p7),
            CSRefToLuaValue(env, TIp8, p8),
            CSRefToLuaValue(env, TIp9, p9),
            CSRefToLuaValue(env, TIp10, p10),
            CSRefToLuaValue(env, TIp11, p11)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 11, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_voooooooooooo(void* target, Il2CppObject* p1, Il2CppObject* p2, Il2CppObject* p3, Il2CppObject* p4, Il2CppObject* p5, Il2CppObject* p6, Il2CppObject* p7, Il2CppObject* p8, Il2CppObject* p9, Il2CppObject* p10, Il2CppObject* p11, Il2CppObject* p12, MethodInfo* method) {
    // PLog("Running b_voooooooooooo");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
                
    auto Tip4 = GetParameterType(method, 4);
                
    auto Tip5 = GetParameterType(method, 5);
                
    auto Tip6 = GetParameterType(method, 6);
                
    auto Tip7 = GetParameterType(method, 7);
                
    auto Tip8 = GetParameterType(method, 8);
                
    auto Tip9 = GetParameterType(method, 9);
                
    auto Tip10 = GetParameterType(method, 10);
                
    auto Tip11 = GetParameterType(method, 11);
                
    auto Tip12 = GetParameterType(method, 12);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[12]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2),
            CSRefToLuaValue(env, TIp3, p3),
            CSRefToLuaValue(env, TIp4, p4),
            CSRefToLuaValue(env, TIp5, p5),
            CSRefToLuaValue(env, TIp6, p6),
            CSRefToLuaValue(env, TIp7, p7),
            CSRefToLuaValue(env, TIp8, p8),
            CSRefToLuaValue(env, TIp9, p9),
            CSRefToLuaValue(env, TIp10, p10),
            CSRefToLuaValue(env, TIp11, p11),
            CSRefToLuaValue(env, TIp12, p12)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 12, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vooooooooooooo(void* target, Il2CppObject* p1, Il2CppObject* p2, Il2CppObject* p3, Il2CppObject* p4, Il2CppObject* p5, Il2CppObject* p6, Il2CppObject* p7, Il2CppObject* p8, Il2CppObject* p9, Il2CppObject* p10, Il2CppObject* p11, Il2CppObject* p12, Il2CppObject* p13, MethodInfo* method) {
    // PLog("Running b_vooooooooooooo");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
                
    auto Tip4 = GetParameterType(method, 4);
                
    auto Tip5 = GetParameterType(method, 5);
                
    auto Tip6 = GetParameterType(method, 6);
                
    auto Tip7 = GetParameterType(method, 7);
                
    auto Tip8 = GetParameterType(method, 8);
                
    auto Tip9 = GetParameterType(method, 9);
                
    auto Tip10 = GetParameterType(method, 10);
                
    auto Tip11 = GetParameterType(method, 11);
                
    auto Tip12 = GetParameterType(method, 12);
                
    auto Tip13 = GetParameterType(method, 13);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[13]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2),
            CSRefToLuaValue(env, TIp3, p3),
            CSRefToLuaValue(env, TIp4, p4),
            CSRefToLuaValue(env, TIp5, p5),
            CSRefToLuaValue(env, TIp6, p6),
            CSRefToLuaValue(env, TIp7, p7),
            CSRefToLuaValue(env, TIp8, p8),
            CSRefToLuaValue(env, TIp9, p9),
            CSRefToLuaValue(env, TIp10, p10),
            CSRefToLuaValue(env, TIp11, p11),
            CSRefToLuaValue(env, TIp12, p12),
            CSRefToLuaValue(env, TIp13, p13)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 13, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_voooooooooooooo(void* target, Il2CppObject* p1, Il2CppObject* p2, Il2CppObject* p3, Il2CppObject* p4, Il2CppObject* p5, Il2CppObject* p6, Il2CppObject* p7, Il2CppObject* p8, Il2CppObject* p9, Il2CppObject* p10, Il2CppObject* p11, Il2CppObject* p12, Il2CppObject* p13, Il2CppObject* p14, MethodInfo* method) {
    // PLog("Running b_voooooooooooooo");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
                
    auto Tip4 = GetParameterType(method, 4);
                
    auto Tip5 = GetParameterType(method, 5);
                
    auto Tip6 = GetParameterType(method, 6);
                
    auto Tip7 = GetParameterType(method, 7);
                
    auto Tip8 = GetParameterType(method, 8);
                
    auto Tip9 = GetParameterType(method, 9);
                
    auto Tip10 = GetParameterType(method, 10);
                
    auto Tip11 = GetParameterType(method, 11);
                
    auto Tip12 = GetParameterType(method, 12);
                
    auto Tip13 = GetParameterType(method, 13);
                
    auto Tip14 = GetParameterType(method, 14);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[14]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2),
            CSRefToLuaValue(env, TIp3, p3),
            CSRefToLuaValue(env, TIp4, p4),
            CSRefToLuaValue(env, TIp5, p5),
            CSRefToLuaValue(env, TIp6, p6),
            CSRefToLuaValue(env, TIp7, p7),
            CSRefToLuaValue(env, TIp8, p8),
            CSRefToLuaValue(env, TIp9, p9),
            CSRefToLuaValue(env, TIp10, p10),
            CSRefToLuaValue(env, TIp11, p11),
            CSRefToLuaValue(env, TIp12, p12),
            CSRefToLuaValue(env, TIp13, p13),
            CSRefToLuaValue(env, TIp14, p14)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 14, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vooooooooooooooo(void* target, Il2CppObject* p1, Il2CppObject* p2, Il2CppObject* p3, Il2CppObject* p4, Il2CppObject* p5, Il2CppObject* p6, Il2CppObject* p7, Il2CppObject* p8, Il2CppObject* p9, Il2CppObject* p10, Il2CppObject* p11, Il2CppObject* p12, Il2CppObject* p13, Il2CppObject* p14, Il2CppObject* p15, MethodInfo* method) {
    // PLog("Running b_vooooooooooooooo");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
                
    auto Tip4 = GetParameterType(method, 4);
                
    auto Tip5 = GetParameterType(method, 5);
                
    auto Tip6 = GetParameterType(method, 6);
                
    auto Tip7 = GetParameterType(method, 7);
                
    auto Tip8 = GetParameterType(method, 8);
                
    auto Tip9 = GetParameterType(method, 9);
                
    auto Tip10 = GetParameterType(method, 10);
                
    auto Tip11 = GetParameterType(method, 11);
                
    auto Tip12 = GetParameterType(method, 12);
                
    auto Tip13 = GetParameterType(method, 13);
                
    auto Tip14 = GetParameterType(method, 14);
                
    auto Tip15 = GetParameterType(method, 15);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[15]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2),
            CSRefToLuaValue(env, TIp3, p3),
            CSRefToLuaValue(env, TIp4, p4),
            CSRefToLuaValue(env, TIp5, p5),
            CSRefToLuaValue(env, TIp6, p6),
            CSRefToLuaValue(env, TIp7, p7),
            CSRefToLuaValue(env, TIp8, p8),
            CSRefToLuaValue(env, TIp9, p9),
            CSRefToLuaValue(env, TIp10, p10),
            CSRefToLuaValue(env, TIp11, p11),
            CSRefToLuaValue(env, TIp12, p12),
            CSRefToLuaValue(env, TIp13, p13),
            CSRefToLuaValue(env, TIp14, p14),
            CSRefToLuaValue(env, TIp15, p15)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 15, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_voooooooooooooooo(void* target, Il2CppObject* p1, Il2CppObject* p2, Il2CppObject* p3, Il2CppObject* p4, Il2CppObject* p5, Il2CppObject* p6, Il2CppObject* p7, Il2CppObject* p8, Il2CppObject* p9, Il2CppObject* p10, Il2CppObject* p11, Il2CppObject* p12, Il2CppObject* p13, Il2CppObject* p14, Il2CppObject* p15, Il2CppObject* p16, MethodInfo* method) {
    // PLog("Running b_voooooooooooooooo");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
                
    auto Tip4 = GetParameterType(method, 4);
                
    auto Tip5 = GetParameterType(method, 5);
                
    auto Tip6 = GetParameterType(method, 6);
                
    auto Tip7 = GetParameterType(method, 7);
                
    auto Tip8 = GetParameterType(method, 8);
                
    auto Tip9 = GetParameterType(method, 9);
                
    auto Tip10 = GetParameterType(method, 10);
                
    auto Tip11 = GetParameterType(method, 11);
                
    auto Tip12 = GetParameterType(method, 12);
                
    auto Tip13 = GetParameterType(method, 13);
                
    auto Tip14 = GetParameterType(method, 14);
                
    auto Tip15 = GetParameterType(method, 15);
                
    auto Tip16 = GetParameterType(method, 16);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[16]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2),
            CSRefToLuaValue(env, TIp3, p3),
            CSRefToLuaValue(env, TIp4, p4),
            CSRefToLuaValue(env, TIp5, p5),
            CSRefToLuaValue(env, TIp6, p6),
            CSRefToLuaValue(env, TIp7, p7),
            CSRefToLuaValue(env, TIp8, p8),
            CSRefToLuaValue(env, TIp9, p9),
            CSRefToLuaValue(env, TIp10, p10),
            CSRefToLuaValue(env, TIp11, p11),
            CSRefToLuaValue(env, TIp12, p12),
            CSRefToLuaValue(env, TIp13, p13),
            CSRefToLuaValue(env, TIp14, p14),
            CSRefToLuaValue(env, TIp15, p15),
            CSRefToLuaValue(env, TIp16, p16)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 16, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_voos(void* target, Il2CppObject* p1, Il2CppObject* p2, Il2CppString* p3, MethodInfo* method) {
    // PLog("Running b_voos");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        CSRefToLuaValue(env, TIp1, p1),
            CSRefToLuaValue(env, TIp2, p2),
            converter::Converter<Il2CppString*>::toScript(env, p3)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vor4(void* target, Il2CppObject* p1, float p2, MethodInfo* method) {
    // PLog("Running b_vor4");
                    
    auto Tip1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        CSRefToLuaValue(env, TIp1, p1),
            converter::Converter<float>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vor8(void* target, Il2CppObject* p1, double p2, MethodInfo* method) {
    // PLog("Running b_vor8");
                    
    auto Tip1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        CSRefToLuaValue(env, TIp1, p1),
            converter::Converter<double>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vos(void* target, Il2CppObject* p1, Il2CppString* p2, MethodInfo* method) {
    // PLog("Running b_vos");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        CSRefToLuaValue(env, TIp1, p1),
            converter::Converter<Il2CppString*>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vosS_i4i4i4i4_b(void* target, Il2CppObject* p1, Il2CppString* p2, struct S_i4i4i4i4_ p3, bool p4, MethodInfo* method) {
    // PLog("Running b_vosS_i4i4i4i4_b");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[4]{
        CSRefToLuaValue(env, TIp1, p1),
            converter::Converter<Il2CppString*>::toScript(env, p2),
            DataTransfer::CopyValueType(env, p3, TIp3),
            converter::Converter<bool>::toScript(env, p4)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 4, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vosb(void* target, Il2CppObject* p1, Il2CppString* p2, bool p3, MethodInfo* method) {
    // PLog("Running b_vosb");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        CSRefToLuaValue(env, TIp1, p1),
            converter::Converter<Il2CppString*>::toScript(env, p2),
            converter::Converter<bool>::toScript(env, p3)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_voss(void* target, Il2CppObject* p1, Il2CppString* p2, Il2CppString* p3, MethodInfo* method) {
    // PLog("Running b_voss");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        CSRefToLuaValue(env, TIp1, p1),
            converter::Converter<Il2CppString*>::toScript(env, p2),
            converter::Converter<Il2CppString*>::toScript(env, p3)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vou4(void* target, Il2CppObject* p1, uint32_t p2, MethodInfo* method) {
    // PLog("Running b_vou4");
                    
    auto Tip1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        CSRefToLuaValue(env, TIp1, p1),
            converter::Converter<uint32_t>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vp(void* target, void* p1, MethodInfo* method) {
    // PLog("Running b_vp");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        pesapi_create_binary(env, p1, 0)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vpO(void* target, void* p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_vpO");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        pesapi_create_binary(env, p1, 0),
            CSRefToLuaValue(env, TIp2, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vpS_i4i4S_i4i4i4i4u8_S_u1__(void* target, void* p1, struct S_i4i4S_i4i4i4i4u8_S_u1__ p2, MethodInfo* method) {
    // PLog("Running b_vpS_i4i4S_i4i4i4i4u8_S_u1__");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        pesapi_create_binary(env, p1, 0),
            DataTransfer::CopyValueType(env, p2, TIp2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vpS_i4i4_(void* target, void* p1, struct S_i4i4_ p2, MethodInfo* method) {
    // PLog("Running b_vpS_i4i4_");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        pesapi_create_binary(env, p1, 0),
            DataTransfer::CopyValueType(env, p2, TIp2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vpS_i4i4i4i4u8_(void* target, void* p1, struct S_i4i4i4i4u8_ p2, MethodInfo* method) {
    // PLog("Running b_vpS_i4i4i4i4u8_");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        pesapi_create_binary(env, p1, 0),
            DataTransfer::CopyValueType(env, p2, TIp2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vpb(void* target, void* p1, bool p2, MethodInfo* method) {
    // PLog("Running b_vpb");
                    
    auto Tip1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        pesapi_create_binary(env, p1, 0),
            converter::Converter<bool>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vpc(void* target, void* p1, Il2CppChar p2, MethodInfo* method) {
    // PLog("Running b_vpc");
                    
    auto Tip1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        pesapi_create_binary(env, p1, 0),
            converter::Converter<Il2CppChar>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vpi1(void* target, void* p1, int8_t p2, MethodInfo* method) {
    // PLog("Running b_vpi1");
                    
    auto Tip1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        pesapi_create_binary(env, p1, 0),
            converter::Converter<int8_t>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vpi2(void* target, void* p1, int16_t p2, MethodInfo* method) {
    // PLog("Running b_vpi2");
                    
    auto Tip1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        pesapi_create_binary(env, p1, 0),
            converter::Converter<int16_t>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vpi4(void* target, void* p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_vpi4");
                    
    auto Tip1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        pesapi_create_binary(env, p1, 0),
            converter::Converter<int32_t>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vpi4O(void* target, void* p1, int32_t p2, Il2CppObject* p3, MethodInfo* method) {
    // PLog("Running b_vpi4O");
                    
    auto Tip1 = GetParameterType(method, 1);
                            
    auto Tip3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        pesapi_create_binary(env, p1, 0),
            converter::Converter<int32_t>::toScript(env, p2),
            CSRefToLuaValue(env, TIp3, p3)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vpi4Po(void* target, void* p1, int32_t p2, void* p3, MethodInfo* method) {
    // PLog("Running b_vpi4Po");
                    
    auto Tip1 = GetParameterType(method, 1);
                            
    auto Tip3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        pesapi_create_binary(env, p1, 0),
            converter::Converter<int32_t>::toScript(env, p2),
            // unknown ret signature: Po
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vpi4o(void* target, void* p1, int32_t p2, Il2CppObject* p3, MethodInfo* method) {
    // PLog("Running b_vpi4o");
                    
    auto Tip1 = GetParameterType(method, 1);
                            
    auto Tip3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        pesapi_create_binary(env, p1, 0),
            converter::Converter<int32_t>::toScript(env, p2),
            CSRefToLuaValue(env, TIp3, p3)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vpi8(void* target, void* p1, int64_t p2, MethodInfo* method) {
    // PLog("Running b_vpi8");
                    
    auto Tip1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        pesapi_create_binary(env, p1, 0),
            converter::Converter<int64_t>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vpo(void* target, void* p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_vpo");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        pesapi_create_binary(env, p1, 0),
            CSRefToLuaValue(env, TIp2, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vpppu4pp(void* target, void* p1, void* p2, void* p3, uint32_t p4, void* p5, void* p6, MethodInfo* method) {
    // PLog("Running b_vpppu4pp");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
                            
    auto Tip5 = GetParameterType(method, 5);
                
    auto Tip6 = GetParameterType(method, 6);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[6]{
        pesapi_create_binary(env, p1, 0),
            pesapi_create_binary(env, p2, 0),
            pesapi_create_binary(env, p3, 0),
            converter::Converter<uint32_t>::toScript(env, p4),
            pesapi_create_binary(env, p5, 0),
            pesapi_create_binary(env, p6, 0)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 6, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vpr4(void* target, void* p1, float p2, MethodInfo* method) {
    // PLog("Running b_vpr4");
                    
    auto Tip1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        pesapi_create_binary(env, p1, 0),
            converter::Converter<float>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vpr8(void* target, void* p1, double p2, MethodInfo* method) {
    // PLog("Running b_vpr8");
                    
    auto Tip1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        pesapi_create_binary(env, p1, 0),
            converter::Converter<double>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vps(void* target, void* p1, Il2CppString* p2, MethodInfo* method) {
    // PLog("Running b_vps");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        pesapi_create_binary(env, p1, 0),
            converter::Converter<Il2CppString*>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vpu1(void* target, void* p1, uint8_t p2, MethodInfo* method) {
    // PLog("Running b_vpu1");
                    
    auto Tip1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        pesapi_create_binary(env, p1, 0),
            converter::Converter<uint8_t>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vpu2(void* target, void* p1, uint16_t p2, MethodInfo* method) {
    // PLog("Running b_vpu2");
                    
    auto Tip1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        pesapi_create_binary(env, p1, 0),
            converter::Converter<uint16_t>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vpu4u4(void* target, void* p1, uint32_t p2, uint32_t p3, MethodInfo* method) {
    // PLog("Running b_vpu4u4");
                    
    auto Tip1 = GetParameterType(method, 1);
                        
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        pesapi_create_binary(env, p1, 0),
            converter::Converter<uint32_t>::toScript(env, p2),
            converter::Converter<uint32_t>::toScript(env, p3)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vpu8(void* target, void* p1, uint64_t p2, MethodInfo* method) {
    // PLog("Running b_vpu8");
                    
    auto Tip1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        pesapi_create_binary(env, p1, 0),
            converter::Converter<uint64_t>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vr4(void* target, float p1, MethodInfo* method) {
    // PLog("Running b_vr4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        converter::Converter<float>::toScript(env, p1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vr4PS_r4r4r4r4_Pr4Pr4(void* target, float p1, void* p2, void* p3, void* p4, MethodInfo* method) {
    // PLog("Running b_vr4PS_r4r4r4r4_Pr4Pr4");
                                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);
                
    auto Tip4 = GetParameterType(method, 4);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[4]{
        converter::Converter<float>::toScript(env, p1),
            // unknown ret signature: PS_r4r4r4r4_,
            // unknown ret signature: Pr4,
            // unknown ret signature: Pr4
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 4, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vs(void* target, Il2CppString* p1, MethodInfo* method) {
    // PLog("Running b_vs");
                    
    auto Tip1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[1]{
        converter::Converter<Il2CppString*>::toScript(env, p1)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 1, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vsN_bi4_(void* target, Il2CppString* p1, struct N_bi4_ p2, MethodInfo* method) {
    // PLog("Running b_vsN_bi4_");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        converter::Converter<Il2CppString*>::toScript(env, p1),
            DataTransfer::CopyNullableValueType(env, p2, TIp2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vsS_r4r4r4r4_(void* target, Il2CppString* p1, struct S_r4r4r4r4_ p2, MethodInfo* method) {
    // PLog("Running b_vsS_r4r4r4r4_");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        converter::Converter<Il2CppString*>::toScript(env, p1),
            DataTransfer::CopyValueType(env, p2, TIp2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vsb(void* target, Il2CppString* p1, bool p2, MethodInfo* method) {
    // PLog("Running b_vsb");
                    
    auto Tip1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        converter::Converter<Il2CppString*>::toScript(env, p1),
            converter::Converter<bool>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vsbS_S_Pvi4i4i4S_pi4i4_i4_i4i4i4_(void* target, Il2CppString* p1, bool p2, struct S_S_Pvi4i4i4S_pi4i4_i4_i4i4i4_ p3, MethodInfo* method) {
    // PLog("Running b_vsbS_S_Pvi4i4i4S_pi4i4_i4_i4i4i4_");
                    
    auto Tip1 = GetParameterType(method, 1);
                            
    auto Tip3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        converter::Converter<Il2CppString*>::toScript(env, p1),
            converter::Converter<bool>::toScript(env, p2),
            DataTransfer::CopyValueType(env, p3, TIp3)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vsbs(void* target, Il2CppString* p1, bool p2, Il2CppString* p3, MethodInfo* method) {
    // PLog("Running b_vsbs");
                    
    auto Tip1 = GetParameterType(method, 1);
                            
    auto Tip3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        converter::Converter<Il2CppString*>::toScript(env, p1),
            converter::Converter<bool>::toScript(env, p2),
            converter::Converter<Il2CppString*>::toScript(env, p3)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vsi4(void* target, Il2CppString* p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_vsi4");
                    
    auto Tip1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        converter::Converter<Il2CppString*>::toScript(env, p1),
            converter::Converter<int32_t>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vso(void* target, Il2CppString* p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_vso");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        converter::Converter<Il2CppString*>::toScript(env, p1),
            CSRefToLuaValue(env, TIp2, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vss(void* target, Il2CppString* p1, Il2CppString* p2, MethodInfo* method) {
    // PLog("Running b_vss");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        converter::Converter<Il2CppString*>::toScript(env, p1),
            converter::Converter<Il2CppString*>::toScript(env, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vssi4(void* target, Il2CppString* p1, Il2CppString* p2, int32_t p3, MethodInfo* method) {
    // PLog("Running b_vssi4");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        converter::Converter<Il2CppString*>::toScript(env, p1),
            converter::Converter<Il2CppString*>::toScript(env, p2),
            converter::Converter<int32_t>::toScript(env, p3)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vsso(void* target, Il2CppString* p1, Il2CppString* p2, Il2CppObject* p3, MethodInfo* method) {
    // PLog("Running b_vsso");
                    
    auto Tip1 = GetParameterType(method, 1);
                
    auto Tip2 = GetParameterType(method, 2);
                
    auto Tip3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        converter::Converter<Il2CppString*>::toScript(env, p1),
            converter::Converter<Il2CppString*>::toScript(env, p2),
            CSRefToLuaValue(env, TIp3, p3)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vu4u4PS_ppi4i4p_(void* target, uint32_t p1, uint32_t p2, void* p3, MethodInfo* method) {
    // PLog("Running b_vu4u4PS_ppi4i4p_");
                                            
    auto Tip3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[3]{
        converter::Converter<uint32_t>::toScript(env, p1),
            converter::Converter<uint32_t>::toScript(env, p2),
            // unknown ret signature: PS_ppi4i4p_
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 3, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static void b_vu8o(void* target, uint64_t p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_vu8o");
                                
    auto Tip2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);

    pesapi_env_ref envRef = pesapi_get_ref_associated_env(delegateInfo->ValueRef);
    AutoVauleScope valueScope(envRef);
    auto env = pesapi_get_env_from_ref(envRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("LuaEnv had been destroy");
            }
    auto func = pesapi_get_value_from_ref(env, delegateInfo->ValueRef);

    pesapi_value argv[2]{
        converter::Converter<uint64_t>::toScript(env, p1),
            CSRefToLuaValue(env, TIp2, p2)
    };    auto luaRet = pesapi_call_function(env, func, nullptr, 2, argv

    if (pesapi_has_caught(valueScope.scope())
    {
        auto msg = pesapi_get_exception_as_string(valueScope.scope(), true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
        }
        
static BridgeFuncInfo g_bridgeFunctionInfos[] = {
        {"N_bS_i4i4i4i4u8__o", (Il2CppMethodPointer)b_N_bS_i4i4i4i4u8__o},
    {"N_bi4_S_oo_o", (Il2CppMethodPointer)b_N_bi4_S_oo_o},
    {"N_bi4_o", (Il2CppMethodPointer)b_N_bi4_o},
    {"N_bi8_o", (Il2CppMethodPointer)b_N_bi8_o},
    {"N_br4_o", (Il2CppMethodPointer)b_N_br4_o},
    {"N_br8_o", (Il2CppMethodPointer)b_N_br8_o},
    {"O", (Il2CppMethodPointer)b_O},
    {"OS_oooObS_r4r4r4r4_bb_", (Il2CppMethodPointer)b_OS_oooObS_r4r4r4r4_bb_},
    {"Oi4", (Il2CppMethodPointer)b_Oi4},
    {"Oo", (Il2CppMethodPointer)b_Oo},
    {"Ooo", (Il2CppMethodPointer)b_Ooo},
    {"Oooo", (Il2CppMethodPointer)b_Oooo},
    {"Opi4", (Il2CppMethodPointer)b_Opi4},
    {"Opi4O", (Il2CppMethodPointer)b_Opi4O},
    {"Oso", (Il2CppMethodPointer)b_Oso},
    {"S_S_r4r4r4_S_r4r4r4__", (Il2CppMethodPointer)b_S_S_r4r4r4_S_r4r4r4__},
    {"S__", (Il2CppMethodPointer)b_S__},
    {"S_bo_s", (Il2CppMethodPointer)b_S_bo_s},
    {"S_i4i4S_i4i4i4i4u8_S_u1__S_i4i4S_i4i4i4i4u8_S_u1__", (Il2CppMethodPointer)b_S_i4i4S_i4i4i4i4u8_S_u1__S_i4i4S_i4i4i4i4u8_S_u1__},
    {"S_i4i4S_i4i4i4i4u8_S_u1__pi4", (Il2CppMethodPointer)b_S_i4i4S_i4i4i4i4u8_S_u1__pi4},
    {"S_i4i4i4i4u8_S_i4i4i4i4u8_", (Il2CppMethodPointer)b_S_i4i4i4i4u8_S_i4i4i4i4u8_},
    {"S_i4i4i4i4u8_o", (Il2CppMethodPointer)b_S_i4i4i4i4u8_o},
    {"S_i4i4i4i4u8_pi4", (Il2CppMethodPointer)b_S_i4i4i4i4u8_pi4},
    {"S_oooS_r4r4__S_oooS_r4r4__", (Il2CppMethodPointer)b_S_oooS_r4r4__S_oooS_r4r4__},
    {"S_ossi4i4i4i4o_S_ossi4i4i4i4o_", (Il2CppMethodPointer)b_S_ossi4i4i4i4o_S_ossi4i4i4i4o_},
    {"S_r4r4_", (Il2CppMethodPointer)b_S_r4r4_},
    {"S_r4r4_S_r4r4_", (Il2CppMethodPointer)b_S_r4r4_S_r4r4_},
    {"S_r4r4_o", (Il2CppMethodPointer)b_S_r4r4_o},
    {"S_r4r4r4_S_r4r4r4_", (Il2CppMethodPointer)b_S_r4r4r4_S_r4r4r4_},
    {"S_r4r4r4_o", (Il2CppMethodPointer)b_S_r4r4r4_o},
    {"S_r4r4r4r4_o", (Il2CppMethodPointer)b_S_r4r4r4r4_o},
    {"S_u8_o", (Il2CppMethodPointer)b_S_u8_o},
    {"S_u8i4i4p_oS_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_i4S_r4r4r4_r4r4i4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_i4i4i4S_u8_u4u8u1i4i4_S_S_Pvi4i4i4S_pi4i4_i4__p", (Il2CppMethodPointer)b_S_u8i4i4p_oS_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_i4S_r4r4r4_r4r4i4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_i4i4i4S_u8_u4u8u1i4i4_S_S_Pvi4i4i4S_pi4i4_i4__p},
    {"b", (Il2CppMethodPointer)b_b},
    {"bO", (Il2CppMethodPointer)b_bO},
    {"bOooi4", (Il2CppMethodPointer)b_bOooi4},
    {"bPS_PS_u4u4S_i8_S_i8_S_i8_S_i8_i8i8i4u4u4c_S_S_p_i4_S_S_p_i4_S_S_p_i4__", (Il2CppMethodPointer)b_bPS_PS_u4u4S_i8_S_i8_S_i8_S_i8_i8i8i4u4u4c_S_S_p_i4_S_S_p_i4_S_S_p_i4__},
    {"bPS_S_S_p_i4_i4cob_i4Pi4", (Il2CppMethodPointer)b_bPS_S_S_p_i4_i4cob_i4Pi4},
    {"bPs", (Il2CppMethodPointer)b_bPs},
    {"bPsPo", (Il2CppMethodPointer)b_bPsPo},
    {"bS_S_S_u8u8_S_u4u4u4u4_i4_oo_oo", (Il2CppMethodPointer)b_bS_S_S_u8u8_S_u4u4u4u4_i4_oo_oo},
    {"bS_i4ss_", (Il2CppMethodPointer)b_bS_i4ss_},
    {"bS_r4r4_PS_r4r4r4_PS_r4r4r4_", (Il2CppMethodPointer)b_bS_r4r4_PS_r4r4r4_PS_r4r4r4_},
    {"bb", (Il2CppMethodPointer)b_bb},
    {"bi4", (Il2CppMethodPointer)b_bi4},
    {"bo", (Il2CppMethodPointer)b_bo},
    {"boO", (Il2CppMethodPointer)b_boO},
    {"boPi4", (Il2CppMethodPointer)b_boPi4},
    {"boPsPs", (Il2CppMethodPointer)b_boPsPs},
    {"boi4", (Il2CppMethodPointer)b_boi4},
    {"boi4O", (Il2CppMethodPointer)b_boi4O},
    {"boo", (Il2CppMethodPointer)b_boo},
    {"booi4", (Il2CppMethodPointer)b_booi4},
    {"booso", (Il2CppMethodPointer)b_booso},
    {"bopoOi4", (Il2CppMethodPointer)b_bopoOi4},
    {"bopoOi4i4", (Il2CppMethodPointer)b_bopoOi4i4},
    {"boso", (Il2CppMethodPointer)b_boso},
    {"bososo", (Il2CppMethodPointer)b_bososo},
    {"bosso", (Il2CppMethodPointer)b_bosso},
    {"bosss", (Il2CppMethodPointer)b_bosss},
    {"bossss", (Il2CppMethodPointer)b_bossss},
    {"bpi4", (Il2CppMethodPointer)b_bpi4},
    {"bs", (Il2CppMethodPointer)b_bs},
    {"bsO", (Il2CppMethodPointer)b_bsO},
    {"bsbi4s", (Il2CppMethodPointer)b_bsbi4s},
    {"bsooi4", (Il2CppMethodPointer)b_bsooi4},
    {"bu8i8su8i8s", (Il2CppMethodPointer)b_bu8i8su8i8s},
    {"bu8ssi4", (Il2CppMethodPointer)b_bu8ssi4},
    {"cpi4", (Il2CppMethodPointer)b_cpi4},
    {"csi4c", (Il2CppMethodPointer)b_csi4c},
    {"i1pi4", (Il2CppMethodPointer)b_i1pi4},
    {"i2os", (Il2CppMethodPointer)b_i2os},
    {"i2pi4", (Il2CppMethodPointer)b_i2pi4},
    {"i4", (Il2CppMethodPointer)b_i4},
    {"i4S_S_oooObS_r4r4r4r4_bb_S_oooObS_r4r4r4r4_bb_b_", (Il2CppMethodPointer)b_i4S_S_oooObS_r4r4r4r4_bb_S_oooObS_r4r4r4r4_bb_b_},
    {"i4S_oo_o", (Il2CppMethodPointer)b_i4S_oo_o},
    {"i4i4", (Il2CppMethodPointer)b_i4i4},
    {"i4i4i4", (Il2CppMethodPointer)b_i4i4i4},
    {"i4i4i4ob", (Il2CppMethodPointer)b_i4i4i4ob},
    {"i4i4sb", (Il2CppMethodPointer)b_i4i4sb},
    {"i4o", (Il2CppMethodPointer)b_i4o},
    {"i4oS_r4r4r4_S_r4r4_ob", (Il2CppMethodPointer)b_i4oS_r4r4r4_S_r4r4_ob},
    {"i4ob", (Il2CppMethodPointer)b_i4ob},
    {"i4oo", (Il2CppMethodPointer)b_i4oo},
    {"i4os", (Il2CppMethodPointer)b_i4os},
    {"i4p", (Il2CppMethodPointer)b_i4p},
    {"i4pi4", (Il2CppMethodPointer)b_i4pi4},
    {"i4pp", (Il2CppMethodPointer)b_i4pp},
    {"i4ppi4", (Il2CppMethodPointer)b_i4ppi4},
    {"i4ppi4Pi4", (Il2CppMethodPointer)b_i4ppi4Pi4},
    {"i4r4", (Il2CppMethodPointer)b_i4r4},
    {"i4u1r4", (Il2CppMethodPointer)b_i4u1r4},
    {"i8o", (Il2CppMethodPointer)b_i8o},
    {"i8os", (Il2CppMethodPointer)b_i8os},
    {"i8pi4", (Il2CppMethodPointer)b_i8pi4},
    {"i8pi4i8", (Il2CppMethodPointer)b_i8pi4i8},
    {"o", (Il2CppMethodPointer)b_o},
    {"oO", (Il2CppMethodPointer)b_oO},
    {"oOo", (Il2CppMethodPointer)b_oOo},
    {"oOs", (Il2CppMethodPointer)b_oOs},
    {"oOsooo", (Il2CppMethodPointer)b_oOsooo},
    {"oPS_PS_u4u4S_i8_S_i8_S_i8_S_i8_i8i8i4u4u4c_S_S_p_i4_S_S_p_i4_S_S_p_i4__", (Il2CppMethodPointer)b_oPS_PS_u4u4S_i8_S_i8_S_i8_S_i8_i8i8i4u4u4c_S_S_p_i4_S_S_p_i4_S_S_p_i4__},
    {"oPo", (Il2CppMethodPointer)b_oPo},
    {"oPs", (Il2CppMethodPointer)b_oPs},
    {"oS_oo_o", (Il2CppMethodPointer)b_oS_oo_o},
    {"oi4", (Il2CppMethodPointer)b_oi4},
    {"oi4Vs", (Il2CppMethodPointer)b_oi4Vs},
    {"oi4o", (Il2CppMethodPointer)b_oi4o},
    {"oi4oo", (Il2CppMethodPointer)b_oi4oo},
    {"oi8oo", (Il2CppMethodPointer)b_oi8oo},
    {"oo", (Il2CppMethodPointer)b_oo},
    {"ooO", (Il2CppMethodPointer)b_ooO},
    {"ooS_ooo_", (Il2CppMethodPointer)b_ooS_ooo_},
    {"oobb", (Il2CppMethodPointer)b_oobb},
    {"ooi4", (Il2CppMethodPointer)b_ooi4},
    {"ooi4S_r4r4_ooPi4", (Il2CppMethodPointer)b_ooi4S_r4r4_ooPi4},
    {"ooo", (Il2CppMethodPointer)b_ooo},
    {"oooO", (Il2CppMethodPointer)b_oooO},
    {"oooS_r4r4_i4", (Il2CppMethodPointer)b_oooS_r4r4_i4},
    {"oooi4", (Il2CppMethodPointer)b_oooi4},
    {"oooi8o", (Il2CppMethodPointer)b_oooi8o},
    {"oooo", (Il2CppMethodPointer)b_oooo},
    {"ooooO", (Il2CppMethodPointer)b_ooooO},
    {"ooooo", (Il2CppMethodPointer)b_ooooo},
    {"oooooO", (Il2CppMethodPointer)b_oooooO},
    {"oooooo", (Il2CppMethodPointer)b_oooooo},
    {"ooooooo", (Il2CppMethodPointer)b_ooooooo},
    {"oooooooo", (Il2CppMethodPointer)b_oooooooo},
    {"ooooooooo", (Il2CppMethodPointer)b_ooooooooo},
    {"oooooooooo", (Il2CppMethodPointer)b_oooooooooo},
    {"ooooooooooo", (Il2CppMethodPointer)b_ooooooooooo},
    {"oooooooooooo", (Il2CppMethodPointer)b_oooooooooooo},
    {"ooooooooooooo", (Il2CppMethodPointer)b_ooooooooooooo},
    {"oooooooooooooo", (Il2CppMethodPointer)b_oooooooooooooo},
    {"ooooooooooooooo", (Il2CppMethodPointer)b_ooooooooooooooo},
    {"oooooooooooooooo", (Il2CppMethodPointer)b_oooooooooooooooo},
    {"ooooooooooooooooo", (Il2CppMethodPointer)b_ooooooooooooooooo},
    {"ooor4", (Il2CppMethodPointer)b_ooor4},
    {"oos", (Il2CppMethodPointer)b_oos},
    {"oosb", (Il2CppMethodPointer)b_oosb},
    {"ooso", (Il2CppMethodPointer)b_ooso},
    {"oou4u4", (Il2CppMethodPointer)b_oou4u4},
    {"opi4", (Il2CppMethodPointer)b_opi4},
    {"or4", (Il2CppMethodPointer)b_or4},
    {"os", (Il2CppMethodPointer)b_os},
    {"osooo", (Il2CppMethodPointer)b_osooo},
    {"oss", (Il2CppMethodPointer)b_oss},
    {"pp", (Il2CppMethodPointer)b_pp},
    {"r4S_r4r4r4_", (Il2CppMethodPointer)b_r4S_r4r4r4_},
    {"r4i4", (Il2CppMethodPointer)b_r4i4},
    {"r4o", (Il2CppMethodPointer)b_r4o},
    {"r4os", (Il2CppMethodPointer)b_r4os},
    {"r4pi4", (Il2CppMethodPointer)b_r4pi4},
    {"r4r4", (Il2CppMethodPointer)b_r4r4},
    {"r4r4PS_r4r4r4r4_", (Il2CppMethodPointer)b_r4r4PS_r4r4r4r4_},
    {"r8", (Il2CppMethodPointer)b_r8},
    {"r8o", (Il2CppMethodPointer)b_r8o},
    {"r8os", (Il2CppMethodPointer)b_r8os},
    {"r8pi4", (Il2CppMethodPointer)b_r8pi4},
    {"s", (Il2CppMethodPointer)b_s},
    {"sO", (Il2CppMethodPointer)b_sO},
    {"sS_oS_i4_osS_i4u1u1u1u1__", (Il2CppMethodPointer)b_sS_oS_i4_osS_i4u1u1u1u1__},
    {"sS_oo_o", (Il2CppMethodPointer)b_sS_oo_o},
    {"si4", (Il2CppMethodPointer)b_si4},
    {"so", (Il2CppMethodPointer)b_so},
    {"soo", (Il2CppMethodPointer)b_soo},
    {"sos", (Il2CppMethodPointer)b_sos},
    {"spi4", (Il2CppMethodPointer)b_spi4},
    {"ss", (Il2CppMethodPointer)b_ss},
    {"u1pi4", (Il2CppMethodPointer)b_u1pi4},
    {"u2os", (Il2CppMethodPointer)b_u2os},
    {"u2pi4", (Il2CppMethodPointer)b_u2pi4},
    {"u4os", (Il2CppMethodPointer)b_u4os},
    {"u4pi4", (Il2CppMethodPointer)b_u4pi4},
    {"u4u4pu4", (Il2CppMethodPointer)b_u4u4pu4},
    {"u8os", (Il2CppMethodPointer)b_u8os},
    {"u8pi4", (Il2CppMethodPointer)b_u8pi4},
    {"v", (Il2CppMethodPointer)b_v},
    {"vO", (Il2CppMethodPointer)b_vO},
    {"vOO", (Il2CppMethodPointer)b_vOO},
    {"vOb", (Il2CppMethodPointer)b_vOb},
    {"vOo", (Il2CppMethodPointer)b_vOo},
    {"vOoi4", (Il2CppMethodPointer)b_vOoi4},
    {"vPS_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4__", (Il2CppMethodPointer)b_vPS_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4__},
    {"vPS_i4_", (Il2CppMethodPointer)b_vPS_i4_},
    {"vPS_r4r4r4r4i4i4r4r4_", (Il2CppMethodPointer)b_vPS_r4r4r4r4i4i4r4r4_},
    {"vPS_si4i4_", (Il2CppMethodPointer)b_vPS_si4i4_},
    {"vPbPi4PsPi4", (Il2CppMethodPointer)b_vPbPi4PsPi4},
    {"vPbPsPo", (Il2CppMethodPointer)b_vPbPsPo},
    {"vPbPsPoPi4", (Il2CppMethodPointer)b_vPbPsPoPi4},
    {"vPbPsPoPo", (Il2CppMethodPointer)b_vPbPsPoPo},
    {"vPi4i4Pb", (Il2CppMethodPointer)b_vPi4i4Pb},
    {"vPoo", (Il2CppMethodPointer)b_vPoo},
    {"vS_Oi4_", (Il2CppMethodPointer)b_vS_Oi4_},
    {"vS_Pvi4i4i4S_pi4i4_i4_", (Il2CppMethodPointer)b_vS_Pvi4i4i4S_pi4i4_i4_},
    {"vS_S_p_i4_o", (Il2CppMethodPointer)b_vS_S_p_i4_o},
    {"vS_S_r4r4_oi4_", (Il2CppMethodPointer)b_vS_S_r4r4_oi4_},
    {"vS_S_u8u8_ooi4i4u8S_r4r4r4_S_r4r4r4r4_S_r4r4r4__", (Il2CppMethodPointer)b_vS_S_u8u8_ooi4i4u8S_r4r4r4_S_r4r4r4r4_S_r4r4r4__},
    {"vS__", (Il2CppMethodPointer)b_vS__},
    {"vS_i4S_r4r4_i4_", (Il2CppMethodPointer)b_vS_i4S_r4r4_i4_},
    {"vS_i4_", (Il2CppMethodPointer)b_vS_i4_},
    {"vS_i4_S_Pvi4S_pi4i4__", (Il2CppMethodPointer)b_vS_i4_S_Pvi4S_pi4i4__},
    {"vS_i4_S_Pvi4i4i4S_pi4i4_i4_", (Il2CppMethodPointer)b_vS_i4_S_Pvi4i4i4S_pi4i4_i4_},
    {"vS_i4_S_i4_", (Il2CppMethodPointer)b_vS_i4_S_i4_},
    {"vS_i4_b", (Il2CppMethodPointer)b_vS_i4_b},
    {"vS_i4_i4", (Il2CppMethodPointer)b_vS_i4_i4},
    {"vS_i4_i4i4", (Il2CppMethodPointer)b_vS_i4_i4i4},
    {"vS_i4_s", (Il2CppMethodPointer)b_vS_i4_s},
    {"vS_i4b_", (Il2CppMethodPointer)b_vS_i4b_},
    {"vS_i4i4S_r4r4r4_S_r4r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_i4u8_", (Il2CppMethodPointer)b_vS_i4i4S_r4r4r4_S_r4r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_i4u8_},
    {"vS_i4i4_", (Il2CppMethodPointer)b_vS_i4i4_},
    {"vS_i4i4i4i4i4_", (Il2CppMethodPointer)b_vS_i4i4i4i4i4_},
    {"vS_i4i4i4ssssssi4i4i4_", (Il2CppMethodPointer)b_vS_i4i4i4ssssssi4i4i4_},
    {"vS_i4i8_", (Il2CppMethodPointer)b_vS_i4i8_},
    {"vS_i4i8_o", (Il2CppMethodPointer)b_vS_i4i8_o},
    {"vS_i4o_", (Il2CppMethodPointer)b_vS_i4o_},
    {"vS_i4osS_u8_S_i8__", (Il2CppMethodPointer)b_vS_i4osS_u8_S_i8__},
    {"vS_i4ss_", (Il2CppMethodPointer)b_vS_i4ss_},
    {"vS_i4u1u1_", (Il2CppMethodPointer)b_vS_i4u1u1_},
    {"vS_i8i8_", (Il2CppMethodPointer)b_vS_i8i8_},
    {"vS_oo_", (Il2CppMethodPointer)b_vS_oo_},
    {"vS_oo_oN_bi4_", (Il2CppMethodPointer)b_vS_oo_oN_bi4_},
    {"vS_oo_oi4", (Il2CppMethodPointer)b_vS_oo_oi4},
    {"vS_oo_oo", (Il2CppMethodPointer)b_vS_oo_oo},
    {"vS_oo_os", (Il2CppMethodPointer)b_vS_oo_os},
    {"vS_oob_", (Il2CppMethodPointer)b_vS_oob_},
    {"vS_oooObS_r4r4r4r4_bb_", (Il2CppMethodPointer)b_vS_oooObS_r4r4r4r4_bb_},
    {"vS_ooooo_", (Il2CppMethodPointer)b_vS_ooooo_},
    {"vS_ossi4i4i4i4o_", (Il2CppMethodPointer)b_vS_ossi4i4i4i4o_},
    {"vS_pS_pi4i4__o", (Il2CppMethodPointer)b_vS_pS_pi4i4__o},
    {"vS_pi4_", (Il2CppMethodPointer)b_vS_pi4_},
    {"vS_pu4_", (Il2CppMethodPointer)b_vS_pu4_},
    {"vS_r4r4_", (Il2CppMethodPointer)b_vS_r4r4_},
    {"vS_r4r4r4_", (Il2CppMethodPointer)b_vS_r4r4r4_},
    {"vS_r4r4r4r4_", (Il2CppMethodPointer)b_vS_r4r4r4r4_},
    {"vS_r4r4r4r4_i4bb", (Il2CppMethodPointer)b_vS_r4r4r4r4_i4bb},
    {"vS_r4r4r4r4_o", (Il2CppMethodPointer)b_vS_r4r4r4r4_o},
    {"vS_r4r4r4r4_oo", (Il2CppMethodPointer)b_vS_r4r4r4r4_oo},
    {"vS_sS_o_S_o__", (Il2CppMethodPointer)b_vS_sS_o_S_o__},
    {"vS_so_", (Il2CppMethodPointer)b_vS_so_},
    {"vS_ss_", (Il2CppMethodPointer)b_vS_ss_},
    {"vS_u8_", (Il2CppMethodPointer)b_vS_u8_},
    {"vS_u8b_", (Il2CppMethodPointer)b_vS_u8b_},
    {"vb", (Il2CppMethodPointer)b_vb},
    {"vbb", (Il2CppMethodPointer)b_vbb},
    {"vbbi4", (Il2CppMethodPointer)b_vbbi4},
    {"vbi4ss", (Il2CppMethodPointer)b_vbi4ss},
    {"vbs", (Il2CppMethodPointer)b_vbs},
    {"vi4", (Il2CppMethodPointer)b_vi4},
    {"vi4Pi4Pb", (Il2CppMethodPointer)b_vi4Pi4Pb},
    {"vi4S_r4r4r4_S_r4r4r4r4_r4i4", (Il2CppMethodPointer)b_vi4S_r4r4r4_S_r4r4r4r4_r4i4},
    {"vi4S_r4r4r4r4_", (Il2CppMethodPointer)b_vi4S_r4r4r4r4_},
    {"vi4i4", (Il2CppMethodPointer)b_vi4i4},
    {"vi4i8i8b", (Il2CppMethodPointer)b_vi4i8i8b},
    {"vi4o", (Il2CppMethodPointer)b_vi4o},
    {"vi4oi4", (Il2CppMethodPointer)b_vi4oi4},
    {"vi4r4", (Il2CppMethodPointer)b_vi4r4},
    {"vi4r8", (Il2CppMethodPointer)b_vi4r8},
    {"vi4ss", (Il2CppMethodPointer)b_vi4ss},
    {"vi8", (Il2CppMethodPointer)b_vi8},
    {"vi8o", (Il2CppMethodPointer)b_vi8o},
    {"vo", (Il2CppMethodPointer)b_vo},
    {"voO", (Il2CppMethodPointer)b_voO},
    {"voS_Oi4_", (Il2CppMethodPointer)b_voS_Oi4_},
    {"voS_Pvi4i4i4S_pi4i4_i4_", (Il2CppMethodPointer)b_voS_Pvi4i4i4S_pi4i4_i4_},
    {"voS_i4_", (Il2CppMethodPointer)b_voS_i4_},
    {"voS_i4_ob", (Il2CppMethodPointer)b_voS_i4_ob},
    {"voS_i4i4i4i4_b", (Il2CppMethodPointer)b_voS_i4i4i4i4_b},
    {"voS_oS_i4_osS_i4u1u1u1u1__", (Il2CppMethodPointer)b_voS_oS_i4_osS_i4u1u1u1u1__},
    {"voS_r4r4_", (Il2CppMethodPointer)b_voS_r4r4_},
    {"voS_r4r4r4_", (Il2CppMethodPointer)b_voS_r4r4r4_},
    {"voS_r4r4r4r4_", (Il2CppMethodPointer)b_voS_r4r4r4r4_},
    {"voS_sosi4i4i4i4i4i4i4_i4", (Il2CppMethodPointer)b_voS_sosi4i4i4i4i4i4i4_i4},
    {"vob", (Il2CppMethodPointer)b_vob},
    {"voi4", (Il2CppMethodPointer)b_voi4},
    {"voi4i4", (Il2CppMethodPointer)b_voi4i4},
    {"voi4o", (Il2CppMethodPointer)b_voi4o},
    {"voi8", (Il2CppMethodPointer)b_voi8},
    {"voo", (Il2CppMethodPointer)b_voo},
    {"vooi4", (Il2CppMethodPointer)b_vooi4},
    {"vooi8", (Il2CppMethodPointer)b_vooi8},
    {"vooo", (Il2CppMethodPointer)b_vooo},
    {"voooo", (Il2CppMethodPointer)b_voooo},
    {"vooooo", (Il2CppMethodPointer)b_vooooo},
    {"voooooo", (Il2CppMethodPointer)b_voooooo},
    {"vooooooo", (Il2CppMethodPointer)b_vooooooo},
    {"voooooooo", (Il2CppMethodPointer)b_voooooooo},
    {"vooooooooo", (Il2CppMethodPointer)b_vooooooooo},
    {"voooooooooo", (Il2CppMethodPointer)b_voooooooooo},
    {"vooooooooooo", (Il2CppMethodPointer)b_vooooooooooo},
    {"voooooooooooo", (Il2CppMethodPointer)b_voooooooooooo},
    {"vooooooooooooo", (Il2CppMethodPointer)b_vooooooooooooo},
    {"voooooooooooooo", (Il2CppMethodPointer)b_voooooooooooooo},
    {"vooooooooooooooo", (Il2CppMethodPointer)b_vooooooooooooooo},
    {"voooooooooooooooo", (Il2CppMethodPointer)b_voooooooooooooooo},
    {"voos", (Il2CppMethodPointer)b_voos},
    {"vor4", (Il2CppMethodPointer)b_vor4},
    {"vor8", (Il2CppMethodPointer)b_vor8},
    {"vos", (Il2CppMethodPointer)b_vos},
    {"vosS_i4i4i4i4_b", (Il2CppMethodPointer)b_vosS_i4i4i4i4_b},
    {"vosb", (Il2CppMethodPointer)b_vosb},
    {"voss", (Il2CppMethodPointer)b_voss},
    {"vou4", (Il2CppMethodPointer)b_vou4},
    {"vp", (Il2CppMethodPointer)b_vp},
    {"vpO", (Il2CppMethodPointer)b_vpO},
    {"vpS_i4i4S_i4i4i4i4u8_S_u1__", (Il2CppMethodPointer)b_vpS_i4i4S_i4i4i4i4u8_S_u1__},
    {"vpS_i4i4_", (Il2CppMethodPointer)b_vpS_i4i4_},
    {"vpS_i4i4i4i4u8_", (Il2CppMethodPointer)b_vpS_i4i4i4i4u8_},
    {"vpb", (Il2CppMethodPointer)b_vpb},
    {"vpc", (Il2CppMethodPointer)b_vpc},
    {"vpi1", (Il2CppMethodPointer)b_vpi1},
    {"vpi2", (Il2CppMethodPointer)b_vpi2},
    {"vpi4", (Il2CppMethodPointer)b_vpi4},
    {"vpi4O", (Il2CppMethodPointer)b_vpi4O},
    {"vpi4Po", (Il2CppMethodPointer)b_vpi4Po},
    {"vpi4o", (Il2CppMethodPointer)b_vpi4o},
    {"vpi8", (Il2CppMethodPointer)b_vpi8},
    {"vpo", (Il2CppMethodPointer)b_vpo},
    {"vpppu4pp", (Il2CppMethodPointer)b_vpppu4pp},
    {"vpr4", (Il2CppMethodPointer)b_vpr4},
    {"vpr8", (Il2CppMethodPointer)b_vpr8},
    {"vps", (Il2CppMethodPointer)b_vps},
    {"vpu1", (Il2CppMethodPointer)b_vpu1},
    {"vpu2", (Il2CppMethodPointer)b_vpu2},
    {"vpu4u4", (Il2CppMethodPointer)b_vpu4u4},
    {"vpu8", (Il2CppMethodPointer)b_vpu8},
    {"vr4", (Il2CppMethodPointer)b_vr4},
    {"vr4PS_r4r4r4r4_Pr4Pr4", (Il2CppMethodPointer)b_vr4PS_r4r4r4r4_Pr4Pr4},
    {"vs", (Il2CppMethodPointer)b_vs},
    {"vsN_bi4_", (Il2CppMethodPointer)b_vsN_bi4_},
    {"vsS_r4r4r4r4_", (Il2CppMethodPointer)b_vsS_r4r4r4r4_},
    {"vsb", (Il2CppMethodPointer)b_vsb},
    {"vsbS_S_Pvi4i4i4S_pi4i4_i4_i4i4i4_", (Il2CppMethodPointer)b_vsbS_S_Pvi4i4i4S_pi4i4_i4_i4i4i4_},
    {"vsbs", (Il2CppMethodPointer)b_vsbs},
    {"vsi4", (Il2CppMethodPointer)b_vsi4},
    {"vso", (Il2CppMethodPointer)b_vso},
    {"vss", (Il2CppMethodPointer)b_vss},
    {"vssi4", (Il2CppMethodPointer)b_vssi4},
    {"vsso", (Il2CppMethodPointer)b_vsso},
    {"vu4u4PS_ppi4i4p_", (Il2CppMethodPointer)b_vu4u4PS_ppi4i4p_},
    {"vu8o", (Il2CppMethodPointer)b_vu8o},
    {nullptr, nullptr}
);

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
