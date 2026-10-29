@echo off
REM Jack XXI — build two variants of our own Pafet from the 4 reconstructed VMs.
REM Variant 1 (default): targets the ORIGINAL PE's gate (unknown preimage).
REM Variant 2 (ramon):   targets sha256("ramon") with a (ramon,barcelona) ciphertext.
call "C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\VC\Auxiliary\Build\vcvars64.bat" >nul

cl /nologo /EHsc /std:c++17 /O2 /W3 /wd4100 /wd4267 ^
   pafet_recompile_xxi.cpp ^
   /Fe:pafet_recompile_xxi_original.exe ^
   /Fo:pafet_recompile_xxi_original.obj

cl /nologo /EHsc /std:c++17 /O2 /W3 /wd4100 /wd4267 ^
   /DEXPECTED_HASH="\"e27622e8321da74e6eafb1cee8e7804200cb536ef606173c0376d5f8c470ceaf\"" ^
   /DCIPHERTEXT_HEX="\"4cec8388057d20efbed851eca04c7876a6de523527f76e76443119757c974ab4c31057d9313d1110c31057d9313d1110c31057d9313d1110c31057d9313d1110de21d3f687d1f3ca\"" ^
   pafet_recompile_xxi.cpp ^
   /Fe:pafet_recompile_xxi_ramon.exe ^
   /Fo:pafet_recompile_xxi_ramon.obj
