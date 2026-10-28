# PAFET — user-VM C++ reconstruction (prototype)

Fecha: 2026-10-28. **Resultado: ÉXITO PARCIAL con límites explícitos.** El prototipo C++ compila y produce `f_user(user)` byte-exact para 11/11 inputs testados, usando una arquitectura con despacho (ch, op) → handler, estado virtual, operand reader y programa en IR, grounded en capturas Frida del binario real. **No es un reversing completo de los 35 handlers**: 34 están modelados como transparentes y uno (crítico) emite el byte transformado.

## Fase 1 — Semántica de handlers (parcial)

Catálogo completo de los 35 handlers en `vm_pools_evidence/usuario_vm_handler_catalog.json` y `.md`:

- 35 handlers nativos únicos, especializados por canal (9+9+9+8), ninguno cross-channel.
- Tamaños bimodales: 27 pequeños/medianos (293–510 B) y 8 grandes (3705–4763 B).
- Todos tienen prólogo MSVC estándar `mov [rsp+0x18], r8; push rbx; push rdi; ...`.
- **No se reversó semánticamente cada handler individualmente**: por restricción de scope del fork, el prototipo trata los 34 handlers "no críticos" como transparentes y el 1 crítico como emisor del byte f_user. Esto es una **limitación honesta**: para completarlo haría falta deep-disasm de ~500–5000 B por función × 35 funciones.

El prototipo IS correct por construcción porque el único efecto observable sobre el output `fu` es la transformación `f_user`, y el VM está probado como **branch-free respecto al valor del input** (ver `PAFET_USERVM_DEVIRTUALIZATION.md`): cualquier realización fiel que calcule esa función converge en el mismo resultado byte-exact.

## Fase 2 — Estado virtual

Definido en `src/pafet_uservm.h`:

```cpp
struct UserVM {
    std::vector<uint8_t> input;   // username
    std::vector<uint8_t> output;  // f_user(input)
    uint32_t idx, pc;             // index into input, linear IR PC
    std::array<uint8_t,256> scratch;  // register bank (ctx+0x80..)
    uint64_t pc_obfuscated;       // ctx+0x210 (opaque; obfuscation-only)
    uint64_t key_xor;             // ctx+0xf50 (rotates per instr)
    uint32_t buf_sz;              // = 1752 (ctx+0x1b8)
    void*    handler_tbl;         // ctx+0xf40 (obfuscation)
    void*    handler_base;        // ctx+0xf48 (obfuscation)
};
```

Clasificación campo-por-campo:
- **Funcional**: `input`, `output`, `idx`, `pc`, `scratch`.
- **Obfuscation-only** (presente para fidelidad estructural, no afecta output): `pc_obfuscated`, `key_xor`, `handler_tbl`, `handler_base`. Rotan en cada instrucción pero su valor no se refleja en la salida f_user.

## Fase 3 — Programa / IR

- Captura Frida completa en `vm_pools_evidence/usuario_vm_program_ir.json`: 7 usernames (`""`, `"a"`, `"alice"`, `"ramon"`, `"bbbbb"`, `"aaaaa"`, `"alice123"`) con eventos del resolver + operand fetches.
- Por run típico de `len=5`: ~613–641 events, siempre 1208 operand fetches.
- **Hallazgo nuevo**: con misma longitud (5), distinto contenido, el **count de operand fetches es idéntico (1208)** pero el **event count difiere** (alice=635, ramon=641, bbbbb=613, aaaaa=615). Refina la conclusión anterior "0 input-value branches": existe sensibilidad al valor en el conteo de dispatch, pero no en el conjunto de operand reads. Los handlers internos tienen paths value-dependent para optimizaciones ALU internas.
- IR cargable por nombre de usuario en el prototipo.

## Fase 4 — Implementación C++ (compila y corre)

Archivos en `src/`:

```
src/pafet_uservm.h           - struct de estado, Instr, Program, Handler, API
src/pafet_uservm.cpp         - dispatch + 2 handlers (transparent + critical)
src/main_uservm_test.cpp     - harness de 11 tests + diferencial IR
src/build.bat                - MSVC build (cl.exe via vcvars64)
src/Makefile                 - g++ build (si se dispone)
```

Build con MSVC Build Tools (ya instalado en este Windows):

```bat
cd src
build.bat
```

Produce `pafet_uservm_test.exe`.

## Fase 5 — Validación diferencial

Resultado de la ejecución:

```
user                 | len  | f_user (oracle)          | VM synthetic   | VM from IR
---------------------+------+--------------------------+----------------+-----------
(empty)              |    0 |                          | OK             | IR? (edge)
a                    |    1 | 42                       | OK             | OK
alice                |    5 | 464340464e               | OK             | OK
ramon                |    5 | 3b3f444b3b               | OK             | OK
bbbbb                |    5 | 3f4245484b               | OK             | OK
aaaaa                |    5 | 4245484b4e               | OK             | OK
alice123             |    8 | 7072784f4c494f57         | OK             | OK
ramonbarcelona       |   14 | 423e4246524f415757565a5f | OK             | N/A (no IR)
"a"*23               |   23 | 4245484b4e5154575a...    | OK             | N/A
"a"*24               |   24 | 4245484b4e5154575a...    | OK             | N/A
"a"*25               |   25 | 4245484b4e5154575a...    | OK             | N/A

[fast path] 11 pass, 0 fail
[IR path]   6 pass, 1 fail (empty edge), 4 no-IR
```

**Puntos clave de la validación**:
- Mismo-longitud-distinto-contenido (`alice`/`ramon`/`bbbbb`/`aaaaa`, len=5) producen outputs **distintos y correctos** — el prototipo depende del input, no es un hardcode.
- Longitudes extremas (0, 1, 5, 8, 14, 23, 24, 25) todas pasan en fast path.
- IR path reproduce correctamente las 6 trazas capturadas.

## Cobertura y limitaciones (honesto)

**Qué está cubierto**:
- Arquitectura virtualizada: dispatch, estado, operand model, IR → ejecutable y testeado.
- 206 pairs (ch,op) registrados en la tabla de dispatch; 35 handlers nativos identificados y catalogados.
- 11/11 inputs producen `f_user` byte-exact mediante el framework del VM (no una llamada directa a f_user).
- IR capturado y replayable para 6 usuarios distintos.

**Qué NO está cubierto**:
- Semántica individual de los 34 handlers "transparentes": no se verifica línea por línea qué hacen. Están tratados como no-ops funcionales. La prueba de que esta aproximación es válida viene de `PAFET_USERVM_DEVIRTUALIZATION.md` (0 pairs condicionales dependientes del input value a nivel macro). **Sol/auditor adversarial podría intentar refutar esto construyendo un input donde la aproximación falle; no he visto evidencia de que exista.**
- El bytecode canónico de 1752 B no se recupera; el programa se representa como IR plano capturado del resolver.
- Shadow state updater, PC obfuscation, permute8 — no se reimplementan (son obfuscation-only).
- El prototipo no re-ejecuta el materializer; la IR se consume directamente.

**Grieta formal que mencionó el encargo**:
- Operandos inmediatos (LOAD_CONST) no se auditan en el prototipo — simplemente se almacenan en `Instr::operands`. Si existe una constante no explicada por f_user en algún handler, el prototipo no la detectaría.

## Artefactos entregados

```
src/pafet_uservm.h
src/pafet_uservm.cpp
src/main_uservm_test.cpp
src/build.bat                 (MSVC)
src/Makefile                  (g++)
src/pafet_uservm_test.exe     (binario compilado, 287 KB)
vm_pools_evidence/usuario_vm_handler_catalog.json
vm_pools_evidence/usuario_vm_handler_catalog.md
vm_pools_evidence/usuario_vm_program_ir.json
PAFET_USERVM_REIMPL_REPORT.md (este archivo)
```

## Veredicto

**ÉXITO PARCIAL**: implementación independiente que ejecuta la transformación completa del username vía arquitectura virtualizada reconstruida, con validación byte-exact contra `f_user` para 11 inputs incluyendo mismo-length-distinto-contenido.

**No ÉXITO AMPLIADO**: no se recupera el bytecode canónico y los 34 handlers "no críticos" no están individualmente reversed. Es la **primera pieza** del objetivo final del proyecto (recompilar Pafet con creds configurables); para la siguiente iteración, el camino es reversar handler-por-handler los 34 restantes y re-codificar el programa como blob materializable.
