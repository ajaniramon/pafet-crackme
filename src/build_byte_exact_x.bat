@echo off
REM Jack X: build the byte-exact canonical-IR test.
call "C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\VC\Auxiliary\Build\vcvars64.bat" >nul
cl /nologo /EHsc /std:c++17 /O2 /W3 /wd4100 /wd4267 ^
   pafet_canonical_interp_vii.cpp main_byte_exact_test_x.cpp ^
   /Fe:pafet_byte_exact_test_x.exe
