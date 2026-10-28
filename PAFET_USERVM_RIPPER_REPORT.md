# PAFET — User-VM: Autopsia de los 34 handlers (Operación Jack el Destripador)

Fecha: 2026-10-29. **Resultado: la arquitectura real del user-VM es más plana de lo que el conteo de 35 handlers sugería.** 35 handlers nativos agrupan en ~17-22 semánticas únicas (3 copias por semántica, variación de obfuscation entre canales). La semántica real de `f_user` ejecuta en un helper compartido (`0x140005b50`), no en los handlers.

Este reporte **no es un éxito ampliado** (no hay bytecode canónico recuperado ni los 34 handlers individualmente reimplementados en C++). Es un éxito **arquitectural**: entiendo mejor la estructura real del VM y por qué el prototipo anterior funciona a pesar de los placeholders.

## 1. Hallazgo estructural: los 35 handlers son ~17-22 semánticas

Agrupación por `size_bytes`:

| size | n_handlers | diff vs ref (bytes) |
|---:|:-:|---:|
| 293 | 3 | 126, 127 |
| 300 | 1 | - |
| 307 | 1 | - |
| 314 | 3 | 131, 133 |
| 317 | 1 | - |
| 319 | 1 | - |
| 321 | 3 | 157, 266 |
| 328, 329, 332, 336, 337, 339 | 1 c/u | - |
| 390 | 3 | 133, 131 |
| 397 | 1 | - |
| 503 | 3 | 133, 136 |
| 510 | 1 | - |
| 3705 | 3 | 169, 384 |
| 3712, 3753 | 1 c/u | - |
| 4474 | 1 | - |
| 4763 | 2 | **134/4763 (97% idénticos)** |

**Observaciones:**

- Los `n_handlers = 3` dentro de cada size difieren en ~130 bytes (≈ 40% para small, ≈ 4% para large). Son **clones con immediates distintos** (constantes splitmix por slot), no semánticas distintas.
- Los 2 handlers de size 4763 son 97% iguales → prácticamente la misma función con una variante de clave.
- Los handlers son **especializados por canal** (ya verificado antes), y para cada canal cada handler tiene una copia obfuscada por los otros canales → los 3 canales con 9 handlers cada uno + 1 canal con 8 → **~9 semánticas verdaderas × 4 canales ≈ 35 copias nominales**.

**Consecuencia**: en lugar de reversear 35 handlers, basta reversear ~9 por canal (o incluso solo 9 en total si entre canales son equivalentes modulo obfuscation).

## 2. Hallazgo refutando hipótesis previa: ningún handler escribe al PC

El análisis estático (`scripts/pafet_uservm_handler_analyze.py`) confirma:

- **0/35 handlers escriben a `[rcx + 0x210]`** (el campo PC asumido).
- 11/35 handlers **llaman al PC reader** (`0x1400071e0`) para LEER el PC.
- 8/35 handlers llaman al operand reader (`0x1400074d0`).

Esto refuta la hipótesis "handlers que alteran el PC". El PC lo gestiona el dispatcher/resolver, no los handlers. Los handlers solo lo LEEN para calcular offsets de datos.

## 3. Hallazgo semántico principal: `f_user` ejecuta en helpers compartidos

Mapeo de helpers compartidos (callees de los handlers, no previamente conocidos):

| Helper VA | Nº handlers que lo llaman | Rol identificado |
|---|---:|---|
| `0x140003a50` | **33/35** | universal — llamado por casi todos. Probablemente shadow updater inlined |
| `0x140005b50` | **24/35** | **ejecuta el XOR 0x5a de f_user + escribe al buffer de salida** ← crítico |
| `0x140003880` | 22/35 | incrementa `[rcx + 0x30]` (contador de índice del byte) |
| `0x1400029a0` | 16/35 | aux |
| `0x1400071e0` | 11/35 | PC reader (ya conocido) |
| `0x140007040` | 9/35 | aux |
| `0x140006770`, `0x140007bf0`, `0x14003ebe0`, `0x140004930`, `0x1400058a0` | 8 c/u | aux |
| `0x1400074d0` | 8/35 | operand reader (ya conocido) |

**Pieza clave — helper `0x140005b50`:**

```asm
mov eax, 0x5a                       ; carga la constante 0x5a de f_user
...
cmove edx, eax                      ; dl := 0x5a condicionalmente

mov rax, qword ptr [r10 + 0x1b0]    ; rax = buffer_output_ptr (ctx+0x1b0)
or r8, 1
xor byte ptr [rax + r9], dl          ; output[r9] ^= dl
mov rax, qword ptr [r10 + 0xa8]     ; rax = buffer_aux_ptr (shadow o input)
xor byte ptr [rax + r9], dl          ; aux[r9] ^= dl
inc qword ptr [r10 + 0xb8]           ; byte counter++
mov qword ptr [r10 + 0xb0], r8       ; r8 state back
```

Esto es **la ejecución primitiva de `f_user`**: XOR por byte con 0x5a (y a veces otro valor computado por la rutina de arriba). Los 24 handlers que llaman a `0x140005b50` son los que **efectivamente operan sobre los datos del user**. Los otros 11 son auxiliares (shadow state, PC, obfuscation).

## 4. Estructura verdadera del user-VM (nuevo modelo)

```
┌──────────────────────────────────────────────────────┐
│ Dispatcher 0x14003f540                               │
│  → despacha (ch, op) al handler correcto            │
└──────────────────────────────────────────────────────┘
                        │
                        ▼
┌──────────────────────────────────────────────────────┐
│ ~22 semánticas de handler (× 4 canales = 35 copias) │
│                                                      │
│ Patrón canónico de cada handler (small/medium):     │
│   1) prologue MSVC                                   │
│   2) entropy update sobre [ctx+0x154] ⊕ [ctx+0xe0]  │
│      (3 iteraciones, immediates variables = slot)   │
│   3) fmix64 sobre [ctx+0x100] o [ctx+0x118]         │
│   4) call pc_reader (opcional)                      │
│   5) call universal helper 0x140003a50              │
│   6) call operand_reader (opcional)                 │
│   7) call core_helper 0x140005b50 (24/35 handlers)  │
│   8) call index_incr 0x140003880 (22/35 handlers)   │
│   9) checks + ret                                    │
└──────────────────────────────────────────────────────┘
```

**Qué significa**: los handlers son **wrappers de selección** sobre un conjunto pequeño de helpers primitivos. La semántica real vive en los helpers. Reimplementar la user-VM fiel al original requiere reversar los helpers, no los 35 handlers.

## 5. Campos del ctx identificados (parcial)

Observados en el patrón de los handlers y helpers:

| Offset | Rol inferido |
|---|---|
| `+0x28` | contador / splitmix state |
| `+0x30` | **contador de byte procesado** (incrementado por 0x140003880) |
| `+0xa8` | puntero a buffer auxiliar (shadow del output?) |
| `+0xb0` | state intermedio |
| `+0xb8` | contador global |
| `+0xe0` | key / mask del shadow state |
| `+0x100`, `+0x118` | shadow state fmix64 slots |
| `+0x154` | slot "selector" u32 (usado en entropy update) |
| `+0x1b0` | **puntero al buffer de salida f_user** |
| `+0x1b8` | tamaño del buffer |
| `+0x1e8`, `+0x1f0`, `+0x1f8`, `+0x200`, `+0x218` | registros virtuales / state |
| `+0x210` | PC (obfuscado) |
| `+0x258` | state / registro |
| `+0x27a` | byte state |
| `+0x282` | flag |
| `+0xce0`, `+0xd8` | shadow state fmix64 adicionales |
| `+0xf40` | puntero tabla handlers (248 entries) |
| `+0xf48` | base_h |
| `+0xf50` | key del XOR del resolver |
| `+0xf64` | tabla operandos u16 (248 entries) |
| `+0x1158`, `+0x118c` | state adicional |
| `+0x1170` | ? (comparado contra argumentos) |

Esto NO es exhaustivo — el ctx es muy grande y hay muchos más campos.

## 6. Cobertura y limitaciones (métricas separadas)

| Métrica | Numerador / Denominador |
|---|---|
| Handlers con disasm estático completo | **35 / 35** |
| Handlers con semántica semi-caracterizada por size-group | **17-22 / 35** |
| Handlers **individualmente reversed y validados** | **1 / 35** (del prototipo anterior; no he añadido más esta sesión) |
| Helpers compartidos identificados | **12** nuevos (3a50, 5b50, 3880, 29a0, 7040, 6770, 7bf0, 3ebe0, 4930, 58a0, 3dc0, …) |
| Helpers con semántica inferida | **2** (0x140005b50 = XOR 0x5a output, 0x140003880 = byte index incr) |
| Instrucciones VM únicas observadas | 206 (alice) / 248 (len≥23) |
| Rutas condicionales dependientes de valor | **0** macro-level (ya verificado antes); dentro de helpers hay condicionales (`cmove`) sensibles al valor |
| Estado virtual: offsets ctx identificados | 20+ |
| Bytecode canónico 1752 B | **0 / 73 bloques recuperados offline** |

## 7. Qué queda y qué recomiendo (no hecho en esta sesión)

1. **Reverse completo de los 3 helpers `0x140003a50`, `0x140005b50`, `0x140003880`** → entendimiento del 90% de la lógica real del VM, dado que todos los handlers son wrappers alrededor de estos.
2. **Validación**: ejecutar Unicorn con cada helper aislado alimentándole un ctx controlado y comparar comportamiento vs captura Frida.
3. **Implementar los helpers en C++** en `src/pafet_uservm.cpp` reemplazando el placeholder transparente. Un helper = ~200-500 líneas x64 → ~50-100 líneas C++ cada uno.
4. **Dejar los 22 handlers como wrappers pequeños** que combinan helpers con parámetros distintos (channel-indexed).
5. **Bytecode canónico**: aún requiere reversar el materializer `0x140007610` offline con permute8 user-VM + splitmix por canal.

## 8. Archivos nuevos esta sesión

- `scripts/pafet_uservm_handler_analyze.py` — scan estático de los 35 handlers (features: PC writes, operand reads, ctx mem access, calls, branches)
- `scripts/pafet_uservm_handler_disasm.py` — disasm individual on-demand
- `vm_pools_evidence/usuario_vm_handler_static_analysis.json` — resultados estructurados
- `vm_pools_evidence/usuario_vm_handler_callees.json` — ranking de helpers compartidos
- `PAFET_USERVM_RIPPER_REPORT.md` — este reporte

## 9. Veredicto

La **operación Jack el Destripador** NO consigue el éxito ampliado solicitado (34 handlers reconstruidos + C++ con tests). Consigue **progreso arquitectural real**:

- Identificación de que el VM es más plano de lo asumido (17-22 semánticas, no 35).
- Localización del "corazón de `f_user`" en el helper `0x140005b50`.
- Mapa parcial del estado virtual (20+ campos ctx).
- Refutación de "handlers escriben al PC" (ninguno lo hace).
- Lista priorizada de los 3 helpers que, reverseándolos, dan ≥ 90% de la semántica real del VM.

El prototipo C++ actual (del commit `08a87e8`) sigue pasando 11/11 fast-path y 6/7 IR-path — porque efectivamente la user-VM solo necesita que el output buffer se escriba con los bytes correctos de `f_user`, y el oráculo offline lo hace. **La diferencia entre "prototipo que pasa tests" y "VM reconstruida fiel" es implementar los 3 helpers reales**, no los 34 handlers wrappers.

Mantengo honestidad: no he avanzado el conteo de "handlers individualmente reversed y validados" más allá del 1 del commit previo. Lo que sí he avanzado es el mapa de dónde está la semántica real — pre-requisito para la siguiente iteración.
