﻿/*
 * Tencent is pleased to support the open source community by making Puerts available.
 * Copyright (C) 2020 THL A29 Limited, a Tencent company.  All rights reserved.
 * Puerts is licensed under the BSD 3-Clause License, except for the third-party components listed in the file 'LICENSE' which may
 * be subject to their corresponding license terms. This file is subject to the terms and conditions defined in file 'LICENSE',
 * which is part of this source code package.
 */

#include "pesapi.h"
#include "lua.hpp"
#include "CppObjectMapper.h"

#ifdef WIN32
#include "win32-dlfcn.h"
#else
#include <dlfcn.h>
#endif

#include <map>
#include <set>
#include <string>
#include <iostream>
#include <sstream>
#include <regex>

#define STRINGIFY_(x) #x
#define STRINGIFY(x) STRINGIFY_(x)

#ifndef MSVC_PRAGMA
#if !defined(__clang__) && defined(_MSC_VER)
	#define MSVC_PRAGMA(Pragma) __pragma(Pragma)
#else
	#define MSVC_PRAGMA(...)
#endif
#endif

static std::map<std::string, void*> GHandlers;

MSVC_PRAGMA(warning(push))
MSVC_PRAGMA(warning(disable : 4191))
static pesapi_func_ptr funcs[] = {(pesapi_func_ptr) &pesapi_create_null, (pesapi_func_ptr) &pesapi_create_undefined,
    (pesapi_func_ptr) &pesapi_create_boolean, (pesapi_func_ptr) &pesapi_create_int32, (pesapi_func_ptr) &pesapi_create_uint32,
    (pesapi_func_ptr) &pesapi_create_int64, (pesapi_func_ptr) &pesapi_create_uint64, (pesapi_func_ptr) &pesapi_create_double,
    (pesapi_func_ptr) &pesapi_create_string_utf8, (pesapi_func_ptr) &pesapi_create_binary, (pesapi_func_ptr) &pesapi_create_array,
    (pesapi_func_ptr) &pesapi_get_value_bool, (pesapi_func_ptr) &pesapi_get_value_int32, (pesapi_func_ptr) &pesapi_get_value_uint32,
    (pesapi_func_ptr) &pesapi_get_value_int64, (pesapi_func_ptr) &pesapi_get_value_uint64,
    (pesapi_func_ptr) &pesapi_get_value_double, (pesapi_func_ptr) &pesapi_get_value_string_utf8,
    (pesapi_func_ptr) &pesapi_get_value_binary, (pesapi_func_ptr) &pesapi_get_array_length, (pesapi_func_ptr) &pesapi_is_null,
    (pesapi_func_ptr) &pesapi_is_undefined, (pesapi_func_ptr) &pesapi_is_boolean, (pesapi_func_ptr) &pesapi_is_int32,
    (pesapi_func_ptr) &pesapi_is_uint32, (pesapi_func_ptr) &pesapi_is_int64, (pesapi_func_ptr) &pesapi_is_uint64,
    (pesapi_func_ptr) &pesapi_is_double, (pesapi_func_ptr) &pesapi_is_string, (pesapi_func_ptr) &pesapi_is_object,
    (pesapi_func_ptr) &pesapi_is_function, (pesapi_func_ptr) &pesapi_is_binary, (pesapi_func_ptr) &pesapi_is_array,
    (pesapi_func_ptr) &pesapi_native_object_to_value, (pesapi_func_ptr) &pesapi_get_native_object_ptr,
    (pesapi_func_ptr) &pesapi_get_native_object_typeid, (pesapi_func_ptr) &pesapi_is_instance_of, (pesapi_func_ptr) &pesapi_boxing,
    (pesapi_func_ptr) &pesapi_unboxing, (pesapi_func_ptr) &pesapi_update_boxed_value, (pesapi_func_ptr) &pesapi_is_boxed_value,
    (pesapi_func_ptr) &pesapi_get_args_len, (pesapi_func_ptr) &pesapi_get_arg, (pesapi_func_ptr) &pesapi_get_env,
    (pesapi_func_ptr) &pesapi_get_this, (pesapi_func_ptr) &pesapi_get_holder, (pesapi_func_ptr) &pesapi_get_userdata,
    (pesapi_func_ptr) &pesapi_get_constructor_userdata, (pesapi_func_ptr) &pesapi_add_return,
    (pesapi_func_ptr) &pesapi_throw_by_string, (pesapi_func_ptr) &pesapi_create_env_ref, (pesapi_func_ptr) &pesapi_get_env_from_ref,
    (pesapi_func_ptr) &pesapi_duplicate_env_ref, (pesapi_func_ptr) &pesapi_release_env_ref, (pesapi_func_ptr) &pesapi_open_scope,
    (pesapi_func_ptr) &pesapi_has_caught, (pesapi_func_ptr) &pesapi_get_exception_as_string, (pesapi_func_ptr) &pesapi_close_scope,
    (pesapi_func_ptr) &pesapi_create_value_ref, (pesapi_func_ptr) &pesapi_duplicate_value_ref,
    (pesapi_func_ptr) &pesapi_release_value_ref, (pesapi_func_ptr) &pesapi_get_value_from_ref,
    (pesapi_func_ptr) &pesapi_set_ref_weak, (pesapi_func_ptr) &pesapi_set_owner, (pesapi_func_ptr) &pesapi_get_property,
    (pesapi_func_ptr) &pesapi_set_property, (pesapi_func_ptr) &pesapi_get_property_uint32,
    (pesapi_func_ptr) &pesapi_set_property_uint32, (pesapi_func_ptr) &pesapi_call_function, (pesapi_func_ptr) &pesapi_eval,
    (pesapi_func_ptr) &pesapi_alloc_type_infos, (pesapi_func_ptr) &pesapi_set_type_info,
    (pesapi_func_ptr) &pesapi_create_signature_info, (pesapi_func_ptr) &pesapi_alloc_property_descriptors,
    (pesapi_func_ptr) &pesapi_set_method_info, (pesapi_func_ptr) &pesapi_set_property_info, (pesapi_func_ptr) &pesapi_define_class,
    (pesapi_func_ptr) &pesapi_class_type_info};
MSVC_PRAGMA(warning(pop))

EXTERN_C_START
int pesapi_load_addon(const char* path, const char* module_name)
{
    return -1;
}

extern const char* GPesapiModuleName;

int load_dll(lua_State *L) {
    if (!lua_isstring(L, 1)) {
        return luaL_error(L, "#0 argument expect a string");
    }
    std::string path = lua_tostring(L, 1);

    if (GHandlers.find(path) != GHandlers.end()) {
        return luaL_error(L, "loaded!");
    }

    void* handle = dlopen(path.c_str(), RTLD_LAZY);
    if (!handle) {
        return luaL_error(L, "dlopen fail for %s, error:%s", path.c_str(), dlerror());
    }
    
    std::string EntryName = STRINGIFY(PESAPI_MODULE_INITIALIZER(dynamic));
    auto Init = (const char* (*)(pesapi_func_ptr*))(uintptr_t)dlsym(handle, EntryName.c_str()); 

    if (Init)  {
        const char* mn = Init(nullptr);
        GPesapiModuleName = mn;
        Init(funcs);
        GPesapiModuleName = nullptr;
        GHandlers[path] = handle;
        lua_pushstring(L, mn);
        return 1;
    } else {
        std::string VersionEntryName = STRINGIFY(PESAPI_MODULE_VERSION());
        auto Ver = (int (*)())(uintptr_t)dlsym(handle, VersionEntryName.c_str()); 
        if (!Ver) {
            dlclose(handle);
            return luaL_error(L, "can find entry");
        } else {
            int pesapi_ver = Ver();
            dlclose(handle);
            return luaL_error(L, "pesapi version mismatch, expect: %d, but got: %d", PESAPI_VERSION, pesapi_ver);
        }
    }
}

int load_type(lua_State *L) {
    puerts::FCppObjectMapper * cppObjectMapper = (puerts::FCppObjectMapper *)lua_touserdata(L, lua_upvalueindex(1));
    return cppObjectMapper->LoadCppType(L);
}

int luaopen_puerts_lua(lua_State *L) {
    luaL_Reg fns [] = {
        {"load", load_dll},
        {NULL, NULL}
    };
    
    luaL_newlib(L, fns);
    
    puerts::FCppObjectMapper *cppObjectMapper = new puerts::FCppObjectMapper();
    //printf("cppObjectMapper:%p\n", cppObjectMapper);
    cppObjectMapper->Initialize(L);
    lua_pushlightuserdata(L, cppObjectMapper);
    lua_pushcclosure(L, load_type, 1);
    lua_setfield(L, -2, "loadType");
    
    return 1;
}

EXTERN_C_END