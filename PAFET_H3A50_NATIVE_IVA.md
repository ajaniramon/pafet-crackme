# PAFET — Jack IV-A: XOR 0x5A hunt + 0x140003a50 nativo en C++

Fecha: 2026-10-29. Encargo "Jack el Destripador IV-A".

## Misión 1 — Localizar el helper del XOR 0x5A de `f_user`: BLOQUEADA con hallazgo claro

**Veredicto: el XOR 0x5A NO sucede como literal inline en `.text`.** Scans estáticos + verificación runtime:

| Patrón | Hits estáticos | Hits runtime (alice) |
|---|---|---|
| `xor byte ptr [...], 0x5A` (`80 /6 5a`) | **0** | — |
| `mov r?d, 0x5A` precediendo call al pool-reader | **0** | — |
| `mov eax, 0x5A` (`b8 5a 00 00 00`) | 21 | **0** (los 21 sitios hookeados, cero hits para `user=alice`) |
| Otras variantes (`mov al/cl/dl/bl, 0x5A`, `xor al, 0x5A`, `push 0x5A`, `mov [...], 0x5A`) | 1+1+0+0+2+2+0 | — |

Los 21 sites de `mov eax, 0x5A` (incluyendo `0x140005bd5` dentro del helper `0x140005b50` ya conocido como fallback) **no se activan durante `f_user(alice)`**. El único `mov cl, 0x5A` cae en `0x140107e2b`, lejos del dispatcher. Los dos `xor al, 0x5A` están en `0x1402babaf` y `0x1403cbb40` — tampoco en la ruta del user-VM.

**Conclusión:** el XOR 0x5A **no se ejecuta como instrucción nativa con `0x5A` como literal**. Vive como operando inmediato dentro del bytecode cifrado del user-VM (`0x1403E5020`, 1752 B). Se dispara vía el pool slot 6 (XOR) con `lit2 = 0x5A` leído desde la tabla de operandos u16 en `ctx[0xf64]` (operand reader `0x1400074d0`). Esto es **territorio LOAD_CONST**, trabajo que Sol tiene asignado — no se duplica aquí.

Evidencia: `vm_pools_evidence/xor_helper_search_ivA.json`, `vm_pools_evidence/xor_mov_5a_frida_ivA.json` (los 21 counts = 0).

## Misión 2 — Reimplementación C++ nativa de `0x140003a50`: ÉXITO COMPLETO

**3/3 vectores byte-exact.** Primera pieza SUSTANTIVA del intérprete nativo, sin dependencia de Unicorn.

Archivos:
- `src/pafet_h3a50_native.h`
- `src/pafet_h3a50_native.cpp`
- `src/main_h3a50_native_test.cpp`
- `src/build_h3a50_ivA.bat` (MSVC)

Build + test:
```
pafet_h3a50_native.cpp
main_h3a50_native_test.cpp
Generando código...

cap#0: OK  (ctx=OK buf1=OK buf2_untouched=OK)
cap#1: OK  (ctx=OK buf1=OK buf2_untouched=OK)
cap#2: OK  (ctx=OK buf1=OK buf2_untouched=OK)

[SUMMARY] 3/3 captures reproduced byte-exact
```

### Contrato verificado del helper

| Campo | Rol |
|---|---|
| `rcx` entrada | puntero al ctx (8 KB) |
| `[ctx+0x1160]` | puntero a `buf2` (verificado en los 3 vectores: `ctx[0x1160] == buf2_ptr`, nunca `buf1_ptr`) |
| `[ctx+0x1e8]`, `[ctx+0x1f0]`, `[ctx+0x1f8]`, `[ctx+0x200]`, `[ctx+0x218]`, `[ctx+0x27a]` | estado leído por el prolog (state_tick) |
| `[ctx+0x28]`, `[ctx+0x30]` | contadores splitmix (phi + splitmix constants) |
| `[ctx+0x20]`, `[ctx+0x188]`, `[ctx+0x190]` | constantes multiplicativas / XOR |
| `[ctx+0x89f + r8_old]` | buf2 shadow byte (dentro del propio ctx) |
| `buf2[r8_old * 8]` | qword escrito al final |
| retorno `rax` | `rdx_mix` tras ROR condicional |

### Hallazgos de reversing durante el porting

1. **Panic path**: si `(int32_t)r11_updated <= 0`, el helper carga `edx = 0x53504f50` ('POPS') y llama a `0x1400029a0` (panic handler con freeze loop + int3). Flujo normal sale por `ret` en `0x140003c30`. En C++ reflejado como `std::abort()`.

2. **`movzx edx, al` clobbers rdx dos veces** (en `0x140003aef` y `0x140003b45`). Cada state-tick overwrite de `ctx[0x27a]` destruye el `rdx` previo. Los subsiguientes `imul rdx, rbx` arrancan con `rdx = (r10 >> 0x1b) & 0xff`, no con el rdx del chain anterior. El primer intento del port falló por mantener el `rdx` viejo (ctx diff en offset 0x218); corregido con reset explícito.

3. **`ctx[0x1160]` identifica buf2, no buf1**. Verificado: en los 3 vectores `ctx[0x1160] == buf2_ptr`. `buf1` no se modifica (`0 diffs` en los 3 captures); solo buf2 recibe la qword en offset `r8_old*8`. El port inicial tenía esto invertido y fallaba todos los asserts de buf; corregido.

4. **Doble write a `ctx[0x218]`**: el prolog escribe un valor (cmove r14b), y el body del main escribe un segundo valor (cmove también). El valor final observable es el segundo.

5. **Semántica branch-free respecto al input**: todas las ramas del helper dependen de estado derivado (r14b, r11, cl1, cl2), no de bytes del input. Esto encaja con la conclusión global de Sol: la user-VM no tiene branches value-dependent.

## Impacto global

- **Primera pieza sustantiva del intérprete nativo**: el helper más llamado del user-VM (`0x140003a50`, 33/35 handlers lo invocan) ahora corre en C++ puro, sin Unicorn ni Frida, byte-exact al PE.
- **Grieta cerrada sobre el XOR 0x5A**: ya no se busca como literal; se delega al pipeline LOAD_CONST.
- **Build no roto**: `pafet_uservm_test.exe` (fast 11/11, IR 6/7) y `pafet_uservm_helpers_test.exe` (40/40) siguen pasando. El binario nuevo es `pafet_h3a50_native_test.exe` (independiente).

## Lo que NO está hecho

- Integración de `handler_h3a50` en `src/pafet_uservm.cpp` para sustituir el placeholder del handler que lo invoca. Requiere decidir qué handler(s) del dispatcher llaman a `0x140003a50` como prolog o como body, y re-estructurar el dispatcher. Siguiente iteración.
- `0x140003880` (1/3 vectores) no se portó aún — está pendiente del fork paralelo IV-B.
- XOR 0x5A real localizado concretamente (dentro del bytecode cifrado) — Sol.

## Build / reproducción

```sh
# From repo root
cd src && cmd //c build_h3a50_ivA.bat   # MSVC build
cd .. && ./src/pafet_h3a50_native_test.exe
# Expected: [SUMMARY] 3/3 captures reproduced byte-exact
```

Vectores verificados en `vm_pools_evidence/usuario_vm_h3a50_fullctx_8k_alice.json` (3 captures para `user=alice`).

## Métricas honestas

- Helpers con port nativo C++ verificado byte-exact: **1 nuevo** (`0x140003a50`), total **2** (contando `0x140005b50` del commit previo).
- Vectores runtime verificados en C++: **3/3** nuevos.
- XOR 0x5A: **no localizado como literal** — hallazgo negativo con evidencia robusta.
- Operaciones virtuales en C++ nativo: **2 primitivas** (xor_mask_writer + h3a50).

El prototipo principal (`src/pafet_uservm.cpp`) sigue usando `f_user` como backend. Para desplazar esa muleta hace falta identificar qué handlers del dispatcher invocan `handler_h3a50` como pieza semántica, trabajo del siguiente ciclo.
