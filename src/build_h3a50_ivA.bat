@echo off
REM Build the native h3a50 differential test with MSVC Build Tools.
call "C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\VC\Auxiliary\Build\vcvars64.bat" >nul
cl /nologo /EHsc /std:c++17 /O2 /W3 /wd4100 /wd4267 ^
   pafet_h3a50_native.cpp main_h3a50_native_test.cpp ^
   /Fe:pafet_h3a50_native_test.exe
