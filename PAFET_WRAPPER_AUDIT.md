# PAFET — auditoría de wrappers y guardas del runtime

Fecha: 2026-10-28. Base: `a0599b984d9d94fb346a153f6d6fe76de5225d23`. **Resultado global: D, cobertura incompleta.** No hay credenciales válidas, flag ni nueva restricción del espacio de búsqueda. Esta fase no reconstruye otra vez el controlador ni las primitivas SHA/RC4/DES y no ejecuta la matriz Windows de Opus.

## Resultado que responde a la misión

No se ha demostrado una diferencia funcional nueva entre el modelo y el **original Windows**. Sí queda sin cerrar la equivalencia completa: persiste la divergencia del retorno de usuario en el cargador Linux; no están validados de extremo a extremo todos los streams/errores de SHA, las guardas transitivas ni todas las rutas de los wrappers anidados. Las pruebas de esta fase estrechan esas incógnitas; no justifican C global.

La prueba de Fable para `alice/serial01` es evidencia **comunicada, no reproducida ni verificada aquí**. No están disponibles sus cuatro `.bin`, nombres, tamaños ni hashes en los materiales identificados. Se conserva la comunicación en `wrapper_evidence/fable_x64dbg_reported.json`, con esos campos desconocidos, y el comparador devuelve INCOMPLETE. No se sustituyen por predicciones del modelo.

## 1. Frontera de SHA

| Región | Semántica reconstruida | Evidencia y alcance |
|---|---|---|
| Host 8 `0x140396abd` → `0x1402831c0(out,u)` | Pasa el objeto original de username. La salida es otro objeto string; no pasa serial ni `f_user` | Cuerpos nativos y comparador de la fase anterior; no gate Windows nuevo |
| Wrapper `0x1402831c0..0x1402834c9` | Prepara estado de 32 B, bloque de 64 B, digest binario de 32 B, índices, temporales de stream y 24 locales de 64 bits inicialmente cero | Inspección y ejecución adaptada del wrapper. El stream y la compresión se abstraen explícitamente en la prueba nativa |
| Host SHA 2 / 4, `0x140283536`, `0x14028355c` | Selecciona `data` por capacidad `<16` frente a heap, y lee `size` de 64 bits en `+0x10` | Instrucciones originales, cuatro fixtures SSO/heap con NUL y bytes altos |
| Host 9 `0x14028359f` | Lee un byte sin signo de `data[indice]`, escribe en el bloque y aumenta el contador de bytes del bloque | Componente original con monitor de lecturas: exactamente N lecturas de los N bytes suministrados, sin consumir terminador/slack en esos recorridos |
| Hosts 11/19/29 → `0x140298930` | Entregan puntero al estado y bloque completo de 64 B | Diez ensayos nativos totales de esta fase incluyen cinco SHA: cuatro fixtures y una variación reloj/slack; la compresión se reemplaza por un registrador que **no cambia el estado** |
| Hosts 32–35 | Reordenan los ocho words del estado a 32 bytes en orden big endian | La VM y esos cuerpos originales producen la serialización del estado inicial conocido en los cinco ensayos; no es un digest real de las entradas |
| Host 38 `0x14028381b` | Solicita hexadecimal, ancho 2, relleno ASCII `0`, inserción de byte convertido sin signo | Siete componentes originales para 0,1,15,16,127,128,255. Se ejecuta el helper original `std::hex`; se interceptan la construcción del manipulador de ancho y la inserción entera. Flags observados `0x800` |
| Host 39 `0x140283875` y retorno del wrapper | Extrae la secuencia producida por el stream, construye/mueve 32 B de metadatos string al destino y gestiona flags de vida en `+0x20` | Comprendido estáticamente; stream CRT completo no ejecutado. En la prueba nativa, extracción/formato y vida del stream usan adaptadores declarados |

En la frontera string no hay `strlen`, trim, recodificación Unicode ni filtro ASCII. `A 00 ff 80 7a` llega íntegro al bloque, sin extensión de signo de sus bytes. Las fixtures de 33 y 65 bytes contienen NUL en el primer byte y tampoco se truncan. Se comprueban los bloques preparados y su longitud codificada contra la preparación estándar ya conocida, resumiendo la compresión; no se vuelve a analizar SHA.

La VM nativa adaptada conserva el username original después de retornar. Los ensayos observan cero, cinco, 33 y 65 bytes; **no** son la matriz de longitudes 14–18, 23–24 y 30. El formato de salida observado en este modo es el hexadecimal del **estado inicial inalterado**, porque la compresión es un stub. No prueba que el original haya calculado ese hash ni que haya superado la comparación.

### Longitudes y límites

El tamaño de entrada se obtiene como `size_t` de 64 bits. El contador de ocupación del bloque y los índices de los ocho words/32 bytes son de 32 bits; hay índices/longitud de mensaje de 64 bits. Los contadores del bloque se usan sobre una ventana de 64 B en los ensayos. No se deduce una cota de username de 15,16,24 o 30: 16 sólo selecciona almacenamiento; 24 pertenece a la clave posterior.

El contador de bits de mensaje termina representado en 64 bits. Sus escrituras de longitud usan bytes de esa representación; no aparece aquí una restricción práctica de preimagen. Las comprobaciones de tamaño máximo, overflow de asignación y excepciones de STL se mantienen como límites de implementación, no como pistas de credenciales. No se ha ejecutado una entrada gigantesca ni probado su equivalencia universal.

El monitor de lecturas valida la copia de bytes para índices legales; los callbacks por sí mismos no comprueban cada índice. Por tanto no demuestra que cualquier estado VM corrupto o cualquier ruta no explorada respete esos límites. Las lecturas de bloques completos ya preparados pertenecen a buffers propios, no al string original.

## 2. Frontera del serial

La secuencia nativa de main 11 (`0x140396c36..0x140396d82`) es:

1. Obtiene slot 7 del decoder de strings y mide su cadena C pública hasta NUL; ese slot es vacío. Este `strlen` manual se aplica **a la constante de clave**, no al serial.
2. Construye un string de clave vacío y temporales con flags de vida; pone a cero 16 locales de 64 bits para la VM exterior `0x140264a60`.
3. El adapter `0x14039d740` recibe objeto de trabajo, serial fuente, clave y destino. Sus operaciones 0 y 2 copian/construyen strings mediante `0x1403984e0`; operación 1 invoca la VM interior.
4. Para esa llamada, lee `size` y selecciona el puntero SSO/heap del string de trabajo. Prepara puntero y longitud de datos, un array de estado de 256 B, índices de byte/32/64 bits, 24 locales de 64 bits inicialmente cero y el objeto adaptador de 104 B.
5. La VM interior `0x14022a120` trabaja sobre el buffer de la copia. Después, el wrapper mueve el resultado al campo main `+0x20`; la fuente main `+0x10` permanece igual en los ensayos.

Los cuatro componentes originales del adapter interceptan **sólo** su llamada a la VM interior: comprueban bytes, longitud, clave vacía y 24 locales cero. Los cinco ensayos nativos completos del wrapper serial conservan sus VMs y la transformación ya conocida; contrastan el resultado con `g_serial` existente, sin reconstruir RC4.

### La clave vacía no implica leer el terminador

El host interior 4 (`0x140232e78`) devuelve tamaño de clave **0**, y host 5 guarda **0** en la variable de longitud. El host 9 (`0x140232eaa`) sería quien divide por esa longitud y lee un byte de clave. **No es llamado** en estas trazas. Se usa 256 veces la operación alternativa 10 (`0x140232ee4`), que actualiza el estado sin leer la clave. Así se explica la equivalencia con clave cero sin inventar una longitud efectiva 1 ni una lectura del NUL.

En cada ensayo nativo se registran cero llamadas al lector de clave y exactamente N escrituras XOR del buffer, con índice `<N`. NUL interno y bytes altos se conservan como bytes ordinarios. El input original queda intacto. La variante de cinco bytes con otro reloj y slack `a5` produce los mismos resultados de SHA-preparación y serial.

Este detalle no reduce la búsqueda de serial ni descubre una dependencia nueva con el username. El adapter no recibe username como parámetro formal; la combinación nativa sigue estando en main 12. No está demostrada universalmente la ausencia de toda dependencia indirecta de globals/runtime en las dos VMs.

### Lecturas fuera de longitud

No se observó una lectura de datos serial fuera de su longitud en esos cinco ensayos; la operación de escritura registra su índice y límite. No se generaliza esta observación a cualquier tamaño/estado VM. La lectura conocida de colas DES tras recortes sigue separada y relevante para el plaintext final: no se repitió su experimento ni se asumió slack cero. El comparador de Windows se detiene si el modelo no puede determinar una etapa por esa razón.

## 3. Guardas relevantes

Se identifican cinco llamadas directas al fail-stop en **cada** VM wrapper: quince sitios, con instrucciones previas conservadas en `wrapper_tests.json`. Esto no es un catálogo exhaustivo de todas las guardas transitivas.

| Etiqueta | Condición local comprobada | Efecto/validación |
|---|---|---|
| `ATTS` | Hash de atestación del blob cifrado frente a constante de la función | Una mutación de un byte en cada blob alcanza el fail-stop antes de salida normal: tres pruebas nativas |
| `CANY` | Valor guardado en frame frente a canario esperado | Seis componentes originales con igualdad/desigualdad: sólo la desigualdad llama al fail-stop |
| `ATT2` | Snapshot de atestación frente a la misma constante esperada | Seis componentes originales, ambos resultados. No se afirma que sea un nuevo hash completo de `.text` |
| `ATTL` | Flag de validación de 32 bits distinto de cero | Seis componentes originales; cero llama al fail-stop. El origen transitivo de todo valor del flag no está completamente seguido |
| `BRAN` | Falla si `R12 != 0 && R14 == 0` en ese fragmento | Doce componentes originales con las cuatro combinaciones. Falta justificar globalmente el origen de esos valores del despacho |

| VM | Blob cifrado / tamaño | Constante ATTS | Fail-stop |
|---|---|---|---|
| SHA | `0x1403e3f10`, 3510 B | `fa0cd896d41a6139` | `0x14026e250` |
| Serial exterior | `0x1403e12b0`, 1075 B | `c3bc185686624b81` | `0x1402338d0` |
| Serial interior | `0x1403e9c10`, 2678 B | `d46023193b81faaa` | `0x1401ed830` |

Las pruebas de mutación modifican una **copia cargada** de `.rdata`, nunca el PE del repositorio. El fail-stop se sustituye por un registrador que termina con código 79: se ejecutan las condiciones originales hasta su entrada, no el cuerpo original completo del fallo. Los cuerpos originales inspeccionados terminan en bucles sin retorno normal (`0x14026e740`, `0x140233dc0`, `0x1401edd20`); antes pueden envenenar estado VM. No se ha encontrado en esos sitios una devolución normal con clave alterada ni una ruta de aceptación.

Los helpers `0x140270b50`, `0x140236210`, `0x1401f0160` consultan QPF/QPC, hacen una mezcla fija y combinan un bit constante con el signo de una diferencia temporal escalada. **No se debe llamarlos sin más detectores de debugger.** Para reloj no decreciente y sin overflow, el resultado local es 1; nueve pruebas originales cubren igualdad, avance y retroceso artificial. Con retroceso, SHA y serial exterior devuelven 0; serial interior devuelve 1. Estos resultados entran en semillas del runtime: no se ha probado que cualquier manipulación temporal tenga efecto nulo sobre toda la VM.

Los blobs de esta tabla están en datos del PE. Su hash no es un hash de todo `.text`. El diff estático de los dos ejecutables locales encuentra únicamente `75 12 -> 90 90` en RVA `0x396afb..0x396afc`; los tres blobs siguen iguales. Esto no demuestra ausencia de otro chequeo de código transitivo ni valida por sí solo el experimento de Fable. Se conservan hashes/diff de esos **archivos locales** en `original_pass8_static_diff.json`.

## 4. Qué sabemos y qué suponemos

| Clase pedida | Conclusión |
|---|---|
| **A. Semántica demostrada a nivel de componente** | Selección SSO/heap y tamaño declarado; cuerpos nativos de preparación/copia; solicitudes de hex/ancho/relleno; condiciones locales de las cuatro guardas ensayadas; llamadas de ATTS tras las tres mutaciones |
| **B. Validada para entradas concretas** | Cinco SHA con compresión/stream abstraídos; cinco serial con VMs originales adaptadas, cuatro fixtures y una variación reloj/slack. Cada resultado tiene bytes, longitud y traza. No son ejecuciones Windows ni aceptación |
| **C. Pendiente** | Retorno usuario Linux/Windows; CRT de SHA end-to-end y errores; origen global de flags/guardas; invariantes universales de las VMs anidadas; lecturas de cola con ciphertext real; capturas Windows de Opus; cuatro `.bin` y condiciones de Fable |
| **D. Hipótesis descartadas en el alcance ensayado** | Truncamiento de estas entradas por NUL; filtro ASCII en estos adaptadores; necesidad de leer el NUL como clave vacía; emisión normal de datos tras las tres mutaciones ATTS. No se descartan universalmente otras rutas/guardas |

No aparece una restricción nueva que cuantificar sobre username/serial: **reducción demostrada del espacio de búsqueda: ninguna**. Para avanzar hace falta cerrar una divergencia concreta de interfaces o encontrar una nueva condición validada; el conocimiento actual no justifica buscar millones de credenciales ni afirmar imposibilidad.

## 5. Reproducir

Dependencias anteriores (`pefile`, `capstone`, `unicorn`, `pycryptodome`), Linux x86-64 y GCC. Preparar el cargador como indica `scripts/native/README.md`, incluyendo el nuevo header versionado:

```sh
cd scripts/native
python prepare_native.py
gcc -O2 -o native_probe native_probe.c native_context.S
cd ../..
python scripts/pafet_wrapper_audit.py --native scripts/native/native_probe --out wrapper_evidence_new
python scripts/pafet_reconcile.py --self-test
```

Pruebas registradas: cuatro fixtures de fronteras, siete de formato, nueve de reloj, treinta fragmentos de guardas, diez wrappers nativos y tres mutaciones. Cero compresiones SHA originales, cero DES y cero ejecuciones de la matriz Windows. El RC4 ya existente se ejecuta dentro de la ruta serial, sin nuevo análisis interno. El protocolo y formato de capturas están en `PAFET_WINDOWS_RECONCILIATION.md`.
