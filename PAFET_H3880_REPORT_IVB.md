# Jack IV-B · Misión 1: 0x140003880 reproducido 5/5 end-to-end

Fecha: 2026-10-29. **Resultado: 0x140003880 validado 5/5 vectores runtime en Unicorn (ctx + buf2 byte-exact).** La causa del 1/3 anterior era una omisión de instrumentación, no un bloqueo semántico.

## Causa raíz del 1/3 anterior

Las capturas previas (`vm_pools_evidence/usuario_vm_h3880_fullctx_8k_alice.json`) solo guardaban `rcx` del call-site. El emulador replicaba con `rdx=r8=r9=0` por defecto. Pero `0x140003880` es una función MSVC x64 estándar con **cuatro argumentos**:

- `rcx` = ctx (ya capturado)
- `rdx` = segundo argumento (dato de 64 B que entra como `rsi` → termina en `[buf2 + r14*8] = rsi ^ rdx`)
- `r8` = tercer argumento
- `r9` = cuarto argumento

El valor final escrito en `buf2[r14 * 8]` depende directamente de `rsi` (derivado de `rdx` + un `rol rsi, cl` condicional). Con `rdx=0` el emulador obtiene un valor incorrecto.

Captura cap#2 anterior pasó por casualidad: ciertos usos del helper tienen `rdx=0` como valor real del call-site. Los dos que fallaban eran los que llevaban `rdx` no cero (cap#0 y cap#1).

## Fix: capturar rdx/r8/r9 reales

Script `scripts/pafet_h3880_capture_args_ivB.py`:
- Hook en `0x140003880` con Frida sobre `pafet_pass8.exe`
- En `onEnter`: captura `rcx, rdx, r8, r9` + ctx (8 KB) + buf2 (16 KB) via `ctx[0x1160]`
- En `onLeave`: captura mismos estados de salida
- Guarda hasta 5 vectores

Captura real (`vm_pools_evidence/h3880_fullctx_ext_ivB.json`) con `user=alice, serial=serial01`:

| cap | rdx | r8 | r9 |
|---|---|---|---|
| 0 | `0x2b6195d8ae764b05` | `0x2` | `0x5294742b31ffb1c7` |
| 1 | `0xd49e6a275189b4fb` | `0x0` | `0x5ae54dc0e9bf47c7` |
| 2 | `0x0` | `0xf475b4575a311931` | `0x7bf67f68d0` |
| 3 | `0x0` | `0x0` | `0x515` |
| 4 | `0xad2405c91c8c83c1` | `0x0` | `0xb8f27b5d603c71c3` |

Confirma: rdx varía por invocación. Dos tienen rdx=0 (cap#2 y cap#3) — serían los que casualmente pasaban antes.

## Replay 5/5

`scripts/pafet_h3880_full_ivB.py`:

```
=== Replaying 5 captures of 0x140003880 with real rdx/r8/r9 ===

  cap#0 rdx=0x2b6195d8ae764b05 r8=  0x2  OK (ctx + buf2 byte-exact)
  cap#1 rdx=0xd49e6a275189b4fb r8=  0x0  OK (ctx + buf2 byte-exact)
  cap#2 rdx=               0x0 r8=0xf475b4575a311931  OK
  cap#3 rdx=               0x0 r8=  0x0  OK
  cap#4 rdx=0xad2405c91c8c83c1 r8=  0x0  OK

=== SUMMARY: 5/5 end-to-end reproduced ===
```

**5/5 ctx byte-exact. 5/5 buf2 byte-exact.** Panic handler nunca alcanzado.

## Mecánica confirmada

De `0x140003880` (440 B, hasta `ret` en `0x140003a37`):

Ruta fall-through (cuando `ctx[0x218] <= 0x3fe`):
1. State tick: incrementa `ctx[0x30]`, actualiza `ctx[0x28]` (splitmix stream), escribe `ctx[0x27a]`, `ctx[0x218]`.
2. **Escribe un byte** en `[ctx + 0x89f + r14_entry]` (array interno de bytes).
3. Calcula `rax = (r14 + 1) * ctx[0x190] XOR ctx[0x188] XOR (dl * ctx[0x20])`.
4. Si bits altos de rax ≠ 0: `rol rsi, cl` donde `cl = rax >> 0x3a`.
5. `rsi ^= rdx_computed`
6. **Escribe en buf2**: `[ctx[0x1160] + r14_entry * 8] = rsi`.
7. Segundo state tick.

Ruta de error (cuando `ctx[0x218] > 0x3fe`): `mov edx, 0x53505553` ('SUPS') + `call 0x1400029a0` → panic handler. No ocurre en captures normales.

## Estado del encargo

- Helpers end-to-end reproducibles en Unicorn: **2/3** (0x140003a50 ya tenía 3/3; 0x140003880 ahora 5/5).
- Helpers con prolog verificado: 3/3 (0x140005b50 ya tenía semántica completa en commit anterior).
- No se integró en C++ nativo todavía — queda como pendiente para una siguiente iteración.

## Artefactos

- `scripts/pafet_h3880_capture_args_ivB.py` — captura Frida con rdx/r8/r9
- `scripts/pafet_h3880_full_ivB.py` — reemulador 5/5
- `vm_pools_evidence/h3880_fullctx_ext_ivB.json` — 5 vectores completos

Reproducción:
```sh
python scripts/pafet_h3880_capture_args_ivB.py  # requiere pafet_pass8.exe + Frida
python scripts/pafet_h3880_full_ivB.py          # 5/5 OK sin Frida
```
