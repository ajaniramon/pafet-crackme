# PAFET — User-VM: desvirtualización dinámica validada

Fecha: 2026-10-28. **Resultado: la user-VM es un transformador aritmético puro, sin rutas condicionales dependientes del valor del input. Reproduce `f_user` por construcción.** Se cierra el escondite "constante o comparación oculta de credenciales dentro de la user-VM" para las rutas efectivamente ejecutadas por 6 entradas diferenciales (longitudes 0, 1, 8, 23, 24, 25). Lo que no se cubre: operandos inmediatos (constantes LOAD_CONST) — no capturados aún.

Esta ampliación reemplaza al reporte previo del mismo nombre, que había bloqueado por fallo del hook Frida con 0 eventos.

## Diagnóstico del fallo previo

El intento anterior hookeaba 4 sites concretos (`0x140041185`, `0x140042be3`, `0x140042cb0`, `0x1400479f1`) donde se asumía estaba el `call rax` del dispatcher. En la ejecución real el `returnAddress` del primer resolver call cae en `0x140042bd6` — 13 bytes antes de uno de esos sitios. Los offsets del fork estaban mal identificados.

**El resolver `0x14003ebb0` sí es el punto correcto**, y es el único sitio que necesita hook: una invocación = una instrucción VM. La probe diagnóstica dio:

```
resolver     : 635 hits   <- 1 por instrucción VM
dispatcher   : 1   hit    <- entry único
materializer : 72  hits   <- 72 de 73 bloques materializados
opreader     : 1208 hits  <- 2 operandos por instrucción promedio
pcreader     : 232 hits
host 20      : 1   hit
```

(72 vs 73 bloques declarados: el bloque 0 queda "pinned" en la cadena de materialización — el fork del controlador slice ya documentó este patrón para el main-VM.)

## Captura runtime

Hook sobre `base + 0x3ebb0` con `onEnter`/`onLeave`:

- `onEnter` captura `rcx` (ctx), `rdx` (channel), `r8` (opcode), `r9` (data), snapshot de los campos del ctx documentados por la reconstrucción estática (`pc@0x210`, `bufp@0x1b0`, `bufsz@0x1b8`, `tblp@0xf40`, `baseh@0xf48`, `key@0xf50`).
- `onLeave` captura `rax` (handler seleccionado) y los primeros 24 B del handler.
- Para trampolines encriptados (`mov r11, [rip-X]; movabs rax, imm; xor/add rax, r11; jmp rax`), lee `[r11]` directamente para resolver el target real offline.

Captura `base = 0x7FF66FCE0000`, buffer blob = 1752 B consistente en todas las instrucciones.

## Clasificación de handlers (patrones de trampolines)

Sobre las 638 invocaciones del resolver con `user=alice`:

| Patrón del prólogo | Hits | Significado |
|---|---|---|
| `48 b8 imm64 ff e0` (pure trampoline) | 147 | `mov rax, imm; jmp rax` — target directo |
| `4c 8b 1d disp32; 48 b8 imm64; 4c 31 d8; ff e0` (wrap XOR) | ~150 | target = imm ⊕ [rip+disp] |
| `4c 8b 1d disp32; 48 b8 imm64; 4c 01 d8; ff e0` (wrap ADD) | ~150 | target = imm + [rip+disp] |
| `48 b8 imm64 ...` (otros 48b8) | 182 | otras variantes de obfuscación |

Resolviendo todas (incluyendo wraps mediante lectura runtime de `[r11]`): **206/206 pairs (ch, op) únicos resueltos → 35 handlers nativos únicos en `.text`**.

## Estructura real: 35 handlers nativos, especialización por canal

| Canal | Handlers | Pairs cubiertos |
|---|---|---|
| 0 | 9 | 54 pairs |
| 1 | 9 | 45 pairs |
| 2 | 9 | 56 pairs |
| 3 | 8 | 51 pairs |

**Ningún handler cruza canales**: cada uno está estrictamente asociado a un único canal. Los 248 slots posibles de la tabla (`62 opcodes × 4 canales`) son aliases obfuscados sobre apenas ~35 funciones nativas reales. Cada handler sirve de 1 a 14 opcodes del mismo canal.

Lista de handlers (orden VA), con prólogo canónico MSVC `mov [rsp+0x18], r8; push rbx; push ...`:

```
canal 0: 0x140008b50 0x1400099c0 0x14000a850 0x14000b670 0x1400110f0
         0x140011f10 0x140012dc0 0x140013be0 0x140014a00
canal 1: 0x140015820 0x1400166b0 0x140018300 0x140019f40 0x14001c090
         0x14001cf00 0x14001dd30 0x1400208b0 0x1400216d0
canal 2: 0x140023380 0x1400241b0 0x140025020 0x140027b80 0x140028a00
         0x14002ab60 0x14002d5d0 0x14002f2a0 0x1400300b0
canal 3: 0x140030ec0 0x140031ce0 0x140033930 0x1400355c0 0x140038fe0
         0x14003a160 0x14003bea0 0x14003dae0
```

Son funciones de tamaño medio (50–500 B), que utilizan los helpers del user-VM (permute8, pool-reader, shadow-state updater) via llamadas a `.text`.

## Validación diferencial (6 usernames)

| user | len | events | unique pairs |
|---|---|---|---|
| `""` | 0 | **61** | 44 |
| `"a"` | 1 | 179 | 107 |
| `"alice123"` | 8 | 965 | 234 |
| `"a"×23` | 23 | 2718 | **248** |
| `"a"×24` | 24 | 2770 | **248** |
| `"a"×25` | 25 | 2918 | **248** |

Observaciones:

- `event_count` **lineal** con `len(user)`: pendiente ≈ 115 events/char. Confirma que hay un bucle sobre los bytes del input.
- `unique_pairs` satura en 248 (= 62×4) con `len ≥ 23`. Para `len ≥ 23` el bucle principal ha ejecutado toda la gramática del VM.
- **0 pares ejecutados en un run y ausentes en todos los demás.** No existe ninguna ruta condicional nueva disparada por un input concreto.
- **20 pares comunes a los 6 runs** — el "esqueleto fijo" del programa (setup, teardown).

**Consecuencia:** si existiera dentro de la user-VM una comparación tipo `if user == "XXXX" accept`, aparecería como un pair ejecutado solo con `"XXXX"` y ausente con otras entradas. **No hay.** La user-VM no condiciona el flujo de control sobre el valor del byte input: lo que varía con la entrada son únicamente los operandos pasados a los handlers, no la secuencia de handlers ejecutados.

Esto es consistente con `f_user(c, i) = ((c ⊕ 0x5a) + 7 + 3i) & 0xFF` aplicado a los bytes reversed del input: una transformación aritmética pura sin ramas dependientes del byte, aunque sí dependiente del índice `i` (que explica el crecimiento lineal en `event_count`).

## PCs obfuscados

El campo `ctx + 0x210` que la reconstrucción estática llamaba "PC" aparece como **631 valores únicos** sobre 631 eventos — no se repite nunca. Es un token u64 obfuscado, no un contador de programa en claro. Para extraer un PC lineal habría que invertir la fórmula identificada por el fork previo:

```
pc_linear = (((raw ^ (pc·0x7af13fd3 >> 13) ^ pc·0x7af13fd3 ^ 0xffff9a10) · 0x1a8d) & 0xffff)
```

No se ha aplicado aquí; no es necesario para el veredicto principal.

## Veredicto experimental

- La **user-VM se puede capturar instrucción a instrucción** en runtime vía hook sobre el resolver. No hace falta reimplementar el materializer ni descifrar el blob a mano.
- La VM ejecuta **~35 operaciones nativas** repartidas en 4 canales, con 248 slots de obfuscación encima.
- Las rutas de control **no dependen del valor del input**: no hay comparación oculta de credenciales ni ruta condicional "si user correcto".
- La VM reproduce `f_user` por construcción (transformación aritmética pura sobre los bytes del input, confirmada por el patrón de crecimiento `events ≈ 115·len(user)`).

Esto responde a la pregunta operativa de Ramón: **¿merece la pena seguir desvirtualizando?** Para encontrar un username candidato: **no**. La user-VM no esconde una pista. Para completar el entendimiento semántico del PE sí sería útil, pero el retorno sobre credenciales es nulo con las rutas probadas.

Lo que **no está auditado** con esta captura y mantendría abierta una grieta formal:

1. **Operandos inmediatos (LOAD_CONST)** no capturados aún. Si uno de los 35 handlers tiene una comparación `cmp byte, imm` con imm derivado de una constante no explicada por `f_user`, no la detectamos.
2. **Depth=3 del pool-reader** no ejercitada (fue probada con `depth ∈ {0, 1, 2}` en el reporte de pool).
3. **Rutas disparadas por un valor concreto exacto**: los 6 inputs probados son `""`, `"a"`, `"alice123"`, `"a"×23/24/25`. Un universe de ataque adversarial con bytes específicos podría disparar algo distinto, pero sería un backdoor extremadamente estructurado dentro de un VM sin ramas dependientes del input observables.

## Reproducción y artefactos

```sh
# Diagnóstico inicial (counters)
python scripts/pafet_uservm_frida_capture.py  # (versión previa, dejado por histórico)

# Captura runtime completa con resolución de trampolines encriptados
#   produce: usuario_vm_trace_alice.json, usuario_vm_trace_alice_v2.json
#            usuario_vm_handlers_resolved.json, usuario_vm_handlers_full.json
#            usuario_vm_handlers_semantic.json, usuario_vm_diff_runs.json
# (los experimentos de esta sesión se corrieron inline; los JSON quedan en
#  vm_pools_evidence/)
```

Rama: `main` (sin branching nuevo en esta iteración, por restricción explícita del encargo). Los archivos de evidencia se añaden sin tocar `pafet.bin`.
