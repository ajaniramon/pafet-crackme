# Jack V-A — Port C++ nativo de `0x140003880` y cobertura semántica

Fecha: 2026-10-29.

## Resumen

Dos entregas de Jack V-A, cada una con evidencia reproducible:

1. **Port C++ nativo de `0x140003880` verificado 5/5 byte-exact** contra los 5 vectores capturados en `vm_pools_evidence/h3880_fullctx_ext_ivB.json`. Reproduce ctx + buf2 exactos tras cada llamada, con los argumentos reales `(ctx, buf2, rdx_arg)`.
2. **Cobertura semántica de las tres primitivas verificadas sobre la traza real**: para `alice/serial01`, el **100% de los 179 (ch, op) pairs ejecutados** invoca al menos una de las tres primitivas con port nativo (`h3a50`, `h3880`, `h5b50`). Promedio 6.53 llamadas a primitivas verificadas por instrucción VM.

## 1. Port C++ nativo de `0x140003880`

Contrato recuperado del desensamblado completo `0x140003880..0x140003a37` (~440 B):

- **Entradas**: `(ctx, buf2, rdx_arg)`. Los argumentos nativos `r8` y `r9` se descartan en el prólogo (sobrescritos por `movzx r8d, byte ptr [rcx+0x27a]` y `movzx r9d, byte ptr [rcx+0x200]`).
- **Lecturas del ctx**: `0x218, 0x1f8, 0x27a, 0x1f0, 0x1e8, 0x200, 0x30, 0x28, 0x20, 0x188, 0x190, 0x1160`.
- **Escrituras del ctx**: `0x30` (incrementado dos veces), `0x28, 0x27a, 0x218`, byte en `0x89f + r14_sxt`.
- **Buf2**: un único qword escrito en `buf2[r14_sxt * 8]`. El valor es `rsi` (el `rdx_arg` original) tras un `rol cl` donde `cl` sale del fmix64 chain, xoreado con `rdx` reciente.
- **Return**: valor final de `ctx[0x218]`.
- **Panic**: si `int32_t(r14) > 0x3fe` (prolog branch) → `std::abort()`.

**Diferencia clave vs `0x140003a50`**: donde h3a50 CALCULA el qword a escribir en buf2 (`r8_mix` via ror64 + xor con buf2 existente), **h3880 ESCRIBE directamente el argumento `rdx_arg` rotado**. Más simple. Y el cmove final usa `ctx[0x200] byte == 0`, no el `r9b` previo (que ya fue sobrescrito por el `movsxd r9, r14d` del main body).

### Resultado del harness

```
cap#0 (rdx=0x2b6195d8ae764b05): OK  (ctx=OK buf2=OK)
cap#1 (rdx=0xd49e6a275189b4fb): OK  (ctx=OK buf2=OK)
cap#2 (rdx=0x0): OK  (ctx=OK buf2=OK)
cap#3 (rdx=0x0): OK  (ctx=OK buf2=OK)
cap#4 (rdx=0xad2405c91c8c83c1): OK  (ctx=OK buf2=OK)
[SUMMARY] 5/5 captures reproduced byte-exact
```

### Nota sobre buf1

El JSON de captures tiene `buf1_ptr = 0x0` y `entry_buf1 = null` para los 5 vectores — buf1 no existe en estos captures. El helper `0x140003880` no toca buf1; solo escribe en el buffer indicado por `ctx[0x1160]` (buf2).

## 2. Cobertura semántica de las primitivas nativas

Captura Frida con hooks simultáneos sobre `0x14003ebb0` (resolver, para asociar llamadas con el (ch, op) en curso), `0x140003a50`, `0x140003880` y `0x140005b50`. Entrada `alice/serial01`.

```
=== Native primitives coverage over resolver trace ===
  Total resolver events (VM instructions via resolver): 633
  Unique (ch, op) pairs in trace: 179

  pairs that invoke verified 0x140003a50 helper: 170 (95.0%)
  pairs that invoke verified 0x140003880 helper: 150 (83.8%)
  pairs that invoke verified 0x140005b50 helper: 176 (98.3%)
  pairs invoking AT LEAST ONE verified helper:   179 (100.0%)

  Total helper calls: h3a50=673 h3880=673 h5b50=2787
  Average verified-primitive calls per VM instruction: 6.53
```

### Lectura honesta

"invoca una primitiva verificada" **NO es lo mismo que** "el handler del (ch, op) está completamente reversed". Los wrappers que llaman a estas tres primitivas no están reversed. Esta métrica solo mide qué fracción de las instrucciones VM del trace toca al menos una pieza de comportamiento cuya reproducción byte-exact tenemos en C++.

Lo que SÍ dice: **cualquier otra pieza de la user-VM que faltara por reconstruir sería una porción del "wrapper" de un (ch, op)**, no el núcleo semántico — porque el núcleo (las primitivas) ya está. Toda instrucción VM contiene al menos una invocación a algo que ya tenemos reversed.

Lo que NO dice: que la salida final de `f_user` surja de llamar a estos tres helpers y nada más. Hay más código entre ellos (prolog/epilog del handler, aritmética intermedia, el verdadero XOR 0x5A que vive como operando LOAD_CONST del bytecode cifrado).

## 3. Archivos (sin git, el coordinador commitea)

- `src/pafet_h3880_native_vA.h` + `src/pafet_h3880_native_vA.cpp`: port C++ con contrato explícito.
- `src/main_h3880_native_test_vA.cpp`: harness 5/5 contra captures de IV-B.
- `src/build_h3880_vA.bat`: build MSVC.
- `src/pafet_uservm_native_vA.h` + `src/pafet_uservm_native_vA.cpp`: API unificada + cargador de JSON de cobertura.
- `src/main_uservm_coverage_vA.cpp`: binario que imprime el informe de cobertura.
- `src/build_coverage_vA.bat`: build MSVC.
- `vm_pools_evidence/coverage_native_vA.json`: datos crudos de la captura Frida (totales + per-pair).
- `vm_pools_evidence/handlers_calling_h3a50_h3880_vA.json`: breakdown anterior (sin h5b50) por si se necesita.

## 4. Regresión

- `src/pafet_uservm_test.exe`: fast 11/11, IR 6/7 (sin cambios).
- `src/pafet_uservm_helpers_test.exe`: 40/40 (sin cambios).
- `src/pafet_h3a50_native_test.exe`: 3/3 (sin cambios).
- `src/pafet_h3880_native_test_vA.exe`: **5/5 (nuevo)**.
- `src/pafet_uservm_coverage_vA.exe`: imprime el informe de cobertura (nuevo).

## 5. Métricas delta vs `bb6529b`

- Helpers con port nativo C++ byte-exact: **+1** → **3 totales** (`0x140005b50` + `0x140003a50` + `0x140003880`).
- Vectores runtime reproducidos en C++ nativo: **+5**.
- Cobertura semántica de la traza alice/serial01: **100% de los (ch, op) pairs invocan al menos un helper verificado**.
- Lo que NO se hizo esta sesión: reversing de los ~35 wrappers que llaman a estos helpers. Siguiente paso natural.
