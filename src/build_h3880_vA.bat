@echo off
REM Build the 0x140003880 native-port differential test with MSVC Build Tools.
call "C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\VC\Auxiliary\Build\vcvars64.bat" >nul
cl /nologo /EHsc /std:c++17 /O2 /W3 /wd4100 /wd4267 ^
   pafet_h3880_native_vA.cpp main_h3880_native_test_vA.cpp ^
   /Fe:pafet_h3880_native_test_vA.exe
