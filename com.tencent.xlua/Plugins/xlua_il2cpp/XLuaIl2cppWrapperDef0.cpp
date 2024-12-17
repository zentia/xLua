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

// UnityEngine.Vector3 get_zero() declare in UnityEngine.Vector3
bool w_S_r4r4r4_(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_S_r4r4r4_");
    AutoValueScope value_scope(apis, env);
    auto TIret = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);

    if (checkLuaArgument) {
        if (lua_args_len != 0) 
            return false;

    }

    typedef struct S_r4r4r4_ (*FuncToCall)(const void* method);
    struct S_r4r4r4_ ret = ((FuncToCall)methodPointer)(  method);
	int r = DataTransfer::CopyValueType(apis, env, ret, TIret);
	apis->add_return(info, r);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// UnityEngine.Vector3 Normalize(UnityEngine.Vector3) declare in UnityEngine.Vector3
bool w_S_r4r4r4_S_r4r4r4_(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_S_r4r4r4_S_r4r4r4_");
    AutoValueScope value_scope(apis, env);
    auto TIret = wrapData->TypeInfos[0];
    auto TIp0 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    if (checkLuaArgument) {
        if (lua_args_len != 1) 
            return false;

        if (!DataTransfer::IsAssignable(apis, env, _sv0, TIp0, true))
            return false;        
    }
     // LuaValToCSVal struct
    S_r4r4r4_* pp0 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, _sv0);
    S_r4r4r4_ p0 = pp0 ? *pp0 : S_r4r4r4_ {};
        
    typedef struct S_r4r4r4_ (*FuncToCall)(struct S_r4r4r4_ p1, const void* method);
    struct S_r4r4r4_ ret = ((FuncToCall)methodPointer)( p0,  method);
	int r = DataTransfer::CopyValueType(apis, env, ret, TIret);
	apis->add_return(info, r);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// UnityEngine.Vector3 Scale(UnityEngine.Vector3, UnityEngine.Vector3) declare in UnityEngine.Vector3
bool w_S_r4r4r4_S_r4r4r4_S_r4r4r4_(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_S_r4r4r4_S_r4r4r4_S_r4r4r4_");
    AutoValueScope value_scope(apis, env);
    auto TIret = wrapData->TypeInfos[0];
    auto TIp0 = wrapData->TypeInfos[1];
    auto TIp1 = wrapData->TypeInfos[2];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!DataTransfer::IsAssignable(apis, env, _sv0, TIp0, true))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, true))
            return false;        
    }
     // LuaValToCSVal struct
    S_r4r4r4_* pp0 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, _sv0);
    S_r4r4r4_ p0 = pp0 ? *pp0 : S_r4r4r4_ {};
             // LuaValToCSVal struct
    S_r4r4r4_* pp1 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, _sv1);
    S_r4r4r4_ p1 = pp1 ? *pp1 : S_r4r4r4_ {};
        
    typedef struct S_r4r4r4_ (*FuncToCall)(struct S_r4r4r4_ p1, struct S_r4r4r4_ p2, const void* method);
    struct S_r4r4r4_ ret = ((FuncToCall)methodPointer)( p0, p1,  method);
	int r = DataTransfer::CopyValueType(apis, env, ret, TIret);
	apis->add_return(info, r);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// UnityEngine.Vector3 SmoothDamp(UnityEngine.Vector3, UnityEngine.Vector3, UnityEngine.Vector3 ByRef, Single) declare in UnityEngine.Vector3
bool w_S_r4r4r4_S_r4r4r4_S_r4r4r4_PS_r4r4r4_r4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_S_r4r4r4_S_r4r4r4_S_r4r4r4_PS_r4r4r4_r4");
    AutoValueScope value_scope(apis, env);
    auto TIret = wrapData->TypeInfos[0];
    auto TIp0 = wrapData->TypeInfos[1];
    auto TIp1 = wrapData->TypeInfos[2];
    auto TIp2 = wrapData->TypeInfos[3];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    if (checkLuaArgument) {
        if (lua_args_len != 4) 
            return false;

        if (!DataTransfer::IsAssignable(apis, env, _sv0, TIp0, true))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, true))
            return false;
        if (!apis->is_object(env, _sv2)) return false;
        if (!converter::Converter<float>::accept(apis, env, _sv3))
            return false;        
    }
     // LuaValToCSVal struct
    S_r4r4r4_* pp0 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, _sv0);
    S_r4r4r4_ p0 = pp0 ? *pp0 : S_r4r4r4_ {};
             // LuaValToCSVal struct
    S_r4r4r4_* pp1 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, _sv1);
    S_r4r4r4_ p1 = pp1 ? *pp1 : S_r4r4r4_ {};
             
    // LuaValToCSVal Pstruct
    S_r4r4r4_* p2 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, apis->unboxing(env, _sv2)); // valuetype ref
    S_r4r4r4_ up2;
    if (!p2) {
        memset(&up2, 0, sizeof(p2));
        p2 = &up2;
    }
                
    // LuaValToCSVal P any
    float p3 = converter::Converter<float>::toCpp(apis, env, _sv3);
        
    typedef struct S_r4r4r4_ (*FuncToCall)(struct S_r4r4r4_ p1, struct S_r4r4r4_ p2, struct S_r4r4r4_* p3, float p4, const void* method);
    struct S_r4r4r4_ ret = ((FuncToCall)methodPointer)( p0, p1, p2, p3,  method);
	int r = DataTransfer::CopyValueType(apis, env, ret, TIret);                
    int ret2;
    if (p2 == &up2)
    {
        ret2 = DataTransfer::CopyValueType(apis, env, *p2, TIp2);    
        apis->update_boxed_value(env, _sv2, ret2);
    }
    else
    {
        ret2 = apis->native_object_to_value(env, TIp2, p2, false);
    }

	apis->add_return(info, r);
	apis->add_return(info, ret2);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// UnityEngine.Vector3 SmoothDamp(UnityEngine.Vector3, UnityEngine.Vector3, UnityEngine.Vector3 ByRef, Single, Single) declare in UnityEngine.Vector3
bool w_S_r4r4r4_S_r4r4r4_S_r4r4r4_PS_r4r4r4_r4r4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_S_r4r4r4_S_r4r4r4_S_r4r4r4_PS_r4r4r4_r4r4");
    AutoValueScope value_scope(apis, env);
    auto TIret = wrapData->TypeInfos[0];
    auto TIp0 = wrapData->TypeInfos[1];
    auto TIp1 = wrapData->TypeInfos[2];
    auto TIp2 = wrapData->TypeInfos[3];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    int _sv4 = apis->get_arg(info, 4);
    if (checkLuaArgument) {
        if (lua_args_len != 5) 
            return false;

        if (!DataTransfer::IsAssignable(apis, env, _sv0, TIp0, true))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, true))
            return false;
        if (!apis->is_object(env, _sv2)) return false;
        if (!converter::Converter<float>::accept(apis, env, _sv3))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv4))
            return false;        
    }
     // LuaValToCSVal struct
    S_r4r4r4_* pp0 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, _sv0);
    S_r4r4r4_ p0 = pp0 ? *pp0 : S_r4r4r4_ {};
             // LuaValToCSVal struct
    S_r4r4r4_* pp1 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, _sv1);
    S_r4r4r4_ p1 = pp1 ? *pp1 : S_r4r4r4_ {};
             
    // LuaValToCSVal Pstruct
    S_r4r4r4_* p2 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, apis->unboxing(env, _sv2)); // valuetype ref
    S_r4r4r4_ up2;
    if (!p2) {
        memset(&up2, 0, sizeof(p2));
        p2 = &up2;
    }
                
    // LuaValToCSVal P any
    float p3 = converter::Converter<float>::toCpp(apis, env, _sv3);
                
    // LuaValToCSVal P any
    float p4 = converter::Converter<float>::toCpp(apis, env, _sv4);
        
    typedef struct S_r4r4r4_ (*FuncToCall)(struct S_r4r4r4_ p1, struct S_r4r4r4_ p2, struct S_r4r4r4_* p3, float p4, float p5, const void* method);
    struct S_r4r4r4_ ret = ((FuncToCall)methodPointer)( p0, p1, p2, p3, p4,  method);
	int r = DataTransfer::CopyValueType(apis, env, ret, TIret);                
    int ret2;
    if (p2 == &up2)
    {
        ret2 = DataTransfer::CopyValueType(apis, env, *p2, TIp2);    
        apis->update_boxed_value(env, _sv2, ret2);
    }
    else
    {
        ret2 = apis->native_object_to_value(env, TIp2, p2, false);
    }

	apis->add_return(info, r);
	apis->add_return(info, ret2);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// UnityEngine.Vector3 SmoothDamp(UnityEngine.Vector3, UnityEngine.Vector3, UnityEngine.Vector3 ByRef, Single, Single, Single) declare in UnityEngine.Vector3
bool w_S_r4r4r4_S_r4r4r4_S_r4r4r4_PS_r4r4r4_r4r4r4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_S_r4r4r4_S_r4r4r4_S_r4r4r4_PS_r4r4r4_r4r4r4");
    AutoValueScope value_scope(apis, env);
    auto TIret = wrapData->TypeInfos[0];
    auto TIp0 = wrapData->TypeInfos[1];
    auto TIp1 = wrapData->TypeInfos[2];
    auto TIp2 = wrapData->TypeInfos[3];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    int _sv4 = apis->get_arg(info, 4);
    int _sv5 = apis->get_arg(info, 5);
    if (checkLuaArgument) {
        if (lua_args_len != 6) 
            return false;

        if (!DataTransfer::IsAssignable(apis, env, _sv0, TIp0, true))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, true))
            return false;
        if (!apis->is_object(env, _sv2)) return false;
        if (!converter::Converter<float>::accept(apis, env, _sv3))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv4))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv5))
            return false;        
    }
     // LuaValToCSVal struct
    S_r4r4r4_* pp0 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, _sv0);
    S_r4r4r4_ p0 = pp0 ? *pp0 : S_r4r4r4_ {};
             // LuaValToCSVal struct
    S_r4r4r4_* pp1 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, _sv1);
    S_r4r4r4_ p1 = pp1 ? *pp1 : S_r4r4r4_ {};
             
    // LuaValToCSVal Pstruct
    S_r4r4r4_* p2 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, apis->unboxing(env, _sv2)); // valuetype ref
    S_r4r4r4_ up2;
    if (!p2) {
        memset(&up2, 0, sizeof(p2));
        p2 = &up2;
    }
                
    // LuaValToCSVal P any
    float p3 = converter::Converter<float>::toCpp(apis, env, _sv3);
                
    // LuaValToCSVal P any
    float p4 = converter::Converter<float>::toCpp(apis, env, _sv4);
                
    // LuaValToCSVal P any
    float p5 = converter::Converter<float>::toCpp(apis, env, _sv5);
        
    typedef struct S_r4r4r4_ (*FuncToCall)(struct S_r4r4r4_ p1, struct S_r4r4r4_ p2, struct S_r4r4r4_* p3, float p4, float p5, float p6, const void* method);
    struct S_r4r4r4_ ret = ((FuncToCall)methodPointer)( p0, p1, p2, p3, p4, p5,  method);
	int r = DataTransfer::CopyValueType(apis, env, ret, TIret);                
    int ret2;
    if (p2 == &up2)
    {
        ret2 = DataTransfer::CopyValueType(apis, env, *p2, TIp2);    
        apis->update_boxed_value(env, _sv2, ret2);
    }
    else
    {
        ret2 = apis->native_object_to_value(env, TIp2, p2, false);
    }

	apis->add_return(info, r);
	apis->add_return(info, ret2);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// UnityEngine.Vector3 Slerp(UnityEngine.Vector3, UnityEngine.Vector3, Single) declare in UnityEngine.Vector3
bool w_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4");
    AutoValueScope value_scope(apis, env);
    auto TIret = wrapData->TypeInfos[0];
    auto TIp0 = wrapData->TypeInfos[1];
    auto TIp1 = wrapData->TypeInfos[2];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!DataTransfer::IsAssignable(apis, env, _sv0, TIp0, true))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, true))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv2))
            return false;        
    }
     // LuaValToCSVal struct
    S_r4r4r4_* pp0 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, _sv0);
    S_r4r4r4_ p0 = pp0 ? *pp0 : S_r4r4r4_ {};
             // LuaValToCSVal struct
    S_r4r4r4_* pp1 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, _sv1);
    S_r4r4r4_ p1 = pp1 ? *pp1 : S_r4r4r4_ {};
                
    // LuaValToCSVal P any
    float p2 = converter::Converter<float>::toCpp(apis, env, _sv2);
        
    typedef struct S_r4r4r4_ (*FuncToCall)(struct S_r4r4r4_ p1, struct S_r4r4r4_ p2, float p3, const void* method);
    struct S_r4r4r4_ ret = ((FuncToCall)methodPointer)( p0, p1, p2,  method);
	int r = DataTransfer::CopyValueType(apis, env, ret, TIret);
	apis->add_return(info, r);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// UnityEngine.Vector3 RotateTowards(UnityEngine.Vector3, UnityEngine.Vector3, Single, Single) declare in UnityEngine.Vector3
bool w_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4r4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4r4");
    AutoValueScope value_scope(apis, env);
    auto TIret = wrapData->TypeInfos[0];
    auto TIp0 = wrapData->TypeInfos[1];
    auto TIp1 = wrapData->TypeInfos[2];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    if (checkLuaArgument) {
        if (lua_args_len != 4) 
            return false;

        if (!DataTransfer::IsAssignable(apis, env, _sv0, TIp0, true))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, true))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv2))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv3))
            return false;        
    }
     // LuaValToCSVal struct
    S_r4r4r4_* pp0 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, _sv0);
    S_r4r4r4_ p0 = pp0 ? *pp0 : S_r4r4r4_ {};
             // LuaValToCSVal struct
    S_r4r4r4_* pp1 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, _sv1);
    S_r4r4r4_ p1 = pp1 ? *pp1 : S_r4r4r4_ {};
                
    // LuaValToCSVal P any
    float p2 = converter::Converter<float>::toCpp(apis, env, _sv2);
                
    // LuaValToCSVal P any
    float p3 = converter::Converter<float>::toCpp(apis, env, _sv3);
        
    typedef struct S_r4r4r4_ (*FuncToCall)(struct S_r4r4r4_ p1, struct S_r4r4r4_ p2, float p3, float p4, const void* method);
    struct S_r4r4r4_ ret = ((FuncToCall)methodPointer)( p0, p1, p2, p3,  method);
	int r = DataTransfer::CopyValueType(apis, env, ret, TIret);
	apis->add_return(info, r);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// UnityEngine.Vector3 ClampMagnitude(UnityEngine.Vector3, Single) declare in UnityEngine.Vector3
bool w_S_r4r4r4_S_r4r4r4_r4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_S_r4r4r4_S_r4r4r4_r4");
    AutoValueScope value_scope(apis, env);
    auto TIret = wrapData->TypeInfos[0];
    auto TIp0 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!DataTransfer::IsAssignable(apis, env, _sv0, TIp0, true))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv1))
            return false;        
    }
     // LuaValToCSVal struct
    S_r4r4r4_* pp0 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, _sv0);
    S_r4r4r4_ p0 = pp0 ? *pp0 : S_r4r4r4_ {};
                
    // LuaValToCSVal P any
    float p1 = converter::Converter<float>::toCpp(apis, env, _sv1);
        
    typedef struct S_r4r4r4_ (*FuncToCall)(struct S_r4r4r4_ p1, float p2, const void* method);
    struct S_r4r4r4_ ret = ((FuncToCall)methodPointer)( p0, p1,  method);
	int r = DataTransfer::CopyValueType(apis, env, ret, TIret);
	apis->add_return(info, r);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// UnityEngine.Vector3 op_Multiply(Single, UnityEngine.Vector3) declare in UnityEngine.Vector3
bool w_S_r4r4r4_r4S_r4r4r4_(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_S_r4r4r4_r4S_r4r4r4_");
    AutoValueScope value_scope(apis, env);
    auto TIret = wrapData->TypeInfos[0];
    auto TIp1 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<float>::accept(apis, env, _sv0))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, true))
            return false;        
    }
        
    // LuaValToCSVal P any
    float p0 = converter::Converter<float>::toCpp(apis, env, _sv0);
             // LuaValToCSVal struct
    S_r4r4r4_* pp1 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, _sv1);
    S_r4r4r4_ p1 = pp1 ? *pp1 : S_r4r4r4_ {};
        
    typedef struct S_r4r4r4_ (*FuncToCall)(float p1, struct S_r4r4r4_ p2, const void* method);
    struct S_r4r4r4_ ret = ((FuncToCall)methodPointer)( p0, p1,  method);
	int r = DataTransfer::CopyValueType(apis, env, ret, TIret);
	apis->add_return(info, r);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// UnityEngine.Vector3 get_normalized() declare in UnityEngine.Vector3
bool w_S_r4r4r4_t(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_S_r4r4r4_t");
    AutoValueScope value_scope(apis, env);
    auto TIret = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);

    if (checkLuaArgument) {
        if (lua_args_len != 0) 
            return false;

    }

    typedef struct S_r4r4r4_ (*FuncToCall)(void*,const void* method);
    struct S_r4r4r4_ ret = ((FuncToCall)methodPointer)(self,  method);
	int r = DataTransfer::CopyValueType(apis, env, ret, TIret);
	apis->add_return(info, r);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Boolean op_Equality(UnityEngine.Vector3, UnityEngine.Vector3) declare in UnityEngine.Vector3
bool w_bS_r4r4r4_S_r4r4r4_(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_bS_r4r4r4_S_r4r4r4_");
    AutoValueScope value_scope(apis, env);
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp1 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!DataTransfer::IsAssignable(apis, env, _sv0, TIp0, true))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, true))
            return false;        
    }
     // LuaValToCSVal struct
    S_r4r4r4_* pp0 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, _sv0);
    S_r4r4r4_ p0 = pp0 ? *pp0 : S_r4r4r4_ {};
             // LuaValToCSVal struct
    S_r4r4r4_* pp1 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, _sv1);
    S_r4r4r4_ p1 = pp1 ? *pp1 : S_r4r4r4_ {};
        
    typedef bool (*FuncToCall)(struct S_r4r4r4_ p1, struct S_r4r4r4_ p2, const void* method);
    bool ret = ((FuncToCall)methodPointer)( p0, p1,  method);
	int r = converter::Converter<bool>::toScript(apis, env, ret);
	apis->add_return(info, r);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Boolean Equals(System.Object) declare in UnityEngine.Vector3
bool w_btO(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_btO");
    AutoValueScope value_scope(apis, env);
    auto TIp0 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    if (checkLuaArgument) {
        if (lua_args_len != 1) 
            return false;

    }
    
    // LuaValToCSVal o/O
    Il2CppObject* p0 = LuaValueToCSRef(apis, TIp0, env, _sv0);
        
    typedef bool (*FuncToCall)(void*,Il2CppObject* p1, const void* method);
    bool ret = ((FuncToCall)methodPointer)(self, p0,  method);
	int r = converter::Converter<bool>::toScript(apis, env, ret);
	apis->add_return(info, r);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Boolean Equals(UnityEngine.Vector3) declare in UnityEngine.Vector3
bool w_btS_r4r4r4_(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_btS_r4r4r4_");
    AutoValueScope value_scope(apis, env);
    auto TIp0 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    if (checkLuaArgument) {
        if (lua_args_len != 1) 
            return false;

        if (!DataTransfer::IsAssignable(apis, env, _sv0, TIp0, true))
            return false;        
    }
     // LuaValToCSVal struct
    S_r4r4r4_* pp0 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, _sv0);
    S_r4r4r4_ p0 = pp0 ? *pp0 : S_r4r4r4_ {};
        
    typedef bool (*FuncToCall)(void*,struct S_r4r4r4_ p1, const void* method);
    bool ret = ((FuncToCall)methodPointer)(self, p0,  method);
	int r = converter::Converter<bool>::toScript(apis, env, ret);
	apis->add_return(info, r);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Char get_spu1() declare in ClassLuaCallCS
bool w_c(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_c");
    AutoValueScope value_scope(apis, env);

    int lua_args_len = apis->get_args_len(info);

    if (checkLuaArgument) {
        if (lua_args_len != 0) 
            return false;

    }

    typedef Il2CppChar (*FuncToCall)(const void* method);
    Il2CppChar ret = ((FuncToCall)methodPointer)(  method);
	int r = converter::Converter<Il2CppChar>::toScript(apis, env, ret);
	apis->add_return(info, r);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Char get_pu1() declare in ClassLuaCallCS
bool w_ct(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_ct");
    AutoValueScope value_scope(apis, env);

    int lua_args_len = apis->get_args_len(info);

    if (checkLuaArgument) {
        if (lua_args_len != 0) 
            return false;

    }

    typedef Il2CppChar (*FuncToCall)(void*,const void* method);
    Il2CppChar ret = ((FuncToCall)methodPointer)(self,  method);
	int r = converter::Converter<Il2CppChar>::toScript(apis, env, ret);
	apis->add_return(info, r);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Int32 GetHashCode() declare in UnityEngine.Vector3
bool w_i4t(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_i4t");
    AutoValueScope value_scope(apis, env);

    int lua_args_len = apis->get_args_len(info);

    if (checkLuaArgument) {
        if (lua_args_len != 0) 
            return false;

    }

    typedef int32_t (*FuncToCall)(void*,const void* method);
    int32_t ret = ((FuncToCall)methodPointer)(self,  method);
	int r = converter::Converter<int32_t>::toScript(apis, env, ret);
	apis->add_return(info, r);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Int32 funcBaseParam(Int32) declare in ClassLuaCallCS
bool w_i4ti4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_i4ti4");
    AutoValueScope value_scope(apis, env);

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    if (checkLuaArgument) {
        if (lua_args_len != 1) 
            return false;

        if (!converter::Converter<int32_t>::accept(apis, env, _sv0))
            return false;        
    }
        
    // LuaValToCSVal P any
    int32_t p0 = converter::Converter<int32_t>::toCpp(apis, env, _sv0);
        
    typedef int32_t (*FuncToCall)(void*,int32_t p1, const void* method);
    int32_t ret = ((FuncToCall)methodPointer)(self, p0,  method);
	int r = converter::Converter<int32_t>::toScript(apis, env, ret);
	apis->add_return(info, r);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Single Magnitude(UnityEngine.Vector3) declare in UnityEngine.Vector3
bool w_r4S_r4r4r4_(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_r4S_r4r4r4_");
    AutoValueScope value_scope(apis, env);
    auto TIp0 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    if (checkLuaArgument) {
        if (lua_args_len != 1) 
            return false;

        if (!DataTransfer::IsAssignable(apis, env, _sv0, TIp0, true))
            return false;        
    }
     // LuaValToCSVal struct
    S_r4r4r4_* pp0 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, _sv0);
    S_r4r4r4_ p0 = pp0 ? *pp0 : S_r4r4r4_ {};
        
    typedef float (*FuncToCall)(struct S_r4r4r4_ p1, const void* method);
    float ret = ((FuncToCall)methodPointer)( p0,  method);
	int r = converter::Converter<float>::toScript(apis, env, ret);
	apis->add_return(info, r);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Single Dot(UnityEngine.Vector3, UnityEngine.Vector3) declare in UnityEngine.Vector3
bool w_r4S_r4r4r4_S_r4r4r4_(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_r4S_r4r4r4_S_r4r4r4_");
    AutoValueScope value_scope(apis, env);
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp1 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!DataTransfer::IsAssignable(apis, env, _sv0, TIp0, true))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, true))
            return false;        
    }
     // LuaValToCSVal struct
    S_r4r4r4_* pp0 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, _sv0);
    S_r4r4r4_ p0 = pp0 ? *pp0 : S_r4r4r4_ {};
             // LuaValToCSVal struct
    S_r4r4r4_* pp1 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, _sv1);
    S_r4r4r4_ p1 = pp1 ? *pp1 : S_r4r4r4_ {};
        
    typedef float (*FuncToCall)(struct S_r4r4r4_ p1, struct S_r4r4r4_ p2, const void* method);
    float ret = ((FuncToCall)methodPointer)( p0, p1,  method);
	int r = converter::Converter<float>::toScript(apis, env, ret);
	apis->add_return(info, r);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Single SignedAngle(UnityEngine.Vector3, UnityEngine.Vector3, UnityEngine.Vector3) declare in UnityEngine.Vector3
bool w_r4S_r4r4r4_S_r4r4r4_S_r4r4r4_(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_r4S_r4r4r4_S_r4r4r4_S_r4r4r4_");
    AutoValueScope value_scope(apis, env);
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp1 = wrapData->TypeInfos[1];
    auto TIp2 = wrapData->TypeInfos[2];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!DataTransfer::IsAssignable(apis, env, _sv0, TIp0, true))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, true))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv2, TIp2, true))
            return false;        
    }
     // LuaValToCSVal struct
    S_r4r4r4_* pp0 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, _sv0);
    S_r4r4r4_ p0 = pp0 ? *pp0 : S_r4r4r4_ {};
             // LuaValToCSVal struct
    S_r4r4r4_* pp1 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, _sv1);
    S_r4r4r4_ p1 = pp1 ? *pp1 : S_r4r4r4_ {};
             // LuaValToCSVal struct
    S_r4r4r4_* pp2 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, _sv2);
    S_r4r4r4_ p2 = pp2 ? *pp2 : S_r4r4r4_ {};
        
    typedef float (*FuncToCall)(struct S_r4r4r4_ p1, struct S_r4r4r4_ p2, struct S_r4r4r4_ p3, const void* method);
    float ret = ((FuncToCall)methodPointer)( p0, p1, p2,  method);
	int r = converter::Converter<float>::toScript(apis, env, ret);
	apis->add_return(info, r);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Single sFuncBaseParam(Single) declare in ClassLuaCallCS
bool w_r4r4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_r4r4");
    AutoValueScope value_scope(apis, env);

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    if (checkLuaArgument) {
        if (lua_args_len != 1) 
            return false;

        if (!converter::Converter<float>::accept(apis, env, _sv0))
            return false;        
    }
        
    // LuaValToCSVal P any
    float p0 = converter::Converter<float>::toCpp(apis, env, _sv0);
        
    typedef float (*FuncToCall)(float p1, const void* method);
    float ret = ((FuncToCall)methodPointer)( p0,  method);
	int r = converter::Converter<float>::toScript(apis, env, ret);
	apis->add_return(info, r);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Single get_magnitude() declare in UnityEngine.Vector3
bool w_r4t(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_r4t");
    AutoValueScope value_scope(apis, env);

    int lua_args_len = apis->get_args_len(info);

    if (checkLuaArgument) {
        if (lua_args_len != 0) 
            return false;

    }

    typedef float (*FuncToCall)(void*,const void* method);
    float ret = ((FuncToCall)methodPointer)(self,  method);
	int r = converter::Converter<float>::toScript(apis, env, ret);
	apis->add_return(info, r);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Single get_Item(Int32) declare in UnityEngine.Vector3
bool w_r4ti4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_r4ti4");
    AutoValueScope value_scope(apis, env);

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    if (checkLuaArgument) {
        if (lua_args_len != 1) 
            return false;

        if (!converter::Converter<int32_t>::accept(apis, env, _sv0))
            return false;        
    }
        
    // LuaValToCSVal P any
    int32_t p0 = converter::Converter<int32_t>::toCpp(apis, env, _sv0);
        
    typedef float (*FuncToCall)(void*,int32_t p1, const void* method);
    float ret = ((FuncToCall)methodPointer)(self, p0,  method);
	int r = converter::Converter<float>::toScript(apis, env, ret);
	apis->add_return(info, r);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// System.String ToString() declare in UnityEngine.Vector3
bool w_st(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_st");
    AutoValueScope value_scope(apis, env);
    auto TIret = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);

    if (checkLuaArgument) {
        if (lua_args_len != 0) 
            return false;

    }

    typedef Il2CppString* (*FuncToCall)(void*,const void* method);
    Il2CppString* ret = ((FuncToCall)methodPointer)(self,  method);
	int r = converter::Converter<Il2CppString*>::toScript(apis, env, ret);
	apis->add_return(info, r);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// System.String ToString(System.String) declare in UnityEngine.Vector3
bool w_sts(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_sts");
    AutoValueScope value_scope(apis, env);
    auto TIret = wrapData->TypeInfos[0];
    auto TIp0 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    if (checkLuaArgument) {
        if (lua_args_len != 1) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);
    typedef Il2CppString* (*FuncToCall)(void*,Il2CppString* p1, const void* method);
    Il2CppString* ret = ((FuncToCall)methodPointer)(self, p0,  method);
	int r = converter::Converter<Il2CppString*>::toScript(apis, env, ret);
	apis->add_return(info, r);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// System.String ToString(System.String, System.IFormatProvider) declare in UnityEngine.Vector3
bool w_stso(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_stso");
    AutoValueScope value_scope(apis, env);
    auto TIret = wrapData->TypeInfos[0];
    auto TIp0 = wrapData->TypeInfos[1];
    auto TIp1 = wrapData->TypeInfos[2];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, false))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);    
    // LuaValToCSVal o/O
    Il2CppObject* p1 = LuaValueToCSRef(apis, TIp1, env, _sv1);
        
    typedef Il2CppString* (*FuncToCall)(void*,Il2CppString* p1, Il2CppObject* p2, const void* method);
    Il2CppString* ret = ((FuncToCall)methodPointer)(self, p0, p1,  method);
	int r = converter::Converter<Il2CppString*>::toScript(apis, env, ret);
	apis->add_return(info, r);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// UInt16 get_spu2() declare in ClassLuaCallCS
bool w_u2(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_u2");
    AutoValueScope value_scope(apis, env);

    int lua_args_len = apis->get_args_len(info);

    if (checkLuaArgument) {
        if (lua_args_len != 0) 
            return false;

    }

    typedef uint16_t (*FuncToCall)(const void* method);
    uint16_t ret = ((FuncToCall)methodPointer)(  method);
	int r = converter::Converter<uint16_t>::toScript(apis, env, ret);
	apis->add_return(info, r);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// UInt16 get_pu2() declare in ClassLuaCallCS
bool w_u2t(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_u2t");
    AutoValueScope value_scope(apis, env);

    int lua_args_len = apis->get_args_len(info);

    if (checkLuaArgument) {
        if (lua_args_len != 0) 
            return false;

    }

    typedef uint16_t (*FuncToCall)(void*,const void* method);
    uint16_t ret = ((FuncToCall)methodPointer)(self,  method);
	int r = converter::Converter<uint16_t>::toScript(apis, env, ret);
	apis->add_return(info, r);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Void OrthoNormalize(UnityEngine.Vector3 ByRef, UnityEngine.Vector3 ByRef) declare in UnityEngine.Vector3
bool w_vPS_r4r4r4_PS_r4r4r4_(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vPS_r4r4r4_PS_r4r4r4_");
    AutoValueScope value_scope(apis, env);
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp1 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!apis->is_object(env, _sv0)) return false;
        if (!apis->is_object(env, _sv1)) return false;        
    }
     
    // LuaValToCSVal Pstruct
    S_r4r4r4_* p0 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, apis->unboxing(env, _sv0)); // valuetype ref
    S_r4r4r4_ up0;
    if (!p0) {
        memset(&up0, 0, sizeof(p0));
        p0 = &up0;
    }
             
    // LuaValToCSVal Pstruct
    S_r4r4r4_* p1 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, apis->unboxing(env, _sv1)); // valuetype ref
    S_r4r4r4_ up1;
    if (!p1) {
        memset(&up1, 0, sizeof(p1));
        p1 = &up1;
    }
        
    typedef void (*FuncToCall)(struct S_r4r4r4_* p1, struct S_r4r4r4_* p2, const void* method);
    ((FuncToCall)methodPointer)( p0, p1,  method);                
    int ret0;
    if (p0 == &up0)
    {
        ret0 = DataTransfer::CopyValueType(apis, env, *p0, TIp0);    
        apis->update_boxed_value(env, _sv0, ret0);
    }
    else
    {
        ret0 = apis->native_object_to_value(env, TIp0, p0, false);
    }
                
    int ret1;
    if (p1 == &up1)
    {
        ret1 = DataTransfer::CopyValueType(apis, env, *p1, TIp1);    
        apis->update_boxed_value(env, _sv1, ret1);
    }
    else
    {
        ret1 = apis->native_object_to_value(env, TIp1, p1, false);
    }

	apis->add_return(info, ret0);
	apis->add_return(info, ret1);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Void OrthoNormalize(UnityEngine.Vector3 ByRef, UnityEngine.Vector3 ByRef, UnityEngine.Vector3 ByRef) declare in UnityEngine.Vector3
bool w_vPS_r4r4r4_PS_r4r4r4_PS_r4r4r4_(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vPS_r4r4r4_PS_r4r4r4_PS_r4r4r4_");
    AutoValueScope value_scope(apis, env);
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp1 = wrapData->TypeInfos[1];
    auto TIp2 = wrapData->TypeInfos[2];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!apis->is_object(env, _sv0)) return false;
        if (!apis->is_object(env, _sv1)) return false;
        if (!apis->is_object(env, _sv2)) return false;        
    }
     
    // LuaValToCSVal Pstruct
    S_r4r4r4_* p0 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, apis->unboxing(env, _sv0)); // valuetype ref
    S_r4r4r4_ up0;
    if (!p0) {
        memset(&up0, 0, sizeof(p0));
        p0 = &up0;
    }
             
    // LuaValToCSVal Pstruct
    S_r4r4r4_* p1 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, apis->unboxing(env, _sv1)); // valuetype ref
    S_r4r4r4_ up1;
    if (!p1) {
        memset(&up1, 0, sizeof(p1));
        p1 = &up1;
    }
             
    // LuaValToCSVal Pstruct
    S_r4r4r4_* p2 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, apis->unboxing(env, _sv2)); // valuetype ref
    S_r4r4r4_ up2;
    if (!p2) {
        memset(&up2, 0, sizeof(p2));
        p2 = &up2;
    }
        
    typedef void (*FuncToCall)(struct S_r4r4r4_* p1, struct S_r4r4r4_* p2, struct S_r4r4r4_* p3, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2,  method);                
    int ret0;
    if (p0 == &up0)
    {
        ret0 = DataTransfer::CopyValueType(apis, env, *p0, TIp0);    
        apis->update_boxed_value(env, _sv0, ret0);
    }
    else
    {
        ret0 = apis->native_object_to_value(env, TIp0, p0, false);
    }
                
    int ret1;
    if (p1 == &up1)
    {
        ret1 = DataTransfer::CopyValueType(apis, env, *p1, TIp1);    
        apis->update_boxed_value(env, _sv1, ret1);
    }
    else
    {
        ret1 = apis->native_object_to_value(env, TIp1, p1, false);
    }
                
    int ret2;
    if (p2 == &up2)
    {
        ret2 = DataTransfer::CopyValueType(apis, env, *p2, TIp2);    
        apis->update_boxed_value(env, _sv2, ret2);
    }
    else
    {
        ret2 = apis->native_object_to_value(env, TIp2, p2, false);
    }

	apis->add_return(info, ret0);
	apis->add_return(info, ret1);
	apis->add_return(info, ret2);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Void sFuncInParam(Int32 ByRef) declare in ClassLuaCallCS
bool w_vPi4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vPi4");
    AutoValueScope value_scope(apis, env);

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    if (checkLuaArgument) {
        if (lua_args_len != 1) 
            return false;

        if (!apis->is_object(env, _sv0)) return false;        
    }
     
    // LuaValToCSVal P primitive
    int32_t up0 = 0;
    if (0 < lua_args_len)
        up0 = converter::Converter<std::reference_wrapper<int32_t>>::toCpp(apis, env, _sv0);
    int32_t* p0 = &up0;

    typedef void (*FuncToCall)(int32_t* p1, const void* method);
    ((FuncToCall)methodPointer)( p0,  method);
	int ret0 = converter::Converter<int32_t>::toScript(apis, env, *p0);
	apis->add_return(info, ret0);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Void sFuncInOutParam(Int32 ByRef, Int32 ByRef) declare in ClassLuaCallCS
bool w_vPi4Pi4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vPi4Pi4");
    AutoValueScope value_scope(apis, env);

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!apis->is_object(env, _sv0)) return false;
        if (!apis->is_object(env, _sv1)) return false;        
    }
     
    // LuaValToCSVal P primitive
    int32_t up0 = 0;
    if (0 < lua_args_len)
        up0 = converter::Converter<std::reference_wrapper<int32_t>>::toCpp(apis, env, _sv0);
    int32_t* p0 = &up0;
     
    // LuaValToCSVal P primitive
    int32_t up1 = 0;
    if (1 < lua_args_len)
        up1 = converter::Converter<std::reference_wrapper<int32_t>>::toCpp(apis, env, _sv1);
    int32_t* p1 = &up1;

    typedef void (*FuncToCall)(int32_t* p1, int32_t* p2, const void* method);
    ((FuncToCall)methodPointer)( p0, p1,  method);
	int ret0 = converter::Converter<int32_t>::toScript(apis, env, *p0);
	int ret1 = converter::Converter<int32_t>::toScript(apis, env, *p1);
	apis->add_return(info, ret0);
	apis->add_return(info, ret1);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Void sFuncStructParam(ParaStruct) declare in ClassLuaCallCS
bool w_vS__(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vS__");
    AutoValueScope value_scope(apis, env);
    auto TIp0 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    if (checkLuaArgument) {
        if (lua_args_len != 1) 
            return false;

        if (!DataTransfer::IsAssignable(apis, env, _sv0, TIp0, true))
            return false;        
    }
     // LuaValToCSVal struct
    S__* pp0 = DataTransfer::GetPointer<S__>(apis, env, _sv0);
    S__ p0 = pp0 ? *pp0 : S__ {};
        
    typedef void (*FuncToCall)(struct S__ p1, const void* method);
    ((FuncToCall)methodPointer)( p0,  method);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Void sFuncVec3Param(UnityEngine.Vector3) declare in ClassLuaCallCS
bool w_vS_r4r4r4_(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vS_r4r4r4_");
    AutoValueScope value_scope(apis, env);
    auto TIp0 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    if (checkLuaArgument) {
        if (lua_args_len != 1) 
            return false;

        if (!DataTransfer::IsAssignable(apis, env, _sv0, TIp0, true))
            return false;        
    }
     // LuaValToCSVal struct
    S_r4r4r4_* pp0 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, _sv0);
    S_r4r4r4_ p0 = pp0 ? *pp0 : S_r4r4r4_ {};
        
    typedef void (*FuncToCall)(struct S_r4r4r4_ p1, const void* method);
    ((FuncToCall)methodPointer)( p0,  method);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Void set_spu1(Char) declare in ClassLuaCallCS
bool w_vc(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vc");
    AutoValueScope value_scope(apis, env);

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    if (checkLuaArgument) {
        if (lua_args_len != 1) 
            return false;

        if (!converter::Converter<Il2CppChar>::accept(apis, env, _sv0))
            return false;        
    }
        
    // LuaValToCSVal P any
    Il2CppChar p0 = converter::Converter<Il2CppChar>::toCpp(apis, env, _sv0);
        
    typedef void (*FuncToCall)(Il2CppChar p1, const void* method);
    ((FuncToCall)methodPointer)( p0,  method);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Void sFuncTwoParam(Int32, Int32) declare in ClassLuaCallCS
bool w_vi4i4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vi4i4");
    AutoValueScope value_scope(apis, env);

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<int32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv1))
            return false;        
    }
        
    // LuaValToCSVal P any
    int32_t p0 = converter::Converter<int32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    int32_t p1 = converter::Converter<int32_t>::toCpp(apis, env, _sv1);
        
    typedef void (*FuncToCall)(int32_t p1, int32_t p2, const void* method);
    ((FuncToCall)methodPointer)( p0, p1,  method);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Void sFuncClassParam(ParaClass) declare in ClassLuaCallCS
bool w_vo(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vo");
    AutoValueScope value_scope(apis, env);
    auto TIp0 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    if (checkLuaArgument) {
        if (lua_args_len != 1) 
            return false;

        if (!DataTransfer::IsAssignable(apis, env, _sv0, TIp0, false))
            return false;        
    }
    
    // LuaValToCSVal o/O
    Il2CppObject* p0 = LuaValueToCSRef(apis, TIp0, env, _sv0);
        
    typedef void (*FuncToCall)(Il2CppObject* p1, const void* method);
    ((FuncToCall)methodPointer)( p0,  method);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Void InvokeBaseParaCB() declare in ClassLuaCallCS
bool w_vt(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vt");
    AutoValueScope value_scope(apis, env);

    int lua_args_len = apis->get_args_len(info);

    if (checkLuaArgument) {
        if (lua_args_len != 0) 
            return false;

    }

    typedef void (*FuncToCall)(void*,const void* method);
    ((FuncToCall)methodPointer)(self,  method);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Void funcInParam(Int32 ByRef) declare in ClassLuaCallCS
bool w_vtPi4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtPi4");
    AutoValueScope value_scope(apis, env);

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    if (checkLuaArgument) {
        if (lua_args_len != 1) 
            return false;

        if (!apis->is_object(env, _sv0)) return false;        
    }
     
    // LuaValToCSVal P primitive
    int32_t up0 = 0;
    if (0 < lua_args_len)
        up0 = converter::Converter<std::reference_wrapper<int32_t>>::toCpp(apis, env, _sv0);
    int32_t* p0 = &up0;

    typedef void (*FuncToCall)(void*,int32_t* p1, const void* method);
    ((FuncToCall)methodPointer)(self, p0,  method);
	int ret0 = converter::Converter<int32_t>::toScript(apis, env, *p0);
	apis->add_return(info, ret0);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Void funcInOutParam(Int32 ByRef, Int32 ByRef) declare in ClassLuaCallCS
bool w_vtPi4Pi4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtPi4Pi4");
    AutoValueScope value_scope(apis, env);

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!apis->is_object(env, _sv0)) return false;
        if (!apis->is_object(env, _sv1)) return false;        
    }
     
    // LuaValToCSVal P primitive
    int32_t up0 = 0;
    if (0 < lua_args_len)
        up0 = converter::Converter<std::reference_wrapper<int32_t>>::toCpp(apis, env, _sv0);
    int32_t* p0 = &up0;
     
    // LuaValToCSVal P primitive
    int32_t up1 = 0;
    if (1 < lua_args_len)
        up1 = converter::Converter<std::reference_wrapper<int32_t>>::toCpp(apis, env, _sv1);
    int32_t* p1 = &up1;

    typedef void (*FuncToCall)(void*,int32_t* p1, int32_t* p2, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1,  method);
	int ret0 = converter::Converter<int32_t>::toScript(apis, env, *p0);
	int ret1 = converter::Converter<int32_t>::toScript(apis, env, *p1);
	apis->add_return(info, ret0);
	apis->add_return(info, ret1);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Void funcStructParam(ParaStruct) declare in ClassLuaCallCS
bool w_vtS__(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtS__");
    AutoValueScope value_scope(apis, env);
    auto TIp0 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    if (checkLuaArgument) {
        if (lua_args_len != 1) 
            return false;

        if (!DataTransfer::IsAssignable(apis, env, _sv0, TIp0, true))
            return false;        
    }
     // LuaValToCSVal struct
    S__* pp0 = DataTransfer::GetPointer<S__>(apis, env, _sv0);
    S__ p0 = pp0 ? *pp0 : S__ {};
        
    typedef void (*FuncToCall)(void*,struct S__ p1, const void* method);
    ((FuncToCall)methodPointer)(self, p0,  method);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Void funcVec3Param(UnityEngine.Vector3) declare in ClassLuaCallCS
bool w_vtS_r4r4r4_(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtS_r4r4r4_");
    AutoValueScope value_scope(apis, env);
    auto TIp0 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    if (checkLuaArgument) {
        if (lua_args_len != 1) 
            return false;

        if (!DataTransfer::IsAssignable(apis, env, _sv0, TIp0, true))
            return false;        
    }
     // LuaValToCSVal struct
    S_r4r4r4_* pp0 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, _sv0);
    S_r4r4r4_ p0 = pp0 ? *pp0 : S_r4r4r4_ {};
        
    typedef void (*FuncToCall)(void*,struct S_r4r4r4_ p1, const void* method);
    ((FuncToCall)methodPointer)(self, p0,  method);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Void set_pu1(Char) declare in ClassLuaCallCS
bool w_vtc(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtc");
    AutoValueScope value_scope(apis, env);

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    if (checkLuaArgument) {
        if (lua_args_len != 1) 
            return false;

        if (!converter::Converter<Il2CppChar>::accept(apis, env, _sv0))
            return false;        
    }
        
    // LuaValToCSVal P any
    Il2CppChar p0 = converter::Converter<Il2CppChar>::toCpp(apis, env, _sv0);
        
    typedef void (*FuncToCall)(void*,Il2CppChar p1, const void* method);
    ((FuncToCall)methodPointer)(self, p0,  method);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Void funcTwoParam(Int32, Int32) declare in ClassLuaCallCS
bool w_vti4i4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vti4i4");
    AutoValueScope value_scope(apis, env);

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<int32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv1))
            return false;        
    }
        
    // LuaValToCSVal P any
    int32_t p0 = converter::Converter<int32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    int32_t p1 = converter::Converter<int32_t>::toCpp(apis, env, _sv1);
        
    typedef void (*FuncToCall)(void*,int32_t p1, int32_t p2, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1,  method);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Void funcClassParam(LuaEnum, ParaClass) declare in ClassLuaCallCS
bool w_vti4o(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vti4o");
    AutoValueScope value_scope(apis, env);
    auto TIp1 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<int32_t>::accept(apis, env, _sv0))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, false))
            return false;        
    }
        
    // LuaValToCSVal P any
    int32_t p0 = converter::Converter<int32_t>::toCpp(apis, env, _sv0);
            
    // LuaValToCSVal o/O
    Il2CppObject* p1 = LuaValueToCSRef(apis, TIp1, env, _sv1);
        
    typedef void (*FuncToCall)(void*,int32_t p1, Il2CppObject* p2, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1,  method);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Void set_Item(Int32, Single) declare in UnityEngine.Vector3
bool w_vti4r4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vti4r4");
    AutoValueScope value_scope(apis, env);

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<int32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv1))
            return false;        
    }
        
    // LuaValToCSVal P any
    int32_t p0 = converter::Converter<int32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    float p1 = converter::Converter<float>::toCpp(apis, env, _sv1);
        
    typedef void (*FuncToCall)(void*,int32_t p1, float p2, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1,  method);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Void add_BaseParaEvent(BaseParaEventHandler) declare in ClassLuaCallCS
bool w_vto(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vto");
    AutoValueScope value_scope(apis, env);
    auto TIp0 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    if (checkLuaArgument) {
        if (lua_args_len != 1) 
            return false;

        if (!DataTransfer::IsAssignable(apis, env, _sv0, TIp0, false))
            return false;        
    }
    
    // LuaValToCSVal o/O
    Il2CppObject* p0 = LuaValueToCSRef(apis, TIp0, env, _sv0);
        
    typedef void (*FuncToCall)(void*,Il2CppObject* p1, const void* method);
    ((FuncToCall)methodPointer)(self, p0,  method);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Void .ctor(Single, Single) declare in UnityEngine.Vector3
bool w_vtr4r4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtr4r4");
    AutoValueScope value_scope(apis, env);

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<float>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv1))
            return false;        
    }
        
    // LuaValToCSVal P any
    float p0 = converter::Converter<float>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    float p1 = converter::Converter<float>::toCpp(apis, env, _sv1);
        
    typedef void (*FuncToCall)(void*,float p1, float p2, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1,  method);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Void Set(Single, Single, Single) declare in UnityEngine.Vector3
bool w_vtr4r4r4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtr4r4r4");
    AutoValueScope value_scope(apis, env);

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!converter::Converter<float>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv2))
            return false;        
    }
        
    // LuaValToCSVal P any
    float p0 = converter::Converter<float>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    float p1 = converter::Converter<float>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    float p2 = converter::Converter<float>::toCpp(apis, env, _sv2);
        
    typedef void (*FuncToCall)(void*,float p1, float p2, float p3, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2,  method);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Void set_pu2(UInt16) declare in ClassLuaCallCS
bool w_vtu2(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtu2");
    AutoValueScope value_scope(apis, env);

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    if (checkLuaArgument) {
        if (lua_args_len != 1) 
            return false;

        if (!converter::Converter<uint16_t>::accept(apis, env, _sv0))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint16_t p0 = converter::Converter<uint16_t>::toCpp(apis, env, _sv0);
        
    typedef void (*FuncToCall)(void*,uint16_t p1, const void* method);
    ((FuncToCall)methodPointer)(self, p0,  method);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Void set_spu2(UInt16) declare in ClassLuaCallCS
bool w_vu2(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu2");
    AutoValueScope value_scope(apis, env);

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    if (checkLuaArgument) {
        if (lua_args_len != 1) 
            return false;

        if (!converter::Converter<uint16_t>::accept(apis, env, _sv0))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint16_t p0 = converter::Converter<uint16_t>::toCpp(apis, env, _sv0);
        
    typedef void (*FuncToCall)(uint16_t p1, const void* method);
    ((FuncToCall)methodPointer)( p0,  method);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
}

