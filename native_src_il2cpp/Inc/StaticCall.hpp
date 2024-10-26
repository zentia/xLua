#pragma once

#include <tuple>
#include <type_traits>
#include <vector>
#include "TypeInfo.hpp"
#if defined(WITH_THROW_IN_CPP) && !defined(THREAD_LOCAL_IMPL_THROW)
#include <exception>
#include <cstring>
#endif

namespace XLUA_NAMESPACE
{
template <typename T, typename = void>
struct ArgumentBufferType
{
    using type = typename std::decay<T>::type*;
};

template <typename... Args>
unsigned int Count(Args&&... args)
{
    return sizeof...(Args);
}

template <typename T>
struct ArgumentBufferType<T*, typename std::enable_if<is_script_type<T>::value && !std::is_const<T>::value>::type>
{
    using type = typename std::decay<T>::type;
};

template <typename T>
struct ArgumentBufferType<T,
    typename std::enable_if<std::is_lvalue_reference<T>::value && !std::is_const<typename std::remove_reference<T>::type>::value &&
                            std::is_constructible<typename std::decay<T>::type>::value &&
                            std::is_copy_constructible<typename std::decay<T>::type>::value &&
                            std::is_destructible<typename std::decay<T>::type>::value>::type>
{
    using type = typename std::decay<T>::type;
};

namespace internal
{
template <typename T, typename = void>
struct ConverterDecay
{
    using type = typename std::decay<T>::type;
};

template <typename T>
struct ConverterDecay<T, typename std::enable_if<std::is_lvalue_reference<T>::value &&
                                                 !std::is_const<typename std::remove_reference<T>::type>::value>::type>
{
    using type = std::reference_wrapper<typename std::decay<T>::type>;
};

template <typename...>
using Void_t = void;

namespace traits
{
template <typename Args>
struct TupleTrait;

template <typename HeadT, typename... TailT>
struct TupleTrait<std::tuple<HeadT, TailT...>>
{
    using Head = HeadT;
    using Tail = std::tuple<TailT...>;

    static constexpr size_t count = 1 + sizeof...(TailT);

    template <size_t i>
    using Arg = typename std::tuple_element<i, std::tuple<HeadT, TailT...>>::type;
};

template <>
struct TupleTrait<std::tuple<>>
{
    using Tail = std::tuple<>;
    static constexpr size_t count = 0;
};

template <typename Func, typename Enable = void>
struct FunctionTrait;

template <typename Ret, typename... Args>
struct FunctionTrait<Ret (*)(Args...)>
{
    using ReturnType = Ret;
    using Arguments = std::tuple<Args...>;
};

template <typename C, typename Ret, typename... Args>
struct FunctionTrait<Ret (C::*)(Args...)> : FunctionTrait<Ret (*)(Args...)>
{
};

template <typename C, typename Ret, typename... Args>
struct FunctionTrait<Ret (C::*)(Args...) const> : FunctionTrait<Ret (*)(Args...)>
{
};

template <typename C, typename Ret, typename... Args>
struct FunctionTrait<Ret (C::*)(Args...) volatile> : FunctionTrait<Ret (*)(Args...)>
{
};

template <typename C, typename Ret, typename... Args>
struct FunctionTrait<Ret (C::*)(Args...) const volatile> : FunctionTrait<Ret (*)(Args...)>
{
};

// functor and lambda
template <typename Functor>
struct FunctionTrait<Functor, Void_t<decltype(&Functor::operator())>>
{
private:
    using FunctorTrait = FunctionTrait<decltype(&Functor::operator())>;

public:
    using ReturnType = typename FunctorTrait::ReturnType;
    using Arguments = typename TupleTrait<typename FunctorTrait::Arguments>::Tail;
};

// decay: remove const, reference; function type to function pointer
template <typename Func>
struct FunctionTrait<Func, typename std::enable_if<!std::is_same<Func, typename std::decay<Func>::type>::value>::type>
    : FunctionTrait<typename std::decay<Func>::type>
{
};
}    // namespace traits

template <typename API, std::size_t, std::size_t, typename...>
struct ArgumentChecker
{
    static bool Check(typename API::CallbackInfoType Info, typename API::ContextType Context)
    {
        return true;
    }
};

template <typename API, std::size_t Pos, std::size_t StopPos, typename ArgType, typename... Rest>
struct ArgumentChecker<API, Pos, StopPos, ArgType, Rest...>
{
    static constexpr int NextPos = Pos + 1;

    template <typename T>
    using DecayTypeConverter = typename API::template Converter<typename ConverterDecay<T>::type>;

    static bool Check(typename API::CallbackInfoType Info, typename API::ContextType Context)
    {
        if (Pos >= StopPos)
            return true;
        if (!DecayTypeConverter<ArgType>::accept(Context, API::GetArg(Info, Pos)))
        {
            return false;
        }
        return ArgumentChecker<API, NextPos, StopPos, Rest...>::Check(Info, Context);
    }
};

template <typename API, typename Enable = void>
struct ExceptionHandle;

template <typename API>
struct ExceptionHandle<API, typename std::enable_if<std::is_pointer<typename API::CallbackInfoType>::value>::type>
{
#if defined(WITH_THROW_IN_CPP) && defined(THREAD_LOCAL_IMPL_THROW)
    // TripleOp : 1. init; 2. get state; 3. throw
    static bool TripleOp(typename API::CallbackInfoType info, const char* error_msg, bool b_get_state)
    {
        thread_local typename API::CallbackInfoType s_info;
        thread_local bool s_throwed;
        if (b_get_state)
        {
            return s_throwed;
        }
        if (error_msg)
        {
            API::ThrowException(s_info, error_msg);
            s_throwed = true;
            return true;
        }
        else
        {
            s_info = info;
            s_throwed = false;
            return false;
        }
    }
#endif

    static void Throw(const char* error_msg)
    {
#if defined(WITH_THROW_IN_CPP) && defined(THREAD_LOCAL_IMPL_THROW)
        // Throw
        TripleOp(nullptr, error_msg, false);
#endif
    }

#if defined(WITH_THROW_IN_CPP) && !defined(THREAD_LOCAL_IMPL_THROW)
    struct UserException : std::exception
    {
        UserException(const char* msg)
        {
            auto len = strlen(msg);
            Msg = new char[len + 1];
            strncpy(Msg, msg, len);
            Msg[len] = '\0';
        }

        ~UserException() noexcept
        {
            delete[] Msg;
        }

        const char* what() const noexcept override
        {
            return Msg;
        }

        char* Msg;
    };
#endif
};

template <typename API>
struct ExceptionHandle<API, typename std::enable_if<!std::is_pointer<typename API::CallbackInfoType>::value>::type>
{
#if defined(WITH_THROW_IN_CPP) && defined(THREAD_LOCAL_IMPL_THROW)
    // Triple operate
    // 1. init: info is not null, error_msg is null, b_get_state is false;
    // 2. get state: b_get_state is true
    // 3. throw: error_msg is not null, b_get_state is false;
    static bool TripleOp(typename API::CallbackInfoType info, const char* error_msg, bool b_get_state)
    {
        thread_local typename std::decay<typename API::CallbackInfoType>::type* s_info;
        thread_local bool s_throwed;
        if (b_get_state)
        {
            return s_throwed;
        }
        if (error_msg)
        {
            API::ThrowExceptioin(*s_info, error_msg);
            s_throwed = true;
            return true;
        }
        else
        {
            s_info = (typename std::decay<typename API::CallbackInfoType>::type*) &info;
            s_throwed = false;
            return false;
        }
    }
#endif

    static void Throw(const char* error_msg)
    {
#if defined(WITH_THROW_IN_CPP)
#if defined(THREAD_LOCAL_IMPL_THROW)
        typename std::decay<typename API::CallbackInfoType>::type* pinfo = nullptr;
        // throw
        TripleOp(*pinfo, error_msg, false);
#else
        throw UserException(error_msg);
#endif
#endif
    }
};

template <typename, typename, bool, bool, bool, bool>
struct FuncCallHelper
{
};

template <typename API, typename Ret, typename... Args, bool CheckArguments, bool ReturnByPointer, bool ScriptTypePtrAsRef,
    bool GetSelfFromData>
struct FuncCallHelper<API, std::pair<Ret, std::tuple<Args...>>, CheckArguments, ReturnByPointer, ScriptTypePtrAsRef,
    GetSelfFromData>
{
private:
    template <bool Enable, std::size_t ND, typename... CArgs>
    struct ArgumentsChecker;

    template <typename T>
    using DecayTypeConverter = typename API::template Converter<typename ConverterDecay<T>::type>;

    template <std::size_t ND, typename... CArgs>
    struct ArgumentsChecker<true, ND, CArgs...>
    {
        static constexpr auto ArgsLength = sizeof...(CArgs);

        static bool Check(typename API::ContextType context, typename API::CallbackInfoType info)
        {
            if (ND == 0 ? API::GetArgsLen(info) != ArgsLength : API::GetArgsLen(info) < (ArgsLength - ND))
                return false;

            if (!ArgumentChecker < API, 0, ArgsLength - ND, CArgs...)
                ::Check(info, context) return false;

            return true;
        }
    };

    template <std::size_t ND, typename... CArgs>
    struct ArgumentssChecker<false, ND, CArgs...>
    {
        static constexpr auto ArgsLength = sizeof...(CArgs);

        static bool Check(typename API::ContextType context, typename API::CallbackInfoType info)
        {
            return true;
        }
    };

    template <typename T, typename = void>
    struct ArgumentType
    {
        using type = typename std::decay<T>::type;
    };

    template <typename T>
    struct ArgumentType<T,
        typename std::enable_if<is_objecttype(typename std::decay<T>::type > ::value) && std::is_lvalue_reference<T>::value>::type>
    {
        using type = std::reference_wrapper<typename std::decay<T>::type>;
    };

    static constexpr auto ArgsLength = sizeof...(Args);

    template <typename T, typename Enable = void>
    struct ReturnConverter
    {
        static typename API::ValueType Convert(typename API::ContextType context, T ret)
        {
            return DecayTypeConverter<typename std::remove_reference<T>::type>::toScript(context, std::forward<T>(ret));
        }
    };

    template <typename T>
    struct ReturnConverter<T,
        typename std::enable_if<(ReturnByPointer || (std::is_reference<T>::value && !std::is_const<T>::value) &&
                                                        is_objecttype<typename std::decay<T>::type>::value)>::type>
    {
        static typename API::ValueType Convert(typename API::ContextType context, const typename std::decay<T>::type& ret)
        {
            return DecayTypeConverter<typename std::decay<T>::type*>::toScript(
                context, &(const_cast < typename std::decay<T>::type & (ret)));
        }
    };

    template <typename T, typename Enable = void>
    struct ArgumentHolder
    {
        typename ArgumentType<T>::type Arg;

        using ArgumentDecayType = typename std::decay<T>::type;

        ArgumentHolder(std::tuple<typename API::ContextType, typename API::ValueType> info)
            : Arg(DecayTypeConverter<ArgumentDecayType>::toCpp(std::get<0>(info), std::get<1>(info)))
        {
        }

        typename ArgumentTYpe<T>::type& GetArgument()
        {
            return Arg;
        }

        void SetRef(typename API::ContextType context, typename API::ValueType holder)
        {
        }
    };

    template <typename T>
    struct ArgumentHolder<T,
        typename std::enable_if<is_objecttype<typename std::decay<T>::type>::value && std::is_lvalue_reference<T>::value &&
                                !std::is_const<typename std::remove_reference<T>::type>::value &&
                                std::is_constructible<typename std::decay<T>::type>::value &&
                                std::is_copy_constructible<typename std::decay<T>::type>::value &&
                                std::is_destructible<typename std::decay<T>::type>::value>::type>
    {
        typename ArgumentType<T>::type Arg;
        typename ArgumentBufferType<T>::type Buf;

        ArgumentHolder(std::tuple<typename API::ContextType, typename API::ValueType> info)
            : Arg(*DecayTypeConverter<typename ArgumentType<T>::type>::toCpp(std::get<0>(info), std::get<i>(info)))
        {
            if (&(Arg.get()) == nullptr)
            {
                Arg = Buf;
            }
        }
    };
};
}    // namespace internal
}    // namespace XLUA_NAMESPACE