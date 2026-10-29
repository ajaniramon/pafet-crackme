@echo off
REM Jack XVIII — build the serial-VM native C++ port + its 10-vector differential test.
call "C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\VC\Auxiliary\Build\vcvars64.bat" >nul
cl /nologo /EHsc /std:c++17 /O2 /W3 /wd4100 /wd4267 ^
   main_serialvm_test_xviii.cpp /Fe:pafet_serialvm_test_xviii.exe
