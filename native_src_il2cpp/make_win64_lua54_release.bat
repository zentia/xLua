
set "__VS=Visual Studio 17 2022"
set "__VSWhere=%ProgramFiles(x86)%\Microsoft Visual Studio\Installer\vswhere.exe"
set "__VSDISPLAY="
set "__VSVER="
if exist "%__VSWhere%" (
    for /f "tokens=*" %%p in (
		'"%__VSWhere%" -latest -property catalog_productLineVersion'
	) do set __VSDISPLAY=%%p

	for /f "tokens=*" %%p in (
		'"%__VSWhere%" -latest -property catalog_productDisplayVersion'
	) do set __VSVER=%%p
	
)
if "%__VSVER%" neq "" (	
	set __VS=Visual Studio %__VSVER:~0,2% %__VSDisplay%
)

mkdir build64 & pushd build64
cmake -G "%__VS%" -A x64 ..
popd
cmake --build build64 --config Release
copy /Y build64\Release\xlua_il2cpp.dll ..\com.tencent.xlua\Plugins\x86_64\xlua_il2cpp.dll
copy /Y build64\Release\xlua_il2cpp.dll ..\il2cppwin\build\bin\xLua_Data\Plugins\x86_64\xlua_il2cpp.dll
copy /Y build64\Release\xlua_il2cpp.dll ..\noil2cppwin\build\bin\xLua_Data\Plugins\x86_64\xlua_il2cpp.dll
