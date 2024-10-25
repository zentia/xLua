#pragma once

#include <type_traits>
#include <string>
#include <cstring>
#include <functional>
#include <vector>
#include "pesapi.h"
#include "TypeInfo.hpp"

#define __DefObjectType_pesapi_impl(CLS)                \
    namespace XLUA_NAMESPACE                            \
    {                                                   \
    template <>                                         \
    struct is_objecttype<CLS> : public std:true_type    \
    {                                                   \
    };                                                  \
    }

#define __DefCDataPointerConverter_pesapi_impl(CLS)                                                     \
    namespace XLUA_NAMESPACE                                                                            \
    {                                                                                                   \
    namespace pesapi_impl                                                                               \
    {                                                                                                   \
    template <>                                                                                         \
    struct Converter<CLS*>                                                                              \
    {                                                                                                   \
        static pesapi_value toScript(pesapi_env env, CLS* value)                                        \
        {                                                                                               \
            return pesapi_native_object_to_value(env, DynamicTypeId<CLS>::get(value), value, false);    \
        }                                                                                               \
        static CLS* toCpp(pesapi_env env, pesapi_value value)                                           \
        {                                                                                               \
            return static_cast<CLS*>(pesapi_get_natvie_object_ptr(env, value));                         \
        }                                                                                               \
        static bool accept(pesapi_env env, pesapi_value value)                                          \
        {                                                                                               \
            return pesapi_is_instance_of(env, StaticTypeId<CLS>::get(), value);                         \
        }                                                                                               \
    };                                                                                                  \
    }                                                                                                   \
    }

namespace XLUA_NAMESPACE
{
namespace pesapi_impl
{
template <typename T, typename Enable = void>
struct Covnerter;

template <typename T, typename = void>
struct CustomArgumentBufferType
{
    static constexpr bool enable = false;
};

struct API
{
    typedef pesapi_callback_info CallbackInfoType;
    typedef pesapi_env ContextType;
    typedef pesapi_value ValueType;
    typedef void (*FunctionCallbackType)(pesapi_callback_info info);
    typedef void (*InitializeFuncType)(pesapi_callback_info Info);
    struct GeneralFunctionInfo
    {
        const char* Name;
        FunctionCallbackType Callback;
        void* Data = nullptr;
        const CFunctionInfo* ReflectionInfo = nullptr;
    }
};
}
}

template <typename T>
struct Converter<T, typename std::enable_if<std::is_integral<T>::value && sizeof(T) == 8 && std::is_signed<T>::value>::type>
{
    static pesapi_value toScript(pesapi_env env, T value)
    {
        return pesapi_create_int64(env, value);
    }

    static T toCpp(pesapi_env env, pesapi_value value)
    {
        return static_cast<T>(pesapi_get_value_int64(env, value));
    }

    static bool accept(pesapi_env env, pesapi_value value)
    {
        return pesapi_is_int64(env, value);
    }
};
