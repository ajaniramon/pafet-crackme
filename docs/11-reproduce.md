# 11 — Reproduce every claim

Every byte-exact claim in this writeup can be rebuilt with MSVC on
Windows and validated against the on-disk VMs with Python 3 oracles.

## Toolchain

```powershell
# C++ — MSVC from a Visual Studio Developer prompt (x64):
#   Open "x64 Native Tools Command Prompt for VS 2019" (or 2022).
#   `cl.exe` and `link.exe` must be on PATH.

# Python — standard install + a couple of libraries:
python -m pip install pycryptodome frida pefile capstone unicorn
```

## Build everything in `src/`

```powershell
cd src
.\build.bat                     # user-VM interpreter + 11/11 fast + 6/7 IR
.\build_helpers.bat             # 0x140005b50 helper 40/40
.\build_h3a50_ivA.bat           # 0x140003a50 native 3/3
.\build_h3880_vA.bat            # 0x140003880 native 5/5
.\build_h6770_native_xv.bat     # 0x140006770 native 15/15
.\build_coverage_vA.bat         # unified helpers API, 100% coverage
.\build_canonical_vii.bat       # canonical IR interpreter (structural)
.\build_byte_exact_x.bat        # byte-exact 2 inputs
.\build_byte_exact_xi.bat       # byte-exact 6/9 inputs (lengths 0,1,5,8,14)
.\build_byte_exact_xv.bat       # +27 usernames (33 total)
.\build_serialvm_xviii.bat      # serial-VM 10/10
.\build_shavm_xix.bat           # SHA-VM 12/12
.\build_hexvm_xx.bat            # hex-VM 12/12
.\build_recompile_xxi.bat       # recompiled Pafet (ramon + original)
```

Each build produces one `.exe` next to the source. Running it prints
`PASS`/`FAIL` lines or hex output per input vector.

## Nested VM byte-exact tests

```powershell
.\pafet_serialvm_test_xviii.exe
# ... 10/10 inputs byte-exact

.\pafet_shavm_test_xix.exe
# ... 12/12 inputs byte-exact

.\pafet_hexvm_test_xx.exe
# ... 12/12 inputs byte-exact

.\pafet_byte_exact_test_x.exe       # user-VM, 2 inputs
.\pafet_byte_exact_test_xi.exe      # user-VM, 9 inputs (6 pass)
.\pafet_byte_exact_test_xv.exe      # user-VM, +27 usernames = 33 total
```

## User-VM helpers byte-exact x64 ports

```powershell
.\pafet_uservm_helpers_test.exe     # 0x140005b50, 40/40
.\pafet_h3a50_native_test.exe        # 0x140003a50, 3/3
.\pafet_h3880_native_test_vA.exe     # 0x140003880, 5/5
.\pafet_h6770_native_test_xv.exe     # 0x140006770, 15/15
```

## Full recompiled Pafet

```powershell
# Original PE equivalence (rejects every known username):
echo "ramon`nbarcelona" | .\pafet_recompile_xxi_original.exe
# [!] Invalid username

# Rekeyed Pafet (ramon/barcelona accepted):
echo "ramon`nbarcelona" | .\pafet_recompile_xxi_ramon.exe
# [+] Correct!
# [+] Flag: CMO{pafet_rekeyed_by_ramon______...}

# Any other username rejected by the rekeyed version:
echo "notramon`nbarcelona" | .\pafet_recompile_xxi_ramon.exe
# [!] Invalid username
```

## Offline oracles (Python)

```powershell
# End-to-end offline pipeline — same output as the recompiled .exe
python ..\scripts\pafet_des3_offline.py --self-test --parity-test
python ..\scripts\pafet_des3_offline.py alice serial01 --prefix-only

# SHA-VM equivalence oracle (hashlib)
python ..\scripts\pafet_sha_oracle.py --self-test

# User-VM pool classification (12 ALU slots)
python ..\scripts\pafet_vm_pools_dump.py

# Full crypto audit (self-tests, mathematical properties)
python ..\scripts\pafet_crypto_audit.py
```

## Dynamic captures (Frida)

```powershell
# Capture user-VM IR for a given input (requires pafet_pass8.exe running):
python ..\scripts\pafet_capture_ir_xi.py              # 9 inputs
python ..\scripts\pafet_capture_ir_xv.py              # +27 usernames

# Capture atomic byte-writer vectors for Unicorn:
python ..\scripts\pafet_h3bea0_capture_xiii.py       # 0x14003bea0
python ..\scripts\pafet_h14a00_capture_xvi.py        # 0x140014a00
python ..\scripts\pafet_h6770_capture_xv.py          # 0x140006770

# Capture SHA-VM, serial-VM, hex-VM vectors:
python ..\scripts\pafet_shavm_capture_xix.py
python ..\scripts\pafet_serialvm_capture_xviii.py
python ..\scripts\pafet_hexvm_capture_xx.py
```

## Unicorn oracles

```powershell
python ..\scripts\pafet_h3bea0_unicorn_xiii.py       # 0x14003bea0, 6/6
python ..\scripts\pafet_h14a00_unicorn_xvi.py        # 0x140014a00, 6/6
```

Each Unicorn harness emulates one handler with the captured ctx + the
PE double-mapped at runtime base, plus heap buffers and the trampoline
table RWX. Expected output: `6/6 PASS`.

## File provenance / hashes

```powershell
Get-FileHash -Algorithm SHA256 .\pafet.bin
# fe85e59225387fba4923f3bc6103914fe7b85ba3dc0514c9e37382818fb44d1a

Get-FileHash -Algorithm SHA256 .\audit_evidence\*
# ... (see audit_evidence/README.md)
```

## Sanity test matrix

A reasonable "if everything works" sequence:

```powershell
# 1. Build everything
cd src
for %%b in (build.bat build_helpers.bat build_h3a50_ivA.bat build_h3880_vA.bat `
           build_h6770_native_xv.bat build_coverage_vA.bat build_canonical_vii.bat `
           build_byte_exact_x.bat build_byte_exact_xi.bat build_byte_exact_xv.bat `
           build_serialvm_xviii.bat build_shavm_xix.bat build_hexvm_xx.bat `
           build_recompile_xxi.bat) do .\%%b

# 2. Run all byte-exact tests
.\pafet_serialvm_test_xviii.exe
.\pafet_shavm_test_xix.exe
.\pafet_hexvm_test_xx.exe
.\pafet_byte_exact_test_xv.exe
.\pafet_uservm_helpers_test.exe
.\pafet_h3a50_native_test.exe
.\pafet_h3880_native_test_vA.exe
.\pafet_h6770_native_test_xv.exe

# 3. End-to-end on both variants
echo "ramon`nbarcelona" | .\pafet_recompile_xxi_ramon.exe
echo "ramon`nbarcelona" | .\pafet_recompile_xxi_original.exe

# 4. Offline oracle
python ..\scripts\pafet_des3_offline.py --self-test --parity-test
```

If all pass, every byte-exact claim in this writeup is reproduced on
your machine.

## Alternative: Wine on macOS

For validation outside Windows:

```sh
# On the Mac (via SSH alias `mac`):
ssh mac 'cd ~/pafet_crackme && wine src/pafet_recompile_xxi_ramon.exe < <(echo "ramon"; echo "barcelona")'
```

Wine 11.18 was used earlier in this project to validate
`pafet_custom_ramon.exe`. The recompiled MSVC `.exe` runs the same
way under wine.
