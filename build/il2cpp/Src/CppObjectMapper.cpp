#include "CppObjectMapper.h"
#include "DataTransfer.h"
#include <memory>
#include "pesapi.h"
#include "XLua.h"

#include <chrono>
using namespace std::chrono;

namespace xlua
{

static int dummy_idx_tag = 0;

CppObjectMapper* CppObjectMapper::ms_Instance = nullptr;

CppObjectMapper* CppObjectMapper::Get()
{
    return ms_Instance;
}

int CppObjectMapper::LoadCppType(lua_State* L)
{
    auto ClassDef = FindCppTypeClassByName(lua_tostring(L, 1));
    if (ClassDef)
    {
        lua_createtable(L, 0, 0);
        lua_pushlightuserdata(L, const_cast<void*>(ClassDef->TypeId));
        lua_setfield(L, -2, "__p_innerType");

        int meta_ref = GetMetaRefOfClass(L, ClassDef);
        lua_rawgeti(L, LUA_REGISTRYINDEX, meta_ref);
        lua_pushlightuserdata(L, &dummy_idx_tag);
        lua_rawget(L, -2);
        lua_remove(L, -2);
        if (!lua_isnil(L, -1))
        {
            lua_setmetatable(L, -2);
            return 1;
        }
        else
        {
            return luaL_error(L, "type meta not find %s", lua_tostring(L, 1));
        }
    }
    else
    {
        return luaL_error(L, "no such type %s", lua_tostring(L, 1));
    }
}

int CppObjectMapper::LoadTypeById(lua_State* L, const void* TypeId)
{
    auto ClassDef = xlua::LoadClassByID(TypeId);
    if (ClassDef)
    {
        lua_createtable(L, 0, 0);
        lua_pushlightuserdata(L, const_cast<void*>(TypeId));
        lua_setfield(L, -2, "__p_innerType");

        int meta_ref = GetMetaRefOfClass(L, ClassDef);
        lua_rawgeti(L, LUA_REGISTRYINDEX, meta_ref);
        lua_pushlightuserdata(L, &dummy_idx_tag);
        lua_rawget(L, -2);
        lua_remove(L, -2);
        if (!lua_isnil(L, -1))
        {
            lua_setmetatable(L, -2);
            return lua_gettop(L);
        }
        else
        {
            return luaL_error(L, "type meta not find");
        }
    }
    else
    {
        return luaL_error(L, "no such type");
    }
}

void CppObjectMapper::Initialize(lua_State* L)
{
    lua_newtable(L);
    CacheRef = luaL_ref(L, LUA_REGISTRYINDEX);
    lua_newtable(L);
    CachePrivateDataRef = luaL_ref(L, LUA_REGISTRYINDEX);
    TypeIdToMetaMap.set_empty_key((const void*) 0);
    CDataCache.set_empty_key((void*) 0);
    ms_Instance = this;
}

int CppObjectMapper::FindOrAddCppObject(lua_State* L, const void* TypeId, void* Ptr, bool PassByPointer)
{
    if (Ptr == nullptr)
    {
        lua_pushnil(L);
        return lua_gettop(L);
    }

    if (PassByPointer)
    {
        auto Iter = CDataCache.find(Ptr);
        if (Iter != CDataCache.end())
        {
            // printf("find in cache:%p\n", Ptr);
            lua_rawgeti(L, LUA_REGISTRYINDEX, CacheRef);
            lua_rawgeti(L, -1, Iter->second);
            lua_remove(L, -2);
            lua_assert(lua_isuserdata(L, -1));
            return lua_gettop(L);
        }
    }

    auto ClassDefinition = LoadClassByID(TypeId);
    lua_assert(ClassDefinition);
    BindCppObject(L, const_cast<LuaClassDefinition*>(ClassDefinition), Ptr, PassByPointer, false);
    return lua_gettop(L);
}

static int PesapiFunctionCallback(lua_State* L)
{
    PesapiCallbackData* FunctionInfo = reinterpret_cast<PesapiCallbackData*>(lua_touserdata(L, lua_upvalueindex(1)));
    pesapi_callback_info__ info{L, 0, 0};
    FunctionInfo->Callback(GetFFIApi(), &info);
    return 1;
}

int CppObjectMapper::CreateFunction(lua_State* L, pesapi_callback Callback, void* Data)
{
    auto CallbackData = new PesapiCallbackData{Callback, Data};
    FunctionDatas.push_back(CallbackData);
    lua_pushlightuserdata(L, CallbackData);
    lua_pushlightuserdata(L, Data);
    lua_pushcclosure(L, (lua_CFunction) PesapiFunctionCallback, 2);
    return lua_gettop(L);
}

bool CppObjectMapper::IsInstanceOfCppObject(lua_State* L, const void* TypeId, int ObjectIndex)
{
    CppObject* cppObject = (CppObject*) lua_touserdata(L, ObjectIndex);
    return cppObject && cppObject->TypeId == TypeId;
}

std::weak_ptr<int> CppObjectMapper::GetLuaEnvLifeCycleTracker()
{
    return std::weak_ptr<int>(Ref);
}

void CppObjectMapper::BindCppObject(lua_State* L, LuaClassDefinition* ClassDefinition, void* Ptr, bool PassByPointer, bool create)
{
    CppObject* obj = (CppObject*) lua_newuserdata(L, sizeof(CppObject));
    obj->Ptr = Ptr;
    obj->TypeId = ClassDefinition->TypeId;
    obj->NeedDelete = !PassByPointer;
    int meta_ref = GetMetaRefOfClass(L, ClassDefinition);
    lua_rawgeti(L, LUA_REGISTRYINDEX, meta_ref);
    lua_setmetatable(L, -2);

    if (!create)
    {
        lua_rawgeti(L, LUA_REGISTRYINDEX, CacheRef);
        lua_pushvalue(L, -2);
        int ref = luaL_ref(L, -2);
        lua_pop(L, 1);
        
        auto Iter = CDataCache.find(Ptr);
        lua_assert(Iter != CDataCache.end());
        CDataCache[Ptr] = ref;
    }
    
    if (ClassDefinition->OnEnter)
    {
        obj->UserData = ClassDefinition->OnEnter(Ptr, ClassDefinition->Data, DataTransfer::GetLuaEnvPrivate());
    }
}

void* CppObjectMapper::GetPrivateData(lua_State* L, int index)
{
    lua_rawgeti(L, LUA_REGISTRYINDEX, CachePrivateDataRef);
    lua_pushvalue(L, index);
    lua_rawget(L, -2);
    if (lua_isnil(L, -1))
    {
        lua_pop(L, 2);
        return nullptr;
    }
    void* data = lua_touserdata(L, -1);
    lua_pop(L, 2);
    return data;
}

void CppObjectMapper::SetPrivateData(lua_State* L, int value_ref, void* Ptr)
{
    lua_rawgeti(L, LUA_REGISTRYINDEX, CachePrivateDataRef);
    lua_rawgeti(L, LUA_REGISTRYINDEX, value_ref);
    if (Ptr == nullptr)
    {
        lua_pushnil(L);
    }
    else
    {
        lua_pushlightuserdata(L, Ptr);
    }
    lua_rawset(L, -3);
    lua_pop(L, 1);
}

void CppObjectMapper::UnBindCppObject(lua_State* L, LuaClassDefinition* ClassDefinition, void* Ptr, void* UserData)
{
    CDataFinalizeMap.erase(Ptr);
    auto Iter = CDataCache.find(Ptr);
    lua_assert(Iter != CDataCache.end());
    CDataCache.erase(Ptr);
    if (ClassDefinition->OnExit)
    {
        ClassDefinition->OnExit(Ptr, ClassDefinition->Data, DataTransfer::GetLuaEnvPrivate(), UserData);
    }
}

void CppObjectMapper::UnInitialize(lua_State* L)
{
    auto PData = DataTransfer::GetLuaEnvPrivate();
    lua_rawgeti(L, LUA_REGISTRYINDEX, CacheRef);
    for (auto& KV : CDataCache)
    {
        lua_rawgeti(L, -1, KV.second);
        lua_assert(lua_isuserdata(L, -1));
        CppObject* obj = (CppObject*)lua_touserdata(L, -1);
        const LuaClassDefinition* ClassDefinition = FindClassByID(obj->TypeId);
        if (ClassDefinition && ClassDefinition->Finalize)
        {
            ClassDefinition->Finalize(GetFFIApi(), KV.first, ClassDefinition->Data, PData);
        }
        if (ClassDefinition && ClassDefinition->OnExit)
        {
            ClassDefinition->OnExit(KV.first, ClassDefinition->Data, PData, nullptr);
        }
    }
    for (int i = 0; i < FunctionDatas.size(); ++i)
    {
        delete FunctionDatas[i];
    }
    FunctionDatas.clear();
    CDataCache.clear();
    TypeIdToMetaMap.clear();
    luaL_unref(L, LUA_REGISTRYINDEX, CacheRef);
    luaL_unref(L, LUA_REGISTRYINDEX, CachePrivateDataRef);
    ms_Instance = nullptr;
}

// param   --- [1]: obj, [2]: key
static int obj_indexer(lua_State* L)
{
    if (!lua_isnil(L, lua_upvalueindex(1)))
    {
        lua_pushvalue(L, 2);
        lua_gettable(L, lua_upvalueindex(1));
        if (!lua_isnil(L, -1))
        {    // has method
            return 1;
        }
        lua_pop(L, 1);
    }

    if (!lua_isnil(L, lua_upvalueindex(2)))
    {
        lua_pushvalue(L, 2);
        lua_gettable(L, lua_upvalueindex(2));
        if (!lua_isnil(L, -1))
        {    // has getter
            lua_pushvalue(L, 1);
            lua_call(L, 1, 1);
            return 1;
        }
        const void* p = lua_topointer(L, lua_upvalueindex(1));
        lua_pop(L, 1);
    }

    if (!lua_isnil(L, lua_upvalueindex(3)))
    {
        lua_settop(L, 2);
        lua_pushvalue(L, lua_upvalueindex(3));
        lua_insert(L, 1);
        lua_call(L, 2, 1);
        return 1;
    }
    else
    {
        return 0;
    }
}

// upvalue --- [1]:setters, [2]:base_newindex
// param   --- [1]: obj, [2]: key, [3]: value
int obj_newindexer(lua_State* L)
{
    if (!lua_isnil(L, lua_upvalueindex(1)))
    {
        lua_pushvalue(L, 2);
        lua_gettable(L, lua_upvalueindex(1));
        if (!lua_isnil(L, -1))
        {    // has setter
            lua_pushvalue(L, 1);
            lua_pushvalue(L, 3);
            lua_call(L, 2, 0);
            return 0;
        }
        lua_pop(L, 1);
    }

    if (!lua_isnil(L, lua_upvalueindex(2)))
    {
        lua_settop(L, 3);
        lua_pushvalue(L, lua_upvalueindex(2));
        lua_insert(L, 1);
        lua_call(L, 3, 0);
        return 0;
    }
    else
    {
        return luaL_error(L, "class cannot set %s, no such field", lua_tostring(L, 2));
    }
}

static int object_new(lua_State* L)
{
    // auto starttime = system_clock::now();
    LuaClassDefinition* class_definition = (LuaClassDefinition*) lua_touserdata(L, lua_upvalueindex(1));
    pesapi_callback_info__ callback_info{L, 1, 0};
    xlua::CppObjectMapper::Get()->BindCppObject(
        L, class_definition, class_definition->Initialize(GetFFIApi(), &callback_info), false, true);
    /*auto diff = std::chrono::duration_cast<std::chrono::microseconds>(system_clock::now() - starttime).count();
    xlua::Log("%I64d", diff);*/
    return 1;
}

static int object_gc(lua_State* L)
{
    LuaClassDefinition* class_definition = (LuaClassDefinition*) lua_touserdata(L, lua_upvalueindex(1));
    CppObject* cppObject = (CppObject*) lua_touserdata(L, -1);
    xlua::CppObjectMapper::Get()->UnBindCppObject(L, class_definition, cppObject->Ptr, cppObject->UserData);
    if (cppObject->NeedDelete)
    {
        // printf("Finalize %p\n", cppObject->Ptr);
        if (class_definition->Finalize)
            class_definition->Finalize(GetFFIApi(), cppObject->Ptr, class_definition->Data, L);
    }

    return 0;
}

// upvalue --- [1]:getters, [2]:fields, [3]:base_index
// param   --- [1]: obj, [2]: key
static int static_indexer(lua_State* L)
{
    if (!lua_isnil(L, lua_upvalueindex(1)))
    {
        lua_pushvalue(L, 2);
        lua_gettable(L, lua_upvalueindex(1));
        if (!lua_isnil(L, -1))
        {    // has getter
            lua_call(L, 0, 1);
            return 1;
        }
        lua_pop(L, 1);
    }

    if (!lua_isnil(L, lua_upvalueindex(2)))
    {
        lua_pushvalue(L, 2);
        lua_rawget(L, lua_upvalueindex(2));
        if (!lua_isnil(L, -1))
        {    // has field
            return 1;
        }
        lua_pop(L, 1);
    }

    if (!lua_isnil(L, lua_upvalueindex(3)))
    {
        lua_settop(L, 2);
        lua_pushvalue(L, lua_upvalueindex(3));
        lua_insert(L, 1);
        lua_call(L, 2, 1);
        return 1;
    }
    else
    {
        lua_pushnil(L);
        return 1;
    }
}

// upvalue --- [1]:setters, [2]:base_newindex
// param   --- [1]: obj, [2]: key, [3]: value
static int static_newindexer(lua_State* L)
{
    if (!lua_isnil(L, lua_upvalueindex(1)))
    {
        lua_pushvalue(L, 2);
        lua_gettable(L, lua_upvalueindex(1));
        if (!lua_isnil(L, -1))
        {    // has setter
            lua_pushvalue(L, 3);
            lua_call(L, 1, 0);
            return 0;
        }
    }

    if (!lua_isnil(L, lua_upvalueindex(2)))
    {
        lua_settop(L, 3);
        lua_pushvalue(L, lua_upvalueindex(2));
        lua_insert(L, 1);
        lua_call(L, 3, 0);
        return 0;
    }
    else
    {
        return luaL_error(L, "no static field %s", lua_tostring(L, 2));
    }
}

static int property_getter_wrap(lua_State* L)
{
    LuaPropertyInfo* prop_info = (LuaPropertyInfo*) lua_touserdata(L, lua_upvalueindex(1));
    // printf("property_getter_wrap %p\n", prop_info);
    pesapi_callback_info__ callback_info{L, 1, 0};
    prop_info->Getter(GetFFIApi(), &callback_info);
    return callback_info.RetNum;
}

static int property_setter_wrap(lua_State* L)
{
    LuaPropertyInfo* prop_info = (LuaPropertyInfo*) lua_touserdata(L, lua_upvalueindex(1));
    // printf("property_setter_wrap %p\n", prop_info);
    pesapi_callback_info__ callback_info{L, 1, 0};
    prop_info->Setter(GetFFIApi(), &callback_info);
    return callback_info.RetNum;
}

static int variable_getter_wrap(lua_State* L)
{
    LuaPropertyInfo* prop_info = (LuaPropertyInfo*) lua_touserdata(L, lua_upvalueindex(1));
    // printf("variable_getter_wrap %p top=%d\n", prop_info, lua_gettop(L));
    pesapi_callback_info__ callback_info{L, 0, 0};
    prop_info->Getter(GetFFIApi(), &callback_info);
    return callback_info.RetNum;
}

static int variable_setter_wrap(lua_State* L)
{
    LuaPropertyInfo* prop_info = (LuaPropertyInfo*) lua_touserdata(L, lua_upvalueindex(1));
    // printf("variable_setter_wrap %p top=%d\n", prop_info, lua_gettop(L));
    pesapi_callback_info__ callback_info{L, 0, 0};
    prop_info->Setter(GetFFIApi(), &callback_info);
    return callback_info.RetNum;
}

static int method_wrap(lua_State* L)
{
    LuaFunctionInfo* func_info = (LuaFunctionInfo*) lua_touserdata(L, lua_upvalueindex(1));
    // printf("method_wrap %p\n", func_info);
    pesapi_callback_info__ callback_info{L, 1, 0};
    func_info->Callback(GetFFIApi(), &callback_info);
    return callback_info.RetNum;
}

static int function_wrap(lua_State* L)
{
    LuaFunctionInfo* func_info = (LuaFunctionInfo*) lua_touserdata(L, lua_upvalueindex(1));
    // printf("function_wrap %p\n", func_info);
    pesapi_callback_info__ callback_info{L, 0, 0};
    func_info->Callback(GetFFIApi(), &callback_info);
    return callback_info.RetNum;
}

int CppObjectMapper::GetMetaRefOfClass(lua_State* L, const LuaClassDefinition* ClassDefinition)
{
    // printf("GetMetaRefOfClass %p \n", ClassDefinition);
    auto Iter = TypeIdToMetaMap.find(ClassDefinition->TypeId);
    if (Iter == TypeIdToMetaMap.end())
    {
        int org_top = lua_gettop(L);
        int super_meta_ref = 0;
        bool has_super = false;
        if (ClassDefinition->SuperTypeId)
        {
            if (auto SuperDefinition = LoadClassByID(ClassDefinition->SuperTypeId))
            {
                super_meta_ref = GetMetaRefOfClass(L, SuperDefinition);
                has_super = true;
            }
        }

        lua_createtable(L, 0, 0);
        int obj_methods = lua_gettop(L);
        lua_createtable(L, 0, 0);
        int obj_getters = lua_gettop(L);
        lua_createtable(L, 0, 0);
        int obj_setters = lua_gettop(L);

        lua_createtable(L, 0, 0);
        int static_functions = lua_gettop(L);
        lua_createtable(L, 0, 0);
        int static_getters = lua_gettop(L);
        lua_createtable(L, 0, 0);
        int static_setters = lua_gettop(L);

        LuaPropertyInfo* PropertyInfo = ClassDefinition->Properties;
        while (PropertyInfo && PropertyInfo->Name && PropertyInfo->Getter)
        {
            if (PropertyInfo->Getter)
            {
                lua_pushstring(L, PropertyInfo->Name);
                lua_pushlightuserdata(L, PropertyInfo);
                lua_pushlightuserdata(L, PropertyInfo->GetterData);
                // printf("p get %s, %p \n", PropertyInfo->Name, PropertyInfo);
                lua_pushcclosure(L, property_getter_wrap, 2);
                lua_rawset(L, obj_getters);
            }
            if (PropertyInfo->Setter)
            {
                lua_pushstring(L, PropertyInfo->Name);
                lua_pushlightuserdata(L, PropertyInfo);
                lua_pushlightuserdata(L, PropertyInfo->SetterData);
                // printf("p set %s, %p \n", PropertyInfo->Name, PropertyInfo);
                lua_pushcclosure(L, property_setter_wrap, 2);
                lua_rawset(L, obj_setters);
            }
            ++PropertyInfo;
        }

        PropertyInfo = ClassDefinition->Variables;
        while (PropertyInfo && PropertyInfo->Name && PropertyInfo->Getter)
        {
            if (PropertyInfo->Getter)
            {
                lua_pushstring(L, PropertyInfo->Name);
                lua_pushlightuserdata(L, PropertyInfo);
                lua_pushlightuserdata(L, PropertyInfo->GetterData);
                // printf("v get %s, %p \n", PropertyInfo->Name, PropertyInfo);
                lua_pushcclosure(L, variable_getter_wrap, 2);
                lua_rawset(L, static_getters);
            }
            if (PropertyInfo->Setter)
            {
                lua_pushstring(L, PropertyInfo->Name);
                lua_pushlightuserdata(L, PropertyInfo);
                lua_pushlightuserdata(L, PropertyInfo->SetterData);
                // printf("v set %s, %p \n", PropertyInfo->Name, PropertyInfo);
                lua_pushcclosure(L, variable_setter_wrap, 2);
                lua_rawset(L, static_setters);
            }
            ++PropertyInfo;
        }

        LuaFunctionInfo* FunctionInfo = ClassDefinition->Methods;
        while (FunctionInfo && FunctionInfo->Name && FunctionInfo->Callback)
        {
            lua_pushstring(L, FunctionInfo->Name);
            lua_pushlightuserdata(L, FunctionInfo);
            lua_pushlightuserdata(L, FunctionInfo->Data);
            // printf("m %s, %p \n", FunctionInfo->Name, FunctionInfo);
            lua_pushcclosure(L, method_wrap, 2);
            lua_rawset(L, obj_methods);
            ++FunctionInfo;
        }
        FunctionInfo = ClassDefinition->Functions;
        while (FunctionInfo && FunctionInfo->Name && FunctionInfo->Callback)
        {
            lua_pushstring(L, FunctionInfo->Name);
            lua_pushlightuserdata(L, FunctionInfo);
            lua_pushlightuserdata(L, FunctionInfo->Data);
            // printf("f %s, %p \n", FunctionInfo->Name, FunctionInfo);
            lua_pushcclosure(L, function_wrap, 2);
            lua_rawset(L, static_functions);
            ++FunctionInfo;
        }

        luaL_newmetatable(L, ClassDefinition->ScriptName);
        int meta = lua_gettop(L);

        lua_pushstring(L, "__index");
        lua_pushvalue(L, obj_methods);
        lua_pushvalue(L, obj_getters);
        if (has_super)
        {
            lua_rawgeti(L, LUA_REGISTRYINDEX, super_meta_ref);
            lua_pushstring(L, "__index");
            lua_rawget(L, -2);
            lua_remove(L, -2);
        }
        else
        {
            lua_pushnil(L);
        }
        lua_pushcclosure(L, obj_indexer, 3);
        lua_rawset(L, meta);

        lua_pushstring(L, "__newindex");
        lua_pushvalue(L, obj_setters);
        if (has_super)
        {
            lua_rawgeti(L, LUA_REGISTRYINDEX, super_meta_ref);
            lua_pushstring(L, "__newindex");
            lua_rawget(L, -2);
            lua_remove(L, -2);
        }
        else
        {
            lua_pushnil(L);
        }
        lua_pushcclosure(L, obj_newindexer, 2);
        lua_rawset(L, meta);

        lua_pushstring(L, "__gc");
        lua_pushlightuserdata(L, const_cast<LuaClassDefinition*>(ClassDefinition));
        lua_pushcclosure(L, object_gc, 1);
        lua_rawset(L, meta);

        lua_createtable(L, 0, 0);
        int cls_meta = lua_gettop(L);

        lua_pushstring(L, "__call");
        lua_pushlightuserdata(L, const_cast<LuaClassDefinition*>(ClassDefinition));
        lua_pushlightuserdata(L, ClassDefinition->Data);
        lua_pushcclosure(L, object_new, 2);
        lua_rawset(L, cls_meta);

        lua_pushstring(L, "__index");
        lua_pushvalue(L, static_getters);
        lua_pushvalue(L, static_functions);
        if (has_super)
        {
            lua_rawgeti(L, LUA_REGISTRYINDEX, super_meta_ref);
            lua_pushlightuserdata(L, &dummy_idx_tag);
            lua_rawget(L, -2);
            lua_remove(L, -2);
            if (!lua_isnil(L, -1))
            {
                lua_pushstring(L, "__index");
                lua_rawget(L, -2);
                lua_remove(L, -2);
            }
        }
        else
        {
            lua_pushnil(L);
        }
        lua_pushcclosure(L, static_indexer, 3);
        lua_rawset(L, cls_meta);

        lua_pushstring(L, "__newindex");
        lua_pushvalue(L, static_setters);
        if (has_super)
        {
            lua_rawgeti(L, LUA_REGISTRYINDEX, super_meta_ref);
            lua_pushlightuserdata(L, &dummy_idx_tag);
            lua_rawget(L, -2);
            lua_remove(L, -2);
            if (!lua_isnil(L, -1))
            {
                lua_pushstring(L, "__newindex");
                lua_rawget(L, -2);
                lua_remove(L, -2);
            }
        }
        else
        {
            lua_pushnil(L);
        }
        lua_pushcclosure(L, static_newindexer, 2);
        lua_rawset(L, cls_meta);

        lua_pushlightuserdata(L, &dummy_idx_tag);
        lua_insert(L, cls_meta);
        lua_rawset(L, meta);

        int meta_ref = luaL_ref(L, LUA_REGISTRYINDEX);
        lua_pop(L, 6);

        if (org_top != lua_gettop(L))
        {
            luaL_error(L, "stack top changed ? %d, %d\n", org_top, lua_gettop(L));
        }
        TypeIdToMetaMap[ClassDefinition->TypeId] = meta_ref;
        return meta_ref;
    }
    else
    {
        return Iter->second;
    }
}

}    // namespace xlua
