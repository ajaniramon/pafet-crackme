# PAFET — protocolo de reconciliación con Windows

No ejecuta `pafet_matrix.py`, no depende de que Opus termine y no modifica sus archivos. El comparador es `scripts/pafet_reconcile.py`. Todavía no se ha comparado una captura Windows nueva: faltan los datos de Opus y los cuatro `.bin` comunicados por Fable.

## Identidad del experimento

Por caso se conservan el ejecutable usado y su SHA-256, versión/commit del capturador, SO/debugger, base de carga, método y bytes exactos de inyección de entrada, codepage si procede, terminadores de línea y condición de salida. Los textos visibles o nombres de caso no bastan para establecer igualdad de bytes.

Registrar gate sin override, ZF forzado, patch pass8 u otra intervención por separado. Anotar RVA/instrucción, flags antes/después y tipo de breakpoint. Un fichero original con flags cambiados sigue siendo un **oráculo de investigación**, no credenciales aceptadas normalmente. Si se afirma `.text` intacto, conservar las condiciones del breakpoint y, cuando exista, una captura de memoria del código contrastable; el hash del fichero no prueba por sí solo qué había en memoria.

El pass8 local tiene SHA-256 `80a751350c8ed61ab25de6c8e81c2ec1c838af2126fe1eafbf1f89d0518407e7`; el original local `fe85e59225387fba4923f3bc6103914fe7b85ba3dc0514c9e37382818fb44d1a`. No se presupone que sean exactamente los archivos usados por Fable. El diff local identifica el salto parcheado en RVA `0x396afb`; el RVA exacto del gate de su captura sigue sin comunicar.

## Puntos de captura

Las direcciones son RVA; se suman a la base real. El contexto de main contiene **punteros a objetos**, no bytes en esos offsets. Cada objeto string usa tamaño en `+0x10`, capacidad en `+0x18`, inline si capacidad <16 y puntero en `+0` en caso contrario.

| Etapa normalizada | Momento | Contexto / frontera |
|---|---|---|
| `input_username` | Tras host 5 y antes del SHA | `ctx+0x08`, leer objeto y exactamente `size` bytes |
| `input_serial` | Tras host 7 | `ctx+0x10`, mismo procedimiento |
| `sha_hex` | Retorno de `0x2831c0`, antes de comparar | Objeto devuelto, 64 caracteres esperados; registrar también resultado real de host 8 antes del override |
| `user_transform` | Tras host 10 | `ctx+0x18`; si difiere, capturar además salida de user host 6 y temporal de main 10 |
| `serial_transform` | Tras host 11 | `ctx+0x20`; si difiere, capturar entrada/salida del adapter `0x39d740` y tamaño/puntero de la VM interior |
| `key` | Después de host 13 y, si se ejecuta, host 15 | `ctx+0x30`; host 15 es opcional: no usarlo como único punto de captura |
| `cipher_1`, `cipher_2`, `plaintext` | Tras cada una de las tres llamadas host 19 | `ctx+0x38`, longitud **posterior** a cada recorte; numerar llamadas |

Los hosts se identifican por RDX en el dispatcher `0x396990`. Guardar objeto, data pointer, size, capacity y marcador antes/después. Volcar exactamente los bytes lógicos a un archivo; si se registra capacidad o slack, usar otro archivo con su propio rango. NUL interno no termina la captura. Incluir retorno/estado de guardas y excepciones si se interrumpe la ruta.

Para un bloque parcial se necesita además la memoria efectivamente leída, incluido terminador y slack, antes de procesarlo. Sin esa captura no se inventa padding cero ni se declara divergencia porque el modelo estricto se detenga.

## Formato de transporte

`wrapper_evidence/capture_template.json` es una plantilla **sin observaciones**. Cada etapa se añade con una de estas dos formas:

```json
{"hex":"4100ff80","length":4,"capacity":15}
```

```json
{"file":"dumps/key.bin","length":24,"sha256":"HASH_REAL_DEL_ARCHIVO"}
```

La primera es sólo un ejemplo de formato, no una captura de Pafet. Los paths se resuelven junto al JSON y no pueden salir de su directorio. El tamaño del archivo/hex debe coincidir exactamente con `length`; no se recortan volcados automáticamente. `sha256` se verifica cuando se aporta; conviene incluirlo en todos los `.bin`. Los campos adicionales de procedencia (puntero, RVA, contador de llamada, size/capacity, instante) se preservan en el JSON original aunque el comparador sólo necesite bytes y longitud.

`intended_inputs.username_hex` y `serial_hex` representan lo que se pretendía enviar. Las etapas `input_*` deben contener lo realmente leído. El comparador comienza por contrastarlas; así separa divergencias de transporte/encoding de divergencias de transformación. No se generan esas etapas a partir del nombre del caso.

Los cuatro dumps de Fable, si corresponden sólo a transformaciones/clave/salida, permiten contrastar esas etapas; **no** prueban por sí solos identidad de input, SHA ni las etapas intermedias de descifrado. Deben conservarse sin cambios, con nombres y hashes reales. Si hay cuatro por ejecución, registrar ambos conjuntos. No se presupone aquí esa organización ni sus longitudes.

## Comparación

```sh
python scripts/pafet_reconcile.py captures/case.json --out comparison.json
python scripts/pafet_reconcile.py --self-test
```

Se reutiliza `scripts/pafet_des3_offline.py`; no se cambia el cifrado ni se busca una clave. Para etapas completas, el modelo genera SHA hex, las dos transformaciones, la clave y las tres salidas. Si un recorte deja bloque parcial, las etapas afectadas son MODEL_UNDETERMINED y requieren memoria física de cola; el script no implementa una suposición de slack.

- `MATCH`: bytes y longitud de esa etapa coinciden.
- `MISMATCH`: diferencia concreta, con primer offset y longitud esperada.
- `MISSING`, `INVALID`, `MODEL_UNDETERMINED`: no se puede verificar la etapa.
- `first_exact_divergence`: se rellena sólo si todas las etapas anteriores son MATCH. Si hay un hueco anterior, sólo se informa del primer desacuerdo **observado**.
- `COMPLETE_BYTES_MATCH`: todas las etapas están presentes, determinadas y coinciden, con los campos mínimos de procedencia aportados. No significa que el script haya autenticado la procedencia: ésta se marca explícitamente no verificada de forma independiente.
- `INCOMPLETE`: faltan observaciones, el modelo no determina una cola o faltan campos mínimos. Nunca se convierte en coincidencia por ausencia de contradicciones.

El comparador nunca declara aceptación de credenciales del original. Para esa conclusión se requiere aparte una ejecución sin override ni parches que supere el SHA real y produzca una flag válida.

Los diez autotests del transporte son sintéticos y no ejecutan cifrado: cubren coincidencia completa, etapas ausentes, primera divergencia con/sin huecos previos, longitud incorrecta, hash incorrecto, fichero ausente, path inválido, procedencia ausente y salida indeterminada. No son resultados Windows ni credenciales artificialmente aceptadas.

## Reconciliación pendiente

El experimento comunicado `alice/serial01` está conservado en `fable_x64dbg_reported.json`: no contiene bytes observados ni hashes de dumps. Su comparación está en `fable_reconciliation_pending.json`, con resultado INCOMPLETE. No se inventó ninguno de los cuatro `.bin`.

Cuando lleguen las capturas de Opus, el orden de diagnóstico será transporte → SHA → retorno de usuario → serial → clave → cada pasada. La primera discrepancia verificada decide el siguiente experimento. Una diferencia en el temporal de usuario pero no en la salida final identifica una frontera de vida/retorno distinta de un fallo del algoritmo. Sin los dos puntos de captura se mantendrá esa distinción pendiente.
