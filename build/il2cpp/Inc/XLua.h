#pragma once

#include <cassert>
#include <string>

#include "CppObjectMapper.h"
#include "lua.hpp"

struct FunctionHashFunctor
{
    inline size_t operator()(lua_CFunction x) const
    {
        return (size_t)x;
    }
};

extern "C" int errorfunc(lua_State* L);

namespace xlua
{
    void snapshot_lua_debug_info(lua_State* L, int level, const char* msg);

    enum LogLevel : std::uint8_t
    {
        Log = 0,
        Warning = 1,
        Error = 2,
        Exception = 3,
    };

    class string_buffer
    {
    public:
        char* data = nullptr;
        size_t size = 0;
        size_t capacity = 0;

        string_buffer()
        {
            capacity = 1024;
            data = static_cast<char*>(malloc(capacity));
            assert(data != nullptr);
        }

        ~string_buffer()
        {
            if (data)
                free(data);
            data = nullptr;
            size = capacity = 0;
        }

        void init()
        {
            size = 0;
            if (data)
                data[0] = '\0';
        }

        int append(const char* fmt, ...)
        {
            va_list args;
            while (true)
            {
                va_start(args, fmt);
                int needed = vsnprintf(data + size, capacity - size, fmt, args);
                va_end(args);

                if (needed < 0)
                    return -1;

                if ((size_t)needed < capacity - size)
                {
                    size += needed;
                    return 0;
                }

                size_t new_capacity = capacity * 2;
                char* new_data = (char*)realloc(data, new_capacity);
                if (!new_data)
                    return -1;
                data = new_data;
                capacity = new_capacity;
            }
        }
    };

    static string_buffer s_log_buffer;

    struct LuaEnv
    {
        LuaEnv();

        ~LuaEnv();

        lua_State* L;

        xlua::CppObjectMapper CppObjectMapper;

        static LuaEnv* ms_Instance;
        static int ms_AuthCode;
    };
} // namespace xlua
