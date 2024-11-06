#include "pesapi.h"
#if defined(PLATFORM_WINDOWS)
#include <Windows.h>
#endif
#include "lua.hpp"
#include "CppObjectMapper.h"

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
static pesapi_func_ptr funcs[] = {(pesapi_func_ptr) &pesapi_alloc_type_infos, (pesapi_func_ptr) &pesapi_set_type_info,
    (pesapi_func_ptr) &pesapi_create_signature_info, (pesapi_func_ptr) &pesapi_alloc_property_descriptors,
    (pesapi_func_ptr) &pesapi_set_method_info, (pesapi_func_ptr) &pesapi_set_property_info, (pesapi_func_ptr) &pesapi_define_class,
    (pesapi_func_ptr) &pesapi_trace_native_object_lifecycle, (pesapi_func_ptr) &pesapi_on_class_not_found,
    (pesapi_func_ptr) &pesapi_class_type_info, (pesapi_func_ptr) &pesapi_find_type_id};
MSVC_PRAGMA(warning(pop))

static int LoadAddon(const char* path, const char* module_name)
{
    return -1;
}

EXTERN_C_START
int pesapi_load_addon(const char* path, const char* module_name)
{
    return LoadAddon(path, module_name);
}

pesapi_func_ptr* GetRegisterApi()
{
    return funcs;
}

EXTERN_C_END