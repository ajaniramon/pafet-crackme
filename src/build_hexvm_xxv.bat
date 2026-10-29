@echo off
rem Build JACK XXV hex-VM reconstruction test.
setlocal
call "C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvars64.bat" >nul 2>&1
cl /nologo /EHsc /O2 /std:c++17 /W4 main_hexvm_handlers_test_xxv.cpp /Fe:pafet_hexvm_handlers_test_xxv.exe
if errorlevel 1 goto err
echo [OK] pafet_hexvm_handlers_test_xxv.exe
exit /b 0
:err
echo [BUILD FAILED]
exit /b 1
