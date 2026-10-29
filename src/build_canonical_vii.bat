@echo off
REM Build the Jack VII canonical IR interpreter test (MSVC).
call "C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\VC\Auxiliary\Build\vcvars64.bat" >nul
cl /nologo /EHsc /std:c++17 /O2 /W3 /wd4100 /wd4267 ^
   pafet_canonical_interp_vii.cpp main_canonical_test_vii.cpp ^
   /Fe:pafet_canonical_test_vii.exe
