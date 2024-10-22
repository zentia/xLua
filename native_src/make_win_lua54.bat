
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


mkdir build64_54 & pushd build64
cmake -DLUA_VERSION=5.4.7 -G "%__VS%" -A x64  ..
popd
cmake --build build64 --config Release
copy /Y build64\Release\xlua.dll plugin_lua54\Plugins\x86_64\xlua.dll

mkdir build32 & pushd build32
cmake -DLUA_VERSION=5.4.7 -G "%__VS%" -A Win32 ..
popd
cmake --build build32_54 --config Release
copy /Y build32\Release\xlua.dll plugin_lua54\Plugins\x86\xlua.dll

pause