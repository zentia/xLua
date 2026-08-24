// Auto Gen

#include "il2cpp-api.h"
#include "il2cpp-class-internals.h"
#include "il2cpp-object-internals.h"
#include "vm/Array.h"
#include "pesapi.h"
#include "TDataTrans.h"
#include "LuaValueType.h"
#include "vm/Exception.h"

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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<Il2CppString*>::toScript(apis, env, p1);
	CSRefToLuaValue(apis, env, TIp2, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	converter::Converter<Il2CppString*>::toScript(apis, env, p1);
	CSRefToLuaValue(apis, env, TIp2, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }

    // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValueToCSRef(apis, TIret, env, luaret);

    return ret;

}
// System.Object Invoke(Timi.LineChartNode, UnityEngine.Vector2) declare in Timi.ChartNodeGenerateHandler
static Il2CppObject* b_OoS_r4r4_(void* target, Il2CppObject* p0, struct S_r4r4_ p1, MethodInfo* method) {
    // PLog("Running b_OoS_r4r4_");

    auto TIret = GetReturnType(method);
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	xlua::DataTransfer::CopyValueType(apis, env, p1, TIp1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }

    // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValueToCSRef(apis, TIret, env, luaret);

    return ret;

}
// System.Object Invoke(System.Delegate, System.Object[]) declare in System.ComponentModel.ISynchronizeInvoke
static Il2CppObject* b_Ooo(void* target, Il2CppObject* p0, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_Ooo");

    auto TIret = GetReturnType(method);
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	CSRefToLuaValue(apis, env, TIp2, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }

    // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValueToCSRef(apis, TIret, env, luaret);

    return ret;

}
// System.Object Invoke(System.String) declare in Assets.Scripts.Framework.Lua.LuaService+ImportDelegate
static Il2CppObject* b_Os(void* target, Il2CppString* p0, MethodInfo* method) {
    // PLog("Running b_Os");

    auto TIret = GetReturnType(method);
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }

    // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValueToCSRef(apis, TIret, env, luaret);

    return ret;

}
// System.Object Invoke(System.String, System.String) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateGetDataServiceObject
static Il2CppObject* b_Oss(void* target, Il2CppString* p0, Il2CppString* p1, MethodInfo* method) {
    // PLog("Running b_Oss");

    auto TIret = GetReturnType(method);
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	converter::Converter<Il2CppString*>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }

    // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValueToCSRef(apis, TIret, env, luaret);

    return ret;

}
// Assets.Scripts.GameSystem.MuteResult Invoke(Assets.Scripts.GameSystem.MuteLayerPassive, Boolean) declare in Assets.Scripts.GameSystem.DelegatePassiveLayerVisibleChanged
static struct S_bi4oS_oo__ b_S_bi4oS_oo__ob(void* target, Il2CppObject* p0, bool p1, MethodInfo* method) {
    // PLog("Running b_S_bi4oS_oo__ob");

    auto TIret = GetReturnType(method);
            
    auto TIp0 = GetParameterType(method, 0);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<bool>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal struct
    S_bi4oS_oo__* pret = xlua::DataTransfer::GetPointer<S_bi4oS_oo__>(apis, env, luaret);
    S_bi4oS_oo__ ret = pret ? *pret : S_bi4oS_oo__ {};
        
    return ret;

}
// Assets.Scripts.GameSystem.MuteResult Invoke(Assets.Scripts.GameSystem.MuteLayerPopupBase, Boolean, OSProto.MuteParamCardPoolInitShow) declare in Assets.Scripts.GameSystem.DelegatePopupLayerVisibleChanged`1[OSProto.MuteParamCardPoolInitShow]
static struct S_bi4oS_oo__ b_S_bi4oS_oo__obo(void* target, Il2CppObject* p0, bool p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_S_bi4oS_oo__obo");

    auto TIret = GetReturnType(method);
            
    auto TIp0 = GetParameterType(method, 0);
                    
    auto TIp2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<bool>::toScript(apis, env, p1);
	CSRefToLuaValue(apis, env, TIp2, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal struct
    S_bi4oS_oo__* pret = xlua::DataTransfer::GetPointer<S_bi4oS_oo__>(apis, env, luaret);
    S_bi4oS_oo__ ret = pret ? *pret : S_bi4oS_oo__ {};
        
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    xlua::DataTransfer::CopyValueType(apis, env, p0, TIp0);
	xlua::DataTransfer::CopyValueType(apis, env, p1, TIp1);
	converter::Converter<float>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal struct
    S_o_* pret = xlua::DataTransfer::GetPointer<S_o_>(apis, env, luaret);
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal struct
    S_o_* pret = xlua::DataTransfer::GetPointer<S_o_>(apis, env, luaret);
    S_o_ ret = pret ? *pret : S_o_ {};
        
    return ret;

}
// UnityEngine.Vector2 Invoke() declare in System.Func`1[UnityEngine.Vector2]
static struct S_r4r4_ b_S_r4r4_(void* target, MethodInfo* method) {
    // PLog("Running b_S_r4r4_");

    auto TIret = GetReturnType(method);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    pesapi_value *argv = nullptr;
    auto luaret = apis->call_function(env, err_func, 0);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal struct
    S_r4r4_* pret = xlua::DataTransfer::GetPointer<S_r4r4_>(apis, env, luaret);
    S_r4r4_ ret = pret ? *pret : S_r4r4_ {};
        
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    xlua::DataTransfer::CopyValueType(apis, env, p0, TIp0);
	xlua::DataTransfer::CopyValueType(apis, env, p1, TIp1);
	converter::Converter<float>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal struct
    S_r4r4_* pret = xlua::DataTransfer::GetPointer<S_r4r4_>(apis, env, luaret);
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal struct
    S_r4r4_* pret = xlua::DataTransfer::GetPointer<S_r4r4_>(apis, env, luaret);
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal struct
    S_r4r4_* pret = xlua::DataTransfer::GetPointer<S_r4r4_>(apis, env, luaret);
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    pesapi_value *argv = nullptr;
    auto luaret = apis->call_function(env, err_func, 0);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal struct
    S_r4r4r4_* pret = xlua::DataTransfer::GetPointer<S_r4r4r4_>(apis, env, luaret);
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    xlua::DataTransfer::CopyValueType(apis, env, p0, TIp0);
	xlua::DataTransfer::CopyValueType(apis, env, p1, TIp1);
	converter::Converter<float>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal struct
    S_r4r4r4_* pret = xlua::DataTransfer::GetPointer<S_r4r4r4_>(apis, env, luaret);
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal struct
    S_r4r4r4_* pret = xlua::DataTransfer::GetPointer<S_r4r4r4_>(apis, env, luaret);
    S_r4r4r4_ ret = pret ? *pret : S_r4r4r4_ {};
        
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    xlua::DataTransfer::CopyValueType(apis, env, p0, TIp0);
	xlua::DataTransfer::CopyValueType(apis, env, p1, TIp1);
	converter::Converter<float>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal struct
    S_r4r4r4r4_* pret = xlua::DataTransfer::GetPointer<S_r4r4r4r4_>(apis, env, luaret);
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal struct
    S_r4r4r4r4_* pret = xlua::DataTransfer::GetPointer<S_r4r4r4r4_>(apis, env, luaret);
    S_r4r4r4r4_ ret = pret ? *pret : S_r4r4r4r4_ {};
        
    return ret;

}
// Byte[] Invoke(System.String, XLua.LuaTable) declare in System.Func`3[System.String,XLua.LuaTable,System.Byte[]]
static Il2CppObject* b_aso(void* target, Il2CppString* p0, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_aso");

    auto TIret = GetReturnType(method);
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }

    // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValueToCSRef(apis, TIret, env, luaret);

    return ret;

}
// Boolean Invoke() declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateIsProcessingRelayRecover
static bool b_b(void* target, MethodInfo* method) {
    // PLog("Running b_b");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    pesapi_value *argv = nullptr;
    auto luaret = apis->call_function(env, err_func, 0);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
	xlua::DataTransfer::CopyValueType(apis, env, p2, TIp2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
	xlua::DataTransfer::CopyValueType(apis, env, p2, TIp2);
	CSRefToLuaValue(apis, env, TIp3, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);

    return ret;

}
// Boolean Invoke(System.Object, UnityEngine.Vector2) declare in UIEventID`1[UnityEngine.Vector2]
static bool b_bOS_r4r4_(void* target, Il2CppObject* p0, struct S_r4r4_ p1, MethodInfo* method) {
    // PLog("Running b_bOS_r4r4_");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	xlua::DataTransfer::CopyValueType(apis, env, p1, TIp1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);

    return ret;

}
// Boolean Invoke(System.Object, PooledCollections.PoolObjHandle`1[Assets.Scripts.GameSystem.LordSkillOpData]) declare in UIEventID`1[PooledCollections.PoolObjHandle`1[Assets.Scripts.GameSystem.LordSkillOpData]]
static bool b_bOS_u4o_(void* target, Il2CppObject* p0, struct S_u4o_ p1, MethodInfo* method) {
    // PLog("Running b_bOS_u4o_");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	xlua::DataTransfer::CopyValueType(apis, env, p1, TIp1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	xlua::DataTransfer::CopyValueType(apis, env, p1, TIp1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	xlua::DataTransfer::CopyValueType(apis, env, p1, TIp1);
	converter::Converter<bool>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<bool>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);

    return ret;

}
// Boolean Invoke(System.Object, Boolean, Boolean) declare in UIEventID`2[System.Boolean,System.Boolean]
static bool b_bObb(void* target, Il2CppObject* p0, bool p1, bool p2, MethodInfo* method) {
    // PLog("Running b_bObb");
            
    auto TIp0 = GetParameterType(method, 0);
                        
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<bool>::toScript(apis, env, p1);
	converter::Converter<bool>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<bool>::toScript(apis, env, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<bool>::toScript(apis, env, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
	converter::Converter<int32_t>::toScript(apis, env, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);

    return ret;

}
// Boolean Invoke(System.Object, Boolean, UInt32) declare in UIEventID`2[System.Boolean,System.UInt32]
static bool b_bObu4(void* target, Il2CppObject* p0, bool p1, uint32_t p2, MethodInfo* method) {
    // PLog("Running b_bObu4");
            
    auto TIp0 = GetParameterType(method, 0);
                        
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<bool>::toScript(apis, env, p1);
	converter::Converter<uint32_t>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);

    return ret;

}
// Boolean Invoke(System.Object, TypeEnum) declare in UIEventID`1[Assets.Scripts.UI.InTheGame.StandardHUD.UIInTheGameTabItem+TypeEnum]
static bool b_bOi4(void* target, Il2CppObject* p0, int32_t p1, MethodInfo* method) {
    // PLog("Running b_bOi4");
            
    auto TIp0 = GetParameterType(method, 0);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);

    return ret;

}
// Boolean Invoke(System.Object, Int32, UnityEngine.Vector3) declare in UIEventID`2[System.Int32,UnityEngine.Vector3]
static bool b_bOi4S_r4r4r4_(void* target, Il2CppObject* p0, int32_t p1, struct S_r4r4r4_ p2, MethodInfo* method) {
    // PLog("Running b_bOi4S_r4r4r4_");
            
    auto TIp0 = GetParameterType(method, 0);
                    
    auto TIp2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	xlua::DataTransfer::CopyValueType(apis, env, p2, TIp2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	converter::Converter<bool>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	converter::Converter<bool>::toScript(apis, env, p2);
	converter::Converter<bool>::toScript(apis, env, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);

    return ret;

}
// Boolean Invoke(System.Object, Int32, Int32, UnityEngine.RectTransform) declare in UIEventID`3[System.Int32,System.Int32,UnityEngine.RectTransform]
static bool b_bOi4i4o(void* target, Il2CppObject* p0, int32_t p1, int32_t p2, Il2CppObject* p3, MethodInfo* method) {
    // PLog("Running b_bOi4i4o");
            
    auto TIp0 = GetParameterType(method, 0);
                                
    auto TIp3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
	CSRefToLuaValue(apis, env, TIp3, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	CSRefToLuaValue(apis, env, TIp2, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);

    return ret;

}
// Boolean Invoke(System.Object, Int32, Single, Boolean, Single) declare in UIEventID`4[System.Int32,System.Single,System.Boolean,System.Single]
static bool b_bOi4r4br4(void* target, Il2CppObject* p0, int32_t p1, float p2, bool p3, float p4, MethodInfo* method) {
    // PLog("Running b_bOi4r4br4");
            
    auto TIp0 = GetParameterType(method, 0);
                                                
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	converter::Converter<float>::toScript(apis, env, p2);
	converter::Converter<bool>::toScript(apis, env, p3);
	converter::Converter<float>::toScript(apis, env, p4);
    auto luaret = apis->call_function(env, err_func, 5);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);

    return ret;

}
// Boolean Invoke(System.Object, Int32, UInt32, Boolean) declare in UIEventID`3[System.Int32,System.UInt32,System.Boolean]
static bool b_bOi4u4b(void* target, Il2CppObject* p0, int32_t p1, uint32_t p2, bool p3, MethodInfo* method) {
    // PLog("Running b_bOi4u4b");
            
    auto TIp0 = GetParameterType(method, 0);
                                    
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	converter::Converter<uint32_t>::toScript(apis, env, p2);
	converter::Converter<bool>::toScript(apis, env, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	converter::Converter<uint32_t>::toScript(apis, env, p2);
	converter::Converter<uint32_t>::toScript(apis, env, p3);
	converter::Converter<uint32_t>::toScript(apis, env, p4);
    auto luaret = apis->call_function(env, err_func, 5);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);

    return ret;

}
// Boolean Invoke(System.Object, HeroEquipDragEndRet) declare in UIEventID`1[Assets.Scripts.GameSystem.UIComponentEquip+HeroEquipDragEndRet]
static bool b_bOo(void* target, Il2CppObject* p0, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_bOo");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
	xlua::DataTransfer::CopyValueType(apis, env, p2, TIp2);
	converter::Converter<bool>::toScript(apis, env, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
	xlua::DataTransfer::CopyValueType(apis, env, p2, TIp2);
	CSRefToLuaValue(apis, env, TIp3, p3);
	converter::Converter<bool>::toScript(apis, env, p4);
    auto luaret = apis->call_function(env, err_func, 5);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);

    return ret;

}
// Boolean Invoke(System.Object, UnityEngine.RectTransform, UnityEngine.Vector3, Single, FlyType) declare in UIEventID`4[UnityEngine.RectTransform,UnityEngine.Vector3,System.Single,Assets.Scripts.UI.GameBanner.Item.UIGameBannerAuctionTip+FlyType]
static bool b_bOoS_r4r4r4_r4i4(void* target, Il2CppObject* p0, Il2CppObject* p1, struct S_r4r4r4_ p2, float p3, int32_t p4, MethodInfo* method) {
    // PLog("Running b_bOoS_r4r4r4_r4i4");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
        
    auto TIp2 = GetParameterType(method, 2);
                        
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
	xlua::DataTransfer::CopyValueType(apis, env, p2, TIp2);
	converter::Converter<float>::toScript(apis, env, p3);
	converter::Converter<int32_t>::toScript(apis, env, p4);
    auto luaret = apis->call_function(env, err_func, 5);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);

    return ret;

}
// Boolean Invoke(System.Object, UIPrefabBase, Boolean) declare in UIEventID`2[UIPrefabBase,System.Boolean]
static bool b_bOob(void* target, Il2CppObject* p0, Il2CppObject* p1, bool p2, MethodInfo* method) {
    // PLog("Running b_bOob");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
	converter::Converter<bool>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);

    return ret;

}
// Boolean Invoke(System.Object, Assets.Scripts.UI.InTheGame.CardPopPage.CurrencyShopItemRewardData, Int32, Int32) declare in UIEventID`3[Assets.Scripts.UI.InTheGame.CardPopPage.CurrencyShopItemRewardData,System.Int32,System.Int32]
static bool b_bOoi4i4(void* target, Il2CppObject* p0, Il2CppObject* p1, int32_t p2, int32_t p3, MethodInfo* method) {
    // PLog("Running b_bOoi4i4");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
                        
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
	converter::Converter<int32_t>::toScript(apis, env, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);

    return ret;

}
// Boolean Invoke(System.Object, Timi.TimiPointerEventData, Assets.Scripts.UI.CardComponent.Item.UICardItem) declare in UIEventID`2[Timi.TimiPointerEventData,Assets.Scripts.UI.CardComponent.Item.UICardItem]
static bool b_bOoo(void* target, Il2CppObject* p0, Il2CppObject* p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_bOoo");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
        
    auto TIp2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
	CSRefToLuaValue(apis, env, TIp2, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
	CSRefToLuaValue(apis, env, TIp2, p2);
	converter::Converter<bool>::toScript(apis, env, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);

    return ret;

}
// Boolean Invoke(System.Object, Assets.Scripts.UI.InTheGame.CardPopPage.CurrencyShopSelectCardItemData, Assets.Scripts.UI.InTheGame.CardPopPage.UICardBPMissionContent, OSProto.PVPRoundHUDOPType) declare in UIEventID`3[Assets.Scripts.UI.InTheGame.CardPopPage.CurrencyShopSelectCardItemData,Assets.Scripts.UI.InTheGame.CardPopPage.UICardBPMissionContent,OSProto.PVPRoundHUDOPType]
static bool b_bOooi4(void* target, Il2CppObject* p0, Il2CppObject* p1, Il2CppObject* p2, int32_t p3, MethodInfo* method) {
    // PLog("Running b_bOooi4");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
        
    auto TIp2 = GetParameterType(method, 2);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
	CSRefToLuaValue(apis, env, TIp2, p2);
	converter::Converter<int32_t>::toScript(apis, env, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);

    return ret;

}
// Boolean Invoke(System.Object, Timi.TimiPointerEventData, Assets.Scripts.UI.CardComponent.Item.UICardItem, UInt32) declare in UIEventID`3[Timi.TimiPointerEventData,Assets.Scripts.UI.CardComponent.Item.UICardItem,System.UInt32]
static bool b_bOoou4(void* target, Il2CppObject* p0, Il2CppObject* p1, Il2CppObject* p2, uint32_t p3, MethodInfo* method) {
    // PLog("Running b_bOoou4");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
        
    auto TIp2 = GetParameterType(method, 2);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
	CSRefToLuaValue(apis, env, TIp2, p2);
	converter::Converter<uint32_t>::toScript(apis, env, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
	converter::Converter<float>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);

    return ret;

}
// Boolean Invoke(System.Object, Assets.Scripts.UI.CardComponent.Item.UICardItem, UInt32) declare in UIEventID`2[Assets.Scripts.UI.CardComponent.Item.UICardItem,System.UInt32]
static bool b_bOou4(void* target, Il2CppObject* p0, Il2CppObject* p1, uint32_t p2, MethodInfo* method) {
    // PLog("Running b_bOou4");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
	converter::Converter<uint32_t>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<Il2CppString*>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<uint32_t>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);

    return ret;

}
// Boolean Invoke(System.Object, UInt32, RankItemAnimInfo) declare in UIEventID`2[System.UInt32,Assets.Scripts.UI.InTheGame.PlayerRank.UIMiddleLeftInfo+RankItemAnimInfo]
static bool b_bOu4S_i4i4i4so_(void* target, Il2CppObject* p0, uint32_t p1, struct S_i4i4i4so_ p2, MethodInfo* method) {
    // PLog("Running b_bOu4S_i4i4i4so_");
            
    auto TIp0 = GetParameterType(method, 0);
                    
    auto TIp2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<uint32_t>::toScript(apis, env, p1);
	xlua::DataTransfer::CopyValueType(apis, env, p2, TIp2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<uint32_t>::toScript(apis, env, p1);
	xlua::DataTransfer::CopyValueType(apis, env, p2, TIp2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<uint32_t>::toScript(apis, env, p1);
	converter::Converter<bool>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<uint32_t>::toScript(apis, env, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);

    return ret;

}
// Boolean Invoke(System.Object, UInt32, OSProto.ArtDestroyType, Single) declare in UIEventID`3[System.UInt32,OSProto.ArtDestroyType,System.Single]
static bool b_bOu4i4r4(void* target, Il2CppObject* p0, uint32_t p1, int32_t p2, float p3, MethodInfo* method) {
    // PLog("Running b_bOu4i4r4");
            
    auto TIp0 = GetParameterType(method, 0);
                                    
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<uint32_t>::toScript(apis, env, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
	converter::Converter<float>::toScript(apis, env, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);

    return ret;

}
// Boolean Invoke(System.Object, UInt32, System.Collections.Generic.List`1[System.UInt32]) declare in UIEventID`2[System.UInt32,System.Collections.Generic.List`1[System.UInt32]]
static bool b_bOu4o(void* target, Il2CppObject* p0, uint32_t p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_bOu4o");
            
    auto TIp0 = GetParameterType(method, 0);
                    
    auto TIp2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<uint32_t>::toScript(apis, env, p1);
	CSRefToLuaValue(apis, env, TIp2, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<uint32_t>::toScript(apis, env, p1);
	CSRefToLuaValue(apis, env, TIp2, p2);
	converter::Converter<int32_t>::toScript(apis, env, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<uint32_t>::toScript(apis, env, p1);
	converter::Converter<float>::toScript(apis, env, p2);
	converter::Converter<bool>::toScript(apis, env, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<uint32_t>::toScript(apis, env, p1);
	converter::Converter<uint32_t>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<uint32_t>::toScript(apis, env, p1);
	converter::Converter<uint32_t>::toScript(apis, env, p2);
	CSRefToLuaValue(apis, env, TIp3, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    xlua::DataTransfer::CopyValueType(apis, env, p0, TIp0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    xlua::DataTransfer::CopyValueType(apis, env, p0, TIp0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);

    return ret;

}
// Boolean Invoke(Assets.Scripts.GameSystem.EquipRecipe) declare in System.Predicate`1[Assets.Scripts.GameSystem.EquipRecipe]
static bool b_bS_u4u4_(void* target, struct S_u4u4_ p0, MethodInfo* method) {
    // PLog("Running b_bS_u4u4_");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    xlua::DataTransfer::CopyValueType(apis, env, p0, TIp0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);

    return ret;

}
// Boolean Invoke(Boolean) declare in System.Func`2[System.Boolean,System.Boolean]
static bool b_bb(void* target, bool p0, MethodInfo* method) {
    // PLog("Running b_bb");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<bool>::toScript(apis, env, p0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<bool>::toScript(apis, env, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);

    return ret;

}
// Boolean Invoke(ResData.RES_SYSTEM_TYPE) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateCheckUnLockState
static bool b_bi4(void* target, int32_t p0, MethodInfo* method) {
    // PLog("Running b_bi4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);

    return ret;

}
// Boolean Invoke(Int32, Int32) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateIsIdipEntryClosed
static bool b_bi4Di4(void* target, int32_t p0, int32_t p1, MethodInfo* method) {
    // PLog("Running b_bi4Di4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	xlua::DataTransfer::CopyValueType(apis, env, p1, TIp1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	converter::Converter<bool>::toScript(apis, env, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	converter::Converter<float>::toScript(apis, env, p1);
	converter::Converter<float>::toScript(apis, env, p2);
	converter::Converter<float>::toScript(apis, env, p3);
	converter::Converter<float>::toScript(apis, env, p4);
	converter::Converter<float>::toScript(apis, env, p5);
    auto luaret = apis->call_function(env, err_func, 6);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);

    return ret;

}
// Boolean Invoke(Int64) declare in Timi.TimiImage+NotExpiredDelegate
static bool b_bi8(void* target, int64_t p0, MethodInfo* method) {
    // PLog("Running b_bi8");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int64_t>::toScript(apis, env, p0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);

    return ret;

}
// Boolean Invoke(Assets.Scripts.Framework.UI.UIPrefab2DClass) declare in System.Func`2[Assets.Scripts.Framework.UI.UIPrefab2DClass,System.Boolean]
static bool b_bo(void* target, Il2CppObject* p0, MethodInfo* method) {
    // PLog("Running b_bo");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);

    return ret;

}
// Boolean Invoke(System.Type, System.Type ByRef) declare in ClassCreator+CSharpTypeReplacer
static bool b_boTo(void* target, Il2CppObject* p0, void* p1, MethodInfo* method) {
    // PLog("Running b_boTo");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	// unknown ret signature: To;
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);

    return ret;

}
// Boolean Invoke(GestureRecognizer, IFingerList) declare in GestureRecognizer+CanBeginDelegate
static bool b_boo(void* target, Il2CppObject* p0, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_boo");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);

    return ret;

}
// Boolean Invoke(TimelineRuntime.MemberCurveClipData, TimelineRuntime.TimelineActor, Single, UnityEngine.Transform) declare in TimelineRuntime.ClipDataSampleDelegate
static bool b_boor4o(void* target, Il2CppObject* p0, Il2CppObject* p1, float p2, Il2CppObject* p3, MethodInfo* method) {
    // PLog("Running b_boor4o");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
                    
    auto TIp3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
	converter::Converter<float>::toScript(apis, env, p2);
	CSRefToLuaValue(apis, env, TIp3, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);

    return ret;

}
// Boolean Invoke(IntPtr) declare in XLua.pesapi_env_ref_is_valid_func
static bool b_bp(void* target, void* p0, MethodInfo* method) {
    // PLog("Running b_bp");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);

    return ret;

}
// Boolean Invoke(IntPtr, Int32) declare in XLua.pesapi_get_value_bool_func
static bool b_bpi4(void* target, void* p0, int32_t p1, MethodInfo* method) {
    // PLog("Running b_bpi4");
            
    auto TIp0 = GetParameterType(method, 0);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);

    return ret;

}
// Boolean Invoke(IntPtr, IntPtr) declare in XLua.pesapi_is_object_func
static bool b_bpp(void* target, void* p0, void* p1, MethodInfo* method) {
    // PLog("Running b_bpp");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	apis->create_binary(env, p1, 0);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);

    return ret;

}
// Boolean Invoke(IntPtr, IntPtr, IntPtr ByRef) declare in XLua.pesapi_get_private_func
static bool b_bppTp(void* target, void* p0, void* p1, void* p2, MethodInfo* method) {
    // PLog("Running b_bppTp");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
        
    auto TIp2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	apis->create_binary(env, p1, 0);
	// unknown ret signature: Tp;
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);

    return ret;

}
// Boolean Invoke(IntPtr, IntPtr, IntPtr) declare in XLua.pesapi_is_instance_of_func
static bool b_bppp(void* target, void* p0, void* p1, void* p2, MethodInfo* method) {
    // PLog("Running b_bppp");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
        
    auto TIp2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	apis->create_binary(env, p1, 0);
	apis->create_binary(env, p2, 0);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);

    return ret;

}
// Boolean Invoke(Single, Single) declare in System.Func`3[System.Single,System.Single,System.Boolean]
static bool b_br4r4(void* target, float p0, float p1, MethodInfo* method) {
    // PLog("Running b_br4r4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<float>::toScript(apis, env, p0);
	converter::Converter<float>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);

    return ret;

}
// Boolean Invoke(System.String) declare in bq.custom_module_execute_gm+ExecuteLuaGmFromBQ
static bool b_bs(void* target, Il2CppString* p0, MethodInfo* method) {
    // PLog("Running b_bs");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);

    return ret;

}
// Boolean Invoke(System.String, System.String ByRef) declare in ClassCreator+LuaTypeReplacer
static bool b_bsTs(void* target, Il2CppString* p0, void* p1, MethodInfo* method) {
    // PLog("Running b_bsTs");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	// unknown ret signature: Ts;
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);

    return ret;

}
// Boolean Invoke(System.String, Int32, Int32, Boolean, Int32, Int32) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+SimulateReplayReconnectDelegate
static bool b_bsi4i4bi4i4(void* target, Il2CppString* p0, int32_t p1, int32_t p2, bool p3, int32_t p4, int32_t p5, MethodInfo* method) {
    // PLog("Running b_bsi4i4bi4i4");
            
    auto TIp0 = GetParameterType(method, 0);
                                                            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
	converter::Converter<bool>::toScript(apis, env, p3);
	converter::Converter<int32_t>::toScript(apis, env, p4);
	converter::Converter<int32_t>::toScript(apis, env, p5);
    auto luaret = apis->call_function(env, err_func, 6);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);

    return ret;

}
// Boolean Invoke(System.String, Int32, DelegateImageLoadComplete) declare in PandoraSDK.PandoraSDK+DelegateGetItemTex
static bool b_bsi4o(void* target, Il2CppString* p0, int32_t p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_bsi4o");
            
    auto TIp0 = GetParameterType(method, 0);
                    
    auto TIp2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	CSRefToLuaValue(apis, env, TIp2, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);

    return ret;

}
// Boolean Invoke(System.String, System.String) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateGetDataServiceBool
static bool b_bss(void* target, Il2CppString* p0, Il2CppString* p1, MethodInfo* method) {
    // PLog("Running b_bss");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	converter::Converter<Il2CppString*>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);

    return ret;

}
// Boolean Invoke(System.String, System.String, Single) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+CustomPreloadResStepLua
static bool b_bssr4(void* target, Il2CppString* p0, Il2CppString* p1, float p2, MethodInfo* method) {
    // PLog("Running b_bssr4");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	converter::Converter<Il2CppString*>::toScript(apis, env, p1);
	converter::Converter<float>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	converter::Converter<uint32_t>::toScript(apis, env, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<uint32_t>::toScript(apis, env, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
	converter::Converter<uint32_t>::toScript(apis, env, p2);
	converter::Converter<uint32_t>::toScript(apis, env, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    bool ret = converter::Converter<bool>::toCpp(apis, env, luaret);

    return ret;

}
// Boolean Invoke(UInt64) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateIsChatBanned
static bool b_bu8(void* target, uint64_t p0, MethodInfo* method) {
    // PLog("Running b_bu8");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<uint64_t>::toScript(apis, env, p0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	converter::Converter<Il2CppChar>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    Il2CppChar ret = converter::Converter<Il2CppChar>::toCpp(apis, env, luaret);

    return ret;

}
// PrefabLogVisible Invoke() declare in UIPrefabBase+FuncGetLogVisible
static int32_t b_i4(void* target, MethodInfo* method) {
    // PLog("Running b_i4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    pesapi_value *argv = nullptr;
    auto luaret = apis->call_function(env, err_func, 0);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    int32_t ret = converter::Converter<int32_t>::toCpp(apis, env, luaret);

    return ret;

}
// Int32 Invoke(System.Object, UInt32) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateSettingsServiceGetOtherPlayBitData
static int32_t b_i4Ou4(void* target, Il2CppObject* p0, uint32_t p1, MethodInfo* method) {
    // PLog("Running b_i4Ou4");
            
    auto TIp0 = GetParameterType(method, 0);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<uint32_t>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    xlua::DataTransfer::CopyValueType(apis, env, p0, TIp0);
	xlua::DataTransfer::CopyValueType(apis, env, p1, TIp1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    int32_t ret = converter::Converter<int32_t>::toCpp(apis, env, luaret);

    return ret;

}
// Int32 Invoke(Assets.Scripts.GameSystem.EquipRecipe, Assets.Scripts.GameSystem.EquipRecipe) declare in System.Comparison`1[Assets.Scripts.GameSystem.EquipRecipe]
static int32_t b_i4S_u4u4_S_u4u4_(void* target, struct S_u4u4_ p0, struct S_u4u4_ p1, MethodInfo* method) {
    // PLog("Running b_i4S_u4u4_S_u4u4_");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    xlua::DataTransfer::CopyValueType(apis, env, p0, TIp0);
	xlua::DataTransfer::CopyValueType(apis, env, p1, TIp1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<bool>::toScript(apis, env, p0);
	converter::Converter<bool>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    int32_t ret = converter::Converter<int32_t>::toCpp(apis, env, luaret);

    return ret;

}
// Int32 Invoke(Boolean, Int32) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateStatsSetEnable
static int32_t b_i4bi4(void* target, bool p0, int32_t p1, MethodInfo* method) {
    // PLog("Running b_i4bi4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<bool>::toScript(apis, env, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    int32_t ret = converter::Converter<int32_t>::toCpp(apis, env, luaret);

    return ret;

}
// Int32 Invoke(Int32) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateDestroyUILuaPrefab
static int32_t b_i4i4(void* target, int32_t p0, MethodInfo* method) {
    // PLog("Running b_i4i4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int64_t>::toScript(apis, env, p0);
	converter::Converter<int64_t>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    int32_t ret = converter::Converter<int32_t>::toCpp(apis, env, luaret);

    return ret;

}
// Int32 Invoke(CTimer, Int32) declare in CTimer+OverrideDeltaTimeDelegate
static int32_t b_i4oi4(void* target, Il2CppObject* p0, int32_t p1, MethodInfo* method) {
    // PLog("Running b_i4oi4");
            
    auto TIp0 = GetParameterType(method, 0);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    int32_t ret = converter::Converter<int32_t>::toCpp(apis, env, luaret);

    return ret;

}
// Int32 Invoke(Assets.Scripts.GameLogic.ChessAreaInfo, Assets.Scripts.GameLogic.ChessAreaInfo) declare in System.Comparison`1[Assets.Scripts.GameLogic.ChessAreaInfo]
static int32_t b_i4oo(void* target, Il2CppObject* p0, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_i4oo");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<Il2CppString*>::toScript(apis, env, p1);
	CSRefToLuaValue(apis, env, TIp2, p2);
	CSRefToLuaValue(apis, env, TIp3, p3);
	CSRefToLuaValue(apis, env, TIp4, p4);
	converter::Converter<bool>::toScript(apis, env, p5);
	xlua::DataTransfer::CopyValueType(apis, env, p6, TIp6);
    auto luaret = apis->call_function(env, err_func, 7);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    int32_t ret = converter::Converter<int32_t>::toCpp(apis, env, luaret);

    return ret;

}
// Int32 Invoke(IntPtr, Block ByRef) declare in Unity.Collections.AllocatorManager+TryFunction
static int32_t b_i4pPS_S_pi4S_u2u2__i4i4u1u1u2u4_(void* target, void* p0, struct S_S_pi4S_u2u2__i4i4u1u1u2u4_* p1, MethodInfo* method) {
    // PLog("Running b_i4pPS_S_pi4S_u2u2__i4i4u1u1u2u4_");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	apis->boxing(env, apis->native_object_to_value(env, TIp1, p1, false));
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    int32_t ret = converter::Converter<int32_t>::toCpp(apis, env, luaret);

    return ret;

}
// Int32 Invoke(IntPtr, Byte[], Int32) declare in XLua.pesapi_create_string_utf8_func
static int32_t b_i4pai4(void* target, void* p0, Il2CppObject* p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_i4pai4");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	CSRefToLuaValue(apis, env, TIp1, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    int32_t ret = converter::Converter<int32_t>::toCpp(apis, env, luaret);

    return ret;

}
// Int32 Invoke(IntPtr, Boolean) declare in XLua.pesapi_create_boolean_func
static int32_t b_i4pb(void* target, void* p0, bool p1, MethodInfo* method) {
    // PLog("Running b_i4pb");
            
    auto TIp0 = GetParameterType(method, 0);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	converter::Converter<bool>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    int32_t ret = converter::Converter<int32_t>::toCpp(apis, env, luaret);

    return ret;

}
// Int32 Invoke(IntPtr, Int32) declare in XLua.pesapi_create_int32_func
static int32_t b_i4pi4(void* target, void* p0, int32_t p1, MethodInfo* method) {
    // PLog("Running b_i4pi4");
            
    auto TIp0 = GetParameterType(method, 0);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    int32_t ret = converter::Converter<int32_t>::toCpp(apis, env, luaret);

    return ret;

}
// Int32 Invoke(IntPtr, Int32, Int32) declare in XLua.pesapi_call_function_func
static int32_t b_i4pi4i4(void* target, void* p0, int32_t p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_i4pi4i4");
            
    auto TIp0 = GetParameterType(method, 0);
                        
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    int32_t ret = converter::Converter<int32_t>::toCpp(apis, env, luaret);

    return ret;

}
// Int32 Invoke(IntPtr, Int32, IntPtr) declare in gcloud_voice.IGCloudVoiceNotify+GetEncodeDataHandler
static int32_t b_i4pi4p(void* target, void* p0, int32_t p1, void* p2, MethodInfo* method) {
    // PLog("Running b_i4pi4p");
            
    auto TIp0 = GetParameterType(method, 0);
                    
    auto TIp2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	apis->create_binary(env, p2, 0);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    int32_t ret = converter::Converter<int32_t>::toCpp(apis, env, luaret);

    return ret;

}
// Int32 Invoke(IntPtr, Int32, IntPtr, IntPtr, IntPtr, IntPtr) declare in gcloud_voice.IGCloudVoiceNotify+GetPcmDataHandler
static int32_t b_i4pi4pppp(void* target, void* p0, int32_t p1, void* p2, void* p3, void* p4, void* p5, MethodInfo* method) {
    // PLog("Running b_i4pi4pppp");
            
    auto TIp0 = GetParameterType(method, 0);
                    
    auto TIp2 = GetParameterType(method, 2);
        
    auto TIp3 = GetParameterType(method, 3);
        
    auto TIp4 = GetParameterType(method, 4);
        
    auto TIp5 = GetParameterType(method, 5);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	apis->create_binary(env, p2, 0);
	apis->create_binary(env, p3, 0);
	apis->create_binary(env, p4, 0);
	apis->create_binary(env, p5, 0);
    auto luaret = apis->call_function(env, err_func, 6);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    int32_t ret = converter::Converter<int32_t>::toCpp(apis, env, luaret);

    return ret;

}
// Int32 Invoke(IntPtr, Int64) declare in XLua.pesapi_create_int64_func
static int32_t b_i4pi8(void* target, void* p0, int64_t p1, MethodInfo* method) {
    // PLog("Running b_i4pi8");
            
    auto TIp0 = GetParameterType(method, 0);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	converter::Converter<int64_t>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    int32_t ret = converter::Converter<int32_t>::toCpp(apis, env, luaret);

    return ret;

}
// Int32 Invoke(IntPtr, Double) declare in XLua.pesapi_create_double_func
static int32_t b_i4pr8(void* target, void* p0, double p1, MethodInfo* method) {
    // PLog("Running b_i4pr8");
            
    auto TIp0 = GetParameterType(method, 0);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	converter::Converter<double>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    int32_t ret = converter::Converter<int32_t>::toCpp(apis, env, luaret);

    return ret;

}
// Int32 Invoke(IntPtr, UInt32) declare in XLua.pesapi_create_uint32_func
static int32_t b_i4pu4(void* target, void* p0, uint32_t p1, MethodInfo* method) {
    // PLog("Running b_i4pu4");
            
    auto TIp0 = GetParameterType(method, 0);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	converter::Converter<uint32_t>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    int32_t ret = converter::Converter<int32_t>::toCpp(apis, env, luaret);

    return ret;

}
// Int32 Invoke(IntPtr, UInt64) declare in XLua.pesapi_create_uint64_func
static int32_t b_i4pu8(void* target, void* p0, uint64_t p1, MethodInfo* method) {
    // PLog("Running b_i4pu8");
            
    auto TIp0 = GetParameterType(method, 0);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	converter::Converter<uint64_t>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    int32_t ret = converter::Converter<int32_t>::toCpp(apis, env, luaret);

    return ret;

}
// Int32 Invoke(System.String, Boolean, UnityEngine.Vector3, UnityEngine.Vector3, System.String, System.String, System.String) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateBubbleShowGetTip
static int32_t b_i4sbS_r4r4r4_S_r4r4r4_sss(void* target, Il2CppString* p0, bool p1, struct S_r4r4r4_ p2, struct S_r4r4r4_ p3, Il2CppString* p4, Il2CppString* p5, Il2CppString* p6, MethodInfo* method) {
    // PLog("Running b_i4sbS_r4r4r4_S_r4r4r4_sss");
            
    auto TIp0 = GetParameterType(method, 0);
                    
    auto TIp2 = GetParameterType(method, 2);
        
    auto TIp3 = GetParameterType(method, 3);
        
    auto TIp4 = GetParameterType(method, 4);
        
    auto TIp5 = GetParameterType(method, 5);
        
    auto TIp6 = GetParameterType(method, 6);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	converter::Converter<bool>::toScript(apis, env, p1);
	xlua::DataTransfer::CopyValueType(apis, env, p2, TIp2);
	xlua::DataTransfer::CopyValueType(apis, env, p3, TIp3);
	converter::Converter<Il2CppString*>::toScript(apis, env, p4);
	converter::Converter<Il2CppString*>::toScript(apis, env, p5);
	converter::Converter<Il2CppString*>::toScript(apis, env, p6);
    auto luaret = apis->call_function(env, err_func, 7);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	converter::Converter<bool>::toScript(apis, env, p2);
	converter::Converter<bool>::toScript(apis, env, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    int32_t ret = converter::Converter<int32_t>::toCpp(apis, env, luaret);

    return ret;

}
// Int32 Invoke(System.String, System.String) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateGetDataServiceInt
static int32_t b_i4ss(void* target, Il2CppString* p0, Il2CppString* p1, MethodInfo* method) {
    // PLog("Running b_i4ss");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	converter::Converter<Il2CppString*>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    int32_t ret = converter::Converter<int32_t>::toCpp(apis, env, luaret);

    return ret;

}
// Int32 Invoke(UInt32) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateGetFinishedGameCountInPlayGroup
static int32_t b_i4u4(void* target, uint32_t p0, MethodInfo* method) {
    // PLog("Running b_i4u4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<uint32_t>::toScript(apis, env, p0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<uint32_t>::toScript(apis, env, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    int32_t ret = converter::Converter<int32_t>::toCpp(apis, env, luaret);

    return ret;

}
// Int32 Invoke(UInt32, ResData.RES_SETTINGS_TYPE, Int32, Boolean) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateSettingsServiceSetHuanHuaTipBitData
static int32_t b_i4u4i4i4b(void* target, uint32_t p0, int32_t p1, int32_t p2, bool p3, MethodInfo* method) {
    // PLog("Running b_i4u4i4i4b");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<uint32_t>::toScript(apis, env, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
	converter::Converter<bool>::toScript(apis, env, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    int32_t ret = converter::Converter<int32_t>::toCpp(apis, env, luaret);

    return ret;

}
// Int32 Invoke(UInt32, UInt32, System.String, UInt32, System.String, Int32, Assets.Scripts.InternetCafePrivileges.IIGW_NETBAR_LV ByRef, Int32) declare in Assets.Scripts.InternetCafePrivileges.InternetCafePrivilegesBehavior+INFOGW_api_req_netbar_lv2_delegate
static int32_t b_i4u4u4su4si4PS_ai4ssi4_i4(void* target, uint32_t p0, uint32_t p1, Il2CppString* p2, uint32_t p3, Il2CppString* p4, int32_t p5, struct S_ai4ssi4_* p6, int32_t p7, MethodInfo* method) {
    // PLog("Running b_i4u4u4su4si4PS_ai4ssi4_i4");
                                    
    auto TIp2 = GetParameterType(method, 2);
                    
    auto TIp4 = GetParameterType(method, 4);
                    
    auto TIp6 = GetParameterType(method, 6);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<uint32_t>::toScript(apis, env, p0);
	converter::Converter<uint32_t>::toScript(apis, env, p1);
	converter::Converter<Il2CppString*>::toScript(apis, env, p2);
	converter::Converter<uint32_t>::toScript(apis, env, p3);
	converter::Converter<Il2CppString*>::toScript(apis, env, p4);
	converter::Converter<int32_t>::toScript(apis, env, p5);
	apis->boxing(env, apis->native_object_to_value(env, TIp6, p6, false));
	converter::Converter<int32_t>::toScript(apis, env, p7);
    auto luaret = apis->call_function(env, err_func, 8);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    int32_t ret = converter::Converter<int32_t>::toCpp(apis, env, luaret);

    return ret;

}
// Int64 Invoke(IntPtr, Int32) declare in XLua.pesapi_get_value_int64_func
static int64_t b_i8pi4(void* target, void* p0, int32_t p1, MethodInfo* method) {
    // PLog("Running b_i8pi4");
            
    auto TIp0 = GetParameterType(method, 0);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    int64_t ret = converter::Converter<int64_t>::toCpp(apis, env, luaret);

    return ret;

}
// XLua.LuaTable Invoke() declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateGetGameRuleHelpData
static Il2CppObject* b_o(void* target, MethodInfo* method) {
    // PLog("Running b_o");

    auto TIret = GetReturnType(method);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    pesapi_value *argv = nullptr;
    auto luaret = apis->call_function(env, err_func, 0);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	xlua::DataTransfer::CopyValueType(apis, env, p1, TIp1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }

    // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValueToCSRef(apis, TIret, env, luaret);

    return ret;

}
// System.Collections.IEnumerator Invoke(Assets.Scripts.UI.GameBanner.Item.GameBannerNoticeItem) declare in System.Func`2[Assets.Scripts.UI.GameBanner.Item.GameBannerNoticeItem,System.Collections.IEnumerator]
static Il2CppObject* b_oo(void* target, Il2CppObject* p0, MethodInfo* method) {
    // PLog("Running b_oo");

    auto TIret = GetReturnType(method);
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<bool>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }

    // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValueToCSRef(apis, TIret, env, luaret);

    return ret;

}
// Assets.Scripts.Framework.AssetService.MaterialAsset Invoke(System.String) declare in System.Func`2[System.String,Assets.Scripts.Framework.AssetService.MaterialAsset]
static Il2CppObject* b_os(void* target, Il2CppString* p0, MethodInfo* method) {
    // PLog("Running b_os");

    auto TIret = GetReturnType(method);
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }

    // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValueToCSRef(apis, TIret, env, luaret);

    return ret;

}
// XLua.LuaTable Invoke(System.String, Byte[], UInt64) declare in System.Func`4[System.String,System.Byte[],System.UInt64,XLua.LuaTable]
static Il2CppObject* b_osau8(void* target, Il2CppString* p0, Il2CppObject* p1, uint64_t p2, MethodInfo* method) {
    // PLog("Running b_osau8");

    auto TIret = GetReturnType(method);
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
	converter::Converter<uint64_t>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }

    // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValueToCSRef(apis, TIret, env, luaret);

    return ret;

}
// UnityEngine.GameObject Invoke(System.String, Int32) declare in System.Func`3[System.String,System.Int32,UnityEngine.GameObject]
static Il2CppObject* b_osi4(void* target, Il2CppString* p0, int32_t p1, MethodInfo* method) {
    // PLog("Running b_osi4");

    auto TIret = GetReturnType(method);
            
    auto TIp0 = GetParameterType(method, 0);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }

    // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValueToCSRef(apis, TIret, env, luaret);

    return ret;

}
// System.Collections.Generic.List`1[System.Int32] Invoke(UInt32) declare in System.Func`2[System.UInt32,System.Collections.Generic.List`1[System.Int32]]
static Il2CppObject* b_ou4(void* target, uint32_t p0, MethodInfo* method) {
    // PLog("Running b_ou4");

    auto TIret = GetReturnType(method);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<uint32_t>::toScript(apis, env, p0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }

    // LuaValToCSVal o/O
    Il2CppObject* ret = LuaValueToCSRef(apis, TIret, env, luaret);

    return ret;

}
// IntPtr Invoke(IntPtr) declare in XLua.pesapi_create_undefined_func
static void* b_pp(void* target, void* p0, MethodInfo* method) {
    // PLog("Running b_pp");

    auto TIret = GetReturnType(method);
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    void* ret = xlua::DataTransfer::GetPointer(apis, env, luaret);

    return ret;

}
// IntPtr Invoke(IntPtr, Boolean) declare in XLua.pesapi_get_exception_as_string_func
static void* b_ppb(void* target, void* p0, bool p1, MethodInfo* method) {
    // PLog("Running b_ppb");

    auto TIret = GetReturnType(method);
            
    auto TIp0 = GetParameterType(method, 0);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	converter::Converter<bool>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    void* ret = xlua::DataTransfer::GetPointer(apis, env, luaret);

    return ret;

}
// IntPtr Invoke(IntPtr, Int32) declare in XLua.pesapi_get_native_object_ptr_func
static void* b_ppi4(void* target, void* p0, int32_t p1, MethodInfo* method) {
    // PLog("Running b_ppi4");

    auto TIret = GetReturnType(method);
            
    auto TIp0 = GetParameterType(method, 0);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    void* ret = xlua::DataTransfer::GetPointer(apis, env, luaret);

    return ret;

}
// IntPtr Invoke(IntPtr, Int32, Byte[], Int32 ByRef) declare in XLua.pesapi_get_value_string_utf8_func
static void* b_ppi4aPi4(void* target, void* p0, int32_t p1, Il2CppObject* p2, int32_t* p3, MethodInfo* method) {
    // PLog("Running b_ppi4aPi4");

    auto TIret = GetReturnType(method);
            
    auto TIp0 = GetParameterType(method, 0);
                    
    auto TIp2 = GetParameterType(method, 2);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	CSRefToLuaValue(apis, env, TIp2, p2);
	converter::Converter<std::reference_wrapper<int32_t>>::toScript(apis, env, *p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    void* ret = xlua::DataTransfer::GetPointer(apis, env, luaret);

    return ret;

}
// IntPtr Invoke(IntPtr, Int32, UInt32) declare in XLua.pesapi_create_value_ref_func
static void* b_ppi4u4(void* target, void* p0, int32_t p1, uint32_t p2, MethodInfo* method) {
    // PLog("Running b_ppi4u4");

    auto TIret = GetReturnType(method);
            
    auto TIp0 = GetParameterType(method, 0);
                        
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	converter::Converter<uint32_t>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    void* ret = xlua::DataTransfer::GetPointer(apis, env, luaret);

    return ret;

}
// IntPtr Invoke(IntPtr, XLua.pesapi_callback, IntPtr, XLua.pesapi_function_finalize) declare in XLua.pesapi_create_function_func
static void* b_ppopo(void* target, void* p0, Il2CppObject* p1, void* p2, Il2CppObject* p3, MethodInfo* method) {
    // PLog("Running b_ppopo");

    auto TIret = GetReturnType(method);
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
        
    auto TIp2 = GetParameterType(method, 2);
        
    auto TIp3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	CSRefToLuaValue(apis, env, TIp1, p1);
	apis->create_binary(env, p2, 0);
	CSRefToLuaValue(apis, env, TIp3, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    void* ret = xlua::DataTransfer::GetPointer(apis, env, luaret);

    return ret;

}
// IntPtr Invoke(IntPtr, IntPtr) declare in XLua.pesapi_create_class_func
static void* b_ppp(void* target, void* p0, void* p1, MethodInfo* method) {
    // PLog("Running b_ppp");

    auto TIret = GetReturnType(method);
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	apis->create_binary(env, p1, 0);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    void* ret = xlua::DataTransfer::GetPointer(apis, env, luaret);

    return ret;

}
// IntPtr Invoke(IntPtr, IntPtr, UIntPtr ByRef) declare in XLua.pesapi_get_value_binary_func
static void* b_pppPp(void* target, void* p0, void* p1, void** p2, MethodInfo* method) {
    // PLog("Running b_pppPp");

    auto TIret = GetReturnType(method);
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
        
    auto TIp2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	apis->create_binary(env, p1, 0);
	// unknown ret signature: Pp;
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    void* ret = xlua::DataTransfer::GetPointer(apis, env, luaret);

    return ret;

}
// IntPtr Invoke(IntPtr, IntPtr, Int32, Int64) declare in Puerts.V8ConstructorCallback
static void* b_pppi4i8(void* target, void* p0, void* p1, int32_t p2, int64_t p3, MethodInfo* method) {
    // PLog("Running b_pppi4i8");

    auto TIret = GetReturnType(method);
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
                        
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	apis->create_binary(env, p1, 0);
	converter::Converter<int32_t>::toScript(apis, env, p2);
	converter::Converter<int64_t>::toScript(apis, env, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    void* ret = xlua::DataTransfer::GetPointer(apis, env, luaret);

    return ret;

}
// IntPtr Invoke(IntPtr, IntPtr, UIntPtr) declare in XLua.pesapi_create_binary_func
static void* b_pppp(void* target, void* p0, void* p1, void* p2, MethodInfo* method) {
    // PLog("Running b_pppp");

    auto TIret = GetReturnType(method);
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
        
    auto TIp2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	apis->create_binary(env, p1, 0);
	apis->create_binary(env, p2, 0);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    void* ret = xlua::DataTransfer::GetPointer(apis, env, luaret);

    return ret;

}
// IntPtr Invoke(IntPtr, IntPtr, IntPtr, Boolean) declare in XLua.pesapi_native_object_to_value_func
static void* b_ppppb(void* target, void* p0, void* p1, void* p2, bool p3, MethodInfo* method) {
    // PLog("Running b_ppppb");

    auto TIret = GetReturnType(method);
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
        
    auto TIp2 = GetParameterType(method, 2);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	apis->create_binary(env, p1, 0);
	apis->create_binary(env, p2, 0);
	converter::Converter<bool>::toScript(apis, env, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    void* ret = xlua::DataTransfer::GetPointer(apis, env, luaret);

    return ret;

}
// IntPtr Invoke(IntPtr, IntPtr, UIntPtr, System.String) declare in XLua.pesapi_dostring_func
static void* b_pppps(void* target, void* p0, void* p1, void* p2, Il2CppString* p3, MethodInfo* method) {
    // PLog("Running b_pppps");

    auto TIret = GetReturnType(method);
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
        
    auto TIp2 = GetParameterType(method, 2);
        
    auto TIp3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	apis->create_binary(env, p1, 0);
	apis->create_binary(env, p2, 0);
	converter::Converter<Il2CppString*>::toScript(apis, env, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    void* ret = xlua::DataTransfer::GetPointer(apis, env, luaret);

    return ret;

}
// IntPtr Invoke(IntPtr, IntPtr, System.String) declare in XLua.pesapi_get_property_func
static void* b_ppps(void* target, void* p0, void* p1, Il2CppString* p2, MethodInfo* method) {
    // PLog("Running b_ppps");

    auto TIret = GetReturnType(method);
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
        
    auto TIp2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	apis->create_binary(env, p1, 0);
	converter::Converter<Il2CppString*>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    void* ret = xlua::DataTransfer::GetPointer(apis, env, luaret);

    return ret;

}
// IntPtr Invoke(IntPtr, IntPtr, UInt64) declare in XLua.pesapi_get_property_uint64_func
static void* b_pppu8(void* target, void* p0, void* p1, uint64_t p2, MethodInfo* method) {
    // PLog("Running b_pppu8");

    auto TIret = GetReturnType(method);
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	apis->create_binary(env, p1, 0);
	converter::Converter<uint64_t>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    void* ret = xlua::DataTransfer::GetPointer(apis, env, luaret);

    return ret;

}
// IntPtr Invoke(IntPtr, UInt32, IntPtr, IntPtr) declare in WindowsMiniSizeController+WndProcDelegate
static void* b_ppu4pp(void* target, void* p0, uint32_t p1, void* p2, void* p3, MethodInfo* method) {
    // PLog("Running b_ppu4pp");

    auto TIret = GetReturnType(method);
            
    auto TIp0 = GetParameterType(method, 0);
                    
    auto TIp2 = GetParameterType(method, 2);
        
    auto TIp3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	converter::Converter<uint32_t>::toScript(apis, env, p1);
	apis->create_binary(env, p2, 0);
	apis->create_binary(env, p3, 0);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    void* ret = xlua::DataTransfer::GetPointer(apis, env, luaret);

    return ret;

}
// Single Invoke() declare in System.Func`1[System.Single]
static float b_r4(void* target, MethodInfo* method) {
    // PLog("Running b_r4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    pesapi_value *argv = nullptr;
    auto luaret = apis->call_function(env, err_func, 0);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<float>::toScript(apis, env, p0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<float>::toScript(apis, env, p0);
	converter::Converter<float>::toScript(apis, env, p1);
	converter::Converter<float>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    float ret = converter::Converter<float>::toCpp(apis, env, luaret);

    return ret;

}
// Double Invoke(IntPtr, Int32) declare in XLua.pesapi_get_value_double_func
static double b_r8pi4(void* target, void* p0, int32_t p1, MethodInfo* method) {
    // PLog("Running b_r8pi4");
            
    auto TIp0 = GetParameterType(method, 0);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    double ret = converter::Converter<double>::toCpp(apis, env, luaret);

    return ret;

}
// System.String Invoke() declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateGetLuaStackTrace
static Il2CppString* b_s(void* target, MethodInfo* method) {
    // PLog("Running b_s");

    auto TIret = GetReturnType(method);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    pesapi_value *argv = nullptr;
    auto luaret = apis->call_function(env, err_func, 0);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal s
    Il2CppString* ret = converter::Converter<Il2CppString*>::toCpp(apis, env, luaret);
    return ret;

}
// System.String Invoke(GUA.GUABaseResult) declare in GUA.OnStringRetEventHandler`1[GUA.GUABaseResult]
static Il2CppString* b_so(void* target, Il2CppObject* p0, MethodInfo* method) {
    // PLog("Running b_so");

    auto TIret = GetReturnType(method);
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal s
    Il2CppString* ret = converter::Converter<Il2CppString*>::toCpp(apis, env, luaret);
    return ret;

}
// System.String Invoke(IntPtr, Int32) declare in System.Func`3[System.IntPtr,System.Int32,System.String]
static Il2CppString* b_spi4(void* target, void* p0, int32_t p1, MethodInfo* method) {
    // PLog("Running b_spi4");

    auto TIret = GetReturnType(method);
            
    auto TIp0 = GetParameterType(method, 0);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	converter::Converter<Il2CppString*>::toScript(apis, env, p1);
	converter::Converter<Il2CppString*>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	converter::Converter<Il2CppString*>::toScript(apis, env, p1);
	CSRefToLuaValue(apis, env, TIp2, p2);
	CSRefToLuaValue(apis, env, TIp3, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal s
    Il2CppString* ret = converter::Converter<Il2CppString*>::toCpp(apis, env, luaret);
    return ret;

}
// UInt32 Invoke() declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateGetGameCoreProtolHash
static uint32_t b_u4(void* target, MethodInfo* method) {
    // PLog("Running b_u4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    pesapi_value *argv = nullptr;
    auto luaret = apis->call_function(env, err_func, 0);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	converter::Converter<uint32_t>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    uint32_t ret = converter::Converter<uint32_t>::toCpp(apis, env, luaret);

    return ret;

}
// UInt32 Invoke(IntPtr, Int32) declare in XLua.pesapi_get_value_uint32_func
static uint32_t b_u4pi4(void* target, void* p0, int32_t p1, MethodInfo* method) {
    // PLog("Running b_u4pi4");
            
    auto TIp0 = GetParameterType(method, 0);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    uint32_t ret = converter::Converter<uint32_t>::toCpp(apis, env, luaret);

    return ret;

}
// UInt32 Invoke(IntPtr, IntPtr) declare in XLua.pesapi_get_array_length_func
static uint32_t b_u4pp(void* target, void* p0, void* p1, MethodInfo* method) {
    // PLog("Running b_u4pp");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	apis->create_binary(env, p1, 0);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    uint32_t ret = converter::Converter<uint32_t>::toCpp(apis, env, luaret);

    return ret;

}
// UInt32 Invoke(System.String, MsgBoxDelegate, OSProto.MsgBoxStyle, OSProto.MsgBoxForm, System.String, Boolean) declare in Assets.Scripts.Framework.Lua.LuaMsgBox+DelegateMsgBoxShow
static uint32_t b_u4soi4i4sb(void* target, Il2CppString* p0, Il2CppObject* p1, int32_t p2, int32_t p3, Il2CppString* p4, bool p5, MethodInfo* method) {
    // PLog("Running b_u4soi4i4sb");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
                                
    auto TIp4 = GetParameterType(method, 4);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
	converter::Converter<int32_t>::toScript(apis, env, p3);
	converter::Converter<Il2CppString*>::toScript(apis, env, p4);
	converter::Converter<bool>::toScript(apis, env, p5);
    auto luaret = apis->call_function(env, err_func, 6);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    uint32_t ret = converter::Converter<uint32_t>::toCpp(apis, env, luaret);

    return ret;

}
// UInt64 Invoke() declare in System.Func`1[System.UInt64]
static uint64_t b_u8(void* target, MethodInfo* method) {
    // PLog("Running b_u8");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    pesapi_value *argv = nullptr;
    auto luaret = apis->call_function(env, err_func, 0);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    uint64_t ret = converter::Converter<uint64_t>::toCpp(apis, env, luaret);

    return ret;

}
// UInt64 Invoke(UnityEngine.GameObject) declare in AkSoundEngine+GameObjectHashFunction
static uint64_t b_u8o(void* target, Il2CppObject* p0, MethodInfo* method) {
    // PLog("Running b_u8o");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
        return {};
    }
    // LuaValToCSVal P any
    uint64_t ret = converter::Converter<uint64_t>::toCpp(apis, env, luaret);

    return ret;

}
// UInt64 Invoke(IntPtr, Int32) declare in XLua.pesapi_get_value_uint64_func
static uint64_t b_u8pi4(void* target, void* p0, int32_t p1, MethodInfo* method) {
    // PLog("Running b_u8pi4");
            
    auto TIp0 = GetParameterType(method, 0);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
        return {};
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    pesapi_value *argv = nullptr;
    auto luaret = apis->call_function(env, err_func, 0);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(System.Nullable`1[System.UInt32], System.Nullable`1[System.UInt32]) declare in System.Action`2[System.Nullable`1[System.UInt32],System.Nullable`1[System.UInt32]]
static void b_vN_bu4_N_bu4_(void* target, struct N_bu4_ p0, struct N_bu4_ p1, MethodInfo* method) {
    // PLog("Running b_vN_bu4_N_bu4_");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    xlua::DataTransfer::CopyNullableValueType(apis, env, p0, TIp0);
	xlua::DataTransfer::CopyNullableValueType(apis, env, p1, TIp1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(System.Object) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateDataServiceCallback
static void b_vO(void* target, Il2CppObject* p0, MethodInfo* method) {
    // PLog("Running b_vO");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	CSRefToLuaValue(apis, env, TIp2, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	converter::Converter<Il2CppString*>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	converter::Converter<Il2CppString*>::toScript(apis, env, p2);
	converter::Converter<bool>::toScript(apis, env, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Assets.Scripts.GameLogic.ActorDeadEventParam ByRef) declare in System.RefAction`1[Assets.Scripts.GameLogic.ActorDeadEventParam]
static void b_vPS_S_u4o_S_u4o_S_u4o_S_u4o_bbo_(void* target, struct S_S_u4o_S_u4o_S_u4o_S_u4o_bbo_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_S_u4o_S_u4o_S_u4o_S_u4o_bbo_");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false));
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Assets.Scripts.GameLogic.SkillPassiveChangedEventParam ByRef) declare in System.RefAction`1[Assets.Scripts.GameLogic.SkillPassiveChangedEventParam]
static void b_vPS_S_u4o_bS_u4o__(void* target, struct S_S_u4o_bS_u4o__* p0, MethodInfo* method) {
    // PLog("Running b_vPS_S_u4o_bS_u4o__");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false));
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Assets.Scripts.GameLogic.BuffChangeEventParam ByRef) declare in System.RefAction`1[Assets.Scripts.GameLogic.BuffChangeEventParam]
static void b_vPS_S_u4o_i4S_u4o__(void* target, struct S_S_u4o_i4S_u4o__* p0, MethodInfo* method) {
    // PLog("Running b_vPS_S_u4o_i4S_u4o__");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false));
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Assets.Scripts.GameLogic.SkillCounterChangeEventParam ByRef) declare in System.RefAction`1[Assets.Scripts.GameLogic.SkillCounterChangeEventParam]
static void b_vPS_S_u4o_i4_(void* target, struct S_S_u4o_i4_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_S_u4o_i4_");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false));
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Assets.Scripts.GameLogic.ActorCommonEventParam ByRef) declare in System.RefAction`1[Assets.Scripts.GameLogic.ActorCommonEventParam]
static void b_vPS_S_u4o_i4i4u4_(void* target, struct S_S_u4o_i4i4u4_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_S_u4o_i4i4u4_");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false));
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(UnityEngine.ApplicationMemoryUsageChange ByRef) declare in UnityEngine.Application+MemoryUsageChangedCallback
static void b_vPS_i4_(void* target, struct S_i4_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_i4_");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false));
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Assets.Scripts.GameLogic.GameCommonEventParam ByRef) declare in System.RefAction`1[Assets.Scripts.GameLogic.GameCommonEventParam]
static void b_vPS_i4i4i4_(void* target, struct S_i4i4i4_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_i4i4i4_");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false));
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Info ByRef) declare in CriWare.CriAtomExBeatSync+CbFunc
static void b_vPS_pu4u4u4r4r4i4u4p_(void* target, struct S_pu4u4u4r4r4i4u4p_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_pu4u4u4r4r4i4u4p_");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false));
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(CriWare.CriMana.EventPoint ByRef) declare in CriWare.CriMana.Player+CuePointCallback
static void b_vPS_pu4u8u8i4pu4u4_(void* target, struct S_pu4u8u8i4pu4u4_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_pu4u8u8i4pu4u4_");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false));
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Assets.Scripts.GameLogic.AutoTestBattleRoundChangedParam ByRef) declare in System.RefAction`1[Assets.Scripts.GameLogic.AutoTestBattleRoundChangedParam]
static void b_vPS_u1i4i4_(void* target, struct S_u1i4i4_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_u1i4i4_");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false));
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Assets.Scripts.GameLogic.NewPlayerInstanceParam ByRef) declare in System.RefAction`1[Assets.Scripts.GameLogic.NewPlayerInstanceParam]
static void b_vPS_u4_(void* target, struct S_u4_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_u4_");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false));
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Assets.Scripts.GameLogic.PlayerRelationEffectDetailChangeParam ByRef) declare in System.RefAction`1[Assets.Scripts.GameLogic.PlayerRelationEffectDetailChangeParam]
static void b_vPS_u4i4_(void* target, struct S_u4i4_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_u4i4_");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false));
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Assets.Scripts.GameLogic.BattleHeroPosChangedParam ByRef) declare in System.RefAction`1[Assets.Scripts.GameLogic.BattleHeroPosChangedParam]
static void b_vPS_u4u4S_i4i4__(void* target, struct S_u4u4S_i4i4__* p0, MethodInfo* method) {
    // PLog("Running b_vPS_u4u4S_i4i4__");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false));
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Assets.Scripts.GameLogic.PlayerDynamicPartParam ByRef) declare in System.RefAction`1[Assets.Scripts.GameLogic.PlayerDynamicPartParam]
static void b_vPS_u4u4u4_(void* target, struct S_u4u4u4_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_u4u4u4_");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false));
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(CriAtomExSequenceEventInfo ByRef) declare in CriWare.CriAtomExSequencer+EventCallback
static void b_vPS_u8psu4i4u4u4_(void* target, struct S_u8psu4i4u4u4_* p0, MethodInfo* method) {
    // PLog("Running b_vPS_u8psu4i4u4u4_");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false));
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(OSProto.SyncLordSkillInfo ByRef) declare in System.RefAction`1[OSProto.SyncLordSkillInfo]
static void b_vPo(void* target, Il2CppObject** p0, MethodInfo* method) {
    // PLog("Running b_vPo");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->boxing(env, apis->native_object_to_value(env, TIp0, p0, false));
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(NewCardFlyInfo, OSProto.EventNewCardFly, Single) declare in System.Action`3[Assets.Scripts.GameSystem.NewCardFlyController+NewCardFlyInfo,OSProto.EventNewCardFly,System.Single]
static void b_vS_S_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4S_r4r4r4_r4r4r4_ooi4_or4(void* target, struct S_S_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4S_r4r4r4_r4r4r4_ooi4_ p0, Il2CppObject* p1, float p2, MethodInfo* method) {
    // PLog("Running b_vS_S_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4S_r4r4r4_r4r4r4_ooi4_or4");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    xlua::DataTransfer::CopyValueType(apis, env, p0, TIp0);
	CSRefToLuaValue(apis, env, TIp1, p1);
	converter::Converter<float>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(SceneHoverHit) declare in System.Action`1[DealerController+SceneHoverHit]
static void b_vS_i4S_r4r4r4_i4_(void* target, struct S_i4S_r4r4r4_i4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_i4S_r4r4r4_i4_");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    xlua::DataTransfer::CopyValueType(apis, env, p0, TIp0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(UnityEngine.SortingLayer) declare in UnityEngine.SortingLayer+LayerCallback
static void b_vS_i4_(void* target, struct S_i4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_i4_");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    xlua::DataTransfer::CopyValueType(apis, env, p0, TIp0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(UnityEngine.SceneManagement.Scene, UnityEngine.SceneManagement.LoadSceneMode) declare in UnityEngine.Events.UnityAction`2[UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode]
static void b_vS_i4_i4(void* target, struct S_i4_ p0, int32_t p1, MethodInfo* method) {
    // PLog("Running b_vS_i4_i4");
            
    auto TIp0 = GetParameterType(method, 0);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    xlua::DataTransfer::CopyValueType(apis, env, p0, TIp0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(RoundEntry) declare in System.Action`1[Assets.Scripts.GameLogic.OSHAuctionRoundFilter+RoundEntry]
static void b_vS_i4o_(void* target, struct S_i4o_ p0, MethodInfo* method) {
    // PLog("Running b_vS_i4o_");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    xlua::DataTransfer::CopyValueType(apis, env, p0, TIp0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(UnityEngine.UIElements.TimerState) declare in System.Action`1[UnityEngine.UIElements.TimerState]
static void b_vS_i8i8_(void* target, struct S_i8i8_ p0, MethodInfo* method) {
    // PLog("Running b_vS_i8i8_");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    xlua::DataTransfer::CopyValueType(apis, env, p0, TIp0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(UnityEngine.Rendering.AsyncGPUReadbackRequest) declare in System.Action`1[UnityEngine.Rendering.AsyncGPUReadbackRequest]
static void b_vS_pi4_(void* target, struct S_pi4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_pi4_");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    xlua::DataTransfer::CopyValueType(apis, env, p0, TIp0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Puerts.JSCallInfo) declare in Puerts.OverloadReflectionWrap
static void b_vS_pppi4ooo_(void* target, struct S_pppi4ooo_ p0, MethodInfo* method) {
    // PLog("Running b_vS_pppi4ooo_");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    xlua::DataTransfer::CopyValueType(apis, env, p0, TIp0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(UnityEngine.Vector2) declare in UnityEngine.Events.UnityEvent`1[UnityEngine.Vector2]
static void b_vS_r4r4_(void* target, struct S_r4r4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_r4r4_");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    xlua::DataTransfer::CopyValueType(apis, env, p0, TIp0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    xlua::DataTransfer::CopyValueType(apis, env, p0, TIp0);
	xlua::DataTransfer::CopyValueType(apis, env, p1, TIp1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    xlua::DataTransfer::CopyValueType(apis, env, p0, TIp0);
	xlua::DataTransfer::CopyValueType(apis, env, p1, TIp1);
	converter::Converter<float>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(UnityEngine.Vector2, Boolean) declare in System.Action`2[UnityEngine.Vector2,System.Boolean]
static void b_vS_r4r4_b(void* target, struct S_r4r4_ p0, bool p1, MethodInfo* method) {
    // PLog("Running b_vS_r4r4_b");
            
    auto TIp0 = GetParameterType(method, 0);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    xlua::DataTransfer::CopyValueType(apis, env, p0, TIp0);
	converter::Converter<bool>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(UnityEngine.Vector2, Int32) declare in FingerInputManager+TapEventHandler
static void b_vS_r4r4_i4(void* target, struct S_r4r4_ p0, int32_t p1, MethodInfo* method) {
    // PLog("Running b_vS_r4r4_i4");
            
    auto TIp0 = GetParameterType(method, 0);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    xlua::DataTransfer::CopyValueType(apis, env, p0, TIp0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(UnityEngine.Vector2, SwipeDirection, Single) declare in FingerInputManager+SwipeEventHandler
static void b_vS_r4r4_i4r4(void* target, struct S_r4r4_ p0, int32_t p1, float p2, MethodInfo* method) {
    // PLog("Running b_vS_r4r4_i4r4");
            
    auto TIp0 = GetParameterType(method, 0);
                        
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    xlua::DataTransfer::CopyValueType(apis, env, p0, TIp0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	converter::Converter<float>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(UnityEngine.Vector3) declare in System.Action`1[UnityEngine.Vector3]
static void b_vS_r4r4r4_(void* target, struct S_r4r4r4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_r4r4r4_");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    xlua::DataTransfer::CopyValueType(apis, env, p0, TIp0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    xlua::DataTransfer::CopyValueType(apis, env, p0, TIp0);
	CSRefToLuaValue(apis, env, TIp1, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(UnityEngine.Vector3, Int32) declare in System.Action`2[UnityEngine.Vector3,System.Int32]
static void b_vS_r4r4r4_i4(void* target, struct S_r4r4r4_ p0, int32_t p1, MethodInfo* method) {
    // PLog("Running b_vS_r4r4r4_i4");
            
    auto TIp0 = GetParameterType(method, 0);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    xlua::DataTransfer::CopyValueType(apis, env, p0, TIp0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(UnityEngine.Color) declare in System.Action`1[UnityEngine.Color]
static void b_vS_r4r4r4r4_(void* target, struct S_r4r4r4r4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_r4r4r4r4_");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    xlua::DataTransfer::CopyValueType(apis, env, p0, TIp0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    xlua::DataTransfer::CopyValueType(apis, env, p0, TIp0);
	CSRefToLuaValue(apis, env, TIp1, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(EditorPlaySoundEffectInfo) declare in System.Action`1[EditorPlaySoundEffectInfo]
static void b_vS_sssi4i4i4u4u4u4u4i4bsssbs_(void* target, struct S_sssi4i4i4u4u4u4u4i4bsssbs_ p0, MethodInfo* method) {
    // PLog("Running b_vS_sssi4i4i4u4u4u4u4i4bsssbs_");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    xlua::DataTransfer::CopyValueType(apis, env, p0, TIp0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(PooledCollections.PoolObjHandle`1[Assets.Scripts.GameLogic.ActorLinker]) declare in System.Action`1[PooledCollections.PoolObjHandle`1[Assets.Scripts.GameLogic.ActorLinker]]
static void b_vS_u4o_(void* target, struct S_u4o_ p0, MethodInfo* method) {
    // PLog("Running b_vS_u4o_");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    xlua::DataTransfer::CopyValueType(apis, env, p0, TIp0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(PooledCollections.PoolObjHandle`1[Assets.Scripts.GameLogic.ActorLinker], Boolean) declare in System.Action`2[PooledCollections.PoolObjHandle`1[Assets.Scripts.GameLogic.ActorLinker],System.Boolean]
static void b_vS_u4o_b(void* target, struct S_u4o_ p0, bool p1, MethodInfo* method) {
    // PLog("Running b_vS_u4o_b");
            
    auto TIp0 = GetParameterType(method, 0);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    xlua::DataTransfer::CopyValueType(apis, env, p0, TIp0);
	converter::Converter<bool>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(PooledCollections.PoolObjHandle`1[Assets.Scripts.GameLogic.ActorLinker], BindChangeReason) declare in System.Action`2[PooledCollections.PoolObjHandle`1[Assets.Scripts.GameLogic.ActorLinker],BindChangeReason]
static void b_vS_u4o_i4(void* target, struct S_u4o_ p0, int32_t p1, MethodInfo* method) {
    // PLog("Running b_vS_u4o_i4");
            
    auto TIp0 = GetParameterType(method, 0);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    xlua::DataTransfer::CopyValueType(apis, env, p0, TIp0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(PooledCollections.PoolObjHandle`1[Assets.Scripts.GameLogic.ActorLinker], OSCore.stEquipChangeInfo) declare in System.Action`2[PooledCollections.PoolObjHandle`1[Assets.Scripts.GameLogic.ActorLinker],OSCore.stEquipChangeInfo]
static void b_vS_u4o_o(void* target, struct S_u4o_ p0, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_vS_u4o_o");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    xlua::DataTransfer::CopyValueType(apis, env, p0, TIp0);
	CSRefToLuaValue(apis, env, TIp1, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Assets.Scripts.GameSystem.EquipRecipe) declare in System.Action`1[Assets.Scripts.GameSystem.EquipRecipe]
static void b_vS_u4u4_(void* target, struct S_u4u4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_u4u4_");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    xlua::DataTransfer::CopyValueType(apis, env, p0, TIp0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Assets.Scripts.GameLogic.PlayerMatchTargetParam) declare in System.Action`1[Assets.Scripts.GameLogic.PlayerMatchTargetParam]
static void b_vS_u4u4b_(void* target, struct S_u4u4b_ p0, MethodInfo* method) {
    // PLog("Running b_vS_u4u4b_");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    xlua::DataTransfer::CopyValueType(apis, env, p0, TIp0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(AddEquipmentToHeroData) declare in System.Action`1[Assets.Scripts.GameSystem.UIComponentEquip+AddEquipmentToHeroData]
static void b_vS_u4u4u4_(void* target, struct S_u4u4u4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_u4u4u4_");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    xlua::DataTransfer::CopyValueType(apis, env, p0, TIp0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(MoveEquipToOtherRet) declare in System.Action`1[Assets.Scripts.GameSystem.UIComponentEquip+MoveEquipToOtherRet]
static void b_vS_u4u4u4i4_(void* target, struct S_u4u4u4i4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_u4u4u4i4_");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    xlua::DataTransfer::CopyValueType(apis, env, p0, TIp0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Assets.Scripts.GameLogic.PlayerEquipActorParam) declare in System.Action`1[Assets.Scripts.GameLogic.PlayerEquipActorParam]
static void b_vS_u4u4u4u4_(void* target, struct S_u4u4u4u4_ p0, MethodInfo* method) {
    // PLog("Running b_vS_u4u4u4u4_");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    xlua::DataTransfer::CopyValueType(apis, env, p0, TIp0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Byte[]) declare in System.Action`1[System.Byte[]]
static void b_va(void* target, Il2CppObject* p0, MethodInfo* method) {
    // PLog("Running b_va");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Byte[], Int32, System.String) declare in gcloud_voice.IGCloudVoiceNotify+DeliverDataHandler
static void b_vai4s(void* target, Il2CppObject* p0, int32_t p1, Il2CppString* p2, MethodInfo* method) {
    // PLog("Running b_vai4s");
            
    auto TIp0 = GetParameterType(method, 0);
                    
    auto TIp2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	converter::Converter<Il2CppString*>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Boolean) declare in UnityEngine.Events.UnityEvent`1[System.Boolean]
static void b_vb(void* target, bool p0, MethodInfo* method) {
    // PLog("Running b_vb");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<bool>::toScript(apis, env, p0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Boolean, System.Object) declare in Assets.Scripts.GameSystem.UIComponentDirectAccessor+VisibilityAccessor
static void b_vbO(void* target, bool p0, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_vbO");
                        
    auto TIp1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<bool>::toScript(apis, env, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Boolean, PrefabVisibleParam ByRef) declare in UIPrefabBase+DelegatePrefabVisible
static void b_vbPS_i4i4_(void* target, bool p0, struct S_i4i4_* p1, MethodInfo* method) {
    // PLog("Running b_vbPS_i4i4_");
                        
    auto TIp1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<bool>::toScript(apis, env, p0);
	apis->boxing(env, apis->native_object_to_value(env, TIp1, p1, false));
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Boolean, Boolean) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateCollectGarbage
static void b_vbb(void* target, bool p0, bool p1, MethodInfo* method) {
    // PLog("Running b_vbb");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<bool>::toScript(apis, env, p0);
	converter::Converter<bool>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Boolean, Boolean, Boolean) declare in System.Action`3[System.Boolean,System.Boolean,System.Boolean]
static void b_vbbb(void* target, bool p0, bool p1, bool p2, MethodInfo* method) {
    // PLog("Running b_vbbb");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<bool>::toScript(apis, env, p0);
	converter::Converter<bool>::toScript(apis, env, p1);
	converter::Converter<bool>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Boolean, BindChangeReason) declare in System.Action`2[System.Boolean,BindChangeReason]
static void b_vbi4(void* target, bool p0, int32_t p1, MethodInfo* method) {
    // PLog("Running b_vbi4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<bool>::toScript(apis, env, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Boolean, Assets.Scripts.GameSystem.NewbieAnimType, Int32) declare in System.Action`3[System.Boolean,Assets.Scripts.GameSystem.NewbieAnimType,System.Int32]
static void b_vbi4i4(void* target, bool p0, int32_t p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_vbi4i4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<bool>::toScript(apis, env, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Boolean, Int32, System.String) declare in System.Action`3[System.Boolean,System.Int32,System.String]
static void b_vbi4s(void* target, bool p0, int32_t p1, Il2CppString* p2, MethodInfo* method) {
    // PLog("Running b_vbi4s");
                                    
    auto TIp2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<bool>::toScript(apis, env, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	converter::Converter<Il2CppString*>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Boolean, XLua.LuaTable) declare in System.Action`2[System.Boolean,XLua.LuaTable]
static void b_vbo(void* target, bool p0, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_vbo");
                        
    auto TIp1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<bool>::toScript(apis, env, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Boolean, UInt32) declare in System.Action`2[System.Boolean,System.UInt32]
static void b_vbu4(void* target, bool p0, uint32_t p1, MethodInfo* method) {
    // PLog("Running b_vbu4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<bool>::toScript(apis, env, p0);
	converter::Converter<uint32_t>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Int32) declare in System.Action`1[System.Int32]
static void b_vi4(void* target, int32_t p0, MethodInfo* method) {
    // PLog("Running b_vi4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Int32, System.Object) declare in UnityEngine.Events.UnityEvent`2[System.Int32,System.Object]
static void b_vi4O(void* target, int32_t p0, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_vi4O");
                        
    auto TIp1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Int32, Assets.Scripts.Framework.DeviceMemoryInfo) declare in System.Action`2[System.Int32,Assets.Scripts.Framework.DeviceMemoryInfo]
static void b_vi4S_i4i4i4_(void* target, int32_t p0, struct S_i4i4i4_ p1, MethodInfo* method) {
    // PLog("Running b_vi4S_i4i4i4_");
                        
    auto TIp1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	xlua::DataTransfer::CopyValueType(apis, env, p1, TIp1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Int32, UnityEngine.Vector2) declare in FingerInputManager+FingerDownEventHandler
static void b_vi4S_r4r4_(void* target, int32_t p0, struct S_r4r4_ p1, MethodInfo* method) {
    // PLog("Running b_vi4S_r4r4_");
                        
    auto TIp1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	xlua::DataTransfer::CopyValueType(apis, env, p1, TIp1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	xlua::DataTransfer::CopyValueType(apis, env, p1, TIp1);
	xlua::DataTransfer::CopyValueType(apis, env, p2, TIp2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Int32, UnityEngine.Vector2, Int32) declare in FingerInputManager+FingerTapEventHandler
static void b_vi4S_r4r4_i4(void* target, int32_t p0, struct S_r4r4_ p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_vi4S_r4r4_i4");
                        
    auto TIp1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	xlua::DataTransfer::CopyValueType(apis, env, p1, TIp1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Int32, UnityEngine.Vector2, SwipeDirection, Single) declare in FingerInputManager+FingerSwipeEventHandler
static void b_vi4S_r4r4_i4r4(void* target, int32_t p0, struct S_r4r4_ p1, int32_t p2, float p3, MethodInfo* method) {
    // PLog("Running b_vi4S_r4r4_i4r4");
                        
    auto TIp1 = GetParameterType(method, 1);
                        
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	xlua::DataTransfer::CopyValueType(apis, env, p1, TIp1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
	converter::Converter<float>::toScript(apis, env, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Int32, UnityEngine.Vector2, Single) declare in FingerInputManager+FingerStationaryEventHandler
static void b_vi4S_r4r4_r4(void* target, int32_t p0, struct S_r4r4_ p1, float p2, MethodInfo* method) {
    // PLog("Running b_vi4S_r4r4_r4");
                        
    auto TIp1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	xlua::DataTransfer::CopyValueType(apis, env, p1, TIp1);
	converter::Converter<float>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Int32, PooledCollections.PoolObjHandle`1[Assets.Scripts.Framework.UI.UILuaPrefabClass]) declare in System.Action`2[System.Int32,PooledCollections.PoolObjHandle`1[Assets.Scripts.Framework.UI.UILuaPrefabClass]]
static void b_vi4S_u4o_(void* target, int32_t p0, struct S_u4o_ p1, MethodInfo* method) {
    // PLog("Running b_vi4S_u4o_");
                        
    auto TIp1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	xlua::DataTransfer::CopyValueType(apis, env, p1, TIp1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(RenderFeature, Boolean) declare in System.Action`2[RenderFeature,System.Boolean]
static void b_vi4b(void* target, int32_t p0, bool p1, MethodInfo* method) {
    // PLog("Running b_vi4b");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	converter::Converter<bool>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(GraphicsSettingsPriorityLevel, Boolean, GfxQualityLevel, GfxQualityLevel, Boolean) declare in System.Action`5[GraphicsSettingsPriorityLevel,System.Boolean,GfxQualityLevel,GfxQualityLevel,System.Boolean]
static void b_vi4bi4i4b(void* target, int32_t p0, bool p1, int32_t p2, int32_t p3, bool p4, MethodInfo* method) {
    // PLog("Running b_vi4bi4i4b");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	converter::Converter<bool>::toScript(apis, env, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
	converter::Converter<int32_t>::toScript(apis, env, p3);
	converter::Converter<bool>::toScript(apis, env, p4);
    auto luaret = apis->call_function(env, err_func, 5);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Int32, Int32) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateOnLoadActorAssetCompleted
static void b_vi4i4(void* target, int32_t p0, int32_t p1, MethodInfo* method) {
    // PLog("Running b_vi4i4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Int32, Int32, Assets.Scripts.Framework.UI.SafeAreaBoundBox, UnityEngine.ScreenOrientation) declare in UnityEngine.Events.UnityEvent`4[System.Int32,System.Int32,Assets.Scripts.Framework.UI.SafeAreaBoundBox,UnityEngine.ScreenOrientation]
static void b_vi4i4S_i4i4i4i4_i4(void* target, int32_t p0, int32_t p1, struct S_i4i4i4i4_ p2, int32_t p3, MethodInfo* method) {
    // PLog("Running b_vi4i4S_i4i4i4i4_i4");
                                    
    auto TIp2 = GetParameterType(method, 2);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	xlua::DataTransfer::CopyValueType(apis, env, p2, TIp2);
	converter::Converter<int32_t>::toScript(apis, env, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Int32, Int32, Boolean) declare in bq.def.type_func_ptr_on_tail_switch_callback
static void b_vi4i4b(void* target, int32_t p0, int32_t p1, bool p2, MethodInfo* method) {
    // PLog("Running b_vi4i4b");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	converter::Converter<bool>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Int32, ResData.RES_SETTINGS_TYPE, Int32) declare in System.Action`3[System.Int32,ResData.RES_SETTINGS_TYPE,System.Int32]
static void b_vi4i4i4(void* target, int32_t p0, int32_t p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_vi4i4i4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Int32, Int32, Int32, System.String) declare in UnityEngine.Events.UnityAction`4[System.Int32,System.Int32,System.Int32,System.String]
static void b_vi4i4i4s(void* target, int32_t p0, int32_t p1, int32_t p2, Il2CppString* p3, MethodInfo* method) {
    // PLog("Running b_vi4i4i4s");
                                                
    auto TIp3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
	converter::Converter<Il2CppString*>::toScript(apis, env, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(gcloud_voice.GCloudVoiceCompleteCode, gcloud_voice.SpeechLanguageType, gcloud_voice.SpeechLanguageType, System.String, System.String) declare in gcloud_voice.IGCloudVoiceNotify+RSTSSubtitleHandler
static void b_vi4i4i4ss(void* target, int32_t p0, int32_t p1, int32_t p2, Il2CppString* p3, Il2CppString* p4, MethodInfo* method) {
    // PLog("Running b_vi4i4i4ss");
                                                
    auto TIp3 = GetParameterType(method, 3);
        
    auto TIp4 = GetParameterType(method, 4);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
	converter::Converter<Il2CppString*>::toScript(apis, env, p3);
	converter::Converter<Il2CppString*>::toScript(apis, env, p4);
    auto luaret = apis->call_function(env, err_func, 5);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
	converter::Converter<Il2CppString*>::toScript(apis, env, p3);
	converter::Converter<Il2CppString*>::toScript(apis, env, p4);
	converter::Converter<int32_t>::toScript(apis, env, p5);
	converter::Converter<Il2CppString*>::toScript(apis, env, p6);
    auto luaret = apis->call_function(env, err_func, 7);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
	converter::Converter<Il2CppString*>::toScript(apis, env, p3);
	converter::Converter<Il2CppString*>::toScript(apis, env, p4);
	converter::Converter<Il2CppString*>::toScript(apis, env, p5);
	converter::Converter<int32_t>::toScript(apis, env, p6);
	converter::Converter<Il2CppString*>::toScript(apis, env, p7);
    auto luaret = apis->call_function(env, err_func, 8);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Int32, Int32, System.String) declare in BoxSDK.BoxPayBehaviour+ICallback
static void b_vi4i4s(void* target, int32_t p0, int32_t p1, Il2CppString* p2, MethodInfo* method) {
    // PLog("Running b_vi4i4s");
                                    
    auto TIp2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	converter::Converter<Il2CppString*>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	converter::Converter<Il2CppString*>::toScript(apis, env, p2);
	converter::Converter<int32_t>::toScript(apis, env, p3);
	converter::Converter<Il2CppString*>::toScript(apis, env, p4);
    auto luaret = apis->call_function(env, err_func, 5);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	converter::Converter<Il2CppString*>::toScript(apis, env, p2);
	converter::Converter<Il2CppString*>::toScript(apis, env, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(ResData.EMBATTLE_TYPE, OSProto.STLineupViewData[]) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateReqLineupViewTLog
static void b_vi4o(void* target, int32_t p0, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_vi4o");
                        
    auto TIp1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Int32, XLua.LuaTable, Int32, Int32, Int32) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateReqH5EmbattleForamtionCallback
static void b_vi4oi4i4i4(void* target, int32_t p0, Il2CppObject* p1, int32_t p2, int32_t p3, int32_t p4, MethodInfo* method) {
    // PLog("Running b_vi4oi4i4i4");
                        
    auto TIp1 = GetParameterType(method, 1);
                                    
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
	converter::Converter<int32_t>::toScript(apis, env, p3);
	converter::Converter<int32_t>::toScript(apis, env, p4);
    auto luaret = apis->call_function(env, err_func, 5);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Int32, XLua.LuaTable, Int32, Int32, System.String, System.String, Int32, Int32) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateGetLineUpCallback
static void b_vi4oi4i4ssi4i4(void* target, int32_t p0, Il2CppObject* p1, int32_t p2, int32_t p3, Il2CppString* p4, Il2CppString* p5, int32_t p6, int32_t p7, MethodInfo* method) {
    // PLog("Running b_vi4oi4i4ssi4i4");
                        
    auto TIp1 = GetParameterType(method, 1);
                                
    auto TIp4 = GetParameterType(method, 4);
        
    auto TIp5 = GetParameterType(method, 5);
                        
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
	converter::Converter<int32_t>::toScript(apis, env, p3);
	converter::Converter<Il2CppString*>::toScript(apis, env, p4);
	converter::Converter<Il2CppString*>::toScript(apis, env, p5);
	converter::Converter<int32_t>::toScript(apis, env, p6);
	converter::Converter<int32_t>::toScript(apis, env, p7);
    auto luaret = apis->call_function(env, err_func, 8);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(gcloud_voice.GCloudVoiceCompleteCode, System.String) declare in gcloud_voice.IGCloudVoiceNotify+PlayRecordFilCompleteHandler
static void b_vi4s(void* target, int32_t p0, Il2CppString* p1, MethodInfo* method) {
    // PLog("Running b_vi4s");
                        
    auto TIp1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	converter::Converter<Il2CppString*>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	converter::Converter<Il2CppString*>::toScript(apis, env, p1);
	converter::Converter<uint64_t>::toScript(apis, env, p2);
	CSRefToLuaValue(apis, env, TIp3, p3);
	converter::Converter<int32_t>::toScript(apis, env, p4);
    auto luaret = apis->call_function(env, err_func, 5);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(gcloud_voice.GCloudVoiceCompleteCode, System.String, Boolean) declare in gcloud_voice.IGCloudVoiceNotify+EnableMagicVoiceHandler
static void b_vi4sb(void* target, int32_t p0, Il2CppString* p1, bool p2, MethodInfo* method) {
    // PLog("Running b_vi4sb");
                        
    auto TIp1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	converter::Converter<Il2CppString*>::toScript(apis, env, p1);
	converter::Converter<bool>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Int32, System.String, Int32) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateOnLoadAssetCompleted
static void b_vi4si4(void* target, int32_t p0, Il2CppString* p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_vi4si4");
                        
    auto TIp1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	converter::Converter<Il2CppString*>::toScript(apis, env, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(gcloud_voice.GCloudVoiceCompleteCode, System.String, Int32, Int32) declare in gcloud_voice.IGCloudVoiceNotify+ChangeRoleCompleteHandler
static void b_vi4si4i4(void* target, int32_t p0, Il2CppString* p1, int32_t p2, int32_t p3, MethodInfo* method) {
    // PLog("Running b_vi4si4i4");
                        
    auto TIp1 = GetParameterType(method, 1);
                        
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	converter::Converter<Il2CppString*>::toScript(apis, env, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
	converter::Converter<int32_t>::toScript(apis, env, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	converter::Converter<Il2CppString*>::toScript(apis, env, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
	converter::Converter<Il2CppString*>::toScript(apis, env, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	converter::Converter<Il2CppString*>::toScript(apis, env, p1);
	CSRefToLuaValue(apis, env, TIp2, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	converter::Converter<Il2CppString*>::toScript(apis, env, p1);
	converter::Converter<Il2CppString*>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	converter::Converter<Il2CppString*>::toScript(apis, env, p1);
	converter::Converter<Il2CppString*>::toScript(apis, env, p2);
	converter::Converter<int32_t>::toScript(apis, env, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	converter::Converter<Il2CppString*>::toScript(apis, env, p1);
	converter::Converter<Il2CppString*>::toScript(apis, env, p2);
	converter::Converter<Il2CppString*>::toScript(apis, env, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	converter::Converter<Il2CppString*>::toScript(apis, env, p1);
	converter::Converter<Il2CppString*>::toScript(apis, env, p2);
	converter::Converter<Il2CppString*>::toScript(apis, env, p3);
	converter::Converter<int32_t>::toScript(apis, env, p4);
    auto luaret = apis->call_function(env, err_func, 5);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Int32, System.String, System.String, System.String, System.Collections.Generic.List`1[bq.ccs+file_info]) declare in bq.ccs+type_http_callback
static void b_vi4ssso(void* target, int32_t p0, Il2CppString* p1, Il2CppString* p2, Il2CppString* p3, Il2CppObject* p4, MethodInfo* method) {
    // PLog("Running b_vi4ssso");
                        
    auto TIp1 = GetParameterType(method, 1);
        
    auto TIp2 = GetParameterType(method, 2);
        
    auto TIp3 = GetParameterType(method, 3);
        
    auto TIp4 = GetParameterType(method, 4);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	converter::Converter<Il2CppString*>::toScript(apis, env, p1);
	converter::Converter<Il2CppString*>::toScript(apis, env, p2);
	converter::Converter<Il2CppString*>::toScript(apis, env, p3);
	CSRefToLuaValue(apis, env, TIp4, p4);
    auto luaret = apis->call_function(env, err_func, 5);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Int32, UInt32) declare in System.Action`2[System.Int32,System.UInt32]
static void b_vi4u4(void* target, int32_t p0, uint32_t p1, MethodInfo* method) {
    // PLog("Running b_vi4u4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	converter::Converter<uint32_t>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(ResData.RES_SETTINGS_TYPE, UInt32, Int32) declare in System.Action`3[ResData.RES_SETTINGS_TYPE,System.UInt32,System.Int32]
static void b_vi4u4i4(void* target, int32_t p0, uint32_t p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_vi4u4i4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	converter::Converter<uint32_t>::toScript(apis, env, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Int32, UInt64) declare in GCloud.PingEventHandler
static void b_vi4u8(void* target, int32_t p0, uint64_t p1, MethodInfo* method) {
    // PLog("Running b_vi4u8");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int32_t>::toScript(apis, env, p0);
	converter::Converter<uint64_t>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Int64) declare in System.Action`1[System.Int64]
static void b_vi8(void* target, int64_t p0, MethodInfo* method) {
    // PLog("Running b_vi8");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int64_t>::toScript(apis, env, p0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Int64, Boolean, UInt32, UInt32) declare in Assets.Scripts.Resource.Package.QtsPackageManager+OnInstallCompleteDelegate
static void b_vi8bu4u4(void* target, int64_t p0, bool p1, uint32_t p2, uint32_t p3, MethodInfo* method) {
    // PLog("Running b_vi8bu4u4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int64_t>::toScript(apis, env, p0);
	converter::Converter<bool>::toScript(apis, env, p1);
	converter::Converter<uint32_t>::toScript(apis, env, p2);
	converter::Converter<uint32_t>::toScript(apis, env, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Int64, Int32) declare in Assets.Scripts.Resource.Package.QtsPackageManager+OnInstallStateChangeDelegate
static void b_vi8i4(void* target, int64_t p0, int32_t p1, MethodInfo* method) {
    // PLog("Running b_vi8i4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int64_t>::toScript(apis, env, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Int64, Stage, Int64, Int64, Int64) declare in Assets.Scripts.Resource.Package.QtsDownloader+OnQtsDownloadProgress
static void b_vi8i4i8i8i8(void* target, int64_t p0, int32_t p1, int64_t p2, int64_t p3, int64_t p4, MethodInfo* method) {
    // PLog("Running b_vi8i4i8i8i8");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int64_t>::toScript(apis, env, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	converter::Converter<int64_t>::toScript(apis, env, p2);
	converter::Converter<int64_t>::toScript(apis, env, p3);
	converter::Converter<int64_t>::toScript(apis, env, p4);
    auto luaret = apis->call_function(env, err_func, 5);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Int64, Int64, Int64, Int64) declare in Assets.Scripts.Resource.Package.QtsPackageManager+OnInstallProgressDelegate
static void b_vi8i8i8i8(void* target, int64_t p0, int64_t p1, int64_t p2, int64_t p3, MethodInfo* method) {
    // PLog("Running b_vi8i8i8i8");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int64_t>::toScript(apis, env, p0);
	converter::Converter<int64_t>::toScript(apis, env, p1);
	converter::Converter<int64_t>::toScript(apis, env, p2);
	converter::Converter<int64_t>::toScript(apis, env, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Int64, IntPtr, UInt32) declare in AkAudioOutputCapture+CaptureOutputCallbackDelegate
static void b_vi8pu4(void* target, int64_t p0, void* p1, uint32_t p2, MethodInfo* method) {
    // PLog("Running b_vi8pu4");
                        
    auto TIp1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int64_t>::toScript(apis, env, p0);
	apis->create_binary(env, p1, 0);
	converter::Converter<uint32_t>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Int64, System.String, UInt32) declare in Assets.Scripts.Resource.Package.QtsDownloader+OnQtsDownloadCompleteDelegate
static void b_vi8su4(void* target, int64_t p0, Il2CppString* p1, uint32_t p2, MethodInfo* method) {
    // PLog("Running b_vi8su4");
                        
    auto TIp1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<int64_t>::toScript(apis, env, p0);
	converter::Converter<Il2CppString*>::toScript(apis, env, p1);
	converter::Converter<uint32_t>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Timi.TimiPointerEventData) declare in Timi.TimiEvent`1[Timi.TimiPointerEventData]
static void b_vo(void* target, Il2CppObject* p0, MethodInfo* method) {
    // PLog("Running b_vo");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	xlua::DataTransfer::CopyValueType(apis, env, p1, TIp1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	xlua::DataTransfer::CopyValueType(apis, env, p1, TIp1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(EquipWithActor, UnityEngine.Vector2, Boolean) declare in System.Action`3[Assets.Scripts.UI.InTheGame.Common.UIEquipCommonItem+EquipWithActor,UnityEngine.Vector2,System.Boolean]
static void b_voS_r4r4_b(void* target, Il2CppObject* p0, struct S_r4r4_ p1, bool p2, MethodInfo* method) {
    // PLog("Running b_voS_r4r4_b");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	xlua::DataTransfer::CopyValueType(apis, env, p1, TIp1);
	converter::Converter<bool>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(EquipWithActor, UnityEngine.Vector2, Assets.Scripts.UI.InTheGame.Equip.UIEquipToastSyntheticItem, Boolean) declare in System.Action`4[Assets.Scripts.UI.InTheGame.Common.UIEquipCommonItem+EquipWithActor,UnityEngine.Vector2,Assets.Scripts.UI.InTheGame.Equip.UIEquipToastSyntheticItem,System.Boolean]
static void b_voS_r4r4_ob(void* target, Il2CppObject* p0, struct S_r4r4_ p1, Il2CppObject* p2, bool p3, MethodInfo* method) {
    // PLog("Running b_voS_r4r4_ob");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
        
    auto TIp2 = GetParameterType(method, 2);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	xlua::DataTransfer::CopyValueType(apis, env, p1, TIp1);
	CSRefToLuaValue(apis, env, TIp2, p2);
	converter::Converter<bool>::toScript(apis, env, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	xlua::DataTransfer::CopyValueType(apis, env, p1, TIp1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	xlua::DataTransfer::CopyValueType(apis, env, p1, TIp1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(UIPrefab2D, Boolean) declare in System.Action`2[UIPrefab2D,System.Boolean]
static void b_vob(void* target, Il2CppObject* p0, bool p1, MethodInfo* method) {
    // PLog("Running b_vob");
            
    auto TIp0 = GetParameterType(method, 0);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<bool>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(UnityEngine.Texture2D, Boolean, System.String) declare in System.Action`3[UnityEngine.Texture2D,System.Boolean,System.String]
static void b_vobs(void* target, Il2CppObject* p0, bool p1, Il2CppString* p2, MethodInfo* method) {
    // PLog("Running b_vobs");
            
    auto TIp0 = GetParameterType(method, 0);
                    
    auto TIp2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<bool>::toScript(apis, env, p1);
	converter::Converter<Il2CppString*>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(UnityEngine.UI.Text, Int32) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+HandleVIPMessage
static void b_voi4(void* target, Il2CppObject* p0, int32_t p1, MethodInfo* method) {
    // PLog("Running b_voi4");
            
    auto TIp0 = GetParameterType(method, 0);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(System.Collections.Generic.List`1[System.String], System.Collections.Generic.List`1[System.String]) declare in System.Action`2[System.Collections.Generic.List`1[System.String],System.Collections.Generic.List`1[System.String]]
static void b_voo(void* target, Il2CppObject* p0, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_voo");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Timi.TimiButton, Timi.TimiPointerEvent, Timi.TimiPointerEventData) declare in System.Action`3[Timi.TimiButton,Timi.TimiPointerEvent,Timi.TimiPointerEventData]
static void b_vooo(void* target, Il2CppObject* p0, Il2CppObject* p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_vooo");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
        
    auto TIp2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
	CSRefToLuaValue(apis, env, TIp2, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Assets.Scripts.Framework.UI.UIPrefab2DClass, System.Action, System.Func`1[System.Boolean], Boolean, System.Func`2[Assets.Scripts.Framework.UI.UIPrefab2DClass,System.Boolean], Assets.Scripts.UI.TipExtraParam) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateCommonTipsAutoPopShow
static void b_voooboS_oi4bbbS_r4r4_oi4bbbr4bb_(void* target, Il2CppObject* p0, Il2CppObject* p1, Il2CppObject* p2, bool p3, Il2CppObject* p4, struct S_oi4bbbS_r4r4_oi4bbbr4bb_ p5, MethodInfo* method) {
    // PLog("Running b_voooboS_oi4bbbS_r4r4_oi4bbbr4bb_");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
        
    auto TIp2 = GetParameterType(method, 2);
                    
    auto TIp4 = GetParameterType(method, 4);
        
    auto TIp5 = GetParameterType(method, 5);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
	CSRefToLuaValue(apis, env, TIp2, p2);
	converter::Converter<bool>::toScript(apis, env, p3);
	CSRefToLuaValue(apis, env, TIp4, p4);
	xlua::DataTransfer::CopyValueType(apis, env, p5, TIp5);
    auto luaret = apis->call_function(env, err_func, 6);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Assets.Scripts.UI.CardComponent.Item.UICardItem, Timi.TimiTweenerAction, Single, Timi.TimiTweenerActType) declare in System.Action`4[Assets.Scripts.UI.CardComponent.Item.UICardItem,Timi.TimiTweenerAction,System.Single,Timi.TimiTweenerActType]
static void b_voor4i4(void* target, Il2CppObject* p0, Il2CppObject* p1, float p2, int32_t p3, MethodInfo* method) {
    // PLog("Running b_voor4i4");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
                        
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
	converter::Converter<float>::toScript(apis, env, p2);
	converter::Converter<int32_t>::toScript(apis, env, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(TimelineRuntime.Timeline, Single) declare in System.Action`2[TimelineRuntime.Timeline,System.Single]
static void b_vor4(void* target, Il2CppObject* p0, float p1, MethodInfo* method) {
    // PLog("Running b_vor4");
            
    auto TIp0 = GetParameterType(method, 0);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<float>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Timi.TimiTweenerAction, Single, Timi.TimiTweenerActType) declare in System.Action`3[Timi.TimiTweenerAction,System.Single,Timi.TimiTweenerActType]
static void b_vor4i4(void* target, Il2CppObject* p0, float p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_vor4i4");
            
    auto TIp0 = GetParameterType(method, 0);
                        
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<float>::toScript(apis, env, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<float>::toScript(apis, env, p1);
	CSRefToLuaValue(apis, env, TIp2, p2);
	converter::Converter<bool>::toScript(apis, env, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(UnityEngine.EventSystems.PointerEventData, Single, Single) declare in System.Action`3[UnityEngine.EventSystems.PointerEventData,System.Single,System.Single]
static void b_vor4r4(void* target, Il2CppObject* p0, float p1, float p2, MethodInfo* method) {
    // PLog("Running b_vor4r4");
            
    auto TIp0 = GetParameterType(method, 0);
                        
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<float>::toScript(apis, env, p1);
	converter::Converter<float>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(DelegateGetLineUpByCodeCallback, System.String) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateGetRecommendLineupByCode
static void b_vos(void* target, Il2CppObject* p0, Il2CppString* p1, MethodInfo* method) {
    // PLog("Running b_vos");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<Il2CppString*>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(OSCore.Project8BossAwardItems, UInt32) declare in System.Action`2[OSCore.Project8BossAwardItems,System.UInt32]
static void b_vou4(void* target, Il2CppObject* p0, uint32_t p1, MethodInfo* method) {
    // PLog("Running b_vou4");
            
    auto TIp0 = GetParameterType(method, 0);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<uint32_t>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<uint32_t>::toScript(apis, env, p1);
	CSRefToLuaValue(apis, env, TIp2, p2);
	CSRefToLuaValue(apis, env, TIp3, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(UnityEngine.RectTransform, UInt64, UInt32) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+PopupPlayerInfoTipDelegate
static void b_vou8u4(void* target, Il2CppObject* p0, uint64_t p1, uint32_t p2, MethodInfo* method) {
    // PLog("Running b_vou8u4");
            
    auto TIp0 = GetParameterType(method, 0);
                        
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    CSRefToLuaValue(apis, env, TIp0, p0);
	converter::Converter<uint64_t>::toScript(apis, env, p1);
	converter::Converter<uint32_t>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(IntPtr) declare in CriWare.CriMana.Player+SubtitleChangeCallback
static void b_vp(void* target, void* p0, MethodInfo* method) {
    // PLog("Running b_vp");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	CSRefToLuaValue(apis, env, TIp1, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	xlua::DataTransfer::CopyValueType(apis, env, p1, TIp1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(IntPtr, Boolean) declare in System.Action`2[System.IntPtr,System.Boolean]
static void b_vpb(void* target, void* p0, bool p1, MethodInfo* method) {
    // PLog("Running b_vpb");
            
    auto TIp0 = GetParameterType(method, 0);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	converter::Converter<bool>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(IntPtr, Int32) declare in gcloud_voice.IGCloudVoiceNotify+RecordingDataHandler
static void b_vpi4(void* target, void* p0, int32_t p1, MethodInfo* method) {
    // PLog("Running b_vpi4");
            
    auto TIp0 = GetParameterType(method, 0);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(IntPtr, Int32, Int32) declare in XLua.pesapi_get_array_element_func
static void b_vpi4i4(void* target, void* p0, int32_t p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_vpi4i4");
            
    auto TIp0 = GetParameterType(method, 0);
                        
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(IntPtr, Int32, Int32, Int32) declare in gcloud_voice.IGCloudVoiceNotify+PlayingDataHandler
static void b_vpi4i4i4(void* target, void* p0, int32_t p1, int32_t p2, int32_t p3, MethodInfo* method) {
    // PLog("Running b_vpi4i4i4");
            
    auto TIp0 = GetParameterType(method, 0);
                                    
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
	converter::Converter<int32_t>::toScript(apis, env, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(IntPtr, Int64) declare in Puerts.V8DestructorCallback
static void b_vpi8(void* target, void* p0, int64_t p1, MethodInfo* method) {
    // PLog("Running b_vpi8");
            
    auto TIp0 = GetParameterType(method, 0);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	converter::Converter<int64_t>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	CSRefToLuaValue(apis, env, TIp1, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(IntPtr, IntPtr) declare in XLua.pesapi_callback
static void b_vpp(void* target, void* p0, void* p1, MethodInfo* method) {
    // PLog("Running b_vpp");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	apis->create_binary(env, p1, 0);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(IntPtr, IntPtr, IntPtr) declare in XLua.pesapi_function_finalize
static void b_vppp(void* target, void* p0, void* p1, void* p2, MethodInfo* method) {
    // PLog("Running b_vppp");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
        
    auto TIp2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	apis->create_binary(env, p1, 0);
	apis->create_binary(env, p2, 0);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(IntPtr, IntPtr, IntPtr, Int32, Int64) declare in Puerts.V8FunctionCallback
static void b_vpppi4i8(void* target, void* p0, void* p1, void* p2, int32_t p3, int64_t p4, MethodInfo* method) {
    // PLog("Running b_vpppi4i8");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
        
    auto TIp2 = GetParameterType(method, 2);
                        
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	apis->create_binary(env, p1, 0);
	apis->create_binary(env, p2, 0);
	converter::Converter<int32_t>::toScript(apis, env, p3);
	converter::Converter<int64_t>::toScript(apis, env, p4);
    auto luaret = apis->call_function(env, err_func, 5);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(IntPtr, IntPtr, System.String, IntPtr) declare in XLua.pesapi_set_property_func
static void b_vppsp(void* target, void* p0, void* p1, Il2CppString* p2, void* p3, MethodInfo* method) {
    // PLog("Running b_vppsp");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
        
    auto TIp2 = GetParameterType(method, 2);
        
    auto TIp3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	apis->create_binary(env, p1, 0);
	converter::Converter<Il2CppString*>::toScript(apis, env, p2);
	apis->create_binary(env, p3, 0);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(IntPtr, IntPtr, UInt64, IntPtr) declare in XLua.pesapi_set_property_uint64_func
static void b_vppu8p(void* target, void* p0, void* p1, uint64_t p2, void* p3, MethodInfo* method) {
    // PLog("Running b_vppu8p");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
                    
    auto TIp3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	apis->create_binary(env, p1, 0);
	converter::Converter<uint64_t>::toScript(apis, env, p2);
	apis->create_binary(env, p3, 0);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(IntPtr, Single) declare in System.Action`2[System.IntPtr,System.Single]
static void b_vpr4(void* target, void* p0, float p1, MethodInfo* method) {
    // PLog("Running b_vpr4");
            
    auto TIp0 = GetParameterType(method, 0);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	converter::Converter<float>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	converter::Converter<Il2CppString*>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(IntPtr, UInt32) declare in XLua.pesapi_set_ref_internal_fields_func
static void b_vpu4(void* target, void* p0, uint32_t p1, MethodInfo* method) {
    // PLog("Running b_vpu4");
            
    auto TIp0 = GetParameterType(method, 0);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	converter::Converter<uint32_t>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(IntPtr, UInt32, UInt32, IntPtr) declare in PBData.PBNativeInterface+PBData_Callback
static void b_vpu4u4p(void* target, void* p0, uint32_t p1, uint32_t p2, void* p3, MethodInfo* method) {
    // PLog("Running b_vpu4u4p");
            
    auto TIp0 = GetParameterType(method, 0);
                                
    auto TIp3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	converter::Converter<uint32_t>::toScript(apis, env, p1);
	converter::Converter<uint32_t>::toScript(apis, env, p2);
	apis->create_binary(env, p3, 0);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(IntPtr, UInt64) declare in System.Action`2[System.IntPtr,System.UInt64]
static void b_vpu8(void* target, void* p0, uint64_t p1, MethodInfo* method) {
    // PLog("Running b_vpu8");
            
    auto TIp0 = GetParameterType(method, 0);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    apis->create_binary(env, p0, 0);
	converter::Converter<uint64_t>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Single) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateOnUpdateProgress
static void b_vr4(void* target, float p0, MethodInfo* method) {
    // PLog("Running b_vr4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<float>::toScript(apis, env, p0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Single, System.Object) declare in System.Action`2[System.Single,System.Object]
static void b_vr4O(void* target, float p0, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_vr4O");
                        
    auto TIp1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<float>::toScript(apis, env, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Single, BindChangeReason) declare in System.Action`2[System.Single,BindChangeReason]
static void b_vr4i4(void* target, float p0, int32_t p1, MethodInfo* method) {
    // PLog("Running b_vr4i4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<float>::toScript(apis, env, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Single, Int32, Int32) declare in System.Action`3[System.Single,System.Int32,System.Int32]
static void b_vr4i4i4(void* target, float p0, int32_t p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_vr4i4i4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<float>::toScript(apis, env, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(Single, Single) declare in System.Action`2[System.Single,System.Single]
static void b_vr4r4(void* target, float p0, float p1, MethodInfo* method) {
    // PLog("Running b_vr4r4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<float>::toScript(apis, env, p0);
	converter::Converter<float>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(System.String) declare in UnityEngine.Events.UnityEvent`1[System.String]
static void b_vs(void* target, Il2CppString* p0, MethodInfo* method) {
    // PLog("Running b_vs");
            
    auto TIp0 = GetParameterType(method, 0);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(System.String, System.Object[]) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateBubbleShowLocalizeString
static void b_vsVO(void* target, Il2CppString* p0, Il2CppArray* p1, MethodInfo* method) {
    // PLog("Running b_vsVO");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    auto arrayLength = il2cpp::vm::Array::GetLength(p1);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
    Params<Il2CppObject>::UnPackRefOrBoxedValueType(apis, env, p1, arrayLength, TIp1);
            
    auto luaret = apis->call_function(env, err_func, 2 + arrayLength - 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(System.String, Byte[]) declare in System.Action`2[System.String,System.Byte[]]
static void b_vsa(void* target, Il2CppString* p0, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_vsa");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(System.String, Byte[], Int32, Int32) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateSendFrameCmd
static void b_vsai4i4(void* target, Il2CppString* p0, Il2CppObject* p1, int32_t p2, int32_t p3, MethodInfo* method) {
    // PLog("Running b_vsai4i4");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
                        
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
	converter::Converter<int32_t>::toScript(apis, env, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(System.String, Boolean) declare in System.Action`2[System.String,System.Boolean]
static void b_vsb(void* target, Il2CppString* p0, bool p1, MethodInfo* method) {
    // PLog("Running b_vsb");
            
    auto TIp0 = GetParameterType(method, 0);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	converter::Converter<bool>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(System.String, Boolean, System.Object) declare in System.Action`3[System.String,System.Boolean,System.Object]
static void b_vsbO(void* target, Il2CppString* p0, bool p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_vsbO");
            
    auto TIp0 = GetParameterType(method, 0);
                    
    auto TIp2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	converter::Converter<bool>::toScript(apis, env, p1);
	CSRefToLuaValue(apis, env, TIp2, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	converter::Converter<bool>::toScript(apis, env, p1);
	xlua::DataTransfer::CopyValueType(apis, env, p2, TIp2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(System.String, Boolean, UnityEngine.Vector3, UnityEngine.Vector3, System.String, TipExtensionContent) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateBubbleShow
static void b_vsbS_r4r4r4_S_r4r4r4_so(void* target, Il2CppString* p0, bool p1, struct S_r4r4r4_ p2, struct S_r4r4r4_ p3, Il2CppString* p4, Il2CppObject* p5, MethodInfo* method) {
    // PLog("Running b_vsbS_r4r4r4_S_r4r4r4_so");
            
    auto TIp0 = GetParameterType(method, 0);
                    
    auto TIp2 = GetParameterType(method, 2);
        
    auto TIp3 = GetParameterType(method, 3);
        
    auto TIp4 = GetParameterType(method, 4);
        
    auto TIp5 = GetParameterType(method, 5);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	converter::Converter<bool>::toScript(apis, env, p1);
	xlua::DataTransfer::CopyValueType(apis, env, p2, TIp2);
	xlua::DataTransfer::CopyValueType(apis, env, p3, TIp3);
	converter::Converter<Il2CppString*>::toScript(apis, env, p4);
	CSRefToLuaValue(apis, env, TIp5, p5);
    auto luaret = apis->call_function(env, err_func, 6);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	converter::Converter<bool>::toScript(apis, env, p1);
	converter::Converter<Il2CppString*>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(System.String, BindChangeReason) declare in System.Action`2[System.String,BindChangeReason]
static void b_vsi4(void* target, Il2CppString* p0, int32_t p1, MethodInfo* method) {
    // PLog("Running b_vsi4");
            
    auto TIp0 = GetParameterType(method, 0);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(System.String, Int32, Boolean, Boolean) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegatePlayerPrefsSetInt
static void b_vsi4DbDb(void* target, Il2CppString* p0, int32_t p1, bool p2, bool p3, MethodInfo* method) {
    // PLog("Running b_vsi4DbDb");
            
    auto TIp0 = GetParameterType(method, 0);
                                    
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	converter::Converter<bool>::toScript(apis, env, p2);
	converter::Converter<bool>::toScript(apis, env, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(System.String, Int32, Int32) declare in gcloud_voice.IGCloudVoiceNotify+RoomMemberVoiceHandler
static void b_vsi4i4(void* target, Il2CppString* p0, int32_t p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_vsi4i4");
            
    auto TIp0 = GetParameterType(method, 0);
                        
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(System.String, Int32, Int32, Boolean, Int32) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+BeginReplayBattle
static void b_vsi4i4bi4(void* target, Il2CppString* p0, int32_t p1, int32_t p2, bool p3, int32_t p4, MethodInfo* method) {
    // PLog("Running b_vsi4i4bi4");
            
    auto TIp0 = GetParameterType(method, 0);
                                                
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
	converter::Converter<bool>::toScript(apis, env, p3);
	converter::Converter<int32_t>::toScript(apis, env, p4);
    auto luaret = apis->call_function(env, err_func, 5);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(System.String, Int32, Int32, IntPtr, Int32) declare in gcloud_voice.IGCloudVoiceNotify+UserRndPcmHandler
static void b_vsi4i4pi4(void* target, Il2CppString* p0, int32_t p1, int32_t p2, void* p3, int32_t p4, MethodInfo* method) {
    // PLog("Running b_vsi4i4pi4");
            
    auto TIp0 = GetParameterType(method, 0);
                                
    auto TIp3 = GetParameterType(method, 3);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
	apis->create_binary(env, p3, 0);
	converter::Converter<int32_t>::toScript(apis, env, p4);
    auto luaret = apis->call_function(env, err_func, 5);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(System.String, Int32, System.Action`2[System.Boolean,XLua.LuaTable]) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateImportRecommend2Self
static void b_vsi4o(void* target, Il2CppString* p0, int32_t p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_vsi4o");
            
    auto TIp0 = GetParameterType(method, 0);
                    
    auto TIp2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	CSRefToLuaValue(apis, env, TIp2, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	converter::Converter<Il2CppString*>::toScript(apis, env, p2);
	converter::Converter<int32_t>::toScript(apis, env, p3);
	converter::Converter<Il2CppString*>::toScript(apis, env, p4);
    auto luaret = apis->call_function(env, err_func, 5);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	converter::Converter<Il2CppString*>::toScript(apis, env, p2);
	converter::Converter<Il2CppString*>::toScript(apis, env, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
	converter::Converter<bool>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(System.String, TipExtensionContent, System.String) declare in System.Action`3[System.String,Assets.Scripts.UI.GameBanner.Item.UIStatisticalBroadcastInformation+TipExtensionContent,System.String]
static void b_vsos(void* target, Il2CppString* p0, Il2CppObject* p1, Il2CppString* p2, MethodInfo* method) {
    // PLog("Running b_vsos");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
        
    auto TIp2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
	converter::Converter<Il2CppString*>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(System.String, System.String) declare in System.Action`2[System.String,System.String]
static void b_vss(void* target, Il2CppString* p0, Il2CppString* p1, MethodInfo* method) {
    // PLog("Running b_vss");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	converter::Converter<Il2CppString*>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	converter::Converter<Il2CppString*>::toScript(apis, env, p1);
	CSRefToLuaValue(apis, env, TIp2, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(System.String, System.String, Boolean) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateOnAssetCollection
static void b_vssb(void* target, Il2CppString* p0, Il2CppString* p1, bool p2, MethodInfo* method) {
    // PLog("Running b_vssb");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	converter::Converter<Il2CppString*>::toScript(apis, env, p1);
	converter::Converter<bool>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(System.String, System.String, UnityEngine.LogType) declare in CrashSightAgent+LogCallbackDelegate
static void b_vssi4(void* target, Il2CppString* p0, Il2CppString* p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_vssi4");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	converter::Converter<Il2CppString*>::toScript(apis, env, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(System.String, System.String, bq.def.log_level, Boolean, UInt32) declare in System.Action`5[System.String,System.String,bq.def.log_level,System.Boolean,System.UInt32]
static void b_vssi4bu4(void* target, Il2CppString* p0, Il2CppString* p1, int32_t p2, bool p3, uint32_t p4, MethodInfo* method) {
    // PLog("Running b_vssi4bu4");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
                                    
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	converter::Converter<Il2CppString*>::toScript(apis, env, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
	converter::Converter<bool>::toScript(apis, env, p3);
	converter::Converter<uint32_t>::toScript(apis, env, p4);
    auto luaret = apis->call_function(env, err_func, 5);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	converter::Converter<Il2CppString*>::toScript(apis, env, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
	converter::Converter<int32_t>::toScript(apis, env, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(System.String, System.String, Int32, Int32, System.Action`1[System.Boolean]) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateAddRecommend2Self
static void b_vssi4i4o(void* target, Il2CppString* p0, Il2CppString* p1, int32_t p2, int32_t p3, Il2CppObject* p4, MethodInfo* method) {
    // PLog("Running b_vssi4i4o");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
                                
    auto TIp4 = GetParameterType(method, 4);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	converter::Converter<Il2CppString*>::toScript(apis, env, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
	converter::Converter<int32_t>::toScript(apis, env, p3);
	CSRefToLuaValue(apis, env, TIp4, p4);
    auto luaret = apis->call_function(env, err_func, 5);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	converter::Converter<Il2CppString*>::toScript(apis, env, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
	CSRefToLuaValue(apis, env, TIp3, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	converter::Converter<Il2CppString*>::toScript(apis, env, p1);
	CSRefToLuaValue(apis, env, TIp2, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	converter::Converter<Il2CppString*>::toScript(apis, env, p1);
	CSRefToLuaValue(apis, env, TIp2, p2);
	CSRefToLuaValue(apis, env, TIp3, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(System.String, System.String, System.String, System.String) declare in Assets.Scripts.PixVideo.PixVideoSDK+DelegatePixVideo
static void b_vssss(void* target, Il2CppString* p0, Il2CppString* p1, Il2CppString* p2, Il2CppString* p3, MethodInfo* method) {
    // PLog("Running b_vssss");
            
    auto TIp0 = GetParameterType(method, 0);
        
    auto TIp1 = GetParameterType(method, 1);
        
    auto TIp2 = GetParameterType(method, 2);
        
    auto TIp3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	converter::Converter<Il2CppString*>::toScript(apis, env, p1);
	converter::Converter<Il2CppString*>::toScript(apis, env, p2);
	converter::Converter<Il2CppString*>::toScript(apis, env, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(System.String, UInt32) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateChessboardInteractionClick
static void b_vsu4(void* target, Il2CppString* p0, uint32_t p1, MethodInfo* method) {
    // PLog("Running b_vsu4");
            
    auto TIp0 = GetParameterType(method, 0);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<Il2CppString*>::toScript(apis, env, p0);
	converter::Converter<uint32_t>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(ForbidReplaceBubbleMask, Boolean) declare in System.Action`2[Assets.Scripts.UI.GameBanner.Item.UIGameBanner+ForbidReplaceBubbleMask,System.Boolean]
static void b_vu1b(void* target, uint8_t p0, bool p1, MethodInfo* method) {
    // PLog("Running b_vu1b");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<uint8_t>::toScript(apis, env, p0);
	converter::Converter<bool>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(UInt32) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateRequestPlayEmoji
static void b_vu4(void* target, uint32_t p0, MethodInfo* method) {
    // PLog("Running b_vu4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<uint32_t>::toScript(apis, env, p0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(UInt32, UnityEngine.Vector3) declare in System.Action`2[System.UInt32,UnityEngine.Vector3]
static void b_vu4S_r4r4r4_(void* target, uint32_t p0, struct S_r4r4r4_ p1, MethodInfo* method) {
    // PLog("Running b_vu4S_r4r4r4_");
                        
    auto TIp1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<uint32_t>::toScript(apis, env, p0);
	xlua::DataTransfer::CopyValueType(apis, env, p1, TIp1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(UInt32, Assets.Scripts.GameLogic.Project8EquipPair) declare in System.Action`2[System.UInt32,Assets.Scripts.GameLogic.Project8EquipPair]
static void b_vu4S_u4u4i4i4_(void* target, uint32_t p0, struct S_u4u4i4i4_ p1, MethodInfo* method) {
    // PLog("Running b_vu4S_u4u4i4i4_");
                        
    auto TIp1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<uint32_t>::toScript(apis, env, p0);
	xlua::DataTransfer::CopyValueType(apis, env, p1, TIp1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(UInt32, Boolean) declare in System.Action`2[System.UInt32,System.Boolean]
static void b_vu4b(void* target, uint32_t p0, bool p1, MethodInfo* method) {
    // PLog("Running b_vu4b");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<uint32_t>::toScript(apis, env, p0);
	converter::Converter<bool>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(UInt32, Boolean, Boolean) declare in System.Action`3[System.UInt32,System.Boolean,System.Boolean]
static void b_vu4bb(void* target, uint32_t p0, bool p1, bool p2, MethodInfo* method) {
    // PLog("Running b_vu4bb");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<uint32_t>::toScript(apis, env, p0);
	converter::Converter<bool>::toScript(apis, env, p1);
	converter::Converter<bool>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(UInt32, Int32) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateRequestPlayInteractiveDance
static void b_vu4i4(void* target, uint32_t p0, int32_t p1, MethodInfo* method) {
    // PLog("Running b_vu4i4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<uint32_t>::toScript(apis, env, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<uint32_t>::toScript(apis, env, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	CSRefToLuaValue(apis, env, TIp2, p2);
	CSRefToLuaValue(apis, env, TIp3, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(UInt32, Int32, Int32) declare in System.Action`3[System.UInt32,System.Int32,System.Int32]
static void b_vu4i4i4(void* target, uint32_t p0, int32_t p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_vu4i4i4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<uint32_t>::toScript(apis, env, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(UInt32, Int32, Int32, Int32) declare in System.Action`4[System.UInt32,System.Int32,System.Int32,System.Int32]
static void b_vu4i4i4i4(void* target, uint32_t p0, int32_t p1, int32_t p2, int32_t p3, MethodInfo* method) {
    // PLog("Running b_vu4i4i4i4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<uint32_t>::toScript(apis, env, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
	converter::Converter<int32_t>::toScript(apis, env, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(UInt32, Int32, Int32, System.Action) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateReqPlayerEmbattleForamtion
static void b_vu4i4i4o(void* target, uint32_t p0, int32_t p1, int32_t p2, Il2CppObject* p3, MethodInfo* method) {
    // PLog("Running b_vu4i4i4o");
                                                
    auto TIp3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<uint32_t>::toScript(apis, env, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
	CSRefToLuaValue(apis, env, TIp3, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(UInt32, Int32, System.Action) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+DelegateReqH5EmbattleForamtion
static void b_vu4i4o(void* target, uint32_t p0, int32_t p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_vu4i4o");
                                    
    auto TIp2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<uint32_t>::toScript(apis, env, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	CSRefToLuaValue(apis, env, TIp2, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(UInt32, GameLogic.Highlight.RankItem.IRankingBubble) declare in System.Action`2[System.UInt32,GameLogic.Highlight.RankItem.IRankingBubble]
static void b_vu4o(void* target, uint32_t p0, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_vu4o");
                        
    auto TIp1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<uint32_t>::toScript(apis, env, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<uint32_t>::toScript(apis, env, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
	CSRefToLuaValue(apis, env, TIp2, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(UInt32, UnityEngine.GameObject, Assets.Scripts.Framework.AssetService.InstantiatableAsset) declare in System.Action`3[System.UInt32,UnityEngine.GameObject,Assets.Scripts.Framework.AssetService.InstantiatableAsset]
static void b_vu4oo(void* target, uint32_t p0, Il2CppObject* p1, Il2CppObject* p2, MethodInfo* method) {
    // PLog("Running b_vu4oo");
                        
    auto TIp1 = GetParameterType(method, 1);
        
    auto TIp2 = GetParameterType(method, 2);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<uint32_t>::toScript(apis, env, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
	CSRefToLuaValue(apis, env, TIp2, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(UInt32, IntPtr) declare in AkAudioInputManager+AudioFormatInteropDelegate
static void b_vu4p(void* target, uint32_t p0, void* p1, MethodInfo* method) {
    // PLog("Running b_vu4p");
                        
    auto TIp1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<uint32_t>::toScript(apis, env, p0);
	apis->create_binary(env, p1, 0);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<uint32_t>::toScript(apis, env, p0);
	apis->create_binary(env, p1, 0);
	converter::Converter<int32_t>::toScript(apis, env, p2);
	CSRefToLuaValue(apis, env, TIp3, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(UInt32, System.String) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+NtfUploadlockstepMD5
static void b_vu4s(void* target, uint32_t p0, Il2CppString* p1, MethodInfo* method) {
    // PLog("Running b_vu4s");
                        
    auto TIp1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<uint32_t>::toScript(apis, env, p0);
	converter::Converter<Il2CppString*>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
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
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<uint32_t>::toScript(apis, env, p0);
	converter::Converter<Il2CppString*>::toScript(apis, env, p1);
	converter::Converter<Il2CppString*>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(UInt32, UInt32) declare in System.Action`2[System.UInt32,System.UInt32]
static void b_vu4u4(void* target, uint32_t p0, uint32_t p1, MethodInfo* method) {
    // PLog("Running b_vu4u4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<uint32_t>::toScript(apis, env, p0);
	converter::Converter<uint32_t>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(UInt32, UInt32, Boolean) declare in System.Action`3[System.UInt32,System.UInt32,System.Boolean]
static void b_vu4u4b(void* target, uint32_t p0, uint32_t p1, bool p2, MethodInfo* method) {
    // PLog("Running b_vu4u4b");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<uint32_t>::toScript(apis, env, p0);
	converter::Converter<uint32_t>::toScript(apis, env, p1);
	converter::Converter<bool>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(UInt32, UInt32, Int32) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+ReqOSOWinRoundPlayersDelegate
static void b_vu4u4i4(void* target, uint32_t p0, uint32_t p1, int32_t p2, MethodInfo* method) {
    // PLog("Running b_vu4u4i4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<uint32_t>::toScript(apis, env, p0);
	converter::Converter<uint32_t>::toScript(apis, env, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(UInt32, UInt32, Int32, UInt32[]) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+ReqOSOWinRoundPlayersV2Delegate
static void b_vu4u4i4o(void* target, uint32_t p0, uint32_t p1, int32_t p2, Il2CppObject* p3, MethodInfo* method) {
    // PLog("Running b_vu4u4i4o");
                                                
    auto TIp3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<uint32_t>::toScript(apis, env, p0);
	converter::Converter<uint32_t>::toScript(apis, env, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
	CSRefToLuaValue(apis, env, TIp3, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(UInt32, UInt32, Assets.Scripts.UI.InTheGame.Equip.UIEquipToastSyntheticItem, Boolean) declare in System.Action`4[System.UInt32,System.UInt32,Assets.Scripts.UI.InTheGame.Equip.UIEquipToastSyntheticItem,System.Boolean]
static void b_vu4u4ob(void* target, uint32_t p0, uint32_t p1, Il2CppObject* p2, bool p3, MethodInfo* method) {
    // PLog("Running b_vu4u4ob");
                                    
    auto TIp2 = GetParameterType(method, 2);
            
    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<uint32_t>::toScript(apis, env, p0);
	converter::Converter<uint32_t>::toScript(apis, env, p1);
	CSRefToLuaValue(apis, env, TIp2, p2);
	converter::Converter<bool>::toScript(apis, env, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(UInt32, UInt32, UInt32) declare in System.Action`3[System.UInt32,System.UInt32,System.UInt32]
static void b_vu4u4u4(void* target, uint32_t p0, uint32_t p1, uint32_t p2, MethodInfo* method) {
    // PLog("Running b_vu4u4u4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<uint32_t>::toScript(apis, env, p0);
	converter::Converter<uint32_t>::toScript(apis, env, p1);
	converter::Converter<uint32_t>::toScript(apis, env, p2);
    auto luaret = apis->call_function(env, err_func, 3);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(UInt32, UInt32, UInt32, UInt32) declare in System.Action`4[System.UInt32,System.UInt32,System.UInt32,System.UInt32]
static void b_vu4u4u4u4(void* target, uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, MethodInfo* method) {
    // PLog("Running b_vu4u4u4u4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<uint32_t>::toScript(apis, env, p0);
	converter::Converter<uint32_t>::toScript(apis, env, p1);
	converter::Converter<uint32_t>::toScript(apis, env, p2);
	converter::Converter<uint32_t>::toScript(apis, env, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(UInt64) declare in System.Action`1[System.UInt64]
static void b_vu8(void* target, uint64_t p0, MethodInfo* method) {
    // PLog("Running b_vu8");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<uint64_t>::toScript(apis, env, p0);
    auto luaret = apis->call_function(env, err_func, 1);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(UInt64, Assets.Scripts.UI.GlobalPublicComponents.GlobalVoiceMicrophone.SpeakingState) declare in System.Action`2[System.UInt64,Assets.Scripts.UI.GlobalPublicComponents.GlobalVoiceMicrophone.SpeakingState]
static void b_vu8i4(void* target, uint64_t p0, int32_t p1, MethodInfo* method) {
    // PLog("Running b_vu8i4");

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<uint64_t>::toScript(apis, env, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(UInt64, Int32, Int32, IntPtr) declare in osgame.common.Log+gamecore_type_func_ptr_console_callback
static void b_vu8i4i4p(void* target, uint64_t p0, int32_t p1, int32_t p2, void* p3, MethodInfo* method) {
    // PLog("Running b_vu8i4i4p");
                                                
    auto TIp3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<uint64_t>::toScript(apis, env, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
	apis->create_binary(env, p3, 0);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(UInt64, Int32, bq.def.log_level, System.String) declare in bq.LogImpMgr+type_console_callback
static void b_vu8i4i4s(void* target, uint64_t p0, int32_t p1, int32_t p2, Il2CppString* p3, MethodInfo* method) {
    // PLog("Running b_vu8i4i4s");
                                                
    auto TIp3 = GetParameterType(method, 3);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<uint64_t>::toScript(apis, env, p0);
	converter::Converter<int32_t>::toScript(apis, env, p1);
	converter::Converter<int32_t>::toScript(apis, env, p2);
	converter::Converter<Il2CppString*>::toScript(apis, env, p3);
    auto luaret = apis->call_function(env, err_func, 4);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
// Void Invoke(UInt64, OSProto.PlayerPrizePoolInfo2Lua) declare in Assets.Scripts.Framework.Lua.RuntimeCSharpCallLuaInteraction+NtfPlayerPrizePoolChangedDelegate
static void b_vu8o(void* target, uint64_t p0, Il2CppObject* p1, MethodInfo* method) {
    // PLog("Running b_vu8o");
                        
    auto TIp1 = GetParameterType(method, 1);

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    converter::Converter<uint64_t>::toScript(apis, env, p0);
	CSRefToLuaValue(apis, env, TIp1, p1);
    auto luaret = apis->call_function(env, err_func, 2);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
    }

}
static BridgeFuncInfo g_bridgeFuncInfos[] = {
        {"OOso", (Il2CppMethodPointer)b_OOso},
    {"Oi4so", (Il2CppMethodPointer)b_Oi4so},
    {"OoS_r4r4_", (Il2CppMethodPointer)b_OoS_r4r4_},
    {"Ooo", (Il2CppMethodPointer)b_Ooo},
    {"Opi4O", (Il2CppMethodPointer)b_Opi4O},
    {"Os", (Il2CppMethodPointer)b_Os},
    {"Oss", (Il2CppMethodPointer)b_Oss},
    {"S_bi4oS_oo__ob", (Il2CppMethodPointer)b_S_bi4oS_oo__ob},
    {"S_bi4oS_oo__obo", (Il2CppMethodPointer)b_S_bi4oS_oo__obo},
    {"S_o_S_o_S_o_r4", (Il2CppMethodPointer)b_S_o_S_o_S_o_r4},
    {"S_o_o", (Il2CppMethodPointer)b_S_o_o},
    {"S_r4r4_", (Il2CppMethodPointer)b_S_r4r4_},
    {"S_r4r4_S_r4r4_S_r4r4_r4", (Il2CppMethodPointer)b_S_r4r4_S_r4r4_S_r4r4_r4},
    {"S_r4r4_i4", (Il2CppMethodPointer)b_S_r4r4_i4},
    {"S_r4r4_o", (Il2CppMethodPointer)b_S_r4r4_o},
    {"S_r4r4r4_", (Il2CppMethodPointer)b_S_r4r4r4_},
    {"S_r4r4r4_S_r4r4r4_S_r4r4r4_r4", (Il2CppMethodPointer)b_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4},
    {"S_r4r4r4_o", (Il2CppMethodPointer)b_S_r4r4r4_o},
    {"S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_r4", (Il2CppMethodPointer)b_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_r4},
    {"S_r4r4r4r4_o", (Il2CppMethodPointer)b_S_r4r4r4r4_o},
    {"aso", (Il2CppMethodPointer)b_aso},
    {"b", (Il2CppMethodPointer)b_b},
    {"bO", (Il2CppMethodPointer)b_bO},
    {"bOO", (Il2CppMethodPointer)b_bOO},
    {"bOOS_r4r4_", (Il2CppMethodPointer)b_bOOS_r4r4_},
    {"bOOS_r4r4_o", (Il2CppMethodPointer)b_bOOS_r4r4_o},
    {"bOS_r4r4_", (Il2CppMethodPointer)b_bOS_r4r4_},
    {"bOS_u4o_", (Il2CppMethodPointer)b_bOS_u4o_},
    {"bOS_u4u4r4i4b_", (Il2CppMethodPointer)b_bOS_u4u4r4i4b_},
    {"bOS_u8i4si4u8u8u8_b", (Il2CppMethodPointer)b_bOS_u8i4si4u8u8u8_b},
    {"bOb", (Il2CppMethodPointer)b_bOb},
    {"bObb", (Il2CppMethodPointer)b_bObb},
    {"bObi4", (Il2CppMethodPointer)b_bObi4},
    {"bObi4i4", (Il2CppMethodPointer)b_bObi4i4},
    {"bObu4", (Il2CppMethodPointer)b_bObu4},
    {"bOi4", (Il2CppMethodPointer)b_bOi4},
    {"bOi4S_r4r4r4_", (Il2CppMethodPointer)b_bOi4S_r4r4r4_},
    {"bOi4b", (Il2CppMethodPointer)b_bOi4b},
    {"bOi4bb", (Il2CppMethodPointer)b_bOi4bb},
    {"bOi4i4", (Il2CppMethodPointer)b_bOi4i4},
    {"bOi4i4o", (Il2CppMethodPointer)b_bOi4i4o},
    {"bOi4o", (Il2CppMethodPointer)b_bOi4o},
    {"bOi4r4br4", (Il2CppMethodPointer)b_bOi4r4br4},
    {"bOi4u4b", (Il2CppMethodPointer)b_bOi4u4b},
    {"bOi4u4u4u4", (Il2CppMethodPointer)b_bOi4u4u4u4},
    {"bOo", (Il2CppMethodPointer)b_bOo},
    {"bOoS_r4r4_b", (Il2CppMethodPointer)b_bOoS_r4r4_b},
    {"bOoS_r4r4_ob", (Il2CppMethodPointer)b_bOoS_r4r4_ob},
    {"bOoS_r4r4r4_r4i4", (Il2CppMethodPointer)b_bOoS_r4r4r4_r4i4},
    {"bOob", (Il2CppMethodPointer)b_bOob},
    {"bOoi4", (Il2CppMethodPointer)b_bOoi4},
    {"bOoi4i4", (Il2CppMethodPointer)b_bOoi4i4},
    {"bOoo", (Il2CppMethodPointer)b_bOoo},
    {"bOoob", (Il2CppMethodPointer)b_bOoob},
    {"bOooi4", (Il2CppMethodPointer)b_bOooi4},
    {"bOoou4", (Il2CppMethodPointer)b_bOoou4},
    {"bOor4", (Il2CppMethodPointer)b_bOor4},
    {"bOou4", (Il2CppMethodPointer)b_bOou4},
    {"bOs", (Il2CppMethodPointer)b_bOs},
    {"bOu4", (Il2CppMethodPointer)b_bOu4},
    {"bOu4S_i4i4i4so_", (Il2CppMethodPointer)b_bOu4S_i4i4i4so_},
    {"bOu4S_r4r4r4_", (Il2CppMethodPointer)b_bOu4S_r4r4r4_},
    {"bOu4b", (Il2CppMethodPointer)b_bOu4b},
    {"bOu4i4", (Il2CppMethodPointer)b_bOu4i4},
    {"bOu4i4r4", (Il2CppMethodPointer)b_bOu4i4r4},
    {"bOu4o", (Il2CppMethodPointer)b_bOu4o},
    {"bOu4oi4", (Il2CppMethodPointer)b_bOu4oi4},
    {"bOu4r4b", (Il2CppMethodPointer)b_bOu4r4b},
    {"bOu4u4", (Il2CppMethodPointer)b_bOu4u4},
    {"bOu4u4o", (Il2CppMethodPointer)b_bOu4u4o},
    {"bS_r4r4r4_", (Il2CppMethodPointer)b_bS_r4r4r4_},
    {"bS_u4o_", (Il2CppMethodPointer)b_bS_u4o_},
    {"bS_u4u4_", (Il2CppMethodPointer)b_bS_u4u4_},
    {"bb", (Il2CppMethodPointer)b_bb},
    {"bbi4", (Il2CppMethodPointer)b_bbi4},
    {"bi4", (Il2CppMethodPointer)b_bi4},
    {"bi4Di4", (Il2CppMethodPointer)b_bi4Di4},
    {"bi4S_r4r4_", (Il2CppMethodPointer)b_bi4S_r4r4_},
    {"bi4bi4", (Il2CppMethodPointer)b_bi4bi4},
    {"bi4i4", (Il2CppMethodPointer)b_bi4i4},
    {"bi4r4r4r4r4r4", (Il2CppMethodPointer)b_bi4r4r4r4r4r4},
    {"bi8", (Il2CppMethodPointer)b_bi8},
    {"bo", (Il2CppMethodPointer)b_bo},
    {"boTo", (Il2CppMethodPointer)b_boTo},
    {"boo", (Il2CppMethodPointer)b_boo},
    {"boor4o", (Il2CppMethodPointer)b_boor4o},
    {"bp", (Il2CppMethodPointer)b_bp},
    {"bpi4", (Il2CppMethodPointer)b_bpi4},
    {"bpp", (Il2CppMethodPointer)b_bpp},
    {"bppTp", (Il2CppMethodPointer)b_bppTp},
    {"bppp", (Il2CppMethodPointer)b_bppp},
    {"br4r4", (Il2CppMethodPointer)b_br4r4},
    {"bs", (Il2CppMethodPointer)b_bs},
    {"bsTs", (Il2CppMethodPointer)b_bsTs},
    {"bsi4i4bi4i4", (Il2CppMethodPointer)b_bsi4i4bi4i4},
    {"bsi4o", (Il2CppMethodPointer)b_bsi4o},
    {"bss", (Il2CppMethodPointer)b_bss},
    {"bssr4", (Il2CppMethodPointer)b_bssr4},
    {"bsu4i4", (Il2CppMethodPointer)b_bsu4i4},
    {"bu4ou4u4", (Il2CppMethodPointer)b_bu4ou4u4},
    {"bu8", (Il2CppMethodPointer)b_bu8},
    {"csi4c", (Il2CppMethodPointer)b_csi4c},
    {"i4", (Il2CppMethodPointer)b_i4},
    {"i4Ou4", (Il2CppMethodPointer)b_i4Ou4},
    {"i4S_r4r4r4_S_r4r4r4_", (Il2CppMethodPointer)b_i4S_r4r4r4_S_r4r4r4_},
    {"i4S_u4u4_S_u4u4_", (Il2CppMethodPointer)b_i4S_u4u4_S_u4u4_},
    {"i4bb", (Il2CppMethodPointer)b_i4bb},
    {"i4bi4", (Il2CppMethodPointer)b_i4bi4},
    {"i4i4", (Il2CppMethodPointer)b_i4i4},
    {"i4i4O", (Il2CppMethodPointer)b_i4i4O},
    {"i4i4i4", (Il2CppMethodPointer)b_i4i4i4},
    {"i4i8i8", (Il2CppMethodPointer)b_i4i8i8},
    {"i4o", (Il2CppMethodPointer)b_i4o},
    {"i4oi4", (Il2CppMethodPointer)b_i4oi4},
    {"i4oo", (Il2CppMethodPointer)b_i4oo},
    {"i4osooObS_r4r4r4_", (Il2CppMethodPointer)b_i4osooObS_r4r4r4_},
    {"i4p", (Il2CppMethodPointer)b_i4p},
    {"i4pPS_S_pi4S_u2u2__i4i4u1u1u2u4_", (Il2CppMethodPointer)b_i4pPS_S_pi4S_u2u2__i4i4u1u1u2u4_},
    {"i4pai4", (Il2CppMethodPointer)b_i4pai4},
    {"i4pb", (Il2CppMethodPointer)b_i4pb},
    {"i4pi4", (Il2CppMethodPointer)b_i4pi4},
    {"i4pi4i4", (Il2CppMethodPointer)b_i4pi4i4},
    {"i4pi4p", (Il2CppMethodPointer)b_i4pi4p},
    {"i4pi4pppp", (Il2CppMethodPointer)b_i4pi4pppp},
    {"i4pi8", (Il2CppMethodPointer)b_i4pi8},
    {"i4pr8", (Il2CppMethodPointer)b_i4pr8},
    {"i4pu4", (Il2CppMethodPointer)b_i4pu4},
    {"i4pu8", (Il2CppMethodPointer)b_i4pu8},
    {"i4s", (Il2CppMethodPointer)b_i4s},
    {"i4sbS_r4r4r4_S_r4r4r4_sss", (Il2CppMethodPointer)b_i4sbS_r4r4r4_S_r4r4r4_sss},
    {"i4si4DbDb", (Il2CppMethodPointer)b_i4si4DbDb},
    {"i4ss", (Il2CppMethodPointer)b_i4ss},
    {"i4u4", (Il2CppMethodPointer)b_i4u4},
    {"i4u4i4", (Il2CppMethodPointer)b_i4u4i4},
    {"i4u4i4i4b", (Il2CppMethodPointer)b_i4u4i4i4b},
    {"i4u4u4su4si4PS_ai4ssi4_i4", (Il2CppMethodPointer)b_i4u4u4su4si4PS_ai4ssi4_i4},
    {"i8pi4", (Il2CppMethodPointer)b_i8pi4},
    {"o", (Il2CppMethodPointer)b_o},
    {"oi4", (Il2CppMethodPointer)b_oi4},
    {"oi4S_r4r4r4_", (Il2CppMethodPointer)b_oi4S_r4r4r4_},
    {"oo", (Il2CppMethodPointer)b_oo},
    {"oob", (Il2CppMethodPointer)b_oob},
    {"opi4", (Il2CppMethodPointer)b_opi4},
    {"os", (Il2CppMethodPointer)b_os},
    {"osO", (Il2CppMethodPointer)b_osO},
    {"osau8", (Il2CppMethodPointer)b_osau8},
    {"osi4", (Il2CppMethodPointer)b_osi4},
    {"ou4", (Il2CppMethodPointer)b_ou4},
    {"pp", (Il2CppMethodPointer)b_pp},
    {"ppb", (Il2CppMethodPointer)b_ppb},
    {"ppi4", (Il2CppMethodPointer)b_ppi4},
    {"ppi4aPi4", (Il2CppMethodPointer)b_ppi4aPi4},
    {"ppi4u4", (Il2CppMethodPointer)b_ppi4u4},
    {"ppopo", (Il2CppMethodPointer)b_ppopo},
    {"ppp", (Il2CppMethodPointer)b_ppp},
    {"pppPp", (Il2CppMethodPointer)b_pppPp},
    {"pppi4i8", (Il2CppMethodPointer)b_pppi4i8},
    {"pppp", (Il2CppMethodPointer)b_pppp},
    {"ppppb", (Il2CppMethodPointer)b_ppppb},
    {"pppps", (Il2CppMethodPointer)b_pppps},
    {"ppps", (Il2CppMethodPointer)b_ppps},
    {"pppu8", (Il2CppMethodPointer)b_pppu8},
    {"ppu4pp", (Il2CppMethodPointer)b_ppu4pp},
    {"r4", (Il2CppMethodPointer)b_r4},
    {"r4o", (Il2CppMethodPointer)b_r4o},
    {"r4r4", (Il2CppMethodPointer)b_r4r4},
    {"r4r4r4r4", (Il2CppMethodPointer)b_r4r4r4r4},
    {"r4s", (Il2CppMethodPointer)b_r4s},
    {"r8pi4", (Il2CppMethodPointer)b_r8pi4},
    {"s", (Il2CppMethodPointer)b_s},
    {"si4", (Il2CppMethodPointer)b_si4},
    {"si4i4", (Il2CppMethodPointer)b_si4i4},
    {"so", (Il2CppMethodPointer)b_so},
    {"spi4", (Il2CppMethodPointer)b_spi4},
    {"ss", (Il2CppMethodPointer)b_ss},
    {"sssDs", (Il2CppMethodPointer)b_sssDs},
    {"sssoo", (Il2CppMethodPointer)b_sssoo},
    {"u4", (Il2CppMethodPointer)b_u4},
    {"u4i4u4", (Il2CppMethodPointer)b_u4i4u4},
    {"u4pi4", (Il2CppMethodPointer)b_u4pi4},
    {"u4pp", (Il2CppMethodPointer)b_u4pp},
    {"u4soi4i4sb", (Il2CppMethodPointer)b_u4soi4i4sb},
    {"u8", (Il2CppMethodPointer)b_u8},
    {"u8o", (Il2CppMethodPointer)b_u8o},
    {"u8pi4", (Il2CppMethodPointer)b_u8pi4},
    {"v", (Il2CppMethodPointer)b_v},
    {"vN_bu4_N_bu4_", (Il2CppMethodPointer)b_vN_bu4_N_bu4_},
    {"vO", (Il2CppMethodPointer)b_vO},
    {"vOO", (Il2CppMethodPointer)b_vOO},
    {"vOi4o", (Il2CppMethodPointer)b_vOi4o},
    {"vOi4s", (Il2CppMethodPointer)b_vOi4s},
    {"vOi4sb", (Il2CppMethodPointer)b_vOi4sb},
    {"vOo", (Il2CppMethodPointer)b_vOo},
    {"vPS_S_u4o_S_u4o_S_u4o_S_u4o_bbo_", (Il2CppMethodPointer)b_vPS_S_u4o_S_u4o_S_u4o_S_u4o_bbo_},
    {"vPS_S_u4o_bS_u4o__", (Il2CppMethodPointer)b_vPS_S_u4o_bS_u4o__},
    {"vPS_S_u4o_i4S_u4o__", (Il2CppMethodPointer)b_vPS_S_u4o_i4S_u4o__},
    {"vPS_S_u4o_i4_", (Il2CppMethodPointer)b_vPS_S_u4o_i4_},
    {"vPS_S_u4o_i4i4u4_", (Il2CppMethodPointer)b_vPS_S_u4o_i4i4u4_},
    {"vPS_i4_", (Il2CppMethodPointer)b_vPS_i4_},
    {"vPS_i4i4i4_", (Il2CppMethodPointer)b_vPS_i4i4i4_},
    {"vPS_pu4u4u4r4r4i4u4p_", (Il2CppMethodPointer)b_vPS_pu4u4u4r4r4i4u4p_},
    {"vPS_pu4u8u8i4pu4u4_", (Il2CppMethodPointer)b_vPS_pu4u8u8i4pu4u4_},
    {"vPS_u1i4i4_", (Il2CppMethodPointer)b_vPS_u1i4i4_},
    {"vPS_u4_", (Il2CppMethodPointer)b_vPS_u4_},
    {"vPS_u4i4_", (Il2CppMethodPointer)b_vPS_u4i4_},
    {"vPS_u4u4S_i4i4__", (Il2CppMethodPointer)b_vPS_u4u4S_i4i4__},
    {"vPS_u4u4u4_", (Il2CppMethodPointer)b_vPS_u4u4u4_},
    {"vPS_u8psu4i4u4u4_", (Il2CppMethodPointer)b_vPS_u8psu4i4u4u4_},
    {"vPo", (Il2CppMethodPointer)b_vPo},
    {"vS_S_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4S_r4r4r4_r4r4r4_ooi4_or4", (Il2CppMethodPointer)b_vS_S_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4S_r4r4r4_r4r4r4_ooi4_or4},
    {"vS_i4S_r4r4r4_i4_", (Il2CppMethodPointer)b_vS_i4S_r4r4r4_i4_},
    {"vS_i4_", (Il2CppMethodPointer)b_vS_i4_},
    {"vS_i4_i4", (Il2CppMethodPointer)b_vS_i4_i4},
    {"vS_i4o_", (Il2CppMethodPointer)b_vS_i4o_},
    {"vS_i8i8_", (Il2CppMethodPointer)b_vS_i8i8_},
    {"vS_pi4_", (Il2CppMethodPointer)b_vS_pi4_},
    {"vS_pppi4ooo_", (Il2CppMethodPointer)b_vS_pppi4ooo_},
    {"vS_r4r4_", (Il2CppMethodPointer)b_vS_r4r4_},
    {"vS_r4r4_S_r4r4_", (Il2CppMethodPointer)b_vS_r4r4_S_r4r4_},
    {"vS_r4r4_S_r4r4_r4", (Il2CppMethodPointer)b_vS_r4r4_S_r4r4_r4},
    {"vS_r4r4_b", (Il2CppMethodPointer)b_vS_r4r4_b},
    {"vS_r4r4_i4", (Il2CppMethodPointer)b_vS_r4r4_i4},
    {"vS_r4r4_i4r4", (Il2CppMethodPointer)b_vS_r4r4_i4r4},
    {"vS_r4r4r4_", (Il2CppMethodPointer)b_vS_r4r4r4_},
    {"vS_r4r4r4_O", (Il2CppMethodPointer)b_vS_r4r4r4_O},
    {"vS_r4r4r4_i4", (Il2CppMethodPointer)b_vS_r4r4r4_i4},
    {"vS_r4r4r4r4_", (Il2CppMethodPointer)b_vS_r4r4r4r4_},
    {"vS_r4r4r4r4_O", (Il2CppMethodPointer)b_vS_r4r4r4r4_O},
    {"vS_sssi4i4i4u4u4u4u4i4bsssbs_", (Il2CppMethodPointer)b_vS_sssi4i4i4u4u4u4u4i4bsssbs_},
    {"vS_u4o_", (Il2CppMethodPointer)b_vS_u4o_},
    {"vS_u4o_b", (Il2CppMethodPointer)b_vS_u4o_b},
    {"vS_u4o_i4", (Il2CppMethodPointer)b_vS_u4o_i4},
    {"vS_u4o_o", (Il2CppMethodPointer)b_vS_u4o_o},
    {"vS_u4u4_", (Il2CppMethodPointer)b_vS_u4u4_},
    {"vS_u4u4b_", (Il2CppMethodPointer)b_vS_u4u4b_},
    {"vS_u4u4u4_", (Il2CppMethodPointer)b_vS_u4u4u4_},
    {"vS_u4u4u4i4_", (Il2CppMethodPointer)b_vS_u4u4u4i4_},
    {"vS_u4u4u4u4_", (Il2CppMethodPointer)b_vS_u4u4u4u4_},
    {"va", (Il2CppMethodPointer)b_va},
    {"vai4s", (Il2CppMethodPointer)b_vai4s},
    {"vb", (Il2CppMethodPointer)b_vb},
    {"vbO", (Il2CppMethodPointer)b_vbO},
    {"vbPS_i4i4_", (Il2CppMethodPointer)b_vbPS_i4i4_},
    {"vbb", (Il2CppMethodPointer)b_vbb},
    {"vbbb", (Il2CppMethodPointer)b_vbbb},
    {"vbi4", (Il2CppMethodPointer)b_vbi4},
    {"vbi4i4", (Il2CppMethodPointer)b_vbi4i4},
    {"vbi4s", (Il2CppMethodPointer)b_vbi4s},
    {"vbo", (Il2CppMethodPointer)b_vbo},
    {"vbu4", (Il2CppMethodPointer)b_vbu4},
    {"vi4", (Il2CppMethodPointer)b_vi4},
    {"vi4O", (Il2CppMethodPointer)b_vi4O},
    {"vi4S_i4i4i4_", (Il2CppMethodPointer)b_vi4S_i4i4i4_},
    {"vi4S_r4r4_", (Il2CppMethodPointer)b_vi4S_r4r4_},
    {"vi4S_r4r4_S_r4r4_", (Il2CppMethodPointer)b_vi4S_r4r4_S_r4r4_},
    {"vi4S_r4r4_i4", (Il2CppMethodPointer)b_vi4S_r4r4_i4},
    {"vi4S_r4r4_i4r4", (Il2CppMethodPointer)b_vi4S_r4r4_i4r4},
    {"vi4S_r4r4_r4", (Il2CppMethodPointer)b_vi4S_r4r4_r4},
    {"vi4S_u4o_", (Il2CppMethodPointer)b_vi4S_u4o_},
    {"vi4b", (Il2CppMethodPointer)b_vi4b},
    {"vi4bi4i4b", (Il2CppMethodPointer)b_vi4bi4i4b},
    {"vi4i4", (Il2CppMethodPointer)b_vi4i4},
    {"vi4i4S_i4i4i4i4_i4", (Il2CppMethodPointer)b_vi4i4S_i4i4i4i4_i4},
    {"vi4i4b", (Il2CppMethodPointer)b_vi4i4b},
    {"vi4i4i4", (Il2CppMethodPointer)b_vi4i4i4},
    {"vi4i4i4s", (Il2CppMethodPointer)b_vi4i4i4s},
    {"vi4i4i4ss", (Il2CppMethodPointer)b_vi4i4i4ss},
    {"vi4i4i4ssi4s", (Il2CppMethodPointer)b_vi4i4i4ssi4s},
    {"vi4i4i4sssi4s", (Il2CppMethodPointer)b_vi4i4i4sssi4s},
    {"vi4i4s", (Il2CppMethodPointer)b_vi4i4s},
    {"vi4i4si4s", (Il2CppMethodPointer)b_vi4i4si4s},
    {"vi4i4ss", (Il2CppMethodPointer)b_vi4i4ss},
    {"vi4o", (Il2CppMethodPointer)b_vi4o},
    {"vi4oi4i4i4", (Il2CppMethodPointer)b_vi4oi4i4i4},
    {"vi4oi4i4ssi4i4", (Il2CppMethodPointer)b_vi4oi4i4ssi4i4},
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
    {"vi4ssso", (Il2CppMethodPointer)b_vi4ssso},
    {"vi4u4", (Il2CppMethodPointer)b_vi4u4},
    {"vi4u4i4", (Il2CppMethodPointer)b_vi4u4i4},
    {"vi4u8", (Il2CppMethodPointer)b_vi4u8},
    {"vi8", (Il2CppMethodPointer)b_vi8},
    {"vi8bu4u4", (Il2CppMethodPointer)b_vi8bu4u4},
    {"vi8i4", (Il2CppMethodPointer)b_vi8i4},
    {"vi8i4i8i8i8", (Il2CppMethodPointer)b_vi8i4i8i8i8},
    {"vi8i8i8i8", (Il2CppMethodPointer)b_vi8i8i8i8},
    {"vi8pu4", (Il2CppMethodPointer)b_vi8pu4},
    {"vi8su4", (Il2CppMethodPointer)b_vi8su4},
    {"vo", (Il2CppMethodPointer)b_vo},
    {"voO", (Il2CppMethodPointer)b_voO},
    {"voS_o_", (Il2CppMethodPointer)b_voS_o_},
    {"voS_r4r4_", (Il2CppMethodPointer)b_voS_r4r4_},
    {"voS_r4r4_b", (Il2CppMethodPointer)b_voS_r4r4_b},
    {"voS_r4r4_ob", (Il2CppMethodPointer)b_voS_r4r4_ob},
    {"voS_r4r4r4_", (Il2CppMethodPointer)b_voS_r4r4r4_},
    {"voS_r4r4r4r4_", (Il2CppMethodPointer)b_voS_r4r4r4r4_},
    {"vob", (Il2CppMethodPointer)b_vob},
    {"vobs", (Il2CppMethodPointer)b_vobs},
    {"voi4", (Il2CppMethodPointer)b_voi4},
    {"voo", (Il2CppMethodPointer)b_voo},
    {"vooo", (Il2CppMethodPointer)b_vooo},
    {"voooboS_oi4bbbS_r4r4_oi4bbbr4bb_", (Il2CppMethodPointer)b_voooboS_oi4bbbS_r4r4_oi4bbbr4bb_},
    {"voor4i4", (Il2CppMethodPointer)b_voor4i4},
    {"vor4", (Il2CppMethodPointer)b_vor4},
    {"vor4i4", (Il2CppMethodPointer)b_vor4i4},
    {"vor4ob", (Il2CppMethodPointer)b_vor4ob},
    {"vor4r4", (Il2CppMethodPointer)b_vor4r4},
    {"vos", (Il2CppMethodPointer)b_vos},
    {"vou4", (Il2CppMethodPointer)b_vou4},
    {"vou4oo", (Il2CppMethodPointer)b_vou4oo},
    {"vou8u4", (Il2CppMethodPointer)b_vou8u4},
    {"vp", (Il2CppMethodPointer)b_vp},
    {"vpO", (Il2CppMethodPointer)b_vpO},
    {"vpS_r4r4r4_", (Il2CppMethodPointer)b_vpS_r4r4r4_},
    {"vpb", (Il2CppMethodPointer)b_vpb},
    {"vpi4", (Il2CppMethodPointer)b_vpi4},
    {"vpi4i4", (Il2CppMethodPointer)b_vpi4i4},
    {"vpi4i4i4", (Il2CppMethodPointer)b_vpi4i4i4},
    {"vpi8", (Il2CppMethodPointer)b_vpi8},
    {"vpo", (Il2CppMethodPointer)b_vpo},
    {"vpp", (Il2CppMethodPointer)b_vpp},
    {"vppp", (Il2CppMethodPointer)b_vppp},
    {"vpppi4i8", (Il2CppMethodPointer)b_vpppi4i8},
    {"vppsp", (Il2CppMethodPointer)b_vppsp},
    {"vppu8p", (Il2CppMethodPointer)b_vppu8p},
    {"vpr4", (Il2CppMethodPointer)b_vpr4},
    {"vps", (Il2CppMethodPointer)b_vps},
    {"vpu4", (Il2CppMethodPointer)b_vpu4},
    {"vpu4u4p", (Il2CppMethodPointer)b_vpu4u4p},
    {"vpu8", (Il2CppMethodPointer)b_vpu8},
    {"vr4", (Il2CppMethodPointer)b_vr4},
    {"vr4O", (Il2CppMethodPointer)b_vr4O},
    {"vr4i4", (Il2CppMethodPointer)b_vr4i4},
    {"vr4i4i4", (Il2CppMethodPointer)b_vr4i4i4},
    {"vr4r4", (Il2CppMethodPointer)b_vr4r4},
    {"vs", (Il2CppMethodPointer)b_vs},
    {"vsO", (Il2CppMethodPointer)b_vsO},
    {"vsVO", (Il2CppMethodPointer)b_vsVO},
    {"vsa", (Il2CppMethodPointer)b_vsa},
    {"vsai4i4", (Il2CppMethodPointer)b_vsai4i4},
    {"vsb", (Il2CppMethodPointer)b_vsb},
    {"vsbO", (Il2CppMethodPointer)b_vsbO},
    {"vsbS_S_Pvi4i4i4S_pi4i4_i4_i4i4i4_", (Il2CppMethodPointer)b_vsbS_S_Pvi4i4i4S_pi4i4_i4_i4i4i4_},
    {"vsbS_r4r4r4_S_r4r4r4_so", (Il2CppMethodPointer)b_vsbS_r4r4r4_S_r4r4r4_so},
    {"vsbs", (Il2CppMethodPointer)b_vsbs},
    {"vsi4", (Il2CppMethodPointer)b_vsi4},
    {"vsi4DbDb", (Il2CppMethodPointer)b_vsi4DbDb},
    {"vsi4i4", (Il2CppMethodPointer)b_vsi4i4},
    {"vsi4i4bi4", (Il2CppMethodPointer)b_vsi4i4bi4},
    {"vsi4i4pi4", (Il2CppMethodPointer)b_vsi4i4pi4},
    {"vsi4o", (Il2CppMethodPointer)b_vsi4o},
    {"vsi4si4s", (Il2CppMethodPointer)b_vsi4si4s},
    {"vsi4ss", (Il2CppMethodPointer)b_vsi4ss},
    {"vso", (Il2CppMethodPointer)b_vso},
    {"vsob", (Il2CppMethodPointer)b_vsob},
    {"vsoi4", (Il2CppMethodPointer)b_vsoi4},
    {"vsos", (Il2CppMethodPointer)b_vsos},
    {"vss", (Il2CppMethodPointer)b_vss},
    {"vssO", (Il2CppMethodPointer)b_vssO},
    {"vssb", (Il2CppMethodPointer)b_vssb},
    {"vssi4", (Il2CppMethodPointer)b_vssi4},
    {"vssi4bu4", (Il2CppMethodPointer)b_vssi4bu4},
    {"vssi4i4", (Il2CppMethodPointer)b_vssi4i4},
    {"vssi4i4o", (Il2CppMethodPointer)b_vssi4i4o},
    {"vssi4o", (Il2CppMethodPointer)b_vssi4o},
    {"vsso", (Il2CppMethodPointer)b_vsso},
    {"vssoo", (Il2CppMethodPointer)b_vssoo},
    {"vssss", (Il2CppMethodPointer)b_vssss},
    {"vsu4", (Il2CppMethodPointer)b_vsu4},
    {"vu1b", (Il2CppMethodPointer)b_vu1b},
    {"vu4", (Il2CppMethodPointer)b_vu4},
    {"vu4S_r4r4r4_", (Il2CppMethodPointer)b_vu4S_r4r4r4_},
    {"vu4S_u4u4i4i4_", (Il2CppMethodPointer)b_vu4S_u4u4i4i4_},
    {"vu4b", (Il2CppMethodPointer)b_vu4b},
    {"vu4bb", (Il2CppMethodPointer)b_vu4bb},
    {"vu4i4", (Il2CppMethodPointer)b_vu4i4},
    {"vu4i4OO", (Il2CppMethodPointer)b_vu4i4OO},
    {"vu4i4i4", (Il2CppMethodPointer)b_vu4i4i4},
    {"vu4i4i4i4", (Il2CppMethodPointer)b_vu4i4i4i4},
    {"vu4i4i4o", (Il2CppMethodPointer)b_vu4i4i4o},
    {"vu4i4o", (Il2CppMethodPointer)b_vu4i4o},
    {"vu4o", (Il2CppMethodPointer)b_vu4o},
    {"vu4oO", (Il2CppMethodPointer)b_vu4oO},
    {"vu4oo", (Il2CppMethodPointer)b_vu4oo},
    {"vu4p", (Il2CppMethodPointer)b_vu4p},
    {"vu4pi4O", (Il2CppMethodPointer)b_vu4pi4O},
    {"vu4s", (Il2CppMethodPointer)b_vu4s},
    {"vu4ss", (Il2CppMethodPointer)b_vu4ss},
    {"vu4u4", (Il2CppMethodPointer)b_vu4u4},
    {"vu4u4b", (Il2CppMethodPointer)b_vu4u4b},
    {"vu4u4i4", (Il2CppMethodPointer)b_vu4u4i4},
    {"vu4u4i4o", (Il2CppMethodPointer)b_vu4u4i4o},
    {"vu4u4ob", (Il2CppMethodPointer)b_vu4u4ob},
    {"vu4u4u4", (Il2CppMethodPointer)b_vu4u4u4},
    {"vu4u4u4u4", (Il2CppMethodPointer)b_vu4u4u4u4},
    {"vu8", (Il2CppMethodPointer)b_vu8},
    {"vu8i4", (Il2CppMethodPointer)b_vu8i4},
    {"vu8i4i4p", (Il2CppMethodPointer)b_vu8i4i4p},
    {"vu8i4i4s", (Il2CppMethodPointer)b_vu8i4i4s},
    {"vu8o", (Il2CppMethodPointer)b_vu8o},
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

