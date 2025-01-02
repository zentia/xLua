#pragma once

#include "lua.hpp"

#include <map>
#include <memory>
#include <vector>

#include "dense_hash_map.h"

#include "LuaClassRegister.h"
#include "ObjectCacheNode.h"
#ifdef __cplusplus
extern "C" {
#endif

extern pesapi_ffi g_pesapi_ffi;
#ifdef __cplusplus
}
#endif

typedef struct
{
    void* Ptr;
    const void* TypeId;
    bool NeedDelete;
    int index;
} CppObject;

struct pesapi_callback_info__
{
    lua_State* L;
    int ArgStart;    // 0 or 1
    int RetNum;
};

typedef pesapi_callback_info__ PersistentObjectEnvInfo;

namespace xlua
{
struct PesapiCallbackData
{
    pesapi_callback Callback;
    void* Data;
    pesapi_function_finalize Finalize = nullptr;
};

    struct MetaInfo
    {
        int ref;
        bool pairs;
    };

class CppObjectMapper
{
public:
    CppObjectMapper();
    void Initialize(lua_State* L);
  
    bool IsInstanceOfCppObject(lua_State* L, const void* TypeId, int ObjectIndex);

    std::weak_ptr<int> GetLuaEnvLifeCycleTracker();

    int FindOrAddCppObject(lua_State* L, const void* TypeId, void* Ptr, bool PassByPointer);

    int CreateFunction(lua_State* L, pesapi_callback Callback, void* Data, pesapi_function_finalize Finalize);

    void UnBindCppObject(lua_State* L, LuaClassDefinition* ClassDefinition, void* Ptr, int UserData);

    void BindCppObject(lua_State* L, LuaClassDefinition* ClassDefinition, void* Ptr, bool PassByPointer, bool create);

    void* GetPrivateData(lua_State* L, int index);

    void SetPrivateData(lua_State* L, int index, void* Ptr);

    int LoadTypeById(lua_State* L, const void* TypeId);

    void UnInitialize(lua_State* L);

    static CppObjectMapper* Get();
    static void CallbackDataGarbageCollected(PesapiCallbackData* Data);
#if OSG_PROFILE
    static int PrefPropertyGetterIndex;
    static int PrefPropertySetterIndex;
    static int PrefFieldGetterIndex;
    static int PrefFieldSetterIndex;
    static int PrefMethodIndex;
    static int PrefFunctionIndex;
    static int PrefNewIndex;
    static int PrefGCIndex;
#endif

private:
    dense_hash_map<void*, ObjectCacheNode*, PointerHashFunctor, std::equal_to<void*>> CDataCache;

    dense_hash_map<const void*, MetaInfo*, ConstPointerHashFunctor, std::equal_to<const void*>> TypeIdToMetaMap;

    int PointerConstructor;

    std::map<void*, FinalizeFunc> CDataFinalizeMap;
    std::map<std::string, const char*> supportOp;

    std::shared_ptr<int> Ref = std::make_shared<int>(0);

    int CacheRef = 0;
    int CachePrivateDataRef = 0;
    int PairsRef = 0;

    int GetMetaRefOfClass(lua_State* L, const LuaClassDefinition* ClassDefinition, bool &pairs);

    std::vector<PesapiCallbackData*> FunctionDatas;
    static CppObjectMapper* ms_Instance;
};

}    // namespace xlua
