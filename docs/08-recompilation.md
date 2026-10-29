# 08 — Recompiling Pafet from scratch

Jack XXI (commit `eec2068`) assembles the 4 reconstructed nested VMs
and the pure-C++ 3DES-EDE into a single executable that behaves like
`pafet.bin`:

```text
src/pafet_recompile_xxi.cpp         # the glue
src/pafet_shavm_native_xix.h        # SHA-VM
src/pafet_serialvm_native_xviii.h   # serial-VM
src/pafet_hexvm_native_xx.h         # hex-VM
src/pafet_byte_writer_x.h           # user-VM
src/pafet_des3_xxi.h                # pure-C++ 3DES-EDE + permissive unpad
```

## Two builds, same source

The gate hash (`EXPECTED_HASH`) and the ciphertext hex
(`CIPHERTEXT_HEX`) are compile-time `#define`s. One source file
produces two executables:

### `pafet_recompile_xxi_original.exe`

Compiled with the **original** PE's values:

```text
EXPECTED_HASH  = 9419f86b97bd379906be72ea80517c075a499d0db0a37499132c2d203cc21420
CIPHERTEXT_HEX = 6f56f79c... (72 B)
```

Behavior: rejects every known username. Equivalent to `pafet.bin`
in the acceptance sense.

### `pafet_recompile_xxi_ramon.exe`

Compiled with a **rekeyed** target: `sha256("ramon") == ...` and a
ciphertext computed from the plaintext
`CMO{pafet_rekeyed_by_ramon_____________________________________________}`
encrypted under `key = f_user("ramon") ++ g_serial("barcelona") ++ pad`.

Behavior:

```powershell
echo "ramon`nbarcelona" | .\src\pafet_recompile_xxi_ramon.exe
# ==================================
#    VSEC-RECOMPILED Pafet Challenge
# ==================================
#
# Username: Serial  : [+] Correct!
# [+] Flag: CMO{pafet_rekeyed_by_ramon_____________________________________________}
```

Reject path for any other username:

```powershell
echo "notramon`nbarcelona" | .\src\pafet_recompile_xxi_ramon.exe
# [!] Invalid username
```

## Pipeline in `main`

Direct read of
[`src/pafet_recompile_xxi.cpp`](../src/pafet_recompile_xxi.cpp):

```cpp
// 1. Read credentials
getline(cin, username); rtrim(username);
getline(cin, serial);   rtrim(serial);

// 2. SHA-VM gate
pafet_shavm::compute(username.data(), username.size(), digest);
if (hex_of(digest) != EXPECTED_HASH) { print "Invalid username"; exit; }

// 3. user-VM: f_user
for (i = 0..username.size()) {
    f_u[i] = pafet_x::byte_writer(username.data(), username.size(), i);
}

// 4. serial-VM: g_serial
pafet_serialvm_xviii::serial_vm(serial.data(), g_s.data(), serial.size());

// 5. Key assembly
memcpy(key, f_u.data(), min(24, f_u.size()));
memcpy(key + take_u, g_s.data(), min(24 - take_u, g_s.size()));
// rest is zero-initialized

// 6. hex-VM: decode ciphertext
pafet_hexvm_xx::hex_vm(CIPHERTEXT_HEX, 144, ct);

// 7. DES3-EDE 3 passes + permissive unpad
pt = pafet_des3_xxi::decrypt_material(ct, key);

// 8. Shape check
if (pt[0..4] == "CMO{" && pt.back() == '}') print "Correct! Flag: " << pt;
else print "Wrong credentials";
```

## Build

```powershell
cd src
.\build_recompile_xxi.bat
```

The batch file compiles both variants (original + ramon) and places
the resulting `.exe` files in `src/`.

Requires MSVC `cl.exe` from a `vcvarsall x64` shell. No external
dependencies — the C++ is self-contained.

## Diff against `pafet.bin`

| Property                              | `pafet.bin`                                | `pafet_recompile_xxi_*.exe`                |
|---------------------------------------|---------------------------------------------|---------------------------------------------|
| Pipeline (SHA → f_user → RC4 → DES3)  | yes                                         | yes                                         |
| Permissive unpad                      | yes                                         | yes                                         |
| 4 nested VMs with shared ALU pool     | yes                                         | **no** — primitives are direct calls        |
| Encrypted bytecode blob at `0x1403E5020` | yes                                       | **no** — f_user is a 1-line C++ function    |
| Resolver / dispatcher / 35 handlers   | yes                                         | **no** — one function per primitive         |
| Threaded code, `call r9` dispatch     | yes                                         | **no**                                      |
| Materializer / Feistel-decrypted blob | yes                                         | **no**                                      |
| Observable byte-exact output          | yes                                         | **yes** on every tested input              |

The replication is **behavioral**, not binary-identical: the recompiled
version takes `(username, serial)` and produces the same bytes the
original would (with the user's chosen gate hash and ciphertext), but
it is a thin pipeline, not a virtualized one. If `NIMA` wants a
virtualized clone, the materializer + 73-block canonical bytecode +
10-op ISA are documented well enough in [03-user-vm.md](03-user-vm.md)
and [09-bytecode.md](09-bytecode.md) to rebuild one.

## Earlier recompile attempts

| Approach                                           | Status                      |
|----------------------------------------------------|-----------------------------|
| `pafet_custom_ramon.exe` (early rekey by patching `.rdata`) | works, but hostile to further edits (binary patch, not source) |
| `pafet_recompile_xxi_*.exe` (full source rebuild)  | **current**, pure C++, re-buildable |
