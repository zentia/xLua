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
static void ifg_S__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S__");
    pesapi_env env = apis->get_env(info);    
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);
    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));    
}

static void ifs_S__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S__");
    pesapi_env env = apis->get_env(info);     // LuaValToCSVal struct
    S__* pp = DataTransfer::GetPointer<S__>(apis, env, apis->get_arg(info, 0));
    S__ p = pp ? *pp : S__ {};
                    
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

static void ifg_i1(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_i1");
    pesapi_env env = apis->get_env(info);    
    int8_t ret;
    GetFieldValue(nullptr, fieldInfo, offset, &ret);

    apis->add_return(info, converter::Converter<int8_t>::toScript(apis, env, ret));    
}

static void ifs_i1(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_i1");
    pesapi_env env = apis->get_env(info);        
    // LuaValToCSVal P any
    int8_t p = converter::Converter<int8_t>::toCpp(apis, env, apis->get_arg(info, 0));
                    
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_i2(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_i2");
    pesapi_env env = apis->get_env(info);    
    int16_t ret;
    GetFieldValue(nullptr, fieldInfo, offset, &ret);

    apis->add_return(info, converter::Converter<int16_t>::toScript(apis, env, ret));    
}

static void ifs_i2(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_i2");
    pesapi_env env = apis->get_env(info);        
    // LuaValToCSVal P any
    int16_t p = converter::Converter<int16_t>::toCpp(apis, env, apis->get_arg(info, 0));
                    
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

static void ifg_tS__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS__");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
                
    auto ret = (char*)self + offset;
    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));    
}

static void ifs_tS__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS__");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
         // LuaValToCSVal struct
    S__* pp = DataTransfer::GetPointer<S__>(apis, env, apis->get_arg(info, 0));
    S__ p = pp ? *pp : S__ {};
                    
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

static void ifg_tc(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tc");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
        
    Il2CppChar ret;
    GetFieldValue(self, fieldInfo, offset, &ret);

    apis->add_return(info, converter::Converter<Il2CppChar>::toScript(apis, env, ret));    
}

static void ifs_tc(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tc");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
            
    // LuaValToCSVal P any
    Il2CppChar p = converter::Converter<Il2CppChar>::toCpp(apis, env, apis->get_arg(info, 0));
                    
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

static void ifg_ti2(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_ti2");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
        
    int16_t ret;
    GetFieldValue(self, fieldInfo, offset, &ret);

    apis->add_return(info, converter::Converter<int16_t>::toScript(apis, env, ret));    
}

static void ifs_ti2(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_ti2");
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
            
    // LuaValToCSVal P any
    int16_t p = converter::Converter<int16_t>::toCpp(apis, env, apis->get_arg(info, 0));
                    
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

static void ifg_u2(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_u2");
    pesapi_env env = apis->get_env(info);    
    uint16_t ret;
    GetFieldValue(nullptr, fieldInfo, offset, &ret);

    apis->add_return(info, converter::Converter<uint16_t>::toScript(apis, env, ret));    
}

static void ifs_u2(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_u2");
    pesapi_env env = apis->get_env(info);        
    // LuaValToCSVal P any
    uint16_t p = converter::Converter<uint16_t>::toCpp(apis, env, apis->get_arg(info, 0));
                    
    SetFieldValue(nullptr, fieldInfo, offset, &p);
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
    {"S__", ifg_S__, ifs_S__},
    {"S_r4r4r4_", ifg_S_r4r4r4_, ifs_S_r4r4r4_},
    {"c", ifg_c, ifs_c},
    {"i1", ifg_i1, ifs_i1},
    {"i2", ifg_i2, ifs_i2},
    {"i4", ifg_i4, ifs_i4},
    {"i8", ifg_i8, ifs_i8},
    {"o", ifg_o, ifs_o},
    {"r4", ifg_r4, ifs_r4},
    {"r8", ifg_r8, ifs_r8},
    {"s", ifg_s, ifs_s},
    {"tS__", ifg_tS__, ifs_tS__},
    {"tS_r4r4r4_", ifg_tS_r4r4r4_, ifs_tS_r4r4r4_},
    {"tc", ifg_tc, ifs_tc},
    {"ti1", ifg_ti1, ifs_ti1},
    {"ti2", ifg_ti2, ifs_ti2},
    {"ti4", ifg_ti4, ifs_ti4},
    {"ti8", ifg_ti8, ifs_ti8},
    {"to", ifg_to, ifs_to},
    {"tr4", ifg_tr4, ifs_tr4},
    {"tr8", ifg_tr8, ifs_tr8},
    {"ts", ifg_ts, ifs_ts},
    {"tu2", ifg_tu2, ifs_tu2},
    {"tu4", ifg_tu4, ifs_tu4},
    {"tu8", ifg_tu8, ifs_tu8},
    {"u2", ifg_u2, ifs_u2},
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
