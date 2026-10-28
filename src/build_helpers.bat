@echo off
REM Build the helpers differential test with MSVC Build Tools.
call "C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\VC\Auxiliary\Build\vcvars64.bat" >nul
cl /nologo /EHsc /std:c++17 /O2 /W3 /wd4100 /wd4267 ^
   pafet_uservm_helpers.cpp main_uservm_helpers_test.cpp ^
   /Fe:pafet_uservm_helpers_test.exe
