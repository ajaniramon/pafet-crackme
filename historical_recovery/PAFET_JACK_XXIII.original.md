# PAFET — SOL: JACK XXIII

Fecha: 2026-10-29. Base leída de `main`: **e871c5d53a816c4a163423243d3347f3a8fd82dc**.
Adquisición mediante consultas de lectura al conector; snapshot local separado.
Sin comandos de Git, commits, push ni modificación del archivo PE original.

## Resultado

Hay un avance estructural comprobable: **un camino C++ nuevo extrae el
bytecode original completo, lo decodifica y lo ejecuta**, sin cargar la IR
capturada ni enlazar el escritor funcional. Coincide con 13 ejecuciones de
componente en 43.826 operaciones, comparando el estado lógico interno y la
salida. El escritor que contiene el store real está portado desde x64 y
validado por separado.

También hay una corrección de premisas: las cinco direcciones de la misión
**no son cinco escritores atómicos de caracteres**. Son núcleos DROP,
transferencia y STORE_REG, rodeados de continuaciones y guardas. Se han
portado dos de esos núcleos con comparación de contexto codificado; no se
han portado sus cinco envoltorios nativos completos. La reconstrucción total
del runtime no está cerrada.

El original sigue sin credenciales ni flag recuperadas; eso no era el objetivo
de XXIII. No se han ejecutado búsquedas de preimágenes ni diccionarios.

## 1. Qué se recuperó y qué se contrastó primero

Se leyeron los siete documentos solicitados, fuentes C++, oráculos, vectores
y catálogos del HEAD indicado. `upstream_manifest.json` conserva procedencia,
tamaños y hashes de los archivos consultados. Los archivos de entrada se
conservaron idénticos a sus blobs de origen; el header canónico es el único
archivo preexistente modificado para añadir la API nueva.

```text
pafet.bin SHA-256:
fe85e59225387fba4923f3bc6103914fe7b85ba3dc0514c9e37382818fb44d1a
```

Antes de implementar se ejecutaron los oráculos existentes de `3bea0` y
`14a00`: **6/6 y 6/6**, respectivamente. Sus pruebas comparan contexto y
buffers, pero el criterio de salida de esos scripts acepta cualquier número
positivo de éxitos. Los auditores nuevos exigen cada comparación y contrastan
también RAX; no dependen de ese exit code permisivo.
Los vectores históricos proceden de capturas de investigación de `pass8`;
aquí se reutilizan como entradas para ejecutar las instrucciones del PE
original. No se convierten en una prueba de aceptación del original.

El intérprete VII previo declara correctamente en su header que reproduce
una IR capturada y omite efectos. Sus rutas posteriores producen bytes con
`pafet_x::byte_writer`. Por tanto, sus pruebas de salida no prueban ejecución
del bytecode ni equivalencia de los handlers. El nuevo camino no utiliza
esas rutas.

## 2. Los cinco supuestos escritores

`pafet_handler_cfg_xxiii.py` recorre instrucciones y aristas x64 desde cada
entrada, sin utilizar `.pdata` como límite. Conserva saltos, llamadas,
terminaciones excepcionales y solapamientos con `.pdata`.

| Entrada | Semántica del núcleo | Extensión alcanzable | Instrucciones | Call-sites |
|---|---|---:|---:|---:|
| `0x14003bea0` | DROP | 3593 B | 821 | 13 |
| `0x140015820` | transferencia de bloque | 3717 B | 864 | 16 |
| `0x140025020` | transferencia de bloque | 3717 B | 864 | 16 |
| `0x140014a00` | DROP | 3586 B | 820 | 13 |
| `0x1400216d0` | STORE_REG | 3705 B | 863 | 14 |

«Extensión» es el intervalo entre primera y última instrucción alcanzable,
incluidas las terminaciones INT3 de las ramas de error; no es el tamaño de
la primera entrada `.pdata` ni el número de bytes únicos ejecutados.

El oráculo de `3bea0` reproduce sus efectos, pero sus seis vectores **no
escriben un byte en el objeto apuntado por `ctx+0x5e8`**. Lo mismo sucede en
los seis vectores de `14a00`. El seguimiento registra el RIP del store, no
una diferencia atribuida al último resolver observado. Los dos núcleos
llaman al helper POP `0x140003a50` y descartan su resultado lógico.

`ctx+0x5e8` no debe tratarse como un puntero universal y estable al payload
de una cadena. En los casos observados apunta a un objeto string; en heap
es necesario resolver su unión SSO/heap. Tampoco identifica al autor de una
escritura que ocurrió dentro de una llamada anidada.

### Puertos de contexto nativo realizados

`pafet_native_writer_xxiii.cpp` implementa:

- Núcleo `3bea0`, hasta antes del JNS en `0x14003bfa4`: mezcla del acumulador
  `ctx+0x108`, POP por el helper C++ ya existente y RAX final del núcleo.
- Núcleo `14a00`, hasta antes del JNS en `0x140014afd`: mezcla distinta del
  acumulador `ctx+0x100`, el mismo POP y su RAX.

**12/12** comparaciones con instrucciones originales: 8192 bytes de contexto,
8192 de pila virtual codificada y RAX. Los tres spills muertos a la pila
nativa no forman parte de la API del núcleo. Sus guardas de modo, cookie y
continuaciones después del límite indicado siguen en la lista pendiente.

Los otros tres núcleos están ejecutados por la ISA lógica nueva, pero sus
actualizaciones completas de contexto codificado no tienen todavía puertos
x64 equivalentes. No se contabilizan como tres puertos nativos terminados.

## 3. El escritor real

El store de carácter está en **`0x140048a3a`**, dentro de host 4 de
`0x140048960`. Su cuerpo se extiende desde `0x140048a05` hasta su retorno en
`0x140048a4c` y no llama a otro helper. Selecciona SSO/heap, obtiene el índice
del contexto host, carga el byte, opera sobre registros parciales, escribe
ese byte y lo devuelve con extensión de signo.

El puerto conserva esas operaciones, incluido `add al,al` con envoltura de
ocho bits y el LEA posterior. No se calcula un byte esperado por `f_user`
para introducirlo en el resultado. El XOR literal está en `.text`:
**`0x140048a2c: xor dl,0x5a`**. La afirmación anterior de que no existía allí
y procedía del bloque 28 es incorrecta.

El test diferencial cubre **108 casos** SSO/heap, índices hasta 256 y bytes
de entrada 0, 1, 65, 127, 128 y 255. Contrasta bytes de objeto/buffer,
RAX/RCX/RDX/R8/R9, dirección del único store y tamaño. Son objetos de
componente construidos explícitamente, no una afirmación sobre el transporte
de NUL o bytes altos por stdin. Las seis pruebas largas y dos controles
añaden **154 stores reales** observados antes y justo después de ejecutarse.

El host completa la aritmética del byte. La VM original organiza copia,
inversión, índice, bucle, llamadas, descarte de retornos y salida. Una fórmula
directa de la transformación completa omitía precisamente esa ejecución.

## 4. Recuperación del bytecode y bloque final

Se implementaron la permutación correcta, las tres máscaras, la pasada
secuencial y el XOR con sombra/ventanas de `0x140007610`.

| Prueba | Alcance |
|---|---|
| Permutación `0x140002080` | 256/256 retornos contra instrucciones originales |
| Materializador, sombra cero | 73 solicitudes; 1752 bytes contrastados tras cada llamada |
| Materializador, sombra no cero | 73 solicitudes; mismo contraste completo |
| Sombra y ventanas activadas | 73 solicitudes; mismo contraste completo |
| Puerto C++ de extracción | 1752/1752 bytes en las tres configuraciones |

Las 73 solicitudes cubren de forma biyectiva los 73 segmentos físicos. Se
distingue el índice lógico del segmento físico, especialmente para el 54 y
el último índice. La extracción no usa plaintext de una traza.

```text
Bytecode extraído, 1752 B:
a15f43b7d8afa2b3ea2b4cbb77c5ae740a9b4ccc240fbd49fcb9bd8492d5d815
```

El archivo antes llamado canónico sólo coincide en **89/1752 bytes**. El
script VI publicado obtiene posiciones y seeds, pero no implementa la
extracción completa que afirmaban los informes. Su permutación devuelve los
nibbles finales intercambiados. Las capturas existentes tampoco se pueden
tratar como plaintext canónico sin resolver su enmascaramiento.

No apareció una barrera SSE exclusiva del último bloque. La rama vectorizada
requiere al menos 64 bytes y cada materialización de este blob abarca como
máximo 24. El XOR final se reproduce de forma escalar, con las dependencias
de sombra y ventana explícitas. Esto cierra **73/73 para la extracción**,
sin afirmar que todo el gestor de caché y sus mutaciones esté portado.

## 5. Decoder e integración C++

La especificación está en `docs/14-real-bytecode-xxiii.md`.

`pafet_decode_xxiii.py` extrae el programa y genera IR con PCs, bytes
codificados, operandos decodificados, anchuras y aristas. Hay 15 opcodes
lógicos usados por este programa. No se declaran implementados todos los
valores posibles del motor ni sus escapes 60/61.

El CFG conservador tiene 339 instrucciones en 73 segmentos físicos. La
interpretación abstracta, con retornos host de datos desconocidos, obtiene
334 alcanzables bajo contratos explícitos. El bloque lógico 54 se sitúa en
PC 384 y contiene LOAD_REG, LOAD_CONST, ADD, DROP y JUMP. Su JNZ de entrada
recibe {0}. Un control que cambia C3 sólo en el modelo hace alcanzables las
339 instrucciones. Es un control del analizador; no aceptación del original
ni ejecución de un PE rekeyeado.

El C++ incorpora una API nueva en el header canónico:

```cpp
pafet_vii::run_original_pe_xxiii(pe_path, user, executed, trace, initial_registers)
```

Lee el PE, materializa, decodifica y ejecuta. No recibe una lista de
instrucciones capturada. El CLI se construye con el puente nuevo y los
puertos nuevos; **no enlaza `pafet_canonical_interp_vii.cpp` ni
`pafet_byte_writer_x.h`**. Las rutas legacy permanecen como referencia; el
ejecutable `pafet_recompile_xxi` no se ha cambiado para usar el motor nuevo.

Comparaciones: **13 ejecuciones, 43.826 instrucciones**. Se contrastan todos
los PC/pilas/256 registros antes de cada operación y **43.819 estados al fin
del núcleo**. Faltan siete snapshots de salida por desenrollado excepcional;
se contrastan sus estados de entrada y el siguiente estado observado, sin
inventar el snapshot ausente.

Para comparar también los registros no inicializados/no usados, el test
suministra su estado inicial observado. No suministra estados posteriores,
instrucciones ni output. Los primeros 16 registros son cero al inicio en las
13 capturas; la ejecución independiente también funciona con un banco nuevo
inicialmente cero. Copia/inversión y gestión de strings están normalizadas
por contrato host, no portadas instrucción a instrucción junto a su allocator.

## 6. Cobertura: reconciliación independiente

Las ocho capturas nuevas contienen 34.516 operaciones: **17.910 raíces con
resolver y 16.606 continuaciones inline**. Se verifican retorno real del
resolver, trampoline, R9, destino de entrada, parentesco y decremento del
presupuesto. Los helpers se contabilizan aparte en doce entradas seleccionadas;
no se afirma instrumentar todos los helpers del PE. Los marcos instrumentados
cierran con retornos, transferencias de cola o excepciones; quedan cero
abiertos y cero desenrollados sin clasificar.

| Cohorte | Entradas nativas físicas distintas | Pares canal/alias |
|---|---:|---:|
| Catálogo publicado en `main` | 35 | 206 representados |
| Control nuevo `alice` | 55 | ver evidencia por caso |
| Control nuevo `ramon` | 55 | ver evidencia por caso |
| Ocho ejecuciones nuevas, unión | 59 de 60 catalogadas | 248 |
| Cinco capturas SOL anteriores, unión | 58 de 60 | 248 |
| Unión de las 13 ejecuciones | 60 de 60 catalogadas | 248 |

El destino no ejecutado en la cohorte nueva es `0x14001eb40`, observado en la
cohorte anterior. Las 24 direcciones nuevas respecto al catálogo publicado
son **direcciones originales distintas en `.text`**, no 24 aliases ni
trampolines contados otra vez. Las diferencias con los recuentos Windows
anteriores requieren comparar estados/capturas; no se supone que ambas
ejecuciones arrancaran con las mismas condiciones.

Hay dos causas concretas del problema de cobertura. El capturador
`scripts/pafet_dispatch_coverage_ivB.py` instala hooks exclusivamente en las
direcciones de `unique_handlers` del catálogo de 35; no puede descubrir por
sí mismo una entrada fuera de esa lista. Además, el par canal/alias no tiene
un destino nativo fijo: dentro de `long_a23`, los 248 pares tienen múltiples
destinos observados, hasta diez por par. En el control `alice` ocurre en 185
de sus 236 pares observados. La resolución efectiva cambia con el estado
durante una misma ejecución. Un diccionario par→último destino pierde esa
información aunque también observe `call r9`.

La selección de canal no queda descrita universalmente por un único hash:
funciona para todas las 16.606 continuaciones inline, pero hay 20 raíces
en las que el dispatcher elige otra ruta. El decoder exige el PC nativo de
esa ruta raíz y no presenta su elección como reconstruida desde cero.

`dispatch_catalog.json.gz` conserva 34.516 registros y un índice par→lista
de todas sus observaciones. No reemplaza destinos al reagrupar. La cobertura
de direcciones catalogadas no equivale a cobertura de ramas, estados,
guardas, trampolines posibles ni del código del PE entero.

## 7. Entradas largas y un fallo demostrado del loader

Se probaron `a*23`, `a*24`, `a*25` y cadenas ASCII distintas de las mismas
longitudes. El breakpoint de store se coloca en `0x140048a3a`, se ejecuta la
instrucción por single-step y se registra el byte en `0x140048a3e`. Por tanto
no depende de un escaneo periódico ni de encontrar el patrón esperado.

Cada string usa un objeto con puntero heap, size y capacity. Se comprueba
su buffer real, el índice, cada dirección escrita y el payload de salida.
Las seis ejecuciones producen exactamente la salida del intérprete nuevo;
se verifica también la exportación exterior, después de corregir el loader.

El primer ensayo de 23 bytes mostró una divergencia auténtica: la VM había
escrito 23 bytes correctos y host 6 había creado el objeto correcto, pero el
wrapper exterior leía `0x500fb770` en vez de `0x500ffea0` y exportaba vacío.
La evidencia previa a la corrección se conserva en
`export_before_metadata_fix.json`.

El generador de metadatos sólo reconocía LEA RBP desde RSP. El wrapper usa
`mov rax,rsp; lea rbp,[rax-0xf8]`; el frame completo deja un offset de 0x100.
No reconocer ese alias impedía restaurar RBP correctamente en el adaptador
FH4. Se corrigió **el generador del loader**, no el PE ni sus condiciones de
validación. Los seis puntos alrededor del CALL y la exportación muestran
ahora la misma dirección de objeto y el size/capacity conservado en XMM7.
La exportación deja de estar vacía y coincide con el buffer observado.

`--legacy-frame-aliases` reproduce el cálculo anterior para la prueba A/B.
Esto explica el fallo del loader Linux probado aquí. No demuestra que una
captura Frida anterior de Windows fallase por esa misma causa.

## 8. Límites y siguiente trabajo concreto

| Parte | Cerrado en XXIII | Pendiente |
|---|---|---|
| Escritor real host 4 | C++ x64, store y registros | Estados fuera del contrato de memoria accesible |
| Cinco funciones de la misión | CFG completo; semántica lógica identificada | 0/5 envoltorios nativos completos portados |
| Dos DROP | Contexto/pila codificados y RAX en 12 vectores | Continuaciones después de sus JNS |
| Extracción del blob | 73/73, tres configuraciones | Gestor completo de caché, invalidaciones y todos sus estados |
| Programa original | 339 instrucciones decodificadas, intérprete lógico | Codificación nativa completa del estado y guardas |
| Dispatch | Selecciones observadas sin pérdida | Reproducción desde cero de todo el control raíz aplanado |
| Longitudes 23–25 | Stores, objetos, estados lógicos y exportación Linux | Reconciliación nativa Windows/Wine |

El próximo núcleo pequeño útil es el lector con estado `0x140007040` o
`0x1400071e0` junto al contrato de ventana de `0x1400058a0`. Sus fórmulas de
operandos ya están verificadas; falta reproducir todas sus mutaciones de
contexto y buffers. El experimento es capturar entrada/salida y writes de
esas rutinas en un contexto de `3bea0`, portar una región y comparar **el
primer byte o campo divergente**, con el mismo enfoque empleado para DROP.

Después puede cerrarse la continuación `3bea0` desde `0x14003bfaa`, incluidas
las llamadas a `0x140007bf0`, `0x14003ebe0`, `0x140004930` y la selección
inline. Su CFG y call-sites están entregados. No se justifica otro barrido
general de opcodes ni una búsqueda de credenciales.

**Conclusión:** hay una réplica lógica nueva del programa original y un
escritor real portado, con evidencias de estado. No hay todavía una réplica
completa de cómo el runtime representa y ejecuta cada transición x64. Llamar
a ambas cosas «100%» ocultaría precisamente el trabajo que queda.

## 9. Reproducción

`jack_xxiii_evidence/README.md` contiene los comandos, dependencias, archivos
y separación entre pruebas guardadas, ejecución Unicorn y loader adaptado.
El manifiesto del paquete permite verificar los archivos sin ejecutar el PE.
El entorno disponible fue Linux x86-64; no había Wine/Wine64 ni un ejecutor
Windows proporcionado. El `.bat` nuevo se entrega para compilación Windows,
pero no se declara probado en MSVC durante esta operación.
