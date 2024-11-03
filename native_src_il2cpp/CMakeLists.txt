cmake_minimum_required(VERSION 3.15)
cmake_policy(SET CMP0091 NEW)

project(XLuaPlugin)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_STANDARD 14)

add_definitions(-DUSE_OUTSIZE_UNITY)

if ( IOS )
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fembed-bitcode")
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fembed-bitcode")
endif ()

find_path(XLUA_PROJECT_DIR NAMES SConstruct
    PATHS 
    ${PROJECT_SOURCE_DIR}
    NO_DEFAULT_PATH
)

MARK_AS_ADVANCED(XLUA_PROJECT_DIR)

IF (NOT LUA_VERSION)
    set(LUA_VERSION "5.4.7")
endif()

set(LUA_SRC_PATH ${PROJECT_SOURCE_DIR}/../build/lua-${LUA_VERSION}/src)
message(STATUS "LUA_SRC_PATH = ${LUA_SRC_PATH}")
include_directories(
    Inc
    ../com.tencent.xlua/Plugins/xlua_il2cpp
    ${LUA_SRC_PATH}
    ${PROJECT_SOURCE_DIR}/../native_src/Inc
)

aux_source_directory(${LUA_SRC_PATH} LUA_CORE)
list(REMOVE_ITEM LUA_CORE &{LUA_SRC_PATH}/lua.c ${LUA_SRC_PATH}/luac.c)
set (LUA_LIB )

set ( XLUA_INC
    Inc/Bindings.hpp
    Inc/CppObjectMapper.h
    Inc/DataTransfer.h
    Inc/LuaClassRegister.h
    Inc/ObjectCacheNode.h
    Inc/pesapi.h
    Inc/PesapiBackend.hpp
    Inc/PesapiObject.hpp
    Inc/StaticCall.hpp
    Inc/Typeinfo.hpp
    Inc/UnityExports4XLua.h
    Inc/XLuaNamespaceDef.h
)

set ( XLUA_SRC
    Src/XLua.cpp
    Src/PesapiLuaImpl.cpp
    Src/PesapiAddonLoad.cpp
    Src/CppObjectMapper.cpp
    Src/DataTransfer.cpp
    Src/LuaClassRegister.cpp
)

set(XLUA_COMPILE_DEFINITIONS)

if(DEFINED XLUA_EXTRA_SRC)
    list(APPEND XLUA_SRC ${XLUA_EXTRA_SRC})
endif()

if(DEFINED XLUA_EXTRA_INC)
    include_directories(${XLUA_EXTRA_INC})
endif()

macro(source_group_by_dir proj_dir source_files)
    if(MSVC OR APPLE)
        get_filename_component(sgbd_cur_dir ${proj_dir} ABSOLUTE)
        foreach(sgbd_file ${${source_files}})
			get_filename_component(sgbd_abs_file ${sgbd_file} ABSOLUTE)
            file(RELATIVE_PATH sgbd_fpath ${sgbd_cur_dir} ${sgbd_abs_file})
            string(REGEX REPLACE "\(.*\)/.*" \\1 sgbd_group_name ${sgbd_fpath})
            string(COMPARE EQUAL ${sgbd_fpath} ${sgbd_group_name} sgbd_nogroup)
            string(REPLACE "/" "\\" sgbd_group_name ${sgbd_group_name})
            if(sgbd_nogroup)
                set(sgbd_group_name "\\")
            endif(sgbd_nogroup)
            source_group(${sgbd_group_name} FILES ${sgbd_file})
        endforeach(sgbd_file)
    endif(MSVC OR APPLE)
endmacro(source_group_by_dir)

source_group_by_dir(${CMAKE_CURRENT_SOURCE_DIR} LUA_CORE)
source_group_by_dir(${CMAKE_CURRENT_SOURCE_DIR} XLUA_INC)
source_group_by_dir(${CMAKE_CURRENT_SOURCE_DIR} XLUA_SRC)


if ( APPLE )
    if ( IOS )
        set(CMAKE_OSX_ARCHITECTURES "$(ARCHS_STANDARD)")
        add_library(xlua_il2cpp STATIC
            ${LUA_CORE}
            ${XLUA_SRC} 
            ${XLUA_INC}
        )
		set_xcode_property (xlua_il2cpp IPHONEOS_DEPLOYMENT_TARGET "7.0" "all")
    else ()
        if ( NOT DEFINED FOR_SILICON )
            set(CMAKE_OSX_ARCHITECTURES x86_64)
        else ()
            set(CMAKE_OSX_ARCHITECTURES arm64)
        endif ()
        
        set(CMAKE_SKIP_RPATH FALSE)    
        add_link_options(-rpath "@loader_path/")
        add_library(xlua_il2cpp SHARED
            ${LUA_CORE}
            ${XLUA_SRC} 
            ${XLUA_INC}
        )
    endif ()
elseif ( ANDROID )
    add_library(xlua_il2cpp STATIC
        ${LUA_CORE}
        ${XLUA_SRC} 
        ${XLUA_INC}
    )
else ()
    add_library(xlua_il2cpp SHARED
        ${LUA_CORE}
        ${XLUA_SRC} 
        ${XLUA_INC}
    )
endif ()

target_compile_definitions (xlua_il2cpp PRIVATE EXPERIMENTAL_IL2CPP_XLUA)

if ( NOT CMAKE_BUILD_TYPE MATCHES "Release" )
    target_compile_definitions (xlua_il2cpp PRIVATE XLUA_DEBUG)
endif ()

if ( MSYS OR WIN32 )
    if ( WIN32 ) 
        target_compile_options(xlua_il2cpp
            PRIVATE 
            $<$<CXX_COMPILER_ID:MSVC>:/bigobj>
        )
        target_link_libraries(xlua_il2cpp
            winmm.lib
            dbghelp.lib
            shlwapi.lib
        )
    endif ()

    # definition
    target_compile_definitions (xlua_il2cpp PRIVATE PLATFORM_WINDOWS)

elseif ( ANDROID )

    find_library(log-lib log)
    target_link_libraries(xlua_il2cpp
        ${log-lib}
    )

    if( ANDROID_ABI STREQUAL "armeabi-v7a")
        # definition
        target_compile_definitions (xlua_il2cpp PRIVATE PLATFORM_ANDROID_ARM)

    else ()
        # link
        target_link_libraries(xlua_il2cpp
            ${log-lib}
        )
        
        # definition
        target_compile_definitions (xlua_il2cpp PRIVATE PLATFORM_ANDROID_ARM64)
    endif ()

elseif ( OHOS )
    set(BACKEND_LIB_NAMES "-Wl,--whole-archive$<SEMICOLON>${BACKEND_LIB_NAMES}$<SEMICOLON>-Wl,--no-whole-archive")
    list(APPEND XLUA_COMPILE_DEFINITIONS PLATFORM_OHOS)
    if ( OHOS_ARCH STREQUAL "armeabi-v7a")
        # definition
        list(APPEND XLUA_COMPILE_DEFINITIONS PLATFORM_OHOS_ARM)

    elseif ( OHOS_ARCH STREQUAL "arm64-v8a")
        # definition
        list(APPEND XLUA_COMPILE_DEFINITIONS PLATFORM_OHOS_ARM64)
    else ()
        # definition
        list(APPEND XLUA_COMPILE_DEFINITIONS PLATFORM_OHOS_x64)
    endif ()
elseif ( APPLE )

    if ( IOS )
        #definition
        if(PLATFORM STREQUAL "SIMULATOR64")
            target_compile_definitions (xlua_il2cpp PRIVATE PLATFORM_IOS_SIMULATOR)
            message(STATUS "SIMULATOR64 BUILD...")
        else ()
            target_compile_definitions (xlua_il2cpp PRIVATE PLATFORM_IOS)
        endif ()

    else ()
    
        #definition
        if ( DEFINED FOR_SILICON )
            target_compile_definitions (xlua_il2cpp PRIVATE PLATFORM_MAC_ARM64)
        endif()
        target_compile_definitions (xlua_il2cpp PRIVATE PLATFORM_MAC)
    endif ()

elseif (UNIX)
    # link
    target_link_libraries(xlua_il2cpp pthread)
    
    # definition
    target_compile_definitions (xlua_il2cpp PRIVATE PLATFORM_LINUX)
endif ()

# link
target_link_libraries(xlua_il2cpp
    ${BACKEND_LIB_NAMES}
)
target_compile_definitions (xlua_il2cpp PRIVATE ${BACKEND_DEFINITIONS})
target_compile_definitions (xlua_il2cpp PRIVATE ${XLUA_COMPILE_DEFINITIONS})

if ( WIN32 AND NOT CYGWIN AND NOT ( CMAKE_SYSTEM_NAME STREQUAL "WindowsStore" ) AND NOT ANDROID AND NOT MSYS)
	set_property(TARGET xlua_il2cpp PROPERTY
             MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
endif ()

install(TARGETS xlua_il2cpp DESTINATION bin)