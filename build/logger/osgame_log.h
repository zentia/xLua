#pragma once

#include <cstdio>
#include <cstdarg>

// Minimal standalone logger that replaces the game engine's `osgame_log`.
// Log lines are written to stderr. The format string uses the engine's
// "{}" placeholder style; placeholders are printed as-is and any extra
// arguments are ignored (no printf-style "%" conversions are expected).

namespace osgame_log_detail
{
    struct Categories
    {
        int GameCore;
        int Lua;

        Categories()
            : GameCore(0)
            , Lua(1)
        {
        }
    };

    struct Logger
    {
        Categories cat;

        void log(const char* level, int /*category*/, const char* fmt, va_list args) const
        {
            std::fprintf(stderr, "[%s] ", level);
            std::vfprintf(stderr, fmt, args);
            std::fprintf(stderr, "\n");
        }

        void debug(int category, const char* fmt, ...) const
        {
            va_list args;
            va_start(args, fmt);
            log("debug", category, fmt, args);
            va_end(args);
        }

        void info(int category, const char* fmt, ...) const
        {
            va_list args;
            va_start(args, fmt);
            log("info", category, fmt, args);
            va_end(args);
        }

        void warning(int category, const char* fmt, ...) const
        {
            va_list args;
            va_start(args, fmt);
            log("warning", category, fmt, args);
            va_end(args);
        }

        void error(int category, const char* fmt, ...) const
        {
            va_list args;
            va_start(args, fmt);
            log("error", category, fmt, args);
            va_end(args);
        }

        void fatal(int category, const char* fmt, ...) const
        {
            va_list args;
            va_start(args, fmt);
            log("fatal", category, fmt, args);
            va_end(args);
        }
    };

    inline Logger* GetLogger()
    {
        static Logger logger;
        return &logger;
    }
}

#define osgame_log (::osgame_log_detail::GetLogger())
