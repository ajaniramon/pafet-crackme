@echo off
call "C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\VC\Auxiliary\Build\vcvars64.bat" >nul
cl /nologo /EHsc /std:c++17 /O2 /W3 /wd4100 /wd4267 /wd4244 ^
   pafet_canonical_interp_vii.cpp main_byte_exact_test_xv.cpp ^
   /Fe:pafet_byte_exact_test_xv.exe
