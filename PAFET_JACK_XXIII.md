# PAFET — JACK XXIII recuperado y revalidado

Fecha: 29 de octubre de 2026. Referencia remota leída:
`e871c5d53a816c4a163423243d3347f3a8fd82dc`.

Se han recuperado del historial las fuentes del escritor, los dos núcleos
DROP, el materializador, el decoder, el intérprete C++ y sus pruebas. La
base procede de la copia del escritorio. Las capturas Linux antiguas no
estaban disponibles; se han generado trece capturas nuevas en Windows.

El C++ extrae y ejecuta el bytecode del PE original. No carga instrucciones
capturadas ni enlaza `pafet_byte_writer_x.h` ni `f_user`. Se ha compilado
y comprobado con MSVC en Windows y GCC en WSL.

## Resultados comprobados en esta recuperación

| Comprobación | Resultado | Evidencia |
|---|---:|---|
| Materialización del blob | 1752 bytes, 73/73 bloques | `materializer_differential.json` |
| Permutación frente a x64 | 256/256 entradas | mismo informe |
| Contextos de materialización | sombra cero, no cero y ventana protegida | mismo informe |
| Oráculos históricos ejecutados de nuevo | 12/12 | `oracle_attribution.json` |
| Núcleos DROP, contexto y pila codificados de 8192 B | 12/12 | `drop_core_differential.json` |
| Escritor real, registros, objeto y store | 108/108 | `writer_differential.json` |
| CFG lógico conservador | 339 instrucciones, 73 segmentos físicos | `original_program_ir.json` |
| PCs alcanzables bajo el contrato abstracto | 334 | `abstract_program.json` |
| Capturas Windows comparadas | 13 | `windows_differential.json` |
| Operaciones comparadas | 41.864 | mismo informe; también MSVC |
| Snapshots inmediatamente posteriores al núcleo | 41.863 | un snapshot no disponible |
| Secuencias de store observadas | 185 | trazas Windows y verificador |
| Destinos nativos observados | 60 | `dispatch_coverage_windows.json` |

El snapshot posterior que falta corresponde a `a8`, paso 779. Se conserva
como ausente: no se rellena con el modelo ni se atribuye una causa no
demostrada. La comparación con el siguiente estado previo sí pasa.

Los informes están en `jack_xxiii_evidence/`. El verificador regenerado
`scripts/pafet_verify_xxiii.py` comprueba sus relaciones y hashes.

## Escritor y corrección de las cinco direcciones

El store real es `mov [r8+r9],dl` en `0x140048a3a`, dentro de la operación
4 del host `0x140048960`. El puerto C++ sigue la selección del objeto MSVC
SSO/heap, la lectura del byte, las operaciones de registros parciales, la
escritura y la extensión con signo de RAX. Su prueba obtiene el esperado
ejecutando las instrucciones originales con Unicorn; no usa la fórmula de
`f_user` como oráculo. Compara objeto, buffer, cinco registros y dirección
de escritura en 108 casos, incluidos índices mayores de 255.

Las cinco direcciones propuestas inicialmente tienen estas funciones:

| Dirección | Núcleo | Extensión por CFG |
|---|---|---:|
| `0x14003bea0` | DROP | 3593 B |
| `0x140015820` | transferencia de bloque | 3717 B |
| `0x140025020` | transferencia de bloque | 3717 B |
| `0x140014a00` | DROP | 3586 B |
| `0x1400216d0` | STORE_REG | 3705 B |

Los dos núcleos DROP reutilizan el helper C++ ya reconstruido de
`0x140003a50`. Sus contextos y pilas codificados coinciden con Unicorn.
Las continuaciones de dispatch, las guardas y los cinco envoltorios
nativos completos siguen pendientes. No se cuenta una invocación que
engloba un store como si su núcleo calculase ese byte.

## Bytecode y gramática

La extracción reproducible lee el blob en `0x1403e5020` desde `pafet.bin`.
Materializa 73 segmentos de 24 bytes, sin copiar plaintext de una traza.
Se compararon los 1752 bytes después de cada solicitud de materialización,
además del contador y las marcas del bitmap, en tres contextos distintos.
El C++ reproduce los mismos tres resultados de extracción.

El bytecode materializado tiene SHA-256:

```text
a15f43b7d8afa2b3ea2b4cbb77c5ae740a9b4ccc240fbd49fcb9bd8492d5d815
```

El antiguo archivo «canónico» sólo coincide en 89/1752 bytes. La
permutación anterior intercambiaba los nibbles finales. El último segmento
se recupera por el mismo algoritmo; la supuesta capa SSE especial no
justifica un bloque perdido. El tamaño por solicitud es como máximo 24 B,
frente al umbral de 64 B de aquella rama vectorizada.

Los segmentos son unidades de materialización, no instrucciones de 24 B.
Las instrucciones son de longitud variable. El decoder documenta los
lectores de 8, 16 y 32 bits, las constantes, transferencias diferidas y
terminación. El ruteo nativo dependiente del contexto se expone aparte,
con sus entradas de estado explícitas. No se inventa una gramática estática
para la elección dinámica del canal y del destino.

Especificación: `docs/14-real-bytecode-xxiii.md`. Sus referencias a las
capturas anteriores son históricas; las comprobaciones actuales se
encuentran en este informe y en los JSON de Windows.

## Capturas Windows, entradas largas y cobertura

Se ejecutó el `pafet_pass8.exe` ya existente en el repositorio. Antes de
capturar se verifica que su tamaño coincide con el original y que sólo
difieren dos bytes, offsets de archivo `0x395efb` y `0x395efc`, de la
comprobación SHA. Las instrucciones de la user-VM son las originales.
No se interpreta esta variante como prueba de aceptación de credenciales.

El nuevo colector engancha los destinos que devuelve realmente la tabla
del contexto, tanto desde el resolver como desde las llamadas anidadas.
No limita la captura a las 35 direcciones conocidas. Cada operación
conserva PC decodificado, pila, los 256 registros, opcode, canal, alias,
trampolín, entrada nativa y datos de la tabla que seleccionó el destino.

Se comprobaron vacío, `a`, `abcdefgh`, `alice`, `ramon`, `alice123`,
`ramonbarcelona`, `a` repetida 23/24/25 veces y tres patrones distintos de
esas mismas longitudes. El C++ recibe únicamente el PE, la entrada y el
banco de registros inicial; la IR capturada sirve sólo para comparar.

Para cada byte se instrumenta directamente la secuencia de cálculo en
`0x140048a28` y la instrucción inmediatamente posterior al store,
`0x140048a3e`. Se comprueban índice, dirección efectiva, byte escrito y
buffer del objeto. Es instrumentación directa de la secuencia y su
resultado, **no single-step**. Los seis casos largos confirman el buffer
heap y la exportación completa del wrapper en Windows. No hay diagnóstico
del adaptador Linux en estas pruebas nuevas.

Las trece ejecuciones observan 60 direcciones nativas únicas, 25 fuera del
catálogo anterior de 35. Se conservan los 248 pares `(canal, alias)` y
sus invocaciones completas: 21.872 raíces del resolver y 19.992 llamadas
anidadas `call r9`. Los 248 pares tienen más de un destino nativo a lo largo
del conjunto de capturas. Alias, trampolín y VA de código no se colapsan.

El denominador es el conjunto observado de entradas seleccionadas y las
248 posiciones no escape de las cuatro tablas de 62 slots. No equivale a
cobertura de todas las ramas, guardas, estados o instrucciones escape.
Esta captura no instrumenta todos los helpers ni verifica parentescos y
decrementos de presupuesto; esos puntos se mantienen como límites.

## Reproducción

Desde una consola MSVC x64 en la raíz del repositorio:

```bat
src\build_original_vm_xxiii.bat
jack_xxiii_evidence\build\original_vm_xxiii.exe pafet.bin 616c696365
python scripts\pafet_windows_verify_xxiii.py --exe jack_xxiii_evidence\build\original_vm_xxiii.exe
python scripts\pafet_verify_xxiii.py
```

La salida del ejemplo es `OUTPUT 464340464e`, `STEPS 1208`.
Para regenerar las capturas Windows se necesita Frida:

```bat
python scripts\pafet_windows_capture_xxiii.py
python scripts\pafet_references_from_windows_xxiii.py
python scripts\pafet_coverage_windows_xxiii.py
```

Con Python 3, GCC y las dependencias de `jack_xxiii_evidence/requirements.txt`
instaladas en Linux o WSL, desde la raíz:

```sh
python3 scripts/pafet_materialize_xxiii.py
python3 scripts/pafet_jack_xxiii_oracle_audit.py
python3 scripts/pafet_writer_test_xxiii.py
python3 scripts/pafet_drop_core_test_xxiii.py
python3 scripts/pafet_handler_cfg_xxiii.py
python3 scripts/pafet_decode_xxiii.py
python3 scripts/pafet_abstract_xxiii.py
python3 scripts/pafet_windows_verify_xxiii.py
python3 scripts/pafet_cpp_vm_test_xxiii.py
python3 scripts/pafet_verify_xxiii.py
```

Descomprimir ambos ZIP sobre la misma carpeta conserva las trazas completas.
`python scripts/pafet_package_xxiii.py --verify` comprueba los manifiestos.

## Conservación y límites de la recuperación

Las fuentes originales recuperadas y sus diferencias están conservadas en
`historical_recovery/`. El informe antiguo se guarda como
`PAFET_JACK_XXIII.original.md`; sus cifras de 43.826 operaciones no se
confunden con las 41.864 regeneradas aquí.

No se recuperaron los dos ZIP antiguos ni las bases de ciertos archivos del
colector Linux. Los scripts históricos que dependen de ese colector siguen
necesitando aquellos archivos; la reproducción actual usa el colector Windows
nuevo. Las capturas Windows completas se entregan en un ZIP separado.

Siguen sin reconstruirse los cinco envoltorios nativos completos, parte del
estado codificado y de las guardas, y los puertos x64 completos de las otras
VMs. No hay afirmación de desvirtualización estructural total ni de flag
original recuperada. No se hicieron búsquedas de preimágenes ni diccionarios.

`pafet.bin` permanece intacto, SHA-256:

```text
fe85e59225387fba4923f3bc6103914fe7b85ba3dc0514c9e37382818fb44d1a
```

No se ejecutaron comandos de Git ni se modificó el repositorio remoto.
