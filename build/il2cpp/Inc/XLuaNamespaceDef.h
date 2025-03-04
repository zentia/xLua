#pragma once

#if !defined(XLUA_NAMESPACE)
#define XLUA_NAMESPACE xlua
#endif

#ifndef PRAGMA_DISABLE_UNDEFINED_IDENTIFIER_WARNINGS
#if defined(_MSC_VER)
#define PRAGMA_DISABLE_UNDEFINED_IDENTIFIER_WARNINGS __pragma(warning(push)) __pragma(warning(disable : 4668))
#elif defined(__clang__)
#define PRAGMA_DISABLE_UNDEFINED_IDENTIFIER_WARNINGS \
    _Pragma("clang diagnostic push") _Pragma("clang diagnostic ignored \"-Wundef\"")
#elif defined(__GNUC__)
#define PRAGMA_DISABLE_UNDEFINED_IDENTIFIER_WARNINGS _Pragma("GCC diagnostic push") _Pragma("GCC diagnostic ignored \"-Wundef\"")
#endif
#endif    // PRAGMA_DISABLE_UNDEFINED_IDENTIFIER_WARNINGS

#ifndef PRAGMA_ENABLE_UNDEFINED_IDENTIFIER_WARNINGS
#if defined(_MSC_VER)
#define PRAGMA_ENABLE_UNDEFINED_IDENTIFIER_WARNINGS __pragma(warning(pop))
#elif defined(__clang__)
#define PRAGMA_ENABLE_UNDEFINED_IDENTIFIER_WARNINGS _Pragma("clang diagnostic pop")
#elif defined(__GNUC__)
#define PRAGMA_ENABLE_UNDEFINED_IDENTIFIER_WARNINGS _Pragma("GCC diagnostic pop")
#endif
#endif    // PRAGMA_ENABLE_UNDEFINED_IDENTIFIER_WARNINGS

#ifndef MSVC_PRAGMA
#if !defined(__clang__) && defined(_MSC_VER)
#define MSVC_PRAGMA(Pragma) __pragma(Pragma)
#else
#define MSVC_PRAGMA(...)
#endif
#endif