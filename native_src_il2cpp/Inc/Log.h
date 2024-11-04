#pragma once

#include <string>

typedef void (*LogCallback)(const char* value);

namespace xlua
{
enum LogLevel
{
    Log = 0,
    Wraning = 1,
    Error = 2
};

void PLog(LogLevel Level, const std::string Fmt, ...);

}    // namespace xlua