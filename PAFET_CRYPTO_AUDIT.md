# PAFET — auditoría y cierre de recuperación criptográfica

Fecha: 2026-10-28. **Conclusión C: BLOQUEO JUSTIFICADO.** No se han recuperado credenciales ni una flag real; no hay una ejecución válida del original que demuestre aceptación. Con los datos disponibles no he identificado un ataque práctico sustancialmente mejor que adivinar credenciales. Esto es una conclusión sobre las vías examinadas y los recursos disponibles, no una demostración de imposibilidad criptográfica.

## 1. Material, pruebas iniciales y alcance de la evidencia

Se abrió `pafet_cipher_recovery.zip` (conservado en `audit_evidence/baseline/`), se extrajeron sus diez entradas a un directorio separado y se comprobó que coincidían con los correspondientes archivos de trabajo antes de editarlos. Se leyó `PAFET_DES3_RECOVERY.md` como una colección de afirmaciones que verificar. El ZIP inicial permanece intacto; su inventario y hashes están en `audit_evidence/manifest.json`.

Original analizado: `pafet.bin`, 4.396.544 bytes, SHA-256:

```
fe85e59225387fba4923f3bc6103914fe7b85ba3dc0514c9e37382818fb44d1a
```

Antes de modificar fuentes se ejecutaron las pruebas existentes: diez digests finales registrados, nueve prefijos intermedios, captura completa de entrada vacía, 64 mutaciones de bits del serial, dos casos MITM artificiales y dos vectores del escáner C. Pasaron. Se construyó el cargador del paquete y se reprodujo también `alice/serial01`, tres pasadas de 72 bytes, con instrucciones DES originales y sin `FAST_DES`. Las pruebas antiguas se repitieron para conservar un registro textual: `audit_evidence/baseline_selftests.txt`.

**Distinción esencial:** el cargador Linux ejecuta instrucciones del PE con asignadores, API, reloj, cookies y excepciones adaptados. No es una ejecución Windows completa del original sin modificaciones. Tampoco valida el gate SHA ni la aceptación de credenciales. Las pruebas artificiales siguientes prueban ecuaciones y programas, no resuelven el reto.

### Limitaciones descubiertas al auditar

El cargador no es un oráculo general fiable para toda la ruta de entrada. En nueve observaciones instrumentadas de derivación, las nueve salidas internas del handler de transformación coincidieron con la fórmula, pero dos devoluciones al wrapper produjeron un username transformado vacío y una clave incorrecta: longitudes 15 y 17. Las otras siete coincidieron. Repeticiones de longitud 17 dieron ambos resultados. El origen de esa inconsistencia no está resuelto; **no demuestra una restricción de longitud ni una debilidad del programa real**. Una exploración del decoder de strings en slot 8 devolvió vacío o `a0`, otra limitación del cargador; no se usa para cambiar el prefijo `CMO{` planteado por el reto. Slots 0 y 7 sí dieron el hash esperado y clave RC4 vacía.

Esto limita las afirmaciones del informe anterior: hay evidencia estática y pruebas de primitivas/capturas; no una validación end-to-end para cualquier username. No he prolongado la depuración de VMs para presentar actividad como recuperación criptográfica. El JSON conserva también las comparaciones fallidas: `assertions_passed` no significa que todas las observaciones KDF coincidieran.

## 2. Pipeline contrastado

Sean `u` y `s` secuencias de bytes de longitud `N` y `S`. Los handlers de usuario copian, invierten y transforman cada byte:

```
f(u)[i] = ((u[N-1-i] XOR 0x5a) + 7 + 3*i) mod 256
r(s)    = s XOR RC4_stream(key=00)
K       = (f(u) || r(s))[0:24], completado con bytes 00 hasta 24
K       = K1 || K2 || K3, con subclaves DES de 8 bytes
```

La concatenación, truncamiento y relleno son operaciones explícitas de main 12–15 (`0x140396ee2` y siguientes para truncar/rellenar), no una inferencia sobre capacidad de `std::string`. El material del serial es la transformación RC4 del serial completo, no un máscara de ocho bytes repetida. Su comienzo de 32 bytes es:

```
de188941a3375d3a8a061e67576e926dc71a7fa3f0cceb97452b4d3227965f9e
```

El decoder slot 7 entrega una cadena vacía al wrapper RC4; el comportamiento observado equivale a RC4 estándar con un byte cero como clave. No existe una clave vacía estándar aceptada por todas las bibliotecas RC4. Se verificaron seriales de nueve bytes y de 32 bytes, con NUL incluido, contra la rutina del PE. Es una máscara pública reversible: no aporta una incógnita criptográfica adicional ni comprime el serial.

El binario carga 144 caracteres hex de `0x1403dbbc0` y los decodifica a estos 72 bytes:

```
6f56f79c3e348835aa3c3fc5f551d501dea5dfcdcf3a013b0e3f8292ff4954b3
455024b373acad827d1fc843f19f3a9ca9907f072ef55099ceadf0798f782d09
abb0a67da54ba93b
```

Para un bloque completo, definiendo `E`/`D` como DES estándar:

```
F(X) = D_K1(E_K2(D_K3(X)))
```

Es descifrado Triple DES EDE de tres claves en ECB. El orden temporal es **D con K3, E con K2, D con K1**. Main 19 ejecuta una pasada y el programa la repite tres veces con la misma clave. Después de cada pasada aplica `unpad`.

La nueva traza sin `FAST_DES` registra nueve llamadas a la primitiva original: direcciones `0,1,0` repetidas tres veces. Sus **144 subclaves de ronda** coinciden, una por una, con un generador independiente que usa las tablas canónicas PC-1, PC-2 y las rotaciones DES. Cada entrada/salida coincide además con `Crypto.Cipher.DES`. Los tres bloques resultantes son `88f312f8161b3676`, `6f181551dbeace85`, `fd2077a101acdfae`. Véanse `des_trace.txt` y `pafet_native_audit.py`; no se reutilizan las tablas del PE para esta comparación independiente.

### Paridad, unpad y bloques incompletos

DES descarta el bit menos significativo de cada uno de los 24 bytes de clave. Se probaron las 24 mutaciones individuales con una clave artificial; las 24 preservan la salida. La barrida anterior de 64 bits de serial también pasa. Es la equivalencia normal de paridad DES: **168 bits efectivos como máximo**, no 192.

`unpad` sólo mira el último byte `p`: si `1 <= p <= 8` y `p <= longitud`, elimina `p` bytes; de lo contrario no elimina nada. No comprueba los demás bytes. Nueve entradas dirigidas ejecutadas en la rutina original incluyen padding inconsistente, vacío, cero, nueve y tamaño mayor que la entrada. Todas coinciden con este comportamiento.

El cifrado procesa también un último bloque incompleto leyendo más allá de la longitud lógica de la cadena, y conserva la longitud lógica de salida antes del trim. Con entrada de un byte `00`, las instrucciones DES originales dan `29` con slack cero y `d9` rellenando con `a5` después del terminador. No implica necesariamente lectura fuera de la asignación, pero sí dependencia de memoria que la API de cadenas no define como contenido. No se sustituye por zero-padding en el solver. La reproducción completa se detiene si una pasada deja longitud no múltiplo de ocho.

El primer bloque sí es independiente de esa cola: ECB no encadena bloques y tres recortes de como máximo ocho bytes no pueden eliminar los primeros ocho de 72. Por tanto `P1 = F(F(F(C1)))` es un filtro exacto bajo la clave reconstruida, aunque no lo sea la cola del solver. Los recortes dejan una longitud final entre 48 y 72; no establecen una longitud única de flag.

## 3. SHA-256 y búsqueda del username

Main 8 (`0x140396abd`) entrega la cadena original a `0x1402831c0`, antes de transformarla para DES. La VM obtiene el puntero de datos y **`std::string::size`**, lee bytes por índice y prepara padding SHA estándar. No usa `strlen` para el mensaje. La salida se formatea en hexadecimal, anchura dos y relleno cero por byte. Main compara igualdad de longitud y después todos los bytes del digest hexadecimal con `memcmp`; no sólo un prefijo.

El target de 64 caracteres, recuperado de nuevo por el decoder slot 0, es:

```
9419f86b97bd379906be72ea80517c075a499d0db0a37499132c2d203cc21420
```

Se registraron todos los bloques preparados por la VM y se ejecutó la compresión SHA original para siete mensajes: vacío, `alice`, bytes `20 41 00 7a 20`, bytes `41 61 00 20 c3 b1 ff`, 55 `a`, 56 `a` y los bytes `00..3f`. **Los bloques y los siete digests coinciden con SHA-256 estándar y `hashlib`**, incluidos los casos de dos bloques. El instrumento omite construcción de streams y sale antes del formateo: la comparación/formateo se audita estáticamente, no se presenta como una ejecución completa del gate.

Los bytes hasheados son los almacenados en la cadena recibida por `getline`: conserva NUL interno y, en la ruta revisada, no hay trim, casefold, normalización Unicode ni transformación RC4/DES previa. La entrada usa delimitador LF; la conversión de consola/CRT de Windows ocurre antes de esos bytes y no debe confundirse con una garantía de UTF-8. Los ejemplos Python que usan `.encode()` son sólo una comodidad de CLI.

**No se encontró una cota útil de longitud, formato o alfabeto del username, ni una relación verificable con el serial.** El límite de 24 bytes se aplica a la clave concatenada, no al mensaje SHA. El serial se pide por otra lectura y no interviene en este digest. Las cadenas/mensajes y la descripción pública ya revisados no proporcionan una pista concreta que acote candidatos. Esto no prueba que ningún byte del ejecutable pueda ocultar una pista; significa que no hay una restricción identificada que justifique otro diccionario o máscara. No se ejecutó Hashcat ni una campaña OSINT nueva.

## 4. Qué reducciones están realmente disponibles

Cada byte de `f` es una permutación de 256 valores; RC4 es XOR con una constante pública. Para longitudes fijadas, el material variable ocupa `min(24,N+S)` bytes y puede abarcar hasta `7*min(24,N+S)` bits DES efectivos si sus bytes de entrada son libres. Las posiciones restantes son ceros conocidos. Por ejemplo, ocho bytes de usuario y 16 de serial pueden cubrir los 168 bits. No hay una restricción verificada que obligue a claves cortas o degeneradas.

Sí hay una cota para un **representante del serial**: basta con sus primeros `max(0,24-N)` bytes; cualquier sufijo se descarta. Con `N >= 24`, el serial no cambia la clave. No puede truncarse igual el username: `f` lee su final en orden inverso y SHA exige el username completo. Para `N > 24`, distintas cabeceras del username pueden compartir clave y diferir en SHA.

La paridad agrupa claves equivalentes, pero no permite rechazar clases antes de probar los bits que DES utiliza. El original no exige paridad impar. Recuperar una clase de clave no identifica automáticamente el username: con ocho bytes hay 256 variantes de paridad de material que deben invertirse y contrastarse con SHA. El ensayo artificial confirma que sólo una de esas 256 variantes coincide con su hash artificial conocido. El hash real no tiene esa preimagen recuperada.

El prefijo aporta 32 bits conocidos del primer bloque; los otros cuatro bytes no son conocidos. El `}` final aporta una comprobación adicional dependiente de la longitud y de los recortes. Bajo un modelo aleatorio, aproximadamente 40 bits de formato filtran muchas claves, pero dejan muchas coincidencias en un espacio grande; no son una ecuación que invierta DES ni prueban que una flag aparente sea la correcta. No se ha deducido ningún otro bloque completo de plaintext sin supuestos adicionales.

### Tres pasadas, cancelación y separación

La composición es `F^3`, nueve operaciones DES con tres claves **reutilizadas**, no nueve claves independientes. Al expandirla no hay inversas adyacentes de una misma clave que se cancelen genéricamente. Si `K1=K2`, una pasada se reduce a `D_K3`, pero tres pasadas dan `D_K3^3`, que no es en general un DES único. Análogamente para `K2=K3`. La prueba artificial muestra `F^3(X) != F(X)` para una clave no degenerada. Claves débiles especiales pueden simplificar casos concretos; no hay evidencia de que la clave del reto pertenezca a ellos.

Para el primer bloque, todos los cortes directos dentro de las nueve operaciones dejan claves compartidas a ambos lados. En los cortes entre pasadas, cada lado usa las tres. Por ello el MITM ingenuo que enumera usuario por un lado y serial por otro **no se deduce** de `P1=F^3(C1)`. Ésta es una objeción a ese corte concreto, no una prueba de que toda criptoanálisis de claves relacionadas/repetidas sea imposible.

Los nueve bloques de ciphertext no son nueve pares de plaintext conocido. Los oráculos parcheados con credenciales elegidas cambian la clave: no suministran pares elegidos bajo la clave secreta del reto. No se dispone del volumen de datos de una clave fija necesario para justificar ataques por colisiones o deslizamiento. El ataque conocido de van Oorschot–Wiener trata otra estructura, Triple DES con dos claves (`K3=K1`) y pares completos conocidos; no se puede trasladar su coste al `F^3` observado. Referencia primaria: [A Known-Plaintext Attack on Two-Key Triple Encryption](https://people.scs.carleton.ca/~paulv/papers/Euro90.pdf). No se afirma que DES/Triple DES tenga una cota de seguridad demostrada de 168 bits.

## 5. Mejor hipótesis ensayada: dos anclas, condicionales

**Hipótesis matemática.** Supongamos que el autor cifró con `G=F^-1` tres veces, añadiendo PKCS#7 convencional antes de cada pasada. Para terminar en 72 bytes, la flag tendría entre 48 y 55 bytes: las tres longitudes cifradas serían 56, 64 y 72. Sean `C8` y `C9` los bloques penúltimo y último, y `q = 08` repetido ocho veces. Por ECB:

```
F(C9) = q
F(C8) = C9
```

La segunda relación se obtiene porque el último bloque del cifrado intermedio de 64 bytes es `G(q)=C9`. Para longitud inicial 48 se obtiene además `F(C7)=C8`. Son pares de **una sola F**, no del compuesto F³.

**Variables separables y coste.** Si el usuario tiene ocho bytes y serial como máximo ocho, `K=U||S||0`. Para cada par `F(X)=P`:

```
E_U(P) = E_S(D_0(X))
```

Se tabula para usuarios la pareja de resultados sobre `P=q,C9`, y se encuentra con la pareja calculada para seriales sobre `X=C9,C8`. Si el usuario tiene 16 bytes, `K=U1||U2||S` y la igualdad es:

```
D_U2(E_U1(P)) = D_S(X)
```

Con listas de tamaños U y S, el coste es `O(U+S)` operaciones DES salvo constantes, memoria `O(min(U,S))` tabulando el lado menor, más comprobación de coincidencias y hash. La implementación pequeña tabula usuarios. En otras longitudes suelen cruzarse los bytes de usuario y serial dentro de una subclave; estas dos ecuaciones no proporcionan allí una partición independiente sin enumeración adicional.

Sobre **clases DES efectivas** sin diccionario acotado:

| Caso hipotético | Tiempo de esta construcción | Tabla menor completa |
|---|---:|---:|
| Usuario 8, serial 8 | alrededor de 2^56 + 2^56 tokens | 2^56 entradas |
| Usuario 16, serial 8 | domina enumerar 2^112 usuarios efectivos | 2^56 entradas |

Dos salidas de ocho bytes y un índice/clave de ocho bytes son ya 24 bytes por registro: con 2^56 entradas, aproximadamente **1,5 EiB**, antes de índices y overhead. Incluso la cota optimista e hipotética de 10^9 tokens/s daría unos 4,6 años para 2^57 tokens del primer caso; no es un benchmark medido. Enumerar usernames crudos y sus hashes puede costar más que enumerar clases de clave. No es un presupuesto razonable para esta investigación.

**Prueba pequeña.** `pafet_crypto_audit.py` genera dos ciphertexts con credenciales artificiales conocidas, usuarios de 8 y 16 bytes, y una flag artificial de 48 bytes. En cada caso mezcla el correcto con 128 usuarios y 256 seriales falsos. Los dos pares se cumplen y el MITM devuelve sólo la pareja correcta. Las longitudes descifradas son 64, 56 y 48. En la ejecución guardada: 0,065 y 0,083 segundos, aproximadamente 26 KB de memoria Python máxima. Estos tiempos sólo describen el ensayo pequeño.

**Criterio de falsación.** Esta hipótesis es innecesaria si el mismo decoder puede recibir un ciphertext de 72 bytes y devolver `CMO{…}` sin `F(C9)=q`. Se construyó ese contraejemplo artificial: plaintext de 72 bytes con ese formato, cifrado con `G^3` **sin añadir padding**. El decoder reconstruido devuelve el plaintext intacto en longitudes 72,72,72, pero las dos anclas fallan y el MITM omite incluso las credenciales artificiales correctas.

Esto falsifica la inferencia «72 bytes y formato CMO implican esas anclas»; **no demuestra que el ciphertext real no tenga padding convencional**. Su padding sigue desconocido. El unpad permisivo tampoco garantiza bloques de bytes repetidos. Los dos pares reducen falsos positivos respecto al MITM anterior de una ancla, pero no mejoran su complejidad asintótica ni justifican declarar un nuevo avance en recuperación del reto. No se lanzó ninguna búsqueda grande a partir de ellos.

## 6. Reproducción y decisión final

Dependencias: Python 3, `pycryptodome`; para el cargador, Linux x86-64, GCC, `pefile` y `capstone`. Usar el `pafet.bin` original con el SHA indicado. Desde el repositorio:

```sh
python scripts/pafet_des3_offline.py --self-test --parity-test
python scripts/pafet_mitm.py --self-test
python scripts/pafet_crypto_audit.py
python scripts/pafet_native_audit.py --trace audit_evidence/des_trace.txt
```

Para volver a ejecutar las observaciones nativas, preparar y compilar dentro de `scripts/native` siguiendo su README y ejecutar desde el repositorio:

```sh
python scripts/pafet_native_audit.py --trace audit_evidence/des_trace.txt --native scripts/native/native_probe
```

La traza puede regenerarse dentro de `scripts/native`, con `FAST_DES` sin definir:

```sh
TRACE_DES=1 ./native_probe --cipher 464340464ead7dfb28c25b6d0b0000000000000000000000 6f56f79c3e348835 3
```

Los modos SHA registrados omiten streams y finalizan antes del gate. La reproducción de colas parciales está en `audit_evidence/partial_tail.json`, con las dos órdenes y el estado de `POISON_TAIL`. `static_disassembly.txt` conserva las ramas relevantes con bytes y direcciones. El paquete no contiene una flag recuperada ni presenta un plaintext artificial como solución.

**Decisión:** cero búsquedas nuevas de credenciales reales en esta fase. Conocer el cifrado permite comprobar candidatos mucho más deprisa y resolver listas separables bajo hipótesis; no proporciona aquí una recuperación práctica de la clave. Falta una restricción verificable de credenciales, plaintext adicional fiable o una debilidad nueva demostrada para esta construcción concreta. Hasta que aparezca esa evidencia, otra campaña masiva de nombres o seriales no está justificada. Se cierra como **C**, conservando también los resultados negativos y los límites de validación del cargador.
