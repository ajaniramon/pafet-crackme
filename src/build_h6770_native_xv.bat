@echo off
REM Build Jack XV h6770 native port + test harness.
call "C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\VC\Auxiliary\Build\vcvars64.bat" >nul
cl /nologo /EHsc /std:c++17 /O2 /W3 /wd4100 /wd4267 /wd4244 /wd4267 ^
   pafet_h6770_native_xv.cpp main_h6770_native_test_xv.cpp ^
   /Fe:pafet_h6770_native_test_xv.exe
