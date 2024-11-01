/*
 * Tencent is pleased to support the open source community by making XLua available.
 * Copyright (C) 2020 THL A29 Limited, a Tencent company.  All rights reserved.
 * Puerts is licensed under the BSD 3-Clause License, except for the third-party components listed in the file 'LICENSE' which may
 * be subject to their corresponding license terms. This file is subject to the terms and conditions defined in file 'LICENSE',
 * which is part of this source code package.
 */

#pragma once

#define XLUA_INLINE inline

namespace xlua
{
class ObjectCacheNode
{
public:
    XLUA_INLINE ObjectCacheNode(const void* TypeId_) : TypeId(TypeId_), Next(nullptr)
    {
    }

    XLUA_INLINE ObjectCacheNode(const void* TypeId_, ObjectCacheNode* Next_) : TypeId(TypeId_), Next(Next_)
    {
    }

    XLUA_INLINE ObjectCacheNode(ObjectCacheNode&& other) noexcept
        : TypeId(other.TypeId), Next(other.Next), Value(std::move(other.Value))
    {
        other.TypeId = nullptr;
        other.Next = nullptr;
    }

    XLUA_INLINE ObjectCacheNode& operator=(ObjectCacheNode&& rhs) noexcept
    {
        TypeId = rhs.TypeId;
        Next = rhs.Next;
        Value = std::move(rhs.Value);
        rhs.TypeId = nullptr;
        rhs.Next = nullptr;
        return *this;
    }

    ~ObjectCacheNode()
    {
        if (Next)
            delete Next;
        // TODO: release value...
    }

    XLUA_INLINE ObjectCacheNode* Find(const void* TypeId_)
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
                    // TODO: release value...
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

    XLUA_INLINE ObjectCacheNode* Add(const void* TypeId_)
    {
        Next = new ObjectCacheNode(TypeId_, Next);
        return Next;
    }

    const void* TypeId;

    ObjectCacheNode* Next;

    int Value;

    ObjectCacheNode(const ObjectCacheNode&) = delete;
    void operator=(const ObjectCacheNode&) = delete;
};

}    // namespace xlua
