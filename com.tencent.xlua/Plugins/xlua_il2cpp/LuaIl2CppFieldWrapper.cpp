// Auto Gen

#include "il2cpp-api.h"
#include "il2cpp-class-internals.h"
#include "il2cpp-object-internals.h"
#include "pesapi.h"
#include "TDataTrans.h"
#include "LuaValueType.h"

namespace xlua
{
static bool ifg_O(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) 
{
    pesapi_env env = apis->get_env(info);        
    Il2CppObject* ret;
    GetFieldValue(nullptr, fieldInfo, offset, &ret);
    apis->add_return(info, CSRefToLuaValue(apis, env, TIret, ret));            
    return true;
}

static bool ifs_O(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) 
{
    pesapi_env env = apis->get_env(info);
    // LuaValToCSVal o/O
    Il2CppObject* p = LuaValueToCSRef(apis, TIp, env, apis->get_arg(info, 0));

	SetFieldValue(nullptr, fieldInfo, offset, &p);
    return true;    
}

static bool ifg_S_i4i2i2u1u1u1u1u1u1u1u1_(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) 
{
    pesapi_env env = apis->get_env(info);
    auto _src = (S_i4i2i2u1u1u1u1u1u1u1u1_*)GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, DataTransfer::CopyValueType<S_i4i2i2u1u1u1u1u1u1u1u1_>(apis, env, *_src, TIret));            
    return true;
}

static bool ifs_S_i4i2i2u1u1u1u1u1u1u1u1_(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) 
{
    pesapi_env env = apis->get_env(info);    // LuaValToCSVal struct
    S_i4i2i2u1u1u1u1u1u1u1u1_* pp = xlua::DataTransfer::GetPointer<S_i4i2i2u1u1u1u1u1u1u1u1_>(apis, env, apis->get_arg(info, 0));
    S_i4i2i2u1u1u1u1u1u1u1u1_ p = pp ? *pp : S_i4i2i2u1u1u1u1u1u1u1u1_ {};
        
	SetFieldValue(nullptr, fieldInfo, offset, &p);
    return true;    
}

static bool ifg_S_i4i4_(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) 
{
    pesapi_env env = apis->get_env(info);
    auto _src = (S_i4i4_*)GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, DataTransfer::CopyValueType<S_i4i4_>(apis, env, *_src, TIret));            
    return true;
}

static bool ifs_S_i4i4_(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) 
{
    pesapi_env env = apis->get_env(info);    // LuaValToCSVal struct
    S_i4i4_* pp = xlua::DataTransfer::GetPointer<S_i4i4_>(apis, env, apis->get_arg(info, 0));
    S_i4i4_ p = pp ? *pp : S_i4i4_ {};
        
	SetFieldValue(nullptr, fieldInfo, offset, &p);
    return true;    
}

static bool ifg_S_r4r4_(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) 
{
    pesapi_env env = apis->get_env(info);
    auto _src = (S_r4r4_*)GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, DataTransfer::CopyValueType<S_r4r4_>(apis, env, *_src, TIret));            
    return true;
}

static bool ifs_S_r4r4_(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) 
{
    pesapi_env env = apis->get_env(info);    // LuaValToCSVal struct
    S_r4r4_* pp = xlua::DataTransfer::GetPointer<S_r4r4_>(apis, env, apis->get_arg(info, 0));
    S_r4r4_ p = pp ? *pp : S_r4r4_ {};
        
	SetFieldValue(nullptr, fieldInfo, offset, &p);
    return true;    
}

static bool ifg_S_r4r4r4_(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) 
{
    pesapi_env env = apis->get_env(info);
    auto _src = (S_r4r4r4_*)GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, DataTransfer::CopyValueType<S_r4r4r4_>(apis, env, *_src, TIret));            
    return true;
}

static bool ifs_S_r4r4r4_(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) 
{
    pesapi_env env = apis->get_env(info);    // LuaValToCSVal struct
    S_r4r4r4_* pp = xlua::DataTransfer::GetPointer<S_r4r4r4_>(apis, env, apis->get_arg(info, 0));
    S_r4r4r4_ p = pp ? *pp : S_r4r4r4_ {};
        
	SetFieldValue(nullptr, fieldInfo, offset, &p);
    return true;    
}

static bool ifg_S_r4r4r4r4_(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) 
{
    pesapi_env env = apis->get_env(info);
    auto _src = (S_r4r4r4r4_*)GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, DataTransfer::CopyValueType<S_r4r4r4r4_>(apis, env, *_src, TIret));            
    return true;
}

static bool ifs_S_r4r4r4r4_(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) 
{
    pesapi_env env = apis->get_env(info);    // LuaValToCSVal struct
    S_r4r4r4r4_* pp = xlua::DataTransfer::GetPointer<S_r4r4r4r4_>(apis, env, apis->get_arg(info, 0));
    S_r4r4r4r4_ p = pp ? *pp : S_r4r4r4r4_ {};
        
	SetFieldValue(nullptr, fieldInfo, offset, &p);
    return true;    
}

static bool ifg_S_r4r4r4r4r4r4_(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) 
{
    pesapi_env env = apis->get_env(info);
    auto _src = (S_r4r4r4r4r4r4_*)GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, DataTransfer::CopyValueType<S_r4r4r4r4r4r4_>(apis, env, *_src, TIret));            
    return true;
}

static bool ifs_S_r4r4r4r4r4r4_(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) 
{
    pesapi_env env = apis->get_env(info);    // LuaValToCSVal struct
    S_r4r4r4r4r4r4_* pp = xlua::DataTransfer::GetPointer<S_r4r4r4r4r4r4_>(apis, env, apis->get_arg(info, 0));
    S_r4r4r4r4r4r4_ p = pp ? *pp : S_r4r4r4r4r4r4_ {};
        
	SetFieldValue(nullptr, fieldInfo, offset, &p);
    return true;    
}

static bool ifg_S_u1u1u1u1_(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) 
{
    pesapi_env env = apis->get_env(info);
    auto _src = (S_u1u1u1u1_*)GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, DataTransfer::CopyValueType<S_u1u1u1u1_>(apis, env, *_src, TIret));            
    return true;
}

static bool ifs_S_u1u1u1u1_(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) 
{
    pesapi_env env = apis->get_env(info);    // LuaValToCSVal struct
    S_u1u1u1u1_* pp = xlua::DataTransfer::GetPointer<S_u1u1u1u1_>(apis, env, apis->get_arg(info, 0));
    S_u1u1u1u1_ p = pp ? *pp : S_u1u1u1u1_ {};
        
	SetFieldValue(nullptr, fieldInfo, offset, &p);
    return true;    
}

static bool ifg_S_u4o_(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) 
{
    pesapi_env env = apis->get_env(info);
    auto _src = (S_u4o_*)GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, DataTransfer::CopyValueType<S_u4o_>(apis, env, *_src, TIret));            
    return true;
}

static bool ifs_S_u4o_(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) 
{
    pesapi_env env = apis->get_env(info);    // LuaValToCSVal struct
    S_u4o_* pp = xlua::DataTransfer::GetPointer<S_u4o_>(apis, env, apis->get_arg(info, 0));
    S_u4o_ p = pp ? *pp : S_u4o_ {};
        
	SetFieldValue(nullptr, fieldInfo, offset, &p);
    return true;    
}

static bool ifg_S_u4u4_(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) 
{
    pesapi_env env = apis->get_env(info);
    auto _src = (S_u4u4_*)GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, DataTransfer::CopyValueType<S_u4u4_>(apis, env, *_src, TIret));            
    return true;
}

static bool ifs_S_u4u4_(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) 
{
    pesapi_env env = apis->get_env(info);    // LuaValToCSVal struct
    S_u4u4_* pp = xlua::DataTransfer::GetPointer<S_u4u4_>(apis, env, apis->get_arg(info, 0));
    S_u4u4_ p = pp ? *pp : S_u4u4_ {};
        
	SetFieldValue(nullptr, fieldInfo, offset, &p);
    return true;    
}

static bool ifg_S_u8_(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) 
{
    pesapi_env env = apis->get_env(info);
    auto _src = (S_u8_*)GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, DataTransfer::CopyValueType<S_u8_>(apis, env, *_src, TIret));            
    return true;
}

static bool ifs_S_u8_(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) 
{
    pesapi_env env = apis->get_env(info);    // LuaValToCSVal struct
    S_u8_* pp = xlua::DataTransfer::GetPointer<S_u8_>(apis, env, apis->get_arg(info, 0));
    S_u8_ p = pp ? *pp : S_u8_ {};
        
	SetFieldValue(nullptr, fieldInfo, offset, &p);
    return true;    
}

static bool ifg_b(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) 
{
    pesapi_env env = apis->get_env(info);        
    bool ret;
    GetFieldValue(nullptr, fieldInfo, offset, &ret);
    apis->add_return(info, converter::Converter<bool>::toScript(apis, env, ret));            
    return true;
}

static bool ifs_b(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) 
{
    pesapi_env env = apis->get_env(info);    // LuaValToCSVal P any
    bool p = converter::Converter<bool>::toCpp(apis, env, apis->get_arg(info, 0));

	SetFieldValue(nullptr, fieldInfo, offset, &p);
    return true;    
}

static bool ifg_c(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) 
{
    pesapi_env env = apis->get_env(info);        
    Il2CppChar ret;
    GetFieldValue(nullptr, fieldInfo, offset, &ret);
    apis->add_return(info, converter::Converter<Il2CppChar>::toScript(apis, env, ret));            
    return true;
}

static bool ifs_c(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) 
{
    pesapi_env env = apis->get_env(info);    // LuaValToCSVal P any
    Il2CppChar p = converter::Converter<Il2CppChar>::toCpp(apis, env, apis->get_arg(info, 0));

	SetFieldValue(nullptr, fieldInfo, offset, &p);
    return true;    
}

static bool ifg_i4(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) 
{
    pesapi_env env = apis->get_env(info);        
    int32_t ret;
    GetFieldValue(nullptr, fieldInfo, offset, &ret);
    apis->add_return(info, converter::Converter<int32_t>::toScript(apis, env, ret));            
    return true;
}

static bool ifs_i4(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) 
{
    pesapi_env env = apis->get_env(info);    // LuaValToCSVal P any
    int32_t p = converter::Converter<int32_t>::toCpp(apis, env, apis->get_arg(info, 0));

	SetFieldValue(nullptr, fieldInfo, offset, &p);
    return true;    
}

static bool ifg_i8(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) 
{
    pesapi_env env = apis->get_env(info);        
    int64_t ret;
    GetFieldValue(nullptr, fieldInfo, offset, &ret);
    apis->add_return(info, converter::Converter<int64_t>::toScript(apis, env, ret));            
    return true;
}

static bool ifs_i8(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) 
{
    pesapi_env env = apis->get_env(info);    // LuaValToCSVal P any
    int64_t p = converter::Converter<int64_t>::toCpp(apis, env, apis->get_arg(info, 0));

	SetFieldValue(nullptr, fieldInfo, offset, &p);
    return true;    
}

static bool ifg_o(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) 
{
    pesapi_env env = apis->get_env(info);        
    Il2CppObject* ret;
    GetFieldValue(nullptr, fieldInfo, offset, &ret);
    apis->add_return(info, CSRefToLuaValue(apis, env, TIret, ret));            
    return true;
}

static bool ifs_o(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) 
{
    pesapi_env env = apis->get_env(info);
    // LuaValToCSVal o/O
    Il2CppObject* p = LuaValueToCSRef(apis, TIp, env, apis->get_arg(info, 0));

	SetFieldValue(nullptr, fieldInfo, offset, p);
    return true;    
}

static bool ifg_p(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) 
{
    pesapi_env env = apis->get_env(info);        
    void* ret;
    GetFieldValue(nullptr, fieldInfo, offset, &ret);
    apis->add_return(info, apis->create_binary(env, ret, 0));            
    return true;
}

static bool ifs_p(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) 
{
    pesapi_env env = apis->get_env(info);    // LuaValToCSVal P any
    void* p = xlua::DataTransfer::GetPointer(apis, env, apis->get_arg(info, 0));

	SetFieldValue(nullptr, fieldInfo, offset, p);
    return true;    
}

static bool ifg_r4(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) 
{
    pesapi_env env = apis->get_env(info);        
    float ret;
    GetFieldValue(nullptr, fieldInfo, offset, &ret);
    apis->add_return(info, converter::Converter<float>::toScript(apis, env, ret));            
    return true;
}

static bool ifs_r4(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) 
{
    pesapi_env env = apis->get_env(info);    // LuaValToCSVal P any
    float p = converter::Converter<float>::toCpp(apis, env, apis->get_arg(info, 0));

	SetFieldValue(nullptr, fieldInfo, offset, &p);
    return true;    
}

static bool ifg_r8(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) 
{
    pesapi_env env = apis->get_env(info);        
    double ret;
    GetFieldValue(nullptr, fieldInfo, offset, &ret);
    apis->add_return(info, converter::Converter<double>::toScript(apis, env, ret));            
    return true;
}

static bool ifs_r8(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) 
{
    pesapi_env env = apis->get_env(info);    // LuaValToCSVal P any
    double p = converter::Converter<double>::toCpp(apis, env, apis->get_arg(info, 0));

	SetFieldValue(nullptr, fieldInfo, offset, &p);
    return true;    
}

static bool ifg_s(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) 
{
    pesapi_env env = apis->get_env(info);        
    Il2CppString* ret;
    GetFieldValue(nullptr, fieldInfo, offset, &ret);
    apis->add_return(info, converter::Converter<Il2CppString*>::toScript(apis, env, ret));            
    return true;
}

static bool ifs_s(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) 
{
    pesapi_env env = apis->get_env(info);    // LuaValToCSVal s
    Il2CppString* p = converter::Converter<Il2CppString*>::toCpp(apis, env, apis->get_arg(info, 0));
	SetFieldValue(nullptr, fieldInfo, offset, p);
    return true;    
}

static bool ifg_tO(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }

        
    Il2CppObject* ret;
    GetFieldValue(self, fieldInfo, offset, &ret);
    apis->add_return(info, CSRefToLuaValue(apis, env, TIret, ret));            
    return true;
}

static bool ifs_tO(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }


    // LuaValToCSVal o/O
    Il2CppObject* p = LuaValueToCSRef(apis, TIp, env, apis->get_arg(info, 0));

	SetFieldValue(self, fieldInfo, offset, &p);
    return true;    
}

static bool ifg_tS_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4S_r4r4r4_r4r4r4_(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }


    auto _src = (S_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4S_r4r4r4_r4r4r4_*)((char*)self + offset);

    apis->add_return(info, DataTransfer::CopyValueType<S_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4S_r4r4r4_r4r4r4_>(apis, env, *_src, TIret));            
    return true;
}

static bool ifs_tS_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4S_r4r4r4_r4r4r4_(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }

    // LuaValToCSVal struct
    S_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4S_r4r4r4_r4r4r4_* pp = xlua::DataTransfer::GetPointer<S_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4S_r4r4r4_r4r4r4_>(apis, env, apis->get_arg(info, 0));
    S_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4S_r4r4r4_r4r4r4_ p = pp ? *pp : S_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4S_r4r4r4_r4r4r4_ {};
        
	SetFieldValue(self, fieldInfo, offset, &p);
    return true;    
}

static bool ifg_tS_bbbbbbbbi4i4i4_(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }


    auto _src = (S_bbbbbbbbi4i4i4_*)((char*)self + offset);

    apis->add_return(info, DataTransfer::CopyValueType<S_bbbbbbbbi4i4i4_>(apis, env, *_src, TIret));            
    return true;
}

static bool ifs_tS_bbbbbbbbi4i4i4_(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }

    // LuaValToCSVal struct
    S_bbbbbbbbi4i4i4_* pp = xlua::DataTransfer::GetPointer<S_bbbbbbbbi4i4i4_>(apis, env, apis->get_arg(info, 0));
    S_bbbbbbbbi4i4i4_ p = pp ? *pp : S_bbbbbbbbi4i4i4_ {};
        
	SetFieldValue(self, fieldInfo, offset, &p);
    return true;    
}

static bool ifg_tS_bbbi4b_(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }


    auto _src = (S_bbbi4b_*)((char*)self + offset);

    apis->add_return(info, DataTransfer::CopyValueType<S_bbbi4b_>(apis, env, *_src, TIret));            
    return true;
}

static bool ifs_tS_bbbi4b_(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }

    // LuaValToCSVal struct
    S_bbbi4b_* pp = xlua::DataTransfer::GetPointer<S_bbbi4b_>(apis, env, apis->get_arg(info, 0));
    S_bbbi4b_ p = pp ? *pp : S_bbbi4b_ {};
        
	SetFieldValue(self, fieldInfo, offset, &p);
    return true;    
}

static bool ifg_tS_i4i4_(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }


    auto _src = (S_i4i4_*)((char*)self + offset);

    apis->add_return(info, DataTransfer::CopyValueType<S_i4i4_>(apis, env, *_src, TIret));            
    return true;
}

static bool ifs_tS_i4i4_(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }

    // LuaValToCSVal struct
    S_i4i4_* pp = xlua::DataTransfer::GetPointer<S_i4i4_>(apis, env, apis->get_arg(info, 0));
    S_i4i4_ p = pp ? *pp : S_i4i4_ {};
        
	SetFieldValue(self, fieldInfo, offset, &p);
    return true;    
}

static bool ifg_tS_i4i4i4_(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }


    auto _src = (S_i4i4i4_*)((char*)self + offset);

    apis->add_return(info, DataTransfer::CopyValueType<S_i4i4i4_>(apis, env, *_src, TIret));            
    return true;
}

static bool ifs_tS_i4i4i4_(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }

    // LuaValToCSVal struct
    S_i4i4i4_* pp = xlua::DataTransfer::GetPointer<S_i4i4i4_>(apis, env, apis->get_arg(info, 0));
    S_i4i4i4_ p = pp ? *pp : S_i4i4i4_ {};
        
	SetFieldValue(self, fieldInfo, offset, &p);
    return true;    
}

static bool ifg_tS_i4i4ossOososOi4i4i4i4i4i4i1i1i1i1bi4o_(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }


    auto _src = (S_i4i4ossOososOi4i4i4i4i4i4i1i1i1i1bi4o_*)((char*)self + offset);

    apis->add_return(info, DataTransfer::CopyValueType<S_i4i4ossOososOi4i4i4i4i4i4i1i1i1i1bi4o_>(apis, env, *_src, TIret));            
    return true;
}

static bool ifs_tS_i4i4ossOososOi4i4i4i4i4i4i1i1i1i1bi4o_(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }

    // LuaValToCSVal struct
    S_i4i4ossOososOi4i4i4i4i4i4i1i1i1i1bi4o_* pp = xlua::DataTransfer::GetPointer<S_i4i4ossOososOi4i4i4i4i4i4i1i1i1i1bi4o_>(apis, env, apis->get_arg(info, 0));
    S_i4i4ossOososOi4i4i4i4i4i4i1i1i1i1bi4o_ p = pp ? *pp : S_i4i4ossOososOi4i4i4i4i4i4i1i1i1i1bi4o_ {};
        
	SetFieldValue(self, fieldInfo, offset, &p);
    return true;    
}

static bool ifg_tS_ooi4_(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }


    auto _src = (S_ooi4_*)((char*)self + offset);

    apis->add_return(info, DataTransfer::CopyValueType<S_ooi4_>(apis, env, *_src, TIret));            
    return true;
}

static bool ifs_tS_ooi4_(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }

    // LuaValToCSVal struct
    S_ooi4_* pp = xlua::DataTransfer::GetPointer<S_ooi4_>(apis, env, apis->get_arg(info, 0));
    S_ooi4_ p = pp ? *pp : S_ooi4_ {};
        
	SetFieldValue(self, fieldInfo, offset, &p);
    return true;    
}

static bool ifg_tS_r4r4_(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }


    auto _src = (S_r4r4_*)((char*)self + offset);

    apis->add_return(info, DataTransfer::CopyValueType<S_r4r4_>(apis, env, *_src, TIret));            
    return true;
}

static bool ifs_tS_r4r4_(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }

    // LuaValToCSVal struct
    S_r4r4_* pp = xlua::DataTransfer::GetPointer<S_r4r4_>(apis, env, apis->get_arg(info, 0));
    S_r4r4_ p = pp ? *pp : S_r4r4_ {};
        
	SetFieldValue(self, fieldInfo, offset, &p);
    return true;    
}

static bool ifg_tS_r4r4r4_(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }


    auto _src = (S_r4r4r4_*)((char*)self + offset);

    apis->add_return(info, DataTransfer::CopyValueType<S_r4r4r4_>(apis, env, *_src, TIret));            
    return true;
}

static bool ifs_tS_r4r4r4_(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }

    // LuaValToCSVal struct
    S_r4r4r4_* pp = xlua::DataTransfer::GetPointer<S_r4r4r4_>(apis, env, apis->get_arg(info, 0));
    S_r4r4r4_ p = pp ? *pp : S_r4r4r4_ {};
        
	SetFieldValue(self, fieldInfo, offset, &p);
    return true;    
}

static bool ifg_tS_r4r4r4r4_(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }


    auto _src = (S_r4r4r4r4_*)((char*)self + offset);

    apis->add_return(info, DataTransfer::CopyValueType<S_r4r4r4r4_>(apis, env, *_src, TIret));            
    return true;
}

static bool ifs_tS_r4r4r4r4_(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }

    // LuaValToCSVal struct
    S_r4r4r4r4_* pp = xlua::DataTransfer::GetPointer<S_r4r4r4r4_>(apis, env, apis->get_arg(info, 0));
    S_r4r4r4r4_ p = pp ? *pp : S_r4r4r4r4_ {};
        
	SetFieldValue(self, fieldInfo, offset, &p);
    return true;    
}

static bool ifg_tS_u4o_(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }


    auto _src = (S_u4o_*)((char*)self + offset);

    apis->add_return(info, DataTransfer::CopyValueType<S_u4o_>(apis, env, *_src, TIret));            
    return true;
}

static bool ifs_tS_u4o_(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }

    // LuaValToCSVal struct
    S_u4o_* pp = xlua::DataTransfer::GetPointer<S_u4o_>(apis, env, apis->get_arg(info, 0));
    S_u4o_ p = pp ? *pp : S_u4o_ {};
        
	SetFieldValue(self, fieldInfo, offset, &p);
    return true;    
}

static bool ifg_tS_u4u4_(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }


    auto _src = (S_u4u4_*)((char*)self + offset);

    apis->add_return(info, DataTransfer::CopyValueType<S_u4u4_>(apis, env, *_src, TIret));            
    return true;
}

static bool ifs_tS_u4u4_(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }

    // LuaValToCSVal struct
    S_u4u4_* pp = xlua::DataTransfer::GetPointer<S_u4u4_>(apis, env, apis->get_arg(info, 0));
    S_u4u4_ p = pp ? *pp : S_u4u4_ {};
        
	SetFieldValue(self, fieldInfo, offset, &p);
    return true;    
}

static bool ifg_tS_u4u4i4i4u4u1i4i4u1i4u4_(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }


    auto _src = (S_u4u4i4i4u4u1i4i4u1i4u4_*)((char*)self + offset);

    apis->add_return(info, DataTransfer::CopyValueType<S_u4u4i4i4u4u1i4i4u1i4u4_>(apis, env, *_src, TIret));            
    return true;
}

static bool ifs_tS_u4u4i4i4u4u1i4i4u1i4u4_(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }

    // LuaValToCSVal struct
    S_u4u4i4i4u4u1i4i4u1i4u4_* pp = xlua::DataTransfer::GetPointer<S_u4u4i4i4u4u1i4i4u1i4u4_>(apis, env, apis->get_arg(info, 0));
    S_u4u4i4i4u4u1i4i4u1i4u4_ p = pp ? *pp : S_u4u4i4i4u4u1i4i4u1i4u4_ {};
        
	SetFieldValue(self, fieldInfo, offset, &p);
    return true;    
}

static bool ifg_ta(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }

        
    Il2CppObject* ret;
    GetFieldValue(self, fieldInfo, offset, &ret);
    apis->add_return(info, CSRefToLuaValue(apis, env, TIret, ret));            
    return true;
}

static bool ifs_ta(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }


    // LuaValToCSVal o/O
    Il2CppObject* p = LuaValueToCSRef(apis, TIp, env, apis->get_arg(info, 0));

	SetFieldValue(self, fieldInfo, offset, &p);
    return true;    
}

static bool ifg_tb(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }

        
    bool ret;
    GetFieldValue(self, fieldInfo, offset, &ret);
    apis->add_return(info, converter::Converter<bool>::toScript(apis, env, ret));            
    return true;
}

static bool ifs_tb(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }

    // LuaValToCSVal P any
    bool p = converter::Converter<bool>::toCpp(apis, env, apis->get_arg(info, 0));

	SetFieldValue(self, fieldInfo, offset, &p);
    return true;    
}

static bool ifg_ti1(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }

        
    int8_t ret;
    GetFieldValue(self, fieldInfo, offset, &ret);
    apis->add_return(info, converter::Converter<int8_t>::toScript(apis, env, ret));            
    return true;
}

static bool ifs_ti1(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }

    // LuaValToCSVal P any
    int8_t p = converter::Converter<int8_t>::toCpp(apis, env, apis->get_arg(info, 0));

	SetFieldValue(self, fieldInfo, offset, &p);
    return true;    
}

static bool ifg_ti4(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }

        
    int32_t ret;
    GetFieldValue(self, fieldInfo, offset, &ret);
    apis->add_return(info, converter::Converter<int32_t>::toScript(apis, env, ret));            
    return true;
}

static bool ifs_ti4(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }

    // LuaValToCSVal P any
    int32_t p = converter::Converter<int32_t>::toCpp(apis, env, apis->get_arg(info, 0));

	SetFieldValue(self, fieldInfo, offset, &p);
    return true;    
}

static bool ifg_ti8(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }

        
    int64_t ret;
    GetFieldValue(self, fieldInfo, offset, &ret);
    apis->add_return(info, converter::Converter<int64_t>::toScript(apis, env, ret));            
    return true;
}

static bool ifs_ti8(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }

    // LuaValToCSVal P any
    int64_t p = converter::Converter<int64_t>::toCpp(apis, env, apis->get_arg(info, 0));

	SetFieldValue(self, fieldInfo, offset, &p);
    return true;    
}

static bool ifg_to(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }

        
    Il2CppObject* ret;
    GetFieldValue(self, fieldInfo, offset, &ret);
    apis->add_return(info, CSRefToLuaValue(apis, env, TIret, ret));            
    return true;
}

static bool ifs_to(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }


    // LuaValToCSVal o/O
    Il2CppObject* p = LuaValueToCSRef(apis, TIp, env, apis->get_arg(info, 0));

	SetFieldValue(self, fieldInfo, offset, &p);
    return true;    
}

static bool ifg_tr4(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }

        
    float ret;
    GetFieldValue(self, fieldInfo, offset, &ret);
    apis->add_return(info, converter::Converter<float>::toScript(apis, env, ret));            
    return true;
}

static bool ifs_tr4(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }

    // LuaValToCSVal P any
    float p = converter::Converter<float>::toCpp(apis, env, apis->get_arg(info, 0));

	SetFieldValue(self, fieldInfo, offset, &p);
    return true;    
}

static bool ifg_tr8(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }

        
    double ret;
    GetFieldValue(self, fieldInfo, offset, &ret);
    apis->add_return(info, converter::Converter<double>::toScript(apis, env, ret));            
    return true;
}

static bool ifs_tr8(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }

    // LuaValToCSVal P any
    double p = converter::Converter<double>::toCpp(apis, env, apis->get_arg(info, 0));

	SetFieldValue(self, fieldInfo, offset, &p);
    return true;    
}

static bool ifg_ts(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }

        
    Il2CppString* ret;
    GetFieldValue(self, fieldInfo, offset, &ret);
    apis->add_return(info, converter::Converter<Il2CppString*>::toScript(apis, env, ret));            
    return true;
}

static bool ifs_ts(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }

    // LuaValToCSVal s
    Il2CppString* p = converter::Converter<Il2CppString*>::toCpp(apis, env, apis->get_arg(info, 0));
	SetFieldValue(self, fieldInfo, offset, &p);
    return true;    
}

static bool ifg_tu1(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }

        
    uint8_t ret;
    GetFieldValue(self, fieldInfo, offset, &ret);
    apis->add_return(info, converter::Converter<uint8_t>::toScript(apis, env, ret));            
    return true;
}

static bool ifs_tu1(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }

    // LuaValToCSVal P any
    uint8_t p = converter::Converter<uint8_t>::toCpp(apis, env, apis->get_arg(info, 0));

	SetFieldValue(self, fieldInfo, offset, &p);
    return true;    
}

static bool ifg_tu4(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }

        
    uint32_t ret;
    GetFieldValue(self, fieldInfo, offset, &ret);
    apis->add_return(info, converter::Converter<uint32_t>::toScript(apis, env, ret));            
    return true;
}

static bool ifs_tu4(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }

    // LuaValToCSVal P any
    uint32_t p = converter::Converter<uint32_t>::toCpp(apis, env, apis->get_arg(info, 0));

	SetFieldValue(self, fieldInfo, offset, &p);
    return true;    
}

static bool ifg_tu8(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }

        
    uint64_t ret;
    GetFieldValue(self, fieldInfo, offset, &ret);
    apis->add_return(info, converter::Converter<uint64_t>::toScript(apis, env, ret));            
    return true;
}

static bool ifs_tu8(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) 
{
    pesapi_env env = apis->get_env(info);
    pesapi_value luaThis = apis->get_holder(info);
    auto self = apis->get_native_object_ptr(env, luaThis);
    if (self == nullptr)
    {
        return false;
    }

    // LuaValToCSVal P any
    uint64_t p = converter::Converter<uint64_t>::toCpp(apis, env, apis->get_arg(info, 0));

	SetFieldValue(self, fieldInfo, offset, &p);
    return true;    
}

static bool ifg_u4(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) 
{
    pesapi_env env = apis->get_env(info);        
    uint32_t ret;
    GetFieldValue(nullptr, fieldInfo, offset, &ret);
    apis->add_return(info, converter::Converter<uint32_t>::toScript(apis, env, ret));            
    return true;
}

static bool ifs_u4(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) 
{
    pesapi_env env = apis->get_env(info);    // LuaValToCSVal P any
    uint32_t p = converter::Converter<uint32_t>::toCpp(apis, env, apis->get_arg(info, 0));

	SetFieldValue(nullptr, fieldInfo, offset, &p);
    return true;    
}

static bool ifg_u8(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) 
{
    pesapi_env env = apis->get_env(info);        
    uint64_t ret;
    GetFieldValue(nullptr, fieldInfo, offset, &ret);
    apis->add_return(info, converter::Converter<uint64_t>::toScript(apis, env, ret));            
    return true;
}

static bool ifs_u8(pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) 
{
    pesapi_env env = apis->get_env(info);    // LuaValToCSVal P any
    uint64_t p = converter::Converter<uint64_t>::toCpp(apis, env, apis->get_arg(info, 0));

	SetFieldValue(nullptr, fieldInfo, offset, &p);
    return true;    
}

static FieldWrapFuncInfo g_fieldWrapFuncInfos[] = {
    {"O", ifg_O, ifs_O},
    {"S_i4i2i2u1u1u1u1u1u1u1u1_", ifg_S_i4i2i2u1u1u1u1u1u1u1u1_, ifs_S_i4i2i2u1u1u1u1u1u1u1u1_},
    {"S_i4i4_", ifg_S_i4i4_, ifs_S_i4i4_},
    {"S_r4r4_", ifg_S_r4r4_, ifs_S_r4r4_},
    {"S_r4r4r4_", ifg_S_r4r4r4_, ifs_S_r4r4r4_},
    {"S_r4r4r4r4_", ifg_S_r4r4r4r4_, ifs_S_r4r4r4r4_},
    {"S_r4r4r4r4r4r4_", ifg_S_r4r4r4r4r4r4_, ifs_S_r4r4r4r4r4r4_},
    {"S_u1u1u1u1_", ifg_S_u1u1u1u1_, ifs_S_u1u1u1u1_},
    {"S_u4o_", ifg_S_u4o_, ifs_S_u4o_},
    {"S_u4u4_", ifg_S_u4u4_, ifs_S_u4u4_},
    {"S_u8_", ifg_S_u8_, ifs_S_u8_},
    {"b", ifg_b, ifs_b},
    {"c", ifg_c, ifs_c},
    {"i4", ifg_i4, ifs_i4},
    {"i8", ifg_i8, ifs_i8},
    {"o", ifg_o, ifs_o},
    {"p", ifg_p, ifs_p},
    {"r4", ifg_r4, ifs_r4},
    {"r8", ifg_r8, ifs_r8},
    {"s", ifg_s, ifs_s},
    {"tO", ifg_tO, ifs_tO},
    {"tS_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4S_r4r4r4_r4r4r4_", ifg_tS_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4S_r4r4r4_r4r4r4_, ifs_tS_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4S_r4r4r4_r4r4r4_},
    {"tS_bbbbbbbbi4i4i4_", ifg_tS_bbbbbbbbi4i4i4_, ifs_tS_bbbbbbbbi4i4i4_},
    {"tS_bbbi4b_", ifg_tS_bbbi4b_, ifs_tS_bbbi4b_},
    {"tS_i4i4_", ifg_tS_i4i4_, ifs_tS_i4i4_},
    {"tS_i4i4i4_", ifg_tS_i4i4i4_, ifs_tS_i4i4i4_},
    {"tS_i4i4ossOososOi4i4i4i4i4i4i1i1i1i1bi4o_", ifg_tS_i4i4ossOososOi4i4i4i4i4i4i1i1i1i1bi4o_, ifs_tS_i4i4ossOososOi4i4i4i4i4i4i1i1i1i1bi4o_},
    {"tS_ooi4_", ifg_tS_ooi4_, ifs_tS_ooi4_},
    {"tS_r4r4_", ifg_tS_r4r4_, ifs_tS_r4r4_},
    {"tS_r4r4r4_", ifg_tS_r4r4r4_, ifs_tS_r4r4r4_},
    {"tS_r4r4r4r4_", ifg_tS_r4r4r4r4_, ifs_tS_r4r4r4r4_},
    {"tS_u4o_", ifg_tS_u4o_, ifs_tS_u4o_},
    {"tS_u4u4_", ifg_tS_u4u4_, ifs_tS_u4u4_},
    {"tS_u4u4i4i4u4u1i4i4u1i4u4_", ifg_tS_u4u4i4i4u4u1i4i4u1i4u4_, ifs_tS_u4u4i4i4u4u1i4i4u1i4u4_},
    {"ta", ifg_ta, ifs_ta},
    {"tb", ifg_tb, ifs_tb},
    {"ti1", ifg_ti1, ifs_ti1},
    {"ti4", ifg_ti4, ifs_ti4},
    {"ti8", ifg_ti8, ifs_ti8},
    {"to", ifg_to, ifs_to},
    {"tr4", ifg_tr4, ifs_tr4},
    {"tr8", ifg_tr8, ifs_tr8},
    {"ts", ifg_ts, ifs_ts},
    {"tu1", ifg_tu1, ifs_tu1},
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
