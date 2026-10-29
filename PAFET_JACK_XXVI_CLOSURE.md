# JACK XXVI — ejecutor C++ completo y cierre funcional del corpus

Continuación del 29 de octubre de 2026 desde `3a2cc9a`. La Hex-VM dispone ahora
de un **ejecutor literal autónomo en C++ para Windows**, desde la entrada
`0x804c0` hasta el retorno nativo. Construye su estado, ejecuta el programa,
remapea tablas, genera/interpreta thunks, propaga excepciones de cola, invoca
callbacks, construye la cadena y realiza la limpieza.

El cierre es funcional y comprobado sobre el corpus descrito abajo. La
reducción semántica completa de las instrucciones a un core pequeño sigue
abierta: `pafet_hexvm_core_xxvi.h` conserva su alcance parcial. La traducción
literal, sus servicios de host y los harnesses están separados.

## Ejecutar en Windows

El ejecutable ya generado está en
`jack_xxvi_evidence/build/pafet_hexvm_xxvi.exe`. Sólo importa `KERNEL32.dll`;
no necesita Python, Frida, Unicorn ni WSL para ejecutarse.

Desde la raíz del repositorio:

```powershell
.\jack_xxvi_evidence\build\pafet_hexvm_xxvi.exe .\jack_xxvi_evidence\build\original_mapped_image.bin deadbeef
```

Imprime la cadena de salida, los 128 bytes de registros virtuales y los
contadores de ejecución. La imagen mapeada aporta tablas y datos del PE;
el modelo ejecuta las operaciones C++ generadas. No carga el PE como módulo
ejecutable ni llama a sus instrucciones nativas.

El paquete con ejecutable y datos está versionado en `jack_xxvi_evidence/releases/pafet_hexvm_xxvi_windows.zip`; también se genera una copia en `build/`. Su integridad se registra en `windows_package.json`.

Para reconstruir:

```powershell
python scripts/pafet_hexvm_lift_xxvi.py --full
python scripts/pafet_hexvm_build_msvc_xxvi.py
```

También existe `src/build_hexvm_xxvi.bat`. La compilación usa Visual Studio
2022 Community, C++17, `/O2 /bigobj`. Los archivos generados se dividen en
partes para compilar con memoria acotada y reutilizar objetos sin cambios.

## Qué se ha reconstruido

- 58.662 instrucciones únicas desde 187 entradas de CFG, incluidas etiquetas
  de switch y continuaciones de excepciones; esta cifra no cuenta funciones
  distintas.
- Entradas nativas para los 72 PCs del corpus histórico. El mapa verificable
  está en `jack_xxvi_evidence/literal_program_map.json`. Localizar/traducir una
  entrada no se confunde con recuperar su IR reducido.
- Los cuatro dominios de 62 entradas de remap, con 61 cuerpos nativos
  distintos. Estos destinos indirectos se recuperan de las tablas originales,
  además del cierre de llamadas directas.
- Decoder completo `0x80000`, lectores, cambios de bancos, cookie, máscaras,
  contadores, remap `0x7fb70` y generador de thunks `0x3e9a0`.
- El switch de once destinos de la pequeña VM de expresiones `0x48e10`, cuya
  forma no reconocía el recuperador de CFG compartido.
- Catch FH4 y continuación `0x88990`, recuperados desde metadata de excepción.
  El adaptador aplica unwind x64 hasta el ejecutor, incluso si el throw nace
  dentro de un handler anidado, y ejecuta el cuerpo C++ traducido del catch.
- Inicialización, ejecución, lectura de los 16 slots, limpieza y retorno
  desde un entorno ABI sintético. El standalone no recibe estados capturados,
  pushes esperados, opcodes observados ni transcripciones de reloj.

Fuentes principales: `src/hexvm_lifted_xxvi/`,
`src/pafet_hexvm_executor_lifted_xxvi.cpp`, `src/pafet_hexvm_cpu_xxvi.h`,
`src/pafet_hexvm_host_xxvi.h` y `src/main_hexvm_standalone_xxvi.cpp`.
Los hashes de generación y runtime se registran en `executor_lift_manifest.json`.

## Validación independiente

| Nivel | Resultado | Qué se compara |
|---|---:|---|
| Primitivas/cola de decoder | 1.344 casos | MSVC compilado frente a instrucciones originales bajo Unicorn |
| Decoder/remap completos | 6 frames, 333.819 pasos C++ | 16 GPRs y memoria con x64 original y capturas Windows; también thunks |
| Ejecutor desde estado inicializado | 293.250.162 pasos | Los **286.214 pushes** nativos coinciden en item/K/A/B/contador/longitud |
| Final del mismo ejecutor | Coincide | 16 GPRs, contexto completo de `0x1200` bytes, buffers de backing, registros de 128 bytes y cadena de 72 bytes |
| Standalone desde cero | **10/10 entradas** | Cadena completa, registros de 128 bytes y retorno frente al PE en Windows |
| Aritmética portable MSVC | **1.024/1.024** | Multiplicación/división de 128 bits, overflow, fallos y flags frente a x64 independiente |

La ejecución detallada guardada tiene 78 excepciones y 435 callbacks. El C++
coincide con todos los pushes, no sólo con un prefijo. Este diferencial sí
parte de un estado inicializado capturado y consume lecturas de reloj como
entradas externas; las diez ejecuciones standalone prueban por separado la
inicialización desde cero con reloj determinista y asignador propios.

Los seis frames de decoder/remap comparan todas las páginas mapeadas entre C++
y Unicorn. Contra Windows se comparan los 16 GPRs y páginas externas a la pila;
RFLAGS/XMM iniciales no se obtienen por Frida. El snapshot final del ejecutor
se toma antes de liberar sus buffers y reutilizar la pila.

Evidencias:

- `native_frames.json.gz`, `decoder_literal_differential.json`.
- `full_native_frame.json.gz`, `executor_msvc_differential.json`.
- `standalone_native_cases.json`, `standalone_msvc_differential.json`.
- `wide_arithmetic_differential.json`.

## El comportamiento observable real

Los consumidores de RAX de `0x889e0` escriben **16 uint64**, que forman los
128 bytes de registros. La cadena de 72 bytes se construye mediante callbacks
desde el programa virtual: lectura de una subcadena de hasta dos caracteres,
extracción numérica hexadecimal y append del byte bajo al `std::string`.
La operación final copia esa cadena al objeto de resultado.

Los callbacks del host usan operaciones estándar de C++ y su comportamiento
se contrasta contra el PE. La VM sigue determinando cuándo se invocan, el
índice, la operación y la progresión del programa.

| Entrada | Salida observada en PE y C++ |
|---|---|
| Fuente original de 144 caracteres | Los 72 bytes completos, iguales byte a byte |
| Vacía | Cadena vacía |
| `00` | `00` |
| `deadbeef`, `DeAdBeEf` | `deadbeef` |
| `CAFE01FF` | `cafe01ff` |
| Cadena de 64 caracteres | Los 32 bytes completos |
| `abc` | `ab0c` |
| `g0` | `00` |
| Espacio seguido de `a` | `0a` |

La longitud impar y las entradas no hexadecimales muestran por qué las pruebas
antiguas contra `bytes.fromhex` no demostraban la semántica del programa.

## Reproducir las comprobaciones

```powershell
python scripts/pafet_hexvm_diff_xxvi.py
python scripts/pafet_hexvm_frames_xxvi.py
python scripts/pafet_hexvm_lift_xxvi.py
python scripts/pafet_hexvm_literal_diff_xxvi.py
python scripts/pafet_hexvm_full_frame_xxvi.py
python scripts/pafet_hexvm_executor_diff_xxvi.py --msvc
python scripts/pafet_hexvm_standalone_diff_xxvi.py --msvc
python scripts/pafet_hexvm_wide_diff_xxvi.py
python scripts/pafet_hexvm_package_xxvi.py
```

El diferencial de seis frames usa GCC en WSL. El ejecutor, las pruebas completas
de entrada/salida y la aritmética tienen compilación MSVC nativa. Se puede usar
`--reuse-native` en el standalone para reutilizar el corpus guardado.

## Límites que permanecen

El oráculo Windows es el `pafet_pass8.exe` preexistente, con los dos bytes de
gate modificados respecto a `pafet.bin`. Los archivos PE no se han modificado
durante este trabajo. Las instrucciones del ejecutor proceden del original.
Los inputs de prueba se inyectan en la cadena del llamador antes de entrar.

La equivalencia comprobada es finita: no cubre todas las semillas, todos los
caminos posibles ni fallos de memoria/asignación del SO. El adaptador EH acepta
el tipo auditado de payload de cola; tipos inesperados y operaciones no
reconstruidas fallan explícitamente. No implementa un runtime general de
excepciones de Windows.

Los servicios de host son asignación por arena, relojes deterministas, copia y
limpieza de memoria, callbacks de biblioteca y comprobación de cookie. Sus
supuestos están separados del programa virtual. La siguiente mejora es reducir
la traducción literal a IR semántico y ampliar cobertura de ramas/semillas;
el ejecutor completo ya permite comprobar esa reducción contra el original.
