@echo off
setlocal

set "BASE_DIR=%~dp0"
if not "%BASE_DIR:~-1%"=="\" set "BASE_DIR=%BASE_DIR%\"

start G:\OSGame\unity-engine-source\build\WindowsEditor\x64\Release\Unity.exe -projectPath "%~dp0\Project" -cacheServerEnableUpload false -cacheServerEnableDownload false