#ifndef PS_API_H_
#define PS_API_H_

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

// Portable Embedded Scripting API

#define PESAPI_VERSION 11

#define PESAPI_EXTERN

#if defined(__APPLE__) && defined(BUILDING_PES_EXTENSION) && !defined(PESAPI_ADPT_C)
#include "TargetConditionals.h"
#if TARGET_OS_IPHONE || TARGET_IPHONE_SIMULATOR
#define USING_OBJC_REFLECTION
#endif
#endif

#ifdef USING_OBJC_REFLECTION
#import <Foundation/Foundation.h>
#endif

#ifdef _WIN32
#define PESAPI_MODULE_EXPORT __declspec(dllexport)
#else
#define PESAPI_MODULE_EXPORT __attribute__((visibility("default")))
#endif

#if defined(__GNUC__)
#define PESAPI_NO_RETURN __attribute__((noreturn))
#elif defined(_WIN32)
#define PESAPI_NO_RETURN __declspec(noreturn)
#else
#define PESAPI_NO_RETURN
#endif

#ifdef __cplusplus
#define EXTERN_C_START \
    extern "C"         \
    {
#define EXTERN_C_END }
#else
#define EXTERN_C_START
#define EXTERN_C_END
#endif

#define PESAPI_MODULE_INITIALIZER_X(base, module, version) PESAPI_MODULE_INITIALIZER_X_HELPER(base, module, version)

#define PESAPI_MODULE_INITIALIZER_X_HELPER(base, module, version) base##module##_v##version

#define PESAPI_MODULE_INITIALIZER_BASE pesapi_register_

#define PESAPI_MODULE_INITIALIZER(modname) PESAPI_MODULE_INITIALIZER_X(PESAPI_MODULE_INITIALIZER_BASE, modname, PESAPI_VERSION)

#define PESAPI_MODULE_VERSION() PESAPI_MODULE_INITIALIZER_X(PESAPI_MODULE_INITIALIZER_BASE, version, 0)

#ifdef USING_OBJC_REFLECTION

#define PESAPI_MODULE(modname, initfunc)                      \
    @interface PESAPI_MODULE_INITIALIZER (modname) : NSObject                                     \
@end                                                          \
    @implementation PESAPI_MODULE_INITIALIZER (modname)       \
    +(void) initlib : (pesapi_func_ptr*) func_ptr_array       \
    {                                                         \
        pesapi_init(func_ptr_array);                          \
        initfunc();                                           \
    }                                                         \
    @end

#else

#define PESAPI_MODULE(modname, initfunc)                                                                   \
    EXTERN_C_START                                                                                         \
    PESAPI_MODULE_EXPORT void PESAPI_MODULE_INITIALIZER(modname)(pesapi_func_ptr * func_ptr_array);        \
    PESAPI_MODULE_EXPORT const char* PESAPI_MODULE_INITIALIZER(dynamic)(pesapi_func_ptr * func_ptr_array); \
    PESAPI_MODULE_EXPORT int PESAPI_MODULE_VERSION()();                                                    \
    EXTERN_C_END                                                                                           \
    PESAPI_MODULE_EXPORT void PESAPI_MODULE_INITIALIZER(modname)(pesapi_func_ptr * func_ptr_array)         \
    {                                                                                                      \
        pesapi_init(func_ptr_array);                                                                       \
        initfunc();                                                                                        \
    }                                                                                                      \
    PESAPI_MODULE_EXPORT const char* PESAPI_MODULE_INITIALIZER(dynamic)(pesapi_func_ptr * func_ptr_array)  \
    {                                                                                                      \
        if (func_ptr_array)                                                                                \
        {                                                                                                  \
            pesapi_init(func_ptr_array);                                                                   \
            initfunc();                                                                                    \
        }                                                                                                  \
        return #modname;                                                                                   \
    }                                                                                                      \
    PESAPI_MODULE_EXPORT int PESAPI_MODULE_VERSION()()                                                     \
    {                                                                                                      \
        return PESAPI_VERSION;                                                                             \
    }

#endif

EXTERN_C_START

typedef struct pesapi_env__* pesapi_env;
typedef struct pesapi_env_ref__* pesapi_env_ref;
typedef int pesapi_value;
typedef struct pesapi_value_ref__* pesapi_value_ref;
typedef struct pesapi_callback_info__* pesapi_callback_info;
typedef struct pesapi_type_info__* pesapi_type_info;
typedef struct pesapi_signature_info__* pesapi_signature_info;
typedef struct pesapi_property_descriptor__* pesapi_property_descriptor;

typedef void (*pesapi_callback)(struct pesapi_ffi* apis, pesapi_callback_info info);
typedef void* (*pesapi_constructor)(struct pesapi_ffi* apis, pesapi_callback_info info);
typedef void (*pesapi_finalize)(struct pesapi_ffi* apis, void* Ptr, void* class_data, void* env_private);
typedef void (*pesapi_function_finalize)(struct pesapi_ffi* apis, void* data, void* env_private);
typedef void* (*pesapi_on_native_object_enter)(void* ptr, void* class_data, void* env_private);
typedef void (*pesapi_on_native_object_exit)(void* ptr, void* class_data, void* env_private, void* userdata);
typedef bool (*pesapi_class_not_found_callback)(const void* type_id);
typedef void (*pesapi_func_ptr)(void);

#ifdef BUILDING_PES_EXTENSION
PESAPI_EXTERN void pesapi_init(pesapi_func_ptr* func_array);
#else
PESAPI_MODULE_EXPORT int pesapi_load_addon(const char* path, const char* module_name);
#endif

// value process
typedef int (*pesapi_create_null_func)(pesapi_env env);
typedef int (*pesapi_create_undefined_func)(pesapi_env env);
typedef int (*pesapi_create_boolean_func)(pesapi_env env, bool value);
typedef int (*pesapi_create_int32_func)(pesapi_env env, int32_t value);
typedef int (*pesapi_create_uint32_func)(pesapi_env env, uint32_t value);
typedef int (*pesapi_create_int64_func)(pesapi_env env, int64_t value);
typedef int (*pesapi_create_uint64_func)(pesapi_env env, uint64_t value);
typedef int (*pesapi_create_double_func)(pesapi_env env, double value);
typedef int (*pesapi_create_string_utf8_func)(pesapi_env env, const char* str, size_t length);
typedef int (*pesapi_create_binary_func)(pesapi_env env, void* str, size_t length);
typedef int (*pesapi_create_array_func)(pesapi_env env);
typedef int (*pesapi_create_object_func)(pesapi_env env);
typedef int (*pesapi_create_function_func)(pesapi_env env, pesapi_callback native_impl, void* data, pesapi_function_finalize finalize);
typedef int (*pesapi_create_class_func)(pesapi_env env, const void* type_id);

typedef bool (*pesapi_get_value_bool_func)(pesapi_env env, int value);
typedef int32_t(*pesapi_get_value_int32_func)(pesapi_env env, int value);
typedef uint32_t(*pesapi_get_value_uint32_func)(pesapi_env env, int value);
typedef int64_t(*pesapi_get_value_int64_func)(pesapi_env env, int value);
typedef uint64_t(*pesapi_get_value_uint64_func)(pesapi_env env, int value);
typedef double (*pesapi_get_value_double_func)(pesapi_env env, int value);
typedef const char* (*pesapi_get_value_string_utf8_func)(pesapi_env env, int value, char* buf, size_t* bufsize);
typedef void* (*pesapi_get_value_binary_func)(pesapi_env env, int pvalue, size_t* bufsize);
typedef uint32_t(*pesapi_get_array_length_func)(pesapi_env env, int value);
typedef void (*pesapi_get_array_element_func)(pesapi_env env, int idx, int array_index);

typedef bool (*pesapi_is_null_func)(pesapi_env env, int value);
typedef bool (*pesapi_is_undefined_func)(pesapi_env env, int value);
typedef bool (*pesapi_is_boolean_func)(pesapi_env env, int value);
typedef bool (*pesapi_is_int32_func)(pesapi_env env, int value);
typedef bool (*pesapi_is_uint32_func)(pesapi_env env, int value);
typedef bool (*pesapi_is_int64_func)(pesapi_env env, int value);
typedef bool (*pesapi_is_uint64_func)(pesapi_env env, int value);
typedef bool (*pesapi_is_double_func)(pesapi_env env, int value);
typedef bool (*pesapi_is_string_func)(pesapi_env env, int value);
typedef bool (*pesapi_is_object_func)(pesapi_env env, int value);
typedef bool (*pesapi_is_userdata_func)(pesapi_env env, int value);
typedef bool (*pesapi_is_function_func)(pesapi_env env, int value);
typedef bool (*pesapi_is_binary_func)(pesapi_env env, int value);
typedef bool (*pesapi_is_array_func)(pesapi_env env, int value);

typedef pesapi_value(*pesapi_native_object_to_value_func)(pesapi_env env, const void* type_id, void* object_ptr, bool call_finalize);
typedef void* (*pesapi_get_native_object_ptr_func)(pesapi_env env, pesapi_value value);
typedef const void* (*pesapi_get_native_object_typeid_func)(pesapi_env env, pesapi_value value);
typedef bool (*pesapi_is_instance_of_func)(pesapi_env env, const void* type_id, pesapi_value value);

typedef pesapi_value(*pesapi_boxing_func)(pesapi_env env, pesapi_value value);
typedef pesapi_value(*pesapi_unboxing_func)(pesapi_env env, pesapi_value value);
typedef void (*pesapi_update_boxed_value_func)(pesapi_env env, pesapi_value boxed_value, pesapi_value value);
typedef bool (*pesapi_is_boxed_value_func)(pesapi_env env, pesapi_value value);

typedef int (*pesapi_get_args_len_func)(pesapi_callback_info info);
typedef int(*pesapi_get_arg_func)(pesapi_callback_info info, int index);
typedef pesapi_env(*pesapi_get_env_func)(pesapi_callback_info info);
typedef int(*pesapi_get_this_func)(pesapi_callback_info info);
typedef int(*pesapi_get_holder_func)(pesapi_callback_info info);
typedef void* (*pesapi_get_userdata_func)(pesapi_callback_info info);
typedef void* (*pesapi_get_constructor_userdata_func)(pesapi_callback_info info);
typedef void (*pesapi_add_return_func)(pesapi_callback_info info, pesapi_value value);
typedef int(*pesapi_get_return_num_func)(pesapi_callback_info info);
typedef void (*pesapi_throw_by_string_func)(pesapi_callback_info pinfo, const char* msg);

typedef pesapi_env_ref(*pesapi_create_env_ref_func)(pesapi_env env);
typedef bool (*pesapi_env_ref_is_valid_func)(pesapi_env env);
typedef pesapi_env(*pesapi_get_env_from_ref_func)(pesapi_env_ref env_ref);
typedef pesapi_env_ref(*pesapi_duplicate_env_ref_func)(pesapi_env_ref env_ref);
typedef void (*pesapi_release_env_ref_func)(pesapi_env_ref env_ref);

typedef int (*pesapi_open_scope_func)(pesapi_env env);
typedef int (*pesapi_open_scope_placement_func)(pesapi_env env);
typedef bool (*pesapi_has_caught_func)(pesapi_env env);
typedef const char* (*pesapi_get_exception_as_string_func)(pesapi_env env, bool with_stack);
typedef void (*pesapi_close_scope_func)(pesapi_env env, int scope, int reserve);
typedef void (*pesapi_close_scope_placement_func)(pesapi_env env, int scope);

typedef pesapi_value_ref(*pesapi_create_value_ref_func)(pesapi_env env, pesapi_value value);
typedef pesapi_value_ref(*pesapi_duplicate_value_ref_func)(pesapi_value_ref value_ref);
typedef void (*pesapi_release_value_ref_func)(pesapi_value_ref value_ref);
typedef pesapi_value(*pesapi_get_value_from_ref_func)(pesapi_env env, pesapi_value_ref value_ref);
typedef void (*pesapi_set_ref_weak_func)(pesapi_env env, pesapi_value_ref value_ref);
// Optional api: return false if can not fulfill
typedef bool (*pesapi_set_owner_func)(pesapi_env env, pesapi_value value, pesapi_value owner);
typedef pesapi_env(*pesapi_get_ref_associated_env_func)(pesapi_value_ref value_ref);
typedef uint32_t (*pesapi_get_ref_internal_fields_func)(pesapi_value_ref value_ref);

typedef pesapi_value(*pesapi_get_property_func)(pesapi_env env, pesapi_value object, const char* key);
typedef void (*pesapi_set_property_func)(pesapi_env env, pesapi_value object, const char* key, pesapi_value value);
typedef bool (*pesapi_get_private_func)(pesapi_env env, pesapi_value object, void** out_ptr);
typedef bool (*pesapi_set_private_func)(pesapi_env env, pesapi_value object, void* ptr);

typedef pesapi_value(*pesapi_get_property_uint64_func)(pesapi_env env, pesapi_value object, uint64_t key);
typedef void (*pesapi_set_property_uint64_func)(pesapi_env env, pesapi_value object, uint64_t key, pesapi_value value);

typedef pesapi_value(*pesapi_call_function_func)(
    pesapi_env env, pesapi_value func, pesapi_value this_object, int argc, const pesapi_value argv[]);

typedef int (*pesapi_dostring_func)(
    pesapi_env env, const uint8_t* code, size_t code_size, const char* path, pesapi_value_ref value_ref);
typedef pesapi_value(*pesapi_loadstring_func)(
    pesapi_env env, const uint8_t* code, size_t code_size, const char* path, pesapi_value_ref value_ref);

typedef pesapi_value(*pesapi_global_func)(pesapi_env env);
typedef const void* (*pesapi_get_env_private_func)(pesapi_env env);
typedef void (*pesapi_set_env_private_func)(pesapi_env env, const void* ptr);
typedef int (*pesapi_next_func)(pesapi_env env, int idx);
typedef int(*pesapi_get_auth_code_func)();

struct pesapi_ffi
{
    pesapi_create_null_func create_null;
    pesapi_create_undefined_func create_undefined;
    pesapi_create_boolean_func create_boolean;
    pesapi_create_int32_func create_int32;
    pesapi_create_uint32_func create_uint32;
    pesapi_create_int64_func create_int64;
    pesapi_create_uint64_func create_uint64;
    pesapi_create_double_func create_double;
    pesapi_create_string_utf8_func create_string_utf8;
    pesapi_create_binary_func create_binary;
    pesapi_create_array_func create_array;
    pesapi_create_object_func create_object;
    pesapi_create_function_func create_function;
    pesapi_create_class_func create_class;
    pesapi_get_value_bool_func get_value_bool;
    pesapi_get_value_int32_func get_value_int32;
    pesapi_get_value_uint32_func get_value_uint32;
    pesapi_get_value_int64_func get_value_int64;
    pesapi_get_value_uint64_func get_value_uint64;
    pesapi_get_value_double_func get_value_double;
    pesapi_get_value_string_utf8_func get_value_string_utf8;
    pesapi_get_value_binary_func get_value_binary;
    pesapi_get_array_length_func get_array_length;
    pesapi_get_array_element_func get_array_element;
    pesapi_is_null_func is_null;
    pesapi_is_undefined_func is_undefined;
    pesapi_is_boolean_func is_boolean;
    pesapi_is_int32_func is_int32;
    pesapi_is_uint32_func is_uint32;
    pesapi_is_int64_func is_int64;
    pesapi_is_uint64_func is_uint64;
    pesapi_is_double_func is_double;
    pesapi_is_string_func is_string;
    pesapi_is_object_func is_object;
    pesapi_is_userdata_func is_userdata;
    pesapi_is_function_func is_function;
    pesapi_is_binary_func is_binary;
    pesapi_is_array_func is_array;
    pesapi_native_object_to_value_func native_object_to_value;
    pesapi_get_native_object_ptr_func get_native_object_ptr;
    pesapi_get_native_object_typeid_func get_native_object_typeid;
    pesapi_is_instance_of_func is_instance_of;
    pesapi_boxing_func boxing;
    pesapi_unboxing_func unboxing;
    pesapi_update_boxed_value_func update_boxed_value;
    pesapi_is_boxed_value_func is_boxed_value;
    pesapi_get_args_len_func get_args_len;
    pesapi_get_arg_func get_arg;
    pesapi_get_env_func get_env;
    pesapi_get_this_func get_this;
    pesapi_get_holder_func get_holder;
    pesapi_get_userdata_func get_userdata;
    pesapi_add_return_func add_return;
    pesapi_get_return_num_func get_return_num;
    pesapi_throw_by_string_func throw_by_string;
    pesapi_create_env_ref_func create_env_ref;
    pesapi_env_ref_is_valid_func env_ref_is_valid;
    pesapi_get_env_from_ref_func get_env_from_ref;
    pesapi_duplicate_env_ref_func duplicate_env_ref;
    pesapi_release_env_ref_func release_env_ref;
    pesapi_open_scope_func open_scope;
    pesapi_open_scope_placement_func open_scope_placement;
    pesapi_has_caught_func has_caught;
    pesapi_get_exception_as_string_func get_exception_as_string;
    pesapi_close_scope_func close_scope;
    pesapi_close_scope_placement_func close_scope_placement;
    pesapi_create_value_ref_func create_value_ref;
    pesapi_duplicate_value_ref_func duplicate_value_ref;
    pesapi_release_value_ref_func release_value_ref;
    pesapi_get_value_from_ref_func get_value_from_ref;
    pesapi_set_ref_weak_func set_ref_weak;
    pesapi_set_owner_func set_owner;
    pesapi_get_ref_associated_env_func get_ref_associated_env;
    pesapi_get_ref_internal_fields_func get_ref_internal_fields;
    pesapi_get_property_func get_property;
    pesapi_set_property_func set_property;
    pesapi_get_private_func get_private;
    pesapi_set_private_func set_private;
    pesapi_get_property_uint64_func get_property_uint64;
    pesapi_set_property_uint64_func set_property_uint64;
    pesapi_call_function_func call_function;
    pesapi_dostring_func dostring;
    pesapi_loadstring_func loadstring;
    pesapi_global_func global;
    pesapi_get_env_private_func get_env_private;
    pesapi_set_env_private_func set_env_private;
    pesapi_next_func next;
    pesapi_get_auth_code_func get_auth_code;
};

PESAPI_EXTERN pesapi_type_info pesapi_alloc_type_infos(size_t count);

PESAPI_EXTERN void pesapi_set_type_info(
    pesapi_type_info type_infos, size_t index, const char* name, bool is_pointer, bool is_const, bool is_ref, bool is_primitive);

PESAPI_EXTERN pesapi_signature_info pesapi_create_signature_info(
    pesapi_type_info return_type, size_t parameter_count, pesapi_type_info parameter_types);

PESAPI_EXTERN pesapi_property_descriptor pesapi_alloc_property_descriptors(size_t count);

// using pesapi_get_userdata obtain userdata in callback
PESAPI_EXTERN void pesapi_set_method_info(pesapi_property_descriptor properties, size_t index, const char* name, bool is_static,
    pesapi_callback method, void* userdata, pesapi_signature_info signature_info);

PESAPI_EXTERN void pesapi_set_property_info(pesapi_property_descriptor properties, size_t index, const char* name, bool is_static,
    pesapi_callback getter, pesapi_callback setter, void* getter_userdata, void* setter_userdata, pesapi_type_info type_info);

PESAPI_EXTERN void pesapi_define_class(
    const void* type_id,
    const void* super_type_id,
    const char* type_name,
    pesapi_constructor constructor,
    pesapi_finalize finalize,
    size_t property_count,
    pesapi_property_descriptor properties,
    void* userdata,
    bool dictionary,
    bool enumerable);

PESAPI_EXTERN void* pesapi_get_class_data(const void* type_id, bool force_load);

PESAPI_EXTERN bool pesapi_trace_native_object_lifecycle(
    const void* type_id, pesapi_on_native_object_enter on_enter, pesapi_on_native_object_exit on_exit);

PESAPI_EXTERN void pesapi_on_class_not_found(pesapi_class_not_found_callback callback);

PESAPI_EXTERN void pesapi_class_type_info(const char* proto_magic_id, const void* type_id, const void* constructor_info,
    const void* methods_info, const void* functions_info, const void* properties_info, const void* variables_info);

PESAPI_EXTERN const void* pesapi_find_type_id(const char* module_name, const char* type_name);

EXTERN_C_END

#endif
