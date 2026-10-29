@echo off
setlocal
python "%~dp0..\scripts\pafet_hexvm_lift_xxvi.py" --full
if errorlevel 1 exit /b 1
python "%~dp0..\scripts\pafet_hexvm_build_msvc_xxvi.py"
exit /b %errorlevel%
