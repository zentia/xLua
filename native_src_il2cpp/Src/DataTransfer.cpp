#include "DataTransfer.h"
#include "CppObjectMapper.h"

namespace xlua
{
    int DataTransfer::FindOrAddCData(lua_State *L, const void* TypeId, const void* Ptr, bool PassByPointer)
    {
        xlua::CppObjectMapper *cppObjectMapper = xlua::CppObjectMapper::Get(L);
        cppObjectMapper->FindOrAddCppObject(L, TypeId, const_cast<void*>(Ptr), PassByPointer);
        return lua_gettop(L);
    }

    bool DataTransfer::IsInstanceOf(lua_State *L, const void* TypeId, int ObjectIndex)
    {
        xlua::CppObjectMapper *cppObjectMapper = xlua::CppObjectMapper::Get(L);
        return cppObjectMapper->IsInstanceOfCppObject(L, TypeId, ObjectIndex);
    }

    void DataTransfer::UnRef(lua_State *L, int Ref)
    {
        luaL_unref(L, LUA_REGISTRYINDEX, Ref);
    }

    void DataTransfer::UpdateRef(lua_State *L, int OuterIndex, int ValueIndex)
    {
        luaL_unref(L, LUA_REGISTRYINDEX, OuterIndex);

    }

    std::weak_ptr<int> DataTransfer::GetLuaEnvLifeCycleTracker(lua_State *L)
    {
        xlua::CppObjectMapper *cppObjectMapper = xlua::CppObjectMapper::Get(L);
        return cppObjectMapper->GetLuaEnvLifeCycleTracker();
    }
}    // namespace XLUA_NAMESPACE
