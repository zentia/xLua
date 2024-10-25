/*
 * Tencent is pleased to support the open source community by making XLua available.
 * Copyright (C) 2020 THL A29 Limited, a Tencent company.  All rights reserved.
 * XLua is licensed under the BSD 3-Clause License, except for the third-party components listed in the file 'LICENSE' which may
 * be subject to their corresponding license terms. This file is subject to the terms and conditions defined in file 'LICENSE',
 * which is part of this source code package.
 */

#pragma once

#include "LuaClassRegister.h"

#include "lua.hpp"
#include "xlua.h"

#if !defined(MAPPER_ISOLATE_DATA_POS)
#define MAPPER_ISOLATE_DATA_POS 0
#endif
#if !defined(BACKENDENV_DATA_POS)
#define BACKENDENV_DATA_POS 1
#endif

#define RELEASED_UOBJECT ((UObject*) 12)
#define RELEASED_UOBJECT_MEMBER ((void*) 12)

#include <sstream>

namespace xlua
{
template <typename T, typename FT, typename = void>
struct TOuterLinker
{
    inline static void Link(lua_State *L, int Outer, int Inner)
    {
    }
};

inline void LinkOuterImpl(lua_State *L, int Outer, int Inner)
{

}

class LUAENV_API DataTransfer
{
public:
    template <typename T>
    FORCEINLINE static T* GetPointerFast(lua_State *L, int Index)
    {
        return xlua_tocsobj_fast(L, Index);
    }

    template <typename T>
    FORCEINLINE static T* GetPointerFast(lua_State *L)
    {
        return xlua_tocsobj_fast(L, 1);
    }
    
    template <typename T>
    FORCEINLINE static T* GetPointer(lua_State *L, int Index = 0)
    {
        return xlua_tocsobj_safe(L, Index);
    }

    //替代 Object->SetAlignedPointerInInternalField(Index, Ptr);
    FORCEINLINE static void SetPointer(lua_State *L, v8::Local<v8::Object> Object, const void* Ptr, int Index)
    {
        
    }
    
    FORCEINLINE static void SetPointer(v8::Object* Object, const void* Ptr, int Index)
    {
        
    }

    static int FindOrAddCData(lua_State *L, const void* TypeId, const void* Ptr, bool PassByPointer);

    static bool IsInstanceOf(lua_State *L, const void* TypeId, int ObjectIndex);

    static void UnRef(lua_State* L, const v8::Local<v8::Value>& Value);

    static void UpdateRef(v8::Isolate* Isolate, v8::Local<v8::Value> Outer, const v8::Local<v8::Value>& Value);

    static std::weak_ptr<int> GetJsEnvLifeCycleTracker(v8::Isolate* Isolate);

    static struct FPersistentObjectEnvInfo* GetPersistentObjectEnvInfo(v8::Isolate* Isolate);

    template <typename T1, typename T2>
    FORCEINLINE static void LinkOuter(v8::Local<v8::Context> Context, v8::Local<v8::Value> Outer, v8::Local<v8::Value> Inner)
    {
        TOuterLinker<T1, T2>::Link(Context, Outer, Inner);
    }

    FORCEINLINE static v8::Local<v8::ArrayBuffer> NewArrayBuffer(v8::Local<v8::Context> Context, void* Data, size_t DataLength)
    {
#if defined(HAS_ARRAYBUFFER_NEW_WITHOUT_STL)
        return v8::ArrayBuffer_New_Without_Stl(Context->GetIsolate(), Data, DataLength);
#else
        auto Backing = v8::ArrayBuffer::NewBackingStore(Data, DataLength, v8::BackingStore::EmptyDeleter, nullptr);
        return v8::ArrayBuffer::New(Context->GetIsolate(), std::move(Backing));
#endif
    }

    FORCEINLINE static void* GetArrayBufferData(v8::Local<v8::ArrayBuffer> InArrayBuffer)
    {
        size_t DataLength;
        return GetArrayBufferData(InArrayBuffer, DataLength);
    }

    FORCEINLINE static void* GetArrayBufferData(v8::Local<v8::ArrayBuffer> InArrayBuffer, size_t& DataLength)
    {
#if defined(HAS_ARRAYBUFFER_NEW_WITHOUT_STL)
        return v8::ArrayBuffer_Get_Data(InArrayBuffer, DataLength);
#else
#if USING_IN_UNREAL_ENGINE
        DataLength = InArrayBuffer->GetContents().ByteLength();
        return InArrayBuffer->GetContents().Data();
#else
        auto BS = InArrayBuffer->GetBackingStore();
        DataLength = BS->ByteLength();
        return BS->Data();
#endif
#endif
    }
    
    FORCEINLINE static void ThrowException(lua_State *L, const char* Message)
    {
        lua_error(L, "%s", Message);
    }
    
    FORCEINLINE static std::string ExceptionToString(lua_State *L, int oldTop)
    {
        v8::String::Utf8Value Exception(Isolate, ExceptionValue);
        const char * StrException = *Exception;
        std::string ExceptionStr(StrException == nullptr ? "" : StrException);
        v8::Local<v8::Message> Message = v8::Exception::CreateMessage(Isolate, ExceptionValue);
        if (Message.IsEmpty())
        {
            // 如果没有提供更详细的信息，直接输出Exception
            return ExceptionStr;
        }
        else
        {
            v8::Local<v8::Context> Context(Isolate->GetCurrentContext());

            // 输出 (filename):(line number): (message).
            std::ostringstream stm;
            v8::String::Utf8Value FileName(Isolate, Message->GetScriptResourceName());
            int LineNum = Message->GetLineNumber(Context).FromJust();
            const char * StrFileName = *FileName;
            stm << (StrFileName == nullptr ? "unknow file" : StrFileName) << ":" << LineNum << ": " << ExceptionStr;

            stm << std::endl;

            // 输出调用栈信息
            v8::MaybeLocal<v8::Value> MaybeStackTrace = v8::TryCatch::StackTrace(Context, ExceptionValue);
            if (!MaybeStackTrace.IsEmpty())
            {
                v8::String::Utf8Value StackTraceVal(Isolate, MaybeStackTrace.ToLocalChecked());
                stm << std::endl << *StackTraceVal;
            }
            return stm.str();
        }
    }

    template<typename T>
    FORCEINLINE void PushByType(lua_State *L, T v)
    {
        
    }
};
}    // namespace PUERTS_NAMESPACE
