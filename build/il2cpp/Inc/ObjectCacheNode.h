#pragma once

#include "XLuaNamespaceDef.h"

namespace XLUA_NAMESPACE
{
class ObjectCacheNode
{
public:
    ObjectCacheNode(const void* TypeId_) : TypeId(TypeId_), UserData(nullptr), Next(nullptr), MustCallFinalize(false)
    {
    }

    ObjectCacheNode(const void* TypeId_, ObjectCacheNode* Next_)
        : TypeId(TypeId_), UserData(nullptr), Next(Next_), MustCallFinalize(false)
    {
    }

    ObjectCacheNode(ObjectCacheNode&& other) noexcept
        : TypeId(other.TypeId)
        , UserData(other.UserData)
        , Next(other.Next)
        , Value(std::move(other.Value))
        , MustCallFinalize(other.MustCallFinalize)
    {
        other.TypeId = nullptr;
        other.UserData = nullptr;
        other.Next = nullptr;
        other.MustCallFinalize = false;
    }

    ObjectCacheNode& operator=(ObjectCacheNode&& rhs) noexcept
    {
        TypeId = rhs.TypeId;
        Next = rhs.Next;
        Value = std::move(rhs.Value);
        UserData = rhs.UserData;
        MustCallFinalize = rhs.MustCallFinalize;
        rhs.UserData = nullptr;
        rhs.TypeId = nullptr;
        rhs.Next = nullptr;
        rhs.MustCallFinalize = false;
        return *this;
    }

    ~ObjectCacheNode()
    {
        if (Next)
            delete Next;
    }

    ObjectCacheNode* Find(const void* TypeId_)
    {
        if (TypeId_ == TypeId)
        {
            return this;
        }
        if (Next)
        {
            return Next->Find(TypeId_);
        }
        return nullptr;
    }

    ObjectCacheNode* Remove(const void* TypeId_, bool IsHead)
    {
        if (TypeId_ == TypeId)
        {
            if (IsHead)
            {
                if (Next)
                {
                    auto PreNext = Next;
                    *this = std::move(*Next);
                    delete PreNext;
                }
                else
                {
                    TypeId = nullptr;
                    Next = nullptr;
                    Value = -1;
                }
            }
            return this;
        }
        if (Next)
        {
            auto Removed = Next->Remove(TypeId_, false);
            if (Removed && Removed == Next)    // detach & delete by prev node
            {
                Next = Removed->Next;
                Removed->Next = nullptr;
                delete Removed;
            }
            return Removed;
        }
        return nullptr;
    }

    ObjectCacheNode* Add(const void* TypeId_)
    {
        Next = new ObjectCacheNode(TypeId_, Next);
        return Next;
    }

    const void* TypeId;

    void* UserData;

    ObjectCacheNode* Next;

    int Value;

    bool MustCallFinalize;

    ObjectCacheNode(const ObjectCacheNode&) = delete;
    void operator=(const ObjectCacheNode&) = delete;
};

}    // namespace XLUA_NAMESPACE
