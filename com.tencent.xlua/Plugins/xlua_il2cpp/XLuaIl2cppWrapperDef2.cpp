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

// Void Init(UnityEngine.RectTransform, UnityEngine.UI.ScrollRect, UnityEngine.RectTransform) declare in TipsHeightChecker
bool w_vtooo(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtooo");
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

        if (!DataTransfer::IsAssignable(apis, env, _sv0, TIp0, false))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, false))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv2, TIp2, false))
            return false;        
    }
    
    // LuaValToCSVal o/O
    Il2CppObject* p0 = LuaValueToCSRef(apis, TIp0, env, _sv0);
            
    // LuaValToCSVal o/O
    Il2CppObject* p1 = LuaValueToCSRef(apis, TIp1, env, _sv1);
            
    // LuaValToCSVal o/O
    Il2CppObject* p2 = LuaValueToCSRef(apis, TIp2, env, _sv2);
        
    typedef void (*FuncToCall)(void*,Il2CppObject* p1, Il2CppObject* p2, Il2CppObject* p3, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2,  method);
    return true;
}
// Void Init(Single[], onSelectChg, onSelectChg, onSelectChg, onSelectChg, Int32[]) declare in UIWidgets.CMMenu
bool w_vtoooDoDoDo(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtoooDoDoDo");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp1 = wrapData->TypeInfos[1];
    auto TIp2 = wrapData->TypeInfos[2];
    auto TIp3 = wrapData->TypeInfos[3];
    auto TIp4 = wrapData->TypeInfos[4];
    auto TIp5 = wrapData->TypeInfos[5];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    int _sv4 = apis->get_arg(info, 4);
    int _sv5 = apis->get_arg(info, 5);
    if (true) {
        if (lua_args_len < 3 || lua_args_len > 6) 
            return false;

        if (!DataTransfer::IsAssignable(apis, env, _sv0, TIp0, false))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, false))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv2, TIp2, false))
            return false;
        if (lua_args_len > 3 && !DataTransfer::IsAssignable(apis, env, _sv3, TIp3, false))
            return false;
        if (lua_args_len > 4 && !DataTransfer::IsAssignable(apis, env, _sv4, TIp4, false))
            return false;
        if (lua_args_len > 5 && !DataTransfer::IsAssignable(apis, env, _sv5, TIp5, false))
            return false;        
    }
    
    // LuaValToCSVal o/O
    Il2CppObject* p0 = LuaValueToCSRef(apis, TIp0, env, _sv0);
            
    // LuaValToCSVal o/O
    Il2CppObject* p1 = LuaValueToCSRef(apis, TIp1, env, _sv1);
            
    // LuaValToCSVal o/O
    Il2CppObject* p2 = LuaValueToCSRef(apis, TIp2, env, _sv2);
            // LuaValToCSVal ref with default
    Il2CppObject* p3 = OptionalParameter<Il2CppObject*>::GetRefType(apis, env, info, method, wrapData, lua_args_len, 3, TIp3);    // LuaValToCSVal ref with default
    Il2CppObject* p4 = OptionalParameter<Il2CppObject*>::GetRefType(apis, env, info, method, wrapData, lua_args_len, 4, TIp4);    // LuaValToCSVal ref with default
    Il2CppObject* p5 = OptionalParameter<Il2CppObject*>::GetRefType(apis, env, info, method, wrapData, lua_args_len, 5, TIp5);
    typedef void (*FuncToCall)(void*,Il2CppObject* p1, Il2CppObject* p2, Il2CppObject* p3, Il2CppObject* p4, Il2CppObject* p5, Il2CppObject* p6, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3, p4, p5,  method);
    return true;
}
// Void PopRectTransform(UnityEngine.RectTransform, UnityEngine.RectTransform, UnityEngine.RectTransform, UnityEngine.RectTransform, Single, Boolean) declare in ExtRectTransform
bool w_vtoooDr4Db(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtoooDr4Db");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp1 = wrapData->TypeInfos[1];
    auto TIp2 = wrapData->TypeInfos[2];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    int _sv4 = apis->get_arg(info, 4);
    if (true) {
        if (lua_args_len < 3 || lua_args_len > 5) 
            return false;

        if (!DataTransfer::IsAssignable(apis, env, _sv0, TIp0, false))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, false))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv2, TIp2, false))
            return false;
        if (lua_args_len > 3 && !converter::Converter<float>::accept(apis, env, _sv3))
            return false;
        if (lua_args_len > 4 && !converter::Converter<bool>::accept(apis, env, _sv4))
            return false;        
    }
    
    // LuaValToCSVal o/O
    Il2CppObject* p0 = LuaValueToCSRef(apis, TIp0, env, _sv0);
            
    // LuaValToCSVal o/O
    Il2CppObject* p1 = LuaValueToCSRef(apis, TIp1, env, _sv1);
            
    // LuaValToCSVal o/O
    Il2CppObject* p2 = LuaValueToCSRef(apis, TIp2, env, _sv2);
         // LuaValToCSVal primitive with default
    float p3 = OptionalParameter<float>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 3);
             // LuaValToCSVal primitive with default
    bool p4 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 4);
            
    typedef void (*FuncToCall)(void*,Il2CppObject* p1, Il2CppObject* p2, Il2CppObject* p3, float p4, bool p5, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3, p4,  method);
    return true;
}
// Void AddPrefab(UIPrefab2D, UIPrefab2D, UnityEngine.Transform, Boolean) declare in Assets.Scripts.Framework.UI.UIPrefabLayerService
bool w_vtooob(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtooob");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp1 = wrapData->TypeInfos[1];
    auto TIp2 = wrapData->TypeInfos[2];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    if (checkLuaArgument) {
        if (lua_args_len != 4) 
            return false;

        if (!DataTransfer::IsAssignable(apis, env, _sv0, TIp0, false))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, false))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv2, TIp2, false))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv3))
            return false;        
    }
    
    // LuaValToCSVal o/O
    Il2CppObject* p0 = LuaValueToCSRef(apis, TIp0, env, _sv0);
            
    // LuaValToCSVal o/O
    Il2CppObject* p1 = LuaValueToCSRef(apis, TIp1, env, _sv1);
            
    // LuaValToCSVal o/O
    Il2CppObject* p2 = LuaValueToCSRef(apis, TIp2, env, _sv2);
                
    // LuaValToCSVal P any
    bool p3 = converter::Converter<bool>::toCpp(apis, env, _sv3);
        
    typedef void (*FuncToCall)(void*,Il2CppObject* p1, Il2CppObject* p2, Il2CppObject* p3, bool p4, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3,  method);
    return true;
}
// Void OnLuaPrefabCreated(Assets.Scripts.Framework.AssetService.UIAsset, UnityEngine.GameObject, UnityEngine.RectTransform, UIPrefab2D) declare in Assets.Scripts.Framework.UI.UILuaPrefabClass
bool w_vtoooo(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtoooo");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp1 = wrapData->TypeInfos[1];
    auto TIp2 = wrapData->TypeInfos[2];
    auto TIp3 = wrapData->TypeInfos[3];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    if (checkLuaArgument) {
        if (lua_args_len != 4) 
            return false;

        if (!DataTransfer::IsAssignable(apis, env, _sv0, TIp0, false))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, false))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv2, TIp2, false))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv3, TIp3, false))
            return false;        
    }
    
    // LuaValToCSVal o/O
    Il2CppObject* p0 = LuaValueToCSRef(apis, TIp0, env, _sv0);
            
    // LuaValToCSVal o/O
    Il2CppObject* p1 = LuaValueToCSRef(apis, TIp1, env, _sv1);
            
    // LuaValToCSVal o/O
    Il2CppObject* p2 = LuaValueToCSRef(apis, TIp2, env, _sv2);
            
    // LuaValToCSVal o/O
    Il2CppObject* p3 = LuaValueToCSRef(apis, TIp3, env, _sv3);
        
    typedef void (*FuncToCall)(void*,Il2CppObject* p1, Il2CppObject* p2, Il2CppObject* p3, Il2CppObject* p4, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3,  method);
    return true;
}
// Void Initialize(DelegateCreateItem, System.Action`2[System.Int32,UnityEngine.RectTransform], System.Action`2[System.Int32,UnityEngine.RectTransform], System.Func`2[System.Int32,UnityEngine.Vector2], System.Func`1[System.String]) declare in Timi.TimiListView
bool w_vtooooo(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtooooo");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp1 = wrapData->TypeInfos[1];
    auto TIp2 = wrapData->TypeInfos[2];
    auto TIp3 = wrapData->TypeInfos[3];
    auto TIp4 = wrapData->TypeInfos[4];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    int _sv4 = apis->get_arg(info, 4);
    if (checkLuaArgument) {
        if (lua_args_len != 5) 
            return false;

        if (!DataTransfer::IsAssignable(apis, env, _sv0, TIp0, false))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, false))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv2, TIp2, false))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv3, TIp3, false))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv4, TIp4, false))
            return false;        
    }
    
    // LuaValToCSVal o/O
    Il2CppObject* p0 = LuaValueToCSRef(apis, TIp0, env, _sv0);
            
    // LuaValToCSVal o/O
    Il2CppObject* p1 = LuaValueToCSRef(apis, TIp1, env, _sv1);
            
    // LuaValToCSVal o/O
    Il2CppObject* p2 = LuaValueToCSRef(apis, TIp2, env, _sv2);
            
    // LuaValToCSVal o/O
    Il2CppObject* p3 = LuaValueToCSRef(apis, TIp3, env, _sv3);
            
    // LuaValToCSVal o/O
    Il2CppObject* p4 = LuaValueToCSRef(apis, TIp4, env, _sv4);
        
    typedef void (*FuncToCall)(void*,Il2CppObject* p1, Il2CppObject* p2, Il2CppObject* p3, Il2CppObject* p4, Il2CppObject* p5, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3, p4,  method);
    return true;
}
// Void Lerp(UnityEngine.Material, UnityEngine.Material, Single) declare in UnityEngine.Material
bool w_vtoor4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtoor4");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp1 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!DataTransfer::IsAssignable(apis, env, _sv0, TIp0, false))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, false))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv2))
            return false;        
    }
    
    // LuaValToCSVal o/O
    Il2CppObject* p0 = LuaValueToCSRef(apis, TIp0, env, _sv0);
            
    // LuaValToCSVal o/O
    Il2CppObject* p1 = LuaValueToCSRef(apis, TIp1, env, _sv1);
                
    // LuaValToCSVal P any
    float p2 = converter::Converter<float>::toCpp(apis, env, _sv2);
        
    typedef void (*FuncToCall)(void*,Il2CppObject* p1, Il2CppObject* p2, float p3, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2,  method);
    return true;
}
// Void RebuildSubDynamicItems(Timi.TimiMenuItem, System.Collections.Generic.List`1[Timi.TimiMenuOptionData], System.String, System.Action`1[Timi.TimiMenuItem]) declare in Timi.TimiMenuItem
bool w_vtooso(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtooso");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp1 = wrapData->TypeInfos[1];
    auto TIp2 = wrapData->TypeInfos[2];
    auto TIp3 = wrapData->TypeInfos[3];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    if (checkLuaArgument) {
        if (lua_args_len != 4) 
            return false;

        if (!DataTransfer::IsAssignable(apis, env, _sv0, TIp0, false))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, false))
            return false;
        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv2))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv3, TIp3, false))
            return false;        
    }
    
    // LuaValToCSVal o/O
    Il2CppObject* p0 = LuaValueToCSRef(apis, TIp0, env, _sv0);
            
    // LuaValToCSVal o/O
    Il2CppObject* p1 = LuaValueToCSRef(apis, TIp1, env, _sv1);
            // LuaValToCSVal s
    Il2CppString* p2 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv2);    
    // LuaValToCSVal o/O
    Il2CppObject* p3 = LuaValueToCSRef(apis, TIp3, env, _sv3);
        
    typedef void (*FuncToCall)(void*,Il2CppObject* p1, Il2CppObject* p2, Il2CppString* p3, Il2CppObject* p4, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3,  method);
    return true;
}
// Void SetEquipIconInfo(MultifunctionRawImage, MultifunctionImage, UInt32) declare in Assets.Scripts.GameSystem.Project8UINewbie
bool w_vtoou4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtoou4");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp1 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!DataTransfer::IsAssignable(apis, env, _sv0, TIp0, false))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, false))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv2))
            return false;        
    }
    
    // LuaValToCSVal o/O
    Il2CppObject* p0 = LuaValueToCSRef(apis, TIp0, env, _sv0);
            
    // LuaValToCSVal o/O
    Il2CppObject* p1 = LuaValueToCSRef(apis, TIp1, env, _sv1);
                
    // LuaValToCSVal P any
    uint32_t p2 = converter::Converter<uint32_t>::toCpp(apis, env, _sv2);
        
    typedef void (*FuncToCall)(void*,Il2CppObject* p1, Il2CppObject* p2, uint32_t p3, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2,  method);
    return true;
}
// Void SampleAnimation(UnityEngine.Object, Single) declare in UnityEngine.GameObject
bool w_vtor4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtor4");
    auto TIp0 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!DataTransfer::IsAssignable(apis, env, _sv0, TIp0, false))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv1))
            return false;        
    }
    
    // LuaValToCSVal o/O
    Il2CppObject* p0 = LuaValueToCSRef(apis, TIp0, env, _sv0);
                
    // LuaValToCSVal P any
    float p1 = converter::Converter<float>::toCpp(apis, env, _sv1);
        
    typedef void (*FuncToCall)(void*,Il2CppObject* p1, float p2, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1,  method);
    return true;
}
// Void BakeMesh(UnityEngine.Mesh, Single, UnityEngine.Vector2) declare in UnityEngine.UnitySkeletonGraphic
bool w_vtor4S_r4r4_(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtor4S_r4r4_");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp2 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!DataTransfer::IsAssignable(apis, env, _sv0, TIp0, false))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv1))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv2, TIp2, true))
            return false;        
    }
    
    // LuaValToCSVal o/O
    Il2CppObject* p0 = LuaValueToCSRef(apis, TIp0, env, _sv0);
                
    // LuaValToCSVal P any
    float p1 = converter::Converter<float>::toCpp(apis, env, _sv1);
             // LuaValToCSVal struct
    S_r4r4_* pp2 = DataTransfer::GetPointer<S_r4r4_>(apis, env, _sv2);
    S_r4r4_ p2 = pp2 ? *pp2 : S_r4r4_ {};
        
    typedef void (*FuncToCall)(void*,Il2CppObject* p1, float p2, struct S_r4r4_ p3, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2,  method);
    return true;
}
// Void AddTranslation(UnityEngine.Transform, Single, Int32, System.String, UnityEngine.AnimationCurve, UnityEngine.Vector3, UnityEngine.Vector3, Int32, System.String[], System.String) declare in CMTweener
bool w_vtor4i4soS_r4r4r4_S_r4r4r4_i4DoDs(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtor4i4soS_r4r4r4_S_r4r4r4_i4DoDs");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp3 = wrapData->TypeInfos[1];
    auto TIp4 = wrapData->TypeInfos[2];
    auto TIp5 = wrapData->TypeInfos[3];
    auto TIp6 = wrapData->TypeInfos[4];
    auto TIp8 = wrapData->TypeInfos[5];
    auto TIp9 = wrapData->TypeInfos[6];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    int _sv4 = apis->get_arg(info, 4);
    int _sv5 = apis->get_arg(info, 5);
    int _sv6 = apis->get_arg(info, 6);
    int _sv7 = apis->get_arg(info, 7);
    int _sv8 = apis->get_arg(info, 8);
    int _sv9 = apis->get_arg(info, 9);
    if (true) {
        if (lua_args_len < 8 || lua_args_len > 10) 
            return false;

        if (!DataTransfer::IsAssignable(apis, env, _sv0, TIp0, false))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv2))
            return false;
        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv3))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv4, TIp4, false))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv5, TIp5, true))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv6, TIp6, true))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv7))
            return false;
        if (lua_args_len > 8 && !DataTransfer::IsAssignable(apis, env, _sv8, TIp8, false))
            return false;
        if (lua_args_len > 9 && !converter::Converter<Il2CppString*>::accept(apis, env, _sv9))
            return false;        
    }
    
    // LuaValToCSVal o/O
    Il2CppObject* p0 = LuaValueToCSRef(apis, TIp0, env, _sv0);
                
    // LuaValToCSVal P any
    float p1 = converter::Converter<float>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    int32_t p2 = converter::Converter<int32_t>::toCpp(apis, env, _sv2);
            // LuaValToCSVal s
    Il2CppString* p3 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv3);    
    // LuaValToCSVal o/O
    Il2CppObject* p4 = LuaValueToCSRef(apis, TIp4, env, _sv4);
             // LuaValToCSVal struct
    S_r4r4r4_* pp5 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, _sv5);
    S_r4r4r4_ p5 = pp5 ? *pp5 : S_r4r4r4_ {};
             // LuaValToCSVal struct
    S_r4r4r4_* pp6 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, _sv6);
    S_r4r4r4_ p6 = pp6 ? *pp6 : S_r4r4r4_ {};
                
    // LuaValToCSVal P any
    int32_t p7 = converter::Converter<int32_t>::toCpp(apis, env, _sv7);
            // LuaValToCSVal ref with default
    Il2CppObject* p8 = OptionalParameter<Il2CppObject*>::GetRefType(apis, env, info, method, wrapData, lua_args_len, 8, TIp8);    // LuaValToCSVal string with default
    Il2CppString* p9 = OptionalParameter<Il2CppString*>::GetString(apis, env, info, method, wrapData, lua_args_len, 9);
    typedef void (*FuncToCall)(void*,Il2CppObject* p1, float p2, int32_t p3, Il2CppString* p4, Il2CppObject* p5, struct S_r4r4r4_ p6, struct S_r4r4r4_ p7, int32_t p8, Il2CppObject* p9, Il2CppString* p10, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9,  method);
    return true;
}
// Void AddMove(UnityEngine.Transform, Single, Int32, System.String, UnityEngine.AnimationCurve, UnityEngine.Vector3, Int32, System.String[], System.String) declare in CMTweener
bool w_vtor4i4soS_r4r4r4_i4DoDs(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtor4i4soS_r4r4r4_i4DoDs");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp3 = wrapData->TypeInfos[1];
    auto TIp4 = wrapData->TypeInfos[2];
    auto TIp5 = wrapData->TypeInfos[3];
    auto TIp7 = wrapData->TypeInfos[4];
    auto TIp8 = wrapData->TypeInfos[5];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    int _sv4 = apis->get_arg(info, 4);
    int _sv5 = apis->get_arg(info, 5);
    int _sv6 = apis->get_arg(info, 6);
    int _sv7 = apis->get_arg(info, 7);
    int _sv8 = apis->get_arg(info, 8);
    if (true) {
        if (lua_args_len < 7 || lua_args_len > 9) 
            return false;

        if (!DataTransfer::IsAssignable(apis, env, _sv0, TIp0, false))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv2))
            return false;
        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv3))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv4, TIp4, false))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv5, TIp5, true))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv6))
            return false;
        if (lua_args_len > 7 && !DataTransfer::IsAssignable(apis, env, _sv7, TIp7, false))
            return false;
        if (lua_args_len > 8 && !converter::Converter<Il2CppString*>::accept(apis, env, _sv8))
            return false;        
    }
    
    // LuaValToCSVal o/O
    Il2CppObject* p0 = LuaValueToCSRef(apis, TIp0, env, _sv0);
                
    // LuaValToCSVal P any
    float p1 = converter::Converter<float>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    int32_t p2 = converter::Converter<int32_t>::toCpp(apis, env, _sv2);
            // LuaValToCSVal s
    Il2CppString* p3 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv3);    
    // LuaValToCSVal o/O
    Il2CppObject* p4 = LuaValueToCSRef(apis, TIp4, env, _sv4);
             // LuaValToCSVal struct
    S_r4r4r4_* pp5 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, _sv5);
    S_r4r4r4_ p5 = pp5 ? *pp5 : S_r4r4r4_ {};
                
    // LuaValToCSVal P any
    int32_t p6 = converter::Converter<int32_t>::toCpp(apis, env, _sv6);
            // LuaValToCSVal ref with default
    Il2CppObject* p7 = OptionalParameter<Il2CppObject*>::GetRefType(apis, env, info, method, wrapData, lua_args_len, 7, TIp7);    // LuaValToCSVal string with default
    Il2CppString* p8 = OptionalParameter<Il2CppString*>::GetString(apis, env, info, method, wrapData, lua_args_len, 8);
    typedef void (*FuncToCall)(void*,Il2CppObject* p1, float p2, int32_t p3, Il2CppString* p4, Il2CppObject* p5, struct S_r4r4r4_ p6, int32_t p7, Il2CppObject* p8, Il2CppString* p9, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3, p4, p5, p6, p7, p8,  method);
    return true;
}
// Void AddScale(UnityEngine.Transform, Single, Int32, System.String, UnityEngine.AnimationCurve, Int32, System.String[], System.String) declare in CMTweener
bool w_vtor4i4soi4DoDs(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtor4i4soi4DoDs");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp3 = wrapData->TypeInfos[1];
    auto TIp4 = wrapData->TypeInfos[2];
    auto TIp6 = wrapData->TypeInfos[3];
    auto TIp7 = wrapData->TypeInfos[4];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    int _sv4 = apis->get_arg(info, 4);
    int _sv5 = apis->get_arg(info, 5);
    int _sv6 = apis->get_arg(info, 6);
    int _sv7 = apis->get_arg(info, 7);
    if (true) {
        if (lua_args_len < 6 || lua_args_len > 8) 
            return false;

        if (!DataTransfer::IsAssignable(apis, env, _sv0, TIp0, false))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv2))
            return false;
        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv3))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv4, TIp4, false))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv5))
            return false;
        if (lua_args_len > 6 && !DataTransfer::IsAssignable(apis, env, _sv6, TIp6, false))
            return false;
        if (lua_args_len > 7 && !converter::Converter<Il2CppString*>::accept(apis, env, _sv7))
            return false;        
    }
    
    // LuaValToCSVal o/O
    Il2CppObject* p0 = LuaValueToCSRef(apis, TIp0, env, _sv0);
                
    // LuaValToCSVal P any
    float p1 = converter::Converter<float>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    int32_t p2 = converter::Converter<int32_t>::toCpp(apis, env, _sv2);
            // LuaValToCSVal s
    Il2CppString* p3 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv3);    
    // LuaValToCSVal o/O
    Il2CppObject* p4 = LuaValueToCSRef(apis, TIp4, env, _sv4);
                
    // LuaValToCSVal P any
    int32_t p5 = converter::Converter<int32_t>::toCpp(apis, env, _sv5);
            // LuaValToCSVal ref with default
    Il2CppObject* p6 = OptionalParameter<Il2CppObject*>::GetRefType(apis, env, info, method, wrapData, lua_args_len, 6, TIp6);    // LuaValToCSVal string with default
    Il2CppString* p7 = OptionalParameter<Il2CppString*>::GetString(apis, env, info, method, wrapData, lua_args_len, 7);
    typedef void (*FuncToCall)(void*,Il2CppObject* p1, float p2, int32_t p3, Il2CppString* p4, Il2CppObject* p5, int32_t p6, Il2CppObject* p7, Il2CppString* p8, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3, p4, p5, p6, p7,  method);
    return true;
}
// Void AddHyperbolaTranslation(UnityEngine.Transform, Single, Int32, System.String, UnityEngine.AnimationCurve, UnityEngine.AnimationCurve, UnityEngine.Vector3, UnityEngine.Vector3, Int32, System.String[], System.String) declare in CMTweener
bool w_vtor4i4sooS_r4r4r4_S_r4r4r4_i4DoDs(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtor4i4sooS_r4r4r4_S_r4r4r4_i4DoDs");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp3 = wrapData->TypeInfos[1];
    auto TIp4 = wrapData->TypeInfos[2];
    auto TIp5 = wrapData->TypeInfos[3];
    auto TIp6 = wrapData->TypeInfos[4];
    auto TIp7 = wrapData->TypeInfos[5];
    auto TIp9 = wrapData->TypeInfos[6];
    auto TIp10 = wrapData->TypeInfos[7];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    int _sv4 = apis->get_arg(info, 4);
    int _sv5 = apis->get_arg(info, 5);
    int _sv6 = apis->get_arg(info, 6);
    int _sv7 = apis->get_arg(info, 7);
    int _sv8 = apis->get_arg(info, 8);
    int _sv9 = apis->get_arg(info, 9);
    int _sv10 = apis->get_arg(info, 10);
    if (true) {
        if (lua_args_len < 9 || lua_args_len > 11) 
            return false;

        if (!DataTransfer::IsAssignable(apis, env, _sv0, TIp0, false))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv2))
            return false;
        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv3))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv4, TIp4, false))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv5, TIp5, false))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv6, TIp6, true))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv7, TIp7, true))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv8))
            return false;
        if (lua_args_len > 9 && !DataTransfer::IsAssignable(apis, env, _sv9, TIp9, false))
            return false;
        if (lua_args_len > 10 && !converter::Converter<Il2CppString*>::accept(apis, env, _sv10))
            return false;        
    }
    
    // LuaValToCSVal o/O
    Il2CppObject* p0 = LuaValueToCSRef(apis, TIp0, env, _sv0);
                
    // LuaValToCSVal P any
    float p1 = converter::Converter<float>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    int32_t p2 = converter::Converter<int32_t>::toCpp(apis, env, _sv2);
            // LuaValToCSVal s
    Il2CppString* p3 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv3);    
    // LuaValToCSVal o/O
    Il2CppObject* p4 = LuaValueToCSRef(apis, TIp4, env, _sv4);
            
    // LuaValToCSVal o/O
    Il2CppObject* p5 = LuaValueToCSRef(apis, TIp5, env, _sv5);
             // LuaValToCSVal struct
    S_r4r4r4_* pp6 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, _sv6);
    S_r4r4r4_ p6 = pp6 ? *pp6 : S_r4r4r4_ {};
             // LuaValToCSVal struct
    S_r4r4r4_* pp7 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, _sv7);
    S_r4r4r4_ p7 = pp7 ? *pp7 : S_r4r4r4_ {};
                
    // LuaValToCSVal P any
    int32_t p8 = converter::Converter<int32_t>::toCpp(apis, env, _sv8);
            // LuaValToCSVal ref with default
    Il2CppObject* p9 = OptionalParameter<Il2CppObject*>::GetRefType(apis, env, info, method, wrapData, lua_args_len, 9, TIp9);    // LuaValToCSVal string with default
    Il2CppString* p10 = OptionalParameter<Il2CppString*>::GetString(apis, env, info, method, wrapData, lua_args_len, 10);
    typedef void (*FuncToCall)(void*,Il2CppObject* p1, float p2, int32_t p3, Il2CppString* p4, Il2CppObject* p5, Il2CppObject* p6, struct S_r4r4r4_ p7, struct S_r4r4r4_ p8, int32_t p9, Il2CppObject* p10, Il2CppString* p11, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10,  method);
    return true;
}
// Void AddHyperbolaMove(UnityEngine.Transform, Single, Int32, System.String, UnityEngine.AnimationCurve, UnityEngine.AnimationCurve, UnityEngine.Vector3, Int32, System.String[], System.String) declare in CMTweener
bool w_vtor4i4sooS_r4r4r4_i4DoDs(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtor4i4sooS_r4r4r4_i4DoDs");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp3 = wrapData->TypeInfos[1];
    auto TIp4 = wrapData->TypeInfos[2];
    auto TIp5 = wrapData->TypeInfos[3];
    auto TIp6 = wrapData->TypeInfos[4];
    auto TIp8 = wrapData->TypeInfos[5];
    auto TIp9 = wrapData->TypeInfos[6];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    int _sv4 = apis->get_arg(info, 4);
    int _sv5 = apis->get_arg(info, 5);
    int _sv6 = apis->get_arg(info, 6);
    int _sv7 = apis->get_arg(info, 7);
    int _sv8 = apis->get_arg(info, 8);
    int _sv9 = apis->get_arg(info, 9);
    if (true) {
        if (lua_args_len < 8 || lua_args_len > 10) 
            return false;

        if (!DataTransfer::IsAssignable(apis, env, _sv0, TIp0, false))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv2))
            return false;
        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv3))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv4, TIp4, false))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv5, TIp5, false))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv6, TIp6, true))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv7))
            return false;
        if (lua_args_len > 8 && !DataTransfer::IsAssignable(apis, env, _sv8, TIp8, false))
            return false;
        if (lua_args_len > 9 && !converter::Converter<Il2CppString*>::accept(apis, env, _sv9))
            return false;        
    }
    
    // LuaValToCSVal o/O
    Il2CppObject* p0 = LuaValueToCSRef(apis, TIp0, env, _sv0);
                
    // LuaValToCSVal P any
    float p1 = converter::Converter<float>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    int32_t p2 = converter::Converter<int32_t>::toCpp(apis, env, _sv2);
            // LuaValToCSVal s
    Il2CppString* p3 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv3);    
    // LuaValToCSVal o/O
    Il2CppObject* p4 = LuaValueToCSRef(apis, TIp4, env, _sv4);
            
    // LuaValToCSVal o/O
    Il2CppObject* p5 = LuaValueToCSRef(apis, TIp5, env, _sv5);
             // LuaValToCSVal struct
    S_r4r4r4_* pp6 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, _sv6);
    S_r4r4r4_ p6 = pp6 ? *pp6 : S_r4r4r4_ {};
                
    // LuaValToCSVal P any
    int32_t p7 = converter::Converter<int32_t>::toCpp(apis, env, _sv7);
            // LuaValToCSVal ref with default
    Il2CppObject* p8 = OptionalParameter<Il2CppObject*>::GetRefType(apis, env, info, method, wrapData, lua_args_len, 8, TIp8);    // LuaValToCSVal string with default
    Il2CppString* p9 = OptionalParameter<Il2CppString*>::GetString(apis, env, info, method, wrapData, lua_args_len, 9);
    typedef void (*FuncToCall)(void*,Il2CppObject* p1, float p2, int32_t p3, Il2CppString* p4, Il2CppObject* p5, Il2CppObject* p6, struct S_r4r4r4_ p7, int32_t p8, Il2CppObject* p9, Il2CppString* p10, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9,  method);
    return true;
}
// Void AddHyperbolaScale(UnityEngine.Transform, Single, Int32, System.String, UnityEngine.AnimationCurve, UnityEngine.AnimationCurve, Int32, System.String[], System.String) declare in CMTweener
bool w_vtor4i4sooi4DoDs(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtor4i4sooi4DoDs");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp3 = wrapData->TypeInfos[1];
    auto TIp4 = wrapData->TypeInfos[2];
    auto TIp5 = wrapData->TypeInfos[3];
    auto TIp7 = wrapData->TypeInfos[4];
    auto TIp8 = wrapData->TypeInfos[5];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    int _sv4 = apis->get_arg(info, 4);
    int _sv5 = apis->get_arg(info, 5);
    int _sv6 = apis->get_arg(info, 6);
    int _sv7 = apis->get_arg(info, 7);
    int _sv8 = apis->get_arg(info, 8);
    if (true) {
        if (lua_args_len < 7 || lua_args_len > 9) 
            return false;

        if (!DataTransfer::IsAssignable(apis, env, _sv0, TIp0, false))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv2))
            return false;
        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv3))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv4, TIp4, false))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv5, TIp5, false))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv6))
            return false;
        if (lua_args_len > 7 && !DataTransfer::IsAssignable(apis, env, _sv7, TIp7, false))
            return false;
        if (lua_args_len > 8 && !converter::Converter<Il2CppString*>::accept(apis, env, _sv8))
            return false;        
    }
    
    // LuaValToCSVal o/O
    Il2CppObject* p0 = LuaValueToCSRef(apis, TIp0, env, _sv0);
                
    // LuaValToCSVal P any
    float p1 = converter::Converter<float>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    int32_t p2 = converter::Converter<int32_t>::toCpp(apis, env, _sv2);
            // LuaValToCSVal s
    Il2CppString* p3 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv3);    
    // LuaValToCSVal o/O
    Il2CppObject* p4 = LuaValueToCSRef(apis, TIp4, env, _sv4);
            
    // LuaValToCSVal o/O
    Il2CppObject* p5 = LuaValueToCSRef(apis, TIp5, env, _sv5);
                
    // LuaValToCSVal P any
    int32_t p6 = converter::Converter<int32_t>::toCpp(apis, env, _sv6);
            // LuaValToCSVal ref with default
    Il2CppObject* p7 = OptionalParameter<Il2CppObject*>::GetRefType(apis, env, info, method, wrapData, lua_args_len, 7, TIp7);    // LuaValToCSVal string with default
    Il2CppString* p8 = OptionalParameter<Il2CppString*>::GetString(apis, env, info, method, wrapData, lua_args_len, 8);
    typedef void (*FuncToCall)(void*,Il2CppObject* p1, float p2, int32_t p3, Il2CppString* p4, Il2CppObject* p5, Il2CppObject* p6, int32_t p7, Il2CppObject* p8, Il2CppString* p9, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3, p4, p5, p6, p7, p8,  method);
    return true;
}
// Void AddProgressBarValue(UnityEngine.Transform, Single, Int32, System.String, UnityEngine.AnimationCurve, UnityEngine.AnimationCurve, Single, Single, Int32, System.String[], System.String) declare in CMTweener
bool w_vtor4i4soor4r4i4DoDs(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtor4i4soor4r4i4DoDs");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp3 = wrapData->TypeInfos[1];
    auto TIp4 = wrapData->TypeInfos[2];
    auto TIp5 = wrapData->TypeInfos[3];
    auto TIp9 = wrapData->TypeInfos[4];
    auto TIp10 = wrapData->TypeInfos[5];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    int _sv4 = apis->get_arg(info, 4);
    int _sv5 = apis->get_arg(info, 5);
    int _sv6 = apis->get_arg(info, 6);
    int _sv7 = apis->get_arg(info, 7);
    int _sv8 = apis->get_arg(info, 8);
    int _sv9 = apis->get_arg(info, 9);
    int _sv10 = apis->get_arg(info, 10);
    if (true) {
        if (lua_args_len < 9 || lua_args_len > 11) 
            return false;

        if (!DataTransfer::IsAssignable(apis, env, _sv0, TIp0, false))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv2))
            return false;
        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv3))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv4, TIp4, false))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv5, TIp5, false))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv6))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv7))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv8))
            return false;
        if (lua_args_len > 9 && !DataTransfer::IsAssignable(apis, env, _sv9, TIp9, false))
            return false;
        if (lua_args_len > 10 && !converter::Converter<Il2CppString*>::accept(apis, env, _sv10))
            return false;        
    }
    
    // LuaValToCSVal o/O
    Il2CppObject* p0 = LuaValueToCSRef(apis, TIp0, env, _sv0);
                
    // LuaValToCSVal P any
    float p1 = converter::Converter<float>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    int32_t p2 = converter::Converter<int32_t>::toCpp(apis, env, _sv2);
            // LuaValToCSVal s
    Il2CppString* p3 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv3);    
    // LuaValToCSVal o/O
    Il2CppObject* p4 = LuaValueToCSRef(apis, TIp4, env, _sv4);
            
    // LuaValToCSVal o/O
    Il2CppObject* p5 = LuaValueToCSRef(apis, TIp5, env, _sv5);
                
    // LuaValToCSVal P any
    float p6 = converter::Converter<float>::toCpp(apis, env, _sv6);
                
    // LuaValToCSVal P any
    float p7 = converter::Converter<float>::toCpp(apis, env, _sv7);
                
    // LuaValToCSVal P any
    int32_t p8 = converter::Converter<int32_t>::toCpp(apis, env, _sv8);
            // LuaValToCSVal ref with default
    Il2CppObject* p9 = OptionalParameter<Il2CppObject*>::GetRefType(apis, env, info, method, wrapData, lua_args_len, 9, TIp9);    // LuaValToCSVal string with default
    Il2CppString* p10 = OptionalParameter<Il2CppString*>::GetString(apis, env, info, method, wrapData, lua_args_len, 10);
    typedef void (*FuncToCall)(void*,Il2CppObject* p1, float p2, int32_t p3, Il2CppString* p4, Il2CppObject* p5, Il2CppObject* p6, float p7, float p8, int32_t p9, Il2CppObject* p10, Il2CppString* p11, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10,  method);
    return true;
}
// Void SetReplacementShader(UnityEngine.Shader, System.String) declare in UnityEngine.Camera
bool w_vtos(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtos");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp1 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!DataTransfer::IsAssignable(apis, env, _sv0, TIp0, false))
            return false;
        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv1))
            return false;        
    }
    
    // LuaValToCSVal o/O
    Il2CppObject* p0 = LuaValueToCSRef(apis, TIp0, env, _sv0);
            // LuaValToCSVal s
    Il2CppString* p1 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv1);
    typedef void (*FuncToCall)(void*,Il2CppObject* p1, Il2CppString* p2, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1,  method);
    return true;
}
// Void ApplyPropertyOverride(UnityEngine.Material, System.String, Boolean) declare in UnityEngine.Material
bool w_vtosDb(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtosDb");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp1 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (true) {
        if (lua_args_len < 2 || lua_args_len > 3) 
            return false;

        if (!DataTransfer::IsAssignable(apis, env, _sv0, TIp0, false))
            return false;
        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv1))
            return false;
        if (lua_args_len > 2 && !converter::Converter<bool>::accept(apis, env, _sv2))
            return false;        
    }
    
    // LuaValToCSVal o/O
    Il2CppObject* p0 = LuaValueToCSRef(apis, TIp0, env, _sv0);
            // LuaValToCSVal s
    Il2CppString* p1 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv1); // LuaValToCSVal primitive with default
    bool p2 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 2);
            
    typedef void (*FuncToCall)(void*,Il2CppObject* p1, Il2CppString* p2, bool p3, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2,  method);
    return true;
}
// Void .ctor(System.Uri, System.String, Boolean) declare in System.Uri
bool w_vtosb(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtosb");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp1 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!DataTransfer::IsAssignable(apis, env, _sv0, TIp0, false))
            return false;
        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv2))
            return false;        
    }
    
    // LuaValToCSVal o/O
    Il2CppObject* p0 = LuaValueToCSRef(apis, TIp0, env, _sv0);
            // LuaValToCSVal s
    Il2CppString* p1 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv1);        
    // LuaValToCSVal P any
    bool p2 = converter::Converter<bool>::toCpp(apis, env, _sv2);
        
    typedef void (*FuncToCall)(void*,Il2CppObject* p1, Il2CppString* p2, bool p3, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2,  method);
    return true;
}
// Void UIPreload(System.Type, System.String, Int32) declare in Assets.Scripts.Framework.AssetService.AssetService
bool w_vtosi4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtosi4");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp1 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!DataTransfer::IsAssignable(apis, env, _sv0, TIp0, false))
            return false;
        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv2))
            return false;        
    }
    
    // LuaValToCSVal o/O
    Il2CppObject* p0 = LuaValueToCSRef(apis, TIp0, env, _sv0);
            // LuaValToCSVal s
    Il2CppString* p1 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv1);        
    // LuaValToCSVal P any
    int32_t p2 = converter::Converter<int32_t>::toCpp(apis, env, _sv2);
        
    typedef void (*FuncToCall)(void*,Il2CppObject* p1, Il2CppString* p2, int32_t p3, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2,  method);
    return true;
}
// Void AddClip(UnityEngine.AnimationClip, System.String, Int32, Int32) declare in UnityEngine.Animation
bool w_vtosi4i4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtosi4i4");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp1 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    if (checkLuaArgument) {
        if (lua_args_len != 4) 
            return false;

        if (!DataTransfer::IsAssignable(apis, env, _sv0, TIp0, false))
            return false;
        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv2))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv3))
            return false;        
    }
    
    // LuaValToCSVal o/O
    Il2CppObject* p0 = LuaValueToCSRef(apis, TIp0, env, _sv0);
            // LuaValToCSVal s
    Il2CppString* p1 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv1);        
    // LuaValToCSVal P any
    int32_t p2 = converter::Converter<int32_t>::toCpp(apis, env, _sv2);
                
    // LuaValToCSVal P any
    int32_t p3 = converter::Converter<int32_t>::toCpp(apis, env, _sv3);
        
    typedef void (*FuncToCall)(void*,Il2CppObject* p1, Il2CppString* p2, int32_t p3, int32_t p4, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3,  method);
    return true;
}
// Void AddClip(UnityEngine.AnimationClip, System.String, Int32, Int32, Boolean) declare in UnityEngine.Animation
bool w_vtosi4i4b(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtosi4i4b");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp1 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    int _sv4 = apis->get_arg(info, 4);
    if (checkLuaArgument) {
        if (lua_args_len != 5) 
            return false;

        if (!DataTransfer::IsAssignable(apis, env, _sv0, TIp0, false))
            return false;
        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv2))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv3))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv4))
            return false;        
    }
    
    // LuaValToCSVal o/O
    Il2CppObject* p0 = LuaValueToCSRef(apis, TIp0, env, _sv0);
            // LuaValToCSVal s
    Il2CppString* p1 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv1);        
    // LuaValToCSVal P any
    int32_t p2 = converter::Converter<int32_t>::toCpp(apis, env, _sv2);
                
    // LuaValToCSVal P any
    int32_t p3 = converter::Converter<int32_t>::toCpp(apis, env, _sv3);
                
    // LuaValToCSVal P any
    bool p4 = converter::Converter<bool>::toCpp(apis, env, _sv4);
        
    typedef void (*FuncToCall)(void*,Il2CppObject* p1, Il2CppString* p2, int32_t p3, int32_t p4, bool p5, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3, p4,  method);
    return true;
}
// Void PlayInteraction(OSProto.FRAMEPKG_CMD_CHESSBOARD_EVENT, UInt32) declare in Assets.Scripts.GameLogic.Project8SceneManagement
bool w_vtou4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtou4");
    auto TIp0 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!DataTransfer::IsAssignable(apis, env, _sv0, TIp0, false))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv1))
            return false;        
    }
    
    // LuaValToCSVal o/O
    Il2CppObject* p0 = LuaValueToCSRef(apis, TIp0, env, _sv0);
                
    // LuaValToCSVal P any
    uint32_t p1 = converter::Converter<uint32_t>::toCpp(apis, env, _sv1);
        
    typedef void (*FuncToCall)(void*,Il2CppObject* p1, uint32_t p2, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1,  method);
    return true;
}
// Void Init(Assets.Scripts.GameLogic.Project8Logic, UInt32, Assets.Scripts.GameLogic.Project8BattleField) declare in Assets.Scripts.GameLogic.Project8PlayerInstance
bool w_vtou4o(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtou4o");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp2 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!DataTransfer::IsAssignable(apis, env, _sv0, TIp0, false))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv1))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv2, TIp2, false))
            return false;        
    }
    
    // LuaValToCSVal o/O
    Il2CppObject* p0 = LuaValueToCSRef(apis, TIp0, env, _sv0);
                
    // LuaValToCSVal P any
    uint32_t p1 = converter::Converter<uint32_t>::toCpp(apis, env, _sv1);
            
    // LuaValToCSVal o/O
    Il2CppObject* p2 = LuaValueToCSRef(apis, TIp2, env, _sv2);
        
    typedef void (*FuncToCall)(void*,Il2CppObject* p1, uint32_t p2, Il2CppObject* p3, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2,  method);
    return true;
}
// Void SetWearItemUpgrade(Assets.Scripts.GameLogic.UIWearEquipItemInfo, UInt32, UInt32, Boolean, Boolean) declare in Assets.Scripts.UI.InTheGame.Equip.UIEquipToastSyntheticItem
bool w_vtou4u4bb(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtou4u4bb");
    auto TIp0 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    int _sv4 = apis->get_arg(info, 4);
    if (checkLuaArgument) {
        if (lua_args_len != 5) 
            return false;

        if (!DataTransfer::IsAssignable(apis, env, _sv0, TIp0, false))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv2))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv3))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv4))
            return false;        
    }
    
    // LuaValToCSVal o/O
    Il2CppObject* p0 = LuaValueToCSRef(apis, TIp0, env, _sv0);
                
    // LuaValToCSVal P any
    uint32_t p1 = converter::Converter<uint32_t>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    uint32_t p2 = converter::Converter<uint32_t>::toCpp(apis, env, _sv2);
                
    // LuaValToCSVal P any
    bool p3 = converter::Converter<bool>::toCpp(apis, env, _sv3);
                
    // LuaValToCSVal P any
    bool p4 = converter::Converter<bool>::toCpp(apis, env, _sv4);
        
    typedef void (*FuncToCall)(void*,Il2CppObject* p1, uint32_t p2, uint32_t p3, bool p4, bool p5, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3, p4,  method);
    return true;
}
// Void CustomFillAmount(UnityEngine.UI.Image, Single) declare in ExtImage
bool w_vtr4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtr4");

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
        
    typedef void (*FuncToCall)(void*,float p1, const void* method);
    ((FuncToCall)methodPointer)(self, p0,  method);
    return true;
}
// Void SetScrollValue(Single, Boolean, Single) declare in UIWidgets.EasyListView
bool w_vtr4DbDr4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtr4DbDr4");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (true) {
        if (lua_args_len < 1 || lua_args_len > 3) 
            return false;

        if (!converter::Converter<float>::accept(apis, env, _sv0))
            return false;
        if (lua_args_len > 1 && !converter::Converter<bool>::accept(apis, env, _sv1))
            return false;
        if (lua_args_len > 2 && !converter::Converter<float>::accept(apis, env, _sv2))
            return false;        
    }
        
    // LuaValToCSVal P any
    float p0 = converter::Converter<float>::toCpp(apis, env, _sv0);
         // LuaValToCSVal primitive with default
    bool p1 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 1);
             // LuaValToCSVal primitive with default
    float p2 = OptionalParameter<float>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 2);
            
    typedef void (*FuncToCall)(void*,float p1, bool p2, float p3, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2,  method);
    return true;
}
// Void TweenTo(Single, Project8FreeCameraParam) declare in Assets.Scripts.GameLogic.Project8FreeCamera
bool w_vtr4S_S_S_r4r4r4_S_r4r4r4_S_r4r4r4__S_r4r4r4i4__(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtr4S_S_S_r4r4r4_S_r4r4r4_S_r4r4r4__S_r4r4r4i4__");
    auto TIp1 = wrapData->TypeInfos[0];
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
    S_S_S_r4r4r4_S_r4r4r4_S_r4r4r4__S_r4r4r4i4__* pp1 = DataTransfer::GetPointer<S_S_S_r4r4r4_S_r4r4r4_S_r4r4r4__S_r4r4r4i4__>(apis, env, _sv1);
    S_S_S_r4r4r4_S_r4r4r4_S_r4r4r4__S_r4r4r4i4__ p1 = pp1 ? *pp1 : S_S_S_r4r4r4_S_r4r4r4_S_r4r4r4__S_r4r4r4i4__ {};
        
    typedef void (*FuncToCall)(void*,float p1, struct S_S_S_r4r4r4_S_r4r4r4_S_r4r4r4__S_r4r4r4i4__ p2, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1,  method);
    return true;
}
// Void SetGameSettingParam(Single, UnityEngine.Vector3, Single, Single) declare in Moba_Camera
bool w_vtr4S_r4r4r4_r4r4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtr4S_r4r4r4_r4r4");
    auto TIp1 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    if (checkLuaArgument) {
        if (lua_args_len != 4) 
            return false;

        if (!converter::Converter<float>::accept(apis, env, _sv0))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, true))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv2))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv3))
            return false;        
    }
        
    // LuaValToCSVal P any
    float p0 = converter::Converter<float>::toCpp(apis, env, _sv0);
             // LuaValToCSVal struct
    S_r4r4r4_* pp1 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, _sv1);
    S_r4r4r4_ p1 = pp1 ? *pp1 : S_r4r4r4_ {};
                
    // LuaValToCSVal P any
    float p2 = converter::Converter<float>::toCpp(apis, env, _sv2);
                
    // LuaValToCSVal P any
    float p3 = converter::Converter<float>::toCpp(apis, env, _sv3);
        
    typedef void (*FuncToCall)(void*,float p1, struct S_r4r4r4_ p2, float p3, float p4, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3,  method);
    return true;
}
// Void Set(Single, Boolean) declare in Timi.TimiSlider
bool w_vtr4b(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtr4b");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<float>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv1))
            return false;        
    }
        
    // LuaValToCSVal P any
    float p0 = converter::Converter<float>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    bool p1 = converter::Converter<bool>::toCpp(apis, env, _sv1);
        
    typedef void (*FuncToCall)(void*,float p1, bool p2, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1,  method);
    return true;
}
// Void StartListItemAminTimer(Single, Int32, System.Action`1[System.Int32]) declare in UIWidgets.EasyListView
bool w_vtr4i4o(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtr4i4o");
    auto TIp2 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!converter::Converter<float>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv1))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv2, TIp2, false))
            return false;        
    }
        
    // LuaValToCSVal P any
    float p0 = converter::Converter<float>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    int32_t p1 = converter::Converter<int32_t>::toCpp(apis, env, _sv1);
            
    // LuaValToCSVal o/O
    Il2CppObject* p2 = LuaValueToCSRef(apis, TIp2, env, _sv2);
        
    typedef void (*FuncToCall)(void*,float p1, int32_t p2, Il2CppObject* p3, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2,  method);
    return true;
}
// Void SetPosition(UnityEngine.RectTransform, Single, Single) declare in com.pixui.PxMisc
bool w_vtr4r4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtr4r4");

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
    return true;
}
// Void ScaleTo(Single, Single, Boolean) declare in Assets.Scripts.GameLogic.ActorMeshComponent
bool w_vtr4r4Db(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtr4r4Db");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (true) {
        if (lua_args_len < 2 || lua_args_len > 3) 
            return false;

        if (!converter::Converter<float>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv1))
            return false;
        if (lua_args_len > 2 && !converter::Converter<bool>::accept(apis, env, _sv2))
            return false;        
    }
        
    // LuaValToCSVal P any
    float p0 = converter::Converter<float>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    float p1 = converter::Converter<float>::toCpp(apis, env, _sv1);
         // LuaValToCSVal primitive with default
    bool p2 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 2);
            
    typedef void (*FuncToCall)(void*,float p1, float p2, bool p3, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2,  method);
    return true;
}
// Void CrossFadeAlpha(Single, Single, Boolean) declare in UnityEngine.UI.Graphic
bool w_vtr4r4b(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtr4r4b");

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
        if (!converter::Converter<bool>::accept(apis, env, _sv2))
            return false;        
    }
        
    // LuaValToCSVal P any
    float p0 = converter::Converter<float>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    float p1 = converter::Converter<float>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    bool p2 = converter::Converter<bool>::toCpp(apis, env, _sv2);
        
    typedef void (*FuncToCall)(void*,float p1, float p2, bool p3, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2,  method);
    return true;
}
// Void Translate(Single, Single, Single) declare in UnityEngine.Transform
bool w_vtr4r4r4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtr4r4r4");

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
    return true;
}
// Void Translate(Single, Single, Single, UnityEngine.Space) declare in UnityEngine.Transform
bool w_vtr4r4r4i4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtr4r4r4i4");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    if (checkLuaArgument) {
        if (lua_args_len != 4) 
            return false;

        if (!converter::Converter<float>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv2))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv3))
            return false;        
    }
        
    // LuaValToCSVal P any
    float p0 = converter::Converter<float>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    float p1 = converter::Converter<float>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    float p2 = converter::Converter<float>::toCpp(apis, env, _sv2);
                
    // LuaValToCSVal P any
    int32_t p3 = converter::Converter<int32_t>::toCpp(apis, env, _sv3);
        
    typedef void (*FuncToCall)(void*,float p1, float p2, float p3, int32_t p4, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3,  method);
    return true;
}
// Void Translate(Single, Single, Single, UnityEngine.Transform) declare in UnityEngine.Transform
bool w_vtr4r4r4o(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtr4r4r4o");
    auto TIp3 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    if (checkLuaArgument) {
        if (lua_args_len != 4) 
            return false;

        if (!converter::Converter<float>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv2))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv3, TIp3, false))
            return false;        
    }
        
    // LuaValToCSVal P any
    float p0 = converter::Converter<float>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    float p1 = converter::Converter<float>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    float p2 = converter::Converter<float>::toCpp(apis, env, _sv2);
            
    // LuaValToCSVal o/O
    Il2CppObject* p3 = LuaValueToCSRef(apis, TIp3, env, _sv3);
        
    typedef void (*FuncToCall)(void*,float p1, float p2, float p3, Il2CppObject* p4, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3,  method);
    return true;
}
// Void SetRect(UnityEngine.RectTransform, Single, Single, Single, Single) declare in com.pixui.PxMisc
bool w_vtr4r4r4r4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtr4r4r4r4");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    if (checkLuaArgument) {
        if (lua_args_len != 4) 
            return false;

        if (!converter::Converter<float>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv2))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv3))
            return false;        
    }
        
    // LuaValToCSVal P any
    float p0 = converter::Converter<float>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    float p1 = converter::Converter<float>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    float p2 = converter::Converter<float>::toCpp(apis, env, _sv2);
                
    // LuaValToCSVal P any
    float p3 = converter::Converter<float>::toCpp(apis, env, _sv3);
        
    typedef void (*FuncToCall)(void*,float p1, float p2, float p3, float p4, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3,  method);
    return true;
}
// Void SetLocalizedText(UnityEngine.UI.Text, System.String) declare in ExtText
bool w_vts(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vts");
    auto TIp0 = wrapData->TypeInfos[0];
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
    typedef void (*FuncToCall)(void*,Il2CppString* p1, const void* method);
    ((FuncToCall)methodPointer)(self, p0,  method);
    return true;
}
// Void StopAnimationEvent(System.String, Boolean) declare in Timi.TimiUserInterfaceEffects
bool w_vtsDb(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsDb");
    auto TIp0 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (true) {
        if (lua_args_len < 1 || lua_args_len > 2) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (lua_args_len > 1 && !converter::Converter<bool>::accept(apis, env, _sv1))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0); // LuaValToCSVal primitive with default
    bool p1 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 1);
            
    typedef void (*FuncToCall)(void*,Il2CppString* p1, bool p2, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1,  method);
    return true;
}
// Void CustomPlay(System.String, Boolean, Boolean) declare in MultifunctionRawImage
bool w_vtsDbDb(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsDbDb");
    auto TIp0 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (true) {
        if (lua_args_len < 1 || lua_args_len > 3) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (lua_args_len > 1 && !converter::Converter<bool>::accept(apis, env, _sv1))
            return false;
        if (lua_args_len > 2 && !converter::Converter<bool>::accept(apis, env, _sv2))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0); // LuaValToCSVal primitive with default
    bool p1 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 1);
             // LuaValToCSVal primitive with default
    bool p2 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 2);
            
    typedef void (*FuncToCall)(void*,Il2CppString* p1, bool p2, bool p3, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2,  method);
    return true;
}
// Void SetTexture(Timi.TimiImage, System.String, Boolean, System.Action`1[System.Boolean]) declare in ExtImage
bool w_vtsDbDo(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsDbDo");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp2 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (true) {
        if (lua_args_len < 1 || lua_args_len > 3) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (lua_args_len > 1 && !converter::Converter<bool>::accept(apis, env, _sv1))
            return false;
        if (lua_args_len > 2 && !DataTransfer::IsAssignable(apis, env, _sv2, TIp2, false))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0); // LuaValToCSVal primitive with default
    bool p1 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 1);
                // LuaValToCSVal ref with default
    Il2CppObject* p2 = OptionalParameter<Il2CppObject*>::GetRefType(apis, env, info, method, wrapData, lua_args_len, 2, TIp2);
    typedef void (*FuncToCall)(void*,Il2CppString* p1, bool p2, Il2CppObject* p3, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2,  method);
    return true;
}
// Void PlayAnimation(System.String, Boolean, System.Action`1[System.Boolean], Boolean, Boolean, Boolean) declare in Timi.TimiAnimation
bool w_vtsDbDoDbDbDb(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsDbDoDbDbDb");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp2 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    int _sv4 = apis->get_arg(info, 4);
    int _sv5 = apis->get_arg(info, 5);
    if (true) {
        if (lua_args_len < 1 || lua_args_len > 6) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (lua_args_len > 1 && !converter::Converter<bool>::accept(apis, env, _sv1))
            return false;
        if (lua_args_len > 2 && !DataTransfer::IsAssignable(apis, env, _sv2, TIp2, false))
            return false;
        if (lua_args_len > 3 && !converter::Converter<bool>::accept(apis, env, _sv3))
            return false;
        if (lua_args_len > 4 && !converter::Converter<bool>::accept(apis, env, _sv4))
            return false;
        if (lua_args_len > 5 && !converter::Converter<bool>::accept(apis, env, _sv5))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0); // LuaValToCSVal primitive with default
    bool p1 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 1);
                // LuaValToCSVal ref with default
    Il2CppObject* p2 = OptionalParameter<Il2CppObject*>::GetRefType(apis, env, info, method, wrapData, lua_args_len, 2, TIp2); // LuaValToCSVal primitive with default
    bool p3 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 3);
             // LuaValToCSVal primitive with default
    bool p4 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 4);
             // LuaValToCSVal primitive with default
    bool p5 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 5);
            
    typedef void (*FuncToCall)(void*,Il2CppString* p1, bool p2, Il2CppObject* p3, bool p4, bool p5, bool p6, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3, p4, p5,  method);
    return true;
}
// Void PlayAnimation(System.String, Boolean, System.Action`1[System.Boolean], Boolean, Boolean, Boolean, Boolean) declare in UIAnimation
bool w_vtsDbDoDbDbDbDb(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsDbDoDbDbDbDb");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp2 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    int _sv4 = apis->get_arg(info, 4);
    int _sv5 = apis->get_arg(info, 5);
    int _sv6 = apis->get_arg(info, 6);
    if (true) {
        if (lua_args_len < 1 || lua_args_len > 7) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (lua_args_len > 1 && !converter::Converter<bool>::accept(apis, env, _sv1))
            return false;
        if (lua_args_len > 2 && !DataTransfer::IsAssignable(apis, env, _sv2, TIp2, false))
            return false;
        if (lua_args_len > 3 && !converter::Converter<bool>::accept(apis, env, _sv3))
            return false;
        if (lua_args_len > 4 && !converter::Converter<bool>::accept(apis, env, _sv4))
            return false;
        if (lua_args_len > 5 && !converter::Converter<bool>::accept(apis, env, _sv5))
            return false;
        if (lua_args_len > 6 && !converter::Converter<bool>::accept(apis, env, _sv6))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0); // LuaValToCSVal primitive with default
    bool p1 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 1);
                // LuaValToCSVal ref with default
    Il2CppObject* p2 = OptionalParameter<Il2CppObject*>::GetRefType(apis, env, info, method, wrapData, lua_args_len, 2, TIp2); // LuaValToCSVal primitive with default
    bool p3 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 3);
             // LuaValToCSVal primitive with default
    bool p4 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 4);
             // LuaValToCSVal primitive with default
    bool p5 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 5);
             // LuaValToCSVal primitive with default
    bool p6 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 6);
            
    typedef void (*FuncToCall)(void*,Il2CppString* p1, bool p2, Il2CppObject* p3, bool p4, bool p5, bool p6, bool p7, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3, p4, p5, p6,  method);
    return true;
}
// Void OpenUrl_MSDK(System.String, Int32, Boolean, Boolean, Boolean, System.String) declare in Assets.Scripts.Common.WebViewUtility
bool w_vtsDi4DbDbDbDs(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsDi4DbDbDbDs");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp5 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    int _sv4 = apis->get_arg(info, 4);
    int _sv5 = apis->get_arg(info, 5);
    if (true) {
        if (lua_args_len < 1 || lua_args_len > 6) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (lua_args_len > 1 && !converter::Converter<int32_t>::accept(apis, env, _sv1))
            return false;
        if (lua_args_len > 2 && !converter::Converter<bool>::accept(apis, env, _sv2))
            return false;
        if (lua_args_len > 3 && !converter::Converter<bool>::accept(apis, env, _sv3))
            return false;
        if (lua_args_len > 4 && !converter::Converter<bool>::accept(apis, env, _sv4))
            return false;
        if (lua_args_len > 5 && !converter::Converter<Il2CppString*>::accept(apis, env, _sv5))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0); // LuaValToCSVal primitive with default
    int32_t p1 = OptionalParameter<int32_t>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 1);
             // LuaValToCSVal primitive with default
    bool p2 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 2);
             // LuaValToCSVal primitive with default
    bool p3 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 3);
             // LuaValToCSVal primitive with default
    bool p4 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 4);
                // LuaValToCSVal string with default
    Il2CppString* p5 = OptionalParameter<Il2CppString*>::GetString(apis, env, info, method, wrapData, lua_args_len, 5);
    typedef void (*FuncToCall)(void*,Il2CppString* p1, int32_t p2, bool p3, bool p4, bool p5, Il2CppString* p6, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3, p4, p5,  method);
    return true;
}
// Void LoadBankAsync(System.String, BankCallback) declare in Assets.Scripts.Sound.CSoundManager
bool w_vtsDo(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsDo");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp1 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (true) {
        if (lua_args_len < 1 || lua_args_len > 2) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (lua_args_len > 1 && !DataTransfer::IsAssignable(apis, env, _sv1, TIp1, false))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);    // LuaValToCSVal ref with default
    Il2CppObject* p1 = OptionalParameter<Il2CppObject*>::GetRefType(apis, env, info, method, wrapData, lua_args_len, 1, TIp1);
    typedef void (*FuncToCall)(void*,Il2CppString* p1, Il2CppObject* p2, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1,  method);
    return true;
}
// Void Create(System.String, Assets.Scripts.Framework.UI.UIPrefab2DClass, UnityEngine.Transform, System.Object, Boolean) declare in Assets.Scripts.Framework.UI.UILuaPrefabClass
bool w_vtsDoDoDODb(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsDoDoDODb");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp1 = wrapData->TypeInfos[1];
    auto TIp2 = wrapData->TypeInfos[2];
    auto TIp3 = wrapData->TypeInfos[3];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    int _sv4 = apis->get_arg(info, 4);
    if (true) {
        if (lua_args_len < 1 || lua_args_len > 5) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (lua_args_len > 1 && !DataTransfer::IsAssignable(apis, env, _sv1, TIp1, false))
            return false;
        if (lua_args_len > 2 && !DataTransfer::IsAssignable(apis, env, _sv2, TIp2, false))
            return false;
        if (lua_args_len > 4 && !converter::Converter<bool>::accept(apis, env, _sv4))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);    // LuaValToCSVal ref with default
    Il2CppObject* p1 = OptionalParameter<Il2CppObject*>::GetRefType(apis, env, info, method, wrapData, lua_args_len, 1, TIp1);    // LuaValToCSVal ref with default
    Il2CppObject* p2 = OptionalParameter<Il2CppObject*>::GetRefType(apis, env, info, method, wrapData, lua_args_len, 2, TIp2);    // LuaValToCSVal ref with default
    Il2CppObject* p3 = OptionalParameter<Il2CppObject*>::GetRefType(apis, env, info, method, wrapData, lua_args_len, 3, TIp3); // LuaValToCSVal primitive with default
    bool p4 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 4);
            
    typedef void (*FuncToCall)(void*,Il2CppString* p1, Il2CppObject* p2, Il2CppObject* p3, Il2CppObject* p4, bool p5, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3, p4,  method);
    return true;
}
// Void AsyncCreate(System.String, Assets.Scripts.Framework.UI.UIPrefab2DClass, UnityEngine.Transform, System.Object, Boolean, System.Action`1[Assets.Scripts.Framework.UI.UILuaPrefabClass]) declare in Assets.Scripts.Framework.UI.UILuaPrefabClass
bool w_vtsDoDoDODbDo(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsDoDoDODbDo");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp1 = wrapData->TypeInfos[1];
    auto TIp2 = wrapData->TypeInfos[2];
    auto TIp3 = wrapData->TypeInfos[3];
    auto TIp5 = wrapData->TypeInfos[4];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    int _sv4 = apis->get_arg(info, 4);
    int _sv5 = apis->get_arg(info, 5);
    if (true) {
        if (lua_args_len < 1 || lua_args_len > 6) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (lua_args_len > 1 && !DataTransfer::IsAssignable(apis, env, _sv1, TIp1, false))
            return false;
        if (lua_args_len > 2 && !DataTransfer::IsAssignable(apis, env, _sv2, TIp2, false))
            return false;
        if (lua_args_len > 4 && !converter::Converter<bool>::accept(apis, env, _sv4))
            return false;
        if (lua_args_len > 5 && !DataTransfer::IsAssignable(apis, env, _sv5, TIp5, false))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);    // LuaValToCSVal ref with default
    Il2CppObject* p1 = OptionalParameter<Il2CppObject*>::GetRefType(apis, env, info, method, wrapData, lua_args_len, 1, TIp1);    // LuaValToCSVal ref with default
    Il2CppObject* p2 = OptionalParameter<Il2CppObject*>::GetRefType(apis, env, info, method, wrapData, lua_args_len, 2, TIp2);    // LuaValToCSVal ref with default
    Il2CppObject* p3 = OptionalParameter<Il2CppObject*>::GetRefType(apis, env, info, method, wrapData, lua_args_len, 3, TIp3); // LuaValToCSVal primitive with default
    bool p4 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 4);
                // LuaValToCSVal ref with default
    Il2CppObject* p5 = OptionalParameter<Il2CppObject*>::GetRefType(apis, env, info, method, wrapData, lua_args_len, 5, TIp5);
    typedef void (*FuncToCall)(void*,Il2CppString* p1, Il2CppObject* p2, Il2CppObject* p3, Il2CppObject* p4, bool p5, Il2CppObject* p6, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3, p4, p5,  method);
    return true;
}
// Void PlayCMTweener(System.String, OnCompleted, System.Action`1[CMTweener], Int32, Single, Boolean) declare in Timi.TimiUserInterfaceEffects
bool w_vtsDoDoDi4Dr4Db(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsDoDoDi4Dr4Db");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp1 = wrapData->TypeInfos[1];
    auto TIp2 = wrapData->TypeInfos[2];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    int _sv4 = apis->get_arg(info, 4);
    int _sv5 = apis->get_arg(info, 5);
    if (true) {
        if (lua_args_len < 1 || lua_args_len > 6) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (lua_args_len > 1 && !DataTransfer::IsAssignable(apis, env, _sv1, TIp1, false))
            return false;
        if (lua_args_len > 2 && !DataTransfer::IsAssignable(apis, env, _sv2, TIp2, false))
            return false;
        if (lua_args_len > 3 && !converter::Converter<int32_t>::accept(apis, env, _sv3))
            return false;
        if (lua_args_len > 4 && !converter::Converter<float>::accept(apis, env, _sv4))
            return false;
        if (lua_args_len > 5 && !converter::Converter<bool>::accept(apis, env, _sv5))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);    // LuaValToCSVal ref with default
    Il2CppObject* p1 = OptionalParameter<Il2CppObject*>::GetRefType(apis, env, info, method, wrapData, lua_args_len, 1, TIp1);    // LuaValToCSVal ref with default
    Il2CppObject* p2 = OptionalParameter<Il2CppObject*>::GetRefType(apis, env, info, method, wrapData, lua_args_len, 2, TIp2); // LuaValToCSVal primitive with default
    int32_t p3 = OptionalParameter<int32_t>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 3);
             // LuaValToCSVal primitive with default
    float p4 = OptionalParameter<float>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 4);
             // LuaValToCSVal primitive with default
    bool p5 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 5);
            
    typedef void (*FuncToCall)(void*,Il2CppString* p1, Il2CppObject* p2, Il2CppObject* p3, int32_t p4, float p5, bool p6, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3, p4, p5,  method);
    return true;
}
// Void SetOSSprite(UnityEngine.SpriteRenderer, System.String, Single, Single) declare in ExtImage
bool w_vtsDr4Dr4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsDr4Dr4");
    auto TIp0 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (true) {
        if (lua_args_len < 1 || lua_args_len > 3) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (lua_args_len > 1 && !converter::Converter<float>::accept(apis, env, _sv1))
            return false;
        if (lua_args_len > 2 && !converter::Converter<float>::accept(apis, env, _sv2))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0); // LuaValToCSVal primitive with default
    float p1 = OptionalParameter<float>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 1);
             // LuaValToCSVal primitive with default
    float p2 = OptionalParameter<float>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 2);
            
    typedef void (*FuncToCall)(void*,Il2CppString* p1, float p2, float p3, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2,  method);
    return true;
}
// Void SendMessageUpwards(System.String, System.Object) declare in UnityEngine.Component
bool w_vtsO(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsO");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp1 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);    
    // LuaValToCSVal o/O
    Il2CppObject* p1 = LuaValueToCSRef(apis, TIp1, env, _sv1);
        
    typedef void (*FuncToCall)(void*,Il2CppString* p1, Il2CppObject* p2, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1,  method);
    return true;
}
// Void SendMessageUpwards(System.String, System.Object, UnityEngine.SendMessageOptions) declare in UnityEngine.Component
bool w_vtsOi4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsOi4");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp1 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv2))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);    
    // LuaValToCSVal o/O
    Il2CppObject* p1 = LuaValueToCSRef(apis, TIp1, env, _sv1);
                
    // LuaValToCSVal P any
    int32_t p2 = converter::Converter<int32_t>::toCpp(apis, env, _sv2);
        
    typedef void (*FuncToCall)(void*,Il2CppString* p1, Il2CppObject* p2, int32_t p3, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2,  method);
    return true;
}
// Void SetTextureOffset(System.String, UnityEngine.Vector2) declare in UnityEngine.Material
bool w_vtsS_r4r4_(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsS_r4r4_");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp1 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, true))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);     // LuaValToCSVal struct
    S_r4r4_* pp1 = DataTransfer::GetPointer<S_r4r4_>(apis, env, _sv1);
    S_r4r4_ p1 = pp1 ? *pp1 : S_r4r4_ {};
        
    typedef void (*FuncToCall)(void*,Il2CppString* p1, struct S_r4r4_ p2, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1,  method);
    return true;
}
// Void SetColor(System.String, UnityEngine.Color) declare in UnityEngine.Material
bool w_vtsS_r4r4r4r4_(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsS_r4r4r4r4_");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp1 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, true))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);     // LuaValToCSVal struct
    S_r4r4r4r4_* pp1 = DataTransfer::GetPointer<S_r4r4r4r4_>(apis, env, _sv1);
    S_r4r4r4r4_ p1 = pp1 ? *pp1 : S_r4r4r4r4_ {};
        
    typedef void (*FuncToCall)(void*,Il2CppString* p1, struct S_r4r4r4r4_ p2, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1,  method);
    return true;
}
// Void SetMatrix(System.String, UnityEngine.Matrix4x4) declare in UnityEngine.Material
bool w_vtsS_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsS_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp1 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, true))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);     // LuaValToCSVal struct
    S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_* pp1 = DataTransfer::GetPointer<S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_>(apis, env, _sv1);
    S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p1 = pp1 ? *pp1 : S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ {};
        
    typedef void (*FuncToCall)(void*,Il2CppString* p1, struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p2, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1,  method);
    return true;
}
// Void ResetLifeFrames(System.String, Int32 ByRef) declare in Assets.Scripts.Framework.AssetService.AssetService
bool w_vtsTi4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsTi4");
    AutoValueScope value_scope(apis, env);
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp1 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len < 1 || lua_args_len > 2) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);     
    // LuaValToCSVal P primitive
    int32_t up1 = 0;
    if (1 < lua_args_len)
        up1 = converter::Converter<std::reference_wrapper<int32_t>>::toCpp(apis, env, _sv1);
    int32_t* p1 = &up1;

    typedef void (*FuncToCall)(void*,Il2CppString* p1, void* p2, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1,  method);
	int ret1 = converter::Converter<int32_t>::toScript(apis, env, *p1);
	apis->add_return(info, ret1);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Void .ctor(System.String, System.Type[]) declare in UnityEngine.GameObject
bool w_vtsVo(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsVo");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp1 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len < 1 || lua_args_len > 2) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;        auto TIp1_V = il2cpp::vm::Class::GetElementClass(TIp1);if(lua_args_len > 1 && !DataTransfer::IsAssignable(apis, env, _sv1, TIp1_V, false))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);    // LuaValToCSVal ref params
    Il2CppArray* p1 = Params<void*>::PackRef(apis, env, info, TIp1, lua_args_len, 1);
            
    typedef void (*FuncToCall)(void*,Il2CppString* p1, Il2CppArray* p2, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1,  method);
    return true;
}
// Void SetLocalizedText(UnityEngine.UI.Text, System.String, System.String[]) declare in ExtText
bool w_vtsVs(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsVs");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp1 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len < 1 || lua_args_len > 2) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;        if(lua_args_len > 1 && !converter::Converter<Il2CppString*>::accept(apis, env, _sv1))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);     // LuaValToCSVal string params
    Il2CppArray* p1 = Params<void*>::PackString(apis, env, info, TIp1, lua_args_len, 1);
            
    typedef void (*FuncToCall)(void*,Il2CppString* p1, Il2CppArray* p2, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1,  method);
    return true;
}
// Void EnableMatKeywords(System.String, Boolean) declare in Assets.Scripts.Framework.AssetService.ActorAsset
bool w_vtsb(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsb");
    auto TIp0 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv1))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);        
    // LuaValToCSVal P any
    bool p1 = converter::Converter<bool>::toCpp(apis, env, _sv1);
        
    typedef void (*FuncToCall)(void*,Il2CppString* p1, bool p2, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1,  method);
    return true;
}
// Void SetDynamicSprite(System.String, Boolean, Boolean) declare in Timi.TimiImage
bool w_vtsbDb(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsbDb");
    auto TIp0 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (true) {
        if (lua_args_len < 2 || lua_args_len > 3) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv1))
            return false;
        if (lua_args_len > 2 && !converter::Converter<bool>::accept(apis, env, _sv2))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);        
    // LuaValToCSVal P any
    bool p1 = converter::Converter<bool>::toCpp(apis, env, _sv1);
         // LuaValToCSVal primitive with default
    bool p2 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 2);
            
    typedef void (*FuncToCall)(void*,Il2CppString* p1, bool p2, bool p3, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2,  method);
    return true;
}
// Void ReversePlayAnimation(System.String, Boolean, System.Action`1[System.Boolean], Boolean, Boolean, Boolean) declare in Timi.TimiAnimation
bool w_vtsbDoDbDbDb(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsbDoDbDbDb");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp2 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    int _sv4 = apis->get_arg(info, 4);
    int _sv5 = apis->get_arg(info, 5);
    if (true) {
        if (lua_args_len < 2 || lua_args_len > 6) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv1))
            return false;
        if (lua_args_len > 2 && !DataTransfer::IsAssignable(apis, env, _sv2, TIp2, false))
            return false;
        if (lua_args_len > 3 && !converter::Converter<bool>::accept(apis, env, _sv3))
            return false;
        if (lua_args_len > 4 && !converter::Converter<bool>::accept(apis, env, _sv4))
            return false;
        if (lua_args_len > 5 && !converter::Converter<bool>::accept(apis, env, _sv5))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);        
    // LuaValToCSVal P any
    bool p1 = converter::Converter<bool>::toCpp(apis, env, _sv1);
            // LuaValToCSVal ref with default
    Il2CppObject* p2 = OptionalParameter<Il2CppObject*>::GetRefType(apis, env, info, method, wrapData, lua_args_len, 2, TIp2); // LuaValToCSVal primitive with default
    bool p3 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 3);
             // LuaValToCSVal primitive with default
    bool p4 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 4);
             // LuaValToCSVal primitive with default
    bool p5 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 5);
            
    typedef void (*FuncToCall)(void*,Il2CppString* p1, bool p2, Il2CppObject* p3, bool p4, bool p5, bool p6, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3, p4, p5,  method);
    return true;
}
// Void ReversePlayAnimation(System.String, Boolean, System.Action`1[System.Boolean], Boolean, Boolean, Boolean, Boolean) declare in UIAnimation
bool w_vtsbDoDbDbDbDb(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsbDoDbDbDbDb");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp2 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    int _sv4 = apis->get_arg(info, 4);
    int _sv5 = apis->get_arg(info, 5);
    int _sv6 = apis->get_arg(info, 6);
    if (true) {
        if (lua_args_len < 2 || lua_args_len > 7) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv1))
            return false;
        if (lua_args_len > 2 && !DataTransfer::IsAssignable(apis, env, _sv2, TIp2, false))
            return false;
        if (lua_args_len > 3 && !converter::Converter<bool>::accept(apis, env, _sv3))
            return false;
        if (lua_args_len > 4 && !converter::Converter<bool>::accept(apis, env, _sv4))
            return false;
        if (lua_args_len > 5 && !converter::Converter<bool>::accept(apis, env, _sv5))
            return false;
        if (lua_args_len > 6 && !converter::Converter<bool>::accept(apis, env, _sv6))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);        
    // LuaValToCSVal P any
    bool p1 = converter::Converter<bool>::toCpp(apis, env, _sv1);
            // LuaValToCSVal ref with default
    Il2CppObject* p2 = OptionalParameter<Il2CppObject*>::GetRefType(apis, env, info, method, wrapData, lua_args_len, 2, TIp2); // LuaValToCSVal primitive with default
    bool p3 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 3);
             // LuaValToCSVal primitive with default
    bool p4 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 4);
             // LuaValToCSVal primitive with default
    bool p5 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 5);
             // LuaValToCSVal primitive with default
    bool p6 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 6);
            
    typedef void (*FuncToCall)(void*,Il2CppString* p1, bool p2, Il2CppObject* p3, bool p4, bool p5, bool p6, bool p7, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3, p4, p5, p6,  method);
    return true;
}
// Void LoadEffect(System.String, Boolean, UnityEngine.Events.UnityAction, UnityEngine.Events.UnityAction) declare in Assets.Scripts.Framework.UI.TimiEffectLoader
bool w_vtsbDoDo(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsbDoDo");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp2 = wrapData->TypeInfos[1];
    auto TIp3 = wrapData->TypeInfos[2];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    if (true) {
        if (lua_args_len < 2 || lua_args_len > 4) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv1))
            return false;
        if (lua_args_len > 2 && !DataTransfer::IsAssignable(apis, env, _sv2, TIp2, false))
            return false;
        if (lua_args_len > 3 && !DataTransfer::IsAssignable(apis, env, _sv3, TIp3, false))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);        
    // LuaValToCSVal P any
    bool p1 = converter::Converter<bool>::toCpp(apis, env, _sv1);
            // LuaValToCSVal ref with default
    Il2CppObject* p2 = OptionalParameter<Il2CppObject*>::GetRefType(apis, env, info, method, wrapData, lua_args_len, 2, TIp2);    // LuaValToCSVal ref with default
    Il2CppObject* p3 = OptionalParameter<Il2CppObject*>::GetRefType(apis, env, info, method, wrapData, lua_args_len, 3, TIp3);
    typedef void (*FuncToCall)(void*,Il2CppString* p1, bool p2, Il2CppObject* p3, Il2CppObject* p4, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3,  method);
    return true;
}
// Void LoadBank(System.String, Boolean, Boolean) declare in Assets.Scripts.Sound.CSoundManager
bool w_vtsbb(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsbb");
    auto TIp0 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv2))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);        
    // LuaValToCSVal P any
    bool p1 = converter::Converter<bool>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    bool p2 = converter::Converter<bool>::toCpp(apis, env, _sv2);
        
    typedef void (*FuncToCall)(void*,Il2CppString* p1, bool p2, bool p3, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2,  method);
    return true;
}
// Void SetKeywordToggle(UnityEngine.Material, System.String, Boolean, System.String) declare in com.pixui.PxMisc
bool w_vtsbs(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsbs");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp2 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv2))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);        
    // LuaValToCSVal P any
    bool p1 = converter::Converter<bool>::toCpp(apis, env, _sv1);
            // LuaValToCSVal s
    Il2CppString* p2 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv2);
    typedef void (*FuncToCall)(void*,Il2CppString* p1, bool p2, Il2CppString* p3, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2,  method);
    return true;
}
// Void SendMessageUpwards(System.String, UnityEngine.SendMessageOptions) declare in UnityEngine.Component
bool w_vtsi4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsi4");
    auto TIp0 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv1))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);        
    // LuaValToCSVal P any
    int32_t p1 = converter::Converter<int32_t>::toCpp(apis, env, _sv1);
        
    typedef void (*FuncToCall)(void*,Il2CppString* p1, int32_t p2, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1,  method);
    return true;
}
// Void .ctor(System.String, System.Text.RegularExpressions.RegexOptions, System.TimeSpan) declare in System.Text.RegularExpressions.Regex
bool w_vtsi4S_i8_(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsi4S_i8_");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp2 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv1))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv2, TIp2, true))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);        
    // LuaValToCSVal P any
    int32_t p1 = converter::Converter<int32_t>::toCpp(apis, env, _sv1);
             // LuaValToCSVal struct
    S_i8_* pp2 = DataTransfer::GetPointer<S_i8_>(apis, env, _sv2);
    S_i8_ p2 = pp2 ? *pp2 : S_i8_ {};
        
    typedef void (*FuncToCall)(void*,Il2CppString* p1, int32_t p2, struct S_i8_ p3, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2,  method);
    return true;
}
// Void .ctor(System.String, Int32, Int32, Int32) declare in System.Text.StringBuilder
bool w_vtsi4i4i4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsi4i4i4");
    auto TIp0 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    if (checkLuaArgument) {
        if (lua_args_len != 4) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv2))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv3))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);        
    // LuaValToCSVal P any
    int32_t p1 = converter::Converter<int32_t>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    int32_t p2 = converter::Converter<int32_t>::toCpp(apis, env, _sv2);
                
    // LuaValToCSVal P any
    int32_t p3 = converter::Converter<int32_t>::toCpp(apis, env, _sv3);
        
    typedef void (*FuncToCall)(void*,Il2CppString* p1, int32_t p2, int32_t p3, int32_t p4, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3,  method);
    return true;
}
// Void OnLoadAssetCompleted(System.String, Int32, CResource, System.Object) declare in Assets.Scripts.Framework.UI.UIPrefabBaseClass
bool w_vtsi4oDO(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsi4oDO");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp2 = wrapData->TypeInfos[1];
    auto TIp3 = wrapData->TypeInfos[2];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    if (true) {
        if (lua_args_len < 3 || lua_args_len > 4) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv1))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv2, TIp2, false))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);        
    // LuaValToCSVal P any
    int32_t p1 = converter::Converter<int32_t>::toCpp(apis, env, _sv1);
            
    // LuaValToCSVal o/O
    Il2CppObject* p2 = LuaValueToCSRef(apis, TIp2, env, _sv2);
            // LuaValToCSVal ref with default
    Il2CppObject* p3 = OptionalParameter<Il2CppObject*>::GetRefType(apis, env, info, method, wrapData, lua_args_len, 3, TIp3);
    typedef void (*FuncToCall)(void*,Il2CppString* p1, int32_t p2, Il2CppObject* p3, Il2CppObject* p4, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3,  method);
    return true;
}
// Void .ctor(System.String, Int32, System.String, Int32, Int32, Int32, Int32, System.String, Int32, Int32, System.String, Int32, Int32, System.String, Int32, Int32, System.String, Int32, Int32, Int32, System.String, Int32, System.String, Int32) declare in com.tencent.mna.KartinRet
bool w_vtsi4si4i4i4i4si4i4si4i4si4i4si4i4i4si4si4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsi4si4i4i4i4si4i4si4i4si4i4si4i4i4si4si4");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp2 = wrapData->TypeInfos[1];
    auto TIp7 = wrapData->TypeInfos[2];
    auto TIp10 = wrapData->TypeInfos[3];
    auto TIp13 = wrapData->TypeInfos[4];
    auto TIp16 = wrapData->TypeInfos[5];
    auto TIp20 = wrapData->TypeInfos[6];
    auto TIp22 = wrapData->TypeInfos[7];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    int _sv4 = apis->get_arg(info, 4);
    int _sv5 = apis->get_arg(info, 5);
    int _sv6 = apis->get_arg(info, 6);
    int _sv7 = apis->get_arg(info, 7);
    int _sv8 = apis->get_arg(info, 8);
    int _sv9 = apis->get_arg(info, 9);
    int _sv10 = apis->get_arg(info, 10);
    int _sv11 = apis->get_arg(info, 11);
    int _sv12 = apis->get_arg(info, 12);
    int _sv13 = apis->get_arg(info, 13);
    int _sv14 = apis->get_arg(info, 14);
    int _sv15 = apis->get_arg(info, 15);
    int _sv16 = apis->get_arg(info, 16);
    int _sv17 = apis->get_arg(info, 17);
    int _sv18 = apis->get_arg(info, 18);
    int _sv19 = apis->get_arg(info, 19);
    int _sv20 = apis->get_arg(info, 20);
    int _sv21 = apis->get_arg(info, 21);
    int _sv22 = apis->get_arg(info, 22);
    int _sv23 = apis->get_arg(info, 23);
    if (checkLuaArgument) {
        if (lua_args_len != 24) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv2))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv3))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv4))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv5))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv6))
            return false;
        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv7))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv8))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv9))
            return false;
        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv10))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv11))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv12))
            return false;
        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv13))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv14))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv15))
            return false;
        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv16))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv17))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv18))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv19))
            return false;
        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv20))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv21))
            return false;
        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv22))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv23))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);        
    // LuaValToCSVal P any
    int32_t p1 = converter::Converter<int32_t>::toCpp(apis, env, _sv1);
            // LuaValToCSVal s
    Il2CppString* p2 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv2);        
    // LuaValToCSVal P any
    int32_t p3 = converter::Converter<int32_t>::toCpp(apis, env, _sv3);
                
    // LuaValToCSVal P any
    int32_t p4 = converter::Converter<int32_t>::toCpp(apis, env, _sv4);
                
    // LuaValToCSVal P any
    int32_t p5 = converter::Converter<int32_t>::toCpp(apis, env, _sv5);
                
    // LuaValToCSVal P any
    int32_t p6 = converter::Converter<int32_t>::toCpp(apis, env, _sv6);
            // LuaValToCSVal s
    Il2CppString* p7 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv7);        
    // LuaValToCSVal P any
    int32_t p8 = converter::Converter<int32_t>::toCpp(apis, env, _sv8);
                
    // LuaValToCSVal P any
    int32_t p9 = converter::Converter<int32_t>::toCpp(apis, env, _sv9);
            // LuaValToCSVal s
    Il2CppString* p10 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv10);        
    // LuaValToCSVal P any
    int32_t p11 = converter::Converter<int32_t>::toCpp(apis, env, _sv11);
                
    // LuaValToCSVal P any
    int32_t p12 = converter::Converter<int32_t>::toCpp(apis, env, _sv12);
            // LuaValToCSVal s
    Il2CppString* p13 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv13);        
    // LuaValToCSVal P any
    int32_t p14 = converter::Converter<int32_t>::toCpp(apis, env, _sv14);
                
    // LuaValToCSVal P any
    int32_t p15 = converter::Converter<int32_t>::toCpp(apis, env, _sv15);
            // LuaValToCSVal s
    Il2CppString* p16 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv16);        
    // LuaValToCSVal P any
    int32_t p17 = converter::Converter<int32_t>::toCpp(apis, env, _sv17);
                
    // LuaValToCSVal P any
    int32_t p18 = converter::Converter<int32_t>::toCpp(apis, env, _sv18);
                
    // LuaValToCSVal P any
    int32_t p19 = converter::Converter<int32_t>::toCpp(apis, env, _sv19);
            // LuaValToCSVal s
    Il2CppString* p20 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv20);        
    // LuaValToCSVal P any
    int32_t p21 = converter::Converter<int32_t>::toCpp(apis, env, _sv21);
            // LuaValToCSVal s
    Il2CppString* p22 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv22);        
    // LuaValToCSVal P any
    int32_t p23 = converter::Converter<int32_t>::toCpp(apis, env, _sv23);
        
    typedef void (*FuncToCall)(void*,Il2CppString* p1, int32_t p2, Il2CppString* p3, int32_t p4, int32_t p5, int32_t p6, int32_t p7, Il2CppString* p8, int32_t p9, int32_t p10, Il2CppString* p11, int32_t p12, int32_t p13, Il2CppString* p14, int32_t p15, int32_t p16, Il2CppString* p17, int32_t p18, int32_t p19, int32_t p20, Il2CppString* p21, int32_t p22, Il2CppString* p23, int32_t p24, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23,  method);
    return true;
}
// Void SetKeywordEnum(UnityEngine.Material, System.String, Int32, System.String, System.String, System.String) declare in com.pixui.PxMisc
bool w_vtsi4sss(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsi4sss");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp2 = wrapData->TypeInfos[1];
    auto TIp3 = wrapData->TypeInfos[2];
    auto TIp4 = wrapData->TypeInfos[3];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    int _sv4 = apis->get_arg(info, 4);
    if (checkLuaArgument) {
        if (lua_args_len != 5) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv2))
            return false;
        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv3))
            return false;
        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv4))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);        
    // LuaValToCSVal P any
    int32_t p1 = converter::Converter<int32_t>::toCpp(apis, env, _sv1);
            // LuaValToCSVal s
    Il2CppString* p2 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv2);    // LuaValToCSVal s
    Il2CppString* p3 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv3);    // LuaValToCSVal s
    Il2CppString* p4 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv4);
    typedef void (*FuncToCall)(void*,Il2CppString* p1, int32_t p2, Il2CppString* p3, Il2CppString* p4, Il2CppString* p5, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3, p4,  method);
    return true;
}
// Void SetPlayerVar(System.String, System.Collections.Generic.List`1[System.Int32]) declare in Assets.Scripts.GameLogic.Project8PlayerInstance
bool w_vtso(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtso");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp1 = wrapData->TypeInfos[1];
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
        
    typedef void (*FuncToCall)(void*,Il2CppString* p1, Il2CppObject* p2, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1,  method);
    return true;
}
// Void ResetRtpcValue(System.String, UnityEngine.GameObject, Boolean) declare in Assets.Scripts.Sound.CSoundManager
bool w_vtsoDb(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsoDb");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp1 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (true) {
        if (lua_args_len < 2 || lua_args_len > 3) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, false))
            return false;
        if (lua_args_len > 2 && !converter::Converter<bool>::accept(apis, env, _sv2))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);    
    // LuaValToCSVal o/O
    Il2CppObject* p1 = LuaValueToCSRef(apis, TIp1, env, _sv1);
         // LuaValToCSVal primitive with default
    bool p2 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 2);
            
    typedef void (*FuncToCall)(void*,Il2CppString* p1, Il2CppObject* p2, bool p3, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2,  method);
    return true;
}
// Void LoadCDNAssetAsync(System.String, Assets.Scripts.Framework.AssetService.IAssetLoadCallback, Assets.Scripts.Framework.AssetService.LifeType) declare in Assets.Scripts.Framework.AssetService.AssetService
bool w_vtsoDi1(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsoDi1");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp1 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (true) {
        if (lua_args_len < 2 || lua_args_len > 3) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, false))
            return false;
        if (lua_args_len > 2 && !converter::Converter<int8_t>::accept(apis, env, _sv2))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);    
    // LuaValToCSVal o/O
    Il2CppObject* p1 = LuaValueToCSRef(apis, TIp1, env, _sv1);
         // LuaValToCSVal primitive with default
    int8_t p2 = OptionalParameter<int8_t>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 2);
            
    typedef void (*FuncToCall)(void*,Il2CppString* p1, Il2CppObject* p2, int8_t p3, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2,  method);
    return true;
}
// Void SetTexture(System.String, UnityEngine.RenderTexture, UnityEngine.Rendering.RenderTextureSubElement) declare in UnityEngine.Material
bool w_vtsoi4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsoi4");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp1 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, false))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv2))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);    
    // LuaValToCSVal o/O
    Il2CppObject* p1 = LuaValueToCSRef(apis, TIp1, env, _sv1);
                
    // LuaValToCSVal P any
    int32_t p2 = converter::Converter<int32_t>::toCpp(apis, env, _sv2);
        
    typedef void (*FuncToCall)(void*,Il2CppString* p1, Il2CppObject* p2, int32_t p3, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2,  method);
    return true;
}
// Void SetConstantBuffer(System.String, UnityEngine.ComputeBuffer, Int32, Int32) declare in UnityEngine.Material
bool w_vtsoi4i4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsoi4i4");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp1 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    if (checkLuaArgument) {
        if (lua_args_len != 4) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, false))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv2))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv3))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);    
    // LuaValToCSVal o/O
    Il2CppObject* p1 = LuaValueToCSRef(apis, TIp1, env, _sv1);
                
    // LuaValToCSVal P any
    int32_t p2 = converter::Converter<int32_t>::toCpp(apis, env, _sv2);
                
    // LuaValToCSVal P any
    int32_t p3 = converter::Converter<int32_t>::toCpp(apis, env, _sv3);
        
    typedef void (*FuncToCall)(void*,Il2CppString* p1, Il2CppObject* p2, int32_t p3, int32_t p4, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3,  method);
    return true;
}
// Void Create(System.String, Assets.Scripts.Framework.UI.UIPrefab2DClass, UnityEngine.Transform, System.Object, Boolean, UnityEngine.Vector3) declare in Assets.Scripts.Framework.UI.UILuaPrefabClass
bool w_vtsooObS_r4r4r4_(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsooObS_r4r4r4_");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp1 = wrapData->TypeInfos[1];
    auto TIp2 = wrapData->TypeInfos[2];
    auto TIp3 = wrapData->TypeInfos[3];
    auto TIp5 = wrapData->TypeInfos[4];
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

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, false))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv2, TIp2, false))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv4))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv5, TIp5, true))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);    
    // LuaValToCSVal o/O
    Il2CppObject* p1 = LuaValueToCSRef(apis, TIp1, env, _sv1);
            
    // LuaValToCSVal o/O
    Il2CppObject* p2 = LuaValueToCSRef(apis, TIp2, env, _sv2);
            
    // LuaValToCSVal o/O
    Il2CppObject* p3 = LuaValueToCSRef(apis, TIp3, env, _sv3);
                
    // LuaValToCSVal P any
    bool p4 = converter::Converter<bool>::toCpp(apis, env, _sv4);
             // LuaValToCSVal struct
    S_r4r4r4_* pp5 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, _sv5);
    S_r4r4r4_ p5 = pp5 ? *pp5 : S_r4r4r4_ {};
        
    typedef void (*FuncToCall)(void*,Il2CppString* p1, Il2CppObject* p2, Il2CppObject* p3, Il2CppObject* p4, bool p5, struct S_r4r4r4_ p6, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3, p4, p5,  method);
    return true;
}
// Void AsyncCreate(System.String, Assets.Scripts.Framework.UI.UIPrefab2DClass, UnityEngine.Transform, System.Object, Boolean, System.Action`1[Assets.Scripts.Framework.UI.UILuaPrefabClass], UnityEngine.Vector3) declare in Assets.Scripts.Framework.UI.UILuaPrefabClass
bool w_vtsooOboS_r4r4r4_(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsooOboS_r4r4r4_");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp1 = wrapData->TypeInfos[1];
    auto TIp2 = wrapData->TypeInfos[2];
    auto TIp3 = wrapData->TypeInfos[3];
    auto TIp5 = wrapData->TypeInfos[4];
    auto TIp6 = wrapData->TypeInfos[5];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    int _sv4 = apis->get_arg(info, 4);
    int _sv5 = apis->get_arg(info, 5);
    int _sv6 = apis->get_arg(info, 6);
    if (checkLuaArgument) {
        if (lua_args_len != 7) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, false))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv2, TIp2, false))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv4))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv5, TIp5, false))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv6, TIp6, true))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);    
    // LuaValToCSVal o/O
    Il2CppObject* p1 = LuaValueToCSRef(apis, TIp1, env, _sv1);
            
    // LuaValToCSVal o/O
    Il2CppObject* p2 = LuaValueToCSRef(apis, TIp2, env, _sv2);
            
    // LuaValToCSVal o/O
    Il2CppObject* p3 = LuaValueToCSRef(apis, TIp3, env, _sv3);
                
    // LuaValToCSVal P any
    bool p4 = converter::Converter<bool>::toCpp(apis, env, _sv4);
            
    // LuaValToCSVal o/O
    Il2CppObject* p5 = LuaValueToCSRef(apis, TIp5, env, _sv5);
             // LuaValToCSVal struct
    S_r4r4r4_* pp6 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, _sv6);
    S_r4r4r4_ p6 = pp6 ? *pp6 : S_r4r4r4_ {};
        
    typedef void (*FuncToCall)(void*,Il2CppString* p1, Il2CppObject* p2, Il2CppObject* p3, Il2CppObject* p4, bool p5, Il2CppObject* p6, struct S_r4r4r4_ p7, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3, p4, p5, p6,  method);
    return true;
}
// Void SetAnimationSpeed(System.String, Single) declare in Assets.Scripts.Framework.AssetService.ActorAsset
bool w_vtsr4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsr4");
    auto TIp0 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv1))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);        
    // LuaValToCSVal P any
    float p1 = converter::Converter<float>::toCpp(apis, env, _sv1);
        
    typedef void (*FuncToCall)(void*,Il2CppString* p1, float p2, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1,  method);
    return true;
}
// Void SetGlobalRtpcValue(System.String, Single, Boolean) declare in Assets.Scripts.Sound.CSoundManager
bool w_vtsr4Db(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsr4Db");
    auto TIp0 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (true) {
        if (lua_args_len < 2 || lua_args_len > 3) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv1))
            return false;
        if (lua_args_len > 2 && !converter::Converter<bool>::accept(apis, env, _sv2))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);        
    // LuaValToCSVal P any
    float p1 = converter::Converter<float>::toCpp(apis, env, _sv1);
         // LuaValToCSVal primitive with default
    bool p2 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 2);
            
    typedef void (*FuncToCall)(void*,Il2CppString* p1, float p2, bool p3, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2,  method);
    return true;
}
// Void PlayStartTime(System.String, Single, System.Action`1[System.Boolean], Boolean, Boolean, Boolean) declare in Timi.TimiAnimation
bool w_vtsr4DoDbDbDb(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsr4DoDbDbDb");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp2 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    int _sv4 = apis->get_arg(info, 4);
    int _sv5 = apis->get_arg(info, 5);
    if (true) {
        if (lua_args_len < 2 || lua_args_len > 6) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv1))
            return false;
        if (lua_args_len > 2 && !DataTransfer::IsAssignable(apis, env, _sv2, TIp2, false))
            return false;
        if (lua_args_len > 3 && !converter::Converter<bool>::accept(apis, env, _sv3))
            return false;
        if (lua_args_len > 4 && !converter::Converter<bool>::accept(apis, env, _sv4))
            return false;
        if (lua_args_len > 5 && !converter::Converter<bool>::accept(apis, env, _sv5))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);        
    // LuaValToCSVal P any
    float p1 = converter::Converter<float>::toCpp(apis, env, _sv1);
            // LuaValToCSVal ref with default
    Il2CppObject* p2 = OptionalParameter<Il2CppObject*>::GetRefType(apis, env, info, method, wrapData, lua_args_len, 2, TIp2); // LuaValToCSVal primitive with default
    bool p3 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 3);
             // LuaValToCSVal primitive with default
    bool p4 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 4);
             // LuaValToCSVal primitive with default
    bool p5 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 5);
            
    typedef void (*FuncToCall)(void*,Il2CppString* p1, float p2, Il2CppObject* p3, bool p4, bool p5, bool p6, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3, p4, p5,  method);
    return true;
}
// Void PlayStartTime(System.String, Single, System.Action`1[System.Boolean], Boolean, Boolean, Boolean, Boolean) declare in UIAnimation
bool w_vtsr4DoDbDbDbDb(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsr4DoDbDbDbDb");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp2 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    int _sv4 = apis->get_arg(info, 4);
    int _sv5 = apis->get_arg(info, 5);
    int _sv6 = apis->get_arg(info, 6);
    if (true) {
        if (lua_args_len < 2 || lua_args_len > 7) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv1))
            return false;
        if (lua_args_len > 2 && !DataTransfer::IsAssignable(apis, env, _sv2, TIp2, false))
            return false;
        if (lua_args_len > 3 && !converter::Converter<bool>::accept(apis, env, _sv3))
            return false;
        if (lua_args_len > 4 && !converter::Converter<bool>::accept(apis, env, _sv4))
            return false;
        if (lua_args_len > 5 && !converter::Converter<bool>::accept(apis, env, _sv5))
            return false;
        if (lua_args_len > 6 && !converter::Converter<bool>::accept(apis, env, _sv6))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);        
    // LuaValToCSVal P any
    float p1 = converter::Converter<float>::toCpp(apis, env, _sv1);
            // LuaValToCSVal ref with default
    Il2CppObject* p2 = OptionalParameter<Il2CppObject*>::GetRefType(apis, env, info, method, wrapData, lua_args_len, 2, TIp2); // LuaValToCSVal primitive with default
    bool p3 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 3);
             // LuaValToCSVal primitive with default
    bool p4 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 4);
             // LuaValToCSVal primitive with default
    bool p5 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 5);
             // LuaValToCSVal primitive with default
    bool p6 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 6);
            
    typedef void (*FuncToCall)(void*,Il2CppString* p1, float p2, Il2CppObject* p3, bool p4, bool p5, bool p6, bool p7, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3, p4, p5, p6,  method);
    return true;
}
// Void SetRTPCValue(System.String, Single, UnityEngine.GameObject, Int32, Int32, Boolean) declare in Assets.Scripts.Sound.CSoundManager
bool w_vtsr4DoDi4Di4Db(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsr4DoDi4Di4Db");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp2 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    int _sv4 = apis->get_arg(info, 4);
    int _sv5 = apis->get_arg(info, 5);
    if (true) {
        if (lua_args_len < 2 || lua_args_len > 6) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv1))
            return false;
        if (lua_args_len > 2 && !DataTransfer::IsAssignable(apis, env, _sv2, TIp2, false))
            return false;
        if (lua_args_len > 3 && !converter::Converter<int32_t>::accept(apis, env, _sv3))
            return false;
        if (lua_args_len > 4 && !converter::Converter<int32_t>::accept(apis, env, _sv4))
            return false;
        if (lua_args_len > 5 && !converter::Converter<bool>::accept(apis, env, _sv5))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);        
    // LuaValToCSVal P any
    float p1 = converter::Converter<float>::toCpp(apis, env, _sv1);
            // LuaValToCSVal ref with default
    Il2CppObject* p2 = OptionalParameter<Il2CppObject*>::GetRefType(apis, env, info, method, wrapData, lua_args_len, 2, TIp2); // LuaValToCSVal primitive with default
    int32_t p3 = OptionalParameter<int32_t>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 3);
             // LuaValToCSVal primitive with default
    int32_t p4 = OptionalParameter<int32_t>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 4);
             // LuaValToCSVal primitive with default
    bool p5 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 5);
            
    typedef void (*FuncToCall)(void*,Il2CppString* p1, float p2, Il2CppObject* p3, int32_t p4, int32_t p5, bool p6, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3, p4, p5,  method);
    return true;
}
// Void PoseWithAnimation(System.String, Single, Boolean) declare in UnityEngine.UnitySkeletonGraphic
bool w_vtsr4b(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsr4b");
    auto TIp0 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv2))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);        
    // LuaValToCSVal P any
    float p1 = converter::Converter<float>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    bool p2 = converter::Converter<bool>::toCpp(apis, env, _sv2);
        
    typedef void (*FuncToCall)(void*,Il2CppString* p1, float p2, bool p3, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2,  method);
    return true;
}
// Void CrossFade(System.String, Single, UnityEngine.PlayMode) declare in UnityEngine.Animation
bool w_vtsr4i4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsr4i4");
    auto TIp0 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv2))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);        
    // LuaValToCSVal P any
    float p1 = converter::Converter<float>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    int32_t p2 = converter::Converter<int32_t>::toCpp(apis, env, _sv2);
        
    typedef void (*FuncToCall)(void*,Il2CppString* p1, float p2, int32_t p3, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2,  method);
    return true;
}
// Void SetRtpcValue(System.String, Single, UnityEngine.GameObject, Boolean) declare in Assets.Scripts.Sound.CSoundManager
bool w_vtsr4oDb(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsr4oDb");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp2 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    if (true) {
        if (lua_args_len < 3 || lua_args_len > 4) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv1))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv2, TIp2, false))
            return false;
        if (lua_args_len > 3 && !converter::Converter<bool>::accept(apis, env, _sv3))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);        
    // LuaValToCSVal P any
    float p1 = converter::Converter<float>::toCpp(apis, env, _sv1);
            
    // LuaValToCSVal o/O
    Il2CppObject* p2 = LuaValueToCSRef(apis, TIp2, env, _sv2);
         // LuaValToCSVal primitive with default
    bool p3 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 3);
            
    typedef void (*FuncToCall)(void*,Il2CppString* p1, float p2, Il2CppObject* p3, bool p4, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3,  method);
    return true;
}
// Void Blend(System.String, Single, Single) declare in UnityEngine.Animation
bool w_vtsr4r4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsr4r4");
    auto TIp0 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv2))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);        
    // LuaValToCSVal P any
    float p1 = converter::Converter<float>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    float p2 = converter::Converter<float>::toCpp(apis, env, _sv2);
        
    typedef void (*FuncToCall)(void*,Il2CppString* p1, float p2, float p3, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2,  method);
    return true;
}
// Void PlayNormalizedTime(System.String, Single, Single, System.Action`1[System.Boolean], Boolean, Boolean, Boolean) declare in Timi.TimiAnimation
bool w_vtsr4r4DoDbDbDb(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsr4r4DoDbDbDb");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp3 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    int _sv4 = apis->get_arg(info, 4);
    int _sv5 = apis->get_arg(info, 5);
    int _sv6 = apis->get_arg(info, 6);
    if (true) {
        if (lua_args_len < 3 || lua_args_len > 7) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv2))
            return false;
        if (lua_args_len > 3 && !DataTransfer::IsAssignable(apis, env, _sv3, TIp3, false))
            return false;
        if (lua_args_len > 4 && !converter::Converter<bool>::accept(apis, env, _sv4))
            return false;
        if (lua_args_len > 5 && !converter::Converter<bool>::accept(apis, env, _sv5))
            return false;
        if (lua_args_len > 6 && !converter::Converter<bool>::accept(apis, env, _sv6))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);        
    // LuaValToCSVal P any
    float p1 = converter::Converter<float>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    float p2 = converter::Converter<float>::toCpp(apis, env, _sv2);
            // LuaValToCSVal ref with default
    Il2CppObject* p3 = OptionalParameter<Il2CppObject*>::GetRefType(apis, env, info, method, wrapData, lua_args_len, 3, TIp3); // LuaValToCSVal primitive with default
    bool p4 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 4);
             // LuaValToCSVal primitive with default
    bool p5 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 5);
             // LuaValToCSVal primitive with default
    bool p6 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 6);
            
    typedef void (*FuncToCall)(void*,Il2CppString* p1, float p2, float p3, Il2CppObject* p4, bool p5, bool p6, bool p7, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3, p4, p5, p6,  method);
    return true;
}
// Void PlayNormalizedTime(System.String, Single, Single, System.Action`1[System.Boolean], Boolean, Boolean, Boolean, Boolean) declare in UIAnimation
bool w_vtsr4r4DoDbDbDbDb(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsr4r4DoDbDbDbDb");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp3 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    int _sv4 = apis->get_arg(info, 4);
    int _sv5 = apis->get_arg(info, 5);
    int _sv6 = apis->get_arg(info, 6);
    int _sv7 = apis->get_arg(info, 7);
    if (true) {
        if (lua_args_len < 3 || lua_args_len > 8) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv2))
            return false;
        if (lua_args_len > 3 && !DataTransfer::IsAssignable(apis, env, _sv3, TIp3, false))
            return false;
        if (lua_args_len > 4 && !converter::Converter<bool>::accept(apis, env, _sv4))
            return false;
        if (lua_args_len > 5 && !converter::Converter<bool>::accept(apis, env, _sv5))
            return false;
        if (lua_args_len > 6 && !converter::Converter<bool>::accept(apis, env, _sv6))
            return false;
        if (lua_args_len > 7 && !converter::Converter<bool>::accept(apis, env, _sv7))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);        
    // LuaValToCSVal P any
    float p1 = converter::Converter<float>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    float p2 = converter::Converter<float>::toCpp(apis, env, _sv2);
            // LuaValToCSVal ref with default
    Il2CppObject* p3 = OptionalParameter<Il2CppObject*>::GetRefType(apis, env, info, method, wrapData, lua_args_len, 3, TIp3); // LuaValToCSVal primitive with default
    bool p4 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 4);
             // LuaValToCSVal primitive with default
    bool p5 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 5);
             // LuaValToCSVal primitive with default
    bool p6 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 6);
             // LuaValToCSVal primitive with default
    bool p7 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 7);
            
    typedef void (*FuncToCall)(void*,Il2CppString* p1, float p2, float p3, Il2CppObject* p4, bool p5, bool p6, bool p7, bool p8, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3, p4, p5, p6, p7,  method);
    return true;
}
// Void SetOverrideTag(System.String, System.String) declare in UnityEngine.Material
bool w_vtss(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtss");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp1 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv1))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);    // LuaValToCSVal s
    Il2CppString* p1 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv1);
    typedef void (*FuncToCall)(void*,Il2CppString* p1, Il2CppString* p2, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1,  method);
    return true;
}
// Void AlertAndStat(System.String, System.String, System.Collections.Generic.Dictionary`2[System.String,System.String]) declare in Assets.Scripts.Reporter
bool w_vtssDo(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtssDo");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp1 = wrapData->TypeInfos[1];
    auto TIp2 = wrapData->TypeInfos[2];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (true) {
        if (lua_args_len < 2 || lua_args_len > 3) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv1))
            return false;
        if (lua_args_len > 2 && !DataTransfer::IsAssignable(apis, env, _sv2, TIp2, false))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);    // LuaValToCSVal s
    Il2CppString* p1 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv1);    // LuaValToCSVal ref with default
    Il2CppObject* p2 = OptionalParameter<Il2CppObject*>::GetRefType(apis, env, info, method, wrapData, lua_args_len, 2, TIp2);
    typedef void (*FuncToCall)(void*,Il2CppString* p1, Il2CppString* p2, Il2CppObject* p3, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2,  method);
    return true;
}
// Void SetLayer(UnityEngine.GameObject, System.String, System.String, Boolean) declare in ExtGameObject
bool w_vtssb(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtssb");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp1 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv2))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);    // LuaValToCSVal s
    Il2CppString* p1 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv1);        
    // LuaValToCSVal P any
    bool p2 = converter::Converter<bool>::toCpp(apis, env, _sv2);
        
    typedef void (*FuncToCall)(void*,Il2CppString* p1, Il2CppString* p2, bool p3, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2,  method);
    return true;
}
// Void PlayCustomSound(System.String, System.String, Int32) declare in Assets.Scripts.Sound.CSoundManager
bool w_vtssi4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtssi4");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp1 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv2))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);    // LuaValToCSVal s
    Il2CppString* p1 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv1);        
    // LuaValToCSVal P any
    int32_t p2 = converter::Converter<int32_t>::toCpp(apis, env, _sv2);
        
    typedef void (*FuncToCall)(void*,Il2CppString* p1, Il2CppString* p2, int32_t p3, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2,  method);
    return true;
}
// Void LoadActorAsync(System.String, System.String, Int32, Assets.Scripts.Framework.AssetService.LifeType, System.String, Int32) declare in Assets.Scripts.Framework.AssetService.AssetService
bool w_vtssi4i1DsDi4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtssi4i1DsDi4");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp1 = wrapData->TypeInfos[1];
    auto TIp4 = wrapData->TypeInfos[2];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    int _sv4 = apis->get_arg(info, 4);
    int _sv5 = apis->get_arg(info, 5);
    if (true) {
        if (lua_args_len < 4 || lua_args_len > 6) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv2))
            return false;
        if (!converter::Converter<int8_t>::accept(apis, env, _sv3))
            return false;
        if (lua_args_len > 4 && !converter::Converter<Il2CppString*>::accept(apis, env, _sv4))
            return false;
        if (lua_args_len > 5 && !converter::Converter<int32_t>::accept(apis, env, _sv5))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);    // LuaValToCSVal s
    Il2CppString* p1 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv1);        
    // LuaValToCSVal P any
    int32_t p2 = converter::Converter<int32_t>::toCpp(apis, env, _sv2);
                
    // LuaValToCSVal P any
    int8_t p3 = converter::Converter<int8_t>::toCpp(apis, env, _sv3);
            // LuaValToCSVal string with default
    Il2CppString* p4 = OptionalParameter<Il2CppString*>::GetString(apis, env, info, method, wrapData, lua_args_len, 4); // LuaValToCSVal primitive with default
    int32_t p5 = OptionalParameter<int32_t>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 5);
            
    typedef void (*FuncToCall)(void*,Il2CppString* p1, Il2CppString* p2, int32_t p3, int8_t p4, Il2CppString* p5, int32_t p6, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3, p4, p5,  method);
    return true;
}
// Void ClearCache(System.String, System.String, Int32, System.String) declare in Assets.Scripts.Framework.AssetService.AssetService
bool w_vtssi4s(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtssi4s");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp1 = wrapData->TypeInfos[1];
    auto TIp3 = wrapData->TypeInfos[2];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    if (checkLuaArgument) {
        if (lua_args_len != 4) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv2))
            return false;
        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv3))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);    // LuaValToCSVal s
    Il2CppString* p1 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv1);        
    // LuaValToCSVal P any
    int32_t p2 = converter::Converter<int32_t>::toCpp(apis, env, _sv2);
            // LuaValToCSVal s
    Il2CppString* p3 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv3);
    typedef void (*FuncToCall)(void*,Il2CppString* p1, Il2CppString* p2, int32_t p3, Il2CppString* p4, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3,  method);
    return true;
}
// Void CompressFileAsync(System.String, System.String, System.Action`1[System.Boolean]) declare in Assets.Scripts.Common.UploaderAux
bool w_vtsso(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsso");
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

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv1))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv2, TIp2, false))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);    // LuaValToCSVal s
    Il2CppString* p1 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv1);    
    // LuaValToCSVal o/O
    Il2CppObject* p2 = LuaValueToCSRef(apis, TIp2, env, _sv2);
        
    typedef void (*FuncToCall)(void*,Il2CppString* p1, Il2CppString* p2, Il2CppObject* p3, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2,  method);
    return true;
}
// Void ShowHealthBarTopTooltip(System.String, UInt32, XLua.LuaTable) declare in Assets.Scripts.GameLogic.Hud3D
bool w_vtsu4o(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtsu4o");
    auto TIp0 = wrapData->TypeInfos[0];
    auto TIp2 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv1))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv2, TIp2, false))
            return false;        
    }
    // LuaValToCSVal s
    Il2CppString* p0 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv0);        
    // LuaValToCSVal P any
    uint32_t p1 = converter::Converter<uint32_t>::toCpp(apis, env, _sv1);
            
    // LuaValToCSVal o/O
    Il2CppObject* p2 = LuaValueToCSRef(apis, TIp2, env, _sv2);
        
    typedef void (*FuncToCall)(void*,Il2CppString* p1, uint32_t p2, Il2CppObject* p3, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2,  method);
    return true;
}
// Void EnterPhase(Byte) declare in Assets.Scripts.GameLogic.Project8RoundStateFlow
bool w_vtu1(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtu1");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    if (checkLuaArgument) {
        if (lua_args_len != 1) 
            return false;

        if (!converter::Converter<uint8_t>::accept(apis, env, _sv0))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint8_t p0 = converter::Converter<uint8_t>::toCpp(apis, env, _sv0);
        
    typedef void (*FuncToCall)(void*,uint8_t p1, const void* method);
    ((FuncToCall)methodPointer)(self, p0,  method);
    return true;
}
// Void SetSynchrConfigure(UInt32) declare in Assets.Scripts.Framework.FrameSynchr
bool w_vtu4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtu4");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    if (checkLuaArgument) {
        if (lua_args_len != 1) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
        
    typedef void (*FuncToCall)(void*,uint32_t p1, const void* method);
    ((FuncToCall)methodPointer)(self, p0,  method);
    return true;
}
// Void RemoveQueue(UInt32, Boolean) declare in Assets.Scripts.UI.UIPlayQueueManager
bool w_vtu4Db(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtu4Db");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (true) {
        if (lua_args_len < 1 || lua_args_len > 2) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (lua_args_len > 1 && !converter::Converter<bool>::accept(apis, env, _sv1))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
         // LuaValToCSVal primitive with default
    bool p1 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 1);
            
    typedef void (*FuncToCall)(void*,uint32_t p1, bool p2, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1,  method);
    return true;
}
// Void StopEvent(UInt32, Int32) declare in Assets.Scripts.Sound.CSoundManager
bool w_vtu4Di4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtu4Di4");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (true) {
        if (lua_args_len < 1 || lua_args_len > 2) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (lua_args_len > 1 && !converter::Converter<int32_t>::accept(apis, env, _sv1))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
         // LuaValToCSVal primitive with default
    int32_t p1 = OptionalParameter<int32_t>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 1);
            
    typedef void (*FuncToCall)(void*,uint32_t p1, int32_t p2, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1,  method);
    return true;
}
// Void DestroyGameObject(UInt32, UnityObjectTypeEnum, Boolean) declare in UnityObjMgr
bool w_vtu4Di4Db(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtu4Di4Db");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (true) {
        if (lua_args_len < 1 || lua_args_len > 3) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (lua_args_len > 1 && !converter::Converter<int32_t>::accept(apis, env, _sv1))
            return false;
        if (lua_args_len > 2 && !converter::Converter<bool>::accept(apis, env, _sv2))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
         // LuaValToCSVal primitive with default
    int32_t p1 = OptionalParameter<int32_t>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 1);
             // LuaValToCSVal primitive with default
    bool p2 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 2);
            
    typedef void (*FuncToCall)(void*,uint32_t p1, int32_t p2, bool p3, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2,  method);
    return true;
}
// Void PauseEvent(UInt32, UnityEngine.GameObject) declare in Assets.Scripts.Sound.CSoundManager
bool w_vtu4Do(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtu4Do");
    auto TIp1 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (true) {
        if (lua_args_len < 1 || lua_args_len > 2) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (lua_args_len > 1 && !DataTransfer::IsAssignable(apis, env, _sv1, TIp1, false))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
            // LuaValToCSVal ref with default
    Il2CppObject* p1 = OptionalParameter<Il2CppObject*>::GetRefType(apis, env, info, method, wrapData, lua_args_len, 1, TIp1);
    typedef void (*FuncToCall)(void*,uint32_t p1, Il2CppObject* p2, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1,  method);
    return true;
}
// Void RecordGoldInfo(UInt32, stGoldDetailInfo ByRef) declare in GameStatisticData
bool w_vtu4PS_u1u1u1u1u1u1ooo_(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtu4PS_u1u1u1u1u1u1ooo_");
    AutoValueScope value_scope(apis, env);
    auto TIp1 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!apis->is_object(env, _sv1)) return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
             
    // LuaValToCSVal Pstruct
    S_u1u1u1u1u1u1ooo_* p1 = DataTransfer::GetPointer<S_u1u1u1u1u1u1ooo_>(apis, env, apis->unboxing(env, _sv1)); // valuetype ref
    S_u1u1u1u1u1u1ooo_ up1;
    if (!p1) {
        memset(&up1, 0, sizeof(p1));
        p1 = &up1;
    }
        
    typedef void (*FuncToCall)(void*,uint32_t p1, struct S_u1u1u1u1u1u1ooo_* p2, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1,  method);                
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

	apis->add_return(info, ret1);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Void ShowOutlineEffect(UInt32, VInt2, Boolean, Boolean) declare in Assets.Scripts.GameSystem.Project8UINewbie
bool w_vtu4S_i4i4_bb(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtu4S_i4i4_bb");
    auto TIp1 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    if (checkLuaArgument) {
        if (lua_args_len != 4) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, true))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv2))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv3))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
             // LuaValToCSVal struct
    S_i4i4_* pp1 = DataTransfer::GetPointer<S_i4i4_>(apis, env, _sv1);
    S_i4i4_ p1 = pp1 ? *pp1 : S_i4i4_ {};
                
    // LuaValToCSVal P any
    bool p2 = converter::Converter<bool>::toCpp(apis, env, _sv2);
                
    // LuaValToCSVal P any
    bool p3 = converter::Converter<bool>::toCpp(apis, env, _sv3);
        
    typedef void (*FuncToCall)(void*,uint32_t p1, struct S_i4i4_ p2, bool p3, bool p4, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3,  method);
    return true;
}
// Void OnCardDragBegin(UInt32, UnityEngine.Vector2) declare in Assets.Scripts.UI.InTheGame.Standard.UIEquip
bool w_vtu4S_r4r4_(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtu4S_r4r4_");
    auto TIp1 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, true))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
             // LuaValToCSVal struct
    S_r4r4_* pp1 = DataTransfer::GetPointer<S_r4r4_>(apis, env, _sv1);
    S_r4r4_ p1 = pp1 ? *pp1 : S_r4r4_ {};
        
    typedef void (*FuncToCall)(void*,uint32_t p1, struct S_r4r4_ p2, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1,  method);
    return true;
}
// Void AddScaleChange(UInt32, UnityEngine.Vector3) declare in Assets.Scripts.GameLogic.ActorMeshComponent
bool w_vtu4S_r4r4r4_(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtu4S_r4r4r4_");
    auto TIp1 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, true))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
             // LuaValToCSVal struct
    S_r4r4r4_* pp1 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, _sv1);
    S_r4r4r4_ p1 = pp1 ? *pp1 : S_r4r4r4_ {};
        
    typedef void (*FuncToCall)(void*,uint32_t p1, struct S_r4r4r4_ p2, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1,  method);
    return true;
}
// Void NtfSetUnityObjectGlobalPosition(UInt32, UnityEngine.Vector3, UnityEngine.Vector3) declare in UnityObjMgr
bool w_vtu4S_r4r4r4_S_r4r4r4_(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtu4S_r4r4r4_S_r4r4r4_");
    auto TIp1 = wrapData->TypeInfos[0];
    auto TIp2 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, true))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv2, TIp2, true))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
             // LuaValToCSVal struct
    S_r4r4r4_* pp1 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, _sv1);
    S_r4r4r4_ p1 = pp1 ? *pp1 : S_r4r4r4_ {};
             // LuaValToCSVal struct
    S_r4r4r4_* pp2 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, _sv2);
    S_r4r4r4_ p2 = pp2 ? *pp2 : S_r4r4r4_ {};
        
    typedef void (*FuncToCall)(void*,uint32_t p1, struct S_r4r4r4_ p2, struct S_r4r4r4_ p3, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2,  method);
    return true;
}
// Void NtfSetUnityObjectLocalRotation(UInt32, UnityEngine.Quaternion) declare in UnityObjMgr
bool w_vtu4S_r4r4r4r4_(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtu4S_r4r4r4r4_");
    auto TIp1 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, true))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
             // LuaValToCSVal struct
    S_r4r4r4r4_* pp1 = DataTransfer::GetPointer<S_r4r4r4r4_>(apis, env, _sv1);
    S_r4r4r4r4_ p1 = pp1 ? *pp1 : S_r4r4r4r4_ {};
        
    typedef void (*FuncToCall)(void*,uint32_t p1, struct S_r4r4r4r4_ p2, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1,  method);
    return true;
}
// Void CullLayerMask(UInt32, Assets.Scripts.GameSystem.CullData, Boolean) declare in Assets.Scripts.GameSystem.UICameraCullingManager
bool w_vtu4S_u4bbbi4_Db(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtu4S_u4bbbi4_Db");
    auto TIp1 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (true) {
        if (lua_args_len < 2 || lua_args_len > 3) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, true))
            return false;
        if (lua_args_len > 2 && !converter::Converter<bool>::accept(apis, env, _sv2))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
             // LuaValToCSVal struct
    S_u4bbbi4_* pp1 = DataTransfer::GetPointer<S_u4bbbi4_>(apis, env, _sv1);
    S_u4bbbi4_ p1 = pp1 ? *pp1 : S_u4bbbi4_ {};
         // LuaValToCSVal primitive with default
    bool p2 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 2);
            
    typedef void (*FuncToCall)(void*,uint32_t p1, struct S_u4bbbi4_ p2, bool p3, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2,  method);
    return true;
}
// Void NtfSetUnityObjectTag(UInt32, StringId, Boolean) declare in UnityObjMgr
bool w_vtu4S_u8_b(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtu4S_u8_b");
    auto TIp1 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, true))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv2))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
             // LuaValToCSVal struct
    S_u8_* pp1 = DataTransfer::GetPointer<S_u8_>(apis, env, _sv1);
    S_u8_ p1 = pp1 ? *pp1 : S_u8_ {};
                
    // LuaValToCSVal P any
    bool p2 = converter::Converter<bool>::toCpp(apis, env, _sv2);
        
    typedef void (*FuncToCall)(void*,uint32_t p1, struct S_u8_ p2, bool p3, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2,  method);
    return true;
}
// Void GetSetScore(UInt32, System.Collections.Generic.HashSet`1[PooledCollections.PoolObjHandle`1[Assets.Scripts.GameLogic.ActorLinker]] ByRef, System.Collections.Generic.HashSet`1[PooledCollections.PoolObjHandle`1[Assets.Scripts.GameLogic.ActorLinker]] ByRef) declare in Assets.Scripts.GameLogic.BattleFloatActorComponent
bool w_vtu4ToTo(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtu4ToTo");
    AutoValueScope value_scope(apis, env);
    auto TIp1 = wrapData->TypeInfos[0];
    auto TIp2 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len < 2 || lua_args_len > 3) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
             // LuaValToCSVal Po/PO
    Il2CppObject* up1 = DataTransfer::GetPointer<Il2CppObject>(apis, env, apis->unboxing(env, _sv1)); // object ret
    Il2CppObject** p1 = &up1;
             // LuaValToCSVal Po/PO
    Il2CppObject* up2 = DataTransfer::GetPointer<Il2CppObject>(apis, env, apis->unboxing(env, _sv2)); // object ret
    Il2CppObject** p2 = &up2;
        
    typedef void (*FuncToCall)(void*,uint32_t p1, void* p2, void* p3, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2,  method);
	int ret1 = CSRefToLuaValue(apis, env, TIp1, *p1);
	int ret2 = CSRefToLuaValue(apis, env, TIp2, *p2);
	apis->add_return(info, ret1);
	apis->add_return(info, ret2);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Void OnChessPlayerTeleport(UInt32, Boolean) declare in Assets.Scripts.GameLogic.Project8Logic
bool w_vtu4b(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtu4b");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv1))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    bool p1 = converter::Converter<bool>::toCpp(apis, env, _sv1);
        
    typedef void (*FuncToCall)(void*,uint32_t p1, bool p2, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1,  method);
    return true;
}
// Void PreloadPlayerReference(UInt32, Boolean, Int32) declare in Assets.Scripts.GameSystem.LogicComponentPerformance
bool w_vtu4bi4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtu4bi4");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv2))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    bool p1 = converter::Converter<bool>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    int32_t p2 = converter::Converter<int32_t>::toCpp(apis, env, _sv2);
        
    typedef void (*FuncToCall)(void*,uint32_t p1, bool p2, int32_t p3, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2,  method);
    return true;
}
// Void ShowLordToast(UInt32, Boolean, System.String, Int32, UnityEngine.Vector2) declare in Assets.Scripts.GameSystem.Project8UINewbie
bool w_vtu4bsi4S_r4r4_(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtu4bsi4S_r4r4_");
    auto TIp2 = wrapData->TypeInfos[0];
    auto TIp4 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    int _sv4 = apis->get_arg(info, 4);
    if (checkLuaArgument) {
        if (lua_args_len != 5) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv2))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv3))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv4, TIp4, true))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    bool p1 = converter::Converter<bool>::toCpp(apis, env, _sv1);
            // LuaValToCSVal s
    Il2CppString* p2 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv2);        
    // LuaValToCSVal P any
    int32_t p3 = converter::Converter<int32_t>::toCpp(apis, env, _sv3);
             // LuaValToCSVal struct
    S_r4r4_* pp4 = DataTransfer::GetPointer<S_r4r4_>(apis, env, _sv4);
    S_r4r4_ p4 = pp4 ? *pp4 : S_r4r4_ {};
        
    typedef void (*FuncToCall)(void*,uint32_t p1, bool p2, Il2CppString* p3, int32_t p4, struct S_r4r4_ p5, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3, p4,  method);
    return true;
}
// Void OnPlayerRoundNum(UInt32, Int32) declare in Assets.Scripts.GameLogic.Project8RoundStateFlow
bool w_vtu4i4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtu4i4");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv1))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    int32_t p1 = converter::Converter<int32_t>::toCpp(apis, env, _sv1);
        
    typedef void (*FuncToCall)(void*,uint32_t p1, int32_t p2, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1,  method);
    return true;
}
// Void Show(UInt32, Int32, OSProto.SyncDynamicDesc, System.Object[]) declare in Assets.Scripts.UI.InTheGame.Standard.UICardMetaTipsPop
bool w_vtu4i4DoDo(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtu4i4DoDo");
    auto TIp2 = wrapData->TypeInfos[0];
    auto TIp3 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    if (true) {
        if (lua_args_len < 2 || lua_args_len > 4) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv1))
            return false;
        if (lua_args_len > 2 && !DataTransfer::IsAssignable(apis, env, _sv2, TIp2, false))
            return false;
        if (lua_args_len > 3 && !DataTransfer::IsAssignable(apis, env, _sv3, TIp3, false))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    int32_t p1 = converter::Converter<int32_t>::toCpp(apis, env, _sv1);
            // LuaValToCSVal ref with default
    Il2CppObject* p2 = OptionalParameter<Il2CppObject*>::GetRefType(apis, env, info, method, wrapData, lua_args_len, 2, TIp2);    // LuaValToCSVal ref with default
    Il2CppObject* p3 = OptionalParameter<Il2CppObject*>::GetRefType(apis, env, info, method, wrapData, lua_args_len, 3, TIp3);
    typedef void (*FuncToCall)(void*,uint32_t p1, int32_t p2, Il2CppObject* p3, Il2CppObject* p4, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3,  method);
    return true;
}
// Void NtfSetUnityObjectLayer(UInt32, Int32, Boolean) declare in UnityObjMgr
bool w_vtu4i4b(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtu4i4b");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv2))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    int32_t p1 = converter::Converter<int32_t>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    bool p2 = converter::Converter<bool>::toCpp(apis, env, _sv2);
        
    typedef void (*FuncToCall)(void*,uint32_t p1, int32_t p2, bool p3, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2,  method);
    return true;
}
// Void SetCameraFollowLerpParam(UInt32, Int32, Int32) declare in Moba_Camera
bool w_vtu4i4i4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtu4i4i4");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv2))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    int32_t p1 = converter::Converter<int32_t>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    int32_t p2 = converter::Converter<int32_t>::toCpp(apis, env, _sv2);
        
    typedef void (*FuncToCall)(void*,uint32_t p1, int32_t p2, int32_t p3, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2,  method);
    return true;
}
// Void AddAnimInfoNew(UInt32, Assets.Scripts.UI.InTheGame.PlayerRank.enItemGetAnimType, Int32, Int32) declare in Assets.Scripts.GameSystem.Project8UIPlayerRank
bool w_vtu4i4i4Di4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtu4i4i4Di4");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    if (true) {
        if (lua_args_len < 3 || lua_args_len > 4) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv2))
            return false;
        if (lua_args_len > 3 && !converter::Converter<int32_t>::accept(apis, env, _sv3))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    int32_t p1 = converter::Converter<int32_t>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    int32_t p2 = converter::Converter<int32_t>::toCpp(apis, env, _sv2);
         // LuaValToCSVal primitive with default
    int32_t p3 = OptionalParameter<int32_t>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 3);
            
    typedef void (*FuncToCall)(void*,uint32_t p1, int32_t p2, int32_t p3, int32_t p4, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3,  method);
    return true;
}
// Void UpdatePlayerIdRoundState(UInt32, Int32, Int32, Int32, Int32, Int32) declare in Assets.Scripts.GameLogic.Project8RoundStateFlow
bool w_vtu4i4i4i4i4i4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtu4i4i4i4i4i4");

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

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv2))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv3))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv4))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv5))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    int32_t p1 = converter::Converter<int32_t>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    int32_t p2 = converter::Converter<int32_t>::toCpp(apis, env, _sv2);
                
    // LuaValToCSVal P any
    int32_t p3 = converter::Converter<int32_t>::toCpp(apis, env, _sv3);
                
    // LuaValToCSVal P any
    int32_t p4 = converter::Converter<int32_t>::toCpp(apis, env, _sv4);
                
    // LuaValToCSVal P any
    int32_t p5 = converter::Converter<int32_t>::toCpp(apis, env, _sv5);
        
    typedef void (*FuncToCall)(void*,uint32_t p1, int32_t p2, int32_t p3, int32_t p4, int32_t p5, int32_t p6, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3, p4, p5,  method);
    return true;
}
// Void SetPlayerPickCard(UInt32, Int32, System.String) declare in Assets.Scripts.GameSystem.Project8UINewbie
bool w_vtu4i4s(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtu4i4s");
    auto TIp2 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv2))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    int32_t p1 = converter::Converter<int32_t>::toCpp(apis, env, _sv1);
            // LuaValToCSVal s
    Il2CppString* p2 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv2);
    typedef void (*FuncToCall)(void*,uint32_t p1, int32_t p2, Il2CppString* p3, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2,  method);
    return true;
}
// Void GetLifeParams(UInt32, ResData.ActorType, Byte, Boolean, Assets.Scripts.Framework.AssetService.LifeType ByRef, System.String ByRef, Int32 ByRef) declare in Assets.Scripts.GameSystem.LogicComponentPerformance
bool w_vtu4i4u1bPi1PsPi4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtu4i4u1bPi1PsPi4");
    AutoValueScope value_scope(apis, env);
    auto TIp5 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    int _sv4 = apis->get_arg(info, 4);
    int _sv5 = apis->get_arg(info, 5);
    int _sv6 = apis->get_arg(info, 6);
    if (checkLuaArgument) {
        if (lua_args_len != 7) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<uint8_t>::accept(apis, env, _sv2))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv3))
            return false;
        if (!apis->is_object(env, _sv4)) return false;
        if (!apis->is_object(env, _sv5)) return false;
        if (!apis->is_object(env, _sv6)) return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    int32_t p1 = converter::Converter<int32_t>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    uint8_t p2 = converter::Converter<uint8_t>::toCpp(apis, env, _sv2);
                
    // LuaValToCSVal P any
    bool p3 = converter::Converter<bool>::toCpp(apis, env, _sv3);
             
    // LuaValToCSVal P primitive
    int8_t up4 = 0;
    if (4 < lua_args_len)
        up4 = converter::Converter<std::reference_wrapper<int8_t>>::toCpp(apis, env, _sv4);
    int8_t* p4 = &up4;
     // LuaValToCSVal Ps
    Il2CppString* up5 = converter::Converter<std::reference_wrapper<Il2CppString*>>::toCpp(apis, env, _sv5); // string ref
    Il2CppString** p5 = &up5;
             
    // LuaValToCSVal P primitive
    int32_t up6 = 0;
    if (6 < lua_args_len)
        up6 = converter::Converter<std::reference_wrapper<int32_t>>::toCpp(apis, env, _sv6);
    int32_t* p6 = &up6;

    typedef void (*FuncToCall)(void*,uint32_t p1, int32_t p2, uint8_t p3, bool p4, int8_t* p5, Il2CppString** p6, int32_t* p7, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3, p4, p5, p6,  method);
	int ret4 = converter::Converter<int8_t>::toScript(apis, env, *p4);
	int ret5 = converter::Converter<Il2CppString*>::toScript(apis, env, *p5);
	int ret6 = converter::Converter<int32_t>::toScript(apis, env, *p6);
	apis->add_return(info, ret4);
	apis->add_return(info, ret5);
	apis->add_return(info, ret6);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Void SetActorDamageInfo(UInt32, Int32[]) declare in Assets.Scripts.UI.InGameCommon.UIPropData
bool w_vtu4o(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtu4o");
    auto TIp1 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, false))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
            
    // LuaValToCSVal o/O
    Il2CppObject* p1 = LuaValueToCSRef(apis, TIp1, env, _sv1);
        
    typedef void (*FuncToCall)(void*,uint32_t p1, Il2CppObject* p2, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1,  method);
    return true;
}
// Void RecordPos(UInt32, UnityEngine.RectTransform, Assets.Scripts.GameSystem.PosRecordType) declare in Assets.Scripts.GameSystem.UIComponentArtEffect
bool w_vtu4oi4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtu4oi4");
    auto TIp1 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, false))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv2))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
            
    // LuaValToCSVal o/O
    Il2CppObject* p1 = LuaValueToCSRef(apis, TIp1, env, _sv1);
                
    // LuaValToCSVal P any
    int32_t p2 = converter::Converter<int32_t>::toCpp(apis, env, _sv2);
        
    typedef void (*FuncToCall)(void*,uint32_t p1, Il2CppObject* p2, int32_t p3, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2,  method);
    return true;
}
// Void GetRecommendHeroForEquip(UInt32, System.Collections.Generic.List`1[Assets.Scripts.GameLogic.ChessAreaInfo], System.Collections.Generic.Dictionary`2[PooledCollections.PoolObjHandle`1[Assets.Scripts.GameLogic.ActorLinker],System.Collections.Generic.List`1[Assets.Scripts.GameLogic.Project8EquipDetailInfo]]) declare in Assets.Scripts.GameLogic.Project8Equipment
bool w_vtu4oo(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtu4oo");
    auto TIp1 = wrapData->TypeInfos[0];
    auto TIp2 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, false))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv2, TIp2, false))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
            
    // LuaValToCSVal o/O
    Il2CppObject* p1 = LuaValueToCSRef(apis, TIp1, env, _sv1);
            
    // LuaValToCSVal o/O
    Il2CppObject* p2 = LuaValueToCSRef(apis, TIp2, env, _sv2);
        
    typedef void (*FuncToCall)(void*,uint32_t p1, Il2CppObject* p2, Il2CppObject* p3, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2,  method);
    return true;
}
// Void SetEquipIntroduce(UInt32, System.String) declare in Assets.Scripts.GameLogic.Project8Equipment
bool w_vtu4s(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtu4s");
    auto TIp1 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv1))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
            // LuaValToCSVal s
    Il2CppString* p1 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv1);
    typedef void (*FuncToCall)(void*,uint32_t p1, Il2CppString* p2, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1,  method);
    return true;
}
// Void OnSetChatTip(UInt32, System.String, UInt32) declare in Assets.Scripts.GameSystem.Project8UIPlayerRank
bool w_vtu4su4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtu4su4");
    auto TIp1 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv2))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
            // LuaValToCSVal s
    Il2CppString* p1 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv1);        
    // LuaValToCSVal P any
    uint32_t p2 = converter::Converter<uint32_t>::toCpp(apis, env, _sv2);
        
    typedef void (*FuncToCall)(void*,uint32_t p1, Il2CppString* p2, uint32_t p3, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2,  method);
    return true;
}
// Void NtfProject8OpResult(UInt32, Byte, Int32, Int32) declare in Assets.Scripts.GameLogic.Project8Logic
bool w_vtu4u1i4i4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtu4u1i4i4");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    if (checkLuaArgument) {
        if (lua_args_len != 4) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<uint8_t>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv2))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv3))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    uint8_t p1 = converter::Converter<uint8_t>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    int32_t p2 = converter::Converter<int32_t>::toCpp(apis, env, _sv2);
                
    // LuaValToCSVal P any
    int32_t p3 = converter::Converter<int32_t>::toCpp(apis, env, _sv3);
        
    typedef void (*FuncToCall)(void*,uint32_t p1, uint8_t p2, int32_t p3, int32_t p4, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3,  method);
    return true;
}
// Void OnStartSynchr(UInt32, UInt32) declare in Assets.Scripts.Framework.FrameSynchr
bool w_vtu4u4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtu4u4");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv1))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    uint32_t p1 = converter::Converter<uint32_t>::toCpp(apis, env, _sv1);
        
    typedef void (*FuncToCall)(void*,uint32_t p1, uint32_t p2, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1,  method);
    return true;
}
// Void RecoverUILayerMask(UInt32, UInt32, Boolean) declare in Assets.Scripts.GameSystem.UICameraCullingManager
bool w_vtu4u4Db(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtu4u4Db");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (true) {
        if (lua_args_len < 2 || lua_args_len > 3) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv1))
            return false;
        if (lua_args_len > 2 && !converter::Converter<bool>::accept(apis, env, _sv2))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    uint32_t p1 = converter::Converter<uint32_t>::toCpp(apis, env, _sv1);
         // LuaValToCSVal primitive with default
    bool p2 = OptionalParameter<bool>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 2);
            
    typedef void (*FuncToCall)(void*,uint32_t p1, uint32_t p2, bool p3, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2,  method);
    return true;
}
// Void Init(UInt32, UInt32, PooledCollections.PoolObjHandle`1[Assets.Scripts.GameLogic.ActorLinker], stEquipItem, Int32) declare in Assets.Scripts.UI.InTheGame.Common.UIEquipCommonItem+EquipWithActor
bool w_vtu4u4S_u4o_S_u4u4u4u4u4u4u4u4_Di4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtu4u4S_u4o_S_u4u4u4u4u4u4u4u4_Di4");
    auto TIp2 = wrapData->TypeInfos[0];
    auto TIp3 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    int _sv4 = apis->get_arg(info, 4);
    if (true) {
        if (lua_args_len < 4 || lua_args_len > 5) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv1))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv2, TIp2, true))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv3, TIp3, true))
            return false;
        if (lua_args_len > 4 && !converter::Converter<int32_t>::accept(apis, env, _sv4))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    uint32_t p1 = converter::Converter<uint32_t>::toCpp(apis, env, _sv1);
             // LuaValToCSVal struct
    S_u4o_* pp2 = DataTransfer::GetPointer<S_u4o_>(apis, env, _sv2);
    S_u4o_ p2 = pp2 ? *pp2 : S_u4o_ {};
             // LuaValToCSVal struct
    S_u4u4u4u4u4u4u4u4_* pp3 = DataTransfer::GetPointer<S_u4u4u4u4u4u4u4u4_>(apis, env, _sv3);
    S_u4u4u4u4u4u4u4u4_ p3 = pp3 ? *pp3 : S_u4u4u4u4u4u4u4u4_ {};
         // LuaValToCSVal primitive with default
    int32_t p4 = OptionalParameter<int32_t>::GetPrimitive(apis, env, info, method, wrapData, lua_args_len, 4);
            
    typedef void (*FuncToCall)(void*,uint32_t p1, uint32_t p2, struct S_u4o_ p3, struct S_u4u4u4u4u4u4u4u4_ p4, int32_t p5, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3, p4,  method);
    return true;
}
// Void ChangeActorMesh(UInt32, UInt32, Boolean, Boolean, Int32) declare in Assets.Scripts.GameLogic.ActorMeshComponent
bool w_vtu4u4bbi4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtu4u4bbi4");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    int _sv4 = apis->get_arg(info, 4);
    if (checkLuaArgument) {
        if (lua_args_len != 5) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv2))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv3))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv4))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    uint32_t p1 = converter::Converter<uint32_t>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    bool p2 = converter::Converter<bool>::toCpp(apis, env, _sv2);
                
    // LuaValToCSVal P any
    bool p3 = converter::Converter<bool>::toCpp(apis, env, _sv3);
                
    // LuaValToCSVal P any
    int32_t p4 = converter::Converter<int32_t>::toCpp(apis, env, _sv4);
        
    typedef void (*FuncToCall)(void*,uint32_t p1, uint32_t p2, bool p3, bool p4, int32_t p5, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3, p4,  method);
    return true;
}
// Void CanTakeOffEquipFromLua(UInt32, UInt32, Int32, Boolean) declare in Assets.Scripts.GameLogic.EquipLogic
bool w_vtu4u4i4b(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtu4u4i4b");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    if (checkLuaArgument) {
        if (lua_args_len != 4) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv2))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv3))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    uint32_t p1 = converter::Converter<uint32_t>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    int32_t p2 = converter::Converter<int32_t>::toCpp(apis, env, _sv2);
                
    // LuaValToCSVal P any
    bool p3 = converter::Converter<bool>::toCpp(apis, env, _sv3);
        
    typedef void (*FuncToCall)(void*,uint32_t p1, uint32_t p2, int32_t p3, bool p4, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3,  method);
    return true;
}
// Void EnableFacade(UInt32, UInt32, UInt32) declare in Assets.Scripts.UI.CardComponent.Item.UICardItemShowData
bool w_vtu4u4u4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtu4u4u4");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv2))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    uint32_t p1 = converter::Converter<uint32_t>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    uint32_t p2 = converter::Converter<uint32_t>::toCpp(apis, env, _sv2);
        
    typedef void (*FuncToCall)(void*,uint32_t p1, uint32_t p2, uint32_t p3, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2,  method);
    return true;
}
// Void OnEventTakeOffEquip(UInt32, UInt32, UInt32, UInt32) declare in Assets.Scripts.GameSystem.UIComponentEquip
bool w_vtu4u4u4u4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtu4u4u4u4");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    if (checkLuaArgument) {
        if (lua_args_len != 4) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv2))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv3))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    uint32_t p1 = converter::Converter<uint32_t>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    uint32_t p2 = converter::Converter<uint32_t>::toCpp(apis, env, _sv2);
                
    // LuaValToCSVal P any
    uint32_t p3 = converter::Converter<uint32_t>::toCpp(apis, env, _sv3);
        
    typedef void (*FuncToCall)(void*,uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3,  method);
    return true;
}
// Void GMSetSmoothCameraMoveSpringConstant(UInt32, UInt32, UInt32, UInt32, UInt32, UInt32) declare in Moba_Camera
bool w_vtu4u4u4u4u4u4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtu4u4u4u4u4u4");

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

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv2))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv3))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv4))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv5))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    uint32_t p1 = converter::Converter<uint32_t>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    uint32_t p2 = converter::Converter<uint32_t>::toCpp(apis, env, _sv2);
                
    // LuaValToCSVal P any
    uint32_t p3 = converter::Converter<uint32_t>::toCpp(apis, env, _sv3);
                
    // LuaValToCSVal P any
    uint32_t p4 = converter::Converter<uint32_t>::toCpp(apis, env, _sv4);
                
    // LuaValToCSVal P any
    uint32_t p5 = converter::Converter<uint32_t>::toCpp(apis, env, _sv5);
        
    typedef void (*FuncToCall)(void*,uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1, p2, p3, p4, p5,  method);
    return true;
}
// Void set_overrideSceneCullingMask(UInt64) declare in UnityEngine.Camera
bool w_vtu8(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtu8");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    if (checkLuaArgument) {
        if (lua_args_len != 1) 
            return false;

        if (!converter::Converter<uint64_t>::accept(apis, env, _sv0))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint64_t p0 = converter::Converter<uint64_t>::toCpp(apis, env, _sv0);
        
    typedef void (*FuncToCall)(void*,uint64_t p1, const void* method);
    ((FuncToCall)methodPointer)(self, p0,  method);
    return true;
}
// Void SendBlueprintEvent(UInt64, Byte[]) declare in EventRouter
bool w_vtu8o(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtu8o");
    auto TIp1 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<uint64_t>::accept(apis, env, _sv0))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, false))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint64_t p0 = converter::Converter<uint64_t>::toCpp(apis, env, _sv0);
            
    // LuaValToCSVal o/O
    Il2CppObject* p1 = LuaValueToCSRef(apis, TIp1, env, _sv1);
        
    typedef void (*FuncToCall)(void*,uint64_t p1, Il2CppObject* p2, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1,  method);
    return true;
}
// Void UpdateWithUserTime(UInt64, UInt64) declare in CriWare.CriMana.Player
bool w_vtu8u8(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vtu8u8");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<uint64_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<uint64_t>::accept(apis, env, _sv1))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint64_t p0 = converter::Converter<uint64_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    uint64_t p1 = converter::Converter<uint64_t>::toCpp(apis, env, _sv1);
        
    typedef void (*FuncToCall)(void*,uint64_t p1, uint64_t p2, const void* method);
    ((FuncToCall)methodPointer)(self, p0, p1,  method);
    return true;
}
// Void NtfEnterPhase(Byte) declare in SGC
bool w_vu1(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu1");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    if (checkLuaArgument) {
        if (lua_args_len != 1) 
            return false;

        if (!converter::Converter<uint8_t>::accept(apis, env, _sv0))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint8_t p0 = converter::Converter<uint8_t>::toCpp(apis, env, _sv0);
        
    typedef void (*FuncToCall)(uint8_t p1, const void* method);
    ((FuncToCall)methodPointer)( p0,  method);
    return true;
}
// Void OSG_InvokeImmediateBuffer(UInt16, Void*) declare in SGamePInvoke
bool w_vu2Pv(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu2Pv");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<uint16_t>::accept(apis, env, _sv0))
            return false;
        if (!apis->is_binary(env, _sv1) && !apis->is_null(env, _sv1) && !apis->is_undefined(env, _sv1)) return false;        
    }
        
    // LuaValToCSVal P any
    uint16_t p0 = converter::Converter<uint16_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    void* p1 = DataTransfer::GetPointer<void>(apis, env, _sv1);
        
    typedef void (*FuncToCall)(uint16_t p1, void* p2, const void* method);
    ((FuncToCall)methodPointer)( p0, p1,  method);
    return true;
}
// Void GetPooledMemoryInspect(UInt16, PooledMemoryInspectTypeDelegate) declare in SGWRequest
bool w_vu2o(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu2o");
    auto TIp1 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<uint16_t>::accept(apis, env, _sv0))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, false))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint16_t p0 = converter::Converter<uint16_t>::toCpp(apis, env, _sv0);
            
    // LuaValToCSVal o/O
    Il2CppObject* p1 = LuaValueToCSRef(apis, TIp1, env, _sv1);
        
    typedef void (*FuncToCall)(uint16_t p1, Il2CppObject* p2, const void* method);
    ((FuncToCall)methodPointer)( p0, p1,  method);
    return true;
}
// Void RecoverUICameraMask(UInt32) declare in LuaCallCSharpInteraction
bool w_vu4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    if (checkLuaArgument) {
        if (lua_args_len != 1) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
        
    typedef void (*FuncToCall)(uint32_t p1, const void* method);
    ((FuncToCall)methodPointer)( p0,  method);
    return true;
}
// Void NtfHostWatchPlayerWithFormation(UInt32, GameWatchPlayerInfo ByRef) declare in SGC
bool w_vu4PS_S_o_S_S_u4u1u1i4i4i4o_oS_S_S_u4u4u4u4u4u4u1u1u4u4S_r4r4r4_u4u2i2u1_S_S_i4i4i4_S_r4r4r4_S_i4i4i4_u1u1u1_S_i4i4i4i4i4i4i4i4i4i4_S_oo_S_i4i4__S_u4S_S_u8_u4u4u4u4u4u1u1u1u1_u1u1u1_S_u4S_S_u8_u4u4u4u4u4u1u1u1u1_u1u1u1__u1u1__(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4PS_S_o_S_S_u4u1u1i4i4i4o_oS_S_S_u4u4u4u4u4u4u1u1u4u4S_r4r4r4_u4u2i2u1_S_S_i4i4i4_S_r4r4r4_S_i4i4i4_u1u1u1_S_i4i4i4i4i4i4i4i4i4i4_S_oo_S_i4i4__S_u4S_S_u8_u4u4u4u4u4u1u1u1u1_u1u1u1_S_u4S_S_u8_u4u4u4u4u4u1u1u1u1_u1u1u1__u1u1__");
    AutoValueScope value_scope(apis, env);
    auto TIp1 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!apis->is_object(env, _sv1)) return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
             
    // LuaValToCSVal Pstruct
    S_S_o_S_S_u4u1u1i4i4i4o_oS_S_S_u4u4u4u4u4u4u1u1u4u4S_r4r4r4_u4u2i2u1_S_S_i4i4i4_S_r4r4r4_S_i4i4i4_u1u1u1_S_i4i4i4i4i4i4i4i4i4i4_S_oo_S_i4i4__S_u4S_S_u8_u4u4u4u4u4u1u1u1u1_u1u1u1_S_u4S_S_u8_u4u4u4u4u4u1u1u1u1_u1u1u1__u1u1__* p1 = DataTransfer::GetPointer<S_S_o_S_S_u4u1u1i4i4i4o_oS_S_S_u4u4u4u4u4u4u1u1u4u4S_r4r4r4_u4u2i2u1_S_S_i4i4i4_S_r4r4r4_S_i4i4i4_u1u1u1_S_i4i4i4i4i4i4i4i4i4i4_S_oo_S_i4i4__S_u4S_S_u8_u4u4u4u4u4u1u1u1u1_u1u1u1_S_u4S_S_u8_u4u4u4u4u4u1u1u1u1_u1u1u1__u1u1__>(apis, env, apis->unboxing(env, _sv1)); // valuetype ref
    S_S_o_S_S_u4u1u1i4i4i4o_oS_S_S_u4u4u4u4u4u4u1u1u4u4S_r4r4r4_u4u2i2u1_S_S_i4i4i4_S_r4r4r4_S_i4i4i4_u1u1u1_S_i4i4i4i4i4i4i4i4i4i4_S_oo_S_i4i4__S_u4S_S_u8_u4u4u4u4u4u1u1u1u1_u1u1u1_S_u4S_S_u8_u4u4u4u4u4u1u1u1u1_u1u1u1__u1u1__ up1;
    if (!p1) {
        memset(&up1, 0, sizeof(p1));
        p1 = &up1;
    }
        
    typedef void (*FuncToCall)(uint32_t p1, struct S_S_o_S_S_u4u1u1i4i4i4o_oS_S_S_u4u4u4u4u4u4u1u1u4u4S_r4r4r4_u4u2i2u1_S_S_i4i4i4_S_r4r4r4_S_i4i4i4_u1u1u1_S_i4i4i4i4i4i4i4i4i4i4_S_oo_S_i4i4__S_u4S_S_u8_u4u4u4u4u4u1u1u1u1_u1u1u1_S_u4S_S_u8_u4u4u4u4u4u1u1u1u1_u1u1u1__u1u1__* p2, const void* method);
    ((FuncToCall)methodPointer)( p0, p1,  method);                
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

	apis->add_return(info, ret1);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Void NtfPlayerRandomHp(UInt32, PlayerRandomHpData ByRef) declare in SGC
bool w_vu4PS_i4i4i4i4i4_(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4PS_i4i4i4i4i4_");
    AutoValueScope value_scope(apis, env);
    auto TIp1 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!apis->is_object(env, _sv1)) return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
             
    // LuaValToCSVal Pstruct
    S_i4i4i4i4i4_* p1 = DataTransfer::GetPointer<S_i4i4i4i4i4_>(apis, env, apis->unboxing(env, _sv1)); // valuetype ref
    S_i4i4i4i4i4_ up1;
    if (!p1) {
        memset(&up1, 0, sizeof(p1));
        p1 = &up1;
    }
        
    typedef void (*FuncToCall)(uint32_t p1, struct S_i4i4i4i4i4_* p2, const void* method);
    ((FuncToCall)methodPointer)( p0, p1,  method);                
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

	apis->add_return(info, ret1);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Void NtfCurrencyShopBuyItem(UInt32, Project8BossAwardItems ByRef) declare in SGC
bool w_vu4PS_i4o_(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4PS_i4o_");
    AutoValueScope value_scope(apis, env);
    auto TIp1 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!apis->is_object(env, _sv1)) return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
             
    // LuaValToCSVal Pstruct
    S_i4o_* p1 = DataTransfer::GetPointer<S_i4o_>(apis, env, apis->unboxing(env, _sv1)); // valuetype ref
    S_i4o_ up1;
    if (!p1) {
        memset(&up1, 0, sizeof(p1));
        p1 = &up1;
    }
        
    typedef void (*FuncToCall)(uint32_t p1, struct S_i4o_* p2, const void* method);
    ((FuncToCall)methodPointer)( p0, p1,  method);                
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

	apis->add_return(info, ret1);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Void GetFormationMatchDegree(UInt32, FormationScheme ByRef, FormationMatchDegreeTypeDelegate) declare in SGW
bool w_vu4PS_i4u1o_o(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4PS_i4u1o_o");
    AutoValueScope value_scope(apis, env);
    auto TIp1 = wrapData->TypeInfos[0];
    auto TIp2 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!apis->is_object(env, _sv1)) return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv2, TIp2, false))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
             
    // LuaValToCSVal Pstruct
    S_i4u1o_* p1 = DataTransfer::GetPointer<S_i4u1o_>(apis, env, apis->unboxing(env, _sv1)); // valuetype ref
    S_i4u1o_ up1;
    if (!p1) {
        memset(&up1, 0, sizeof(p1));
        p1 = &up1;
    }
            
    // LuaValToCSVal o/O
    Il2CppObject* p2 = LuaValueToCSRef(apis, TIp2, env, _sv2);
        
    typedef void (*FuncToCall)(uint32_t p1, struct S_i4u1o_* p2, Il2CppObject* p3, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2,  method);                
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

	apis->add_return(info, ret1);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Void NtfPlayUltimateSkillSoundHeros(UInt32, PlayUltimateSkillSoundHeroList ByRef) declare in SGC
bool w_vu4PS_o_(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4PS_o_");
    AutoValueScope value_scope(apis, env);
    auto TIp1 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!apis->is_object(env, _sv1)) return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
             
    // LuaValToCSVal Pstruct
    S_o_* p1 = DataTransfer::GetPointer<S_o_>(apis, env, apis->unboxing(env, _sv1)); // valuetype ref
    S_o_ up1;
    if (!p1) {
        memset(&up1, 0, sizeof(p1));
        p1 = &up1;
    }
        
    typedef void (*FuncToCall)(uint32_t p1, struct S_o_* p2, const void* method);
    ((FuncToCall)methodPointer)( p0, p1,  method);                
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

	apis->add_return(info, ret1);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Void OnActorEquipGridsChangeAll(UInt32, stAllEquipInfo ByRef) declare in SGC
bool w_vu4PS_oo_(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4PS_oo_");
    AutoValueScope value_scope(apis, env);
    auto TIp1 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!apis->is_object(env, _sv1)) return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
             
    // LuaValToCSVal Pstruct
    S_oo_* p1 = DataTransfer::GetPointer<S_oo_>(apis, env, apis->unboxing(env, _sv1)); // valuetype ref
    S_oo_ up1;
    if (!p1) {
        memset(&up1, 0, sizeof(p1));
        p1 = &up1;
    }
        
    typedef void (*FuncToCall)(uint32_t p1, struct S_oo_* p2, const void* method);
    ((FuncToCall)methodPointer)( p0, p1,  method);                
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

	apis->add_return(info, ret1);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Void NtfHeroesInBattleChanged(UInt32, BatchAreaInfo ByRef, UInt32) declare in SGC
bool w_vu4PS_oooi4i4_u4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4PS_oooi4i4_u4");
    AutoValueScope value_scope(apis, env);
    auto TIp1 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!apis->is_object(env, _sv1)) return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv2))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
             
    // LuaValToCSVal Pstruct
    S_oooi4i4_* p1 = DataTransfer::GetPointer<S_oooi4i4_>(apis, env, apis->unboxing(env, _sv1)); // valuetype ref
    S_oooi4i4_ up1;
    if (!p1) {
        memset(&up1, 0, sizeof(p1));
        p1 = &up1;
    }
                
    // LuaValToCSVal P any
    uint32_t p2 = converter::Converter<uint32_t>::toCpp(apis, env, _sv2);
        
    typedef void (*FuncToCall)(uint32_t p1, struct S_oooi4i4_* p2, uint32_t p3, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2,  method);                
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

	apis->add_return(info, ret1);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Void NtfGoldDetailInfoChange(UInt32, stGoldDetailInfo ByRef) declare in SGC
bool w_vu4PS_u1u1u1u1u1u1ooo_(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4PS_u1u1u1u1u1u1ooo_");
    AutoValueScope value_scope(apis, env);
    auto TIp1 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!apis->is_object(env, _sv1)) return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
             
    // LuaValToCSVal Pstruct
    S_u1u1u1u1u1u1ooo_* p1 = DataTransfer::GetPointer<S_u1u1u1u1u1u1ooo_>(apis, env, apis->unboxing(env, _sv1)); // valuetype ref
    S_u1u1u1u1u1u1ooo_ up1;
    if (!p1) {
        memset(&up1, 0, sizeof(p1));
        p1 = &up1;
    }
        
    typedef void (*FuncToCall)(uint32_t p1, struct S_u1u1u1u1u1u1ooo_* p2, const void* method);
    ((FuncToCall)methodPointer)( p0, p1,  method);                
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

	apis->add_return(info, ret1);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Void OnActorEquipGridChange(UInt32, stEquipChangeInfo ByRef) declare in SGC
bool w_vu4PS_u1u2u1u1S_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4__(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4PS_u1u2u1u1S_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4__");
    AutoValueScope value_scope(apis, env);
    auto TIp1 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!apis->is_object(env, _sv1)) return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
             
    // LuaValToCSVal Pstruct
    S_u1u2u1u1S_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4__* p1 = DataTransfer::GetPointer<S_u1u2u1u1S_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4__>(apis, env, apis->unboxing(env, _sv1)); // valuetype ref
    S_u1u2u1u1S_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4__ up1;
    if (!p1) {
        memset(&up1, 0, sizeof(p1));
        p1 = &up1;
    }
        
    typedef void (*FuncToCall)(uint32_t p1, struct S_u1u2u1u1S_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4__* p2, const void* method);
    ((FuncToCall)methodPointer)( p0, p1,  method);                
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

	apis->add_return(info, ret1);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Void NtfAGEProject8PlaySceneAnimTick(UInt32, SceneAnimTickParam ByRef) declare in SGC
bool w_vu4PS_u4S_u8_S_u8_u1u1i4_(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4PS_u4S_u8_S_u8_u1u1i4_");
    AutoValueScope value_scope(apis, env);
    auto TIp1 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!apis->is_object(env, _sv1)) return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
             
    // LuaValToCSVal Pstruct
    S_u4S_u8_S_u8_u1u1i4_* p1 = DataTransfer::GetPointer<S_u4S_u8_S_u8_u1u1i4_>(apis, env, apis->unboxing(env, _sv1)); // valuetype ref
    S_u4S_u8_S_u8_u1u1i4_ up1;
    if (!p1) {
        memset(&up1, 0, sizeof(p1));
        p1 = &up1;
    }
        
    typedef void (*FuncToCall)(uint32_t p1, struct S_u4S_u8_S_u8_u1u1i4_* p2, const void* method);
    ((FuncToCall)methodPointer)( p0, p1,  method);                
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

	apis->add_return(info, ret1);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Void NtfAGEProject8ModifyHudEPEnter(UInt32, ModifyHudEPDurationParam ByRef) declare in SGC
bool w_vu4PS_u4S_u8__(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4PS_u4S_u8__");
    AutoValueScope value_scope(apis, env);
    auto TIp1 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!apis->is_object(env, _sv1)) return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
             
    // LuaValToCSVal Pstruct
    S_u4S_u8__* p1 = DataTransfer::GetPointer<S_u4S_u8__>(apis, env, apis->unboxing(env, _sv1)); // valuetype ref
    S_u4S_u8__ up1;
    if (!p1) {
        memset(&up1, 0, sizeof(p1));
        p1 = &up1;
    }
        
    typedef void (*FuncToCall)(uint32_t p1, struct S_u4S_u8__* p2, const void* method);
    ((FuncToCall)methodPointer)( p0, p1,  method);                
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

	apis->add_return(info, ret1);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Void NtfAGEProject8ModifyHudHPEnter(UInt32, ModifyHudHPParam ByRef) declare in SGC
bool w_vu4PS_u4r4S_u8__(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4PS_u4r4S_u8__");
    AutoValueScope value_scope(apis, env);
    auto TIp1 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!apis->is_object(env, _sv1)) return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
             
    // LuaValToCSVal Pstruct
    S_u4r4S_u8__* p1 = DataTransfer::GetPointer<S_u4r4S_u8__>(apis, env, apis->unboxing(env, _sv1)); // valuetype ref
    S_u4r4S_u8__ up1;
    if (!p1) {
        memset(&up1, 0, sizeof(p1));
        p1 = &up1;
    }
        
    typedef void (*FuncToCall)(uint32_t p1, struct S_u4r4S_u8__* p2, const void* method);
    ((FuncToCall)methodPointer)( p0, p1,  method);                
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

	apis->add_return(info, ret1);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Void NtfPlayerDynamicPart(UInt32, PlayerMetaDynamic ByRef) declare in SGC
bool w_vu4PS_u4u4_(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4PS_u4u4_");
    AutoValueScope value_scope(apis, env);
    auto TIp1 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!apis->is_object(env, _sv1)) return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
             
    // LuaValToCSVal Pstruct
    S_u4u4_* p1 = DataTransfer::GetPointer<S_u4u4_>(apis, env, apis->unboxing(env, _sv1)); // valuetype ref
    S_u4u4_ up1;
    if (!p1) {
        memset(&up1, 0, sizeof(p1));
        p1 = &up1;
    }
        
    typedef void (*FuncToCall)(uint32_t p1, struct S_u4u4_* p2, const void* method);
    ((FuncToCall)methodPointer)( p0, p1,  method);                
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

	apis->add_return(info, ret1);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Void NtfAGEProject8ModifyFieldOpacityEnter(UInt32, ModifyFieldOpacityDurationParam ByRef) declare in SGC
bool w_vu4PS_u4u4i4i4i4i4S_r4r4r4_S_r4r4r4_r4u1_(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4PS_u4u4i4i4i4i4S_r4r4r4_S_r4r4r4_r4u1_");
    AutoValueScope value_scope(apis, env);
    auto TIp1 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!apis->is_object(env, _sv1)) return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
             
    // LuaValToCSVal Pstruct
    S_u4u4i4i4i4i4S_r4r4r4_S_r4r4r4_r4u1_* p1 = DataTransfer::GetPointer<S_u4u4i4i4i4i4S_r4r4r4_S_r4r4r4_r4u1_>(apis, env, apis->unboxing(env, _sv1)); // valuetype ref
    S_u4u4i4i4i4i4S_r4r4r4_S_r4r4r4_r4u1_ up1;
    if (!p1) {
        memset(&up1, 0, sizeof(p1));
        p1 = &up1;
    }
        
    typedef void (*FuncToCall)(uint32_t p1, struct S_u4u4i4i4i4i4S_r4r4r4_S_r4r4r4_r4u1_* p2, const void* method);
    ((FuncToCall)methodPointer)( p0, p1,  method);                
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

	apis->add_return(info, ret1);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Void RandomAnimDurEnter(UInt32, RandomAnimParam ByRef) declare in SGC
bool w_vu4PS_u4u4oS_u8_o_(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4PS_u4u4oS_u8_o_");
    AutoValueScope value_scope(apis, env);
    auto TIp1 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!apis->is_object(env, _sv1)) return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
             
    // LuaValToCSVal Pstruct
    S_u4u4oS_u8_o_* p1 = DataTransfer::GetPointer<S_u4u4oS_u8_o_>(apis, env, apis->unboxing(env, _sv1)); // valuetype ref
    S_u4u4oS_u8_o_ up1;
    if (!p1) {
        memset(&up1, 0, sizeof(p1));
        p1 = &up1;
    }
        
    typedef void (*FuncToCall)(uint32_t p1, struct S_u4u4oS_u8_o_* p2, const void* method);
    ((FuncToCall)methodPointer)( p0, p1,  method);                
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

	apis->add_return(info, ret1);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Void NtfAgeTriggerParticleTick(UInt32, AgeTriggerParticleInfo ByRef) declare in SGC
bool w_vu4PS_u4u4u4u4u4u4S_u8_u1i4i4u1S_S_u8_u4u4u4u4u4u1u1u1u1_S_i4i4i4_S_r4r4r4_S_r4r4r4r4_S_r4r4r4_r4r4r4u1u1u1u1u1u1u1u4u4u1u1u1u1S_r4r4r4_i4u4u4u4u4u1u1u1i4u1u1u4u4r4u4u1u1u1r4_(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4PS_u4u4u4u4u4u4S_u8_u1i4i4u1S_S_u8_u4u4u4u4u4u1u1u1u1_S_i4i4i4_S_r4r4r4_S_r4r4r4r4_S_r4r4r4_r4r4r4u1u1u1u1u1u1u1u4u4u1u1u1u1S_r4r4r4_i4u4u4u4u4u1u1u1i4u1u1u4u4r4u4u1u1u1r4_");
    AutoValueScope value_scope(apis, env);
    auto TIp1 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!apis->is_object(env, _sv1)) return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
             
    // LuaValToCSVal Pstruct
    S_u4u4u4u4u4u4S_u8_u1i4i4u1S_S_u8_u4u4u4u4u4u1u1u1u1_S_i4i4i4_S_r4r4r4_S_r4r4r4r4_S_r4r4r4_r4r4r4u1u1u1u1u1u1u1u4u4u1u1u1u1S_r4r4r4_i4u4u4u4u4u1u1u1i4u1u1u4u4r4u4u1u1u1r4_* p1 = DataTransfer::GetPointer<S_u4u4u4u4u4u4S_u8_u1i4i4u1S_S_u8_u4u4u4u4u4u1u1u1u1_S_i4i4i4_S_r4r4r4_S_r4r4r4r4_S_r4r4r4_r4r4r4u1u1u1u1u1u1u1u4u4u1u1u1u1S_r4r4r4_i4u4u4u4u4u1u1u1i4u1u1u4u4r4u4u1u1u1r4_>(apis, env, apis->unboxing(env, _sv1)); // valuetype ref
    S_u4u4u4u4u4u4S_u8_u1i4i4u1S_S_u8_u4u4u4u4u4u1u1u1u1_S_i4i4i4_S_r4r4r4_S_r4r4r4r4_S_r4r4r4_r4r4r4u1u1u1u1u1u1u1u4u4u1u1u1u1S_r4r4r4_i4u4u4u4u4u1u1u1i4u1u1u4u4r4u4u1u1u1r4_ up1;
    if (!p1) {
        memset(&up1, 0, sizeof(p1));
        p1 = &up1;
    }
        
    typedef void (*FuncToCall)(uint32_t p1, struct S_u4u4u4u4u4u4S_u8_u1i4i4u1S_S_u8_u4u4u4u4u4u1u1u1u1_S_i4i4i4_S_r4r4r4_S_r4r4r4r4_S_r4r4r4_r4r4r4u1u1u1u1u1u1u1u4u4u1u1u1u1S_r4r4r4_i4u4u4u4u4u1u1u1i4u1u1u4u4r4u4u1u1u1r4_* p2, const void* method);
    ((FuncToCall)methodPointer)( p0, p1,  method);                
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

	apis->add_return(info, ret1);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Void NtfProject8EquipItemChanged(UInt32, stEquipItem ByRef) declare in SGC
bool w_vu4PS_u4u4u4u4u4u4u4u4_(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4PS_u4u4u4u4u4u4u4u4_");
    AutoValueScope value_scope(apis, env);
    auto TIp1 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!apis->is_object(env, _sv1)) return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
             
    // LuaValToCSVal Pstruct
    S_u4u4u4u4u4u4u4u4_* p1 = DataTransfer::GetPointer<S_u4u4u4u4u4u4u4u4_>(apis, env, apis->unboxing(env, _sv1)); // valuetype ref
    S_u4u4u4u4u4u4u4u4_ up1;
    if (!p1) {
        memset(&up1, 0, sizeof(p1));
        p1 = &up1;
    }
        
    typedef void (*FuncToCall)(uint32_t p1, struct S_u4u4u4u4u4u4u4u4_* p2, const void* method);
    ((FuncToCall)methodPointer)( p0, p1,  method);                
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

	apis->add_return(info, ret1);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Void GetFormationMatchDegree(UInt32, FormationScheme, FormationMatchDegreeTypeDelegate) declare in SGWRequest
bool w_vu4S_i4u1o_o(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4S_i4u1o_o");
    auto TIp1 = wrapData->TypeInfos[0];
    auto TIp2 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, true))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv2, TIp2, false))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
             // LuaValToCSVal struct
    S_i4u1o_* pp1 = DataTransfer::GetPointer<S_i4u1o_>(apis, env, _sv1);
    S_i4u1o_ p1 = pp1 ? *pp1 : S_i4u1o_ {};
            
    // LuaValToCSVal o/O
    Il2CppObject* p2 = LuaValueToCSRef(apis, TIp2, env, _sv2);
        
    typedef void (*FuncToCall)(uint32_t p1, struct S_i4u1o_ p2, Il2CppObject* p3, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2,  method);
    return true;
}
// Void NtfSetUnityObjectLocalPosition(UInt32, UnityEngine.Vector3) declare in SGC
bool w_vu4S_r4r4r4_(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4S_r4r4r4_");
    auto TIp1 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, true))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
             // LuaValToCSVal struct
    S_r4r4r4_* pp1 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, _sv1);
    S_r4r4r4_ p1 = pp1 ? *pp1 : S_r4r4r4_ {};
        
    typedef void (*FuncToCall)(uint32_t p1, struct S_r4r4r4_ p2, const void* method);
    ((FuncToCall)methodPointer)( p0, p1,  method);
    return true;
}
// Void NtfSetUnityObjectGlobalPosition(UInt32, UnityEngine.Vector3, Boolean, UnityEngine.Vector3) declare in SGC
bool w_vu4S_r4r4r4_bS_r4r4r4_(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4S_r4r4r4_bS_r4r4r4_");
    auto TIp1 = wrapData->TypeInfos[0];
    auto TIp3 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    if (checkLuaArgument) {
        if (lua_args_len != 4) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, true))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv2))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv3, TIp3, true))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
             // LuaValToCSVal struct
    S_r4r4r4_* pp1 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, _sv1);
    S_r4r4r4_ p1 = pp1 ? *pp1 : S_r4r4r4_ {};
                
    // LuaValToCSVal P any
    bool p2 = converter::Converter<bool>::toCpp(apis, env, _sv2);
             // LuaValToCSVal struct
    S_r4r4r4_* pp3 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, _sv3);
    S_r4r4r4_ p3 = pp3 ? *pp3 : S_r4r4r4_ {};
        
    typedef void (*FuncToCall)(uint32_t p1, struct S_r4r4r4_ p2, bool p3, struct S_r4r4r4_ p4, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2, p3,  method);
    return true;
}
// Void NtfSetUnityObjectLocalRotation(UInt32, UnityEngine.Quaternion) declare in SGC
bool w_vu4S_r4r4r4r4_(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4S_r4r4r4r4_");
    auto TIp1 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, true))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
             // LuaValToCSVal struct
    S_r4r4r4r4_* pp1 = DataTransfer::GetPointer<S_r4r4r4r4_>(apis, env, _sv1);
    S_r4r4r4r4_ p1 = pp1 ? *pp1 : S_r4r4r4r4_ {};
        
    typedef void (*FuncToCall)(uint32_t p1, struct S_r4r4r4r4_ p2, const void* method);
    ((FuncToCall)methodPointer)( p0, p1,  method);
    return true;
}
// Void NtfSetUnityObjectTag(UInt32, StringId, Boolean) declare in SGC
bool w_vu4S_u8_b(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4S_u8_b");
    auto TIp1 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, true))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv2))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
             // LuaValToCSVal struct
    S_u8_* pp1 = DataTransfer::GetPointer<S_u8_>(apis, env, _sv1);
    S_u8_ p1 = pp1 ? *pp1 : S_u8_ {};
                
    // LuaValToCSVal P any
    bool p2 = converter::Converter<bool>::toCpp(apis, env, _sv2);
        
    typedef void (*FuncToCall)(uint32_t p1, struct S_u8_ p2, bool p3, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2,  method);
    return true;
}
// Void NtfAgeUnityObjAnimIntParam(UInt32, StringId, Int32, Boolean) declare in SGC
bool w_vu4S_u8_i4b(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4S_u8_i4b");
    auto TIp1 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    if (checkLuaArgument) {
        if (lua_args_len != 4) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, true))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv2))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv3))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
             // LuaValToCSVal struct
    S_u8_* pp1 = DataTransfer::GetPointer<S_u8_>(apis, env, _sv1);
    S_u8_ p1 = pp1 ? *pp1 : S_u8_ {};
                
    // LuaValToCSVal P any
    int32_t p2 = converter::Converter<int32_t>::toCpp(apis, env, _sv2);
                
    // LuaValToCSVal P any
    bool p3 = converter::Converter<bool>::toCpp(apis, env, _sv3);
        
    typedef void (*FuncToCall)(uint32_t p1, struct S_u8_ p2, int32_t p3, bool p4, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2, p3,  method);
    return true;
}
// Void CalcResolutionAdaptTotalPixels(UInt32, Int32 ByRef, Int32 ByRef) declare in SystemSetting
bool w_vu4Ti4Ti4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4Ti4Ti4");
    AutoValueScope value_scope(apis, env);
    auto TIp1 = wrapData->TypeInfos[0];
    auto TIp2 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len < 2 || lua_args_len > 3) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
             
    // LuaValToCSVal P primitive
    int32_t up1 = 0;
    if (1 < lua_args_len)
        up1 = converter::Converter<std::reference_wrapper<int32_t>>::toCpp(apis, env, _sv1);
    int32_t* p1 = &up1;
     
    // LuaValToCSVal P primitive
    int32_t up2 = 0;
    if (2 < lua_args_len)
        up2 = converter::Converter<std::reference_wrapper<int32_t>>::toCpp(apis, env, _sv2);
    int32_t* p2 = &up2;

    typedef void (*FuncToCall)(uint32_t p1, void* p2, void* p3, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2,  method);
	int ret1 = converter::Converter<int32_t>::toScript(apis, env, *p1);
	int ret2 = converter::Converter<int32_t>::toScript(apis, env, *p2);
	apis->add_return(info, ret1);
	apis->add_return(info, ret2);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Void NtfShowHudComponent(UInt32, Boolean) declare in SGC
bool w_vu4b(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4b");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv1))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    bool p1 = converter::Converter<bool>::toCpp(apis, env, _sv1);
        
    typedef void (*FuncToCall)(uint32_t p1, bool p2, const void* method);
    ((FuncToCall)methodPointer)( p0, p1,  method);
    return true;
}
// Void NtfSetActorVisible(UInt32, Boolean, Boolean) declare in SGC
bool w_vu4bb(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4bb");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv2))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    bool p1 = converter::Converter<bool>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    bool p2 = converter::Converter<bool>::toCpp(apis, env, _sv2);
        
    typedef void (*FuncToCall)(uint32_t p1, bool p2, bool p3, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2,  method);
    return true;
}
// Void StartCSRecoverChaseUp(UInt32, Boolean, UInt32) declare in SGW
bool w_vu4bu4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4bu4");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv2))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    bool p1 = converter::Converter<bool>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    uint32_t p2 = converter::Converter<uint32_t>::toCpp(apis, env, _sv2);
        
    typedef void (*FuncToCall)(uint32_t p1, bool p2, uint32_t p3, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2,  method);
    return true;
}
// Void CameraShakeDurationEnter(UInt32, Boolean, UInt32, UnityEngine.Vector3, Boolean) declare in SGC
bool w_vu4bu4S_r4r4r4_b(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4bu4S_r4r4r4_b");
    auto TIp3 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    int _sv4 = apis->get_arg(info, 4);
    if (checkLuaArgument) {
        if (lua_args_len != 5) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv2))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv3, TIp3, true))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv4))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    bool p1 = converter::Converter<bool>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    uint32_t p2 = converter::Converter<uint32_t>::toCpp(apis, env, _sv2);
             // LuaValToCSVal struct
    S_r4r4r4_* pp3 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, _sv3);
    S_r4r4r4_ p3 = pp3 ? *pp3 : S_r4r4r4_ {};
                
    // LuaValToCSVal P any
    bool p4 = converter::Converter<bool>::toCpp(apis, env, _sv4);
        
    typedef void (*FuncToCall)(uint32_t p1, bool p2, uint32_t p3, struct S_r4r4r4_ p4, bool p5, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2, p3, p4,  method);
    return true;
}
// Void NtfEquipForbiddenChanged(UInt32, Boolean, UInt32, UInt32) declare in SGC
bool w_vu4bu4u4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4bu4u4");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    if (checkLuaArgument) {
        if (lua_args_len != 4) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv2))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv3))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    bool p1 = converter::Converter<bool>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    uint32_t p2 = converter::Converter<uint32_t>::toCpp(apis, env, _sv2);
                
    // LuaValToCSVal P any
    uint32_t p3 = converter::Converter<uint32_t>::toCpp(apis, env, _sv3);
        
    typedef void (*FuncToCall)(uint32_t p1, bool p2, uint32_t p3, uint32_t p4, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2, p3,  method);
    return true;
}
// Void NtfActorDelayDamageChange(UInt32, Int32) declare in SGC
bool w_vu4i4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4i4");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv1))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    int32_t p1 = converter::Converter<int32_t>::toCpp(apis, env, _sv1);
        
    typedef void (*FuncToCall)(uint32_t p1, int32_t p2, const void* method);
    ((FuncToCall)methodPointer)( p0, p1,  method);
    return true;
}
// Void NtfCardBagAddItem(UInt32, Int32, CardBagItem ByRef) declare in SGC
bool w_vu4i4PS_u4u4_(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4i4PS_u4u4_");
    AutoValueScope value_scope(apis, env);
    auto TIp2 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv1))
            return false;
        if (!apis->is_object(env, _sv2)) return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    int32_t p1 = converter::Converter<int32_t>::toCpp(apis, env, _sv1);
             
    // LuaValToCSVal Pstruct
    S_u4u4_* p2 = DataTransfer::GetPointer<S_u4u4_>(apis, env, apis->unboxing(env, _sv2)); // valuetype ref
    S_u4u4_ up2;
    if (!p2) {
        memset(&up2, 0, sizeof(p2));
        p2 = &up2;
    }
        
    typedef void (*FuncToCall)(uint32_t p1, int32_t p2, struct S_u4u4_* p3, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2,  method);                
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

	apis->add_return(info, ret2);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Void NtfSetUnityObjectLayer(UInt32, Int32, Boolean) declare in SGC
bool w_vu4i4b(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4i4b");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv2))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    int32_t p1 = converter::Converter<int32_t>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    bool p2 = converter::Converter<bool>::toCpp(apis, env, _sv2);
        
    typedef void (*FuncToCall)(uint32_t p1, int32_t p2, bool p3, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2,  method);
    return true;
}
// Void OnActorChargeValueChange(UInt32, Int32, Int32) declare in SGC
bool w_vu4i4i4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4i4i4");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv2))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    int32_t p1 = converter::Converter<int32_t>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    int32_t p2 = converter::Converter<int32_t>::toCpp(apis, env, _sv2);
        
    typedef void (*FuncToCall)(uint32_t p1, int32_t p2, int32_t p3, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2,  method);
    return true;
}
// Void OnActorCurEpChange(UInt32, Int32, Int32, Int32, Int32, Int32) declare in SGC
bool w_vu4i4i4i4i4i4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4i4i4i4i4i4");

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

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv2))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv3))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv4))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv5))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    int32_t p1 = converter::Converter<int32_t>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    int32_t p2 = converter::Converter<int32_t>::toCpp(apis, env, _sv2);
                
    // LuaValToCSVal P any
    int32_t p3 = converter::Converter<int32_t>::toCpp(apis, env, _sv3);
                
    // LuaValToCSVal P any
    int32_t p4 = converter::Converter<int32_t>::toCpp(apis, env, _sv4);
                
    // LuaValToCSVal P any
    int32_t p5 = converter::Converter<int32_t>::toCpp(apis, env, _sv5);
        
    typedef void (*FuncToCall)(uint32_t p1, int32_t p2, int32_t p3, int32_t p4, int32_t p5, int32_t p6, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2, p3, p4, p5,  method);
    return true;
}
// Void ReqPlayerCardInfos(UInt32, OSProto.CardPileType, PlayerCardInfosTypeDelegate) declare in SGWRequest
bool w_vu4i4o(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4i4o");
    auto TIp2 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv1))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv2, TIp2, false))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    int32_t p1 = converter::Converter<int32_t>::toCpp(apis, env, _sv1);
            
    // LuaValToCSVal o/O
    Il2CppObject* p2 = LuaValueToCSRef(apis, TIp2, env, _sv2);
        
    typedef void (*FuncToCall)(uint32_t p1, int32_t p2, Il2CppObject* p3, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2,  method);
    return true;
}
// Void NtfCardBagRemoveItem(UInt32, Int32, UInt32) declare in SGC
bool w_vu4i4u4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4i4u4");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv2))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    int32_t p1 = converter::Converter<int32_t>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    uint32_t p2 = converter::Converter<uint32_t>::toCpp(apis, env, _sv2);
        
    typedef void (*FuncToCall)(uint32_t p1, int32_t p2, uint32_t p3, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2,  method);
    return true;
}
// Void NtfAgeRecoverModelParam(UInt32, Int32, UInt32, Boolean) declare in SGC
bool w_vu4i4u4b(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4i4u4b");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    if (checkLuaArgument) {
        if (lua_args_len != 4) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv2))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv3))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    int32_t p1 = converter::Converter<int32_t>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    uint32_t p2 = converter::Converter<uint32_t>::toCpp(apis, env, _sv2);
                
    // LuaValToCSVal P any
    bool p3 = converter::Converter<bool>::toCpp(apis, env, _sv3);
        
    typedef void (*FuncToCall)(uint32_t p1, int32_t p2, uint32_t p3, bool p4, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2, p3,  method);
    return true;
}
// Void NtfAddEquipToHeroSuccess(UInt32, Int32, UInt32, UInt32) declare in SGC
bool w_vu4i4u4u4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4i4u4u4");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    if (checkLuaArgument) {
        if (lua_args_len != 4) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv2))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv3))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    int32_t p1 = converter::Converter<int32_t>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    uint32_t p2 = converter::Converter<uint32_t>::toCpp(apis, env, _sv2);
                
    // LuaValToCSVal P any
    uint32_t p3 = converter::Converter<uint32_t>::toCpp(apis, env, _sv3);
        
    typedef void (*FuncToCall)(uint32_t p1, int32_t p2, uint32_t p3, uint32_t p4, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2, p3,  method);
    return true;
}
// Void Project8GetBattleFiledActor(UInt32, stProject8BattleFiledActorDataTypeDelegate) declare in SGWRequest
bool w_vu4o(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4o");
    auto TIp1 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, false))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
            
    // LuaValToCSVal o/O
    Il2CppObject* p1 = LuaValueToCSRef(apis, TIp1, env, _sv1);
        
    typedef void (*FuncToCall)(uint32_t p1, Il2CppObject* p2, const void* method);
    ((FuncToCall)methodPointer)( p0, p1,  method);
    return true;
}
// Void NtfCardMachineCardInfo(UInt32, OSProto.SyncCardInfo[], PROJECT8_CARD_OP_CODE) declare in SGC
bool w_vu4oi4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4oi4");
    auto TIp1 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, false))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv2))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
            
    // LuaValToCSVal o/O
    Il2CppObject* p1 = LuaValueToCSRef(apis, TIp1, env, _sv1);
                
    // LuaValToCSVal P any
    int32_t p2 = converter::Converter<int32_t>::toCpp(apis, env, _sv2);
        
    typedef void (*FuncToCall)(uint32_t p1, Il2CppObject* p2, int32_t p3, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2,  method);
    return true;
}
// Void GetSkillHurtInfo(UInt32, SkillHurtInfoParam[], SkillHurtResultTypeDelegate) declare in SGWRequest
bool w_vu4oo(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4oo");
    auto TIp1 = wrapData->TypeInfos[0];
    auto TIp2 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, false))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv2, TIp2, false))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
            
    // LuaValToCSVal o/O
    Il2CppObject* p1 = LuaValueToCSRef(apis, TIp1, env, _sv1);
            
    // LuaValToCSVal o/O
    Il2CppObject* p2 = LuaValueToCSRef(apis, TIp2, env, _sv2);
        
    typedef void (*FuncToCall)(uint32_t p1, Il2CppObject* p2, Il2CppObject* p3, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2,  method);
    return true;
}
// Void CanWearEquipItems(UInt32, UInt32[], UInt32, EquipQueryRetsTypeDelegate) declare in SGWRequest
bool w_vu4ou4o(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4ou4o");
    auto TIp1 = wrapData->TypeInfos[0];
    auto TIp3 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    if (checkLuaArgument) {
        if (lua_args_len != 4) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv1, TIp1, false))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv2))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv3, TIp3, false))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
            
    // LuaValToCSVal o/O
    Il2CppObject* p1 = LuaValueToCSRef(apis, TIp1, env, _sv1);
                
    // LuaValToCSVal P any
    uint32_t p2 = converter::Converter<uint32_t>::toCpp(apis, env, _sv2);
            
    // LuaValToCSVal o/O
    Il2CppObject* p3 = LuaValueToCSRef(apis, TIp3, env, _sv3);
        
    typedef void (*FuncToCall)(uint32_t p1, Il2CppObject* p2, uint32_t p3, Il2CppObject* p4, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2, p3,  method);
    return true;
}
// Void NtfUpdateRunAnimPlaySpeed(UInt32, Single) declare in SGC
bool w_vu4r4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4r4");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv1))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    float p1 = converter::Converter<float>::toCpp(apis, env, _sv1);
        
    typedef void (*FuncToCall)(uint32_t p1, float p2, const void* method);
    ((FuncToCall)methodPointer)( p0, p1,  method);
    return true;
}
// Void NtfAgeTriggerParticleTickRecycleObj(UInt32, Single, Single) declare in SGC
bool w_vu4r4r4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4r4r4");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv2))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    float p1 = converter::Converter<float>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    float p2 = converter::Converter<float>::toCpp(apis, env, _sv2);
        
    typedef void (*FuncToCall)(uint32_t p1, float p2, float p3, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2,  method);
    return true;
}
// Void OSONtfChangePlayerName(UInt32, System.String) declare in SGC
bool w_vu4s(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4s");
    auto TIp1 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv1))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
            // LuaValToCSVal s
    Il2CppString* p1 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv1);
    typedef void (*FuncToCall)(uint32_t p1, Il2CppString* p2, const void* method);
    ((FuncToCall)methodPointer)( p0, p1,  method);
    return true;
}
// Void NtfProject8PlayerVar(UInt32, System.String, SGWSerializedVar ByRef) declare in SGC
bool w_vu4sPS_u1u4o_(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4sPS_u1u4o_");
    AutoValueScope value_scope(apis, env);
    auto TIp1 = wrapData->TypeInfos[0];
    auto TIp2 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv1))
            return false;
        if (!apis->is_object(env, _sv2)) return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
            // LuaValToCSVal s
    Il2CppString* p1 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv1);     
    // LuaValToCSVal Pstruct
    S_u1u4o_* p2 = DataTransfer::GetPointer<S_u1u4o_>(apis, env, apis->unboxing(env, _sv2)); // valuetype ref
    S_u1u4o_ up2;
    if (!p2) {
        memset(&up2, 0, sizeof(p2));
        p2 = &up2;
    }
        
    typedef void (*FuncToCall)(uint32_t p1, Il2CppString* p2, struct S_u1u4o_* p3, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2,  method);                
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

	apis->add_return(info, ret2);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Void RecoverAnimParam(UInt32, System.String, System.String, Boolean) declare in SGC
bool w_vu4ssb(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4ssb");
    auto TIp1 = wrapData->TypeInfos[0];
    auto TIp2 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    if (checkLuaArgument) {
        if (lua_args_len != 4) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv2))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv3))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
            // LuaValToCSVal s
    Il2CppString* p1 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv1);    // LuaValToCSVal s
    Il2CppString* p2 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv2);        
    // LuaValToCSVal P any
    bool p3 = converter::Converter<bool>::toCpp(apis, env, _sv3);
        
    typedef void (*FuncToCall)(uint32_t p1, Il2CppString* p2, Il2CppString* p3, bool p4, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2, p3,  method);
    return true;
}
// Void ChangeAnimParam(UInt32, System.String, System.String, Boolean, Boolean) declare in SGC
bool w_vu4ssbb(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4ssbb");
    auto TIp1 = wrapData->TypeInfos[0];
    auto TIp2 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    int _sv4 = apis->get_arg(info, 4);
    if (checkLuaArgument) {
        if (lua_args_len != 5) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv2))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv3))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv4))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
            // LuaValToCSVal s
    Il2CppString* p1 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv1);    // LuaValToCSVal s
    Il2CppString* p2 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv2);        
    // LuaValToCSVal P any
    bool p3 = converter::Converter<bool>::toCpp(apis, env, _sv3);
                
    // LuaValToCSVal P any
    bool p4 = converter::Converter<bool>::toCpp(apis, env, _sv4);
        
    typedef void (*FuncToCall)(uint32_t p1, Il2CppString* p2, Il2CppString* p3, bool p4, bool p5, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2, p3, p4,  method);
    return true;
}
// Void OnAutoAISwitch(UInt32, Byte) declare in SGC
bool w_vu4u1(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4u1");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<uint8_t>::accept(apis, env, _sv1))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    uint8_t p1 = converter::Converter<uint8_t>::toCpp(apis, env, _sv1);
        
    typedef void (*FuncToCall)(uint32_t p1, uint8_t p2, const void* method);
    ((FuncToCall)methodPointer)( p0, p1,  method);
    return true;
}
// Void NtfProject8OpResult(UInt32, Byte, Int32, Int32) declare in SGC
bool w_vu4u1i4i4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4u1i4i4");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    if (checkLuaArgument) {
        if (lua_args_len != 4) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<uint8_t>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv2))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv3))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    uint8_t p1 = converter::Converter<uint8_t>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    int32_t p2 = converter::Converter<int32_t>::toCpp(apis, env, _sv2);
                
    // LuaValToCSVal P any
    int32_t p3 = converter::Converter<int32_t>::toCpp(apis, env, _sv3);
        
    typedef void (*FuncToCall)(uint32_t p1, uint8_t p2, int32_t p3, int32_t p4, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2, p3,  method);
    return true;
}
// Void GetPropValueInfo(UInt32, Byte, stValueDataInfoTypeDelegate) declare in SGWRequest
bool w_vu4u1o(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4u1o");
    auto TIp2 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<uint8_t>::accept(apis, env, _sv1))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv2, TIp2, false))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    uint8_t p1 = converter::Converter<uint8_t>::toCpp(apis, env, _sv1);
            
    // LuaValToCSVal o/O
    Il2CppObject* p2 = LuaValueToCSRef(apis, TIp2, env, _sv2);
        
    typedef void (*FuncToCall)(uint32_t p1, uint8_t p2, Il2CppObject* p3, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2,  method);
    return true;
}
// Void OnReqGetOSOPlace(UInt32, UInt32) declare in LuaCallCSharpInteraction
bool w_vu4u4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4u4");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv1))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    uint32_t p1 = converter::Converter<uint32_t>::toCpp(apis, env, _sv1);
        
    typedef void (*FuncToCall)(uint32_t p1, uint32_t p2, const void* method);
    ((FuncToCall)methodPointer)( p0, p1,  method);
    return true;
}
// Void NftMoveToActorNearbyInfo(UInt32, UInt32, Boolean) declare in SGC
bool w_vu4u4b(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4u4b");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv2))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    uint32_t p1 = converter::Converter<uint32_t>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    bool p2 = converter::Converter<bool>::toCpp(apis, env, _sv2);
        
    typedef void (*FuncToCall)(uint32_t p1, uint32_t p2, bool p3, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2,  method);
    return true;
}
// Void NtfProject8BossAwardItems(UInt32, UInt32, Boolean, Project8BossAwardItems ByRef) declare in SGC
bool w_vu4u4bPS_i4o_(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4u4bPS_i4o_");
    AutoValueScope value_scope(apis, env);
    auto TIp3 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    if (checkLuaArgument) {
        if (lua_args_len != 4) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv2))
            return false;
        if (!apis->is_object(env, _sv3)) return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    uint32_t p1 = converter::Converter<uint32_t>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    bool p2 = converter::Converter<bool>::toCpp(apis, env, _sv2);
             
    // LuaValToCSVal Pstruct
    S_i4o_* p3 = DataTransfer::GetPointer<S_i4o_>(apis, env, apis->unboxing(env, _sv3)); // valuetype ref
    S_i4o_ up3;
    if (!p3) {
        memset(&up3, 0, sizeof(p3));
        p3 = &up3;
    }
        
    typedef void (*FuncToCall)(uint32_t p1, uint32_t p2, bool p3, struct S_i4o_* p4, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2, p3,  method);                
    int ret3;
    if (p3 == &up3)
    {
        ret3 = DataTransfer::CopyValueType(apis, env, *p3, TIp3);    
        apis->update_boxed_value(env, _sv3, ret3);
    }
    else
    {
        ret3 = apis->native_object_to_value(env, TIp3, p3, false);
    }

	apis->add_return(info, ret3);
    value_scope.reserve = apis->get_return_num(info);
    return true;
}
// Void NftAGEModifyUnityObjectTransformDurationEnter(UInt32, UInt32, Boolean, VInt3, VInt3, Boolean, VInt3, VInt3, UInt32) declare in SGC
bool w_vu4u4bS_i4i4i4_S_i4i4i4_bS_i4i4i4_S_i4i4i4_u4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4u4bS_i4i4i4_S_i4i4i4_bS_i4i4i4_S_i4i4i4_u4");
    auto TIp3 = wrapData->TypeInfos[0];
    auto TIp4 = wrapData->TypeInfos[1];
    auto TIp6 = wrapData->TypeInfos[2];
    auto TIp7 = wrapData->TypeInfos[3];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    int _sv4 = apis->get_arg(info, 4);
    int _sv5 = apis->get_arg(info, 5);
    int _sv6 = apis->get_arg(info, 6);
    int _sv7 = apis->get_arg(info, 7);
    int _sv8 = apis->get_arg(info, 8);
    if (checkLuaArgument) {
        if (lua_args_len != 9) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv2))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv3, TIp3, true))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv4, TIp4, true))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv5))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv6, TIp6, true))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv7, TIp7, true))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv8))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    uint32_t p1 = converter::Converter<uint32_t>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    bool p2 = converter::Converter<bool>::toCpp(apis, env, _sv2);
             // LuaValToCSVal struct
    S_i4i4i4_* pp3 = DataTransfer::GetPointer<S_i4i4i4_>(apis, env, _sv3);
    S_i4i4i4_ p3 = pp3 ? *pp3 : S_i4i4i4_ {};
             // LuaValToCSVal struct
    S_i4i4i4_* pp4 = DataTransfer::GetPointer<S_i4i4i4_>(apis, env, _sv4);
    S_i4i4i4_ p4 = pp4 ? *pp4 : S_i4i4i4_ {};
                
    // LuaValToCSVal P any
    bool p5 = converter::Converter<bool>::toCpp(apis, env, _sv5);
             // LuaValToCSVal struct
    S_i4i4i4_* pp6 = DataTransfer::GetPointer<S_i4i4i4_>(apis, env, _sv6);
    S_i4i4i4_ p6 = pp6 ? *pp6 : S_i4i4i4_ {};
             // LuaValToCSVal struct
    S_i4i4i4_* pp7 = DataTransfer::GetPointer<S_i4i4i4_>(apis, env, _sv7);
    S_i4i4i4_ p7 = pp7 ? *pp7 : S_i4i4i4_ {};
                
    // LuaValToCSVal P any
    uint32_t p8 = converter::Converter<uint32_t>::toCpp(apis, env, _sv8);
        
    typedef void (*FuncToCall)(uint32_t p1, uint32_t p2, bool p3, struct S_i4i4i4_ p4, struct S_i4i4i4_ p5, bool p6, struct S_i4i4i4_ p7, struct S_i4i4i4_ p8, uint32_t p9, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2, p3, p4, p5, p6, p7, p8,  method);
    return true;
}
// Void NtfProject8BossReset(UInt32, UInt32, Boolean, Boolean) declare in SGC
bool w_vu4u4bb(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4u4bb");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    if (checkLuaArgument) {
        if (lua_args_len != 4) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv2))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv3))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    uint32_t p1 = converter::Converter<uint32_t>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    bool p2 = converter::Converter<bool>::toCpp(apis, env, _sv2);
                
    // LuaValToCSVal P any
    bool p3 = converter::Converter<bool>::toCpp(apis, env, _sv3);
        
    typedef void (*FuncToCall)(uint32_t p1, uint32_t p2, bool p3, bool p4, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2, p3,  method);
    return true;
}
// Void NtfHideHud(UInt32, UInt32, Boolean, Boolean, Boolean) declare in SGC
bool w_vu4u4bbb(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4u4bbb");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    int _sv4 = apis->get_arg(info, 4);
    if (checkLuaArgument) {
        if (lua_args_len != 5) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv2))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv3))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv4))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    uint32_t p1 = converter::Converter<uint32_t>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    bool p2 = converter::Converter<bool>::toCpp(apis, env, _sv2);
                
    // LuaValToCSVal P any
    bool p3 = converter::Converter<bool>::toCpp(apis, env, _sv3);
                
    // LuaValToCSVal P any
    bool p4 = converter::Converter<bool>::toCpp(apis, env, _sv4);
        
    typedef void (*FuncToCall)(uint32_t p1, uint32_t p2, bool p3, bool p4, bool p5, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2, p3, p4,  method);
    return true;
}
// Void NtfSceneAnimationGoPlayAnimation(UInt32, UInt32, Boolean, Boolean, Int32) declare in SGC
bool w_vu4u4bbi4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4u4bbi4");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    int _sv4 = apis->get_arg(info, 4);
    if (checkLuaArgument) {
        if (lua_args_len != 5) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv2))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv3))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv4))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    uint32_t p1 = converter::Converter<uint32_t>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    bool p2 = converter::Converter<bool>::toCpp(apis, env, _sv2);
                
    // LuaValToCSVal P any
    bool p3 = converter::Converter<bool>::toCpp(apis, env, _sv3);
                
    // LuaValToCSVal P any
    int32_t p4 = converter::Converter<int32_t>::toCpp(apis, env, _sv4);
        
    typedef void (*FuncToCall)(uint32_t p1, uint32_t p2, bool p3, bool p4, int32_t p5, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2, p3, p4,  method);
    return true;
}
// Void MaterialFadeDurationEnter(UInt32, UInt32, Boolean, Single) declare in SGC
bool w_vu4u4br4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4u4br4");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    if (checkLuaArgument) {
        if (lua_args_len != 4) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv2))
            return false;
        if (!converter::Converter<float>::accept(apis, env, _sv3))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    uint32_t p1 = converter::Converter<uint32_t>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    bool p2 = converter::Converter<bool>::toCpp(apis, env, _sv2);
                
    // LuaValToCSVal P any
    float p3 = converter::Converter<float>::toCpp(apis, env, _sv3);
        
    typedef void (*FuncToCall)(uint32_t p1, uint32_t p2, bool p3, float p4, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2, p3,  method);
    return true;
}
// Void CanWearEquip(UInt32, UInt32, Boolean, UInt32, EquipQueryRetTypeDelegate) declare in SGWRequest
bool w_vu4u4bu4o(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4u4bu4o");
    auto TIp4 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    int _sv4 = apis->get_arg(info, 4);
    if (checkLuaArgument) {
        if (lua_args_len != 5) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv2))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv3))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv4, TIp4, false))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    uint32_t p1 = converter::Converter<uint32_t>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    bool p2 = converter::Converter<bool>::toCpp(apis, env, _sv2);
                
    // LuaValToCSVal P any
    uint32_t p3 = converter::Converter<uint32_t>::toCpp(apis, env, _sv3);
            
    // LuaValToCSVal o/O
    Il2CppObject* p4 = LuaValueToCSRef(apis, TIp4, env, _sv4);
        
    typedef void (*FuncToCall)(uint32_t p1, uint32_t p2, bool p3, uint32_t p4, Il2CppObject* p5, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2, p3, p4,  method);
    return true;
}
// Void RecordRoundTLogSale(UInt32, UInt32, Assets.Scripts.UI.InGameCommon.SaleActorWay) declare in Assets.Scripts.Framework.UI.UIUtility
bool w_vu4u4i4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4u4i4");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv2))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    uint32_t p1 = converter::Converter<uint32_t>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    int32_t p2 = converter::Converter<int32_t>::toCpp(apis, env, _sv2);
        
    typedef void (*FuncToCall)(uint32_t p1, uint32_t p2, int32_t p3, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2,  method);
    return true;
}
// Void OnSelectTreasureEquipDrop(UInt32, UInt32, Int32, UnityEngine.Vector3) declare in Assets.Scripts.UI.InTheGame.Standard.UIRewardChoose
bool w_vu4u4i4S_r4r4r4_(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4u4i4S_r4r4r4_");
    auto TIp3 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    if (checkLuaArgument) {
        if (lua_args_len != 4) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv2))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv3, TIp3, true))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    uint32_t p1 = converter::Converter<uint32_t>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    int32_t p2 = converter::Converter<int32_t>::toCpp(apis, env, _sv2);
             // LuaValToCSVal struct
    S_r4r4r4_* pp3 = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, _sv3);
    S_r4r4r4_ p3 = pp3 ? *pp3 : S_r4r4r4_ {};
        
    typedef void (*FuncToCall)(uint32_t p1, uint32_t p2, int32_t p3, struct S_r4r4r4_ p4, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2, p3,  method);
    return true;
}
// Void NtfProject8TakeOffEquip(UInt32, UInt32, Int32, Int32) declare in SGC
bool w_vu4u4i4i4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4u4i4i4");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    if (checkLuaArgument) {
        if (lua_args_len != 4) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv2))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv3))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    uint32_t p1 = converter::Converter<uint32_t>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    int32_t p2 = converter::Converter<int32_t>::toCpp(apis, env, _sv2);
                
    // LuaValToCSVal P any
    int32_t p3 = converter::Converter<int32_t>::toCpp(apis, env, _sv3);
        
    typedef void (*FuncToCall)(uint32_t p1, uint32_t p2, int32_t p3, int32_t p4, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2, p3,  method);
    return true;
}
// Void NtfChangeActorHudHeight(UInt32, UInt32, Int32, Int32, Int32) declare in SGC
bool w_vu4u4i4i4i4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4u4i4i4i4");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    int _sv4 = apis->get_arg(info, 4);
    if (checkLuaArgument) {
        if (lua_args_len != 5) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv2))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv3))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv4))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    uint32_t p1 = converter::Converter<uint32_t>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    int32_t p2 = converter::Converter<int32_t>::toCpp(apis, env, _sv2);
                
    // LuaValToCSVal P any
    int32_t p3 = converter::Converter<int32_t>::toCpp(apis, env, _sv3);
                
    // LuaValToCSVal P any
    int32_t p4 = converter::Converter<int32_t>::toCpp(apis, env, _sv4);
        
    typedef void (*FuncToCall)(uint32_t p1, uint32_t p2, int32_t p3, int32_t p4, int32_t p5, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2, p3, p4,  method);
    return true;
}
// Void GetProject8FightStatics(UInt32, UInt32, Project8AllPlayersFightStatTypeDelegate) declare in SGWRequest
bool w_vu4u4o(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4u4o");
    auto TIp2 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv1))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv2, TIp2, false))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    uint32_t p1 = converter::Converter<uint32_t>::toCpp(apis, env, _sv1);
            
    // LuaValToCSVal o/O
    Il2CppObject* p2 = LuaValueToCSRef(apis, TIp2, env, _sv2);
        
    typedef void (*FuncToCall)(uint32_t p1, uint32_t p2, Il2CppObject* p3, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2,  method);
    return true;
}
// Void MoveEquipsFromAToB(UInt32, UInt32, System.Collections.Generic.List`1[Assets.Scripts.UI.InTheGame.Common.UIEquipCommonItem+EquipWithActor], System.Collections.Generic.List`1[SGW+stEquipItem]) declare in Assets.Scripts.GameLogic.EquipCmd
bool w_vu4u4oo(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4u4oo");
    auto TIp2 = wrapData->TypeInfos[0];
    auto TIp3 = wrapData->TypeInfos[1];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    if (checkLuaArgument) {
        if (lua_args_len != 4) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv1))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv2, TIp2, false))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv3, TIp3, false))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    uint32_t p1 = converter::Converter<uint32_t>::toCpp(apis, env, _sv1);
            
    // LuaValToCSVal o/O
    Il2CppObject* p2 = LuaValueToCSRef(apis, TIp2, env, _sv2);
            
    // LuaValToCSVal o/O
    Il2CppObject* p3 = LuaValueToCSRef(apis, TIp3, env, _sv3);
        
    typedef void (*FuncToCall)(uint32_t p1, uint32_t p2, Il2CppObject* p3, Il2CppObject* p4, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2, p3,  method);
    return true;
}
// Void OnReqOSOChallengeScore(UInt32, UInt32, UInt32) declare in LuaCallCSharpInteraction
bool w_vu4u4u4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4u4u4");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    if (checkLuaArgument) {
        if (lua_args_len != 3) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv2))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    uint32_t p1 = converter::Converter<uint32_t>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    uint32_t p2 = converter::Converter<uint32_t>::toCpp(apis, env, _sv2);
        
    typedef void (*FuncToCall)(uint32_t p1, uint32_t p2, uint32_t p3, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2,  method);
    return true;
}
// Void NtfPlayActorHighLightEffect_Lua(UInt32, UInt32, UInt32, Boolean) declare in SGC
bool w_vu4u4u4b(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4u4u4b");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    if (checkLuaArgument) {
        if (lua_args_len != 4) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv2))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv3))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    uint32_t p1 = converter::Converter<uint32_t>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    uint32_t p2 = converter::Converter<uint32_t>::toCpp(apis, env, _sv2);
                
    // LuaValToCSVal P any
    bool p3 = converter::Converter<bool>::toCpp(apis, env, _sv3);
        
    typedef void (*FuncToCall)(uint32_t p1, uint32_t p2, uint32_t p3, bool p4, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2, p3,  method);
    return true;
}
// Void NtfSwitchCameraDurationEnter(UInt32, UInt32, UInt32, Int32, Boolean) declare in SGC
bool w_vu4u4u4i4b(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4u4u4i4b");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    int _sv4 = apis->get_arg(info, 4);
    if (checkLuaArgument) {
        if (lua_args_len != 5) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv2))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv3))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv4))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    uint32_t p1 = converter::Converter<uint32_t>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    uint32_t p2 = converter::Converter<uint32_t>::toCpp(apis, env, _sv2);
                
    // LuaValToCSVal P any
    int32_t p3 = converter::Converter<int32_t>::toCpp(apis, env, _sv3);
                
    // LuaValToCSVal P any
    bool p4 = converter::Converter<bool>::toCpp(apis, env, _sv4);
        
    typedef void (*FuncToCall)(uint32_t p1, uint32_t p2, uint32_t p3, int32_t p4, bool p5, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2, p3, p4,  method);
    return true;
}
// Void CanTakeOffEquip(UInt32, UInt32, UInt32, EquipQueryRetTypeDelegate) declare in SGWRequest
bool w_vu4u4u4o(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4u4u4o");
    auto TIp3 = wrapData->TypeInfos[0];
    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    if (checkLuaArgument) {
        if (lua_args_len != 4) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv2))
            return false;
        if (!DataTransfer::IsAssignable(apis, env, _sv3, TIp3, false))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    uint32_t p1 = converter::Converter<uint32_t>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    uint32_t p2 = converter::Converter<uint32_t>::toCpp(apis, env, _sv2);
            
    // LuaValToCSVal o/O
    Il2CppObject* p3 = LuaValueToCSRef(apis, TIp3, env, _sv3);
        
    typedef void (*FuncToCall)(uint32_t p1, uint32_t p2, uint32_t p3, Il2CppObject* p4, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2, p3,  method);
    return true;
}
// Void UpgradeEquipmentOnHero(UInt32, UInt32, UInt32, UInt32) declare in Assets.Scripts.GameLogic.EquipCmd
bool w_vu4u4u4u4(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4u4u4u4");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    int _sv2 = apis->get_arg(info, 2);
    int _sv3 = apis->get_arg(info, 3);
    if (checkLuaArgument) {
        if (lua_args_len != 4) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv2))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv3))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    uint32_t p1 = converter::Converter<uint32_t>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    uint32_t p2 = converter::Converter<uint32_t>::toCpp(apis, env, _sv2);
                
    // LuaValToCSVal P any
    uint32_t p3 = converter::Converter<uint32_t>::toCpp(apis, env, _sv3);
        
    typedef void (*FuncToCall)(uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2, p3,  method);
    return true;
}
// Void NtfAgeModifyParticleDurationEnter(UInt32, UInt32, UInt32, UInt32, Int32, Boolean) declare in SGC
bool w_vu4u4u4u4i4b(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4u4u4u4i4b");

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

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv1))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv2))
            return false;
        if (!converter::Converter<uint32_t>::accept(apis, env, _sv3))
            return false;
        if (!converter::Converter<int32_t>::accept(apis, env, _sv4))
            return false;
        if (!converter::Converter<bool>::accept(apis, env, _sv5))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    uint32_t p1 = converter::Converter<uint32_t>::toCpp(apis, env, _sv1);
                
    // LuaValToCSVal P any
    uint32_t p2 = converter::Converter<uint32_t>::toCpp(apis, env, _sv2);
                
    // LuaValToCSVal P any
    uint32_t p3 = converter::Converter<uint32_t>::toCpp(apis, env, _sv3);
                
    // LuaValToCSVal P any
    int32_t p4 = converter::Converter<int32_t>::toCpp(apis, env, _sv4);
                
    // LuaValToCSVal P any
    bool p5 = converter::Converter<bool>::toCpp(apis, env, _sv5);
        
    typedef void (*FuncToCall)(uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, int32_t p5, bool p6, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2, p3, p4, p5,  method);
    return true;
}
// Void NtfFrameHashCheckInfo(UInt32, UInt64) declare in SGC
bool w_vu4u8(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu4u8");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    int _sv1 = apis->get_arg(info, 1);
    if (checkLuaArgument) {
        if (lua_args_len != 2) 
            return false;

        if (!converter::Converter<uint32_t>::accept(apis, env, _sv0))
            return false;
        if (!converter::Converter<uint64_t>::accept(apis, env, _sv1))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint32_t p0 = converter::Converter<uint32_t>::toCpp(apis, env, _sv0);
                
    // LuaValToCSVal P any
    uint64_t p1 = converter::Converter<uint64_t>::toCpp(apis, env, _sv1);
        
    typedef void (*FuncToCall)(uint32_t p1, uint64_t p2, const void* method);
    ((FuncToCall)methodPointer)( p0, p1,  method);
    return true;
}
// Void AddValidExpCode(UInt64) declare in CrashSightAgent
bool w_vu8(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_vu8");

    int lua_args_len = apis->get_args_len(info);
    int _sv0 = apis->get_arg(info, 0);
    if (checkLuaArgument) {
        if (lua_args_len != 1) 
            return false;

        if (!converter::Converter<uint64_t>::accept(apis, env, _sv0))
            return false;        
    }
        
    // LuaValToCSVal P any
    uint64_t p0 = converter::Converter<uint64_t>::toCpp(apis, env, _sv0);
        
    typedef void (*FuncToCall)(uint64_t p1, const void* method);
    ((FuncToCall)methodPointer)( p0,  method);
    return true;
}
}

