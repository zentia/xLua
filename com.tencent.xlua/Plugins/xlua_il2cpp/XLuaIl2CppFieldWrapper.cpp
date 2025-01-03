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
#include "XluaValueType.h"

namespace xlua
{
static void ifg_O(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_O");
    pesapi_env env = apis->get_env(info);    
    Il2CppObject* ret;
    GetFieldValue(nullptr, fieldInfo, offset, &ret);

    apis->add_return(info, CSRefToLuaValue(apis, env, TIret, ret));    
}

static void ifs_O(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_O");
    pesapi_env env = apis->get_env(info);    
    // LuaValToCSVal o/O
    Il2CppObject* p = LuaValueToCSRef(apis, TIp, env, apis->get_arg(info, 0));
                    
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_i4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_i4i4_");
    pesapi_env env = apis->get_env(info);    
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);
    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));    
}

static void ifs_S_i4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_i4i4_");
    pesapi_env env = apis->get_env(info);     // LuaValToCSVal struct
    S_i4i4_* pp = DataTransfer::GetPointer<S_i4i4_>(apis, env, apis->get_arg(info, 0));
    S_i4i4_ p = pp ? *pp : S_i4i4_ {};
                    
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_i8_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_i8_");
    pesapi_env env = apis->get_env(info);    
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);
    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));    
}

static void ifs_S_i8_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_i8_");
    pesapi_env env = apis->get_env(info);     // LuaValToCSVal struct
    S_i8_* pp = DataTransfer::GetPointer<S_i8_>(apis, env, apis->get_arg(info, 0));
    S_i8_ p = pp ? *pp : S_i8_ {};
                    
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_r4r4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_r4r4_");
    pesapi_env env = apis->get_env(info);    
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);
    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));    
}

static void ifs_S_r4r4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_r4r4_");
    pesapi_env env = apis->get_env(info);     // LuaValToCSVal struct
    S_r4r4_* pp = DataTransfer::GetPointer<S_r4r4_>(apis, env, apis->get_arg(info, 0));
    S_r4r4_ p = pp ? *pp : S_r4r4_ {};
                    
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_r4r4r4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_r4r4r4_");
    pesapi_env env = apis->get_env(info);    
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);
    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));    
}

static void ifs_S_r4r4r4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_r4r4r4_");
    pesapi_env env = apis->get_env(info);     // LuaValToCSVal struct
    S_r4r4r4_* pp = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, apis->get_arg(info, 0));
    S_r4r4r4_ p = pp ? *pp : S_r4r4r4_ {};
                    
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_r4r4r4r4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_r4r4r4r4_");
    pesapi_env env = apis->get_env(info);    
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);
    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));    
}

static void ifs_S_r4r4r4r4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_r4r4r4r4_");
    pesapi_env env = apis->get_env(info);     // LuaValToCSVal struct
    S_r4r4r4r4_* pp = DataTransfer::GetPointer<S_r4r4r4r4_>(apis, env, apis->get_arg(info, 0));
    S_r4r4r4r4_ p = pp ? *pp : S_r4r4r4r4_ {};
                    
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_r4r4r4r4r4r4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_r4r4r4r4r4r4_");
    pesapi_env env = apis->get_env(info);    
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);
    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));    
}

static void ifs_S_r4r4r4r4r4r4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_r4r4r4r4r4r4_");
    pesapi_env env = apis->get_env(info);     // LuaValToCSVal struct
    S_r4r4r4r4r4r4_* pp = DataTransfer::GetPointer<S_r4r4r4r4r4r4_>(apis, env, apis->get_arg(info, 0));
    S_r4r4r4r4r4r4_ p = pp ? *pp : S_r4r4r4r4r4r4_ {};
                    
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_u1u1u1u1_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_u1u1u1u1_");
    pesapi_env env = apis->get_env(info);    
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);
    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));    
}

static void ifs_S_u1u1u1u1_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_u1u1u1u1_");
    pesapi_env env = apis->get_env(info);     // LuaValToCSVal struct
    S_u1u1u1u1_* pp = DataTransfer::GetPointer<S_u1u1u1u1_>(apis, env, apis->get_arg(info, 0));
    S_u1u1u1u1_ p = pp ? *pp : S_u1u1u1u1_ {};
                    
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_u1u2u1u1S_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_u1u2u1u1S_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4__");
    pesapi_env env = apis->get_env(info);    
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);
    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));    
}

static void ifs_S_u1u2u1u1S_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_u1u2u1u1S_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4__");
    pesapi_env env = apis->get_env(info);     // LuaValToCSVal struct
    S_u1u2u1u1S_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4__* pp = DataTransfer::GetPointer<S_u1u2u1u1S_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4__>(apis, env, apis->get_arg(info, 0));
    S_u1u2u1u1S_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4__ p = pp ? *pp : S_u1u2u1u1S_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4__ {};
                    
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_u4o_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_u4o_");
    pesapi_env env = apis->get_env(info);    
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);
    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));    
}

static void ifs_S_u4o_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_u4o_");
    pesapi_env env = apis->get_env(info);     // LuaValToCSVal struct
    S_u4o_* pp = DataTransfer::GetPointer<S_u4o_>(apis, env, apis->get_arg(info, 0));
    S_u4o_ p = pp ? *pp : S_u4o_ {};
                    
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_u8_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_u8_");
    pesapi_env env = apis->get_env(info);    
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);
    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));    
}

static void ifs_S_u8_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_u8_");
    pesapi_env env = apis->get_env(info);     // LuaValToCSVal struct
    S_u8_* pp = DataTransfer::GetPointer<S_u8_>(apis, env, apis->get_arg(info, 0));
    S_u8_ p = pp ? *pp : S_u8_ {};
                    
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_b(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_b");
    pesapi_env env = apis->get_env(info);    
    bool ret;
    GetFieldValue(nullptr, fieldInfo, offset, &ret);

    apis->add_return(info, converter::Converter<bool>::toScript(apis, env, ret));    
}

static void ifs_b(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_b");
    pesapi_env env = apis->get_env(info);        
    // LuaValToCSVal P any
    bool p = converter::Converter<bool>::toCpp(apis, env, apis->get_arg(info, 0));
                    
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_c(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_c");
    pesapi_env env = apis->get_env(info);    
    Il2CppChar ret;
    GetFieldValue(nullptr, fieldInfo, offset, &ret);

    apis->add_return(info, converter::Converter<Il2CppChar>::toScript(apis, env, ret));    
}

static void ifs_c(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_c");
    pesapi_env env = apis->get_env(info);        
    // LuaValToCSVal P any
    Il2CppChar p = converter::Converter<Il2CppChar>::toCpp(apis, env, apis->get_arg(info, 0));
                    
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_i4(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_i4");
    pesapi_env env = apis->get_env(info);    
    int32_t ret;
    GetFieldValue(nullptr, fieldInfo, offset, &ret);

    apis->add_return(info, converter::Converter<int32_t>::toScript(apis, env, ret));    
}

static void ifs_i4(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_i4");
    pesapi_env env = apis->get_env(info);        
    // LuaValToCSVal P any
    int32_t p = converter::Converter<int32_t>::toCpp(apis, env, apis->get_arg(info, 0));
                    
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_i8(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_i8");
    pesapi_env env = apis->get_env(info);    
    int64_t ret;
    GetFieldValue(nullptr, fieldInfo, offset, &ret);

    apis->add_return(info, converter::Converter<int64_t>::toScript(apis, env, ret));    
}

static void ifs_i8(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_i8");
    pesapi_env env = apis->get_env(info);        
    // LuaValToCSVal P any
    int64_t p = converter::Converter<int64_t>::toCpp(apis, env, apis->get_arg(info, 0));
                    
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_o(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_o");
    pesapi_env env = apis->get_env(info);    
    Il2CppObject* ret;
    GetFieldValue(nullptr, fieldInfo, offset, &ret);

    apis->add_return(info, CSRefToLuaValue(apis, env, TIret, ret));    
}

static void ifs_o(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_o");
    pesapi_env env = apis->get_env(info);    
    // LuaValToCSVal o/O
    Il2CppObject* p = LuaValueToCSRef(apis, TIp, env, apis->get_arg(info, 0));
                    
    SetFieldValue(nullptr, fieldInfo, offset, p);
}

static void ifg_r4(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_r4");
    pesapi_env env = apis->get_env(info);    
    float ret;
    GetFieldValue(nullptr, fieldInfo, offset, &ret);

    apis->add_return(info, converter::Converter<float>::toScript(apis, env, ret));    
}

static void ifs_r4(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_r4");
    pesapi_env env = apis->get_env(info);        
    // LuaValToCSVal P any
    float p = converter::Converter<float>::toCpp(apis, env, apis->get_arg(info, 0));
                    
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_r8(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_r8");
    pesapi_env env = apis->get_env(info);    
    double ret;
    GetFieldValue(nullptr, fieldInfo, offset, &ret);

    apis->add_return(info, converter::Converter<double>::toScript(apis, env, ret));    
}

static void ifs_r8(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_r8");
    pesapi_env env = apis->get_env(info);        
    // LuaValToCSVal P any
    double p = converter::Converter<double>::toCpp(apis, env, apis->get_arg(info, 0));
                    
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_s(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_s");
    pesapi_env env = apis->get_env(info);    
    Il2CppString* ret;
    GetFieldValue(nullptr, fieldInfo, offset, &ret);

    apis->add_return(info, converter::Converter<Il2CppString*>::toScript(apis, env, ret));    
}

static void ifs_s(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_s");
    pesapi_env env = apis->get_env(info);    // LuaValToCSVal s
    Il2CppString* p = converter::Converter<Il2CppString*>::toCpp(apis, env, apis->get_arg(info, 0));            
    SetFieldValue(nullptr, fieldInfo, offset, p);
}

static void ifg_tO(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tO");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
        
    Il2CppObject* ret;
    GetFieldValue(self, fieldInfo, offset, &ret);

    apis->add_return(info, CSRefToLuaValue(apis, env, TIret, ret));    
}

static void ifs_tO(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tO");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
        
    // LuaValToCSVal o/O
    Il2CppObject* p = LuaValueToCSRef(apis, TIp, env, apis->get_arg(info, 0));
                    
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4_");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
                
    auto ret = (char*)self + offset;
    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));    
}

static void ifs_tS_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4_");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
         // LuaValToCSVal struct
    S_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4_* pp = DataTransfer::GetPointer<S_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4_>(apis, env, apis->get_arg(info, 0));
    S_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4_ p = pp ? *pp : S_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4_ {};
                    
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_bb_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_bb_");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
                
    auto ret = (char*)self + offset;
    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));    
}

static void ifs_tS_bb_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_bb_");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
         // LuaValToCSVal struct
    S_bb_* pp = DataTransfer::GetPointer<S_bb_>(apis, env, apis->get_arg(info, 0));
    S_bb_ p = pp ? *pp : S_bb_ {};
                    
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_bbbbi4i4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_bbbbi4i4i4_");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
                
    auto ret = (char*)self + offset;
    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));    
}

static void ifs_tS_bbbbi4i4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_bbbbi4i4i4_");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
         // LuaValToCSVal struct
    S_bbbbi4i4i4_* pp = DataTransfer::GetPointer<S_bbbbi4i4i4_>(apis, env, apis->get_arg(info, 0));
    S_bbbbi4i4i4_ p = pp ? *pp : S_bbbbi4i4i4_ {};
                    
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_i4i4i4S_i4S_r4r4r4_r4r4i4_S_u1_i4u4u8u8S_r4_i4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_r4r4i4i4S_S_r4r4r4r4_S_r4r4r4_r4r4r4r4r4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4u4S_u1_S_u1_r4S_r4r4r4_S_r4_i4S_i4u4i4_u4i4i4_r4i4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_r4i4bi4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_i4i4i4S_i4S_r4r4r4_r4r4i4_S_u1_i4u4u8u8S_r4_i4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_r4r4i4i4S_S_r4r4r4r4_S_r4r4r4_r4r4r4r4r4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4u4S_u1_S_u1_r4S_r4r4r4_S_r4_i4S_i4u4i4_u4i4i4_r4i4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_r4i4bi4_");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
                
    auto ret = (char*)self + offset;
    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));    
}

static void ifs_tS_i4i4i4S_i4S_r4r4r4_r4r4i4_S_u1_i4u4u8u8S_r4_i4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_r4r4i4i4S_S_r4r4r4r4_S_r4r4r4_r4r4r4r4r4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4u4S_u1_S_u1_r4S_r4r4r4_S_r4_i4S_i4u4i4_u4i4i4_r4i4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_r4i4bi4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_i4i4i4S_i4S_r4r4r4_r4r4i4_S_u1_i4u4u8u8S_r4_i4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_r4r4i4i4S_S_r4r4r4r4_S_r4r4r4_r4r4r4r4r4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4u4S_u1_S_u1_r4S_r4r4r4_S_r4_i4S_i4u4i4_u4i4i4_r4i4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_r4i4bi4_");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
         // LuaValToCSVal struct
    S_i4i4i4S_i4S_r4r4r4_r4r4i4_S_u1_i4u4u8u8S_r4_i4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_r4r4i4i4S_S_r4r4r4r4_S_r4r4r4_r4r4r4r4r4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4u4S_u1_S_u1_r4S_r4r4r4_S_r4_i4S_i4u4i4_u4i4i4_r4i4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_r4i4bi4_* pp = DataTransfer::GetPointer<S_i4i4i4S_i4S_r4r4r4_r4r4i4_S_u1_i4u4u8u8S_r4_i4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_r4r4i4i4S_S_r4r4r4r4_S_r4r4r4_r4r4r4r4r4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4u4S_u1_S_u1_r4S_r4r4r4_S_r4_i4S_i4u4i4_u4i4i4_r4i4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_r4i4bi4_>(apis, env, apis->get_arg(info, 0));
    S_i4i4i4S_i4S_r4r4r4_r4r4i4_S_u1_i4u4u8u8S_r4_i4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_r4r4i4i4S_S_r4r4r4r4_S_r4r4r4_r4r4r4r4r4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4u4S_u1_S_u1_r4S_r4r4r4_S_r4_i4S_i4u4i4_u4i4i4_r4i4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_r4i4bi4_ p = pp ? *pp : S_i4i4i4S_i4S_r4r4r4_r4r4i4_S_u1_i4u4u8u8S_r4_i4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_r4r4i4i4S_S_r4r4r4r4_S_r4r4r4_r4r4r4r4r4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4u4S_u1_S_u1_r4S_r4r4r4_S_r4_i4S_i4u4i4_u4i4i4_r4i4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_r4i4bi4_ {};
                    
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_i4i4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_i4i4i4_");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
                
    auto ret = (char*)self + offset;
    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));    
}

static void ifs_tS_i4i4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_i4i4i4_");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
         // LuaValToCSVal struct
    S_i4i4i4_* pp = DataTransfer::GetPointer<S_i4i4i4_>(apis, env, apis->get_arg(info, 0));
    S_i4i4i4_ p = pp ? *pp : S_i4i4i4_ {};
                    
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_i4i4ossOosi4i4i1i1i1i4Oob_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_i4i4ossOosi4i4i1i1i1i4Oob_");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
                
    auto ret = (char*)self + offset;
    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));    
}

static void ifs_tS_i4i4ossOosi4i4i1i1i1i4Oob_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_i4i4ossOosi4i4i1i1i1i4Oob_");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
         // LuaValToCSVal struct
    S_i4i4ossOosi4i4i1i1i1i4Oob_* pp = DataTransfer::GetPointer<S_i4i4ossOosi4i4i1i1i1i4Oob_>(apis, env, apis->get_arg(info, 0));
    S_i4i4ossOosi4i4i1i1i1i4Oob_ p = pp ? *pp : S_i4i4ossOosi4i4i1i1i1i4Oob_ {};
                    
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_oi4i4i4i4i4o_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_oi4i4i4i4i4o_");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
                
    auto ret = (char*)self + offset;
    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));    
}

static void ifs_tS_oi4i4i4i4i4o_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_oi4i4i4i4i4o_");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
         // LuaValToCSVal struct
    S_oi4i4i4i4i4o_* pp = DataTransfer::GetPointer<S_oi4i4i4i4i4o_>(apis, env, apis->get_arg(info, 0));
    S_oi4i4i4i4i4o_ p = pp ? *pp : S_oi4i4i4i4i4o_ {};
                    
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_r4r4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_r4r4_");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
                
    auto ret = (char*)self + offset;
    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));    
}

static void ifs_tS_r4r4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_r4r4_");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
         // LuaValToCSVal struct
    S_r4r4_* pp = DataTransfer::GetPointer<S_r4r4_>(apis, env, apis->get_arg(info, 0));
    S_r4r4_ p = pp ? *pp : S_r4r4_ {};
                    
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_r4r4r4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_r4r4r4_");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
                
    auto ret = (char*)self + offset;
    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));    
}

static void ifs_tS_r4r4r4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_r4r4r4_");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
         // LuaValToCSVal struct
    S_r4r4r4_* pp = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, apis->get_arg(info, 0));
    S_r4r4r4_ p = pp ? *pp : S_r4r4r4_ {};
                    
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_r4r4r4r4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_r4r4r4r4_");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
                
    auto ret = (char*)self + offset;
    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));    
}

static void ifs_tS_r4r4r4r4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_r4r4r4r4_");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
         // LuaValToCSVal struct
    S_r4r4r4r4_* pp = DataTransfer::GetPointer<S_r4r4r4r4_>(apis, env, apis->get_arg(info, 0));
    S_r4r4r4r4_ p = pp ? *pp : S_r4r4r4r4_ {};
                    
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_u4o_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_u4o_");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
                
    auto ret = (char*)self + offset;
    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));    
}

static void ifs_tS_u4o_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_u4o_");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
         // LuaValToCSVal struct
    S_u4o_* pp = DataTransfer::GetPointer<S_u4o_>(apis, env, apis->get_arg(info, 0));
    S_u4o_ p = pp ? *pp : S_u4o_ {};
                    
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_u4u4i4u4i4u4u1i4i4u1i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_u4u4i4u4i4u4u1i4i4u1i4_");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
                
    auto ret = (char*)self + offset;
    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));    
}

static void ifs_tS_u4u4i4u4i4u4u1i4i4u1i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_u4u4i4u4i4u4u1i4i4u1i4_");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
         // LuaValToCSVal struct
    S_u4u4i4u4i4u4u1i4i4u1i4_* pp = DataTransfer::GetPointer<S_u4u4i4u4i4u4u1i4i4u1i4_>(apis, env, apis->get_arg(info, 0));
    S_u4u4i4u4i4u4u1i4i4u1i4_ p = pp ? *pp : S_u4u4i4u4i4u4u1i4i4u1i4_ {};
                    
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_u4u4u4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_u4u4u4i4_");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
                
    auto ret = (char*)self + offset;
    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));    
}

static void ifs_tS_u4u4u4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_u4u4u4i4_");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
         // LuaValToCSVal struct
    S_u4u4u4i4_* pp = DataTransfer::GetPointer<S_u4u4u4i4_>(apis, env, apis->get_arg(info, 0));
    S_u4u4u4i4_ p = pp ? *pp : S_u4u4u4i4_ {};
                    
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_u4u4u4u4u4u4u4u4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_u4u4u4u4u4u4u4u4_");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
                
    auto ret = (char*)self + offset;
    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));    
}

static void ifs_tS_u4u4u4u4u4u4u4u4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_u4u4u4u4u4u4u4u4_");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
         // LuaValToCSVal struct
    S_u4u4u4u4u4u4u4u4_* pp = DataTransfer::GetPointer<S_u4u4u4u4u4u4u4u4_>(apis, env, apis->get_arg(info, 0));
    S_u4u4u4u4u4u4u4u4_ p = pp ? *pp : S_u4u4u4u4u4u4u4u4_ {};
                    
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tb(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tb");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
        
    bool ret;
    GetFieldValue(self, fieldInfo, offset, &ret);

    apis->add_return(info, converter::Converter<bool>::toScript(apis, env, ret));    
}

static void ifs_tb(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tb");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
            
    // LuaValToCSVal P any
    bool p = converter::Converter<bool>::toCpp(apis, env, apis->get_arg(info, 0));
                    
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_ti1(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_ti1");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
        
    int8_t ret;
    GetFieldValue(self, fieldInfo, offset, &ret);

    apis->add_return(info, converter::Converter<int8_t>::toScript(apis, env, ret));    
}

static void ifs_ti1(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_ti1");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
            
    // LuaValToCSVal P any
    int8_t p = converter::Converter<int8_t>::toCpp(apis, env, apis->get_arg(info, 0));
                    
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_ti4(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_ti4");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
        
    int32_t ret;
    GetFieldValue(self, fieldInfo, offset, &ret);

    apis->add_return(info, converter::Converter<int32_t>::toScript(apis, env, ret));    
}

static void ifs_ti4(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_ti4");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
            
    // LuaValToCSVal P any
    int32_t p = converter::Converter<int32_t>::toCpp(apis, env, apis->get_arg(info, 0));
                    
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_ti8(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_ti8");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
        
    int64_t ret;
    GetFieldValue(self, fieldInfo, offset, &ret);

    apis->add_return(info, converter::Converter<int64_t>::toScript(apis, env, ret));    
}

static void ifs_ti8(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_ti8");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
            
    // LuaValToCSVal P any
    int64_t p = converter::Converter<int64_t>::toCpp(apis, env, apis->get_arg(info, 0));
                    
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_to(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_to");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
        
    Il2CppObject* ret;
    GetFieldValue(self, fieldInfo, offset, &ret);

    apis->add_return(info, CSRefToLuaValue(apis, env, TIret, ret));    
}

static void ifs_to(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_to");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
        
    // LuaValToCSVal o/O
    Il2CppObject* p = LuaValueToCSRef(apis, TIp, env, apis->get_arg(info, 0));
                    
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tr4(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tr4");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
        
    float ret;
    GetFieldValue(self, fieldInfo, offset, &ret);

    apis->add_return(info, converter::Converter<float>::toScript(apis, env, ret));    
}

static void ifs_tr4(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tr4");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
            
    // LuaValToCSVal P any
    float p = converter::Converter<float>::toCpp(apis, env, apis->get_arg(info, 0));
                    
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tr8(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tr8");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
        
    double ret;
    GetFieldValue(self, fieldInfo, offset, &ret);

    apis->add_return(info, converter::Converter<double>::toScript(apis, env, ret));    
}

static void ifs_tr8(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tr8");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
            
    // LuaValToCSVal P any
    double p = converter::Converter<double>::toCpp(apis, env, apis->get_arg(info, 0));
                    
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_ts(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_ts");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
        
    Il2CppString* ret;
    GetFieldValue(self, fieldInfo, offset, &ret);

    apis->add_return(info, converter::Converter<Il2CppString*>::toScript(apis, env, ret));    
}

static void ifs_ts(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_ts");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
        // LuaValToCSVal s
    Il2CppString* p = converter::Converter<Il2CppString*>::toCpp(apis, env, apis->get_arg(info, 0));            
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tu1(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tu1");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
        
    uint8_t ret;
    GetFieldValue(self, fieldInfo, offset, &ret);

    apis->add_return(info, converter::Converter<uint8_t>::toScript(apis, env, ret));    
}

static void ifs_tu1(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tu1");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
            
    // LuaValToCSVal P any
    uint8_t p = converter::Converter<uint8_t>::toCpp(apis, env, apis->get_arg(info, 0));
                    
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tu2(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tu2");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
        
    uint16_t ret;
    GetFieldValue(self, fieldInfo, offset, &ret);

    apis->add_return(info, converter::Converter<uint16_t>::toScript(apis, env, ret));    
}

static void ifs_tu2(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tu2");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
            
    // LuaValToCSVal P any
    uint16_t p = converter::Converter<uint16_t>::toCpp(apis, env, apis->get_arg(info, 0));
                    
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tu4(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tu4");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
        
    uint32_t ret;
    GetFieldValue(self, fieldInfo, offset, &ret);

    apis->add_return(info, converter::Converter<uint32_t>::toScript(apis, env, ret));    
}

static void ifs_tu4(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tu4");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
            
    // LuaValToCSVal P any
    uint32_t p = converter::Converter<uint32_t>::toCpp(apis, env, apis->get_arg(info, 0));
                    
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tu8(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tu8");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
        
    uint64_t ret;
    GetFieldValue(self, fieldInfo, offset, &ret);

    apis->add_return(info, converter::Converter<uint64_t>::toScript(apis, env, ret));    
}

static void ifs_tu8(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tu8");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
            
    // LuaValToCSVal P any
    uint64_t p = converter::Converter<uint64_t>::toCpp(apis, env, apis->get_arg(info, 0));
                    
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_u4(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_u4");
    pesapi_env env = apis->get_env(info);    
    uint32_t ret;
    GetFieldValue(nullptr, fieldInfo, offset, &ret);

    apis->add_return(info, converter::Converter<uint32_t>::toScript(apis, env, ret));    
}

static void ifs_u4(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_u4");
    pesapi_env env = apis->get_env(info);        
    // LuaValToCSVal P any
    uint32_t p = converter::Converter<uint32_t>::toCpp(apis, env, apis->get_arg(info, 0));
                    
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_u8(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_u8");
    pesapi_env env = apis->get_env(info);    
    uint64_t ret;
    GetFieldValue(nullptr, fieldInfo, offset, &ret);

    apis->add_return(info, converter::Converter<uint64_t>::toScript(apis, env, ret));    
}

static void ifs_u8(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_u8");
    pesapi_env env = apis->get_env(info);        
    // LuaValToCSVal P any
    uint64_t p = converter::Converter<uint64_t>::toCpp(apis, env, apis->get_arg(info, 0));
                    
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static FieldWrapFuncInfo g_fieldWrapFuncInfos[] = {
    {"O", ifg_O, ifs_O},
    {"S_i4i4_", ifg_S_i4i4_, ifs_S_i4i4_},
    {"S_i8_", ifg_S_i8_, ifs_S_i8_},
    {"S_r4r4_", ifg_S_r4r4_, ifs_S_r4r4_},
    {"S_r4r4r4_", ifg_S_r4r4r4_, ifs_S_r4r4r4_},
    {"S_r4r4r4r4_", ifg_S_r4r4r4r4_, ifs_S_r4r4r4r4_},
    {"S_r4r4r4r4r4r4_", ifg_S_r4r4r4r4r4r4_, ifs_S_r4r4r4r4r4r4_},
    {"S_u1u1u1u1_", ifg_S_u1u1u1u1_, ifs_S_u1u1u1u1_},
    {"S_u1u2u1u1S_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4__", ifg_S_u1u2u1u1S_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4__, ifs_S_u1u2u1u1S_S_u4u4u4u4u4u4u4u4_u4u4u1u4u4__},
    {"S_u4o_", ifg_S_u4o_, ifs_S_u4o_},
    {"S_u8_", ifg_S_u8_, ifs_S_u8_},
    {"b", ifg_b, ifs_b},
    {"c", ifg_c, ifs_c},
    {"i4", ifg_i4, ifs_i4},
    {"i8", ifg_i8, ifs_i8},
    {"o", ifg_o, ifs_o},
    {"r4", ifg_r4, ifs_r4},
    {"r8", ifg_r8, ifs_r8},
    {"s", ifg_s, ifs_s},
    {"tO", ifg_tO, ifs_tO},
    {"tS_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4_", ifg_tS_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4_, ifs_tS_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4_},
    {"tS_bb_", ifg_tS_bb_, ifs_tS_bb_},
    {"tS_bbbbi4i4i4_", ifg_tS_bbbbi4i4i4_, ifs_tS_bbbbi4i4i4_},
    {"tS_i4i4i4S_i4S_r4r4r4_r4r4i4_S_u1_i4u4u8u8S_r4_i4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_r4r4i4i4S_S_r4r4r4r4_S_r4r4r4_r4r4r4r4r4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4u4S_u1_S_u1_r4S_r4r4r4_S_r4_i4S_i4u4i4_u4i4i4_r4i4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_r4i4bi4_", ifg_tS_i4i4i4S_i4S_r4r4r4_r4r4i4_S_u1_i4u4u8u8S_r4_i4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_r4r4i4i4S_S_r4r4r4r4_S_r4r4r4_r4r4r4r4r4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4u4S_u1_S_u1_r4S_r4r4r4_S_r4_i4S_i4u4i4_u4i4i4_r4i4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_r4i4bi4_, ifs_tS_i4i4i4S_i4S_r4r4r4_r4r4i4_S_u1_i4u4u8u8S_r4_i4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_r4r4i4i4S_S_r4r4r4r4_S_r4r4r4_r4r4r4r4r4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4u4S_u1_S_u1_r4S_r4r4r4_S_r4_i4S_i4u4i4_u4i4i4_r4i4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_r4i4bi4_},
    {"tS_i4i4i4_", ifg_tS_i4i4i4_, ifs_tS_i4i4i4_},
    {"tS_i4i4ossOosi4i4i1i1i1i4Oob_", ifg_tS_i4i4ossOosi4i4i1i1i1i4Oob_, ifs_tS_i4i4ossOosi4i4i1i1i1i4Oob_},
    {"tS_oi4i4i4i4i4o_", ifg_tS_oi4i4i4i4i4o_, ifs_tS_oi4i4i4i4i4o_},
    {"tS_r4r4_", ifg_tS_r4r4_, ifs_tS_r4r4_},
    {"tS_r4r4r4_", ifg_tS_r4r4r4_, ifs_tS_r4r4r4_},
    {"tS_r4r4r4r4_", ifg_tS_r4r4r4r4_, ifs_tS_r4r4r4r4_},
    {"tS_u4o_", ifg_tS_u4o_, ifs_tS_u4o_},
    {"tS_u4u4i4u4i4u4u1i4i4u1i4_", ifg_tS_u4u4i4u4i4u4u1i4i4u1i4_, ifs_tS_u4u4i4u4i4u4u1i4i4u1i4_},
    {"tS_u4u4u4i4_", ifg_tS_u4u4u4i4_, ifs_tS_u4u4u4i4_},
    {"tS_u4u4u4u4u4u4u4u4_", ifg_tS_u4u4u4u4u4u4u4u4_, ifs_tS_u4u4u4u4u4u4u4u4_},
    {"tb", ifg_tb, ifs_tb},
    {"ti1", ifg_ti1, ifs_ti1},
    {"ti4", ifg_ti4, ifs_ti4},
    {"ti8", ifg_ti8, ifs_ti8},
    {"to", ifg_to, ifs_to},
    {"tr4", ifg_tr4, ifs_tr4},
    {"tr8", ifg_tr8, ifs_tr8},
    {"ts", ifg_ts, ifs_ts},
    {"tu1", ifg_tu1, ifs_tu1},
    {"tu2", ifg_tu2, ifs_tu2},
    {"tu4", ifg_tu4, ifs_tu4},
    {"tu8", ifg_tu8, ifs_tu8},
    {"u4", ifg_u4, ifs_u4},
    {"u8", ifg_u8, ifs_u8},
    {nullptr, nullptr, nullptr}
};

FieldWrapFuncInfo * FindFieldWrapFuncInfo(const char* signature)
{
    auto begin = &g_fieldWrapFuncInfos[0];
    auto end = &g_fieldWrapFuncInfos[sizeof(g_fieldWrapFuncInfos) / sizeof(FieldWrapFuncInfo) - 1];
    auto first = std::lower_bound(begin, end, signature, [](const FieldWrapFuncInfo& x, const char* signature) {return strcmp(x.Signature, signature) < 0;});
    if (first != end && strcmp(first->Signature, signature) == 0) {
        return first;
    }
    return nullptr;
}

}
