#include "unityenv_for_xlua.h"
#include "il2cpp-config.h"
#include "codegen/il2cpp-codegen.h"

#include "il2cpp-api.h"
#include "il2cpp-class-internals.h"
#include "il2cpp-object-internals.h"
#include "mono-structs.h"
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
#include "vm/GenericContainer.h"
#include "utils/StringUtils.h"
#include "utils/Memory.h"
#include "gc/WriteBarrier.h"
#include "gc/GCHandle.h"
#include "pesapi.h"
#include "TDataTrans.h"

#include <vector>
#include <mutex>
#include <map>
#include <string>
#include <unordered_set>
#include <sstream>

#include "utils/MemoryRead.h"
#include "vm/GlobalMetadataFileInternals.h"

// Because we need to hold the C# object pointer, we must ensure that GC does not do memory reorganization
static_assert(IL2CPP_GC_BOEHM, "Only BOEHM GC supported!");

#ifdef UNITY_2023_2_OR_NEWER
typedef Il2CppGCHandle XLUA_Il2CppGCHandle;
#else
typedef unsigned XLUA_Il2CppGCHandle;
#endif


using namespace il2cpp::vm;

struct pesapi_value_ref__
{
	pesapi_value_ref__(void* _L, int _value_ref)
		: L(_L)
		, value_ref(_value_ref)
		, ref_count(1)
		, handle(0)
	{
	}
	void* L;
	int value_ref;
	int ref_count;
	uint32_t handle;
	Il2CppObject* object;
};

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
		bool IsReadonly;
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

	const Il2CppClass* CSharpTypeToTypeId(Il2CppObject* type)
	{
		return (type && Class::IsAssignableFrom(il2cpp_defaults.systemtype_class, type->klass)) ? il2cpp_codegen_class_from_type(((Il2CppReflectionType*)type)->type) : nullptr;
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
		delete[](uint8_t*)ptr;
	}

	static void PApiFree(struct pesapi_ffi* api, void* ptr, void* class_data, void* env_private)
	{
		ValueTypeFree(ptr);    // TODO: class_data->IsValueType
	}

	static MethodInfoHelper<Il2CppArray* (Il2CppString*)> g_ExtensionMethodGetHelper;

	static Il2CppClass* s_ParamArrayAttribute;
	static Il2CppClass* s_ExtensionAttribute;

	static bool RegisterType(Il2CppClass* oklass);

	static bool ClassNotFoundCallback(const void* typeId)
	{
		return RegisterType((Il2CppClass*)typeId);
	}

	static void SetExtensionMethodGet(Il2CppReflectionMethod* method)
	{
		g_ExtensionMethodGetHelper = MethodInfoHelper<Il2CppArray * (Il2CppString*)>(method->method);
	}

	static std::string GetTypeSignature(const Il2CppType* type);

	static bool IsPtrToSelf(const Il2CppType* type, const Il2CppClass* selfClass)
	{
		if (type->byref && (type->type == IL2CPP_TYPE_VALUETYPE || type->type == IL2CPP_TYPE_TYPEDBYREF))
		{
			Il2CppClass* klass = Class::FromIl2CppType(type, false);
			Class::Init(klass);
			return Class::FromIl2CppType(&(klass->byval_arg)) == selfClass;
		}
		if (type->type == IL2CPP_TYPE_PTR)
		{
			Il2CppClass* klass = Class::FromIl2CppType(type, false);
			Class::Init(klass);
			return klass->element_class == selfClass;
		}
		return false;
	}

	static std::string GetValueTypeFieldsSignature(const Il2CppType* type)
	{
		Il2CppClass* klass = Class::FromIl2CppType(type, false);
		Class::Init(klass);
		std::string ret = "";
		for (uint16_t index = 0; index < klass->field_count; index++)
		{
			FieldInfo* field = klass->fields + index;
			if (field->type->attrs & FIELD_ATTRIBUTE_STATIC) continue;
			if (IsPtrToSelf(field->type, klass))
			{
				ret += "Pv";
			}
			else
			{
				ret += GetTypeSignature(field->type);
			}
		}
		return ret;
	}

	std::string GetTypeSignature(const Il2CppType* type)
	{
		std::string ret;
		switch (type->type)
		{
		case IL2CPP_TYPE_VOID:
			ret = "v";
			break;
		case IL2CPP_TYPE_BOOLEAN:
			ret = "b";
			break;
		case IL2CPP_TYPE_U1:
			ret = "u1";
			break;
		case IL2CPP_TYPE_I1:
			ret = "i1";
			break;
		case IL2CPP_TYPE_I2:
			ret = "i2";
			break;
		case IL2CPP_TYPE_U2:
			ret = "u2";
			break;
		case IL2CPP_TYPE_I4:
			ret = "i4";
			break;
		case IL2CPP_TYPE_U4:
			ret = "u4";
			break;
		case IL2CPP_TYPE_I8:
			ret = "i8";
			break;
		case IL2CPP_TYPE_U8:
			ret = "u8";
			break;
		case IL2CPP_TYPE_CHAR:
			ret = "c";
			break;
		case IL2CPP_TYPE_R8:
			ret = "r8";
			break;
		case IL2CPP_TYPE_R4:
			ret = "r4";
			break;
		case IL2CPP_TYPE_I:
		case IL2CPP_TYPE_U:
			ret = "p";
			break;
		case IL2CPP_TYPE_STRING:
			ret = "s";
			break;
		case IL2CPP_TYPE_OBJECT:
			ret = "O";
			break;
		case IL2CPP_TYPE_PTR:
			ret = "P" + GetTypeSignature(type->data.type);
			break;
		case IL2CPP_TYPE_ARRAY:
		case IL2CPP_TYPE_SZARRAY:
		case IL2CPP_TYPE_CLASS:
		{
			Il2CppClass* klass = Class::FromIl2CppType(type, false);
			Class::Init(klass);
			ret = (klass == xlua::g_typeofArrayBuffer) ? "a" : "o";
			break;
		}
		case IL2CPP_TYPE_GENERICINST:
		{
			Il2CppClass* klass = Class::FromIl2CppType(type, false);
			Class::Init(klass);
			if (!klass->byval_arg.valuetype)
			{
				ret = "o";
				break;
			}
		}
		case IL2CPP_TYPE_VALUETYPE:
		case IL2CPP_TYPE_TYPEDBYREF:
		{
			Il2CppClass* klass = Class::FromIl2CppType(type, false);
			Class::Init(klass);

			if (Type::IsEnum(type) || Class::GetParent(klass) == il2cpp_defaults.enum_class)
			{
				auto baseType = Type::GetUnderlyingType(type);
				if (baseType == type)
				{
					Il2CppClass* klass = Class::FromIl2CppType(type, false);
					ret = GetTypeSignature(klass->fields[0].type);
					break;
				}
				ret = GetTypeSignature(baseType);
				break;
			}

			if (il2cpp::vm::Class::IsNullable(klass))
			{
				ret = "N_" + GetValueTypeFieldsSignature(type) + "_";
			}
			else
			{
				ret = "S_" + GetValueTypeFieldsSignature(type) + "_";
			}
			break;
		}
		default:
			Exception::Raise(Exception::GetInvalidOperationException("not support type"));
		}

		return type->byref ? "P" + ret : ret;
	}

	class CustomAttributeDataReader
	{
	public:
		uint32_t GetCount() const
		{
			return count;
		}
		const char* GetDataBufferStart() const
		{
			return (const char*)(((uint32_t*)bufferStart) + count);
		}
		bool IterateAttributeCtorsImpl(const MethodInfo** attributeCtor, const char** ctorBuffer) const
		{
			if (*ctorBuffer < GetDataBufferStart())
			{
				MethodIndex ctorIndex = il2cpp::utils::Read32(ctorBuffer);
				*attributeCtor = il2cpp::vm::MetadataCache::GetMethodInfoFromMethodDefinitionIndex(image, ctorIndex);
				return true;
			}

			*attributeCtor = NULL;
			return false;
		}
		bool IterateAttributeCtors(const MethodInfo** attributeCtor, const char* ctorBuffer) const
		{
			while (IterateAttributeCtorsImpl(attributeCtor, &ctorBuffer))
			{
				if ((*attributeCtor)->klass == s_ParamArrayAttribute)
					return true;
			}

			return false;
		}

		const Il2CppImage* image;
		const char* bufferStart;
		const char* bufferEnd;
		uint32_t count;
	};

	static bool HasParamArray(const MethodInfo* method)
	{
		if (method->parameters_count == 0)
		{
			return false;
		}

		const MethodInfo* methodWithParameterAttributeInformation = method;
		if (method->is_inflated)
			methodWithParameterAttributeInformation = method->genericMethod->methodDefinition;

		auto reader = il2cpp::vm::MetadataCache::GetCustomAttributeDataReader(methodWithParameterAttributeInformation->klass->image, Method::GetParameterToken(method, method->parameters_count - 1));
		if (reader.GetCount() == 0)
		{
			return false;
		}
		void* ptr = &reader;
		CustomAttributeDataReader* customReader = (CustomAttributeDataReader*)ptr;
		const char* bufferStart = customReader->bufferStart;
		const MethodInfo* ctor;
		return (customReader->IterateAttributeCtors(&ctor, bufferStart));
	}

	static std::string GetParameterSignature(const MethodInfo* method, int index)
	{
		if (kInvalidIl2CppMethodSlot != method->slot)
		{
			Class::Init(method->klass);
		}
		const Il2CppType* type = Method::GetParam(method, index);

		if (type)
		{
			if (type->attrs & PARAM_ATTRIBUTE_OPTIONAL)
			{
				return "D" + GetTypeSignature(type);
			}

			if ((index == method->parameters_count - 1) && HasParamArray(method))
			{
				Il2CppClass* parameterKlass = Class::FromIl2CppType(type, false);
				return "V" + GetTypeSignature(&parameterKlass->element_class->byval_arg);
			}
			else
			{
				return GetTypeSignature(type);
			}
		}
		else
		{
			Exception::Raise(Exception::GetInvalidOperationException("invalid parameter index"));
		}
	}

	static bool IsDelegate(Il2CppClass* klass)
	{
		return Class::HasParent(klass, il2cpp_defaults.delegate_class) && klass != il2cpp_defaults.delegate_class && klass != il2cpp_defaults.multicastdelegate_class;
	}

	static bool IsCtor(const MethodInfo* method)
	{
		return *method->name == '.' && strcmp(method->name, ".ctor") == 0;
	}

	static bool IsCCtor(const MethodInfo* method)
	{
		return *method->name == '.' && strcmp(method->name, ".cctor") == 0;
	}

	static bool IsExtensionMethod(const MethodInfo* method)
	{
		return Method::HasAttribute(method, s_ExtensionAttribute);
	}

	static std::string GetMethodSignature(const MethodInfo* method, bool isBridge, bool isExtensionMethod)
	{
		std::string signature = "";
		if (IsCtor(method))
		{
			signature += "vt";
			for (uint32_t i = 0; i < method->parameters_count; ++i)
			{
				signature += GetParameterSignature(method, i);
			}
		}
		else
		{
			signature += GetTypeSignature(method->return_type);
			if (!isBridge && Method::IsInstance(method))
			{
				signature += (il2cpp_defaults.object_class == method->klass) ? "T" : "t";
			}
			for (uint32_t i = 0; i < method->parameters_count; ++i)
			{
				if (i == 0 && isExtensionMethod)
				{
					signature += method->parameters[i]->type == IL2CPP_TYPE_OBJECT ? "T" : "t";
				}
				else
				{
					signature += GetParameterSignature(method, i);
				}
			}
		}

		return signature;
	}

	Il2CppMethodPointer GetMethodPointer(const MethodInfo* method)
	{
		auto ret = MetadataCache::GetMethodPointer(method->klass->image, method->token);
		if (!ret)
		{
			ret = method->methodPointer;
		}
		return ret;
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

	static MethodInfoHelper<int32_t(int16_t ___0_sampleId, Il2CppString* ___1_customName, int32_t ___2_sampleTypeFlag)> g_BeginSample;
	static MethodInfoHelper<void(int32_t ___0_flag, int32_t* ___1_sampleIndex)> g_EndSampleByIndex;

	static void InitPerf(Il2CppReflectionMethod* beginSample, Il2CppReflectionMethod* endSampleByIndex)
	{
		g_BeginSample = beginSample->method;
		g_EndSampleByIndex = endSampleByIndex->method;
	}

	struct AutoScopePerf
	{
		AutoScopePerf(const char* name)
		{
			Il2CppString* customName = il2cpp::vm::String::NewWrapper(name);
			if (g_BeginSample.func)
				sampleIndex = g_BeginSample.Call(271, customName, 1);
		}
		~AutoScopePerf()
		{
			if (g_EndSampleByIndex.func)
				g_EndSampleByIndex.Call(1, &sampleIndex);
		}
		int32_t sampleIndex;
	};

	static std::map<const MethodInfo*, const MethodInfo*> WrapFuncPtrToMethodInfo;
	//static std::recursive_mutex WrapFuncPtrToMethodInfoMutex;

	Il2CppDelegate* FunctionPointerToDelegate(Il2CppMethodPointer functionPtr, Il2CppClass* delegateType, Il2CppObject* target)
	{
#if OSG_PROFILE
		AutoScopePerf perf(delegateType->name);
#endif
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

	static Il2CppDelegate* DelegateAllocate(Il2CppClass* klass, Il2CppMethodPointer functionPtr, PObjectRefInfo** outTargetData)
	{
		auto target = il2cpp::vm::Object::New(xlua::g_typeofLuaTable);

		Il2CppDelegate* delegate = FunctionPointerToDelegate(functionPtr, klass, target);

		if (MethodIsStatic(delegate->method))
			return nullptr;

		const MethodInfo* ctor = il2cpp_class_get_method_from_name(xlua::g_typeofLuaTable, ".ctor", 0);
		typedef void (*NativeCtorPtr)(Il2CppObject* ___this, const MethodInfo* method);
		((NativeCtorPtr)ctor->methodPointer)(target, ctor);

		IL2CPP_OBJECT_SETREF(delegate, invoke_impl_this, target);

		*outTargetData = GetPObjectRefInfo(target);

		delegate->method_ptr = functionPtr;

		return delegate;
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
			std::string err_info = "invalid arguments to " + csharpMethodInfo->Name;
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
		if (wrapData->Setter)
			wrapData->Setter(apis, info, wrapData->FieldInfo, wrapData->Offset, wrapData->TypeInfo);
	}

	void GetFieldValue(void* ptr, FieldInfo* field, size_t offset, void* value)
	{
		void* src;

		if (!(field->type->attrs & FIELD_ATTRIBUTE_STATIC))
		{
			IL2CPP_ASSERT(ptr);
			src = (char*)ptr + offset;
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
			return (char*)obj + offset;
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
				return ((char*)threadStaticData) + threadStaticFieldOffset;
			}
			else
			{
				return ((char*)field->parent->static_fields) + field->offset;
			}
		}
	}

	void SetFieldValue(void* ptr, FieldInfo* field, size_t offset, void* value)
	{
		void* dest;

		if (!(field->type->attrs & FIELD_ATTRIBUTE_STATIC))
		{
			IL2CPP_ASSERT(ptr);
			dest = (char*)ptr + offset;
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
	static LogCallbackFunc GLogWarningCallback = nullptr;
	static LogCallbackFunc GLogErrorCallback = nullptr;
	static LogCallbackFunc GLogExceptionCallback = nullptr;

	void XLuaLog(XLuaLogType type, const char* Fmt, ...)
	{
		static char SLogBuffer[1024];
		va_list list;
		va_start(list, Fmt);
		vsnprintf(SLogBuffer, sizeof(SLogBuffer), Fmt, list);
		va_end(list);
		switch (type)
		{
		case XLuaLogType::Log:
			if (GLogCallback)
			{
				GLogCallback(SLogBuffer);
			}
			break;
		case XLuaLogType::Warning:
			if (GLogWarningCallback)
			{
				GLogWarningCallback(SLogBuffer);
			}
			break;
		case XLuaLogType::Error:
			if (GLogErrorCallback)
			{
				GLogErrorCallback(SLogBuffer);
			}
		case XLuaLogType::Exception:
			if (GLogExceptionCallback)
			{
				GLogExceptionCallback(SLogBuffer);
			}
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
			Il2CppString* result = (Il2CppString*)il2cpp::vm::Runtime::Invoke(toStringMethod, exception.ex, nullptr, &outException);
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
	
	static void SetPObjectRefInfoValue(struct pesapi_ffi* apis, pesapi_env env, PObjectRefInfo* objectInfo, pesapi_value_ref value_ref)
	{
		objectInfo->Apis = apis;
		objectInfo->ValueRef = value_ref;
		objectInfo->authCode = apis->get_auth_code();
	}

	static int GetPObjectRefInfoValue(struct pesapi_ffi* apis, pesapi_env env, const PObjectRefInfo* objectInfo)
	{
		return apis->get_value_from_ref(env, objectInfo->ValueRef);
	}

	struct PesapiValueRefer
	{
		size_t operator()(int handle) const
		{
			return handle;
		}
	};

	//typedef Il2CppHashMap<int, pesapi_value_ref, PesapiValueRefer> PesapiValueRef;

	class LuaEnvPrivate
	{
	public:
		LuaEnvPrivate(struct pesapi_ffi* inApis, pesapi_env_ref inEnvRef, Il2CppObject* objPool, Il2CppReflectionMethod* objPoolAddMethodInfo, Il2CppReflectionMethod* objPoolRemoveMethodInfo)
			: apis(inApis), envRef(inEnvRef), objPoolAdd(objPoolAddMethodInfo->method, objPool), objPoolRemove(objPoolRemoveMethodInfo->method, objPool)
		{
			instance = this;
		}

		~LuaEnvPrivate()
		{
			const pesapi_env env = apis->get_env_from_ref(envRef);
			apis->set_env_private(env, nullptr);
			CleanupPendingKillScriptObjects();
			instance = nullptr;
		}

		void AddPendingKillScriptObjects(pesapi_value_ref valueRef)
		{
			// https://crashsight.qq.com/crash-reporting/crashes/6dd8864548/707DDF1A61776B90C176606A20400122?pid=1&crashDataType=unSystemExit
			// il2cpp的锁会crash，试一下std的
			//il2cpp::os::AutoLock guard(&pendingKillRefsMutex);
			std::lock_guard<std::mutex> guard(pendingKillRefsMutex);
			// 不用做无效性检查，应该数据可能无效，但是没有被释放掉
			pendingKillRefs.insert(valueRef);
		}

		void CleanupPendingKillScriptObjects()
		{
			std::lock_guard<std::mutex> guard(pendingKillRefsMutex);
			//il2cpp::os::AutoLock guard(&pendingKillRefsMutex);
			auto size = pendingKillRefs.size();
			if (size == 0)
			{
				return;
			}

			for (const auto& valueRef : pendingKillRefs)
			{
				apis->release_value_ref(valueRef);
			}

			pendingKillRefs.clear();
		}

		// 由于GC和弱引用时序无法确定，当先弱引用失效时，对导致dataCache和objectPool对不齐，dataCache数量少于objectPool，所以需要先查找判断
		int32_t RefCSObject(Il2CppObject* obj)
		{
			return objPoolAdd.CallWithInstance(obj);
		}

		void UnRefCSObject(int32_t idx)
		{
			objPoolRemove.CallWithInstance(idx);
		}
		struct pesapi_ffi* apis;
		pesapi_env_ref envRef;
		//il2cpp::os::Mutex pendingKillRefsMutex;
		std::mutex pendingKillRefsMutex;
		std::unordered_set<pesapi_value_ref> pendingKillRefs;
		/*PesapiValueRef pesapiValueRef;*/

		MethodInfoHelper<int32_t(Il2CppObject* obj)> objPoolAdd;
		MethodInfoHelper<Il2CppObject* (int32_t index)> objPoolRemove;
		static LuaEnvPrivate* instance;
	};
	LuaEnvPrivate* xlua::LuaEnvPrivate::instance = nullptr;

	// 对象被释放了，但是GC没有及时触发，释放是在tick里面，也有可能隔一帧，不会立即触发，所以有可能返回的对象不是需要的对象
	// 无论怎样实现都没办法保证
	// 获取时，应该增加一种校验机制，用来判断当前获取的对象是否是正确的。
	// Bug是，隔了很多帧之后，拿到了错误的对象，说明引用没有被释放掉，认为GC肯定是不会出错的，弱引用也肯定是不会出错的
	// 那么就是引用计数出了问题
	static Il2CppObject* FindOrCreateHandleStoreOfValue(struct pesapi_ffi* apis, pesapi_env env, int value, pesapi_value_ref* out_value_ref)
	{
		void* out_ptr;
		apis->get_private(env, value, &out_ptr);

		pesapi_value_ref value_ref = static_cast<pesapi_value_ref>(out_ptr);
		uint32_t handle = 0;
		Il2CppObject* obj = nullptr;
		if (value_ref)
		{
			handle = value_ref->handle;
			if (handle == 0)
			{
				xlua::XLuaLog(XLuaLogType::Error, "invalid internal_fields ptr:%p");
				apis->release_value_ref(value_ref);
				value_ref = nullptr;
			}
		}

		if (handle == 0)
		{
			value_ref = apis->create_value_ref(env, value);
		}
		else
		{
			obj = il2cpp::gc::GCHandle::GetTarget(value_ref->handle);
			// 对象被释放了，引用没有及时删掉
			if (obj == nullptr)
			{
				// 无论如何，这个对象应该被认为释放掉了，引用也不应该在使用了
				// 释放交给GC去做，这里只新建
				// 增加引用计数的时候，出现错误引用的情况，以为是GC时序导致的问题，增加校验之后，并没有触发
				// bug的源头是这里增加引用计数的问题
				// apis->duplicate_value_ref(value_ref);
				// apis->release_value_ref(value_ref);
				value_ref = apis->create_value_ref(env, value);
				xlua::XLuaLog(XLuaLogType::Warning, "[XLua]%d->%d->%d", value_ref->handle, value_ref->value_ref, value_ref->ref_count);
			}
			else
			{
				// 对象虽然没有被释放，但是很有可能摸的别的对象，因为在一帧内有可能被GC掉，然后又新建

			}
		}
		
		*out_value_ref = value_ref;
		return obj;
	}

	// 存储之前需要先校验已有的handle，如果有重复的认为是无效的
	// 所有的值引用在lua寄存器中存储，需要新增一个数据结构，频繁访问寄存器会很卡
	// 既然是查找，应该用handle作为key，value_ref作为value，那么是一个map
	static void ValidateHandleStoreOfValue(Il2CppObject* object, pesapi_value_ref value_ref, pesapi_ffi* apis, pesapi_env env, PObjectRefInfo* objectRefInfo)
	{
		/*if (LuaEnvPrivate::instance == nullptr)
		{
			XLuaLog(XLuaLogType::Error, "[XLua] LuaEnvPrivate::instance has been destroyed!");
			return;
		}*/
		auto handle = il2cpp::gc::GCHandle::GetTargetHandle(object, 0, il2cpp::gc::HANDLE_WEAK);
		il2cpp::vm::Exception::RaiseIfError(handle.GetError());
		//PesapiValueRef& cache = LuaEnvPrivate::instance->pesapiValueRef;
		//PesapiValueRef::iterator it = cache.find(handle.Get());
		//if (it != cache.end())
		//{
		//	// 这里仅仅设置为无效，销毁应该让GC去做
		//	// 实际测试中，这里一次没有触发！！！
		//	// 跟校验层没有关系，本质是在GC之前弱引用无效，引用计数增加，GC的时候把申请好的弱引用对象释放导致的。
		//	it->second->handle = 0;
		//}
		//cache[handle.Get()] = value_ref;
		value_ref->handle = handle.Get();
		SetPObjectRefInfoValue(apis, env, objectRefInfo, value_ref);
		//XLuaLog(XLuaLogType::Warning, "[XLua]%d->%d->%d->%s->%p", value_ref->handle, value_ref->value_ref, value_ref->ref_count, object->klass->name, object);
	}

	static Il2CppObject* FunctionToDelegate(struct pesapi_ffi* apis, pesapi_env env, int luaval, LuaClassInfoHeader* classInfo)
	{
		pesapi_value_ref value_ref;
		Il2CppObject* ret = FindOrCreateHandleStoreOfValue(apis, env, luaval, &value_ref);
		if (ret == nullptr)
		{
			PObjectRefInfo* delegateInfo;
			ret = (Il2CppObject*)DelegateAllocate(classInfo->TypeId, classInfo->DelegateBridge, &delegateInfo);
			ValidateHandleStoreOfValue(ret, value_ref, apis, env, delegateInfo);
		}
		return ret;
	}

	static void* DelegateCtorCallback(struct pesapi_ffi* apis, pesapi_callback_info info)
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

	int TryTranslateBuiltin(struct pesapi_ffi* apis, pesapi_env env, Il2CppObject* obj, bool& success)
	{
		if (obj)
		{
			success = true;
			if (obj->klass == xlua::g_typeofLuaTable)
			{
				PObjectRefInfo* objectInfo = GetPObjectRefInfo(obj);
				return GetPObjectRefInfoValue(apis, env, objectInfo);
			}
			if (obj->klass == xlua::g_typeofArrayBuffer)
			{
				Il2CppArray* buffer = reinterpret_cast<Il2CppArray*>(obj);

				return apis->create_binary(env, Array::GetFirstElementAddress(buffer), (size_t)buffer->max_length);
			}
		}
		success = false;
		return 0;
	}

	static pesapi_value TryTranslatePrimitivePtr(struct pesapi_ffi* apis, pesapi_env env, Il2CppTypeEnum type, void* ptr, bool &success)
	{
		success = true;
		switch (type)
		{
		case IL2CPP_TYPE_I1:
		{
			return apis->create_int32(env, (int32_t)(*((uint8_t*)ptr)));
		}
		case IL2CPP_TYPE_BOOLEAN:
		{
			return apis->create_boolean(env, (bool)(*((uint8_t*)ptr)));
		}
		case IL2CPP_TYPE_U1:
		{
			return apis->create_uint32(env, (uint32_t)(*((uint32_t*)ptr)));
		}
		case IL2CPP_TYPE_I2:
		{
			return apis->create_int32(env, (int32_t)(*((uint16_t*)ptr)));
		}
		case IL2CPP_TYPE_U2:
		{
			return apis->create_uint32(env, (uint32_t)(*((uint32_t*)ptr)));
		}
		case IL2CPP_TYPE_CHAR:
		{
			return apis->create_int32(env, (int32_t)(*((Il2CppChar*)ptr)));
		}
#if IL2CPP_SIZEOF_VOID_P == 4
		case IL2CPP_TYPE_I:
#endif
		case IL2CPP_TYPE_I4:
		{
			return apis->create_int32(env, (int32_t)(*((int32_t*)ptr)));
		}
#if IL2CPP_SIZEOF_VOID_P == 4
		case IL2CPP_TYPE_U:
#endif
		case IL2CPP_TYPE_U4:
		{
			return apis->create_uint32(env, (uint32_t)(*((uint32_t*)ptr)));
		}
#if IL2CPP_SIZEOF_VOID_P == 8
		case IL2CPP_TYPE_I:
#endif
		case IL2CPP_TYPE_I8:
		{
			return apis->create_int64(env, *((int64_t*)ptr));
		}
#if IL2CPP_SIZEOF_VOID_P == 8
		case IL2CPP_TYPE_U:
#endif
		case IL2CPP_TYPE_U8:
		{
			return apis->create_uint64(env, *((uint64_t*)ptr));
		}
		case IL2CPP_TYPE_R4:
		{
			return apis->create_double(env, (double)(*((float*)ptr)));
		}
		case IL2CPP_TYPE_R8:
		{
			return apis->create_double(env, *((double*)ptr));
		}

		default:
			success = false;
			return 0;
		}
	}
	static int TryTranslatePrimitiveWithClass(struct pesapi_ffi* apis, pesapi_env env, void* obj, Il2CppClass* klass, bool& success)
	{
		success = true;
		if (obj)
		{
			const Il2CppType* type = Class::GetType(klass);
			Il2CppTypeEnum t = type->type;
			if (t == IL2CPP_TYPE_STRING)
			{
				const Il2CppChar* utf16 = il2cpp::utils::StringUtils::GetChars((Il2CppString*)obj);
				std::string str = il2cpp::utils::StringUtils::Utf16ToUtf8(utf16);
				return apis->create_string_utf8(env, str.c_str(), str.size());
			}
			if (t == IL2CPP_TYPE_VALUETYPE && Class::IsEnum(klass))
			{
				const Il2CppType* tp = Class::GetEnumBaseType(klass);
				if (tp != nullptr)
				{
					t = tp->type;
				}
			}
			return TryTranslatePrimitivePtr(apis, env, t, obj, success);
		}
		success = false;
		return 0;
	}
	static int TryTranslatePrimitiveWithClass(struct pesapi_ffi* apis, pesapi_env env, Il2CppObject* obj, Il2CppClass* klass, bool& success)
	{
		if (obj)
		{
			success = true;
			const Il2CppType* type = Class::GetType(klass ? klass : obj->klass);
			Il2CppTypeEnum t = type->type;
			if (t == IL2CPP_TYPE_STRING)
			{
				const Il2CppChar* utf16 = il2cpp::utils::StringUtils::GetChars((Il2CppString*)obj);
				std::string str = il2cpp::utils::StringUtils::Utf16ToUtf8(utf16);
				return apis->create_string_utf8(env, str.c_str(), str.size());
			}
			if (t == IL2CPP_TYPE_VALUETYPE && Class::IsEnum(obj->klass))
			{
				const Il2CppType* tp = Class::GetEnumBaseType(obj->klass);
				if (tp != nullptr)
				{
					t = tp->type;
				}
			}
			void* ptr = Object::Unbox(obj);
			return TryTranslatePrimitivePtr(apis, env, t, ptr, success);
		}
		success = false;
		return 0;
	}
	int TranslateValueType(struct pesapi_ffi* apis, pesapi_env env, Il2CppClass* targetClass, void* obj)
	{
		auto len = targetClass->native_size;
		if (len < 0)
		{
			len = targetClass->instance_size - sizeof(Il2CppObject);
		}

		auto buff = new uint8_t[len];
		memcpy(buff, obj, len);
		return apis->native_object_to_value(env, targetClass, buff, true);
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

	int TryTranslateValueType(struct pesapi_ffi* apis, pesapi_env env, Il2CppObject* obj, bool& success)
	{
		success = true;
		if (obj && obj->klass)
		{
			auto objClass = obj->klass;
			if (Class::IsValuetype(objClass))
			{
				return TranslateValueType(apis, env, objClass, obj);
			}
		}
		success = false;
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

	static Il2CppObject* LuaTableToCSArray(struct pesapi_ffi* apis, Il2CppClass* klass, pesapi_env env, int luaval)
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
			case IL2CPP_TYPE_BOOLEAN:
			{
				bool v = apis->get_value_bool(env, -1);
				memcpy(elementAddress, &v, elementSize);
			}
			break;
			case IL2CPP_TYPE_CHAR:
			{
				Il2CppChar v = static_cast<Il2CppChar>(apis->get_value_uint32(env, -1));
				memcpy(elementAddress, &v, elementSize);
			}
			break;
			case IL2CPP_TYPE_I1:
			{
				int8_t v = static_cast<int8_t>(apis->get_value_int32(env, -1));
				memcpy(elementAddress, &v, elementSize);
			}
			break;
			case IL2CPP_TYPE_I2:
			{
				int16_t v = static_cast<int16_t>(apis->get_value_int32(env, -1));
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
			case IL2CPP_TYPE_I:
#endif
			case IL2CPP_TYPE_I8:
			{
				int64_t v = apis->get_value_int64(env, -1);
				memcpy(elementAddress, &v, elementSize);
			}
			break;
			case IL2CPP_TYPE_U1:
			{
				uint8_t v = static_cast<uint8_t>(apis->get_value_uint32(env, -1));
				memcpy(elementAddress, &v, elementSize);
			}
			break;
			case IL2CPP_TYPE_U2:
			{
				uint16_t v = static_cast<uint16_t>(apis->get_value_uint32(env, -1));
				memcpy(elementAddress, &v, elementSize);
			}
			break;
#if IL2CPP_SIZEOF_VOID_P == 4
			case IL2CPP_TYPE_U:
#endif
			case IL2CPP_TYPE_U4:
			{
				uint32_t v = apis->get_value_uint32(env, -1);
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
			case IL2CPP_TYPE_ARRAY:
			case IL2CPP_TYPE_SZARRAY:
			case IL2CPP_TYPE_CLASS:
			case IL2CPP_TYPE_OBJECT:
			case IL2CPP_TYPE_FNPTR:
			case IL2CPP_TYPE_PTR:
			case IL2CPP_TYPE_VALUETYPE:
			case IL2CPP_TYPE_GENERICINST:
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
					if ((elementClass == xlua::g_typeofArrayBuffer) && apis->is_binary(env, -1))
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
						if (elementClass == xlua::g_typeofLuaTable || elementClass == il2cpp_defaults.object_class)
						{
							pesapi_value_ref value_ref;
							
							Il2CppObject* ret = FindOrCreateHandleStoreOfValue(apis, env, -1, &value_ref);
							
							if (ret == nullptr)
							{
								ret = il2cpp::vm::Object::New(xlua::g_typeofLuaTable);

								const MethodInfo* ctor = il2cpp_class_get_method_from_name(xlua::g_typeofLuaTable, ".ctor", 0);
								typedef void (*NativeCtorPtr)(Il2CppObject* ___this, const MethodInfo* method);
								((NativeCtorPtr)ctor->methodPointer)(ret, ctor);
								PObjectRefInfo* objectInfo = GetPObjectRefInfo(ret);
								ValidateHandleStoreOfValue(ret, value_ref, apis, env, objectInfo);
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
			data.i1 = (int8_t)apis->get_value_int32(env, luaval);
			break;
		}
		case IL2CPP_TYPE_BOOLEAN:
		{
			data.u1 = (uint8_t)apis->get_value_bool(env, luaval);
			break;
		}
		case IL2CPP_TYPE_U1:
		{
			data.u1 = (uint8_t)apis->get_value_uint32(env, luaval);
			break;
		}
		case IL2CPP_TYPE_I2:
		{
			data.i2 = (int16_t)apis->get_value_int32(env, luaval);
			break;
		}
		case IL2CPP_TYPE_U2:
		{
			data.u2 = (uint16_t)apis->get_value_uint32(env, luaval);
			break;
		}
		case IL2CPP_TYPE_CHAR:
		{
			data.c = (Il2CppChar)apis->get_value_uint32(env, luaval);
			break;
		}
#if IL2CPP_SIZEOF_VOID_P == 4
		case IL2CPP_TYPE_I:
#endif
		case IL2CPP_TYPE_I4:
		{
			data.i4 = (int32_t)apis->get_value_int32(env, luaval);
			break;
		}
#if IL2CPP_SIZEOF_VOID_P == 4
		case IL2CPP_TYPE_U:
#endif
		case IL2CPP_TYPE_U4:
		{
			data.u4 = (uint32_t)apis->get_value_uint32(env, luaval);
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
			data.r4 = (float)apis->get_value_double(env, luaval);
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
				return (Il2CppObject*)il2cpp::vm::String::NewWrapper(str);
			}
			std::vector<char> buff;
			buff.resize(bufsize + 1);
			str = apis->get_value_string_utf8(env, luaval, buff.data(), &bufsize);
			if (str)
			{
				buff[bufsize] = '\0';
				return (Il2CppObject*)il2cpp::vm::String::NewWrapper(str);
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
					LuaClassInfoHeader* luaClassInfo = (LuaClassInfoHeader*)pesapi_get_class_data(klass, true);
					if (!luaClassInfo)
					{
						Exception::Raise(Exception::GetInvalidOperationException("call not load type of delegate"));
					}
					return FunctionToDelegate(apis, env, luaval, luaClassInfo);
				}
			}
			auto ptr = (Il2CppObject*)apis->get_native_object_ptr(env, luaval);
			if (!ptr)
			{
				if (apis->is_binary(env, luaval))
				{
					if (klass == xlua::g_typeofArrayBuffer)
					{
						size_t length;
						void* binary = apis->get_value_binary(env, luaval, &length);
						Il2CppArray* clone = (Il2CppArray*)il2cpp::vm::Array::NewFull(klass, &length, NULL);
						const uint32_t elem_size = il2cpp::vm::Array::GetElementSize(klass);
						memcpy(il2cpp::vm::Array::GetFirstElementAddress(clone), binary, elem_size * length);
						return clone;
					}
					// 现在有三种字符串，string，这个直接转il2cppString；
					// byte,这个直接转byte[]
					// IntPtr,这个裸指针，其它都不支持，不然一定会crash
					if (klass == xlua::g_typeofIntPtr)
					{
						size_t length;
						void* binary = apis->get_value_binary(env, luaval, &length);
						return Object::Box(klass, binary);
					}
				}
				if (apis->is_object(env, luaval))
				{
					if (klass == xlua::g_typeofLuaTable || klass == il2cpp_defaults.object_class)
					{
						pesapi_value_ref value_ref;
						Il2CppObject* ret = FindOrCreateHandleStoreOfValue(apis, env, luaval, &value_ref);
						
						if (ret == nullptr)
						{
							ret = il2cpp::vm::Object::New(xlua::g_typeofLuaTable);

							const MethodInfo* ctor = il2cpp_class_get_method_from_name(xlua::g_typeofLuaTable, ".ctor", 0);
							typedef void (*NativeCtorPtr)(Il2CppObject* ___this, const MethodInfo* method);
							((NativeCtorPtr)ctor->methodPointer)(ret, ctor);
							PObjectRefInfo* objectInfo = GetPObjectRefInfo(ret);
							ValidateHandleStoreOfValue(ret, value_ref, apis, env, objectInfo);
						}
						return ret;
					}
					if (t == IL2CPP_TYPE_SZARRAY)
					{
						return LuaTableToCSArray(apis, klass, env, luaval);
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
			auto objClass = (Il2CppClass*)apis->get_native_object_typeid(env, luaval);
			if (Class::IsAssignableFrom(klass, objClass))
			{
				return Class::IsValuetype(objClass) ? Object::Box(objClass, ptr) : (Il2CppObject*)ptr;
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
				auto objClass = (Il2CppClass*)apis->get_native_object_typeid(env, luaval);
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

	int CSValueToLuaValue(struct pesapi_ffi* apis, pesapi_env env, Il2CppClass* targetClass, void* obj)
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
		bool success = false;
		int luaVal = TryTranslatePrimitiveWithClass(apis, env, obj, targetClass != il2cpp_defaults.object_class ? targetClass : nullptr, success);

		if (success)
		{
			return luaVal;
		}
		return TranslateValueType(apis, env, targetClass, obj);
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
		bool success = false;
		int luaVal = TryTranslatePrimitiveWithClass(apis, env, obj, targetClass != il2cpp_defaults.object_class ? targetClass : nullptr, success);

		if (success)
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
		
		luaVal = TryTranslateValueType(apis, env, obj, success);
		if (success)
		{
			return luaVal;
		}

		luaVal = TryTranslateBuiltin(apis, env, obj, success);

		if (success)
		{
			return luaVal;
		}

		auto objClass = obj && obj->klass ? obj->klass : targetClass;
		return apis->native_object_to_value(env, objClass, obj, false);
	}

	static bool NullableHasValue(Il2CppClass* klass, void* data)
	{
		uint8_t* hasValueByte = static_cast<uint8_t*>(data);
		return *hasValueByte != 0;
	}

	pesapi_value CSValueTypePtrToLuaValue(struct pesapi_ffi* apis, pesapi_env env, Il2CppClass* targetClass, void* ptr)
	{
		if (targetClass == il2cpp_defaults.void_class) return apis->create_undefined(env);
		if (!ptr) return apis->create_null(env);

		if (!targetClass)
		{
			targetClass = il2cpp_defaults.object_class;
		}

		bool isNullable = Class::IsNullable(targetClass);

		if (isNullable)
		{
			if (!NullableHasValue(targetClass, ptr))
			{
				return apis->create_null(env);
			}
			uint8_t* valueStart = static_cast<uint8_t*>(ptr);
			int32_t nullableShift = targetClass->fields[1].offset - sizeof(Il2CppObject);
			valueStart += nullableShift;
			ptr = valueStart;
		}

		if (Class::IsEnum(targetClass))
		{
			targetClass = Class::GetElementClass(targetClass);
		}
		const Il2CppType* type = Class::GetType(targetClass);
		bool success = false;
		pesapi_value luaVal = TryTranslatePrimitivePtr(apis, env, type->type, ptr, success);

		if (success)
		{
			return luaVal;
		}

		auto len = targetClass->native_size;
		if (len < 0)
		{
			len = targetClass->instance_size - sizeof(Il2CppObject);
		}

		auto buff = new uint8_t[len];
		memcpy(buff, ptr, len);
		return apis->native_object_to_value(env, targetClass, buff, true);
	}

	static bool GetValueTypeFromLua(struct pesapi_ffi* apis, pesapi_env env, int luaValue, Il2CppClass* klass, void*& storage)
	{
		bool hasValue = false;
		uint32_t valueSize = klass->instance_size - sizeof(Il2CppObject);
		if (!luaValue)
			return false;
		void* ptr;
		if (apis->is_userdata(env, luaValue) && (ptr = apis->get_native_object_ptr(env, luaValue)))
		{
			auto objClass = (Il2CppClass*)apis->get_native_object_typeid(env, luaValue);
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
					data.i1 = (int8_t)apis->get_value_int32(env, luaValue);
					hasValue = true;
				}
				break;
			}
			case IL2CPP_TYPE_BOOLEAN:
			{
				if (apis->is_boolean(env, luaValue))
				{
					data.u1 = (uint8_t)apis->get_value_bool(env, luaValue);
					hasValue = true;
				}
				break;
			}
			case IL2CPP_TYPE_U1:
			{
				if (apis->is_uint32(env, luaValue))
				{
					data.u1 = (uint8_t)apis->get_value_uint32(env, luaValue);
					hasValue = true;
				}
				break;
			}
			case IL2CPP_TYPE_I2:
			{
				if (apis->is_int32(env, luaValue))
				{
					data.i2 = (int16_t)apis->get_value_int32(env, luaValue);
					hasValue = true;
				}
				break;
			}
			case IL2CPP_TYPE_U2:
			{
				if (apis->is_uint32(env, luaValue))
				{
					data.u2 = (uint16_t)apis->get_value_uint32(env, luaValue);
					hasValue = true;
				}
				break;
			}
			case IL2CPP_TYPE_CHAR:
			{
				if (apis->is_uint32(env, luaValue))
				{
					data.c = (Il2CppChar)apis->get_value_uint32(env, luaValue);
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
					data.r4 = (float)apis->get_value_double(env, luaValue);
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
			{
				if (type->type == IL2CPP_TYPE_VALUETYPE && Type::IsEnum(type))
				{
					t = Class::GetEnumBaseType(Type::GetClass(type))->type;
					goto handle_underlying;
				}
				break;
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

	static bool ReflectionWrapper(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData)
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
				bool hasDefault = parameterType->attrs && PARAM_ATTRIBUTE_HAS_DEFAULT;
				bool isLastArgument = i == (method->parameters_count - 1);
				Il2CppClass* parameterKlass = Class::FromIl2CppType(parameterType);
				Class::Init(parameterKlass);
				int luaValue = apis->get_arg(info, i - csArgStart);

				if ((hasDefault || (isLastArgument && hasParamArray)) && apis->is_undefined(env, luaValue))
				{
					continue;
				}
				int t;
				if (isLastArgument && hasParamArray)
					t = (int)parameterKlass->element_class->byval_arg.type;
				else
					t = parameterType->type;
			handle_underlying:
				switch (t)
				{
				case IL2CPP_TYPE_I1:
				case IL2CPP_TYPE_I2:
#if IL2CPP_SIZEOF_VOID_P == 4
				case IL2CPP_TYPE_I:
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
					if (!(apis->is_string(env, luaValue) || apis->is_null(env, luaValue) || apis->is_undefined(env, luaValue)))
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
					if (apis->is_function(env, luaValue) && DataTransfer::IsDelegate(parameterKlass))
					{
						continue;
					}
					if (parameterKlass == il2cpp_defaults.object_class)
					{
						continue;
					}
					auto ptr = apis->get_native_object_ptr(env, luaValue);
					if (ptr)
					{
						auto objClass = (Il2CppClass*)apis->get_native_object_typeid(env, luaValue);
						if (!Class::IsAssignableFrom(parameterKlass, objClass))
						{
							return false;
						}
					}
					else if (!apis->is_null(env, luaValue) && !apis->is_undefined(env, luaValue))
					{
						return false;
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
						auto objClass = (Il2CppClass*)apis->get_native_object_typeid(env, luaValue);
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
		size_t argsSize = sizeof(void*) * method->parameters_count;
		void** args = method->parameters_count > 0 ? (void**)alloca(argsSize) : nullptr;
		if (args != nullptr)
			memset(args, 0, argsSize);
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
			bool isLastArgument = i == (method->parameters_count - 1);
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
						void* storage = addr + valueSize * (j - 1 + csArgStart);
						GetValueTypeFromLua(apis, env, apis->get_arg(info, j), elementType, storage);
					}
				}
				else
				{
					for (int j = luaParamStart; j < lua_args_len; j++)
					{
						il2cpp_array_setref(array, j - i + csArgStart, LuaValueToCSRef(apis, elementType, env, apis->get_arg(info, j)));
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
					luaValue = LuaObjectUnRef(apis, env, luaValue);
					auto underlyClass = Class::FromIl2CppType(&parameterKlass->byval_arg);
					size_t storageSize = underlyClass->instance_size - sizeof(Il2CppObject);
					void* storage = alloca(storageSize);
					memset(storage, 0, storageSize);
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
					if (parameterKlass == xlua::g_typeofIntPtr && apis->is_binary(env, luaValue))
					{
						size_t length;
						void** arg = (void**)alloca(sizeof(void*));
						*arg = apis->get_value_binary(env, luaValue, &length);
						args[i] = arg;
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
			}
			else if (passedByReference)
			{
				returnCount++;
				void** arg = (void**)alloca(sizeof(void*));
				*arg = nullptr;
				auto underlyClass = Class::FromIl2CppType(&parameterKlass->byval_arg);
				luaValue = LuaObjectUnRef(apis, env, luaValue);
				if (luaValue)
				{
					auto ptr = apis->get_native_object_ptr(env, luaValue);
					if (ptr)
					{
						auto objClass = (Il2CppClass*)apis->get_native_object_typeid(env, luaValue);
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

		//Il2CppObject* ret = Runtime::InvokeWithThrow(method, self, args); //返回ValueType有boxing
		void* returnValue = NULL;
		bool returnIsValueType = false;
		Il2CppClass* returnType = Class::FromIl2CppType(method->return_type);
		if (method->return_type->type == IL2CPP_TYPE_VOID)
		{
			method->invoker_method(method->methodPointer, method, self, args, NULL);
		}
		else
		{
			if (method->return_type->valuetype)
			{
				Class::Init(returnType);
				returnValue = alloca(returnType->instance_size - sizeof(Il2CppObject));
				method->invoker_method(method->methodPointer, method, self, args, returnValue);
				returnIsValueType = true;
			}
			else
			{
				method->invoker_method(method->methodPointer, method, self, args, &returnValue);
				if (method->return_type->byref)
				{
					if (Class::IsValuetype(returnType))
					{
						returnIsValueType = true;
					}
					else
					{
						returnValue = *(Il2CppObject**)returnValue;
					}
				}
			}
		}

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
				if (Class::IsValuetype(underlyClass))
				{
					returnValueArray[idx++] = CSValueToLuaValue(apis, env, underlyClass, args[i]);
				}
				else
				{
					Il2CppObject* ptr = (Il2CppObject*)(((uint8_t*)args[i]) - sizeof(Il2CppObject));
					returnValueArray[idx++] = CSRefToLuaValue(apis, env, underlyClass, ptr);
				}
			}
			else if (passedByReference)
			{
				Il2CppObject** arg = (Il2CppObject**)args[i];
				auto underlyClass = Class::FromIl2CppType(&parameterKlass->byval_arg);
				returnValueArray[idx++] = CSRefToLuaValue(apis, env, underlyClass, *arg);
			}
			else if (parameterKlass->byval_arg.type == IL2CPP_TYPE_PTR)
			{
				auto underlyClass = Class::FromIl2CppType(&parameterKlass->element_class->byval_arg);
				Il2CppObject* ptr = (Il2CppObject*)(((uint8_t*)args[i]) - sizeof(Il2CppObject));
				LuaObjectSetRef(apis, env, luaValue, CSRefToLuaValue(apis, env, underlyClass, ptr));
			}
		}

		//auto returnType = Class::FromIl2CppType(method->return_type);
		int retValue = 0;
		if (method->return_type->type != IL2CPP_TYPE_VOID)
		{
			if (returnIsValueType)
			{
				retValue = CSValueTypePtrToLuaValue(apis, env, returnType, returnValue);
			}
			else
			{
				Il2CppObject* ptr = (Il2CppObject*)returnValue;
				retValue = CSRefToLuaValue(apis, env, returnType, ptr);
			}
		}

		if (retValue != 0)
		{
			apis->add_return(info, retValue);
		}
		for (int i = 0; i < returnCount; i++)
		{
			apis->add_return(info, returnValueArray[i]);
		}
		delete returnValueArray;
		return true;
	}

	static void ReflectionGetFieldWrapper(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* field, size_t offset, Il2CppClass* fieldType)
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
				storage = (char*)csThis + offset;
			}
			if (!storage)
			{
				storage = alloca(expectType->instance_size - sizeof(Il2CppObject));
				GetFieldValue(csThis, field, offset, storage);
				isFieldPtr = false;
			}

			Il2CppObject* obj = (Il2CppObject*)storage - 1;
			bool success = false;
			int luaVal = TryTranslatePrimitiveWithClass(apis, env, obj, expectType, success);

			if (!success)
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

			if (success)
			{
				apis->add_return(info, luaVal);
			}
		}
		else
		{
			void* storage = nullptr;
			GetFieldValue(csThis, field, offset, &storage);
			apis->add_return(info, CSRefToLuaValue(apis, env, fieldType, (Il2CppObject*)storage));
		}
	}

	static void ReflectionSetFieldWrapper(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* field, size_t offset, Il2CppClass* fieldType)
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

		pesapi_value_ref value_ref;
		apis->create_object(env);
		Il2CppObject* ret = FindOrCreateHandleStoreOfValue(apis, env, -1, &value_ref);

		if (ret == nullptr)
		{
			ret = il2cpp::vm::Object::New(xlua::g_typeofLuaTable);
			const MethodInfo* ctor = il2cpp_class_get_method_from_name(xlua::g_typeofLuaTable, ".ctor", 0);
			typedef void (*NativeCtorPtr)(Il2CppObject* ___this, const MethodInfo* method);
			((NativeCtorPtr)ctor->methodPointer)(ret, ctor);
			PObjectRefInfo* objectInfo = GetPObjectRefInfo(ret);
			ValidateHandleStoreOfValue(ret, value_ref, apis, env, objectInfo);
		}

		return ret;
	}

	Il2CppObject* GetGlobalTable(struct pesapi_ffi* apis, intptr_t ptr)
	{
		pesapi_env_ref envRef = reinterpret_cast<pesapi_env_ref>(ptr);
		auto env = apis->get_env_from_ref(envRef);
		AutoValueScope value_scope(apis, env);
		pesapi_value_ref value_ref = nullptr;
		apis->global(env);
		Il2CppObject* ret = FindOrCreateHandleStoreOfValue(apis, env, -1, &value_ref);
		if (ret == nullptr)
		{
			ret = il2cpp::vm::Object::New(xlua::g_typeofLuaTable);
			const MethodInfo* ctor = il2cpp_class_get_method_from_name(xlua::g_typeofLuaTable, ".ctor", 0);
			typedef void (*NativeCtorPtr)(Il2CppObject* ___this, const MethodInfo* method);
			((NativeCtorPtr)ctor->methodPointer)(ret, ctor);
			PObjectRefInfo* objectInfo = GetPObjectRefInfo(ret);
			ValidateHandleStoreOfValue(ret, value_ref, apis, env, objectInfo);
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
		uint8_t* code = (uint8_t*)il2cpp_array_addr_with_size(__code, il2cpp_array_element_size(__code->klass), 0);
		pesapi_value_ref value_ref = luaEnvRef == nullptr ? nullptr : GetPObjectRefInfo(luaEnvRef)->ValueRef;
		auto ret = apis->loadstring(env, code, codeSize, path.c_str(), value_ref);

		if (apis->has_caught(env))
		{
			Exception::Raise(Exception::GetInvalidOperationException(apis->get_exception_as_string(env, true)));
			return nullptr;
		}
		return LuaValueToCSRef(apis, il2cpp_codegen_class_from_type(__type->type), env, ret);
	}

	Il2CppObject* DoString(struct pesapi_ffi* apis, intptr_t ptr, Il2CppArray* __code, Il2CppString* __path, Il2CppObject* luaEnvRef, Il2CppReflectionType* __type)
	{
		pesapi_env_ref envRef = reinterpret_cast<pesapi_env_ref>(ptr);
		auto env = apis->get_env_from_ref(envRef);
		AutoValueScope ValueScope(apis, env);

		const Il2CppChar* utf16 = il2cpp::utils::StringUtils::GetChars(__path);
		std::string path = il2cpp::utils::StringUtils::Utf16ToUtf8(utf16);

		auto codeSize = il2cpp_array_length(__code);
		uint8_t* code = (uint8_t*)il2cpp_array_addr_with_size(__code, il2cpp_array_element_size(__code->klass), 0);
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

	static void* OnCsObjectEnter(Il2CppObject* obj, void* class_data, LuaEnvPrivate* luaEnvPrivate)
	{
		return reinterpret_cast<void*>(luaEnvPrivate->RefCSObject(obj));
	}

	static void OnCsObjectExit(Il2CppObject* ptr, LuaClassInfo* class_data, LuaEnvPrivate* luaEnvPrivate, void* userdata)
	{
		intptr_t idx = reinterpret_cast<intptr_t>(userdata);
		if (luaEnvPrivate)
			luaEnvPrivate->UnRefCSObject(idx);
		if (g_typeofILuaGCInterface && Class::IsAssignableFrom(g_typeofILuaGCInterface, class_data->TypeId))
		{
			const MethodInfo* onLuaGC = il2cpp::vm::Class::GetMethodFromName(class_data->TypeId, "OnLuaGC", 0);
			Il2CppException* exception = NULL;
			il2cpp::vm::Runtime::Invoke(onLuaGC, ptr, NULL, &exception);
			if (exception != NULL)
			{
				il2cpp::vm::Exception::Raise(exception);
			}
		}
	}

	static void FreeCSharpMethodInfo(CSharpMethodInfo* csharpMethodInfo)
	{
		if (csharpMethodInfo)
		{
			for (int i = 0; i < csharpMethodInfo->OverloadDatas.size(); ++i)
			{
				free(csharpMethodInfo->OverloadDatas[i]);
			}
			delete csharpMethodInfo;
		}
	}

	static void FunctionFinalize(struct pesapi_ffi* apis, void* data, void* env_private)
	{
		if (env_private)
			FreeCSharpMethodInfo((CSharpMethodInfo*)data);
	}

	static bool IsPrimitive(Il2CppTypeEnum type)
	{
		return (type >= IL2CPP_TYPE_BOOLEAN && type <= IL2CPP_TYPE_R8) || type == IL2CPP_TYPE_I || type == IL2CPP_TYPE_U;
	}

	static bool TypeInfoPassToLuaFilter(const Il2CppType* type, Il2CppClass* klass)
	{
		if (klass == xlua::g_typeofIntPtr)
		{
			return true;
		}
		return klass != il2cpp_defaults.void_class && !IsPrimitive(type->type) && IL2CPP_TYPE_ENUM != type->type && !Type::IsEnum(type) && Class::GetParent(klass) != il2cpp_defaults.enum_class;
	}

	static void SetParamArrayFlagAndOptionalNum(WrapData* data, const MethodInfo* method)
	{
		data->HasParamArray = HasParamArray(method);
		data->OptionalNum = 0;

		for (uint32_t i = 0; i < method->parameters_count; ++i)
		{
			if (method->parameters[i]->attrs & PARAM_ATTRIBUTE_OPTIONAL)
			{
				++data->OptionalNum;
			}
		}
	}

	static WrapData* CreateOverloadData(const MethodInfo* method, bool isExtensionMethod)
	{
		bool isStatic = !Method::IsInstance(method) && !isExtensionMethod;
		std::vector<Il2CppClass*> usedTypes;
		const Il2CppType* type = Method::GetReturnType(method);
		Il2CppClass* klass = il2cpp_codegen_class_from_type(type);
		if (TypeInfoPassToLuaFilter(type, klass))
		{
			usedTypes.push_back(klass);
		}
		size_t paramCount = Method::GetParamCount(method);
		for (size_t index = isExtensionMethod ? 1 : 0; index < paramCount; ++index)
		{
			type = Method::GetParam(method, index);
			klass = il2cpp_codegen_class_from_type(type);
			if (TypeInfoPassToLuaFilter(type, klass))
			{
				usedTypes.push_back(klass);
			}
		}
		/*if (strcmp(method->name, "set_Item") == 0 && strcmp(method->klass->name, "Dictionary`2") == 0)
		{
			if (usedTypes.size() == 2 && strcmp(usedTypes[0]->name, "String") == 0 && strcmp(usedTypes[1]->name, "GameObject") == 0)
			{
				int a = 0;
			}
		}*/
		int allocSize = sizeof(xlua::WrapData) + sizeof(void*) * usedTypes.size();
		xlua::WrapData* overloadData = (xlua::WrapData*)malloc(allocSize);
		memset(overloadData, 0, allocSize);
		overloadData->Method = const_cast<MethodInfo*>(method);
		overloadData->MethodPointer = GetMethodPointer(method);

		try
		{
			std::string signature = GetMethodSignature(method, false, isExtensionMethod);
			overloadData->Wrap = FindWrapFunc(signature.c_str());
		}
		catch (Il2CppExceptionWrapper& exception)
		{
		}
		if (!overloadData->Wrap)
		{
			overloadData->Wrap = &ReflectionWrapper;
		}
		SetParamArrayFlagAndOptionalNum(overloadData, method);
		overloadData->IsExtensionMethod = isExtensionMethod;
		overloadData->IsStatic = isStatic;
		memcpy(overloadData->TypeInfos, usedTypes.data(), sizeof(void*) * usedTypes.size());

		return overloadData;
	}

	static void createFunctionWrapper(struct pesapi_ffi* apis, pesapi_callback_info info)
	{
		pesapi_env env = apis->get_env(info);
		int argc = apis->get_args_len(info);
		CSharpMethodInfo* csharpMethodInfo = nullptr;
		for (int i = 0; i < argc; ++i)
		{
			Il2CppReflectionMethod* reflectionMethod = (Il2CppReflectionMethod*)apis->get_native_object_ptr(env, apis->get_arg(info, i));
			if (!reflectionMethod || !Class::IsAssignableFrom(il2cpp_defaults.method_info_class, reflectionMethod->object.klass))
			{
				apis->throw_by_string(info, "expect a MethodInfo");
				FreeCSharpMethodInfo(csharpMethodInfo);
				return;
			}
			else
			{
				bool isStatic = !il2cpp::vm::Method::IsInstance(reflectionMethod->method);
				bool needBoxing = reflectionMethod->method->klass == il2cpp_defaults.object_class;
				if (csharpMethodInfo == nullptr)
				{
					csharpMethodInfo = new CSharpMethodInfo{ std::string(reflectionMethod->method->name), isStatic, false, false, needBoxing };
				}
				csharpMethodInfo->OverloadDatas.push_back(CreateOverloadData(reflectionMethod->method, IsExtensionMethod(reflectionMethod->method)));
			}
		}
		if (csharpMethodInfo)
		{
			csharpMethodInfo->OverloadDatas.push_back(nullptr);
			auto func = apis->create_function(env, MethodCallback, csharpMethodInfo, FunctionFinalize);
			apis->add_return(info, func);
		}
	}

	static void LoadTypeWrapper(struct pesapi_ffi* apis, pesapi_callback_info info)
	{
		pesapi_env env = apis->get_env(info);
		Il2CppObject* type = (Il2CppObject*)apis->get_native_object_ptr(env, apis->get_arg(info, 0));
		size_t size;
		auto type_id = CSharpTypeToTypeId(type);
		if (!type_id)
		{
			apis->throw_by_string(info, "expect a Type");
			return;
		}
		auto ret = apis->create_class(env, type_id);
		apis->add_return(info, ret);
	}

	xlua::LuaEnvPrivate* InitialPapiEnvRef(struct pesapi_ffi* apis, pesapi_env_ref envRef, Il2CppObject *objPool, Il2CppReflectionMethod* objPoolAddMethodInfo, Il2CppReflectionMethod* objPoolRemoveMethodInfo)
	{
		auto env = apis->get_env_from_ref(envRef);
		xlua::AutoValueScope ValueScope(apis, env);
		if (xlua::LuaEnvPrivate::instance != nullptr)
		{
			xlua::XLuaLog(XLuaLogType::Error, "LuaEnvPrivate is exist!");
			return nullptr;
		}
		auto luaEnvPrivate = new xlua::LuaEnvPrivate(apis, envRef, objPool, objPoolAddMethodInfo, objPoolRemoveMethodInfo);
		apis->set_env_private(env, luaEnvPrivate);
		auto loadType = apis->create_function(env, LoadTypeWrapper, nullptr, nullptr);
		auto createFunction = apis->create_function(env, createFunctionWrapper, nullptr, nullptr);
		if (loadType && createFunction)
		{
			int global = apis->global(env);
			if (global)
			{
				apis->set_property(env, global, "loadType", loadType);
				apis->set_property(env, global, "createFunction", createFunction);
				pesapi_on_class_not_found(ClassNotFoundCallback);
				return luaEnvPrivate;
			}
		}
		Exception::Raise(Exception::GetInvalidOperationException("can not init global.loadType or global.createFunction"));
	}

	void CleanupPapiEnvRef(struct pesapi_ffi* apis, pesapi_env_ref envRef)
	{
		apis->release_env_ref(envRef);
	}

	void DestroyLuaEnvPrivate()
	{
		if (xlua::LuaEnvPrivate::instance == nullptr)
		{
			xlua::XLuaLog(XLuaLogType::Error, "LuaEnvPrivate already destroy!");
			return;
		}
		delete xlua::LuaEnvPrivate::instance;
	}

	Il2CppClass* GenericParamGetBaseType(Il2CppMetadataGenericParameterHandle gparam)
	{
		Il2CppClass** constraints = Class::GetOrCreateMonoGenericParameterInfo(gparam)->constraints;

		Il2CppClass* base_class = il2cpp_defaults.object_class;

		if (constraints)
		{
			for (int i = 0; constraints[i]; ++i)
			{
				Il2CppClass* constraint = constraints[i];

				if (Class::IsInterface(constraint))
				{
					continue;
				}

				Il2CppType* constraint_type = &constraint->byval_arg;
				if (constraint_type->type == IL2CPP_TYPE_VAR || constraint_type->type == IL2CPP_TYPE_MVAR)
				{
					Il2CppMetadataGenericParameterHandle constraint_param = constraint_type->data.genericParameterHandle;
					Il2CppGenericParameterInfo constraint_info = MetadataCache::GetGenericParameterInfo(constraint_param);
					if ((constraint_info.flags & IL2CPP_GENERIC_PARAMETER_ATTRIBUTE_REFERENCE_TYPE_CONSTRAINT) == 0 &&
						(constraint_info.flags & IL2CPP_GENERIC_PARAMETER_ATTRIBUTE_NOT_NULLABLE_VALUE_TYPE_CONSTRAINT) == 0)
					{
						continue;
					}
				}

				base_class = constraint;
			}
		}

		if (base_class == il2cpp_defaults.object_class)
		{
			Il2CppGenericParameterInfo gparamInfo = MetadataCache::GetGenericParameterInfo(gparam);
			if ((gparamInfo.flags & IL2CPP_GENERIC_PARAMETER_ATTRIBUTE_NOT_NULLABLE_VALUE_TYPE_CONSTRAINT) != 0)
			{
				base_class = il2cpp_defaults.value_type_class;
			}
		}

		return base_class;
	}

	static const MethodInfo* MakeGenericMethodByConstraintedArguments(const MethodInfo* method)
	{
		if (!Method::IsGeneric(method) || Method::IsInflated(method))
		{
			return method;
		}

		Il2CppMetadataGenericContainerHandle containerHandle = MetadataCache::GetGenericContainerFromMethod(method->methodMetadataHandle);

		uint32_t count = MetadataCache::GetGenericContainerCount(containerHandle);
		const Il2CppType** genericArguments = (const Il2CppType**)alloca(count * sizeof(Il2CppType*));

		for (uint32_t i = 0; i < count; i++)
		{
			Il2CppMetadataGenericParameterHandle param = GenericContainer::GetGenericParameter(containerHandle, i);
			genericArguments[i] = &(GenericParamGetBaseType(param)->byval_arg);
		}
		return MetadataCache::GetGenericInstanceMethod(method, genericArguments, count);
	}

	bool RegisterType(Il2CppClass* oklass)
	{
		Class::Init(oklass);

		if (pesapi_get_class_data(oklass, false))
		{
			return true;
		}

		bool isDelegate = IsDelegate(oklass);

		LuaClassInfo* classInfo = new LuaClassInfo();
		classInfo->Name = oklass->name;
		classInfo->TypeId = oklass;
		classInfo->SuperTypeId = Class::GetParent(oklass);
		classInfo->IsValueType = Class::IsValuetype(oklass);

		auto AddMethod = [&](const MethodInfo* method, bool isGetter, bool isSetter, const char* name) -> bool
			{
				bool isExtensionMethod = IsExtensionMethod(method);
				bool isStatic = !Method::IsInstance(method) && !isExtensionMethod;
				for (int i = 0; i < classInfo->Methods.size(); ++i)
				{
					if (classInfo->Methods[i].IsStatic == isStatic && classInfo->Methods[i].IsGetter == isGetter && classInfo->Methods[i].IsSetter == isSetter && classInfo->Methods[i].Name == name)
					{
						if (isGetter || isSetter) // no overload for getter or setter
						{
							return false;
						}
						classInfo->Methods[i].OverloadDatas.push_back(CreateOverloadData(method, isExtensionMethod));
						return true;
					}
				}
				std::vector<xlua::WrapData*> OverloadDatas;
				OverloadDatas.push_back(CreateOverloadData(method, isExtensionMethod));
				bool needBoxing = (isExtensionMethod ? GetParameterType(method, 0) : method->klass) == il2cpp_defaults.object_class;
				classInfo->Methods.push_back({ std::string(name), isStatic, isGetter, isSetter, needBoxing, std::move(OverloadDatas) });
				return true;
			};
		if (isDelegate)
		{
			MethodInfo* invoke = (MethodInfo*)il2cpp::vm::Class::GetMethodFromName(oklass, "Invoke", -1);
			try
			{
				std::string signature = GetMethodSignature(invoke, true, false);
				classInfo->DelegateBridge = FindBridgeFunc(signature.c_str());
				if (classInfo->DelegateBridge == nullptr)
				{
					xlua::XLuaLog(XLuaLogType::Exception, "%s(%s) not found delegate bridge", oklass->name, signature.c_str());
					return false;
				}
			}
			catch (Il2CppExceptionWrapper& exception)
			{
				return false;
			}
			AddMethod(invoke, false, false, "Invoke");
		}
		else
		{
			classInfo->DelegateBridge = nullptr;
			auto etype = oklass->byval_arg.type;
			if (etype != IL2CPP_TYPE_SZARRAY && etype != IL2CPP_TYPE_ARRAY)
			{
				Class::SetupMethods(oklass);
				for (uint16_t i = 0; i < oklass->method_count; ++i)
				{
					const MethodInfo* method = oklass->methods[i];
					if (!IsCCtor(method) && !Method::IsGeneric(method))
					{
						const char* name = method->name;
						if (!(method->flags & METHOD_ATTRIBUTE_PUBLIC))
						{
							name = strrchr(name, '.'); // if Explicit Interface Implementation
							if (!name) 
								continue;
							++name;
						}
						bool isGetter = (method->flags & METHOD_ATTRIBUTE_SPECIAL_NAME) && strncmp("get_", name, 4) == 0 && method->parameters_count == 0;
						bool isSetter = (method->flags & METHOD_ATTRIBUTE_SPECIAL_NAME) && strncmp("set_", name, 4) == 0 && method->parameters_count == 1;
						name = (isGetter || isSetter) ? name + 4 : name;
						if (IsCtor(method))
						{
							classInfo->Ctors.push_back(CreateOverloadData(method, false));
						}
						else
						{
							AddMethod(method, isGetter, isSetter, name);
						}
					}
				}
				Class::SetupFields(oklass);
				for (uint16_t i = 0; i < oklass->field_count; i++)
				{
					FieldInfo* field = &oklass->fields[i];
					uint32_t attrs = field->type->attrs;

					if (!(attrs & FIELD_ATTRIBUTE_PUBLIC))
						continue;
					bool isStatic = attrs & FIELD_ATTRIBUTE_STATIC;
					bool isReadonly = attrs & FIELD_ATTRIBUTE_INIT_ONLY;
					std::string signature = (isStatic ? "" : "t");
					try
					{
						signature += GetTypeSignature(field->type);
					}
					catch (Il2CppExceptionWrapper& exception)
					{
						continue;
					}

					FieldWrapData* fieldData = new FieldWrapData();

					FieldWrapFuncPtr getter = &ReflectionGetFieldWrapper;
					FieldWrapFuncPtr setter = &ReflectionSetFieldWrapper;
					auto fieldWrapInfo = FindFieldWrapFuncInfo(signature.c_str());
					if (fieldWrapInfo)
					{
						getter = fieldWrapInfo->Getter;
						setter = fieldWrapInfo->Setter;
					}
					fieldData->Getter = getter;
					if (!isReadonly)
						fieldData->Setter = setter;
					else
					{
						fieldData->Setter = nullptr;
					}
					fieldData->FieldInfo = field;
					fieldData->Offset = (int32_t)Field::GetOffset(field) - (Class::IsValuetype(Field::GetParent(field)) ? sizeof(Il2CppObject) : 0);
					fieldData->TypeInfo = Class::FromIl2CppType(field->type, false);
					classInfo->Fields.push_back({ std::string(field->name), isStatic, isReadonly, fieldData });
				}
			}
			std::string assemblyQualifiedName(Type::GetName(&oklass->byval_arg, IL2CPP_TYPE_NAME_FORMAT_ASSEMBLY_QUALIFIED));
			if (!assemblyQualifiedName.empty())
			{
				Il2CppArray* extensionMethods = g_ExtensionMethodGetHelper.Call(il2cpp::vm::String::NewWrapper(assemblyQualifiedName.c_str()));
				if (extensionMethods)
				{
					uint32_t len = Array::GetLength(extensionMethods);
					Il2CppReflectionMethod** arr = reinterpret_cast<Il2CppReflectionMethod**>(il2cpp::vm::Array::GetFirstElementAddress(extensionMethods));
					for (uint32_t i = 0; i < len; ++i)
					{
						AddMethod(MakeGenericMethodByConstraintedArguments(arr[i]->method), false, false, arr[i]->method->name);
					}
				}
			}
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
					gseters[method.Name] = std::make_pair<xlua::CSharpMethodInfo*, xlua::CSharpMethodInfo*>(method.IsGetter ? &method : nullptr, method.IsSetter ? &method : nullptr);
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
			pesapi_set_method_info(properties, pos++, method->Name.c_str(), method->IsStatic, &MethodCallback, method, nullptr);
		}

		for (auto const& kv : gseters)
		{
			auto getter_or_setter = kv.second.first ? kv.second.first : kv.second.second;
			pesapi_set_property_info(properties, pos++, getter_or_setter->Name.c_str(), getter_or_setter->IsStatic,
				kv.second.first ? &MethodCallback : nullptr,
				kv.second.second ? &MethodCallback : nullptr,
				kv.second.first,
				kv.second.second,
				nullptr);
		}

		for (auto& field : classInfo->Fields)
		{
			pesapi_set_property_info(
				properties, 
				pos++, 
				field.Name.c_str(), 
				field.IsStatic, 
				GetterCallback, 
				field.IsReadonly ? nullptr : SetterCallback, 
				field.Data, 
				field.Data, 
				nullptr
			);
		}
		const bool dictionary = Class::IsAssignableFrom(xlua::g_typeofIDictionary, oklass);
		const bool enumerable = !dictionary && Class::IsAssignableFrom(xlua::g_typeofIEnumerable, oklass);
		pesapi_define_class(
			classInfo->TypeId,
			classInfo->SuperTypeId,
			classInfo->Name.c_str(),
			classInfo->DelegateBridge ? &DelegateCtorCallback : &CtorCallback,
			classInfo->IsValueType ? &PApiFree : (pesapi_finalize)nullptr,
			propertiesCount,
			properties,
			classInfo,
			dictionary,
			enumerable);

		if (!classInfo->IsValueType)
		{
			pesapi_trace_native_object_lifecycle(classInfo->TypeId, (pesapi_on_native_object_enter)&OnCsObjectEnter, (pesapi_on_native_object_exit)&OnCsObjectExit);
		}
		return true;
	}

#define SET_GLOBAL_TYPE_IMPLEMENT(TYPE) \
    Il2CppClass* g_typeof##TYPE = nullptr; \
    static void SetGlobalType_##TYPE(Il2CppReflectionType* type) \
	{ \
		if (!type) \
		{ \
			il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("type of  " #TYPE " is null"));	\
        } \
        g_typeof##TYPE = il2cpp_codegen_class_from_type(type->type); \
      \
    }

	LUA_ALL_TYPES(SET_GLOBAL_TYPE_IMPLEMENT)
#undef SET_GLOBAL_TYPE_IMPLEMENT

}    // namespace xlua

#ifdef __cplusplus
extern "C"
{
#endif

	void pesapi_init(pesapi_func_ptr* func_array);

	void InitialXLua(pesapi_func_ptr* func_array)
	{
#define SET_GLOBAL_TYPE(TYPE) InternalCalls::Add("XLua.NativeAPI::SetGlobalType_" #TYPE "(System.Type)", (Il2CppMethodPointer) xlua::SetGlobalType_##TYPE);
		LUA_ALL_TYPES(SET_GLOBAL_TYPE)
#undef SET_GLOBAL_TYPE
		InternalCalls::Add("XLua.NativeAPI::GetMethodPointer(System.Reflection.MethodBase)", (Il2CppMethodPointer)xlua::GetMethodPointer);
		InternalCalls::Add("XLua.NativeAPI::DoString(System.IntPtr,System.IntPtr,System.Byte[],System.String,XLua.LuaTable,System.Type)", (Il2CppMethodPointer)xlua::DoString);
		InternalCalls::Add("XLua.NativeAPI::LoadString(System.IntPtr,System.IntPtr,System.Byte[],System.String,XLua.LuaTable,System.Type)", (Il2CppMethodPointer)xlua::LoadString);
		InternalCalls::Add("XLua.NativeAPI::SetObjectToGlobal(System.IntPtr,System.IntPtr,System.String,System.Object)", (Il2CppMethodPointer)xlua::SetObjectToGlobal);
		InternalCalls::Add("XLua.NativeAPI::InitialPapiEnvRef(System.IntPtr,System.IntPtr,System.Object,System.Reflection.MethodBase,System.Reflection.MethodBase)", (Il2CppMethodPointer)xlua::InitialPapiEnvRef);
		InternalCalls::Add("XLua.NativeAPI::InitPerf(System.Reflection.MethodBase,System.Reflection.MethodBase)", (Il2CppMethodPointer)xlua::InitPerf);
		InternalCalls::Add("XLua.NativeAPI::CleanupPapiEnvRef(System.IntPtr,System.IntPtr)", (Il2CppMethodPointer)xlua::CleanupPapiEnvRef);
		InternalCalls::Add("XLua.NativeAPI::DestroyLuaEnvPrivate()", (Il2CppMethodPointer)xlua::DestroyLuaEnvPrivate);
		InternalCalls::Add("XLua.LuaTable::GetLuaTableValueByUInt64(System.IntPtr,System.UInt64,System.Type)", (Il2CppMethodPointer)xlua::GetLuaTableValueByUInt64);
		InternalCalls::Add("XLua.LuaTable::GetLuaTableValueByString(System.IntPtr,System.String,System.Type)", (Il2CppMethodPointer)xlua::GetLuaTableValueByString);
		InternalCalls::Add("XLua.LuaTable::SetLuaTableValueByUInt64(System.IntPtr,System.UInt64,System.Object)", (Il2CppMethodPointer)xlua::SetLuaTableValueByUInt64);
		InternalCalls::Add("XLua.LuaTable::SetLuaTableValueByString(System.IntPtr,System.String,System.Object)", (Il2CppMethodPointer)xlua::SetLuaTableValueByString);
		InternalCalls::Add("XLua.LuaTable::GetLuaTableLength(System.IntPtr)", (Il2CppMethodPointer)xlua::GetLuaTableLength);
		InternalCalls::Add("XLua.NativeAPI::CSRefToLuaValue(System.IntPtr,System.IntPtr,System.Type,System.Object)", (Il2CppMethodPointer)xlua::CSRefToLuaValue);
		InternalCalls::Add("XLua.NativeAPI::NewTable(System.IntPtr,System.IntPtr)", (Il2CppMethodPointer)xlua::NewTable);
		InternalCalls::Add("XLua.NativeAPI::GetGlobalTable(System.IntPtr,System.IntPtr)", (Il2CppMethodPointer)xlua::GetGlobalTable);
		InternalCalls::Add("XLua.NativeAPI::SetExtensionMethodGet(System.Reflection.MethodBase)", (Il2CppMethodPointer)xlua::SetExtensionMethodGet);
		pesapi_init(func_array);

		xlua::s_ParamArrayAttribute = Class::FromName(il2cpp_defaults.corlib, "System", "ParamArrayAttribute");
		xlua::s_ExtensionAttribute = Class::FromName(il2cpp_defaults.corlib, "System.Runtime.CompilerServices", "ExtensionAttribute");
	}

	void AddPendingKillScriptObjects(struct pesapi_ffi* apis, pesapi_value_ref valueRef)
	{
		if (xlua::LuaEnvPrivate::instance == nullptr)
		{
			xlua::XLuaLog(xlua::XLuaLogType::Error, "LuaEnvPrivate is nullptr");
			return;
		}
		// 无论如何不要在多线程中操作lua
		// pesapi_env env = apis->get_ref_associated_env(valueRef);
		// if (!apis->env_ref_is_valid(env))
		// {
		// 	apis->release_value_ref(valueRef);
		// 	return;
		// }
		xlua::LuaEnvPrivate::instance->AddPendingKillScriptObjects(valueRef);
	}

	void CleanupPendingKillScriptObjects(const xlua::LuaEnvPrivate* lua_env_private)
	{
		if (xlua::LuaEnvPrivate::instance != lua_env_private && lua_env_private != nullptr)
		{
			xlua::XLuaLog(xlua::XLuaLogType::Error, "LuaEnvPrivate is nullptr");
			return;
		}
		xlua::LuaEnvPrivate::instance->CleanupPendingKillScriptObjects();
	}

	void SetLogCallbackInternal(xlua::LogCallbackFunc Log, xlua::LogCallbackFunc logWarning, xlua::LogCallbackFunc logError, xlua::LogCallbackFunc logException)
	{
		xlua::GLogCallback = Log;
		xlua::GLogWarningCallback = logWarning;
		xlua::GLogErrorCallback = logError;
		xlua::GLogExceptionCallback = logException;
	}
#ifdef __cplusplus
}
#endif