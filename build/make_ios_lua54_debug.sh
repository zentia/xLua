mkdir -p build_ios_54 && cd build_ios_54
cmake -DLUA_VERSION=5.4.7 -DCMAKE_TOOLCHAIN_FILE=../cmake/ios.toolchain.cmake -DPLATFORM=OS64 -GXcode ../
cd ..
cmake --build build_ios_54 --config Debug
cp build_ios_54/Debug-iphoneos/libxlua_il2cpp.a ../com.tencent.xlua/Plugins/iOS/libxlua_il2cpp.a 

