#include "DataTransfer.h"
#include "CppObjectMapper.h"

namespace xlua
{
    void* GameCoreDataTransfer::ms_LuaEnvPrivate = nullptr;
    bool GameCoreDataTransfer::IsInstanceOf(lua_State *L, const void* TypeId, int ObjectIndex)
    {
        return xlua::CppObjectMapper::Get()->IsInstanceOfCppObject(L, TypeId, ObjectIndex);
    }

    std::weak_ptr<int> GameCoreDataTransfer::GetLuaEnvLifeCycleTracker(lua_State *L)
    {
        return xlua::CppObjectMapper::Get()->GetLuaEnvLifeCycleTracker();
    }
}    // namespace XLUA_NAMESPACE
