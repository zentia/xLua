#pragma once

#include "XLuaNamespaceDef.h"

namespace XLUA_NAMESPACE
{
    class ObjectCacheNode
    {
    public:
        explicit ObjectCacheNode(const void* typeId)
            : TypeId(typeId)
            , UserData(nullptr)
            , Next(nullptr)
            , Value(-1)
            , MustCallFinalize(false)
        {
        }

        ObjectCacheNode(const void* typeId, ObjectCacheNode* next)
            : TypeId(typeId)
            , UserData(nullptr)
            , Next(next)
            , Value(-1)
            , MustCallFinalize(false)
        {
        }

        ObjectCacheNode(ObjectCacheNode&& other) noexcept
            : TypeId(other.TypeId)
            , UserData(other.UserData)
            , Next(other.Next)
            , Value(std::move(other.Value))
            , MustCallFinalize(other.MustCallFinalize)
        {
            other.TypeId           = nullptr;
            other.UserData         = nullptr;
            other.Next             = nullptr;
            other.MustCallFinalize = false;
        }

        ObjectCacheNode& operator=(ObjectCacheNode&& rhs) noexcept
        {
            TypeId               = rhs.TypeId;
            Next                 = rhs.Next;
            Value                = std::move(rhs.Value);
            UserData             = rhs.UserData;
            MustCallFinalize     = rhs.MustCallFinalize;
            rhs.UserData         = nullptr;
            rhs.TypeId           = nullptr;
            rhs.Next             = nullptr;
            rhs.MustCallFinalize = false;
            return *this;
        }

        ~ObjectCacheNode()
        {
            delete Next;
        }

        ObjectCacheNode* Find(const void* typeId)
        {
            if (typeId == TypeId)
            {
                return this;
            }
            if (Next)
            {
                return Next->Find(typeId);
            }
            return nullptr;
        }

        ObjectCacheNode* Remove(const void* typeId, const bool isHead)
        {
            if (typeId == TypeId)
            {
                if (isHead)
                {
                    if (Next)
                    {
                        const auto preNext = Next;
                        *this              = std::move(*Next);
                        delete preNext;
                    }
                    else
                    {
                        TypeId = nullptr;
                        Next   = nullptr;
                        Value  = -1;
                    }
                }
                return this;
            }
            if (Next)
            {
                const auto removed = Next->Remove(typeId, false);
                if (removed && removed == Next) // detach & delete by prev node
                {
                    Next          = removed->Next;
                    removed->Next = nullptr;
                    delete removed;
                }
                return removed;
            }
            return nullptr;
        }

        [[nodiscard]] bool IsValid() const
        {
            return TypeId != nullptr && Value != -1;
        }

        ObjectCacheNode* Add(const void* typeId)
        {
            Next = new ObjectCacheNode(typeId, Next);
            return Next;
        }

        const void* TypeId;

        void* UserData;

        ObjectCacheNode* Next;

        int Value;

        bool MustCallFinalize;

        ObjectCacheNode(const ObjectCacheNode&) = delete;
        void operator=(const ObjectCacheNode&)  = delete;
    };

} // namespace XLUA_NAMESPACE
