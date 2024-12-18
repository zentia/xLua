#include "unityenv_for_xlua.h"
#include "il2cpp-config.h"
#include "codegen/il2cpp-codegen.h"

#include "il2cpp-api.h"
#include "il2cpp-class-internals.h"
#include "il2cpp-object-internals.h"
#include "vm/InternalCalls.h"
#include "vm/Object.h"
#include "vm/Array.h"
#include "vm/Runtime.h"
#include "vm/Reflection.h"
#include "vm/MetadataCache.h"
#include "vm/Field.h"
#include "vm/GenericClass.h"
#include "vm/Thread.h"
#include "vm/Method.h"
#include "vm/Parameter.h"
#include "vm/Image.h"
#include "utils/StringUtils.h"
#include "gc/WriteBarrier.h"
#include "gc/GCHandle.h"
#include "pesapi.h"
#include "TDataTrans.h"

#include <vector>
#include <mutex>
#include <map>
#include <string>
#include <unordered_set>

// Because we need to hold the C# object pointer, we must ensure that GC does not do memory reorganization
static_assert(IL2CPP_GC_BOEHM, "Only BOEHM GC supported!");

#ifdef UNITY_2023_2_OR_NEWER
typedef Il2CppGCHandle XLUA_Il2CppGCHandle;
#else
typedef int32_t XLUA_Il2CppGCHandle;
#endif


using namespace il2cpp::vm;

namespace xlua
{
    struct CSharpMethodInfo
    {
        std::string Name;
        bool IsStatic;
        bool IsGetter;
        bool IsSetter;
        bool NeedBoxing;
        std::vector<WrapData*> OverloadDatas;
    };

    struct CSharpFieldInfo
    {
        std::string Name;
        bool IsStatic;
        FieldWrapData* Data;
    };

    struct LuaClassInfoHeader
    {
        Il2CppClass* TypeId;
        Il2CppClass* SuperTypeId;
        bool IsValueType;
        Il2CppMethodPointer DelegateBridge;
        WrapData** CtorWrapDatas;
    };

    WrapFuncPtr FindWrapFunc(const char* signature);
    struct FieldWrapFuncInfo* FindFieldWrapFuncInfo(const char* signature);
    Il2CppMethodPointer FindBridgeFunc(const char* signature);

    struct LuaClassInfo : public LuaClassInfoHeader
    {
        std::string Name;
        std::vector<WrapData*> Ctors;
        std::vector<CSharpMethodInfo> Methods;
        std::vector<CSharpFieldInfo> Fields;
    };

    intptr_t GetMethodPointer(Il2CppReflectionMethod* method)
    {
        auto methodInfo = method->method;
        auto ret = MetadataCache::GetMethodPointer(methodInfo->klass->image, methodInfo->token);
        if (!ret)
        {
            ret = methodInfo->methodPointer;
        }
        return (intptr_t)ret;
    }

    intptr_t GetMethodInfoPointer(Il2CppReflectionMethod* method)
    {
        return (intptr_t)method->method;
    }

    int32_t GetFieldOffset(Il2CppReflectionField* field, bool isInValueType)
    {
        return (int32_t)Field::GetOffset(field->field) -
            (Class::IsValuetype(Field::GetParent(field->field)) ? sizeof(Il2CppObject) : 0);
    }

    intptr_t GetFieldInfoPointer(Il2CppReflectionField* field)
    {
        return (intptr_t)field->field;
    }

    intptr_t GetTypeId(Il2CppReflectionType* type)
    {
        return (intptr_t)il2cpp_codegen_class_from_type(type->type);
    }

    static Il2CppClass* g_typeofPersistentObjectInfo;
    Il2CppClass* g_typeofArray = nullptr;
    Il2CppClass* g_typeofArrayBuffer = nullptr;
    Il2CppClass* g_typeofIList = nullptr;
    Il2CppClass* g_typeofIDictionary = nullptr;

    static const Il2CppClass* CSharpTypeToTypeId(Il2CppObject* type)
    {
        if (type && Class::IsAssignableFrom(il2cpp_defaults.systemtype_class, type->klass))
        {
            return il2cpp_codegen_class_from_type(((Il2CppReflectionType*)type)->type);
        }
        return nullptr;
    }

    Il2CppReflectionType* TypeIdToType(Il2CppClass* klass)
    {
        if (!klass)
            return nullptr;
        return Reflection::GetTypeObject(Class::GetType(klass));
    }

    static void* ObjectAllocate(Il2CppClass* klass)
    {
        if (Class::IsValuetype(klass))
        {
            auto size = klass->native_size > 0 ? klass->native_size : (klass->instance_size - sizeof(Il2CppObject));
            auto buff = (void*)(new uint8_t[size]);
            memset(buff, 0, size);
            return buff;
        }
        else
        {
            auto obj = il2cpp::vm::Object::New(klass);
            return obj;
        }
    }

    static void ValueTypeFree(void* ptr)
    {
        delete[](uint8_t*) ptr;
    }

    static void PApiFree(struct pesapi_ffi* api, void* ptr, void* class_data, void* env_private)
    {
        ValueTypeFree(ptr);    // TODO: class_data->IsValueType
    }

    static MethodInfoHelper<void(const void* typeId, bool includeNonPublic)> g_RegisterNoThrowHelper;

    static bool ClassNotFoundCallback(const void* typeId)
    {
        g_RegisterNoThrowHelper.Call(typeId, false);
        return true;
    }

    static void SetRegisterNoThrow(Il2CppReflectionMethod* method)
    {
        g_RegisterNoThrowHelper = MethodInfoHelper<void(const void* typeId, bool includeNonPublic)>(method);
        pesapi_on_class_not_found(ClassNotFoundCallback);
    }

    Il2CppClass* GetReturnType(const MethodInfo* method)
    {
        if (kInvalidIl2CppMethodSlot != method->slot)
        {
            Class::Init(method->klass);
        }
        return Class::FromIl2CppType(Method::GetReturnType(method), false);
    }

    Il2CppClass* GetParameterType(const MethodInfo* method, int index)
    {
        if (kInvalidIl2CppMethodSlot != method->slot)
        {
            Class::Init(method->klass);
        }
        const Il2CppType* type = Method::GetParam(method, index);
        if (type)
        {
            return Class::FromIl2CppType(type, false);
        }
        else
        {
            return nullptr;
        }
    }

    static std::map<const MethodInfo*, const MethodInfo*> WrapFuncPtrToMethodInfo;
    //static std::recursive_mutex WrapFuncPtrToMethodInfoMutex;

    Il2CppDelegate* FunctionPointerToDelegate(Il2CppMethodPointer functionPtr, Il2CppClass* delegateType, Il2CppObject* target)
    {
        Il2CppObject* delegate = il2cpp::vm::Object::New(delegateType);
        const MethodInfo* invoke = il2cpp::vm::Runtime::GetDelegateInvoke(delegateType);

        const MethodInfo* method = NULL;
        {
            //std::lock_guard<std::recursive_mutex> lock(WrapFuncPtrToMethodInfoMutex);
            auto iter = WrapFuncPtrToMethodInfo.find(invoke);
            if (iter == WrapFuncPtrToMethodInfo.end())
            {
                MethodInfo* newMethod = (MethodInfo*)IL2CPP_CALLOC(1, sizeof(MethodInfo));
                newMethod->name = invoke->name;
                newMethod->klass = invoke->klass;
                newMethod->methodPointer = functionPtr;
                newMethod->invoker_method = invoke->invoker_method;
                newMethod->return_type = invoke->return_type;
                newMethod->parameters_count = invoke->parameters_count;
                newMethod->parameters = invoke->parameters;
                newMethod->slot = kInvalidIl2CppMethodSlot;
                WrapFuncPtrToMethodInfo.insert(std::make_pair(invoke, newMethod));
                method = newMethod;
            }
            else
            {
                method = iter->second;
            }
        }
        Il2CppDelegate* il2cppDelegate = (Il2CppDelegate*)delegate;
        Type::ConstructClosedDelegate(il2cppDelegate, target, functionPtr, method);
        return il2cppDelegate;
    }

    static void* DelegateAllocate(Il2CppClass* klass, Il2CppMethodPointer functionPtr, PObjectRefInfo** outTargetData)
    {
        Il2CppClass* delegateInfoClass = g_typeofPersistentObjectInfo;
        if (!delegateInfoClass)
            return nullptr;

        auto target = il2cpp::vm::Object::New(delegateInfoClass);

        Il2CppDelegate* delegate = FunctionPointerToDelegate(functionPtr, klass, target);

        if (MethodIsStatic(delegate->method))
            return nullptr;

        const MethodInfo* ctor = il2cpp_class_get_method_from_name(delegateInfoClass, ".ctor", 0);
        typedef void (*NativeCtorPtr)(Il2CppObject* ___this, const MethodInfo* method);
        ((NativeCtorPtr)ctor->methodPointer)(target, ctor);

        IL2CPP_OBJECT_SETREF(delegate, invoke_impl_this, target);

        *outTargetData = GetPObjectRefInfo(target);

        delegate->method_ptr = functionPtr;

        return delegate;
    }

    static void SetGlobalType_ArrayBuffer(Il2CppReflectionType* type)
    {
        if (!type)
        {
            Exception::Raise(Exception::GetInvalidOperationException("type of ArrayBuffer is null"));
        }
        g_typeofArrayBuffer = il2cpp_codegen_class_from_type(type->type);
    }

    static void SetGlobalType_LuaTable(Il2CppReflectionType* type)
    {
        if (!type)
        {
            Exception::Raise(Exception::GetInvalidOperationException("type of LuaTable is null"));
        }
        g_typeofPersistentObjectInfo = il2cpp_codegen_class_from_type(type->type);
    }

    static void SetGlobalType_Array(Il2CppReflectionType* type)
    {
        if (!type)
        {
            Exception::Raise(Exception::GetInvalidOperationException("type of TypedValue is null"));
        }
        g_typeofArray = il2cpp_codegen_class_from_type(type->type);
    }

    static void SetGlobalType_IList(Il2CppReflectionType* type)
    {
	    if (!type)
	    {
            Exception::Raise(Exception::GetInvalidOperationException("type of IList is null"));
	    }
        g_typeofIList = il2cpp_codegen_class_from_type(type->type);
    }

    static void SetGlobalType_IDictionary(Il2CppReflectionType* type)
    {
	    if (!type)
	    {
            Exception::Raise(Exception::GetInvalidOperationException("type of IDictionary is null"));
	    }
        g_typeofIDictionary = il2cpp_codegen_class_from_type(type->type);
    }

static void MethodCallback(struct pesapi_ffi* apis, pesapi_callback_info info)
{
    CSharpMethodInfo* csharpMethodInfo = (CSharpMethodInfo*)apis->get_userdata(info);
    try
    {
        void* self = nullptr;
        pesapi_env env = apis->get_env(info);
        if (!(csharpMethodInfo->IsStatic))
        {
            pesapi_value luaThis = apis->get_holder(info);
            self = apis->get_native_object_ptr(env, luaThis);
            if (csharpMethodInfo->NeedBoxing)
            {
                auto ptrType = (Il2CppClass*)apis->get_native_object_typeid(env, luaThis);
                if (Class::IsValuetype(ptrType))
                {
                    self = Object::Box(ptrType, self);
                }
            }
        }
        WrapData** wrapDatas = csharpMethodInfo->OverloadDatas.data();
        bool checkArgument = *wrapDatas && *(wrapDatas + 1);
        while (*wrapDatas)
        {
            if ((*wrapDatas)->Wrap(apis, (*wrapDatas)->Method, (*wrapDatas)->MethodPointer, info, env, self, checkArgument, *wrapDatas))
            {
                return;
            }
            ++wrapDatas;
        }
        std::string err_info = "invalid arguments for " + csharpMethodInfo->Name;
        apis->throw_by_string(info, err_info.c_str());
    }
    catch (Il2CppExceptionWrapper& exception)
    {
        Il2CppClass* klass = il2cpp::vm::Object::GetClass(exception.ex);
        const MethodInfo* toStringMethod = il2cpp::vm::Class::GetMethodFromName(klass, "ToString", 0);

        Il2CppException* outException = NULL;
        Il2CppString* result = (Il2CppString*)il2cpp::vm::Runtime::Invoke(toStringMethod, exception.ex, NULL, &outException);
        if (outException != NULL)
        {
            std::string err_info = "unknow c# execption for " + csharpMethodInfo->Name;
            apis->throw_by_string(info, err_info.c_str());
        }
        else
        {
            const Il2CppChar* utf16 = il2cpp::utils::StringUtils::GetChars(result);
            std::string str = il2cpp::utils::StringUtils::Utf16ToUtf8(utf16);
            apis->throw_by_string(info, str.c_str());
        }
    }
}

static void GetterCallback(struct pesapi_ffi* apis, pesapi_callback_info info)
{
    FieldWrapData* wrapData = static_cast<FieldWrapData*>(apis->get_userdata(info));
    wrapData->Getter(apis, info, wrapData->FieldInfo, wrapData->Offset, wrapData->TypeInfo);
}

static void SetterCallback(struct pesapi_ffi* apis, pesapi_callback_info info)
{
    FieldWrapData* wrapData = static_cast<FieldWrapData*>(apis->get_userdata(info));
    wrapData->Setter(apis, info, wrapData->FieldInfo, wrapData->Offset, wrapData->TypeInfo);
}

void GetFieldValue(void* ptr, FieldInfo* field, size_t offset, void* value)
{
    void* src;

    if (!(field->type->attrs & FIELD_ATTRIBUTE_STATIC))
    {
        IL2CPP_ASSERT(ptr);
        src = (char*) ptr + offset;
        Field::SetValueRaw(field->type, value, src, true);
    }
    else
    {
        il2cpp::vm::Runtime::ClassInit(field->parent);
        Field::StaticGetValue(field, value);
    }
}

void* GetValueTypeFieldPtr(void* obj, FieldInfo* field, size_t offset)
{
    if (!(field->type->attrs * FIELD_ATTRIBUTE_STATIC))
    {
        IL2CPP_ASSERT(obj);
        return (char*) obj + offset;
    }
    else
    {
        Class::SetupFields(field->parent);

        void* threadStaticData = nullptr;
        if (field->offset == THREAD_STATIC_FIELD_OFFSET)
        {
            threadStaticData = Thread::GetThreadStaticDataForThread(
                field->parent->thread_static_fields_offset, il2cpp::vm::Thread::CurrentInternal());
            IL2CPP_ASSERT(NULL != threadStaticData);
            int threadStaticFieldOffset = MetadataCache::GetThreadLocalStaticOffsetForField(field);
            return ((char*) threadStaticData) + threadStaticFieldOffset;
        }
        else
        {
            return ((char*) field->parent->static_fields) + field->offset;
        }
    }
}

void SetFieldValue(void* ptr, FieldInfo* field, size_t offset, void* value)
{
    void* dest;

    if (!(field->type->attrs & FIELD_ATTRIBUTE_STATIC))
    {
        IL2CPP_ASSERT(ptr);
        dest = (char*) ptr + offset;
        Field::SetValueRaw(field->type, dest, value, true);
    }
    else
    {
        Field::StaticSetValue(field, value);
    }
}

void* GetDefaultValuePtr(const MethodInfo* method, uint32_t index)
{
    bool isExplicitySetNullDefaultValue = false;
    Il2CppObject* defaultValue = Parameter::GetDefaultParameterValueObject(method, index, &isExplicitySetNullDefaultValue);
    return (defaultValue && Class::IsValuetype(Class::FromIl2CppType(Method::GetParam(method, index), false)))
               ? Object::Unbox(defaultValue)
               : defaultValue;
}

typedef void (*LogCallbackFunc)(const char* value);

static LogCallbackFunc GLogCallback = nullptr;

void PLog(const char* Fmt, ...)
{
    static char SLogBuffer[1024];
    va_list list;
    va_start(list, Fmt);
    vsnprintf(SLogBuffer, sizeof(SLogBuffer), Fmt, list);
    va_end(list);

    if (GLogCallback)
    {
        GLogCallback(SLogBuffer);
    }
}

static void* CtorCallback(struct pesapi_ffi* apis, pesapi_callback_info info)
{
    LuaClassInfo* classInfo = reinterpret_cast<LuaClassInfo*>(apis->get_userdata(info));
    // or will crash in macos.
    if (!classInfo->IsValueType && *(classInfo->CtorWrapDatas) == nullptr)
    {
        apis->throw_by_string(info, "no vlaid constructor is found");
        return nullptr;
    }

    void* self = ObjectAllocate(classInfo->TypeId);

    auto isValueType = classInfo->CtorWrapDatas;

    try
    {
        WrapData** wrapDatas = classInfo->CtorWrapDatas;
        bool checkArgument = *wrapDatas && *(wrapDatas + 1);
        pesapi_env env = apis->get_env(info);
        while (*wrapDatas)
        {
            if ((*wrapDatas)
                    ->Wrap(apis, (*wrapDatas)->Method, (*wrapDatas)->MethodPointer, info, env, self, checkArgument, *wrapDatas))
            {
                return self;
            }
            ++wrapDatas;
        }

        if (isValueType && apis->get_args_len(info) == 0)
            return self;
        else
        {
            std::string err_info = "invalid arguments for constructor of " + classInfo->Name;
            apis->throw_by_string(info, err_info.c_str());
        }
    }
    catch (Il2CppExceptionWrapper& exception)
    {
        Il2CppClass* klass = il2cpp::vm::Object::GetClass(exception.ex);
        const MethodInfo* toStringMethod = il2cpp::vm::Class::GetMethodFromName(klass, "ToString", 0);

        Il2CppException* outException = nullptr;
        Il2CppString* result = (Il2CppString*) il2cpp::vm::Runtime::Invoke(toStringMethod, exception.ex, nullptr, &outException);
        if (outException != nullptr)
        {
            std::string err_info = "unknown c# exception for constructor of " + classInfo->Name;
            apis->throw_by_string(info, err_info.c_str());
        }
        else
        {
            const Il2CppChar* utf16 = il2cpp::utils::StringUtils::GetChars(result);
            std::string str = il2cpp::utils::StringUtils::Utf16ToUtf8(utf16);
            apis->throw_by_string(info, str.c_str());
        }
    }

    if (isValueType)
    {
        ValueTypeFree(self);
    }

    return nullptr;
}
//std::unordered_set<pesapi_value_ref> debug;
static void SetPObjectRefInfoValue(struct pesapi_ffi* apis, pesapi_env env, PObjectRefInfo* objectInfo, pesapi_value_ref value_ref)
{
    
    
    objectInfo->Apis = apis;
    objectInfo->ValueRef = value_ref;
    objectInfo->EnvPrivate = (void*) apis->get_env_private(env);
}

static int GetPObjectRefInfoValue(struct pesapi_ffi* apis, pesapi_env env, const PObjectRefInfo* objectInfo)
{
    return apis->get_value_from_ref(env, objectInfo->ValueRef);
}

    // out_object luaTable
static XLUA_Il2CppGCHandle* FindOrCreateHandleStoreOfValue(struct pesapi_ffi* apis, pesapi_env env, int value, pesapi_value_ref* out_value_ref, Il2CppObject** out_object)
{
    void* out_ptr;
    if (!apis->get_private(env, value, &out_ptr))
    {
        *out_value_ref = nullptr;
        return nullptr;    // not support, not a object?
    }

    pesapi_value_ref value_ref = static_cast<pesapi_value_ref>(out_ptr);
    XLUA_Il2CppGCHandle* res = nullptr;
    if (value_ref)
    {
        res = reinterpret_cast<XLUA_Il2CppGCHandle*>(apis->get_ref_internal_fields(value_ref));
        if (!res)
        {
            PLog("invalid internal_fields ptr:%p", res);
            apis->release_value_ref(value_ref);
            res = nullptr;
            value_ref = nullptr;
        }
    }

    if (!res)
    {
        value_ref = apis->create_value_ref(env, value);

        res = reinterpret_cast<XLUA_Il2CppGCHandle*>(apis->get_ref_internal_fields(value_ref));
        *out_object = nullptr;
    }
    else
    {
#ifdef UNITY_2023_2_OR_NEWER
        * out_object = il2cpp::gc::GCHandle::GetTarget(reinterpret_cast<Il2CppGCHandle>(*res));
#else
        * out_object = il2cpp::gc::GCHandle::GetTarget(*res);
#endif
        
        if (*out_object == nullptr)
        {
            apis->duplicate_value_ref(value_ref);
        }
        // assert(*out_object != nullptr);
        // PLog("found existed luaobject:%p", *out_object);
    }

    *out_value_ref = value_ref;
    return res;
}

static Il2CppObject* FunctionToDelegate(struct pesapi_ffi* apis, pesapi_env env, int luaval, LuaClassInfoHeader* classInfo)
{
    pesapi_value_ref value_ref;
    Il2CppObject* ret = nullptr;
    XLUA_Il2CppGCHandle* handle_store = FindOrCreateHandleStoreOfValue(apis, env, luaval, &value_ref, &ret);
    if (!handle_store)
        return nullptr;

    if (ret == nullptr)
    {
        // auto iter = debug.find(value_ref);
        // assert(iter == debug.end());
        // debug.insert(value_ref);
        PObjectRefInfo* delegateInfo;
        ret = (Il2CppObject*) DelegateAllocate(classInfo->TypeId, classInfo->DelegateBridge, &delegateInfo);
        auto targetHandle = il2cpp::gc::GCHandle::GetTargetHandle(ret, 0, il2cpp::gc::HANDLE_WEAK);
        il2cpp::vm::Exception::RaiseIfError(targetHandle.GetError());
#ifdef UNITY_2023_2_OR_NEWER
        * handle_store = reinterpret_cast<XLUA_Il2CppGCHandle>(targetHandle.Get());
#else
        * handle_store = targetHandle.Get();
#endif
        SetPObjectRefInfoValue(apis, env, delegateInfo, value_ref);
    }
    return ret;
}

static void* DeleagteCtorCallback(struct pesapi_ffi* apis, pesapi_callback_info info)
{
    pesapi_env env = apis->get_env(info);
    int luaval = apis->get_arg(info, 0);
    if (!apis->is_function(env, luaval))
    {
        apis->throw_by_string(info, "except a function");
        return nullptr;
    }
    LuaClassInfoHeader* classInfo = reinterpret_cast<LuaClassInfoHeader*>(apis->get_userdata(info));

    return FunctionToDelegate(apis, env, luaval, classInfo);
}

bool IsDelegate(Il2CppClass* klass)
{
    return Class::IsAssignableFrom(il2cpp_defaults.delegate_class, klass) && klass != il2cpp_defaults.delegate_class &&
           klass != il2cpp_defaults.multicastdelegate_class;
}

static FieldInfo* ArrayBufferLengthField = nullptr;
int TryTranslateBuiltin(struct pesapi_ffi* apis, pesapi_env env, Il2CppObject* obj)
{
    if (obj)
    {
        if (obj->klass == g_typeofPersistentObjectInfo)
        {
            PObjectRefInfo* objectInfo = GetPObjectRefInfo(obj);
            return GetPObjectRefInfoValue(apis, env, objectInfo);
        }
        if (obj->klass == g_typeofArrayBuffer)
        {
            Il2CppArray* buffer = reinterpret_cast<Il2CppArray*>(obj);

            return apis->create_binary(env, Array::GetFirstElementAddress(buffer), (size_t)buffer->max_length);
        }
    }
    return 0;
}

static int TryTranslatePrimitiveWithClass(
    struct pesapi_ffi* apis, pesapi_env env, Il2CppObject* obj, Il2CppClass* klass = nullptr)
{
    if (obj)
    {
        const Il2CppType* type = Class::GetType(klass ? klass : obj->klass);
        int t = type->type;
        if (t == IL2CPP_TYPE_STRING)
        {
            const Il2CppChar* utf16 = il2cpp::utils::StringUtils::GetChars((Il2CppString*) obj);
            std::string str = il2cpp::utils::StringUtils::Utf16ToUtf8(utf16);
            return apis->create_string_utf8(env, str.c_str(), str.size());
        }
        void* ptr = Object::Unbox(obj);
        switch (t)
        {
            case IL2CPP_TYPE_I1:
            {
                return apis->create_int32(env, (int32_t) (*((uint8_t*) ptr)));
            }
            case IL2CPP_TYPE_BOOLEAN:
            {
                return apis->create_boolean(env, (bool) (*((uint8_t*) ptr)));
            }
            case IL2CPP_TYPE_U1:
            {
                return apis->create_uint32(env, (uint32_t) (*((uint32_t*) ptr)));
            }
            case IL2CPP_TYPE_I2:
            {
                return apis->create_int32(env, (int32_t) (*((uint16_t*) ptr)));
            }
            case IL2CPP_TYPE_U2:
            {
                return apis->create_uint32(env, (uint32_t) (*((uint32_t*) ptr)));
            }
            case IL2CPP_TYPE_CHAR:
            {
                return apis->create_int32(env, (int32_t) (*((Il2CppChar*) ptr)));
            }
#if IL2CPP_SIZEOF_VOID_P == 4
            case IL2CPP_TYPE_I:
#endif
            case IL2CPP_TYPE_I4:
            {
                return apis->create_int32(env, (int32_t) (*((int32_t*) ptr)));
            }
#if IL2CPP_SIZEOF_VOID_P == 4
            case IL2CPP_TYPE_U:
#endif
            case IL2CPP_TYPE_U4:
            {
                return apis->create_uint32(env, (uint32_t) (*((uint32_t*) ptr)));
            }
#if IL2CPP_SIZEOF_VOID_P == 8
            case IL2CPP_TYPE_I:
#endif
            case IL2CPP_TYPE_I8:
            {
                return apis->create_int64(env, *((int64_t*) ptr));
            }
#if IL2CPP_SIZEOF_VOID_P == 8
            case IL2CPP_TYPE_U:
#endif
            case IL2CPP_TYPE_U8:
            {
                return apis->create_uint64(env, *((uint64_t*) ptr));
            }
            case IL2CPP_TYPE_R4:
            {
                return apis->create_double(env, (double) (*((float*) ptr)));
            }
            case IL2CPP_TYPE_R8:
            {
                return apis->create_double(env, *((double*) ptr));
            }

            default:
                return 0;
        }
    }

    return 0;
}

int TranslateValueType(struct pesapi_ffi* apis, pesapi_env env, Il2CppClass* targetClass, Il2CppObject* obj)
{
    auto len = targetClass->native_size;
    if (len < 0)
    {
        len = targetClass->instance_size - sizeof(Il2CppObject);
    }

    auto buff = new uint8_t[len];
    memcpy(buff, Object::Unbox(obj), len);
    return apis->native_object_to_value(env, targetClass, buff, true);
}

int TryTranslateValueType(struct pesapi_ffi* apis, pesapi_env env, Il2CppObject* obj)
{
    if (obj && obj->klass)
    {
        auto objClass = obj->klass;
        if (Class::IsValuetype(objClass))
        {
            return TranslateValueType(apis, env, objClass, obj);
        }
    }
    return 0;
}

union PrimitiveValueType
{
    int8_t i1;
    uint8_t u1;
    int16_t i2;
    uint16_t u2;
    int32_t i4;
    uint32_t u4;
    int64_t i8;
    uint64_t u8;
    Il2CppChar c;
    float r4;
    double r8;
};

    Il2CppObject* LuaTableToCSArray(struct pesapi_ffi* apis, Il2CppClass* klass, pesapi_env env, int luaval)
    {
        uint32_t len = apis->get_array_length(env, luaval);
        Il2CppArray* array = Array::NewSpecific(klass, len);
        Il2CppClass* elementClass = Class::GetElementClass(klass);
        const Il2CppType* type = Class::GetType(elementClass);
        int t = type->type;
        int elementSize = il2cpp::vm::Class::GetArrayElementSize(elementClass);
        for (int i = 0; i < len; i++)
        {
            void* elementAddress = il2cpp_array_addr_with_size(array, elementSize, i);
            apis->get_array_element(env, i, luaval);
            switch (t)
            {
            case IL2CPP_TYPE_I1:
	            {
					int8_t v = static_cast<int8_t>(apis->get_value_int32(env, -1));
            		memcpy(elementAddress, &v, elementSize);
	            }
                break;
#if IL2CPP_SIZEOF_VOID_P == 4
            case IL2CPP_TYPE_I:
#endif
            case IL2CPP_TYPE_I4:
	            {
					int32_t v = apis->get_value_int32(env, -1);
                    memcpy(elementAddress, &v, elementSize);
	            }
                break;
#if IL2CPP_SIZEOF_VOID_P == 8
            case IL2CPP_TYPE_U:
#endif
            case IL2CPP_TYPE_U8:
	            {
					uint64_t v = apis->get_value_uint64(env, -1);
                    memcpy(elementAddress, &v, elementSize);
	            }
                break;
            case IL2CPP_TYPE_R4:
	            {
                float v = static_cast<float>(apis->get_value_double(env, -1));
                memcpy(elementAddress, &v, elementSize);
	            }
                break;
            case IL2CPP_TYPE_R8:
	            {
                double v = apis->get_value_double(env, -1);
                memcpy(elementAddress, &v, elementSize);
	            }
                break;
            case IL2CPP_TYPE_STRING:
	            {
	                size_t bufsize = 0;
	                auto str = apis->get_value_string_utf8(env, -1, nullptr, &bufsize);
	                if (str)
	                {
	                    Il2CppString* v = il2cpp::vm::String::NewWrapper(str);
	                    memcpy(elementAddress, &v, elementSize);
	                    Il2CppCodeGenWriteBarrier(&elementAddress, v);
	                }
	            }
                break;
            case IL2CPP_TYPE_CLASS:
	            {
                if (apis->is_function(env, -1))
                {
                    if (IsDelegate(elementClass))
                    {
                        LuaClassInfoHeader* luaClassInfo = (LuaClassInfoHeader*)pesapi_get_class_data(elementClass, true);
                        if (!luaClassInfo)
                        {
                            Exception::Raise(Exception::GetInvalidOperationException("call not load type of delegate"));
                        }
                        Il2CppObject* v = FunctionToDelegate(apis, env, -1, luaClassInfo);
                        memcpy(elementAddress, &v, elementSize);
                        Il2CppCodeGenWriteBarrier(&elementAddress, v);
                    }
                    break;
                }
                auto ptr = (Il2CppObject*)apis->get_native_object_ptr(env, -1);
                if (!ptr)
                {
                    if ((elementClass == g_typeofArrayBuffer) && apis->is_binary(env, -1))
                    {
                        void* data;
                        size_t length;
                        data = apis->get_value_binary(env, -1, &length);
                        Il2CppArray* clone = (Il2CppArray*)il2cpp::vm::Array::NewFull(elementClass, &length, NULL);
                        const uint32_t elem_size = il2cpp::vm::Array::GetElementSize(elementClass);
                        memcpy(il2cpp::vm::Array::GetFirstElementAddress(clone), data, elem_size * length);
                        memcpy(elementAddress, &clone, elementSize);
                        Il2CppCodeGenWriteBarrier(&elementAddress, clone);
                        break;
                    }
                    if (apis->is_object(env, -1))
                    {
                        if (elementClass == g_typeofPersistentObjectInfo || elementClass == il2cpp_defaults.object_class)
                        {
                            Il2CppClass* persistentObjectInfoClass = g_typeofPersistentObjectInfo;

                            pesapi_value_ref value_ref;
                            Il2CppObject* ret = nullptr;
                            XLUA_Il2CppGCHandle* handle_store = FindOrCreateHandleStoreOfValue(apis, env, -1, &value_ref, &ret);
                            if (!handle_store)
                                break;

                            if (ret == nullptr)
                            {
                                ret = il2cpp::vm::Object::New(persistentObjectInfoClass);

                                const MethodInfo* ctor = il2cpp_class_get_method_from_name(persistentObjectInfoClass, ".ctor", 0);
                                typedef void (*NativeCtorPtr)(Il2CppObject* ___this, const MethodInfo* method);
                                ((NativeCtorPtr)ctor->methodPointer)(ret, ctor);

                                PObjectRefInfo* objectInfo = GetPObjectRefInfo(ret);
                                auto targetHandle = il2cpp::gc::GCHandle::GetTargetHandle(ret, 0, il2cpp::gc::HANDLE_WEAK);
                                il2cpp::vm::Exception::RaiseIfError(targetHandle.GetError());
                                *handle_store = reinterpret_cast<XLUA_Il2CppGCHandle>(targetHandle.Get());
                                SetPObjectRefInfoValue(apis, env, objectInfo, value_ref);
                            }
                            memcpy(elementAddress, &ret, elementSize);
                            Il2CppCodeGenWriteBarrier(&elementAddress, ret);
                        }
                    }
                    break;
                }
                auto objClass = (Il2CppClass*)apis->get_native_object_typeid(env, -1);
                if (Class::IsAssignableFrom(elementClass, objClass))
                {
                    Il2CppObject* v = Class::IsValuetype(objClass) ? Object::Box(objClass, ptr) : (Il2CppObject*)ptr;
                    memcpy(elementAddress, &v, elementSize);
                    Il2CppCodeGenWriteBarrier(&elementAddress, v);
                }
                
	            }
                break;
            }
            apis->close_scope_placement(env, 1);
        }
        return array;
    }

    Il2CppObject* LuaTableToIList(struct pesapi_ffi* apis, Il2CppClass* klass, pesapi_env env, int luaval)
    {
        il2cpp::vm::Class::Init(klass);
        Il2CppObject* list = il2cpp_object_new(klass);
        return list;
    }

    Il2CppObject* LuaTableToIDictionary(struct pesapi_ffi* apis, Il2CppClass* klass, pesapi_env env, int luaval)
    {
        il2cpp::vm::Class::Init(klass);
        Il2CppObject* dictionary = il2cpp_object_new(klass);

        apis->create_null(env);
        Il2CppReflectionType* type = TypeIdToType(klass);
        Il2CppArray* array = il2cpp::vm::Type::GetGenericArgumentsInternal(type, true);
        Il2CppReflectionType* keyType = il2cpp_array_get(array, Il2CppReflectionType*, 0);
        int keyEnum = keyType->type->type;
        Il2CppReflectionType* valueType = il2cpp_array_get(array, Il2CppReflectionType*, 1);
        int valueEnum = valueType->type->type;
        while (apis->next(env, luaval) != 0)
        {
	        switch (keyEnum)
	        {
#if IL2CPP_SIZEOF_VOID_P == 4
	        case IL2CPP_TYPE_U:
#endif
	        case IL2CPP_TYPE_U4:
		        {
			        
		        }
                break;
	        }
	        switch (valueEnum)
	        {
		        
	        }
        }
        return dictionary;
    }


Il2CppObject* LuaValueToCSRef(struct pesapi_ffi* apis, Il2CppClass* klass, pesapi_env env, int luaval)
{
    if (klass == il2cpp_defaults.void_class)
        return nullptr;

    if (!klass)
    {
        klass = il2cpp_defaults.object_class;
    }

    const Il2CppType* type = Class::GetType(klass);
    int t = type->type;

    PrimitiveValueType data;

    void* toBox = &data;

    Il2CppObject* ret = nullptr;

handle_underlying:
    switch (t)
    {
        case IL2CPP_TYPE_I1:
        {
            data.i1 = (int8_t) apis->get_value_int32(env, luaval);
            break;
        }
        case IL2CPP_TYPE_BOOLEAN:
        {
            data.u1 = (uint8_t) apis->get_value_bool(env, luaval);
            break;
        }
        case IL2CPP_TYPE_U1:
        {
            data.u1 = (uint8_t) apis->get_value_uint32(env, luaval);
            break;
        }
        case IL2CPP_TYPE_I2:
        {
            data.i2 = (int16_t) apis->get_value_int32(env, luaval);
            break;
        }
        case IL2CPP_TYPE_U2:
        {
            data.u2 = (uint16_t) apis->get_value_uint32(env, luaval);
            break;
        }
        case IL2CPP_TYPE_CHAR:
        {
            data.c = (Il2CppChar) apis->get_value_uint32(env, luaval);
            break;
        }
#if IL2CPP_SIZEOF_VOID_P == 4
        case IL2CPP_TYPE_I:
#endif
        case IL2CPP_TYPE_I4:
        {
            data.i4 = (int32_t) apis->get_value_int32(env, luaval);
            break;
        }
#if IL2CPP_SIZEOF_VOID_P == 4
        case IL2CPP_TYPE_U:
#endif
        case IL2CPP_TYPE_U4:
        {
            data.u4 = (uint32_t) apis->get_value_uint32(env, luaval);
            break;
        }
#if IL2CPP_SIZEOF_VOID_P == 8
        case IL2CPP_TYPE_I:
#endif
        case IL2CPP_TYPE_I8:
        {
            data.i8 = apis->get_value_int64(env, luaval);
            break;
        }
#if IL2CPP_SIZEOF_VOID_P == 8
        case IL2CPP_TYPE_U:
#endif
        case IL2CPP_TYPE_U8:
        {
            data.u8 = apis->get_value_uint64(env, luaval);
            break;
        }
        case IL2CPP_TYPE_R4:
        {
            data.r4 = (float) apis->get_value_double(env, luaval);
            break;
        }
        case IL2CPP_TYPE_R8:
        {
            data.r8 = apis->get_value_double(env, luaval);
            break;
        }
        case IL2CPP_TYPE_STRING:
        {
            size_t bufsize = 0;
            auto str = apis->get_value_string_utf8(env, luaval, nullptr, &bufsize);
            if (str)
            {
                return (Il2CppObject*) il2cpp::vm::String::NewWrapper(str);
            }
            std::vector<char> buff;
            buff.resize(bufsize + 1);
            str = apis->get_value_string_utf8(env, luaval, buff.data(), &bufsize);
            if (str)
            {
                buff[bufsize] = '\0';
                return (Il2CppObject*) il2cpp::vm::String::NewWrapper(str);
            }
            return nullptr;
        }
        case IL2CPP_TYPE_ARRAY:
        case IL2CPP_TYPE_SZARRAY:
        case IL2CPP_TYPE_CLASS:
        case IL2CPP_TYPE_OBJECT:
        case IL2CPP_TYPE_FNPTR:
        case IL2CPP_TYPE_PTR:
        {
            if (apis->is_function(env, luaval))
            {
                if (IsDelegate(klass))
                {
                    LuaClassInfoHeader* luaClassInfo = (LuaClassInfoHeader*) pesapi_get_class_data(klass, true);
                    if (!luaClassInfo)
                    {
                        Exception::Raise(Exception::GetInvalidOperationException("call not load type of delegate"));
                    }
                    return FunctionToDelegate(apis, env, luaval, luaClassInfo);
                }
                return nullptr;
            }
            auto ptr = (Il2CppObject*) apis->get_native_object_ptr(env, luaval);
            if (!ptr)
            {
                if ((klass == g_typeofArrayBuffer) && apis->is_binary(env, luaval))
                {
                    void* data;
                    size_t length;
                    data = apis->get_value_binary(env, luaval, &length);
                    Il2CppArray* clone = (Il2CppArray*)il2cpp::vm::Array::NewFull(klass, &length, NULL);
                    const uint32_t elem_size = il2cpp::vm::Array::GetElementSize(klass);
                    memcpy(il2cpp::vm::Array::GetFirstElementAddress(clone), data, elem_size * length);
                    return clone;
                }
                if (apis->is_object(env, luaval))
                {
                    if (klass == g_typeofPersistentObjectInfo || klass == il2cpp_defaults.object_class)
                    {
                        Il2CppClass* persistentObjectInfoClass = g_typeofPersistentObjectInfo;

                        pesapi_value_ref value_ref;
                        Il2CppObject* ret = nullptr;
                        XLUA_Il2CppGCHandle* handle_store = FindOrCreateHandleStoreOfValue(apis, env, luaval, &value_ref, &ret);
                        if (!handle_store)
                            return nullptr;

                        if (ret == nullptr)
                        {
                            ret = il2cpp::vm::Object::New(persistentObjectInfoClass);

                            const MethodInfo* ctor = il2cpp_class_get_method_from_name(persistentObjectInfoClass, ".ctor", 0);
                            typedef void (*NativeCtorPtr)(Il2CppObject* ___this, const MethodInfo* method);
                            ((NativeCtorPtr)ctor->methodPointer)(ret, ctor);

                            PObjectRefInfo* objectInfo = GetPObjectRefInfo(ret);
                            auto targetHandle = il2cpp::gc::GCHandle::GetTargetHandle(ret, 0, il2cpp::gc::HANDLE_WEAK);
                            il2cpp::vm::Exception::RaiseIfError(targetHandle.GetError());
#ifdef UNITY_2023_2_OR_NEWER
                            * handle_store = reinterpret_cast<XLUA_Il2CppGCHandle>(targetHandle.Get());
#else
                            * handle_store = targetHandle.Get();
#endif
                            SetPObjectRefInfoValue(apis, env, objectInfo, value_ref);
                        }
                        return ret;
                    }
                    if (t == IL2CPP_TYPE_SZARRAY)
                    {
                        return LuaTableToCSArray(apis, klass, env, luaval);
                    }
                    if (Class::IsAssignableFrom(g_typeofIList, klass))
                    {
                        return LuaTableToIList(apis, klass, env, luaval);
                    }
                    if (Class::IsAssignableFrom(g_typeofIDictionary, klass))
                    {
                        return LuaTableToIDictionary(apis, klass, env, luaval);
                    }
                }
                if (klass == il2cpp_defaults.object_class)
                {
                    if (apis->is_string(env, luaval))
                    {
                        t = IL2CPP_TYPE_STRING;
                        klass = il2cpp_defaults.string_class;
                    }
                    else if (apis->is_int32(env, luaval))
                    {
                        t = IL2CPP_TYPE_I4;
                        klass = il2cpp_defaults.int32_class;
                    }
                    else if (apis->is_uint32(env, luaval))
                    {
                        t = IL2CPP_TYPE_U4;
                        klass = il2cpp_defaults.uint32_class;
                    }
                    else if (apis->is_int64(env, luaval))
                    {
                        t = IL2CPP_TYPE_I8;
                        klass = il2cpp_defaults.int64_class;
                    }
                    else if (apis->is_uint64(env, luaval))
                    {
                        t = IL2CPP_TYPE_U8;
                        klass = il2cpp_defaults.uint64_class;
                    }
                    else if (apis->is_double(env, luaval))
                    {
                        t = IL2CPP_TYPE_R8;
                        klass = il2cpp_defaults.double_class;
                    }
                    else if (apis->is_boolean(env, luaval))
                    {
                        t = IL2CPP_TYPE_BOOLEAN;
                        klass = il2cpp_defaults.boolean_class;
                    }
                    else
                    {
                        goto return_nothing;
                    }
                    goto handle_underlying;
                }
                
            return_nothing:
                return nullptr;
            }
            auto objClass = (Il2CppClass*) apis->get_native_object_typeid(env, luaval);
            if (Class::IsAssignableFrom(klass, objClass))
            {
                return Class::IsValuetype(objClass) ? Object::Box(objClass, ptr) : (Il2CppObject*) ptr;
            }
            return nullptr;
        }
        case IL2CPP_TYPE_VALUETYPE:
        {
            // not that t and type->type can be different
            if (type->type == IL2CPP_TYPE_VALUETYPE && Type::IsEnum(type))
            {
                t = Class::GetEnumBaseType(Type::GetClass(type))->type;
                goto handle_underlying;
            }
            else
            {
                auto objClass = (Il2CppClass*) apis->get_native_object_typeid(env, luaval);
                if (!Class::IsAssignableFrom(klass, objClass))
                {
                    return nullptr;
                }
                toBox = apis->get_native_object_ptr(env, luaval);
                if (!toBox)
                {
                    std::string message = "expect ValueType: ";
                    message += klass->name;
                    message += ", by got null";
                    Exception::Raise(Exception::GetInvalidOperationException(message.c_str()));
                    return nullptr;
                }
            }
            break;
        }
        case IL2CPP_TYPE_GENERICINST:
            t = GenericClass::GetTypeDefinition(type->data.generic_class)->byval_arg.type;
            goto handle_underlying;
        default:
            IL2CPP_ASSERT(0);
    }
    return Object::Box(klass, toBox);
}

int CSRefToLuaValue(struct pesapi_ffi* apis, pesapi_env env, Il2CppClass* targetClass, Il2CppObject* obj)
{
    if (targetClass == il2cpp_defaults.void_class)
        return apis->create_undefined(env);
    if (!obj)
        return apis->create_null(env);
    if (!targetClass)
    {
        targetClass = il2cpp_defaults.object_class;
    }

    if (Class::IsEnum(targetClass))
    {
        targetClass = Class::GetElementClass(targetClass);
    }

    int luaVal =
        TryTranslatePrimitiveWithClass(apis, env, obj, targetClass != il2cpp_defaults.object_class ? targetClass : nullptr);

    if (luaVal)
    {
        return luaVal;
    }

    if (Class::IsValuetype(targetClass))
    {
        luaVal = TranslateValueType(apis, env, targetClass, obj);
        if (luaVal)
        {
            return luaVal;
        }
    }

    luaVal = TryTranslateValueType(apis, env, obj);
    if (luaVal)
    {
        return luaVal;
    }

    luaVal = TryTranslateBuiltin(apis, env, obj);

    if (luaVal)
    {
        return luaVal;
    }

    auto objClass = obj && obj->klass ? obj->klass : targetClass;
    return apis->native_object_to_value(env, objClass, obj, false);
}

static bool GetValueTypeFromLua(struct pesapi_ffi* apis, pesapi_env env, int luaValue, Il2CppClass* klass, void* storage)
{
    bool hasValue = false;
    uint32_t valueSize = klass->instance_size - sizeof(Il2CppObject);
    if (!luaValue)
        return false;
    void* ptr;
    if (apis->is_object(env, luaValue) && (ptr = apis->get_native_object_ptr(env, luaValue)))
    {
        auto objClass = (Il2CppClass*) apis->get_native_object_typeid(env, luaValue);
        if (Class::IsAssignableFrom(klass, objClass))
        {
            hasValue = true;
            memcpy(storage, ptr, valueSize);
        }
    }
    else
    {
        const Il2CppType* type = Class::GetType(klass);
        PrimitiveValueType data;
        data.i8 = 0;
        int t = type->type;
    handle_underlying:
        switch (t)
        {
            case IL2CPP_TYPE_I1:
            {
                if (apis->is_int32(env, luaValue))
                {
                    data.i1 = (int8_t) apis->get_value_int32(env, luaValue);
                    hasValue = true;
                }
                break;
            }
            case IL2CPP_TYPE_BOOLEAN:
            {
                if (apis->is_boolean(env, luaValue))
                {
                    data.u1 = (uint8_t) apis->get_value_uint32(env, luaValue);
                    hasValue = true;
                }
                break;
            }
            case IL2CPP_TYPE_U1:
            {
                if (apis->is_uint32(env, luaValue))
                {
                    data.u1 = (uint8_t) apis->get_value_uint32(env, luaValue);
                    hasValue = true;
                }
                break;
            }
            case IL2CPP_TYPE_I2:
            {
                if (apis->is_int32(env, luaValue))
                {
                    data.i2 = (int16_t) apis->get_value_int32(env, luaValue);
                    hasValue = true;
                }
                break;
            }
            case IL2CPP_TYPE_U2:
            {
                if (apis->is_uint32(env, luaValue))
                {
                    data.u2 = (uint16_t) apis->get_value_uint32(env, luaValue);
                    hasValue = true;
                }
                break;
            }
            case IL2CPP_TYPE_CHAR:
            {
                if (apis->is_uint32(env, luaValue))
                {
                    data.c = (Il2CppChar) apis->get_value_uint32(env, luaValue);
                    hasValue = true;
                }
                break;
            }
#if IL2CPP_SIZEOF_VOID_P == 4
            case IL2CPP_TYPE_I:
#endif
            case IL2CPP_TYPE_I4:
            {
                if (apis->is_int32(env, luaValue))
                {
                    data.i4 = apis->get_value_int32(env, luaValue);
                    hasValue = true;
                }
                break;
            }
#if IL2CPP_SIZEOF_VOID_P == 4
            case IL2CPP_TYPE_U:
#endif
            case IL2CPP_TYPE_U4:
            {
                if (apis->is_uint32(env, luaValue))
                {
                    data.u4 = apis->get_value_uint32(env, luaValue);
                    hasValue = true;
                }
                break;
            }
#if IL2CPP_SIZEOF_VOID_P == 8
            case IL2CPP_TYPE_I:
#endif
            case IL2CPP_TYPE_I8:
            {
                if (apis->is_int64(env, luaValue))
                {
                    data.i8 = apis->get_value_int64(env, luaValue);
                    hasValue = true;
                }
            }
#if IL2CPP_SIZEOF_VOID_P == 8
            case IL2CPP_TYPE_U:
#endif
            case IL2CPP_TYPE_U8:
            {
                if (apis->is_uint64(env, luaValue))
                {
                    data.u8 = apis->get_value_uint64(env, luaValue);
                    hasValue = true;
                }
                break;
            }
            case IL2CPP_TYPE_R4:
            {
                if (apis->is_double(env, luaValue))
                {
                    data.r4 = (float) apis->get_value_double(env, luaValue);
                    hasValue = true;
                }
                break;
            }
            case IL2CPP_TYPE_R8:
            {
                if (apis->is_double(env, luaValue))
                {
                    data.r8 = apis->get_value_double(env, luaValue);
                    hasValue = true;
                }
                break;
            }
            case IL2CPP_TYPE_VALUETYPE:
                if (type->type == IL2CPP_TYPE_VALUETYPE && Type::IsEnum(type))
                {
                    t = Class::GetEnumBaseType(Type::GetClass(type))->type;
                    goto handle_underlying;
                }
        }

        if (hasValue)
        {
            memcpy(storage, &data, valueSize);
        }
    }
    return hasValue;
}

static int LuaObjectUnRef(struct pesapi_ffi* apis, pesapi_env env, int luaValue)
{
    return apis->is_object(env, luaValue) ? apis->get_property_uint64(env, luaValue, 0) : 0;
}

static void LuaObjectSetRef(struct pesapi_ffi* apis, pesapi_env env, int outer, int val)
{
    if (outer && val && apis->is_object(env, outer))
    {
        apis->set_property_uint64(env, outer, 0, val);
    }
}

static bool ReflectionWrapper(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer,
    pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData)
{
    int lua_args_len = apis->get_args_len(info);
    bool hasParamArray = wrapData->HasParamArray;
    bool isExtensionMethod = wrapData->IsExtensionMethod;
    auto csArgStart = isExtensionMethod ? 1 : 0;

    if (checkLuaArgument || wrapData->OptionalNum > 0)
    {
        if (!hasParamArray && wrapData->OptionalNum == 0)
        {
            if (lua_args_len != method->parameters_count - csArgStart)
            {
                return false;
            }
        }
        else
        {
            auto requireNum = method->parameters_count - csArgStart - wrapData->OptionalNum - (hasParamArray ? 1 : 0);
            if (lua_args_len < requireNum)
            {
                return false;
            }
        }
        for (int i = csArgStart; i < method->parameters_count; ++i)
        {
            auto parameterType = Method::GetParam(method, i);
            bool passedByReference = parameterType->byref;
            bool hasDefault = parameterType->attrs && PARAM_ATTRIBUTE_HAS_DEFAULT;
            bool isLastArgument = i == (method->parameters_count - 1);
            Il2CppClass* parameterKlass = Class::FromIl2CppType(parameterType);
            Class::Init(parameterKlass);
            int luaValue = apis->get_arg(info, i - csArgStart);

            if ((hasDefault || (isLastArgument && hasParamArray)) && apis->is_undefined(env, luaValue))
            {
                continue;
            }
            if (passedByReference)
            {
                if (apis->is_object(env, luaValue))
                {
                    continue;
                }
                else
                {
                    return false;
                }
            }
            int t;
            if (isLastArgument && hasParamArray)
                t = (int) parameterKlass->element_class->byval_arg.type;
            else
                t = parameterType->type;
        handle_underlying:
            switch (t)
            {
                case IL2CPP_TYPE_I1:
                case IL2CPP_TYPE_I2:
#if IL2CPP_SIZEOF_VOID_P == 4
                case IL2CPP_TYPE_I :
#endif
                    case IL2CPP_TYPE_I4:
                {
                    if (!apis->is_int32(env, luaValue))
                    {
                        return false;
                    }
                    break;
                }
                case IL2CPP_TYPE_BOOLEAN:
                {
                    if (!apis->is_boolean(env, luaValue))
                    {
                        return false;
                    }
                    break;
                }
                case IL2CPP_TYPE_U1:
                case IL2CPP_TYPE_U2:
                case IL2CPP_TYPE_CHAR:
#if IL2CPP_SIZEOF_VOID_P == 4
                case IL2CPP_TYPE_U:
#endif
                case IL2CPP_TYPE_U4:
                {
                    if (!apis->is_uint32(env, luaValue))
                    {
                        return false;
                    }
                    break;
                }
#if IL2CPP_SIZEOF_VOID_P == 8
                case IL2CPP_TYPE_I:
#endif
                case IL2CPP_TYPE_I8:
                {
                    if (!apis->is_int64(env, luaValue))
                    {
                        return false;
                    }
                    break;
                }
#if IL2CPP_SIZEOF_VOID_P == 8
                case IL2CPP_TYPE_U:
#endif
                case IL2CPP_TYPE_U8:
                {
                    if (!apis->is_uint64(env, luaValue))
                    {
                        return false;
                    }
                    break;
                }
                case IL2CPP_TYPE_R4:
                case IL2CPP_TYPE_R8:
                {
                    if (!apis->is_double(env, luaValue))
                    {
                        return false;
                    }
                    break;
                }
                case IL2CPP_TYPE_STRING:
                {
                    if (!apis->is_string(env, luaValue))
                    {
                        return false;
                    }
                    break;
                }
                case IL2CPP_TYPE_SZARRAY:
                case IL2CPP_TYPE_CLASS:
                case IL2CPP_TYPE_OBJECT:
                case IL2CPP_TYPE_ARRAY:
                case IL2CPP_TYPE_FNPTR:
                case IL2CPP_TYPE_PTR:
                {
                    if (apis->is_function(env, luaValue) &&
                        (!Class::IsAssignableFrom(il2cpp_defaults.multicastdelegate_class, parameterKlass) ||
                            parameterKlass == il2cpp_defaults.multicastdelegate_class))
                    {
                        return false;
                    }
                    if (parameterKlass == il2cpp_defaults.object_class)
                    {
                        continue;
                    }
                    auto ptr = apis->get_native_object_ptr(env, luaValue);
                    if (ptr)
                    {
                        auto objClass = (Il2CppClass*) apis->get_native_object_typeid(env, luaValue);
                        if (!Class::IsAssignableFrom(parameterKlass, objClass))
                        {
                            return false;
                        }
                    }
                    // nullptr will match ref type
                    break;
                }
                case IL2CPP_TYPE_VALUETYPE:
                    if (parameterType->type == IL2CPP_TYPE_VALUETYPE && Type::IsEnum(parameterType))
                    {
                        t = Class::GetEnumBaseType(Type::GetClass(parameterType))->type;
                        goto handle_underlying;
                    }
                    else
                    {
                        auto objClass = (Il2CppClass*) apis->get_native_object_typeid(env, luaValue);
                        if (!objClass || !Class::IsAssignableFrom(parameterKlass, objClass))
                        {
                            return false;
                        }
                    }
                    break;
                case IL2CPP_TYPE_GENERICINST:
                    t = GenericClass::GetTypeDefinition(parameterType->data.generic_class)->byval_arg.type;
                    goto handle_underlying;
                default:
                    IL2CPP_ASSERT(0);
            }
        }
    }
    void** args = method->parameters_count > 0 ? (void**) alloca(sizeof(void*) * method->parameters_count) : nullptr;
    int luaThis = apis->get_holder(info);
    if (isExtensionMethod)
    {
        args[0] = apis->get_native_object_ptr(env, luaThis);
    }
    int returnCount = 0;
    for (int i = csArgStart; i < method->parameters_count; ++i)
    {
        auto parameterType = Method::GetParam(method, i);
        bool passedByReference = parameterType->byref;
        bool hasDefault = parameterType->attrs & PARAM_ATTRIBUTE_HAS_DEFAULT;
        bool isLastArgument = i == (method->parameters_count - i);
        Il2CppClass* parameterKlass = Class::FromIl2CppType(parameterType);
        Class::Init(parameterKlass);

        if (isLastArgument && hasParamArray)
        {
            int luaParamStart = i - csArgStart;
            auto elementType = Class::FromIl2CppType(&parameterKlass->element_class->byval_arg);
            auto arrayLen = lua_args_len - luaParamStart > 0 ? lua_args_len - luaParamStart : 0;
            auto array = Array::NewSpecific(parameterKlass, arrayLen);
            if (Class::IsValuetype(elementType))
            {
                auto valueSize = elementType->instance_size - sizeof(Il2CppObject);
                char* addr = Array::GetFirstElementAddress(array);
                for (int j = luaParamStart; j < lua_args_len; ++j)
                {
                    GetValueTypeFromLua(apis, env, apis->get_arg(info, j), elementType, addr + valueSize * (j - 1 + csArgStart));
                }
            }
            else
            {
                for (int j = luaParamStart; j < lua_args_len; j++)
                {
                    il2cpp_array_setref(array, j - 1 + csArgStart, LuaValueToCSRef(apis, elementType, env, apis->get_arg(info, j)));
                }
            }
            args[i] = array;
            continue;
        }

        int luaValue = apis->get_arg(info, i - csArgStart);

        if (Class::IsValuetype(parameterKlass))
        {
            if (Class::IsNullable(parameterKlass))
            {
                returnCount++;
                void* storage = alloca(parameterKlass->instance_size - sizeof(Il2CppObject));
                auto underlyClass = Class::GetNullableArgument(parameterKlass);
                uint32_t valueSize = underlyClass->instance_size - sizeof(Il2CppObject);
                bool hasValue = GetValueTypeFromLua(apis, env, luaValue, underlyClass, storage);
                *(static_cast<uint8_t*>(storage) + valueSize) = hasValue;
                args[i] = storage;
            }
            else if (passedByReference)
            {
                returnCount++;
                auto underlyClass = Class::FromIl2CppType(&parameterKlass->byval_arg);
                void* storage = alloca(underlyClass->instance_size - sizeof(Il2CppObject));
                luaValue = LuaObjectUnRef(apis, env, luaValue);
                GetValueTypeFromLua(apis, env, luaValue, underlyClass, storage);
                args[i] = storage;
            }
            else if (hasDefault && apis->is_undefined(env, luaValue))
            {
                void* storage = GetDefaultValuePtr(method, i);
                if (!storage)
                {
                    auto valueSize = parameterKlass->instance_size - sizeof(Il2CppObject);
                    storage = alloca(valueSize);
                    memset(storage, 0, valueSize);
                }
                args[i] = storage;
            }
            else
            {
                auto valueSize = parameterKlass->instance_size - sizeof(Il2CppObject);
                void* storage = alloca(valueSize);
                bool hasValue = GetValueTypeFromLua(apis, env, luaValue, parameterKlass, storage);
                if (!hasValue)
                {
                    memset(storage, 0, valueSize);
                }
                args[i] = storage;
            }
        }
        else if (passedByReference)
        {
            returnCount++;
            void** arg = (void**) alloca(sizeof(void*));
            *arg = nullptr;
            auto underlyClass = Class::FromIl2CppType(&parameterKlass->byval_arg);
            luaValue = LuaObjectUnRef(apis, env, luaValue);
            if (luaValue)
            {
                auto ptr = apis->get_native_object_ptr(env, luaValue);
                if (ptr)
                {
                    auto objClass = (Il2CppClass*) apis->get_native_object_typeid(env, luaValue);
                    if (Class::IsAssignableFrom(underlyClass, objClass))
                    {
                        *arg = ptr;
                    }
                }
                else if (underlyClass == il2cpp_defaults.object_class)    // any type
                {
                    *arg = LuaValueToCSRef(apis, underlyClass, env, luaValue);
                }
            }
            args[i] = arg;
        }
        else if (parameterKlass->byval_arg.type == IL2CPP_TYPE_PTR)
        {
            auto underlyClass = Class::FromIl2CppType(&parameterKlass->element_class->byval_arg);
            void* storage = alloca(underlyClass->instance_size - sizeof(Il2CppObject));
            luaValue = LuaObjectUnRef(apis, env, luaValue);
            args[i] = GetValueTypeFromLua(apis, env, luaValue, underlyClass, storage) ? storage : nullptr;
        }
        else
        {
            args[i] = (hasDefault && apis->is_undefined(env, luaValue)) ? GetDefaultValuePtr(method, i)
                                                                        : LuaValueToCSRef(apis, parameterKlass, env, luaValue);
        }
    }

    Il2CppObject* ret = Runtime::InvokeWithThrow(method, self, args);
    int* returnValueArray = new int[returnCount];
    int idx = 0;
    for (int i = csArgStart; i < method->parameters_count; ++i)
    {
        auto parameterType = Method::GetParam(method, i);
        bool passedByReference = parameterType->byref;
        Il2CppClass* parameterKlass = Class::FromIl2CppType(parameterType);

        int luaValue = apis->get_arg(info, i - csArgStart);

        if (Class::IsValuetype(parameterKlass) && passedByReference)
        {
            if (Class::IsNullable(parameterKlass))
            {
                bool hasValue = !!*(static_cast<uint8_t*>(args[i]) + parameterKlass->instance_size - sizeof(Il2CppObject));
                if (!hasValue)
                {
                    returnValueArray[idx++] = apis->create_null(env);
                    continue;
                }
            }
            auto underlyClass = Class::FromIl2CppType(&parameterKlass->byval_arg);
            returnValueArray[idx++] = CSRefToLuaValue(apis, env, underlyClass, (Il2CppObject*)(((uint8_t*)args[i]) - sizeof(Il2CppObject)));
        }
        else if (passedByReference)
        {
            Il2CppObject** arg = (Il2CppObject**) args[i];
            auto underlyClass = Class::FromIl2CppType(&parameterKlass->byval_arg);
            returnValueArray[idx++] = CSRefToLuaValue(apis, env, underlyClass, *arg);
        }
        else if (parameterKlass->byval_arg.type == IL2CPP_TYPE_PTR)
        {
            auto underlyClass = Class::FromIl2CppType(&parameterKlass->element_class->byval_arg);
            LuaObjectSetRef(apis, env, luaValue, CSRefToLuaValue(apis, env, underlyClass, (Il2CppObject*) (((uint8_t*) args[i]) - sizeof(Il2CppObject))));
        }
    }

    auto returnType = Class::FromIl2CppType(method->return_type);
    int returnValue = 0;
    if (returnType != il2cpp_defaults.void_class)
    {
        returnValue = CSRefToLuaValue(apis, env, returnType, ret);
    }
    if (returnValue != 0)
    {
        apis->add_return(info, returnValue);
    }
        for (int i = 0; i < returnCount; i++)
        {
            apis->add_return(info, returnValueArray[i]);
        }
        delete returnValueArray;
    return true;
}

static void ReflectionGetFieldWrapper(
    struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* field, size_t offset, Il2CppClass* fieldType)
{
    pesapi_env env = apis->get_env(info);
    int luaThis = apis->get_holder(info);
    void* csThis = nullptr;
    if (!(field->type->attrs & FIELD_ATTRIBUTE_STATIC))
    {
        csThis = apis->get_native_object_ptr(env, luaThis);
    }

    if (Class::IsValuetype(fieldType))
    {
        void* storage = nullptr;
        bool isFieldPtr = true;
        auto expectType = fieldType;
        if (Class::IsNullable(fieldType))
        {
            expectType = Class::GetNullableArgument(fieldType);
        }
        if (Class::IsEnum(fieldType))
        {
            expectType = Class::GetElementClass(fieldType);
        }

        if ((field->type->attrs & FIELD_ATTRIBUTE_STATIC))
        {
            int t = Class::GetType(fieldType)->type;
            if (t >= IL2CPP_TYPE_BOOLEAN && t <= IL2CPP_TYPE_R8 || t == IL2CPP_TYPE_I || t == IL2CPP_TYPE_U)
            {
                storage = alloca(expectType->instance_size - sizeof(Il2CppObject));
                GetFieldValue(csThis, field, offset, storage);
                isFieldPtr = false;
            }
            else
            {
                storage = GetValueTypeFieldPtr(csThis, field, offset);
            }
        }
        else if (csThis)
        {
            storage = (char*) csThis + offset;
        }
        if (!storage)
        {
            storage = alloca(expectType->instance_size - sizeof(Il2CppObject));
            GetFieldValue(csThis, field, offset, storage);
            isFieldPtr = false;
        }

        Il2CppObject* obj = (Il2CppObject*) storage - 1;
        int luaVal = TryTranslatePrimitiveWithClass(apis, env, obj, expectType);

        if (!luaVal)
        {
            if (isFieldPtr)
            {
                luaVal = apis->native_object_to_value(env, expectType, storage, false);
            }
            else
            {
                auto valueSize = expectType->instance_size - sizeof(Il2CppObject);
                auto buff = new uint8_t[valueSize];
                memcpy(buff, storage, valueSize);
                luaVal = apis->native_object_to_value(env, expectType, buff, true);
            }
        }

        if (luaVal)
        {
            apis->add_return(info, luaVal);
        }
    }
    else
    {
        void* storage = nullptr;
        GetFieldValue(csThis, field, offset, &storage);
        apis->add_return(info, CSRefToLuaValue(apis, env, fieldType, (Il2CppObject*) storage));
    }
}

static void ReflectionSetFieldWrapper(
    struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* field, size_t offset, Il2CppClass* fieldType)
{
    pesapi_env env = apis->get_env(info);
    int luaThis = apis->get_holder(info);
    void* csThis = nullptr;
    if (!(field->type->attrs & FIELD_ATTRIBUTE_STATIC))
    {
        csThis = apis->get_native_object_ptr(env, luaThis);
    }
    int luaValue = apis->get_arg(info, 0);
    if (Class::IsValuetype(fieldType))
    {
        if (Class::IsNullable(fieldType))
        {
            void* storage = alloca(fieldType->instance_size - sizeof(Il2CppObject));
            auto underlyClass = Class::GetNullableArgument(fieldType);
            uint32_t valueSize = underlyClass->instance_size - sizeof(Il2CppObject);
            bool hasValue = GetValueTypeFromLua(apis, env, luaValue, underlyClass, storage);
            *(static_cast<uint8_t*>(storage) + valueSize) = hasValue;
            SetFieldValue(csThis, field, offset, storage);
        }
        else
        {
            auto valueSize = fieldType->instance_size - sizeof(Il2CppObject);
            void* storage = alloca(valueSize);
            bool hasValue = GetValueTypeFromLua(apis, env, luaValue, fieldType, storage);
            if (!hasValue)
            {
                memset(storage, 0, valueSize);
            }
            SetFieldValue(csThis, field, offset, storage);
        }
    }
    else
    {
        void* val = LuaValueToCSRef(apis, fieldType, env, luaValue);

        if (!(field->type->attrs & FIELD_ATTRIBUTE_STATIC))
        {
            SetFieldValue(csThis, field, offset, &val);
        }
        else
        {
            SetFieldValue(csThis, field, offset, val);
        }
    }
}

Il2CppObject* GetLuaTableValueByString(Il2CppObject* luaObject, struct pesapi_ffi* apis, Il2CppString* key, Il2CppReflectionType* rtype)
{
    PObjectRefInfo* objectInfo = GetPObjectRefInfo(luaObject);

    const Il2CppChar* utf16 = il2cpp::utils::StringUtils::GetChars(key);
    std::string key_std = il2cpp::utils::StringUtils::Utf16ToUtf8(utf16);

    auto type = il2cpp_codegen_class_from_type(rtype->type);

    pesapi_env env = apis->get_ref_associated_env(objectInfo->ValueRef);
    AutoValueScope ValueScope(apis, env);
    auto obj = apis->get_value_from_ref(env, objectInfo->ValueRef);
    const char* str = key_std.c_str();
    auto val = apis->get_property(env, obj, str);
    if (!val)
    {
        return nullptr;
    }
    return LuaValueToCSRef(apis, type, env, val);
}

Il2CppObject* GetLuaTableValueByUInt64(Il2CppObject* luatable, struct pesapi_ffi* apis, uint64_t index, Il2CppReflectionType* rtype)
{
    PObjectRefInfo* objectInfo = GetPObjectRefInfo(luatable);

    auto type = il2cpp_codegen_class_from_type(rtype->type);

    pesapi_env env = apis->get_ref_associated_env(objectInfo->ValueRef);
    AutoValueScope ValueScope(apis, env);
    
    auto obj = apis->get_value_from_ref(env, objectInfo->ValueRef);
    auto val = apis->get_property_uint64(env, obj, index);
    if (!val)
    {
        return nullptr;
    }
    return LuaValueToCSRef(apis, type, env, val);
}

void SetLuaTableValueByString(Il2CppObject* luaTable, struct pesapi_ffi* apis, Il2CppString* key, Il2CppObject* value)
{
    PObjectRefInfo* objectInfo = GetPObjectRefInfo(luaTable);

    const Il2CppChar* utf16 = il2cpp::utils::StringUtils::GetChars(key);
    std::string key_std = il2cpp::utils::StringUtils::Utf16ToUtf8(utf16);

    pesapi_env env = apis->get_ref_associated_env(objectInfo->ValueRef);
    AutoValueScope ValueScope(apis, env);
    
    auto obj = apis->get_value_from_ref(env, objectInfo->ValueRef);
    apis->set_property(env, obj, key_std.c_str(), CSRefToLuaValue(apis, env, value ? value->klass : nullptr, value));
}

void SetLuaTableValueByUInt64(Il2CppObject* luaTable, struct pesapi_ffi* apis, uint64_t key, Il2CppObject* value)
{
    PObjectRefInfo* objectInfo = GetPObjectRefInfo(luaTable);

    pesapi_env env = apis->get_ref_associated_env(objectInfo->ValueRef);
    AutoValueScope ValueScope(apis, env);
    
    auto obj = apis->get_value_from_ref(env, objectInfo->ValueRef);
    apis->set_property_uint64(env, obj, key, value ? CSRefToLuaValue(apis, env, value->klass, value) : 0);
}

uint32_t GetLuaTableLength(Il2CppObject* luaTable, struct pesapi_ffi* apis)
{
    PObjectRefInfo* objectInfo = GetPObjectRefInfo(luaTable);
    
    pesapi_env env = apis->get_ref_associated_env(objectInfo->ValueRef);
    AutoValueScope ValueScope(apis, env);
    
    auto obj = apis->get_value_from_ref(env, objectInfo->ValueRef);
    return apis->get_array_length(env, obj);
}

Il2CppObject* NewTable(struct pesapi_ffi* apis, intptr_t ptr)
{
    pesapi_env_ref envRef = reinterpret_cast<pesapi_env_ref>(ptr);

    auto env = apis->get_env_from_ref(envRef);
    AutoValueScope ValueScope(apis, env);

    Il2CppClass* persistentObjectInfoClass = g_typeofPersistentObjectInfo;

    pesapi_value_ref value_ref;
    Il2CppObject* ret;
    apis->create_object(env);
    XLUA_Il2CppGCHandle* handle_store = FindOrCreateHandleStoreOfValue(apis, env, -1, &value_ref, &ret);

    if (ret == nullptr)
    {
        ret = il2cpp::vm::Object::New(persistentObjectInfoClass);

        const MethodInfo* ctor = il2cpp_class_get_method_from_name(persistentObjectInfoClass, ".ctor", 0);
        typedef void (*NativeCtorPtr)(Il2CppObject* ___this, const MethodInfo* method);
        ((NativeCtorPtr) ctor->methodPointer)(ret, ctor);

        PObjectRefInfo* objectInfo = GetPObjectRefInfo(ret);
        auto targetHandle = il2cpp::gc::GCHandle::GetTargetHandle(ret, 0, il2cpp::gc::HANDLE_WEAK);
        il2cpp::vm::Exception::RaiseIfError(targetHandle.GetError());
#ifdef UNITY_2023_2_OR_NEWER
        * handle_store = reinterpret_cast<XLUA_Il2CppGCHandle>(targetHandle.Get());
#else
        * handle_store = targetHandle.Get();
#endif
        SetPObjectRefInfoValue(apis, env, objectInfo, value_ref);
    }
    
    return ret;
}

Il2CppObject* GetGlobalTable(struct pesapi_ffi* apis, intptr_t ptr)
{
    pesapi_env_ref envRef = reinterpret_cast<pesapi_env_ref>(ptr);
    
    auto env = apis->get_env_from_ref(envRef);
    AutoValueScope value_scope(apis, env);
    Il2CppClass* persistentObjectInfoClass = g_typeofPersistentObjectInfo;

    pesapi_value_ref value_ref;
    Il2CppObject* ret;
    apis->global(env);
    XLUA_Il2CppGCHandle* handle_store = FindOrCreateHandleStoreOfValue(apis, env, -1, &value_ref, &ret);

    if (ret == nullptr)
    {
        ret = il2cpp::vm::Object::New(persistentObjectInfoClass);

        const MethodInfo* ctor = il2cpp_class_get_method_from_name(persistentObjectInfoClass, ".ctor", 0);
        typedef void (*NativeCtorPtr)(Il2CppObject* ___this, const MethodInfo* method);
        ((NativeCtorPtr) ctor->methodPointer)(ret, ctor);

        PObjectRefInfo* objectInfo = GetPObjectRefInfo(ret);
        auto targetHandle = il2cpp::gc::GCHandle::GetTargetHandle(ret, 0, il2cpp::gc::HANDLE_WEAK);
        il2cpp::vm::Exception::RaiseIfError(targetHandle.GetError());
#ifdef UNITY_2023_2_OR_NEWER
        * handle_store = reinterpret_cast<XLUA_Il2CppGCHandle>(targetHandle.Get());
#else
        * handle_store = targetHandle.Get();
#endif
        SetPObjectRefInfoValue(apis, env, objectInfo, value_ref);
    }

    return ret;
}

Il2CppObject* LoadString(struct pesapi_ffi* apis, intptr_t ptr, Il2CppArray* __code, Il2CppString* __path, Il2CppObject* luaEnvRef, Il2CppReflectionType* __type)
{
    pesapi_env_ref envRef = reinterpret_cast<pesapi_env_ref>(ptr);
    auto env = apis->get_env_from_ref(envRef);
    AutoValueScope ValueScope(apis, env);

    const Il2CppChar* utf16 = il2cpp::utils::StringUtils::GetChars(__path);
    std::string path = il2cpp::utils::StringUtils::Utf16ToUtf8(utf16);

    auto codeSize = il2cpp_array_length(__code);
    uint8_t* code = (uint8_t*) il2cpp_array_addr_with_size(__code, il2cpp_array_element_size(__code->klass), 0);
    pesapi_value_ref value_ref = luaEnvRef == nullptr ? nullptr : GetPObjectRefInfo(luaEnvRef)->ValueRef;
    auto ret = apis->loadstring(env, code, codeSize, path.c_str(), value_ref);

    if (apis->has_caught(env))
    {
        Exception::Raise(Exception::GetInvalidOperationException(apis->get_exception_as_string(env, true)));
        return nullptr;
    }
    return LuaValueToCSRef(apis, il2cpp_codegen_class_from_type(__type->type), env, ret);
}

Il2CppObject* DoString(struct pesapi_ffi* apis, intptr_t ptr, Il2CppArray* __code, Il2CppString* __path, Il2CppObject* luaEnvRef, Il2CppReflectionType *__type)
{
    pesapi_env_ref envRef = reinterpret_cast<pesapi_env_ref>(ptr);
    auto env = apis->get_env_from_ref(envRef);
    AutoValueScope ValueScope(apis, env);

    const Il2CppChar* utf16 = il2cpp::utils::StringUtils::GetChars(__path);
    std::string path = il2cpp::utils::StringUtils::Utf16ToUtf8(utf16);

    auto codeSize = il2cpp_array_length(__code);
    uint8_t* code = (uint8_t*) il2cpp_array_addr_with_size(__code, il2cpp_array_element_size(__code->klass), 0);
    pesapi_value_ref value_ref = luaEnvRef == nullptr ? nullptr : GetPObjectRefInfo(luaEnvRef)->ValueRef;
    auto ret = apis->dostring(env, code, codeSize, path.c_str(), value_ref);

    if (apis->has_caught(env))
    {
        Exception::Raise(Exception::GetInvalidOperationException(apis->get_exception_as_string(env, true)));
        return nullptr;
    }
    if (ValueScope.scope != ret && __type != nullptr)
    {
        return LuaValueToCSRef(apis, il2cpp_codegen_class_from_type(__type->type), env, ret);
    }
    return nullptr;
}

void SetObjectToGlobal(struct pesapi_ffi* apis, pesapi_env_ref envRef, Il2CppString* __key, Il2CppObject* obj)
{
    auto env = apis->get_env_from_ref(envRef);
    AutoValueScope ValueScope(apis, env);

    const Il2CppChar* utf16 = il2cpp::utils::StringUtils::GetChars(__key);
    std::string key = il2cpp::utils::StringUtils::Utf16ToUtf8(utf16);

    int global = apis->global(env);
    if (global)
    {
        apis->set_property(env, global, key.c_str(), CSRefToLuaValue(apis, env, obj->klass, obj));
    }
}

struct LuaEnvPrivate
{
    struct pesapi_ffi* apis;
    pesapi_env_ref envRef;
    std::mutex pendingKillRefsMutex;
    std::unordered_set<pesapi_value_ref> pendingKillRefs;
    
    MethodInfoHelper<int32_t(Il2CppObject* obj)> objPoolAdd;
    MethodInfoHelper<Il2CppObject*(int32_t index)> objPoolRemove;

    LuaEnvPrivate(struct pesapi_ffi* inApis, pesapi_env_ref inEnvRef, Il2CppObject* objPool,
        Il2CppReflectionMethod* objPoolAddMethodInfo, Il2CppReflectionMethod* objPoolRemoveMethodInfo)
        : apis(inApis), envRef(inEnvRef), objPoolAdd(objPoolAddMethodInfo, objPool), objPoolRemove(objPoolRemoveMethodInfo, objPool)
    {
    }

    void AddPendingKillScriptObjects(pesapi_value_ref valueRef)
    {
        std::lock_guard<std::mutex> guard(pendingKillRefsMutex);
        pendingKillRefs.insert(valueRef);
        
    }

    void CleanupPendingKillScriptObjects()
    {
        std::lock_guard<std::mutex> guard(pendingKillRefsMutex);
        auto size = pendingKillRefs.size();
        if (size == 0)
        {
            return;
        }

        for (const auto& valueRef : pendingKillRefs)
        {
            XLUA_Il2CppGCHandle* store = reinterpret_cast<XLUA_Il2CppGCHandle*>(apis->get_ref_internal_fields(valueRef));
            if (store)
            {
#ifdef UNITY_2023_2_OR_NEWER
                Il2CppGCHandle handle = *store;
#else
                int32_t handle = *store;
#endif
                if (nullptr == il2cpp::gc::GCHandle::GetTarget(handle))
                {
                    il2cpp::gc::GCHandle::Free(handle);
                }

            }
            apis->release_value_ref(valueRef);
        }

        pendingKillRefs.clear();
    }

    int32_t RefCSObject(Il2CppObject* obj)
    {
        return objPoolAdd.CallWithInstance(obj);
    }

    void UnRefCSObject(int32_t idx)
    {
        objPoolRemove.CallWithInstance(idx);
    }
};

static void* OnCsObjectEnter(Il2CppObject* obj, void* class_data, LuaEnvPrivate* luaEnvPrivate)
{
    return reinterpret_cast<void*>(luaEnvPrivate->RefCSObject(obj));
}

static void OnCsObjectExit(void* ptr, void* class_data, LuaEnvPrivate* luaEnvPrivate, void* userdata)
{
    intptr_t idx = reinterpret_cast<intptr_t>(userdata);
    luaEnvPrivate->UnRefCSObject(idx);
}

static void LoadTypeWrapper(struct pesapi_ffi* apis, pesapi_callback_info info)
{
    pesapi_env env = apis->get_env(info);
    Il2CppObject* type = (Il2CppObject*) apis->get_native_object_ptr(env, apis->get_arg(info, 0));
    auto type_id = CSharpTypeToTypeId(type);
    auto ret = apis->create_class(env, type_id);
    apis->add_return(info, ret);
}

xlua::LuaEnvPrivate* InitialPapiEnvRef(struct pesapi_ffi* apis, pesapi_env_ref envRef, Il2CppObject* objPool,
    Il2CppReflectionMethod* objPoolAddMethodInfo, Il2CppReflectionMethod* objPoolRemoveMethodInfo)
{
    auto env = apis->get_env_from_ref(envRef);
    xlua::AutoValueScope ValueScope(apis, env);
    
    auto luaEnvPrivate = new xlua::LuaEnvPrivate(apis, envRef, objPool, objPoolAddMethodInfo, objPoolRemoveMethodInfo);
    apis->set_env_private(env, luaEnvPrivate);
    auto func = apis->create_function(env, LoadTypeWrapper, nullptr);
    if (func)
    {
        int global = apis->global(env);
        if (global)
        {
            apis->set_property(env, global, "loadType", func);
            return luaEnvPrivate;
        }
    }
    Exception::Raise(Exception::GetInvalidOperationException("can not init global.loadType"));
    return nullptr;
}

void CleanupPapiEnvRef(struct pesapi_ffi* apis, pesapi_env_ref envRef)
{
    auto env = apis->get_env_from_ref(envRef);
    if (env)
    {
        auto luaEnvPrivate = (xlua::LuaEnvPrivate*) apis->get_env_private(env);
        luaEnvPrivate->CleanupPendingKillScriptObjects();
        apis->release_env_ref(envRef);
    }
}

void DestroyLuaEnvPrivate(LuaEnvPrivate* luaEnvPrivate)
{
    delete luaEnvPrivate;
}

}    // namespace xlua

#ifdef __cplusplus
extern "C"
{
#endif

    void pesapi_init(pesapi_func_ptr* func_array);

    void InitialXLua(pesapi_func_ptr* func_array)
    {
        InternalCalls::Add("XLuaIl2cpp.NativeAPI::GetMethodPointer(System.Reflection.MethodBase)", (Il2CppMethodPointer) xlua::GetMethodPointer);
        InternalCalls::Add("XLuaIl2cpp.NativeAPI::GetMethodInfoPointer(System.Reflection.MethodBase)",(Il2CppMethodPointer) xlua::GetMethodInfoPointer);
        InternalCalls::Add("XLuaIl2cpp.NativeAPI::GetTypeId(System.Type)", (Il2CppMethodPointer) xlua::GetTypeId);
        InternalCalls::Add("XLuaIl2cpp.NativeAPI::GetFieldOffset(System.Reflection.FieldInfo,System.Boolean)",(Il2CppMethodPointer) xlua::GetFieldOffset);
        InternalCalls::Add("XLuaIl2cpp.NativeAPI::GetFieldInfoPointer(System.Reflection.FieldInfo)",(Il2CppMethodPointer) xlua::GetFieldInfoPointer);
        InternalCalls::Add("XLuaIl2cpp.NativeAPI::SetGlobalType_LuaTable(System.Type)", (Il2CppMethodPointer) xlua::SetGlobalType_LuaTable);
        InternalCalls::Add("XLuaIl2cpp.NativeAPI::SetGlobalType_ArrayBuffer(System.Type)", (Il2CppMethodPointer)xlua::SetGlobalType_ArrayBuffer);
        InternalCalls::Add("XLuaIl2cpp.NativeAPI::SetGlobalType_Array(System.Type)", (Il2CppMethodPointer) xlua::SetGlobalType_Array);
        InternalCalls::Add("XLuaIl2cpp.NativeAPI::SetGlobalType_IList(System.Type)", (Il2CppMethodPointer)xlua::SetGlobalType_IList);
        InternalCalls::Add("XLuaIl2cpp.NativeAPI::SetGlobalType_IDictionary(System.Type)", (Il2CppMethodPointer)xlua::SetGlobalType_IDictionary);
        InternalCalls::Add("XLuaIl2cpp.NativeAPI::DoString(System.IntPtr,System.IntPtr,System.Byte[],System.String,XLua.LuaTable,System.Type)", (Il2CppMethodPointer) xlua::DoString);
        InternalCalls::Add("XLuaIl2cpp.NativeAPI::LoadString(System.IntPtr,System.IntPtr,System.Byte[],System.String,XLua.LuaTable,System.Type)", (Il2CppMethodPointer) xlua::LoadString);
        InternalCalls::Add("XLuaIl2cpp.NativeAPI::SetObjectToGlobal(System.IntPtr,System.IntPtr,System.String,System.Object)",(Il2CppMethodPointer) xlua::SetObjectToGlobal);
        InternalCalls::Add("XLuaIl2cpp.NativeAPI::TypeIdToType(System.IntPtr)", (Il2CppMethodPointer) xlua::TypeIdToType);
        InternalCalls::Add("XLuaIl2cpp.NativeAPI::InitialPapiEnvRef(System.IntPtr,System.IntPtr,System.Object,System.Reflection.MethodBase,System.Reflection.MethodBase)",(Il2CppMethodPointer) xlua::InitialPapiEnvRef);
        InternalCalls::Add("XLuaIl2cpp.NativeAPI::CleanupPapiEnvRef(System.IntPtr,System.IntPtr)", (Il2CppMethodPointer) xlua::CleanupPapiEnvRef);
        InternalCalls::Add("XLuaIl2cpp.NativeAPI::DestroyLuaEnvPrivate(System.IntPtr)", (Il2CppMethodPointer) xlua::DestroyLuaEnvPrivate);
        InternalCalls::Add("XLua.LuaTable::GetLuaTableValueByUInt64(System.IntPtr,System.UInt64,System.Type)",(Il2CppMethodPointer) xlua::GetLuaTableValueByUInt64);
        InternalCalls::Add("XLua.LuaTable::GetLuaTableValueByString(System.IntPtr,System.String,System.Type)", (Il2CppMethodPointer) xlua::GetLuaTableValueByString);
        InternalCalls::Add("XLua.LuaTable::SetLuaTableValueByUInt64(System.IntPtr,System.UInt64,System.Object)",(Il2CppMethodPointer) xlua::SetLuaTableValueByUInt64);
        InternalCalls::Add("XLua.LuaTable::SetLuaTableValueByString(System.IntPtr,System.String,System.Object)",(Il2CppMethodPointer) xlua::SetLuaTableValueByString);
        InternalCalls::Add("XLua.LuaTable::GetLuaTableLength(System.IntPtr)", (Il2CppMethodPointer) xlua::GetLuaTableLength);
        InternalCalls::Add("XLuaIl2cpp.NativeAPI::SetRegisterNoThrow(System.Reflection.MethodBase)",(Il2CppMethodPointer) xlua::SetRegisterNoThrow);
        InternalCalls::Add("XLuaIl2cpp.NativeAPI::CSRefToLuaValue(System.IntPtr,System.IntPtr,System.Type,System.Object)", (Il2CppMethodPointer)xlua::CSRefToLuaValue);
        InternalCalls::Add("XLuaIl2cpp.NativeAPI::NewTable(System.IntPtr,System.IntPtr)",(Il2CppMethodPointer)xlua::NewTable);
        InternalCalls::Add("XLuaIl2cpp.NativeAPI::GetGlobalTable(System.IntPtr,System.IntPtr)", (Il2CppMethodPointer) xlua::GetGlobalTable);
        pesapi_init(func_array);
    }

    void AddPendingKillScriptObjects(struct pesapi_ffi* apis, xlua::LuaEnvPrivate* luaEnvPrivate, pesapi_value_ref valueRef)
    {
        luaEnvPrivate->AddPendingKillScriptObjects(valueRef);
    }

    void CleanupPendingKillScriptObjects(xlua::LuaEnvPrivate* LuaEnvPrivate)
    {
        LuaEnvPrivate->CleanupPendingKillScriptObjects();
    }

    xlua::WrapFuncPtr FindWrapFunc(const char* signature)
    {
        if (signature == nullptr)
        {
            return &xlua::ReflectionWrapper;
        }
        else
        {
            return xlua::FindWrapFunc(signature);
        }
    }

    void FindFieldWrap(const char* signature, xlua::FieldWrapFuncPtr* getter, xlua::FieldWrapFuncPtr* setter)
    {
        if (signature == nullptr)
        {
            *getter = &xlua::ReflectionGetFieldWrapper;
            *setter = &xlua::ReflectionSetFieldWrapper;
        }
        else
        {
            auto fieldWrapInfo = xlua::FindFieldWrapFuncInfo(signature);
            if (fieldWrapInfo)
            {
                *getter = fieldWrapInfo->Getter;
                *setter = fieldWrapInfo->Setter;
            }
            else
            {
                *getter = nullptr;
                *setter = nullptr;
            }
        }
    }

    xlua::LuaClassInfo* CreateCSharpTypeInfo(const char* name, Il2CppClass* type_id, Il2CppClass* super_tpye_id, bool isValueType,
        bool isDelegate, const char* delegateSignature)
    {
        Il2CppMethodPointer delegateBridge = nullptr;
        if (isDelegate)
        {
            delegateBridge = xlua::FindBridgeFunc(delegateSignature);
            if (!delegateBridge)
                return nullptr;
        }
        xlua::LuaClassInfo* ret = new xlua::LuaClassInfo();
        ret->Name = name;
        ret->TypeId = type_id;
        ret->SuperTypeId = super_tpye_id;
        ret->IsValueType = isValueType;
        ret->DelegateBridge = delegateBridge;

        return ret;
    }

    void ReleaseCSharpTypeInfo(xlua::LuaClassInfo* classInfo)
    {
        delete classInfo;
    }

    static bool SetParamArrayFlagAndOptionalNum(xlua::WrapData* data, const char* signature)
    {
        data->HasParamArray = false;
        data->OptionalNum = 0;
        bool NeedBoxing = false;

        const char* p = signature;
        while (*p)
        {
            if (*p == 'V')
            {
                data->HasParamArray = true;
            }
            else if (*p == 'T')
            {
                NeedBoxing = true;
            }
            else if (*p == 'D')
            {
                ++data->OptionalNum;
            }
            ++p;
        }
        return NeedBoxing;
    }

    xlua::WrapData* AddConstructor(xlua::LuaClassInfo* classInfo, const char* signature, xlua::WrapFuncPtr WrapFunc,
        MethodInfo* method, Il2CppMethodPointer methodPointer, int typeInfoNum)
    {
        if (!WrapFunc)
            return nullptr;
        int allocSize = sizeof(xlua::WrapData) + sizeof(void*) * typeInfoNum;
        xlua::WrapData* data = (xlua::WrapData*) malloc(allocSize);
        memset(data, 0, allocSize);
        data->Method = method;
        data->MethodPointer = methodPointer;
        data->Wrap = WrapFunc;
        data->IsStatic = false;
        data->IsExtensionMethod = false;
        SetParamArrayFlagAndOptionalNum(data, signature);

        classInfo->Ctors.push_back(data);
        return data;
    }

    xlua::WrapData* AddMethod(xlua::LuaClassInfo* classInfo, const char* signature, xlua::WrapFuncPtr WrapFunc, const char* name,
        bool isStatic, bool isExtensionMethod, bool isGetter, bool isSetter, MethodInfo* method, Il2CppMethodPointer methodPointer,
        int typeInfoNum)
    {
        if (!WrapFunc)
            return nullptr;
        int allocSize = sizeof(xlua::WrapData) + sizeof(void*) * typeInfoNum;
        xlua::WrapData* data = (xlua::WrapData*) malloc(allocSize);
        memset(data, 0, allocSize);
        data->Method = method;
        data->MethodPointer = methodPointer;
        data->Wrap = WrapFunc;
        data->IsStatic = isStatic;
        data->IsExtensionMethod = isExtensionMethod;
        bool NeedBoxing = SetParamArrayFlagAndOptionalNum(data, signature);

        for (int i = 0; i < classInfo->Methods.size(); ++i)
        {
            if (classInfo->Methods[i].IsStatic == isStatic && classInfo->Methods[i].IsGetter == isGetter &&
                classInfo->Methods[i].IsGetter == isSetter && classInfo->Methods[i].Name == name)
            {
                if (isGetter || isSetter)
                {
                    free(data);
                    return nullptr;
                }
                classInfo->Methods[i].OverloadDatas.push_back(data);
                return data;
            }
        }

        std::vector<xlua::WrapData*> OverloadDatas;
        OverloadDatas.push_back(data);
        classInfo->Methods.push_back({ std::string(name), isStatic, isGetter, isSetter, NeedBoxing, std::move(OverloadDatas) });
        return data;
    }

    bool AddField(xlua::LuaClassInfo* classInfo, xlua::FieldWrapFuncPtr getter, xlua::FieldWrapFuncPtr setter, const char* name,
        bool is_static, FieldInfo* fieldInfo, int offset, Il2CppClass* fieldTypeInfo)
    {
        if (!getter && !setter)
        {
            return false;
        }
        xlua::FieldWrapData* data = new xlua::FieldWrapData();
        data->Getter = getter;
        data->Setter = setter;
        data->FieldInfo = fieldInfo;
        data->Offset = offset;
        data->TypeInfo = fieldTypeInfo;

        classInfo->Fields.push_back({std::string(name), is_static, data});
        return true;
    }

    void SetTypeInfo(xlua::WrapData* data, int index, Il2CppClass* typeInfo)
    {
        data->TypeInfos[index] = typeInfo;
    }

    bool RegisterCSharpType(xlua::LuaClassInfo* classInfo)
    {
        if (pesapi_get_class_data(classInfo->TypeId, false))
        {
            ReleaseCSharpTypeInfo(classInfo);
            return true;
        }

        classInfo->Ctors.push_back(nullptr);
        classInfo->CtorWrapDatas = classInfo->Ctors.data();

        std::map<std::string, std::pair<xlua::CSharpMethodInfo*, xlua::CSharpMethodInfo*>> gseters;
        std::vector<xlua::CSharpMethodInfo*> methods;

        for (auto& method : classInfo->Methods)
        {
            method.OverloadDatas.push_back(nullptr);

            if (method.IsGetter || method.IsSetter)
            {
                auto iter = gseters.find(method.Name);
                if (iter == gseters.end())
                {
                    gseters[method.Name] = std::make_pair<xlua::CSharpMethodInfo*, xlua::CSharpMethodInfo*>(
                        method.IsGetter ? &method : nullptr, method.IsSetter ? &method : nullptr);
                }
                else
                {
                    if (method.IsGetter)
                    {
                        iter->second.first = &method;
                    }
                    else
                    {
                        iter->second.second = &method;
                    }
                }
            }
            else
            {
                methods.push_back(&method);
            }
        }

        size_t propertiesCount = gseters.size() + methods.size() + classInfo->Fields.size();
        auto properties = pesapi_alloc_property_descriptors(propertiesCount);
        size_t pos = 0;

        for (auto const& method : methods)
        {
            pesapi_set_method_info(properties, pos++, method->Name.c_str(), method->IsStatic, &xlua::MethodCallback,
                method, nullptr);
        }

        for (auto const& kv : gseters)
        {
            auto geter_or_setter = kv.second.first ? kv.second.first : kv.second.second;
            pesapi_set_property_info(properties, pos++, geter_or_setter->Name.c_str(), geter_or_setter->IsStatic,
                kv.second.first ? &xlua::MethodCallback : nullptr, kv.second.second ? &xlua::MethodCallback : nullptr,
                kv.second.first,
                kv.second.second, nullptr);
        }

        for (auto& field : classInfo->Fields)
        {
            pesapi_set_property_info(properties, pos++, field.Name.c_str(), field.IsStatic, xlua::GetterCallback,
                xlua::SetterCallback, field.Data, field.Data, nullptr);
        }

        pesapi_define_class(classInfo->TypeId, classInfo->SuperTypeId, classInfo->Name.c_str(),
            classInfo->DelegateBridge ? &xlua::DeleagteCtorCallback : &xlua::CtorCallback,
            classInfo->IsValueType ? &xlua::PApiFree : (pesapi_finalize) nullptr, propertiesCount, properties, classInfo);

        if (!classInfo->IsValueType)
        {
            pesapi_trace_native_object_lifecycle(classInfo->TypeId, (pesapi_on_native_object_enter) &xlua::OnCsObjectEnter,
                (pesapi_on_native_object_exit) &xlua::OnCsObjectExit);
        }

        return true;
    }

    void SetLogCallbackInternal(xlua::LogCallbackFunc Log)
    {
        xlua::GLogCallback = Log;
    }
#ifdef __cplusplus
}
#endif