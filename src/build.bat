@echo off
REM Build the user-VM prototype with MSVC Build Tools.
call "C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\VC\Auxiliary\Build\vcvars64.bat" >nul
cl /nologo /EHsc /std:c++17 /O2 /W3 /wd4100 /wd4267 ^
   pafet_uservm.cpp main_uservm_test.cpp /Fe:pafet_uservm_test.exe
