@echo off
REM Jack XX - build the hex-VM native C++ port + its 12-vector differential test.
call "C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\VC\Auxiliary\Build\vcvars64.bat" >nul
cl /nologo /EHsc /std:c++17 /O2 /W3 /wd4100 /wd4267 ^
   main_hexvm_test_xx.cpp /Fe:pafet_hexvm_test_xx.exe
