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
// Boolean Invoke() declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateIsProcessingRelayRecover
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
// Boolean Invoke(System.Object) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateUILuaPrefabIsVisibleByObject
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
// Boolean Invoke(System.Object, Assets.Scripts.GameSystem.EquipTakeOff) declare in UIEventID`1[Assets.Scripts.GameSystem.EquipTakeOff]
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
// Boolean Invoke(System.Object, Assets.Scripts.UI.InTheGame.Standard.CurrencyShopSelectCardItemData, Assets.Scripts.UI.InTheGame.CardPopPage.UICardBPMissionContent) declare in UIEventID`2[Assets.Scripts.UI.InTheGame.Standard.CurrencyShopSelectCardItemData,Assets.Scripts.UI.InTheGame.CardPopPage.UICardBPMissionContent]
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
// Boolean Invoke(System.Object, Timi.TimiPointerEventData, Assets.Scripts.UI.CardComponent.Item.UICardItem, Assets.Scripts.UI.CardComponent.Item.UICardItemShowData) declare in UIEventID`3[Timi.TimiPointerEventData,Assets.Scripts.UI.CardComponent.Item.UICardItem,Assets.Scripts.UI.CardComponent.Item.UICardItemShowData]
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
// Boolean Invoke(UnityEngine.Vector2) declare in GenericDelegate`1[UnityEngine.Vector2]
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
// Boolean Invoke(PooledCollections.PoolObjHandle`1[Assets.Scripts.GameLogic.ActorLinker]) declare in Assets.Scripts.GameLogic.LogicGlue+CheckHudComponentVisibleDelegate
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
// Boolean Invoke(Assets.Scripts.UI.InTheGame.GlobalInfo.GlobalTipsPlayerInfo) declare in GenericDelegate`1[Assets.Scripts.UI.InTheGame.GlobalInfo.GlobalTipsPlayerInfo]
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
// Boolean Invoke(AddEquipmentToHeroData) declare in GenericDelegate`1[Assets.Scripts.UI.InTheGame.Standard.UIEquip+AddEquipmentToHeroData]
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
// Boolean Invoke(Int32) declare in System.Func`2[System.Int32,System.Boolean]
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
// Boolean Invoke(TimelineRuntime.TimelineAssetWrap) declare in System.Predicate`1[TimelineRuntime.TimelineAssetWrap]
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
// Boolean Invoke(Assets.Scripts.UI.InTheGame.Standard.CurrencyShopSelectCardItemData, Assets.Scripts.UI.InTheGame.CardPopPage.UICardBPMissionContent) declare in GenericDelegate`2[Assets.Scripts.UI.InTheGame.Standard.CurrencyShopSelectCardItemData,Assets.Scripts.UI.InTheGame.CardPopPage.UICardBPMissionContent]
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
// Boolean Invoke(Timi.TimiPointerEventData, Assets.Scripts.UI.CardComponent.Item.UICardItem, Assets.Scripts.UI.CardComponent.Item.UICardItemShowData) declare in GenericDelegate`3[Timi.TimiPointerEventData,Assets.Scripts.UI.CardComponent.Item.UICardItem,Assets.Scripts.UI.CardComponent.Item.UICardItemShowData]
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
// Boolean Invoke(UInt32) declare in GenericDelegate`1[System.UInt32]
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
// Int32 Invoke(ResData.COM_GAMEITEM_TYPE, ResData.COM_GAMEMONEY_SUBTYPE) declare in System.Func`3[ResData.COM_GAMEITEM_TYPE,ResData.COM_GAMEMONEY_SUBTYPE,System.Int32]
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
// Int32 Invoke(UIEventDelegate, UIEventDelegate) declare in System.Comparison`1[UIEventDelegate]
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
// Int32 Invoke(Assets.Scripts.Framework.UI.UILuaPrefabClass, System.String, Assets.Scripts.Framework.UI.UIPrefab2DClass, UnityEngine.Transform, System.Object, Boolean, UnityEngine.Vector3) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateCreateUILuaPrefab
static int32_t b_i4osooObS_r4r4r4_(void* target, Il2CppObject* p0, Il2CppString* p1, Il2CppObject* p2, Il2CppObject* p3, Il2CppObject* p4, bool p5, struct S_r4r4r4_ p6, MethodInfo* method) {
    // PLog("Running b_i4osooObS_r4r4r4_");
            
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
            DataTransfer::CopyValueType(apis, env, p6, TIp6)
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
// Int32 Invoke(UInt32, UInt32) declare in System.Func`3[System.UInt32,System.UInt32,System.Int32]
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
// System.Collections.Generic.List`1[UnityEngine.Transform] Invoke() declare in System.Func`1[System.Collections.Generic.List`1[UnityEngine.Transform]]
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
// UnityEngine.RectTransform Invoke(Int32) declare in System.Func`2[System.Int32,UnityEngine.RectTransform]
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
// System.Collections.Generic.IEnumerable`1[UnityEngine.GameObject] Invoke(System.Collections.Generic.IEnumerable`1[UnityEngine.GameObject]) declare in System.Func`2[System.Collections.Generic.IEnumerable`1[UnityEngine.GameObject],System.Collections.Generic.IEnumerable`1[UnityEngine.GameObject]]
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
// UnityEngine.Texture2D Invoke(System.String) declare in PandoraSDK.PandoraSDK+DelegateGetItemTex
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
// XLua.LuaTable Invoke(System.String, System.Object) declare in System.Func`3[System.String,System.Object,XLua.LuaTable]
static Il2CppObject* b_osO(void* target, Il2CppString* p0, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_osO");

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
// Void Invoke() declare in UnityEngine.Events.UnityAction
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
// Void Invoke(System.Object, Int32, System.String) declare in System.Action`3[System.Object,System.Int32,System.String]
static void b_vOi4s(void* target, Il2CppObject* p0, int32_t p1, Il2CppString* p2, MethodInfo* method) {
    // PLog("Running b_vOi4s");
            
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
// Void Invoke(System.Object, Int32, System.String, Boolean) declare in System.Action`4[System.Object,System.Int32,System.String,System.Boolean]
static void b_vOi4sb(void* target, Il2CppObject* p0, int32_t p1, Il2CppString* p2, bool p3, MethodInfo* method) {
    // PLog("Running b_vOi4sb");
            
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
            converter::Converter<int32_t>::toScript(apis, env, p1),
            converter::Converter<Il2CppString*>::toScript(apis, env, p2),
            converter::Converter<bool>::toScript(apis, env, p3)
    };
    auto luaret = apis->call_function(env, func, 0, 4, argv);

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
// Void Invoke(PlayerRealTimeInfo ByRef) declare in SGW+PlayerRealTimeInfoTypeDelegate
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
// Void Invoke(MemoryObjectInfo ByRef) declare in SGW+MemoryObjectInfoTypeDelegate
static void b_vPS_ou1_(void* target, struct S_ou1_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_ou1_");
            
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
// Void Invoke(PooledMemoryTotalInfo ByRef) declare in SGW+PooledMemoryTotalInfoTypeDelegate
static void b_vPS_ou1u4u4_(void* target, struct S_ou1u4u4_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_ou1u4u4_");
            
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
// Void Invoke(PlayerGlobalInfo ByRef) declare in SGW+PlayerGlobalInfoTypeDelegate
static void b_vPS_u4i4ooo_(void* target, struct S_u4i4ooo_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_u4i4ooo_");
            
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
// Void Invoke(OSProto.SyncLordSkillInfo ByRef) declare in System.RefAction`1[OSProto.SyncLordSkillInfo]
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
// Void Invoke(FormationMatchDegree) declare in SGW+FormationMatchDegreeLuaDelegate
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
// Void Invoke(PlayerRealTimeInfo) declare in SGW+PlayerRealTimeInfoLuaDelegate
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
// Void Invoke(MemoryObjectInfo) declare in SGW+MemoryObjectInfoLuaDelegate
static void b_vS_ou1_(void* target, struct S_ou1_ p0, MethodInfo* method) {
    // PLog("Running b_vS_ou1_");
            
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
// Void Invoke(PooledMemoryTotalInfo) declare in SGW+PooledMemoryTotalInfoLuaDelegate
static void b_vS_ou1u4u4_(void* target, struct S_ou1u4u4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_ou1u4u4_");
            
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
// Void Invoke(UnityEngine.Vector2) declare in UnityEngine.Events.UnityEvent`1[UnityEngine.Vector2]
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
// Void Invoke(PlayerGlobalInfo) declare in SGW+PlayerGlobalInfoLuaDelegate
static void b_vS_u4i4ooo_(void* target, struct S_u4i4ooo_ p0, MethodInfo* method) {
    // PLog("Running b_vS_u4i4ooo_");
            
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
// Void Invoke(PlayerCardInfos) declare in SGW+PlayerCardInfosLuaDelegate
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
// Void Invoke(PlayerTeamIdInfo) declare in SGW+PlayerTeamIdInfoLuaDelegate
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
// Void Invoke(EquipQueryRet) declare in SGW+EquipQueryRetLuaDelegate
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
// Void Invoke(Int32, UnityEngine.RectTransform) declare in System.Action`2[System.Int32,UnityEngine.RectTransform]
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
// Void Invoke(GCloud.LogPriority, System.String) declare in GCloud.LogHandler
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
// Void Invoke(Int32, System.String, Int32) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateOnLoadAssetCompleted
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
// Void Invoke(TMPro.TMP_TextInfo) declare in System.Action`1[TMPro.TMP_TextInfo]
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
// Void Invoke(Assets.Scripts.Framework.ThreadService.ThreadService, System.Object) declare in System.Action`2[Assets.Scripts.Framework.ThreadService.ThreadService,System.Object]
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
// Void Invoke(CriWare.CriManaMovieMaterialBase, Boolean) declare in CriWare.CriManaMovieMaterialBase+OnApplicationPauseCallback
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
// Void Invoke(UnityEngine.UI.Text, Int32) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+HandleVIPMessage
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
// Void Invoke(TimelineRuntime.Timeline, TimelineRuntime.TimelineEventArgs) declare in TimelineRuntime.TimelineHandler
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
static void b_vooi4oS_bbbbbbbi4i4_(void* target, Il2CppObject* p0, Il2CppObject* p1, int32_t p2, Il2CppObject* p3, struct S_bbbbbbbi4i4_ p4, MethodInfo* method) {
    // PLog("Running b_vooi4oS_bbbbbbbi4i4_");
            
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
// Void Invoke(IntPtr, XLua.LuaTable) declare in System.Action`2[System.IntPtr,XLua.LuaTable]
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
// Void Invoke(Single) declare in UnityEngine.Events.UnityEvent`1[System.Single]
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
// Void Invoke(System.String, UnityEngine.GameObject) declare in System.Action`2[System.String,UnityEngine.GameObject]
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
// Void Invoke(System.String, System.String) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateOnAssetCollection
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
// Void Invoke(UInt64) declare in GCloud.RouteChangedEventHandler
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
// Void Invoke(UInt64, Int32, Int32, Int32, Int32, Int32, Int32) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+NtfPlayerPrizePoolChangedDelegate
static void b_vu8i4i4i4i4i4i4(void* target, uint64_t p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, int32_t p5, int32_t p6, MethodInfo* method) {
    // PLog("Running b_vu8i4i4i4i4i4i4");

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
    converter::Converter<uint64_t>::toScript(apis, env, p0),
            converter::Converter<int32_t>::toScript(apis, env, p1),
            converter::Converter<int32_t>::toScript(apis, env, p2),
            converter::Converter<int32_t>::toScript(apis, env, p3),
            converter::Converter<int32_t>::toScript(apis, env, p4),
            converter::Converter<int32_t>::toScript(apis, env, p5),
            converter::Converter<int32_t>::toScript(apis, env, p6)
    };
    auto luaret = apis->call_function(env, func, 0, 7, argv);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException(msg));
    }

}
static BridgeFuncInfo g_bridgeFuncInfos[] = {
        {"OOso", (Il2CppMethodPointer)b_OOso},
    {"Oi4so", (Il2CppMethodPointer)b_Oi4so},
    {"Opi4O", (Il2CppMethodPointer)b_Opi4O},
    {"Os", (Il2CppMethodPointer)b_Os},
    {"Oss", (Il2CppMethodPointer)b_Oss},
    {"S_r4r4_i4", (Il2CppMethodPointer)b_S_r4r4_i4},
    {"S_r4r4_o", (Il2CppMethodPointer)b_S_r4r4_o},
    {"S_r4r4r4_", (Il2CppMethodPointer)b_S_r4r4r4_},
    {"b", (Il2CppMethodPointer)b_b},
    {"bO", (Il2CppMethodPointer)b_bO},
    {"bOO", (Il2CppMethodPointer)b_bOO},
    {"bOOS_r4r4_", (Il2CppMethodPointer)b_bOOS_r4r4_},
    {"bOOS_r4r4_o", (Il2CppMethodPointer)b_bOOS_r4r4_o},
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
    {"bPS_u4o_", (Il2CppMethodPointer)b_bPS_u4o_},
    {"bS_i4i4o_", (Il2CppMethodPointer)b_bS_i4i4o_},
    {"bS_r4r4_", (Il2CppMethodPointer)b_bS_r4r4_},
    {"bS_u4o_", (Il2CppMethodPointer)b_bS_u4o_},
    {"bS_u4oob_", (Il2CppMethodPointer)b_bS_u4oob_},
    {"bS_u4u4i4S_r4r4_u4_", (Il2CppMethodPointer)b_bS_u4u4i4S_r4r4_u4_},
    {"bS_u4u4r4i4b_", (Il2CppMethodPointer)b_bS_u4u4r4i4b_},
    {"bS_u4u4u4_", (Il2CppMethodPointer)b_bS_u4u4u4_},
    {"bS_u4u4u4u4_", (Il2CppMethodPointer)b_bS_u4u4u4u4_},
    {"bS_u8i4si4u8u8u8_b", (Il2CppMethodPointer)b_bS_u8i4si4u8u8u8_b},
    {"bb", (Il2CppMethodPointer)b_bb},
    {"bbi4", (Il2CppMethodPointer)b_bbi4},
    {"bbi4i4", (Il2CppMethodPointer)b_bbi4i4},
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
    {"boS_r4r4_b", (Il2CppMethodPointer)b_boS_r4r4_b},
    {"boS_r4r4_ob", (Il2CppMethodPointer)b_boS_r4r4_ob},
    {"bob", (Il2CppMethodPointer)b_bob},
    {"bobo", (Il2CppMethodPointer)b_bobo},
    {"boi4", (Il2CppMethodPointer)b_boi4},
    {"boo", (Il2CppMethodPointer)b_boo},
    {"booS_r4r4_b", (Il2CppMethodPointer)b_booS_r4r4_b},
    {"boob", (Il2CppMethodPointer)b_boob},
    {"booo", (Il2CppMethodPointer)b_booo},
    {"booou4", (Il2CppMethodPointer)b_booou4},
    {"bor4", (Il2CppMethodPointer)b_bor4},
    {"bou4oo", (Il2CppMethodPointer)b_bou4oo},
    {"bs", (Il2CppMethodPointer)b_bs},
    {"bsu4i4", (Il2CppMethodPointer)b_bsu4i4},
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
    {"csi4c", (Il2CppMethodPointer)b_csi4c},
    {"i4", (Il2CppMethodPointer)b_i4},
    {"i4b", (Il2CppMethodPointer)b_i4b},
    {"i4i4", (Il2CppMethodPointer)b_i4i4},
    {"i4i4O", (Il2CppMethodPointer)b_i4i4O},
    {"i4i4i4", (Il2CppMethodPointer)b_i4i4i4},
    {"i4o", (Il2CppMethodPointer)b_i4o},
    {"i4oo", (Il2CppMethodPointer)b_i4oo},
    {"i4osooObS_r4r4r4_", (Il2CppMethodPointer)b_i4osooObS_r4r4r4_},
    {"i4p", (Il2CppMethodPointer)b_i4p},
    {"i4pi4i4p", (Il2CppMethodPointer)b_i4pi4i4p},
    {"i4pi4pi4p", (Il2CppMethodPointer)b_i4pi4pi4p},
    {"i4pi8i8i8i8", (Il2CppMethodPointer)b_i4pi8i8i8i8},
    {"i4s", (Il2CppMethodPointer)b_i4s},
    {"i4sbS_r4r4r4_S_r4r4r4_ss", (Il2CppMethodPointer)b_i4sbS_r4r4r4_S_r4r4r4_ss},
    {"i4si4DbDb", (Il2CppMethodPointer)b_i4si4DbDb},
    {"i4ss", (Il2CppMethodPointer)b_i4ss},
    {"i4u4", (Il2CppMethodPointer)b_i4u4},
    {"i4u4i4", (Il2CppMethodPointer)b_i4u4i4},
    {"i4u4i4i4", (Il2CppMethodPointer)b_i4u4i4i4},
    {"i4u4u4", (Il2CppMethodPointer)b_i4u4u4},
    {"o", (Il2CppMethodPointer)b_o},
    {"oi4", (Il2CppMethodPointer)b_oi4},
    {"oi4S_r4r4r4_", (Il2CppMethodPointer)b_oi4S_r4r4r4_},
    {"oo", (Il2CppMethodPointer)b_oo},
    {"oob", (Il2CppMethodPointer)b_oob},
    {"opi4", (Il2CppMethodPointer)b_opi4},
    {"os", (Il2CppMethodPointer)b_os},
    {"osO", (Il2CppMethodPointer)b_osO},
    {"oso", (Il2CppMethodPointer)b_oso},
    {"r4", (Il2CppMethodPointer)b_r4},
    {"r4o", (Il2CppMethodPointer)b_r4o},
    {"r4s", (Il2CppMethodPointer)b_r4s},
    {"s", (Il2CppMethodPointer)b_s},
    {"si4", (Il2CppMethodPointer)b_si4},
    {"si4i4", (Il2CppMethodPointer)b_si4i4},
    {"so", (Il2CppMethodPointer)b_so},
    {"ss", (Il2CppMethodPointer)b_ss},
    {"sssDs", (Il2CppMethodPointer)b_sssDs},
    {"sssoo", (Il2CppMethodPointer)b_sssoo},
    {"u4", (Il2CppMethodPointer)b_u4},
    {"u4i4u4", (Il2CppMethodPointer)b_u4i4u4},
    {"u4soi4i4", (Il2CppMethodPointer)b_u4soi4i4},
    {"u8o", (Il2CppMethodPointer)b_u8o},
    {"v", (Il2CppMethodPointer)b_v},
    {"vO", (Il2CppMethodPointer)b_vO},
    {"vOO", (Il2CppMethodPointer)b_vOO},
    {"vOi4o", (Il2CppMethodPointer)b_vOi4o},
    {"vOi4s", (Il2CppMethodPointer)b_vOi4s},
    {"vOi4sb", (Il2CppMethodPointer)b_vOi4sb},
    {"vOo", (Il2CppMethodPointer)b_vOo},
    {"vPS_S_i4i4i4_i4_", (Il2CppMethodPointer)b_vPS_S_i4i4i4_i4_},
    {"vPS_S_o_S_S_u4u1u1i4i4i4o_oS_S_S_u4u4u4u4u4u4u1u1u4u4S_r4r4r4_u4u2i2u1_S_S_i4i4i4_S_r4r4r4_S_i4i4i4_u1u1u1_S_i4i4i4i4i4i4i4i4i4i4_S_oo_S_i4i4__S_u4S_S_u8_u4u4u4u4u4u1u1u1u1_u1u1u1_S_u4S_S_u8_u4u4u4u4u4u1u1u1u1_u1u1u1__u1u1__", (Il2CppMethodPointer)b_vPS_S_o_S_S_u4u1u1i4i4i4o_oS_S_S_u4u4u4u4u4u4u1u1u4u4S_r4r4r4_u4u2i2u1_S_S_i4i4i4_S_r4r4r4_S_i4i4i4_u1u1u1_S_i4i4i4i4i4i4i4i4i4i4_S_oo_S_i4i4__S_u4S_S_u8_u4u4u4u4u4u1u1u1u1_u1u1u1_S_u4S_S_u8_u4u4u4u4u4u1u1u1u1_u1u1u1__u1u1__},
    {"vPS_S_u4o_S_u4o_S_u4o_S_u4o_bbo_", (Il2CppMethodPointer)b_vPS_S_u4o_S_u4o_S_u4o_S_u4o_bbo_},
    {"vPS_S_u4o_bS_u4o__", (Il2CppMethodPointer)b_vPS_S_u4o_bS_u4o__},
    {"vPS_S_u4o_i4S_u4o__", (Il2CppMethodPointer)b_vPS_S_u4o_i4S_u4o__},
    {"vPS_S_u4o_i4_", (Il2CppMethodPointer)b_vPS_S_u4o_i4_},
    {"vPS_S_u4o_i4i4u4_", (Il2CppMethodPointer)b_vPS_S_u4o_i4i4u4_},
    {"vPS_S_u4u4u4u4u4u4u1u1u4u4S_r4r4r4_u4u2i2u1_S_S_i4i4i4_S_r4r4r4_S_i4i4i4_u1u1u1_S_i4i4i4i4i4i4i4i4i4i4_S_oo_S_i4i4__", (Il2CppMethodPointer)b_vPS_S_u4u4u4u4u4u4u1u1u4u4S_r4r4r4_u4u2i2u1_S_S_i4i4i4_S_r4r4r4_S_i4i4i4_u1u1u1_S_i4i4i4i4i4i4i4i4i4i4_S_oo_S_i4i4__},
    {"vPS_i4_", (Il2CppMethodPointer)b_vPS_i4_},
    {"vPS_i4i4_", (Il2CppMethodPointer)b_vPS_i4i4_},
    {"vPS_i4i4i4_", (Il2CppMethodPointer)b_vPS_i4i4i4_},
    {"vPS_i4o_", (Il2CppMethodPointer)b_vPS_i4o_},
    {"vPS_o_", (Il2CppMethodPointer)b_vPS_o_},
    {"vPS_oo_", (Il2CppMethodPointer)b_vPS_oo_},
    {"vPS_ooo_", (Il2CppMethodPointer)b_vPS_ooo_},
    {"vPS_oou4_", (Il2CppMethodPointer)b_vPS_oou4_},
    {"vPS_ou1_", (Il2CppMethodPointer)b_vPS_ou1_},
    {"vPS_ou1u4u4_", (Il2CppMethodPointer)b_vPS_ou1u4u4_},
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
    {"vPS_u4i4ooo_", (Il2CppMethodPointer)b_vPS_u4i4ooo_},
    {"vPS_u4i4s_", (Il2CppMethodPointer)b_vPS_u4i4s_},
    {"vPS_u4o_", (Il2CppMethodPointer)b_vPS_u4o_},
    {"vPS_u4ooo_", (Il2CppMethodPointer)b_vPS_u4ooo_},
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
    {"vPS_u4u4u4u4u4u4u4u4u4u4_", (Il2CppMethodPointer)b_vPS_u4u4u4u4u4u4u4u4u4u4_},
    {"vPS_u8psu4i4u4u4_", (Il2CppMethodPointer)b_vPS_u8psu4i4u4u4_},
    {"vPS_u8u4u4u4u4u4u4u4u4u2S_u4u4u4u4u4u4_S_u4u4u4u4u4u4__", (Il2CppMethodPointer)b_vPS_u8u4u4u4u4u4u4u4u4u2S_u4u4u4u4u4u4_S_u4u4u4u4u4u4__},
    {"vPo", (Il2CppMethodPointer)b_vPo},
    {"vPr4", (Il2CppMethodPointer)b_vPr4},
    {"vPu1", (Il2CppMethodPointer)b_vPu1},
    {"vPu4", (Il2CppMethodPointer)b_vPu4},
    {"vS_S_i4i4i4_i4_", (Il2CppMethodPointer)b_vS_S_i4i4i4_i4_},
    {"vS_S_o_S_S_u4u1u1i4i4i4o_oS_S_S_u4u4u4u4u4u4u1u1u4u4S_r4r4r4_u4u2i2u1_S_S_i4i4i4_S_r4r4r4_S_i4i4i4_u1u1u1_S_i4i4i4i4i4i4i4i4i4i4_S_oo_S_i4i4__S_u4S_S_u8_u4u4u4u4u4u1u1u1u1_u1u1u1_S_u4S_S_u8_u4u4u4u4u4u1u1u1u1_u1u1u1__u1u1__", (Il2CppMethodPointer)b_vS_S_o_S_S_u4u1u1i4i4i4o_oS_S_S_u4u4u4u4u4u4u1u1u4u4S_r4r4r4_u4u2i2u1_S_S_i4i4i4_S_r4r4r4_S_i4i4i4_u1u1u1_S_i4i4i4i4i4i4i4i4i4i4_S_oo_S_i4i4__S_u4S_S_u8_u4u4u4u4u4u1u1u1u1_u1u1u1_S_u4S_S_u8_u4u4u4u4u4u1u1u1u1_u1u1u1__u1u1__},
    {"vS_i4_", (Il2CppMethodPointer)b_vS_i4_},
    {"vS_i4_i4", (Il2CppMethodPointer)b_vS_i4_i4},
    {"vS_i4i4_", (Il2CppMethodPointer)b_vS_i4i4_},
    {"vS_i4o_", (Il2CppMethodPointer)b_vS_i4o_},
    {"vS_i4o_u4", (Il2CppMethodPointer)b_vS_i4o_u4},
    {"vS_o_", (Il2CppMethodPointer)b_vS_o_},
    {"vS_oo_", (Il2CppMethodPointer)b_vS_oo_},
    {"vS_ooo_", (Il2CppMethodPointer)b_vS_ooo_},
    {"vS_oou4_", (Il2CppMethodPointer)b_vS_oou4_},
    {"vS_ou1_", (Il2CppMethodPointer)b_vS_ou1_},
    {"vS_ou1u4u4_", (Il2CppMethodPointer)b_vS_ou1u4u4_},
    {"vS_pi4_", (Il2CppMethodPointer)b_vS_pi4_},
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
    {"vS_u1u4i4i4i4_", (Il2CppMethodPointer)b_vS_u1u4i4i4i4_},
    {"vS_u4S_i4i4i4_S_r4r4r4_i4S_r4r4r4r4_u4u1_", (Il2CppMethodPointer)b_vS_u4S_i4i4i4_S_r4r4r4_i4S_r4r4r4r4_u4u1_},
    {"vS_u4i4i4_", (Il2CppMethodPointer)b_vS_u4i4i4_},
    {"vS_u4i4o_", (Il2CppMethodPointer)b_vS_u4i4o_},
    {"vS_u4i4ooo_", (Il2CppMethodPointer)b_vS_u4i4ooo_},
    {"vS_u4i4s_", (Il2CppMethodPointer)b_vS_u4i4s_},
    {"vS_u4i4u1u4_", (Il2CppMethodPointer)b_vS_u4i4u1u4_},
    {"vS_u4o_", (Il2CppMethodPointer)b_vS_u4o_},
    {"vS_u4o_S_u1u2u1u1S_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4__", (Il2CppMethodPointer)b_vS_u4o_S_u1u2u1u1S_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4__},
    {"vS_u4o_b", (Il2CppMethodPointer)b_vS_u4o_b},
    {"vS_u4ooo_", (Il2CppMethodPointer)b_vS_u4ooo_},
    {"vS_u4u1i4i4oo_", (Il2CppMethodPointer)b_vS_u4u1i4i4oo_},
    {"vS_u4u1u4u4u1u4u4_", (Il2CppMethodPointer)b_vS_u4u1u4u4u1u4u4_},
    {"vS_u4u4_", (Il2CppMethodPointer)b_vS_u4u4_},
    {"vS_u4u4b_", (Il2CppMethodPointer)b_vS_u4u4b_},
    {"vS_u4u4oo_", (Il2CppMethodPointer)b_vS_u4u4oo_},
    {"vS_u4u4ooo_", (Il2CppMethodPointer)b_vS_u4u4ooo_},
    {"vS_u4u4oooo_", (Il2CppMethodPointer)b_vS_u4u4oooo_},
    {"vS_u4u4u4_", (Il2CppMethodPointer)b_vS_u4u4u4_},
    {"vS_u4u4u4i4_", (Il2CppMethodPointer)b_vS_u4u4u4i4_},
    {"vS_u4u4u4u4_", (Il2CppMethodPointer)b_vS_u4u4u4u4_},
    {"vS_u4u4u4u4u4_", (Il2CppMethodPointer)b_vS_u4u4u4u4u4_},
    {"vS_u4u4u4u4u4u4u4u4u4u4_", (Il2CppMethodPointer)b_vS_u4u4u4u4u4u4u4u4u4u4_},
    {"vS_u8u4u4u4u4u4u4u4u4u2S_u4u4u4u4u4u4_S_u4u4u4u4u4u4__", (Il2CppMethodPointer)b_vS_u8u4u4u4u4u4u4u4u4u2S_u4u4u4u4u4u4_S_u4u4u4u4u4u4__},
    {"vb", (Il2CppMethodPointer)b_vb},
    {"vbPS_i4i4_", (Il2CppMethodPointer)b_vbPS_i4i4_},
    {"vbi4", (Il2CppMethodPointer)b_vbi4},
    {"vbi4u4", (Il2CppMethodPointer)b_vbi4u4},
    {"vbo", (Il2CppMethodPointer)b_vbo},
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
    {"vi8bu4u4", (Il2CppMethodPointer)b_vi8bu4u4},
    {"vi8i4", (Il2CppMethodPointer)b_vi8i4},
    {"vi8i4i8i8i8", (Il2CppMethodPointer)b_vi8i4i8i8i8},
    {"vi8i8i8i8", (Il2CppMethodPointer)b_vi8i8i8i8},
    {"vi8i8i8i8o", (Il2CppMethodPointer)b_vi8i8i8i8o},
    {"vi8pu4", (Il2CppMethodPointer)b_vi8pu4},
    {"vi8su4", (Il2CppMethodPointer)b_vi8su4},
    {"vo", (Il2CppMethodPointer)b_vo},
    {"voO", (Il2CppMethodPointer)b_voO},
    {"voS_r4r4_", (Il2CppMethodPointer)b_voS_r4r4_},
    {"vob", (Il2CppMethodPointer)b_vob},
    {"voi4", (Il2CppMethodPointer)b_voi4},
    {"voi4o", (Il2CppMethodPointer)b_voi4o},
    {"voi4s", (Il2CppMethodPointer)b_voi4s},
    {"voo", (Il2CppMethodPointer)b_voo},
    {"vooi4oS_bbbbbbbi4i4_", (Il2CppMethodPointer)b_vooi4oS_bbbbbbbi4i4_},
    {"vooo", (Il2CppMethodPointer)b_vooo},
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
    {"vpi4i4i4", (Il2CppMethodPointer)b_vpi4i4i4},
    {"vpo", (Il2CppMethodPointer)b_vpo},
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
    {"vss", (Il2CppMethodPointer)b_vss},
    {"vssO", (Il2CppMethodPointer)b_vssO},
    {"vssi4", (Il2CppMethodPointer)b_vssi4},
    {"vssi4i4", (Il2CppMethodPointer)b_vssi4i4},
    {"vssi4o", (Il2CppMethodPointer)b_vssi4o},
    {"vsso", (Il2CppMethodPointer)b_vsso},
    {"vssoo", (Il2CppMethodPointer)b_vssoo},
    {"vsu4", (Il2CppMethodPointer)b_vsu4},
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
    {"vu8i4i4i4i4i4i4", (Il2CppMethodPointer)b_vu8i4i4i4i4i4i4},
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

