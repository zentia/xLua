#pragma once

#define XLUA_INLINE inline

namespace xlua
{
class ObjectCacheNode
{
public:
    XLUA_INLINE ObjectCacheNode(const void* TypeId_) : TypeId(TypeId_), Next(nullptr), UserData(nullptr)
    {
    }

    XLUA_INLINE ObjectCacheNode(const void* TypeId_, ObjectCacheNode* Next_) : TypeId(TypeId_), Next(Next_), UserData(nullptr)
    {
    }

    XLUA_INLINE ObjectCacheNode(ObjectCacheNode&& other) noexcept
        : TypeId(other.TypeId), Next(other.Next), Value(std::move(other.Value))
    {
        other.TypeId = nullptr;
        other.Next = nullptr;
        other.UserData = nullptr;
    }

    XLUA_INLINE ObjectCacheNode& operator=(ObjectCacheNode&& rhs) noexcept
    {
        TypeId = rhs.TypeId;
        Next = rhs.Next;
        UserData = rhs.UserData;
        Value = std::move(rhs.Value);
        rhs.TypeId = nullptr;
        rhs.Next = nullptr;
        rhs.UserData = nullptr;
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

    void* UserData;

    ObjectCacheNode* Next;

    int Value;

    bool MustCallFinalize;

    ObjectCacheNode(const ObjectCacheNode&) = delete;
    void operator=(const ObjectCacheNode&) = delete;
};

}    // namespace xlua
