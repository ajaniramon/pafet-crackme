@echo off
REM Build the native-primitive coverage reporter with MSVC Build Tools.
call "C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\VC\Auxiliary\Build\vcvars64.bat" >nul
cl /nologo /EHsc /std:c++17 /O2 /W3 /wd4100 /wd4267 ^
   pafet_uservm_native_vA.cpp pafet_h3a50_native.cpp pafet_h3880_native_vA.cpp main_uservm_coverage_vA.cpp ^
   /Fe:pafet_uservm_coverage_vA.exe
