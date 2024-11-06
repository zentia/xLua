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

static int LoadAddon(const char* path, const char* module_name)
{
    return -1;
}

EXTERN_C_START
int pesapi_load_addon(const char* path, const char* module_name)
{
    return LoadAddon(path, module_name);
}

EXTERN_C_END