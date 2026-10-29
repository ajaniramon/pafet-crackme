@echo off
setlocal
cd /d "%~dp0"
if not exist ..\jack_xxiii_evidence\build mkdir ..\jack_xxiii_evidence\build
cl /nologo /std:c++17 /EHsc /O2 /utf-8 main_original_vm_xxiii.cpp pafet_original_vm_xxiii.cpp pafet_canonical_bridge_xxiii.cpp pafet_native_writer_xxiii.cpp pafet_h3a50_native.cpp /Fe:..\jack_xxiii_evidence\build\original_vm_xxiii.exe
exit /b %errorlevel%
