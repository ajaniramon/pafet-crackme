@echo off
REM Build Jack XIX SHA-VM differential test with MSVC Build Tools.
call "C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\VC\Auxiliary\Build\vcvars64.bat" >nul
cl /nologo /EHsc /std:c++17 /O2 /W3 /wd4100 /wd4267 ^
   main_shavm_test_xix.cpp /Fe:pafet_shavm_test_xix.exe
