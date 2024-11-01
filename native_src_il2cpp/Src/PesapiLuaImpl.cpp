/*
 * Tencent is pleased to support the open source community by making Puerts available.
 * Copyright (C) 2020 THL A29 Limited, a Tencent company.  All rights reserved.
 * Puerts is licensed under the BSD 3-Clause License, except for the third-party components listed in the file 'LICENSE' which may
 * be subject to their corresponding license terms. This file is subject to the terms and conditions defined in file 'LICENSE',
 * which is part of this source code package.
 */

#include "pesapi.h"
#include "lua.hpp"
#include "LuaClassRegister.h"
#include "CppObjectMapper.h"

#include <string>
#include <sstream>
#include <vector>
#include <cstring>

EXTERN_C_START

// value process
pesapi_value pesapi_create_null(pesapi_env env)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    lua_pushnil(L);
    return reinterpret_cast<pesapi_value>(lua_gettop(L));
}

pesapi_value pesapi_create_undefined(pesapi_env env)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    lua_pushnil(L);
    return reinterpret_cast<pesapi_value>(lua_gettop(L));
}

pesapi_value pesapi_create_boolean(pesapi_env env, bool value)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    lua_pushboolean(L, value);
    return reinterpret_cast<pesapi_value>(lua_gettop(L));
}

pesapi_value pesapi_create_int32(pesapi_env env, int32_t value)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    lua_pushinteger(L, value);
    return reinterpret_cast<pesapi_value>(lua_gettop(L));
}

pesapi_value pesapi_create_uint32(pesapi_env env, uint32_t value)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    lua_pushinteger(L, value);
    return reinterpret_cast<pesapi_value>(lua_gettop(L));
}

pesapi_value pesapi_create_int64(pesapi_env env, int64_t value)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    lua_pushinteger(L, value);
    return reinterpret_cast<pesapi_value>(lua_gettop(L));
}

pesapi_value pesapi_create_uint64(pesapi_env env, uint64_t value)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    lua_pushinteger(L, value);
    return reinterpret_cast<pesapi_value>(lua_gettop(L));
}

pesapi_value pesapi_create_double(pesapi_env env, double value)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    lua_pushnumber(L, value);
    return reinterpret_cast<pesapi_value>(lua_gettop(L));
}

pesapi_value pesapi_create_string_utf8(pesapi_env env, const char* str, size_t length)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    lua_pushlstring(L, str, length);
    return reinterpret_cast<pesapi_value>(lua_gettop(L));
}

pesapi_value pesapi_create_binary(pesapi_env env, void* bin, size_t length)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    lua_pushlstring(L, static_cast<const char*>(bin), length);
    return reinterpret_cast<pesapi_value>(lua_gettop(L));
}

pesapi_value pesapi_create_array(pesapi_env env)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    lua_createtable(L, 0, 0);
    return reinterpret_cast<pesapi_value>(lua_gettop(L));
}

bool pesapi_get_value_bool(pesapi_env env, pesapi_value pvalue)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    return lua_toboolean(L, reinterpret_cast<intptr_t>(pvalue));
}

int32_t pesapi_get_value_int32(pesapi_env env, pesapi_value pvalue)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    return lua_tointeger(L, reinterpret_cast<intptr_t>(pvalue));
}

uint32_t pesapi_get_value_uint32(pesapi_env env, pesapi_value pvalue)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    return lua_tointeger(L, reinterpret_cast<intptr_t>(pvalue));
}

int64_t pesapi_get_value_int64(pesapi_env env, pesapi_value pvalue)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    return lua_tointeger(L, reinterpret_cast<intptr_t>(pvalue));
}

uint64_t pesapi_get_value_uint64(pesapi_env env, pesapi_value pvalue)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    return lua_tointeger(L, reinterpret_cast<intptr_t>(pvalue));
}

double pesapi_get_value_double(pesapi_env env, pesapi_value pvalue)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    return lua_tonumber(L, reinterpret_cast<intptr_t>(pvalue));
}

const char* pesapi_get_value_string_utf8(pesapi_env env, pesapi_value pvalue, char* buf, size_t* bufsize)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    return lua_tolstring(L, reinterpret_cast<intptr_t>(pvalue), bufsize);
}

void* pesapi_get_value_binary(pesapi_env env, pesapi_value pvalue, size_t* bufsize)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    return const_cast<char*>(lua_tolstring(L, reinterpret_cast<intptr_t>(pvalue), bufsize));
}

uint32_t pesapi_get_array_length(pesapi_env env, pesapi_value pvalue)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    return (uint32_t) luaL_len(L, reinterpret_cast<intptr_t>(pvalue));
}

bool pesapi_is_null(pesapi_env env, pesapi_value pvalue)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    return lua_isnil(L, reinterpret_cast<intptr_t>(pvalue));
}

bool pesapi_is_undefined(pesapi_env env, pesapi_value pvalue)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    return lua_isnone(L, reinterpret_cast<intptr_t>(pvalue));
}

bool pesapi_is_boolean(pesapi_env env, pesapi_value pvalue)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    return lua_isboolean(L, reinterpret_cast<intptr_t>(pvalue));
}

bool pesapi_is_int32(pesapi_env env, pesapi_value pvalue)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    return lua_isinteger(L, reinterpret_cast<intptr_t>(pvalue));
}

bool pesapi_is_uint32(pesapi_env env, pesapi_value pvalue)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    return lua_isinteger(L, reinterpret_cast<intptr_t>(pvalue));
}

bool pesapi_is_int64(pesapi_env env, pesapi_value pvalue)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    return lua_isinteger(L, reinterpret_cast<intptr_t>(pvalue));
}

bool pesapi_is_uint64(pesapi_env env, pesapi_value pvalue)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    return lua_isinteger(L, reinterpret_cast<intptr_t>(pvalue));
}

bool pesapi_is_double(pesapi_env env, pesapi_value pvalue)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    return lua_isnumber(L, reinterpret_cast<intptr_t>(pvalue));
}

bool pesapi_is_string(pesapi_env env, pesapi_value pvalue)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    return lua_isstring(L, reinterpret_cast<intptr_t>(pvalue));
}

bool pesapi_is_object(pesapi_env env, pesapi_value pvalue)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    return lua_istable(L, reinterpret_cast<intptr_t>(pvalue));
}

bool pesapi_is_function(pesapi_env env, pesapi_value pvalue)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    return lua_isfunction(L, reinterpret_cast<intptr_t>(pvalue));
}

bool pesapi_is_binary(pesapi_env env, pesapi_value pvalue)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    return lua_isstring(L, reinterpret_cast<intptr_t>(pvalue));
}

bool pesapi_is_array(pesapi_env env, pesapi_value pvalue)
{
    return pesapi_is_object(env, pvalue);
}

pesapi_value pesapi_native_object_to_value(pesapi_env env, const void* class_id, void* object_ptr, bool copy)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    xlua::CppObjectMapper* cppObjectMapper = xlua::CppObjectMapper::Get(L);
    cppObjectMapper->FindOrAddCppObject(L, class_id, object_ptr, !copy);
    return reinterpret_cast<pesapi_value>(lua_gettop(L));
}

void* pesapi_get_native_object_ptr(pesapi_env env, pesapi_value pvalue)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    CppObject* cppObject = (CppObject*) lua_touserdata(L, reinterpret_cast<intptr_t>(pvalue));
    return cppObject ? cppObject->Ptr : nullptr;
}

const void* pesapi_get_native_object_typeid(pesapi_env env, pesapi_value pvalue)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    CppObject* cppObject = (CppObject*) lua_touserdata(L, reinterpret_cast<intptr_t>(pvalue));
    return cppObject->TypeId;
}

bool pesapi_is_instance_of(pesapi_env env, const void* class_id, pesapi_value pvalue)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    CppObject* cppObject = (CppObject*) lua_touserdata(L, reinterpret_cast<intptr_t>(pvalue));
    return cppObject && (cppObject->TypeId == class_id);
}

pesapi_value pesapi_boxing(pesapi_env env, pesapi_value pvalue)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    lua_createtable(L, 1, 0);
    lua_pushvalue(L, reinterpret_cast<intptr_t>(pvalue));
    lua_rawseti(L, -2, 1);
    return reinterpret_cast<pesapi_value>(lua_gettop(L));
}

pesapi_value pesapi_unboxing(pesapi_env env, pesapi_value pvalue)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    lua_rawgeti(L, reinterpret_cast<intptr_t>(pvalue), 1);
    return reinterpret_cast<pesapi_value>(lua_gettop(L));
}

void pesapi_update_boxed_value(pesapi_env env, pesapi_value ref, pesapi_value pvalue)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    lua_pushvalue(L, reinterpret_cast<intptr_t>(pvalue));
    lua_rawseti(L, reinterpret_cast<intptr_t>(ref), 1);
}

bool pesapi_is_boxed_value(pesapi_env env, pesapi_value value)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    return lua_istable(L, reinterpret_cast<intptr_t>(value));
}

int pesapi_get_args_len(pesapi_callback_info pinfo)
{
    return lua_gettop(pinfo->L) - pinfo->ArgStart;
}

pesapi_value pesapi_get_arg(pesapi_callback_info pinfo, int index)
{
    return reinterpret_cast<pesapi_value>(index + pinfo->ArgStart + 1);
}

PESAPI_EXTERN pesapi_env pesapi_get_env(pesapi_callback_info pinfo)
{
    return reinterpret_cast<pesapi_env>(pinfo->L);
    ;
}

pesapi_value pesapi_get_this(pesapi_callback_info pinfo)
{
    return reinterpret_cast<pesapi_value>(1);
}

pesapi_value pesapi_get_holder(pesapi_callback_info pinfo)
{
    return reinterpret_cast<pesapi_value>(1);
}

void* pesapi_get_userdata(pesapi_callback_info pinfo)
{
    return lua_touserdata(pinfo->L, lua_upvalueindex(1));
}

void* pesapi_get_constructor_userdata(pesapi_callback_info pinfo)
{
    return lua_touserdata(pinfo->L, lua_upvalueindex(1));
}

void pesapi_add_return(pesapi_callback_info pinfo, pesapi_value pvalue)
{
    lua_pushvalue(pinfo->L, reinterpret_cast<intptr_t>(pvalue));
    pinfo->RetNum++;
}

void pesapi_throw_by_string(pesapi_callback_info pinfo, const char* msg)
{
    luaL_error(pinfo->L, "%s", msg);
}

struct pesapi_env_ref__
{
    explicit pesapi_env_ref__(lua_State* _L) : L(_L), scope_top(0)
    {
    }
    lua_State* L;
    int scope_top;
};

pesapi_env_ref pesapi_create_env_ref(pesapi_env env)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    lua_rawgeti(L, LUA_REGISTRYINDEX, LUA_RIDX_MAINTHREAD);
    lua_State* mL = lua_tothread(L, -1);
    lua_pop(L, 1);
    return new pesapi_env_ref__(mL);
}

pesapi_env pesapi_get_env_from_ref(pesapi_env_ref env_ref)
{
    return reinterpret_cast<pesapi_env>(env_ref->L);
}

pesapi_env_ref pesapi_duplicate_env_ref(pesapi_env_ref env_ref)
{
    return new pesapi_env_ref__(env_ref->L);
    ;
}

void pesapi_release_env_ref(pesapi_env_ref env_ref)
{
    delete env_ref;
}

pesapi_scope pesapi_open_scope(pesapi_env_ref env_ref)
{
    env_ref->scope_top = lua_gettop(env_ref->L);
    // printf("pesapi_open_scope top=%d\n", env_ref->scope_top);
    //  scope data store in env holder
    return reinterpret_cast<pesapi_scope>(env_ref);
}

bool pesapi_has_caught(pesapi_scope scope)
{
    pesapi_env_ref env_ref = reinterpret_cast<pesapi_env_ref>(scope);
    return lua_tointeger(env_ref->L, -1) != 0;
}

const char* pesapi_get_exception_as_string(pesapi_scope scope, bool with_stack)
{
    pesapi_env_ref env_ref = reinterpret_cast<pesapi_env_ref>(scope);
    return lua_tostring(env_ref->L, -2);
}

void pesapi_close_scope(pesapi_scope scope)
{
    pesapi_env_ref env_ref = reinterpret_cast<pesapi_env_ref>(scope);
    lua_settop(env_ref->L, env_ref->scope_top);    // release all value alloc in scope
    env_ref->scope_top = 0;
    // printf("pesapi_close_scope top=%d\n", lua_gettop(env_ref->L));
}

struct pesapi_value_ref__
{
    explicit pesapi_value_ref__(lua_State* _L, int _value_ref) : L(_L), value_ref(_value_ref), ref_count(1)
    {
    }
    lua_State* L;
    int value_ref;
    int ref_count;
};

pesapi_value_ref pesapi_create_value_ref(pesapi_env env, pesapi_value pvalue)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    lua_rawgeti(L, LUA_REGISTRYINDEX, LUA_RIDX_MAINTHREAD);
    lua_State* mL = lua_tothread(L, -1);
    lua_pop(L, 1);
    lua_pushvalue(L, reinterpret_cast<intptr_t>(pvalue));
    return new pesapi_value_ref__(mL, luaL_ref(L, LUA_REGISTRYINDEX));
}

pesapi_value_ref pesapi_duplicate_value_ref(pesapi_value_ref value_ref)
{
    ++value_ref->ref_count;
    return value_ref;
}

void pesapi_release_value_ref(pesapi_value_ref value_ref)
{
    if (--value_ref->ref_count == 0)
    {
        luaL_unref(value_ref->L, LUA_REGISTRYINDEX, value_ref->value_ref);
        delete value_ref;
    }
}

pesapi_value pesapi_get_value_from_ref(pesapi_env env, pesapi_value_ref value_ref)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    lua_rawgeti(L, LUA_REGISTRYINDEX, value_ref->value_ref);
    return reinterpret_cast<pesapi_value>(lua_gettop(L));
}

void pesapi_set_ref_weak(pesapi_env env, pesapi_value_ref value_ref)
{
    luaL_unref(value_ref->L, LUA_REGISTRYINDEX, value_ref->value_ref);
}

bool pesapi_set_owner(pesapi_env env, pesapi_value pvalue, pesapi_value powner)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    int owner = reinterpret_cast<intptr_t>(powner);
    if (lua_istable(L, owner))
    {
        lua_pushvalue(L, reinterpret_cast<intptr_t>(pvalue));
        lua_rawseti(L, owner, 0);
    }
    return false;
}

pesapi_value pesapi_get_property(pesapi_env env, pesapi_value pobject, const char* key)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    lua_getfield(L, reinterpret_cast<intptr_t>(pobject), key);
    return reinterpret_cast<pesapi_value>(lua_gettop(L));
}

void pesapi_set_property(pesapi_env env, pesapi_value pobject, const char* key, pesapi_value pvalue)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    lua_pushvalue(L, reinterpret_cast<intptr_t>(pvalue));
    lua_setfield(L, reinterpret_cast<intptr_t>(pobject), key);
}

pesapi_value pesapi_get_property_uint32(pesapi_env env, pesapi_value pobject, uint32_t key)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    lua_rawgeti(L, reinterpret_cast<intptr_t>(pobject), key + 1);
    return reinterpret_cast<pesapi_value>(lua_gettop(L));
}

void pesapi_set_property_uint32(pesapi_env env, pesapi_value pobject, uint32_t key, pesapi_value pvalue)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    lua_pushvalue(L, reinterpret_cast<intptr_t>(pvalue));
    lua_rawseti(L, reinterpret_cast<intptr_t>(pobject), key + 1);
}

static int debug_traceback(lua_State* L)
{
    lua_getglobal(L, "debug");
    lua_getfield(L, -1, "traceback");
    lua_remove(L, -2);
    lua_pushvalue(L, 1);
    lua_pushnumber(L, 2);
    lua_call(L, 2, 1);
    return 1;
}

pesapi_value pesapi_call_function(pesapi_env env, pesapi_value pfunc, pesapi_value this_object, int argc, const pesapi_value argv[])
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    // printf("pesapi_call_function: argc=%d, top=%d\n", argc, lua_gettop(L));
    lua_pushcclosure(L, debug_traceback, 0);
    int errfunc = lua_gettop(L);
    lua_pushvalue(L, reinterpret_cast<intptr_t>(pfunc));
    for (int i = 0; i < argc; i++)
    {
        lua_pushvalue(L, reinterpret_cast<intptr_t>(argv[i]));
    }
    int res = lua_pcall(L, argc, 1, errfunc);

    lua_pushinteger(L, res);
    return reinterpret_cast<pesapi_value>(lua_gettop(L) - 1);
}

pesapi_value pesapi_eval(pesapi_env env, const uint8_t* code, size_t code_size, const char* path)
{
    return 0;
}

const void* pesapi_get_env_private(pesapi_env env)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    return xlua::DataTransfer::GetStatePrivateData(L);
}

void pesapi_set_env_private(pesapi_env env, const void* ptr)
{
    lua_State* L = reinterpret_cast<lua_State*>(env);
    xlua::DataTransfer::SetStatePrivateData(L, const_cast<void*>(ptr));
}

struct pesapi_type_info__
{
    const char* name;
    bool is_pointer;
    bool is_const;
    bool is_ref;
    bool is_primitive;
};

struct pesapi_signature_info__
{
    pesapi_type_info return_type;
    size_t parameter_count;
    pesapi_type_info parameter_types;
};

struct pesapi_property_descriptor__
{
    const char* name;
    bool is_static;
    pesapi_callback method;
    pesapi_callback getter;
    pesapi_callback setter;
    void* data;

    union
    {
        pesapi_type_info type_info;
        pesapi_signature_info signature_info;
    } info;
};

pesapi_type_info pesapi_alloc_type_infos(size_t count)
{
    auto ret = new pesapi_type_info__[count];
    memset(ret, 0, sizeof(pesapi_type_info__) * count);
    return ret;
}

void pesapi_set_type_info(
    pesapi_type_info type_infos, size_t index, const char* name, bool is_pointer, bool is_const, bool is_ref, bool is_primitive)
{
    type_infos[index] = {name, is_pointer, is_const, is_ref, is_primitive};
}

pesapi_signature_info pesapi_create_signature_info(
    pesapi_type_info return_type, size_t parameter_count, pesapi_type_info parameter_types)
{
    return new pesapi_signature_info__{return_type, parameter_count, parameter_types};
}

pesapi_property_descriptor pesapi_alloc_property_descriptors(size_t count)
{
    auto ret = new pesapi_property_descriptor__[count];
    memset(ret, 0, sizeof(pesapi_property_descriptor__) * count);
    return ret;
}

void pesapi_set_method_info(pesapi_property_descriptor properties, size_t index, const char* name, bool is_static,
    pesapi_callback method, void* data, pesapi_signature_info signature_info)
{
    properties[index].name = name;
    properties[index].is_static = is_static;
    properties[index].method = method;
    properties[index].data = data;
    properties[index].info.signature_info = signature_info;
}

void pesapi_set_property_info(pesapi_property_descriptor properties, size_t index, const char* name, bool is_static,
    pesapi_callback getter, pesapi_callback setter, void* data, pesapi_type_info type_info)
{
    properties[index].name = name;
    properties[index].is_static = is_static;
    properties[index].getter = getter;
    properties[index].setter = setter;
    properties[index].data = data;
    properties[index].info.type_info = type_info;
}

static void free_property_descriptor(pesapi_property_descriptor properties, size_t property_count)
{
    for (size_t i = 0; i < property_count; i++)
    {
        pesapi_property_descriptor p = properties + i;
        if (p->getter != nullptr || p->setter != nullptr)
        {
            if (p->info.type_info)
            {
                delete[] p->info.type_info;
            }
        }
        else if (p->method != nullptr)
        {
            if (p->info.signature_info)
            {
                if (p->info.signature_info->return_type)
                {
                    delete p->info.signature_info->return_type;
                }
                if (p->info.signature_info->parameter_types)
                {
                    delete[] p->info.signature_info->parameter_types;
                }
                delete p->info.signature_info;
            }
        }
    }
}

#ifndef MSVC_PRAGMA
#if !defined(__clang__) && defined(_MSC_VER)
#define MSVC_PRAGMA(Pragma) __pragma(Pragma)
#else
#define MSVC_PRAGMA(...)
#endif
#endif

// set module name here during loading, set nullptr after module loaded
const char* GPesapiModuleName = nullptr;

MSVC_PRAGMA(warning(push))
MSVC_PRAGMA(warning(disable : 4191))
void pesapi_define_class(const void* type_id, const void* super_type_id, const char* type_name, pesapi_constructor constructor,
    pesapi_finalize finalize, size_t property_count, pesapi_property_descriptor properties, void* userdata)
{
    xlua::LuaClassDefinition classDef = LuaClassEmptyDefinition;
    classDef.TypeId = type_id;
    classDef.SuperTypeId = super_type_id;
    std::string ScriptNameWithModuleName = GPesapiModuleName == nullptr ? std::string() : GPesapiModuleName;
    if (GPesapiModuleName)
    {
        ScriptNameWithModuleName += ".";
        ScriptNameWithModuleName += type_name;
        classDef.ScriptName = ScriptNameWithModuleName.c_str();
    }
    else
    {
        classDef.ScriptName = type_name;
    }
    classDef.Data = userdata;

    classDef.Initialize = reinterpret_cast<xlua::InitializeFunc>(constructor);
    classDef.Finalize = finalize;

    std::vector<xlua::LuaFunctionInfo> p_methods;
    std::vector<xlua::LuaFunctionInfo> p_functions;
    std::vector<xlua::LuaPropertyInfo> p_properties;
    std::vector<xlua::LuaPropertyInfo> p_variables;

    for (int i = 0; i < property_count; i++)
    {
        pesapi_property_descriptor p = properties + i;
        if (p->getter != nullptr || p->setter != nullptr)
        {
            if (p->is_static)
            {
                p_variables.push_back({p->name, reinterpret_cast<xlua::FunctionCallback>(p->getter),
                    reinterpret_cast<xlua::FunctionCallback>(p->setter), p->data});
            }
            else
            {
                p_properties.push_back({p->name, reinterpret_cast<xlua::FunctionCallback>(p->getter),
                    reinterpret_cast<xlua::FunctionCallback>(p->setter), p->data});
            }
        }
        else if (p->method != nullptr)
        {
            xlua::LuaFunctionInfo finfo{p->name, reinterpret_cast<xlua::FunctionCallback>(p->method), p->data};
            if (p->is_static)
            {
                p_functions.push_back(finfo);
            }
            else
            {
                p_methods.push_back(finfo);
            }
        }
    }

    free_property_descriptor(properties, property_count);

    p_methods.push_back({nullptr, nullptr, nullptr});
    p_functions.push_back({nullptr, nullptr, nullptr});
    p_properties.push_back({nullptr, nullptr, nullptr, nullptr});
    p_variables.push_back({nullptr, nullptr, nullptr, nullptr});

    classDef.Methods = p_methods.data();
    classDef.Functions = p_functions.data();
    classDef.Properties = p_properties.data();
    classDef.Variables = p_variables.data();

    xlua::RegisterLuaClass(classDef);
}
MSVC_PRAGMA(warning(pop))

void pesapi_class_type_info(const char* proto_magic_id, const void* type_id, const void* constructor_info, const void* methods_info,
    const void* functions_info, const void* properties_info, const void* variables_info)
{
}

EXTERN_C_END
