﻿#pragma once

#include "pesapi.h"
#include <stdarg.h>
#include "vm/Class.h"
#include "vm/String.h"
#include "vm/Array.h"

namespace xlua
{
	typedef void (*FieldWrapFuncPtr)(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* field, size_t offset, Il2CppClass* fieldType);
	typedef bool (*WrapFuncPtr)(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkArgument, struct WrapData* wrapData);

#define LUA_ALL_TYPES(TYPE_ACTION)	\
	TYPE_ACTION(ArrayBuffer)		\
	TYPE_ACTION(LuaTable)			\
	TYPE_ACTION(Array)				\
	TYPE_ACTION(IntPtr)				\
	TYPE_ACTION(IDictionary)		\
	TYPE_ACTION(IEnumerable)		\
	TYPE_ACTION(ILuaGCInterface)

#define SET_GLOBAL_TYPE_DECLARE(TYPE) extern Il2CppClass* g_typeof##TYPE;
	LUA_ALL_TYPES(SET_GLOBAL_TYPE_DECLARE)
#undef SET_GLOBAL_TYPE_DECLARE
	struct FieldWrapData
	{
		FieldWrapFuncPtr Getter;
		FieldWrapFuncPtr Setter;
		FieldInfo* FieldInfo;
		size_t Offset;
		Il2CppClass* TypeInfo;
	};

	struct WrapData
	{
		WrapFuncPtr Wrap;
		MethodInfo* Method;
		Il2CppMethodPointer MethodPointer;
		bool IsStatic;
		bool IsExtensionMethod;
		bool HasParamArray;
		int OptionalNum;
		Il2CppClass* TypeInfos[0];
	};

	struct PObjectRefInfo
	{
		struct pesapi_ffi* Apis;
		pesapi_value_ref ValueRef;
		pesapi_env env;
	};

	// sizeof(PObjectRefInfo) do exceed c# sizeof(LuaObject)
	static_assert(sizeof(PObjectRefInfo) <= sizeof(void*) * 3, "PObjectRefInfo Size invalid");

	// begin function in XLua_il2cpp.cpp
	Il2CppObject* LuaValueToCSRef(struct pesapi_ffi* apis, Il2CppClass* klass, pesapi_env env, int luaval);

	int CSRefToLuaValue(struct pesapi_ffi* apis, pesapi_env env, Il2CppClass* targetClass, Il2CppObject* obj);

	void* GetDefaultValuePtr(const MethodInfo* method, uint32_t index);

	Il2CppClass* GetReturnType(const MethodInfo* method);

	Il2CppClass* GetParameterType(const MethodInfo* method, int index);

	void GetFieldValue(void* ptr, FieldInfo* field, size_t offset, void* value);

	void* GetValueTypeFieldPtr(void* obj, FieldInfo* field, size_t offset);

	void SetFieldValue(void* ptr, FieldInfo* field, size_t offset, void* value);

	enum class XLuaLogType
	{
		Log,
		Warning,
		Error,
		Exception,
	};

	void XLuaLog(XLuaLogType type, const char* Fmt, ...);

	// end function in XLua_il2cpp.cpp

#define GetPObjectRefInfo(value) ((PObjectRefInfo*) (((uint8_t*) value + sizeof(Il2CppObject))))

	class AutoValueScope
	{
	public:
		AutoValueScope(struct pesapi_ffi* apis, pesapi_env env)
		{
			_apis = apis;
			_env = env;
			scope = apis->open_scope(env);
			reserve = 0;
		}

		~AutoValueScope()
		{
			_apis->close_scope(_env, scope, reserve);
		}

		struct pesapi_ffi* _apis;
		pesapi_env _env;
		int scope;
		int reserve;
	};

	struct DataTransfer
	{
		static bool IsDelegate(Il2CppClass* klass)
		{
			return il2cpp::vm::Class::IsAssignableFrom(il2cpp_defaults.delegate_class, klass) &&
				klass != il2cpp_defaults.delegate_class && klass != il2cpp_defaults.multicastdelegate_class;
		}

		static bool IsAssignable(struct pesapi_ffi* apis, pesapi_env env, int value, Il2CppClass* klass, bool isValueType)
		{
			if (!isValueType && (apis->is_null(env, value) || apis->is_undefined(env, value)))
			{
				return true;
			}
			if (IsDelegate(klass) && apis->is_function(env, value))
			{
				return true;
			}
			auto objClass = (Il2CppClass*)apis->get_native_object_typeid(env, value);
			if (objClass)
			{
				return il2cpp::vm::Class::IsAssignableFrom(klass, objClass);
			}
			if (apis->is_binary(env, value))
			{
				return klass == g_typeofArrayBuffer;
			}
			if (apis->is_array(env, value))
			{
				return il2cpp::vm::Class::IsAssignableFrom(g_typeofArray, klass);
			}
			return false;
		}

		static void* GetPointer(struct pesapi_ffi* apis, pesapi_env env, pesapi_value value)
		{
			if (value == 0)
			{
				return nullptr;
			}
			if (apis->is_null(env, value) || apis->is_undefined(env, value))
			{
				return nullptr;
			}
			if (apis->is_binary(env, value))
			{
				size_t size = 0;
				return apis->get_value_binary(env, value, &size);
			}
			return apis->get_native_object_ptr(env, value);
		}

		template <typename T>
		static T* GetPointer(struct pesapi_ffi* apis, pesapi_env env, pesapi_value value)
		{
			if (value == 0)
			{
				return nullptr;
			}
			if (apis->is_null(env, value) || apis->is_undefined(env, value))
			{
				return nullptr;
			}
			return static_cast<T*>(apis->get_native_object_ptr(env, value));
		}

		template <typename T>
		static pesapi_value CopyValueType(struct pesapi_ffi* apis, pesapi_env env, const T& v, const void* type_id)
		{
			T* ret = new T;
			memcpy(ret, &v, sizeof(T));
			return apis->native_object_to_value(env, type_id, ret, false);
		}

		template <typename T>
		static pesapi_value CopyNullableValueType(struct pesapi_ffi* apis, pesapi_env env, const T& v, const void* type_id)
		{
			if (!v.hasValue)
			{
				return apis->create_null(env);
			}
			return CopyValueType(apis, env, v.p1, type_id);
		}
	};

	struct WrapFuncInfo
	{
		const char* Signature;
		WrapFuncPtr Method;
	};

	struct BridgeFuncInfo
	{
		const char* Signature;
		Il2CppMethodPointer Method;
	};

	struct FieldWrapFuncInfo
	{
		const char* Signature;
		FieldWrapFuncPtr Getter;
		FieldWrapFuncPtr Setter;
	};

	namespace converter
	{

		template <typename T, typename Enable = void>
		struct Converter;

		template <typename T>
		struct Converter<T, typename std::enable_if<std::is_integral<T>::value && sizeof(T) == 8 && std::is_signed<T>::value>::type>
		{
			static pesapi_value toScript(struct pesapi_ffi* apis, pesapi_env env, T value)
			{
				return apis->create_int64(env, value);
			}

			static T toCpp(struct pesapi_ffi* apis, pesapi_env env, pesapi_value value)
			{
				return static_cast<T>(apis->get_value_int64(env, value));
			}

			static bool accept(struct pesapi_ffi* apis, pesapi_env env, pesapi_value value)
			{
				return apis->is_int64(env, value);
			}
		};

		template <typename T>
		struct Converter<T, typename std::enable_if<std::is_integral<T>::value && sizeof(T) == 8 && !std::is_signed<T>::value>::type>
		{
			static pesapi_value toScript(struct pesapi_ffi* apis, pesapi_env env, T value)
			{
				return apis->create_uint64(env, value);
			}

			static T toCpp(struct pesapi_ffi* apis, pesapi_env env, int value)
			{
				return static_cast<T>(apis->get_value_uint64(env, value));
			}

			static bool accept(struct pesapi_ffi* apis, pesapi_env env, int value)
			{
				return apis->is_uint64(env, value);
			}
		};

		template <typename T>
		struct Converter<T, typename std::enable_if<std::is_integral<T>::value && (sizeof(T) < 8) && std::is_signed<T>::value>::type>
		{
			static pesapi_value toScript(struct pesapi_ffi* apis, pesapi_env env, T value)
			{
				return apis->create_int32(env, value);
			}

			static T toCpp(struct pesapi_ffi* apis, pesapi_env env, int value)
			{
				return static_cast<T>(apis->get_value_int32(env, value));
			}

			static bool accept(struct pesapi_ffi* apis, pesapi_env env, int value)
			{
				return apis->is_int32(env, value);
			}
		};

		template <typename T>
		struct Converter<T, typename std::enable_if<std::is_integral<T>::value && (sizeof(T) < 8) && !std::is_signed<T>::value>::type>
		{
			static pesapi_value toScript(struct pesapi_ffi* apis, pesapi_env env, T value)
			{
				return apis->create_uint32(env, value);
			}

			static T toCpp(struct pesapi_ffi* apis, pesapi_env env, int value)
			{
				return static_cast<T>(apis->get_value_uint32(env, value));
			}

			static bool accept(struct pesapi_ffi* apis, pesapi_env env, int value)
			{
				return apis->is_uint32(env, value);
			}
		};

		template <typename T>
		struct Converter<T, typename std::enable_if<std::is_enum<T>::value>::type>
		{
			static int toScript(struct pesapi_ffi* apis, pesapi_env env, T value)
			{
				return apis->create_int32(env, static_cast<int>(value));
			}

			static T toCpp(struct pesapi_ffi* apis, pesapi_env env, int value)
			{
				return static_cast<T>(apis->get_value_int32(env, value));
			}

			static bool accept(struct pesapi_ffi* apis, pesapi_env env, int value)
			{
				return apis->is_int32(env, value);
			}
		};

		template <typename T>
		struct Converter<T, typename std::enable_if<std::is_floating_point<T>::value>::type>
		{
			static int toScript(struct pesapi_ffi* apis, pesapi_env env, T value)
			{
				return apis->create_double(env, value);
			}

			static T toCpp(struct pesapi_ffi* apis, pesapi_env env, int value)
			{
				return static_cast<T>(apis->get_value_double(env, value));
			}

			static bool accept(struct pesapi_ffi* apis, pesapi_env env, int value)
			{
				return apis->is_double(env, value);
			}
		};

		template <>
		struct Converter<void*>
		{
			static int toScript(struct pesapi_ffi* apis, pesapi_env env, void* value)
			{
				return apis->create_binary(env, value, 0);
			}

			static void* toCpp(struct pesapi_ffi* apis, pesapi_env env, int value)
			{
				size_t bufsize;
				return apis->get_value_binary(env, value, &bufsize);
			}

			static bool accept(struct pesapi_ffi* apis, pesapi_env env, int value)
			{
				return apis->is_binary(env, value);
			}
		};

		template <>
		struct Converter<bool>
		{
			static int toScript(struct pesapi_ffi* apis, pesapi_env env, bool value)
			{
				return apis->create_boolean(env, value);
			}

			static bool toCpp(struct pesapi_ffi* apis, pesapi_env env, int value)
			{
				return apis->get_value_bool(env, value);
			}

			static bool accept(struct pesapi_ffi* apis, pesapi_env env, int value)
			{
				return apis->is_boolean(env, value);
			}
		};

		template <>
		struct Converter<Il2CppString*>
		{
			static int toScript(struct pesapi_ffi* apis, pesapi_env env, Il2CppString* value)
			{
				if (value == nullptr)
				{
					return apis->create_null(env);
				}
				const Il2CppChar* utf16 = il2cpp::utils::StringUtils::GetChars(value);
				std::string str = il2cpp::utils::StringUtils::Utf16ToUtf8(utf16);
				return apis->create_string_utf8(env, str.c_str(), str.size());
			}

			static Il2CppString* toCpp(struct pesapi_ffi* apis, pesapi_env env, int value)
			{
				if (value == 0 || apis->is_null(env, value) || apis->is_undefined(env, value))
				{
					return nullptr;
				}
				size_t bufsize = 0;
				auto str = apis->get_value_string_utf8(env, value, nullptr, &bufsize);
				if (str)
				{
					return il2cpp::vm::String::NewWrapper(str);
				}
				std::vector<char> buff;
				buff.resize(bufsize + 1);
				str = apis->get_value_string_utf8(env, value, buff.data(), &bufsize);
				if (str)
				{
					buff[bufsize] = '\0';
					return il2cpp::vm::String::NewWrapper(str);
				}
				return nullptr;
			}

			static bool accept(struct pesapi_ffi* apis, pesapi_env env, int value)
			{
				return apis->is_string(env, value) || apis->is_null(env, value) || apis->is_undefined(env, value);
			}
		};

		template <typename T>
		struct Converter<std::reference_wrapper<T>>
		{
			static pesapi_value toScript(struct pesapi_ffi* apis, pesapi_env env, const T& value)
			{
				return apis->boxing(env, Converter<T>::toScript(apis, env, value));
			}

			static T toCpp(struct pesapi_ffi* apis, pesapi_env env, pesapi_value value)
			{
				return Converter<T>::toCpp(apis, env, value);
			}

			static bool accept(struct pesapi_ffi* apis, pesapi_env env, pesapi_value value)
			{
				return apis->is_boxed_value(env, value);    // do not checked inner
			}
		};

	}    // namespace converter

	template <typename T>
	struct OptionalParameter
	{
		static T GetPrimitive(struct pesapi_ffi* apis,
			pesapi_env env, pesapi_callback_info info, MethodInfo* methodInfo, xlua::WrapData* wrapData, int length, int index)
		{
			if (index < length)
			{
				return converter::Converter<T>::toCpp(apis, env, apis->get_arg(info, index));
			}
			else
			{
				if (wrapData->IsExtensionMethod)
					++index;
				auto pret = (T*)GetDefaultValuePtr(methodInfo, index);
				if (pret)
				{
					return *pret;
				}
				return {};
			}
		}

		static T GetValueType(struct pesapi_ffi* apis,
			pesapi_env env, pesapi_callback_info info, MethodInfo* methodInfo, xlua::WrapData* wrapData, int length, int index)
		{
			if (index < length)
			{
				return (*DataTransfer::GetPointer<T>(apis, env, apis->get_arg(info, index)));
			}
			else
			{
				if (wrapData->IsExtensionMethod)
					++index;
				auto pret = (T*)GetDefaultValuePtr(methodInfo, index);
				if (pret)
				{
					return *pret;
				}
				T ret;
				memset(&ret, 0, sizeof(T));
				return ret;
			}
		}

		static Il2CppString* GetString(struct pesapi_ffi* apis,
			pesapi_env env, pesapi_callback_info info, MethodInfo* methodInfo, xlua::WrapData* wrapData, int length, int index)
		{
			if (index < length)
			{
				return converter::Converter<Il2CppString*>::toCpp(apis, env, apis->get_arg(info, index));
			}
			else
			{
				if (wrapData->IsExtensionMethod)
					++index;
				return (Il2CppString*)GetDefaultValuePtr(methodInfo, index);
			}
		}

		static Il2CppObject* GetRefType(struct pesapi_ffi* apis, pesapi_env env, pesapi_callback_info info, MethodInfo* methodInfo, xlua::WrapData* wrapData,
			int length, int index, Il2CppClass* typeId)
		{
			if (index < length)
			{
				return LuaValueToCSRef(apis, typeId, env, apis->get_arg(info, index));
			}
			else
			{
				if (wrapData->IsExtensionMethod)
					++index;
				return (Il2CppObject*)GetDefaultValuePtr(methodInfo, index);
			}
		}
	};

	template <typename T>
	struct Params
	{
		static Il2CppArray* PackPrimitive(struct pesapi_ffi* apis, pesapi_env env, pesapi_callback_info info, Il2CppClass* typeId, int length, int start)
		{
			Il2CppArray* ret = il2cpp::vm::Array::NewSpecific(typeId, length - start > 0 ? length - start : 0);
			T* arr = reinterpret_cast<T*>(il2cpp::vm::Array::GetFirstElementAddress(ret));
			for (int i = start; i < length; i++)
			{
				arr[i - start] = converter::Converter<T>::toCpp(apis, env, apis->get_arg(info, i));
			}
			return ret;
		}

		static Il2CppArray* PackString(struct pesapi_ffi* apis, pesapi_env env, pesapi_callback_info info, Il2CppClass* typeId, int length, int start)
		{
			Il2CppArray* ret = il2cpp::vm::Array::NewSpecific(typeId, length - start > 0 ? length - start : 0);
			for (int i = start; i < length; i++)
			{
				il2cpp_array_setref(ret, i - start, converter::Converter<Il2CppString*>::toCpp(apis, env, apis->get_arg(info, i)));
			}
			return ret;
		}

		static Il2CppArray* PackRef(struct pesapi_ffi* apis, pesapi_env env, pesapi_callback_info info, Il2CppClass* typeId, int length, int start)
		{
			Il2CppArray* ret = il2cpp::vm::Array::NewSpecific(typeId, length - start > 0 ? length - start : 0);
			auto elemTypeId = il2cpp::vm::Class::GetElementClass(typeId);
			for (int i = start; i < length; i++)
			{
				il2cpp_array_setref(ret, i - start, LuaValueToCSRef(apis, elemTypeId, env, apis->get_arg(info, i)));
			}
			return ret;
		}

		static Il2CppArray* PackValueType(struct pesapi_ffi* apis, pesapi_env env, pesapi_callback_info info, Il2CppClass* typeId, int length, int start)
		{
			Il2CppArray* ret = il2cpp::vm::Array::NewSpecific(typeId, length - start > 0 ? length - start : 0);
			T* arr = reinterpret_cast<T*>(il2cpp::vm::Array::GetFirstElementAddress(ret));
			for (int i = start; i < length; i++)
			{
				T* e = DataTransfer::GetPointer<T>(apis, env, apis->get_arg(info, i));
				if (!e)
					continue;
				arr[i - start] = *e;
			}
			return ret;
		}

		static void UnPackPrimitive(struct pesapi_ffi* apis, pesapi_env env, Il2CppArray* array, uint32_t arrayLength, Il2CppClass* typeId, pesapi_value* argv)
		{
			T* arr = reinterpret_cast<T*>(il2cpp::vm::Array::GetFirstElementAddress(array));
			for (uint32_t i = 0; i < arrayLength; i++)
			{
				argv[i] = converter::Converter<T>::toScript(apis, env, arr[i]);
			}
		}

		static void UnPackRefOrBoxedValueType(struct pesapi_ffi* apis,
			pesapi_env env, Il2CppArray* array, uint32_t arrayLength, Il2CppClass* typeId, pesapi_value* argv)
		{
			Il2CppObject** arr = reinterpret_cast<Il2CppObject**>(il2cpp::vm::Array::GetFirstElementAddress(array));
			for (uint32_t i = 0; i < arrayLength; i++)
			{
				argv[i] = CSRefToLuaValue(apis, env, typeId, arr[i]);
			}
		}

		static void UnPackValueType(struct pesapi_ffi* apis, pesapi_env env, Il2CppArray* array, uint32_t arrayLength, Il2CppClass* typeId, pesapi_value* argv)
		{
			T* arr = reinterpret_cast<T*>(il2cpp::vm::Array::GetFirstElementAddress(array));
			auto elemTypeId = il2cpp::vm::Class::GetElementClass(typeId);
			for (uint32_t i = 0; i < arrayLength; i++)
			{
				argv[i] = DataTransfer::CopyValueType(apis, env, &arr[i], elemTypeId);
			}
		}
	};

	template <typename T>
	struct MethodInfoHelper
	{
	};

	Il2CppMethodPointer GetMethodPointer(const MethodInfo* method);

	template <class _Ret, class... _Args>
	struct MethodInfoHelper<_Ret(_Args...)>
	{
		Il2CppMethodPointer func;
		const MethodInfo* methodInfo;
		Il2CppObject* instance;

		MethodInfoHelper(const MethodInfo* method, Il2CppObject* instance = nullptr)
			: instance(instance)
		{
			func = GetMethodPointer(method);
			methodInfo = method;
		}

		MethodInfoHelper()
			: func(0), methodInfo(0), instance(nullptr)
		{
		}

		typedef _Ret(*FuncType)(_Args..., const MethodInfo*);
		typedef _Ret(*FuncTypeWithInstance)(Il2CppObject*, _Args..., const MethodInfo*);

		template <typename T = _Ret>
		typename std::enable_if<std::is_same<T, void>::value>::type
			Call(_Args... args)
		{
			FuncType funcPtr = (FuncType)func;
			funcPtr(args..., methodInfo);
		}

		template <typename T = _Ret>
		typename std::enable_if<!std::is_same<T, void>::value, T>::type
			Call(_Args... args)
		{
			FuncType funcPtr = (FuncType)func;
			return funcPtr(args..., methodInfo);
		}

		template <typename T = _Ret>
		typename std::enable_if<std::is_same<T, void>::value>::type
			CallWithInstance(_Args... args)
		{
			FuncTypeWithInstance funcPtr = (FuncTypeWithInstance)func;
			funcPtr(instance, args..., methodInfo);
		}

		template <typename T = _Ret>
		typename std::enable_if<!std::is_same<T, void>::value, T>::type
			CallWithInstance(_Args... args)
		{
			FuncTypeWithInstance funcPtr = (FuncTypeWithInstance)func;
			return funcPtr(instance, args..., methodInfo);
		}
	};

}    // namespace xlua