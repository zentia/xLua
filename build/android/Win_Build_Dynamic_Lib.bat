@echo off
SETLOCAL ENABLEEXTENSIONS

If not Defined ANDROID_NDK_ROOT (
    Echo ANDROID_NDK_ROOT is not defined! Build Cancelled!
	GOTO :EOF
)
If not exist %ANDROID_NDK_ROOT% (
    Echo Folder %ANDROID_NDK_ROOT% Is Not Found! Build Cancelled!
	GOTO :EOF
)

Echo Android NDK Found:%ANDROID_NDK_ROOT%

set ANDROID_PLATFORM="android-19"




set BUILD_TARGET[0]=armeabi-v7a
set BUILD_TARGET[1]=arm64-v8a
set BUILD_TARGET[2]=x86_64
set BUILD_TYPE[0]=Debug
set BUILD_TYPE[1]=MinSizeRel

rem %%j : BUILD_TARGET
rem %%p : BUILD_TYPE
for /l %%a in (0,1,2) do (
    for /f "usebackq delims== tokens=1-2" %%i in (`set BUILD_TARGET[%%a]`) do (
		rd /s /q %%j
		md %%j
		cd %%j
		for /l %%a in (0,1,1) do (
			for /f "usebackq delims== tokens=1-2" %%o in (`set BUILD_TYPE[%%a]`) do (
				md %%p
				cd %%p
				cmake ..\..\..^
				 -G="MinGW Makefiles"^
				 -DANDROID_ABI=%%j^
				 -DANDROID_PLATFORM=%ANDROID_PLATFORM%^
				 -DANDROID_NDK=%ANDROID_NDK_ROOT%^
				 -DCMAKE_BUILD_TYPE="%%p"^
				 -DBUILD_TYPE=dynamic_lib^
				 -DCMAKE_TOOLCHAIN_FILE=%ANDROID_NDK_ROOT%/build/cmake/android.toolchain.cmake^
				 -DTARGET_PLATFORM:STRING=android^
				 -DANDROID_STL=c++_static
				 
				 %ANDROID_NDK_ROOT%\prebuilt\windows-x86_64\bin\make --trace -j12
				 %ANDROID_NDK_ROOT%\prebuilt\windows-x86_64\bin\make install
				move /Y libGameCore.so libGameCore_Symbol.so
				 %ANDROID_NDK_ROOT%\toolchains\llvm\prebuilt\windows-x86_64\bin\llvm-strip.exe -s libGameCore_Symbol.so -o libGameCore.so
			)
			cd ..
		)
    )
	cd ..
)

pause

 
 
 
 echo FINISH!!!!Press Any Key To Continue...
 pause