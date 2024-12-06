#include "DataTransfer.h"
#include "CppObjectMapper.h"

namespace xlua
{
    void* DataTransfer::ms_LuaEnvPrivate = nullptr;
    bool DataTransfer::IsInstanceOf(lua_State *L, const void* TypeId, int ObjectIndex)
    {
        return xlua::CppObjectMapper::Get()->IsInstanceOfCppObject(L, TypeId, ObjectIndex);
    }

    std::weak_ptr<int> DataTransfer::GetLuaEnvLifeCycleTracker(lua_State *L)
    {
        return xlua::CppObjectMapper::Get()->GetLuaEnvLifeCycleTracker();
    }
}    // namespace XLUA_NAMESPACE
