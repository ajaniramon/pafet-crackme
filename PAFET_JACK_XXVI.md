# JACK XXVI — Operación Hexagon II: auditoría y cierre parcial

Base auditada: PR #4, único commit `31c2ae1fcc3020db94382b76a5e4b379af51d2c0`,
ya integrado en main. Se revisaron el commit, sus fuentes, informe, scripts y
evidencias versionadas. La PR no tiene comentarios ni revisiones según sus
metadatos. No se adoptan las conclusiones de XXV como autoridad.

**Resultado: no se declara cerrada la Hex-VM.** Se identifica y corrige la causa
del 49,7 % de K, se valida C++ compilado contra instrucciones originales y se
recupera un bloque y el supuesto `output_build`. No existe todavía un ejecutor
propio de los 72 bloques ni comparación de los buffers finales.

## Evidencia y reproducción

Entorno: Linux, Python 3.12, g++ con C++17; dependencias fijadas en
`scripts/requirements-hexvm-xxvi.txt`.

```sh
python3 -m venv /tmp/hexvm-xxvi
/tmp/hexvm-xxvi/bin/pip install -r scripts/requirements-hexvm-xxvi.txt
/tmp/hexvm-xxvi/bin/python scripts/pafet_hexvm_diff_xxvi.py
/tmp/hexvm-xxvi/bin/python scripts/pafet_hexvm_audit_xxvi.py
```

El primer comando de pruebas compila el C++ y ejecuta el PE bajo Unicorn,
sin sustituir instrucciones por el candidato. Exige retorno al sentinel,
presupuesto de instrucciones suficiente y coincidencia de todas las filas.
Un error de emulación aborta; no se convierte en PASS. Los handlers también
se comprueban por escrituras inesperadas en el resto del contexto.

| Prueba nueva | Resultado | Alcance |
|---|---:|---|
| Ocho handlers | 512/512 | C++ compilado vs x64, 64 por handler, incluye extremos |
| Dispatcher secundario | 256/256 | K/A/B, LCG, steps, VPC, tag y longitud; ambas modalidades, ocho rotaciones, colas 0..16 |
| Adaptador `0x1400889e0` | 256/256 | retorno, LCG, steps, tag y celda reencodificada; índices 0..255 |
| Bloque `0x2d409a` | 64/64 | A y argumento de siguiente push, con r13=0 como en el ejecutor |

Resultados en `jack_xxvi_evidence/differential.json`; hashes de los binarios en
`pe_provenance.json`. No se modificó ningún PE. El oráculo es `pafet.bin`, SHA256
`fe85e59225387fba4923f3bc6103914fe7b85ba3dc0514c9e37382818fb44d1a`.
La captura histórica usa `pafet_pass8.exe`, que difiere en DOS bytes del original
(offsets de archivo `0x395efb`, `0x395efc`). Esa captura no equivale a una nueva
ejecución del PE original intacto. Las pruebas sintéticas nuevas no usan ese PE.

Los scripts antiguos de handlers, CFG y lockstep se ejecutaron también; después
se restauraron sus ficheros de evidencia para preservar los originales.

## Hallazgos de la auditoría

| Afirmación o mecanismo | Clasificación | Evidencia / límite |
|---|---|---|
| 400/400 históricos usan x64 independiente | CONFIRMADO | Cada caso ejecuta bytes de `pafet.bin` bajo Unicorn; se reprodujeron 400/400 |
| Esos 400 casos prueban el header C++ | NO DEMOSTRADO por XXV | `cpp_H` es Python; el C++ no se compila ni invoca. XXVI sí lo contrasta directamente |
| Errores del oráculo se detectan | NO DEMOSTRADO por XXV | `except UcError: pass`, sin comprobar RIP final. Corregido en el harness nuevo |
| Semántica de los ocho handlers | CONFIRMADO en el corpus | 512 casos nuevos contra C++ real, sin equivalencia universal |
| CFG completo del programa | PARCIAL | 72 PCs y fanout reproducidos; son transiciones observadas de UNA ejecución, no todos los caminos posibles |
| `item == next_VPC` | CONFIRMADO en la captura | 281206/281206, no sólo los primeros 1000 |
| `counter == push_index` | CONFIRMADO en la captura | 281206/281206 usando p[8]; script XXV usa p[4] y devuelve 0/1000 |
| 59 throws | CONFIRMADO en la captura | Hay 59 filas; no demuestra exhaustividad de eventos originales ni su causa completa |
| Batched implica captura sin pérdidas | NO DEMOSTRADO | Ticks internos contiguos no contabilizan hooks que nunca se ejecutaron |
| 49,7 % prueba que los bloques modifican K | REFUTADO / NO DEMOSTRADO | Es consecuencia de recalcular una tabla persistente con K cambiante |
| `drain` C++ XXV es equivalente | NO DEMOSTRADO, errores localizados | Tabla, valor usado para VPC y condición XOR/suma incorrectos |
| Remap baraja ocho handlers secundarios | REFUTADO / NO DEMOSTRADO | El cuerpo reconstruye cuatro dominios de 62 entradas, con thunks opcionales |
| `0x889e0` construye salida | REFUTADO / NO DEMOSTRADO | Es `mov rcx,[rcx]; jmp 0x4a0e0`, lectura con refresco de slot |
| 16 llamadas construyen los 72 bytes | NO DEMOSTRADO | La captura sólo registra ticks de esas llamadas, sin argumentos ni retornos |

## Dispatcher: causa del 49,7 %

La tabla secundaria se inicializa en `0x1400811c4..0x140081277` a partir de
`[rsp+0x630] & 7`. El contexto real está en `rsp+0x180`; por tanto ese campo
es K (`ctx+0x4b0`). Se guardan ocho punteros en `rsp+0xb38..0xb70`, equivalentes
a `ctx+0x9b8`. La rotación procede del K de inicialización y persiste.
El dispatcher no reconstruye esa tabla a partir del K actual.

```text
encoded = pending[--length]
decoded = K_before XOR encoded
selector = high3((K_before * phi + encoded) modulo 2^64)
K = fmix64(decoded)
call persistent_table[selector]
steps += 1
LCG = LCG * phi + 0x2545f4914f6cdd1d
tag = byte(LCG >> 27)
mask = (tag * ctx[0x10c0]) XOR ctx[0x10b8] XOR ctx[0x10b0]
encoded_VPC = predicate != 0 ? mask + uint32(decoded) : mask XOR uint32(decoded)
```

El selector utiliza K **anterior** a fmix. El argumento del handler ve K
**posterior** a fmix. El VPC se escribe codificado: no confundir el valor
guardado en `ctx+0x10d0` con el retorno lógico del lector VPC.

La captura tiene rotación inicial 7. Conservándola, sin ajustar constantes:

| Comparación entre pushes | XXV | XXVI, tabla persistente |
|---|---:|---:|
| K | 139873/281205 | **281205/281205** |
| K/A/B conjuntamente | 165/281205 | 8047/281205 |
| A | — | 18018/281205 |
| B | — | 8049/281205 |

Se usa el K/A/B capturado en cada entrada: es una predicción local entre pushes,
no ejecución autónoma de toda la VM. No se dispone del handler realmente
ejecutado ni de la tabla efectiva por evento; no se inventan esos datos.
Los ocho posibles valores de rotación se exploraron para diagnóstico; la
elección final 7 deriva del inicializador x64, no del ajuste de resultados.

## Primera divergencia restante: explicada

En push 0 el modelo predice selector 6, H5. K coincide:
`e19a5202aac7ed57 -> 9e4a9126081207ba`. A observado cambia de
`671ae3e65cd34f0d` a `a8f5d0c9e9c07d9b`.

El bloque siguiente es PC `0x2d409a`, entrada nativa `0x14008735f`.
En `0x1400873cd..0x1400873dd` realiza:

```text
A ^= fmix64(A + 1)
enqueue(0x8453b)
```

La fórmula produce exactamente `a8f5d0c9e9c07d9b`. El ruido previo prueba
`((uint8(A)+255) XOR uint8(A)) & 1`, siempre 1: su rama salta el primer
fragmento de ruido. Los mezcladores de scratch posteriores no escriben A/K/B.
El diferencial de este bloque ejecuta hasta la llamada a queue_push, no simula
su throw. La recuperación del bloque es PARCIAL respecto a toda la máquina,
pero su transformación de A y su destino están comprobados.

La primera divergencia de B queda en push 3, hacia PC `0x295b7f`:
`ee0926be8b4db586 -> 632c971c07011acc`. Se conserva como siguiente punto de trabajo.
No se ha recuperado aquí toda su cadena de efectos.

## table_remap: qué se ha demostrado

El desensamblado completo está en `jack_xxvi_evidence/table_remap.asm`.
`0x14007fb70` mezcla `sign_extend(ctx[0x928])*phi`, B, K, A, cookie
`ctx[0x700]` y el estado `ctx[0x8d8]`; guarda una semilla impar en `0x8d8`.
Actualiza la clave en `0x4e8` y la base en `0x4e0`.

Procesa **cuatro grupos de 62**: inicialización de permutación, barajado por
restos, construcción de inversa y materialización de destinos en el buffer
apuntado por `ctx+0x4d8`. Con `ctx[0x1080] != 0`, utiliza el buffer de código
en `ctx[0x1078]` y llama al generador de thunks. Acaba actualizando `0x8bc`
y el contador `0x8e0`. No es la rotación de ocho punteros de `ctx+0x9b8`.
Falta una implementación y diferencial completo del remap y de sus thunks.

La condición de push `(counter XOR cookie) & 0x1ff == 0` no significa una
periodicidad fija si cookie evoluciona. También hay una llamada a remap desde
`0x140080163`, condicionada por el estado actualizado. No se cambió ni auditó
la implementación de ninguna otra VM.

## El supuesto output_build

`0x1400889e0` toma un objeto que contiene el puntero al contexto y delega en
`0x14004a0e0`. Consume el byte bajo de RDX como índice. Selecciona:

```text
cell = (((ctx[0x750] + index) & 1) << 8) + index
mask = index*ctx[0x268] XOR tag[index]*ctx[0x1170] XOR ctx[0x260]
value = additive ? slots[cell] - mask : slots[cell] XOR mask
```

Avanza LCG/steps, reemplaza `tag[index]` y reencodifica el MISMO valor en la
misma celda con la máscara nueva. Devuelve value en RAX. El candidato C++
conserva ese efecto lateral; no usa un decodificador hexadecimal convencional.
No escribe directamente un buffer de salida. La relación de esas 16 lecturas
con los 72 bytes y con la construcción final del objeto queda abierta.

## Instrumentación y discrepancias de capturas

1. La captura actual tiene filas push de 10 campos; los comentarios antiguos
   y el CFG todavía suponen 6. El contador está en p[8], no p[4]. Esto explica
   la discrepancia reproducible 0/1000 frente al informe de 1000/1000.
2. `EXECUTOR.onEnter` trata RCX como contexto VM. El ejecutor crea su contexto
   en la pila (`rsp+0x180`); RCX es un argumento externo. Por eso `ctx_enter`
   y `ctx_leave` tienen len=3920421960 y counter=121762171423361822: no son
   estados VM válidos. `output_leave` tampoco es un volcado fiable del buffer.
   Los hooks queue/dispatcher sí reciben el contexto real por RCX.
3. La captura tiene 281206 pushes y 285339 entradas a sec_disp; otras cifras
   hardcodeadas mencionan 285863 pushes. Además, el `hexvm_structure.json`
   versionado contiene **284863 pushes, 289098 drains y 72 throws**, y 8148
   visitas al bucle principal, frente a **8046** al recalcular el JSON crudo
   actual (la cadena principal tiene 6878 visitas, no 6944). No son resultados
   reproducibles del mismo fichero. Son corpus distintos sin enlace por
   hash/run_id; no se puede decidir si las diferencias se deben a entradas,
   semillas/contextos, instrumentación o eventos perdidos. La diferencia no
   demuestra pérdida ni exhaustividad. El inicializador depende del argumento
   externo RCX, por lo que tampoco debe suponerse determinismo entre procesos.
4. El vector histórico de hits suma 285385, 46 más que 285339. No hay eventos
   handler en este JSON para demostrar que esos 46 procedan del supuesto
   output_build. Esa atribución queda NO DEMOSTRADA.
5. Hay 1430683 ticks únicos contiguos. Se descarta pérdida posterior de filas
   ya numeradas en este JSON, pero no eventos omitidos antes de asignar tick.
6. El agente usa un booleano global, sin thread ID ni pila de invocaciones,
   y no valida igualdad de contexto. Puede mezclar hilos o llamadas anidadas.
   `catch` sustituye lecturas fallidas por ceros en vez de marcar error.
7. El envío diferido y timeout pueden perder información al morir el proceso;
   no hay acuse, checksum del payload ni contadores externos independientes.
   Batched evita mensajes por evento, pero no demuestra ausencia de pérdidas.
8. `toInt32() & 0xffffffff` sigue siendo signed en JavaScript; los PCs de esta
   captura caben, pero no es una conversión uint32 general. El contador parseado
   a Number perdería precisión sobre 2^53 (no ocurre con estos 281206 valores).
9. Hooking añade tiempo y altera código en memoria. Sin ejecución de control
   sin hooks ni comparación de resultados/contadores, la ausencia de efectos
   secundarios temporales no está demostrada. No se afirma que los haya.

## Mapa de 72 bloques y límites

`jack_xxvi_evidence/blocks.json` enumera los 72 PCs, visitas, destinos
observados, ancla nativa cuando se localiza y estado semántico explícito.
Hay 44 anclas obtenidas por pares `cmp eax,PC; je entry`; las otras 28 requieren
seguir el árbol de decisión. Sólo `0x2d409a` tiene IR recuperada en este trabajo.
No se presentan 72 etiquetas como 72 instrucciones reconstruidas.

No cubierto: 71 cuerpos, decoder completo, remap/thunks, catch/unwind completo,
inicialización completa del estado, rutas no visitadas, buffer final e inputs
independientes end-to-end. Los estados aleatorios nuevos sí son independientes
del corpus histórico, pero no sustituyen entradas completas del programa.

## Primer bloqueo real y continuación precisa

El harness original reproduce `Unsupported: ('KERNEL32.dll', 'RtlPcToFileHeader')`
en el primer throw. Este entorno no tiene ejecutor Windows/Wine; no se ha
inventado un retorno del import ni saltado la excepción. Falta implementar
unwind MSVC o disponer de una captura nueva con las fronteras necesarias.

Para continuar:

1. En Windows, registrar run_id, hashes del PE/agente, thread ID y profundidad.
   Descubrir el contexto desde queue/dispatcher, no desde RCX de EXECUTOR.
2. Capturar por drain: K/A/B, longitud, encoded top, los ocho punteros efectivos;
   por handler: VA real y estado antes/después; por push: item y counter antes
   de incrementar; por VPC: valor lógico y valor codificado, sin mezclarlos.
3. Registrar entrada/salida de remap, cambios de tabla, excepción con payload
   y catch landing. Marcar lectura fallida explícitamente y fallar la captura
   si hay overflow/timeout/error. Comparar una ejecución sin hooks.
4. Usar `trace_audit.json:first_mismatches.B` y PC `0x295b7f` como siguiente
   frontera; recuperar sus dependencias antes de extender el IR.
5. Extender los bloques uno por uno, ejecutándolos contra el PE original;
   conservar aparte el traductor literal y los harnesses. No unir bloques por
   similitud de visitas ni de salida.
6. Seguir los consumidores de RAX de `0x889e0` y los stores al buffer final;
   capturar índice, value, longitud/capacidad y bytes escritos. Sólo entonces
   relacionar las 16 lecturas con los 72 bytes.

El core limpio está separado de los probes. Las operaciones aún no
reconstruidas no tienen implementaciones ficticias. La PR es de progreso
verificable y no debe interpretarse como cumplimiento del criterio de victoria.
