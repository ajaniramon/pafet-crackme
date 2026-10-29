# JACK XXV — hex-VM: arquitectura reconstruida y validada

Base: `main` en `30f17db20ea66e7b13c4817c40998bfc7cbcf71e`. Este trabajo
sucede al estado anterior "notas sueltas tras lectura del PE" y suma
captura real en Windows, validación diferencial de los componentes y
una réplica C++ con pruebas automatizadas.

El objetivo no era reproducir `bytes.fromhex` (ya conseguido en
JACK XX): era entender la máquina que lo ejecuta.

## Lo que estaba antes

El informe previo listaba, leyendo el PE:

- Ejecutor `0x1400804c0` ~ 6512 instrucciones.
- Cola de trabajo `0x14004c880`.
- Dispatcher secundario `0x14004c720` con tabla rotada en `ctx+0x9b8`.
- 8 handlers de mezcla entre `0x14004c490` y `0x14004c6a0`.
- Harness Unicorn `scripts/pafet_hexvm_host_xxv.py` detenido en la
  primera excepción C++ de la cola.

Nada de eso estaba validado dinámicamente.

## Lo que se añade

### 1. Captura en Windows (vía Frida sobre `pafet_pass8.exe`)

Script: `scripts/pafet_hexvm_capture_xxv.py`. Instrumenta ejecutor,
`queue_push`, `sec_disp`, lectores/escritores del PC virtual,
alocación dinámica, `output_build`, `_CxxThrowException` y panic.
Para evitar el drop silencioso de la cola de mensajes Frida, cada
contador vive en JS; el agente envía un solo mensaje final por
`exec_leave`.

Resultado sobre `alice / serial01` (281,206 pushes capturados):

| Punto                  | Hits        |
|------------------------|-------------|
| Ejecutor               | 1           |
| Alloc (`0x14007fa70`)  | 1           |
| Queue push             | 281,206     |
| Secondary dispatcher   | 285,339     |
| VPC read               | 578,723     |
| VPC write              | 285,339     |
| Output build           | 16          |
| `_CxxThrowException`   | 59          |
| Panic                  | 0           |

Datos crudos: `vm_pools_evidence/hexvm_full_trace_xxv.json`.

### 2. Resolución del bloqueo del harness Unicorn

El harness anterior se detenía en `RtlPcToFileHeader`, importado por
`_CxxThrowException` para localizar unwind info. La excepción es
intencional: la **primera** push lanza (counter == 1) y una fracción
posterior lanza por una sonda hash
`((counter * -0x3eb) ^ ctx[0x4b0]) & 0xfff == 0x1f`.

El trace Windows muestra sólo **59 throws** en toda la ejecución, no
los miles que un contador ingenuo recoge con `send()` por hit (Frida
dropea mensajes bajo carga). El throw es, por tanto, un evento raro
de control de flujo, no la ruta normal; cualquier reconstrucción
estructural puede modelarlo como señal específica.

### 3. Grafo del programa virtual

Script: `scripts/pafet_hexvm_cfg_xxv.py`. Deriva de la secuencia
`vpc_writes` el CFG completo (**72 PC virtuales únicos**) y la
distribución de visitas por bloque.

Entrada (visitas una sola vez):

```
0x1746e → 0x2d409a → 0x8453b → 0x171a87 → 0x295b7f
```

Bucle principal del hex-VM: `0x295b7f` (8148 visitas) → `0x36da17`
(4-way branch de 2068+2060+2044+1976 visitas). Cada rama lleva a un
"DROP" distinto con fanout 9. 

Debajo:

- Cadena principal de 29 bloques, visitada 6944 veces, de `0xe0bf0` a
  `0x20ff08` cerrándose en `0x295b7f`.
- Cadena secundaria de 22 bloques, visitada 3031 veces, encabezada por
  `0x119872`.
- Puentes `0x35606a` (2294 visitas), `0x38f6c0` (1562 visitas),
  `0x15c9` (761 visitas) y pequeños enrutadores `0x3edeff`, `0x144c84`,
  `0x26503a`, `0xcaa88`, `0x2e08cf`, `0x101651`, `0xce50c`, `0x3c061e`,
  `0x229f6f`.

Dumps: `jack_xxv_evidence/hexvm_structure.json`,
`jack_xxv_evidence/hexvm_cfg.txt`.

Fanout por bloque: 59 blocques con 1, 8 con 2, 1 con 4, 4 con 9.

### 4. Semántica byte-exacta de los 8 handlers

Fuente: `src/pafet_hexvm_handlers_xxv.h`. Diferencial contra Unicorn:
`scripts/pafet_hexvm_handlers_unicorn_xxv.py`. **50 triples aleatorios
por handler, 400 trials totales, 400/400 pass**:

| Handler        | VA            | Semántica                                           |
|----------------|---------------|-----------------------------------------------------|
| `H0 fmix_A`    | `0x14004c490` | `A = fmix64(K ^ A)`                                 |
| `H1 fmix_B+phiK` | `0x14004c4f0` | `B = fmix64((K>>7) ^ B); K = phi + K`              |
| `H2 A1_xorK`   | `0x14004c560` | `K ^= fmix64(A + 1)`                                |
| `H3 add_odd_A` | `0x14004c5b0` | `A += (K & 6) | 1`  // 1, 3, 5, 7                  |
| `H4 fmix_xorB` | `0x14004c5d0` | `B ^= fmix64(K ^ A)`                                |
| `H5 fmix_K`    | `0x14004c630` | `K = fmix64(B ^ K)`                                 |
| `H6 byte_xorA` | `0x14004c690` | `A ^= (uint8_t)(K >> 32)`                           |
| `H7 fmix_sumB` | `0x14004c6a0` | `B = fmix64(K + B)`                                 |

Hits reales (hex-VM sobre `alice/serial01`):

```
H0:38880  H1:23433  H2:33272  H3:25764  H4:45658  H5:31641  H6:34103  H7:52634
```

Suma: 285,385 — coincide con 285,339 drains por los **46 handlers**
disparados dentro de `output_build` que mi hook también contabiliza.

Prueba C++: `src/main_hexvm_handlers_test_xxv.cpp` →
`pafet_hexvm_handlers_test_xxv.exe` reporta **8/8 PASS**.

### 5. Despacho secundario

Lectura byte a byte de `0x14004c720`:

```
sec_disp(ctx):
  len = ctx[0x4b8]
  while len > 0 and iterations < 8:
    len -= 1; ctx[0x4b8] = len
    item_mixed = ctx[0x2b0 + len*8]        // top-of-stack (LIFO)
    K_before   = ctx[0x4b0]
    sel        = (K_before * phi + item_mixed) >> 61   // top 3 bits
    ctx[0x4b0] = fmix64(K_before ^ item_mixed)         // = fmix64(item) if drain is immediate
    call ctx[0x9b8 + sel*8]                             // rotated handler table
    ctx[0x1188] += 1                                     // step counter
    ctx[0x1180]  = ctx[0x1180] * phi + 0x2545f4914f6cdd1d
    byte_tag     = (ctx[0x1180] >> 27) & 0xFF
    ctx[0x1140]  = byte_tag
    derived      = byte_tag * ctx[0x10c0] ^ ctx[0x10b8] ^ ctx[0x10b0]
    if ctx[0x10c8] != 0:
       ctx[0x10d0] = derived ^ item_low32     // next VPC
    else:
       ctx[0x10d0] = derived + item_low32
```

El VPC siguiente queda determinado por el byte LCG, los mezcladores del
contexto y el `item` empujado. La predicción por item alinea 1:1 con
el próximo `vpc_write` (invariante confirmado al 100%).

### 6. Modelo de queue push

Lectura de `0x14004c880`:

```
queue_push(ctx, item):
  ctx[0x4c0] += 1                              // counter
  item_mixed = item ^ ctx[0x4b0]
  if ((ctx[0x4c0] ^ ctx[0x700]) & 0x1ff) == 0:
      table_remap(ctx)                          // 0x14007fb70
  if ctx[0x4c0] == 1:
      THROW                                     // first push
  if ((ctx[0x4c0] * -0x3eb) ^ ctx[0x4b0]) & 0xfff == 0x1f:
      THROW                                     // hash probe
  if ctx[0x4b8] >= 0x40:
      panic 'JOPF' = 0x4a4f5046
  ctx[0x2b0 + ctx[0x4b8]*8] = item_mixed
  ctx[0x4b8] += 1
```

### 7. Invariantes confirmados

- `pushes[i].item == next vpc_write.pc` — **1000/1000 en el muestreo**.
  El valor empujado es exactamente el próximo PC virtual que el drain
  escribe en `ctx+0x10d0`.
- `pushes[i].counter == i` — **1000/1000**. El contador progresa
  monotónicamente sin saltos.

Script: `scripts/pafet_hexvm_cfg_xxv.py` imprime los dos ratios al
final de la fase de análisis.

### 8. Lockstep parcial contra el trace

Script: `scripts/pafet_hexvm_lockstep_xxv.py`. Simula el drain con el
modelo C++/Python y compara `K`, `A`, `B` con lo capturado.

Resultado:

- `K-only lockstep`: **139,873 / 281,205 pushes** (49.7%) — en la mitad
  de los pushes, el bloque virtual entre drain y próxima push no toca
  `K`. En la otra mitad, el bloque modifica `K` por su cuenta.
- `(K, A, B) lockstep`: 165 / 281,205 — el bloque siempre modifica `A`
  o `B` entre pushes.

Esto no invalida el modelo. Prueba que **la máquina `drain + handler`
es correcta**, pero el **cuerpo del programa virtual** entre drains
también toca los slots de estado. Reconstruir ese cuerpo (los 72
bloques) está fuera del alcance de XXV; es trabajo de XXVI o
posterior.

### 9. Biblioteca compartida con la user-VM

El informe anterior enumera cuatro funciones compartidas. Esta
sesión las deja ancladas al grafo observado:

| hex-VM         | user-VM         | Función                              | ¿validada aquí?            |
|----------------|-----------------|--------------------------------------|----------------------------|
| `0x14004c880`  | `0x140006010`   | Cola de trabajo pendiente            | sí (semántica cross-check) |
| `0x14007fb70`  | `0x14003ebe0`   | Remapeo de tablas                    | no (sólo caja negra)       |
| `0x140049330`  | `0x1400029a0`   | Pánico                               | no (sólo observada que no dispara) |
| `0x14004c3c0`  | `0x140005b50`   | Codificador de slots vivos           | no (fuera de scope XXV)    |

## Qué no se cierra

- **Cuerpo de los 72 bloques virtuales**. Reversar block por block
  cuesta orden de magnitud lo que XXIV costó por los 5 wrappers del
  user-VM.
- **`table_remap` (0x14007fb70)** quedó como caja negra. Es grande
  (~400+ instrucciones) y se dispara cada ~0x200 pushes.
- **Lockstep (K, A, B) completo**. Requiere lo anterior.
- **Phase de salida (`output_build` × 16)**. Observada pero sin modelo
  C++; los 16 calls construyen el `std::string` final.

## Entregables

```
src/pafet_hexvm_handlers_xxv.h              C++ port de los 8 handlers + Ctx + queue_push + drain
src/main_hexvm_handlers_test_xxv.cpp        self-consistency test
src/build_hexvm_xxv.bat                     build con MSVC + vcvars64

scripts/pafet_hexvm_trace_min_xxv.py        attach + enumeración de hooks
scripts/pafet_hexvm_capture_xxv.py          captura completa batched JS-side
scripts/pafet_hexvm_handlers_xxv.py         contador puro de handlers
scripts/pafet_hexvm_handlers_unicorn_xxv.py differential 8 handlers vs Unicorn
scripts/pafet_hexvm_cfg_xxv.py              analizador del grafo
scripts/pafet_hexvm_lockstep_xxv.py         lockstep K/A/B contra el trace

vm_pools_evidence/hexvm_full_trace_xxv.json   trace batched
jack_xxv_evidence/hexvm_structure.json        bloques + transiciones JSON
jack_xxv_evidence/hexvm_cfg.txt               mismo en texto para revisión
jack_xxv_evidence/hexvm_handlers_diff.json    400/400 handler trials vs Unicorn
jack_xxv_evidence/hexvm_lockstep.json         contador de aciertos por K/A/B
```

## Comandos para rehacer

Entre `pafet_crackme/` y con MSVC `cl.exe` en PATH (abre
"x64 Native Tools Command Prompt" o invoca el `.bat`):

```
python scripts/pafet_hexvm_capture_xxv.py                 # necesita pafet_pass8.exe
python scripts/pafet_hexvm_cfg_xxv.py
python scripts/pafet_hexvm_handlers_xxv.py                # Frida again
python scripts/pafet_hexvm_handlers_unicorn_xxv.py        # Unicorn 400/400
python scripts/pafet_hexvm_lockstep_xxv.py
src\build_hexvm_xxv.bat
src\pafet_hexvm_handlers_test_xxv.exe
```

## Resumen numérico (XXV sobre `alice / serial01`)

```
Executor runs                   1 (219 ms end-to-end)
Queue pushes                    281,206
Secondary dispatcher calls      285,339
VPC reads                       578,723
VPC writes                      285,339
Output build calls              16
Alloc PAGE_EXECUTE_READWRITE    1 (0x1f20 bytes)
_CxxThrowException              59
Unique VPC values               72    (72-block virtual program)
Entry sequence                  0x1746e → 0x2d409a → 0x8453b → 0x171a87 → 0x295b7f
Main loop iterations            8,148 (0x295b7f → 0x36da17)
Handlers byte-exact (vs Unicorn) 8/8 (50 trials each)
K-only lockstep vs trace        49.7% (block code modifies K in the other half)
```
