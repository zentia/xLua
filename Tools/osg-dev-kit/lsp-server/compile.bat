@echo off
rem usage: compile.bat [platform], default is iOS, e.g. compile.bat Android
set platform=%~1
if "%platform%"=="" set platform=iOS
java -jar -Demmy.port=5007 -Dcmd=1 -Dcstype -Dconfig=luacompiler.json -DMT=1 -Drider=0 -Dplatform=%platform% -Xss5095k -Xms512m -Xmx4g EmmyLua-LS-all.jar > 1.txt