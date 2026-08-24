@echo off
setlocal

set "BASE_DIR=%~dp0"
if not "%BASE_DIR:~-1%"=="\" set "BASE_DIR=%BASE_DIR%\"

start G:\OSGame\Client_proj\UnityEngine\WindowsEditor\x64\Release\Unity.exe -projectPath "%~dp0" -cacheServerEnableUpload false -cacheServerEnableDownload false