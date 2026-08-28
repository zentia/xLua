#pragma once

#include <stdint.h>

// Standalone definitions that replace base types/macros normally provided by
// the game engine (ZEngine / "OSG"). These are absent from this xLua-only
// build, so we provide minimal equivalents here.

typedef uint64_t uint64;

#if !defined(OSG_API)
    #define OSG_API
#endif
