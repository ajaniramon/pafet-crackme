# PAFET — evaluación de REVoid y prueba de concepto

Fecha: 2026-10-28. **REVoid no es un desvirtualizador.** Es un virtualizador de código fuente C/C++ basado, según su documentación, en Clang AST. La copia examinada proporciona un ejemplo generado que ayuda a reconocer mecanismos de Pafet; no proporciona un motor que podamos ejecutar sobre Pafet para recuperar su semántica.

## Material realmente examinado

Repositorio primario: [NIKJOO/VSEC-REVoid](https://github.com/NIKJOO/VSEC-REVoid), commit fijado [`a7ceb544a2cec1cd534154a52d9e382b51c7fa81`](https://github.com/NIKJOO/VSEC-REVoid/tree/a7ceb544a2cec1cd534154a52d9e382b51c7fa81).

La copia local contiene tres archivos públicos:

| Archivo | Contenido |
|---|---|
| `README.md` | Descripción de un virtualizador; demo limitada y promesa de publicar el motor completo más adelante |
| `password_check.cpp` | Programa fuente de ejemplo con una comprobación de contraseña |
| `password_check.vm.cpp` | Fuente C++ ya virtualizada de ese ejemplo, incluido su intérprete y adaptadores nativos |

Se leyó el ejemplo generado, sus helpers, tabla de opcodes, fetch, acceso a registros, llamadas nativas, saltos y manejo de excepciones. Los hashes y el commit de los archivos examinados quedan en `semantic_evidence/semantic_tests.json`, sección `revoid`. También se contrastó el README por la conexión GitHub en ese mismo commit. Esta evaluación no describe un motor privado ni presupone que futuras versiones sean iguales.

**No se encuentra el código del transformador Clang, ni un clasificador de handlers, motor simbólico, eliminador de código muerto o desvirtualizador distribuido como herramienta.** Esas técnicas tendrían que implementarse aprovechando las pistas del ejemplo, no invocarse como funciones de REVoid.

## Arquitectura y mecanismos observables

El producto transforma funciones C/C++ antes de compilar. El ejemplo usa celdas virtuales de 64 bits y conversiones mediante `uintptr_t`, y conserva thunks nativos para operaciones de Windows y C++. Incluye `windows.h`, `LoadLibraryA`, `GetProcAddress` y `MessageBoxA`. La llamada nativa indirecta tiene un caso `__stdcall` para MSVC x86; en los demás casos usa la convención de la compilación. Esto no es un intérprete de instrucciones x86 que acepte cualquier PE, ni demuestra compatibilidad universal entre las VM generadas.

Pafet es un PE x86-64 de MSVC y su instrumentación debe respetar ABI MS x64, TLS, objetos C++, registros no volátiles y excepciones FH4. El cargador Linux adapta parte de eso y conserva fallos conocidos. La arquitectura virtual de 64 bits del ejemplo no suprime esos requisitos.

Mecanismos visibles en `password_check.vm.cpp`:

- Bytecode cifrado con mezclas `fmix64`, semillas y máscaras; tabla por función que remapea opcodes.
- Máquina de estados exterior, handlers, intérprete auxiliar L2 y ventanas de bytecode que se abren y cierran por segmentos.
- Mezclas de historia, claves de ejecución y sal; ejemplos de valores que se cancelan, como el scrub aplicado dos veces mediante XOR.
- Registros y pila codificados, llamadas a thunks nativos para STL y API, instrucciones de salto condicional y excepciones virtuales.
- Predicados opacos, operaciones aritméticas equivalentes y escrituras de ruido. Que el ejemplo contenga ruido no prueba que cualquier operación parecida de Pafet sea irrelevante.

## Compatibilidad contrastada, no asumida

Hay correspondencias concretas: `fmix64`, registros/pila, callbacks nativos, opcode 32 para llamadas host y tipos de operaciones 1/4/5/26/27/28/29/31/41/44 en las trazas. Son indicios sólidos de una familia de diseño relacionada.

Hay también diferencias que impiden trasladar directamente el intérprete del ejemplo:

| Ejemplo público | Pafet observado | Consecuencia |
|---|---|---|
| Switch lógico con casos 0–49 | Despacho con límite 62, comprobado en `0x14038eb75` | El catálogo del ejemplo no cubre el de Pafet |
| No tiene opcode 58 | Opcode 58 ejecutado en PCs de la preparación y comparación del contador | Hay semántica adicional que debe contrastarse |
| Tabla y semillas del ejemplo | Otras constantes, remapeos, tablas de clones y thunks generados en heap | No se reutilizan IDs, direcciones ni claves del ejemplo |
| Accesores del ejemplo | Pafet codifica valores vivos con máscara, nonce y dos formas XOR/suma | Copiar el layout o leer el PC como entero plano da datos falsos |
| Pistas de ruido en fuente | Pafet contiene guardas, attestation y fail-stop | Se necesita demostrar dependencia o irrelevancia de cada región relevante |

El opcode 58 fue seguido hasta sus thunks y cuatro cuerpos originales: `0x140386150`, `0x140388310`, `0x14038a270`, `0x14038b8b0`. Su núcleo extiende el signo del valor de pila según un ancho inmediato. En la traza del bucle, el inmediato es **32**. No incorpora una comparación con un username o serial en los cuerpos inspeccionados. Se contrastaron 168 combinaciones de cuerpo, ancho y valor ejecutando las instrucciones originales, con las dependencias de lectura/pila abstraídas explícitamente.

La diferencia de catálogo no significa que ninguna técnica del ejemplo sirva. Significa que un adaptador debe verificar la semántica de los opcodes adicionales y sus operandos, en lugar de declarar equivalencia completa.

## Prueba de concepto limitada realizada

Se implementaron `scripts/pafet_semantic_probe.py`, `scripts/pafet_semantic_map.py` y modos opcionales de `scripts/native/native_probe.c`. No constituyen un desvirtualizador genérico.

1. **Separación de efectos nativos y control virtual.** `--script-control` ejecuta el intérprete exterior original con callbacks host abstractos. Se modelan los resultados de SHA, necesidad de rellenar clave, contador y predicado de formato. Las operaciones de consola y cifrado se sustituyen en esta prueba; no se fuerzan credenciales ni se presenta su salida como aceptación del original.
2. **Extracción del PC sin alterar su valor.** Se reconstruyó el acceso a los campos vivos de Pafet. Para el campo `i`, la máscara es `A XOR ((i+1)*B) XOR (nonce[i]*C)`, módulo 2^64. El valor es el contenido XOR máscara o contenido menos máscara según el modo. Doce ensayos ejecutan el getter original `0x140381630` y comprueban también que renovar el nonce preserva el valor. La observación del PC usa esa expresión sin llamar al getter mutante.
3. **Seguimiento de instrucciones y clones.** Se instrumenta el lookup original `0x140335150`, conservando su ejecución mediante trampoline, y se registran PC, opcode lógico, tabla de clon y slot. La proyección de ocho combinaciones de decisiones produce 409 fronteras de instrucción distintas y 16 tipos lógicos observados. No se confunden los 24 callbacks nativos con esos tipos de instrucción.
4. **Seguimiento dirigido de la extensión de signo.** Se resuelven las formas de thunk vistas para opcode 58, se registra el inmediato leído por la rutina original y se ejecutan sus cuatro cuerpos por separado. Se comprueba que instrumentar el lookup mantiene la secuencia host y el retorno de cada caso.
5. **Flujo de la VM de usuario.** `--user-control` conserva esa VM y abstrae sus siete callbacks nativos. Treinta casos combinan seis longitudes y cinco resultados de carácter transformado. El flujo observado depende del contador/longitud modelados y no cambia con esos cinco resultados. Esto no demuestra ausencia global de accesos o condiciones no observados.

## Ampliación: levantado completo del controlador lógico

La técnica adaptable de separar efectos host y reducir el flujo se llevó ahora más lejos mediante `scripts/pafet_controller_slice.py`, sin implementar un desvirtualizador genérico:

- El materializador original `0x140385b30` permite extraer 105 bloques de 26 bytes. Se utiliza `code XOR shadow` para compensar la mutación de la ventana; la extracción forzada termina inmediatamente y no se presenta como recorrido natural.
- La posición de los bloques usa una permutación Feistel de 8 bits y cycle walking sobre 104 posiciones, dejando el bloque 0 fijo. Se contrastan los 256 valores de la permutación y los 105 destinos con instrucciones originales.
- Los operandos de 16/32 bits tienen mezcla dependiente de su posición y orden de bytes propio; no se pueden interpretar con el formato del ejemplo público. Los 716 ensayos de lectores originales cubren todos los operandos estáticos en ambos modos de campos vivos. Se recupera además el pool de 21 constantes y se contrasta en 92 casos de cuatro clones originales.
- Se levantan las 482 instrucciones hasta el salto/retorno terminal de cada bloque, preservando el relleno. Los 32 contrastes dinámicos comprueban cada PC, opcode, operando y valor de pila de los caminos del modelo. El slice descarta retornos host no usados mediante `DROP` inmediato y reduce las decisiones a SHA/padding/formato y contador.

Esto demuestra que la técnica dirigida es útil en Pafet aunque el código público no sea una herramienta de desvirtualización compatible. No demuestra equivalencia total de runtimes o wrappers, ni aporta una preimagen o bits nuevos de clave. Véase `PAFET_CONTROLLER_SLICE.md` para contratos y falsación.

## Qué aporta cada técnica y qué queda abierto

| Objetivo | Resultado de esta fase | Límite |
|---|---|---|
| Identificar handlers | Tabla principal de 24 entradas, usuario de 7 y los 16 tipos presentes en todo el bytecode lógico principal | El resto del catálogo no aparece en el programa principal extraído; las otras funciones tienen mapas propios |
| Reconstruir control | CFG completo de 105 bloques y slice del programa lógico principal | Completo bajo contratos host explícitos; no prueba todas las guardas nativas |
| Recuperar expresiones | Campos vivos, constantes, operandos y dependencias lógicas hacia ramas/retorno | No hay prueba simbólica global del runtime ni de las VMs anidadas |
| Eliminar irrelevancias | Prueba estática de DROP para retornos no usados; 73 instrucciones inalcanzables bajo contratos | No es una prueba de que todo estado de historia, runtime o guardas sea ruido |
| Localizar aceptación | Componentes nativos de SHA/formato y su conexión bajo retornos abstractos | No se ha recorrido la aceptación real con username válido |
| Encontrar ramas nuevas | Se clasifican todos los bloques lógicos principales y sus ramas | La inalcanzabilidad se limita al modelo; otras VMs/runtime siguen abiertos |

No se ha medido una reducción del espacio de credenciales gracias a esta prueba. Sí se evita tomar una traza parcial o un ejemplo del virtualizador como prueba de cobertura total.

## Reproducir

Desde el repositorio, instalar `pefile`, `capstone`, `unicorn`; para el colector nativo hacen falta Linux x86-64 y GCC. Preparar el cargador como indica `scripts/native/README.md`.

```sh
python scripts/pafet_semantic_map.py --out semantic_evidence_new/static
python scripts/pafet_semantic_probe.py --native scripts/native/native_probe --opcode-projection
python scripts/pafet_controller_slice.py --native scripts/native/native_probe --out controller_evidence_new
```

Para repetir también el inventario del ejemplo, clonar el repositorio fuente, fijar el commit citado y añadir `--revoid /ruta/VSEC-REVoid`. El script no requiere ese checkout para probar Pafet. `--tail-validation` añade únicamente el experimento separado de dependencia de memoria descrito en el informe de cobertura.

**Conclusión:** el fuente generado de REVoid es una referencia útil para realizar esta instrumentación dirigida. No hay una herramienta REVoid disponible que desvirtualice Pafet directamente, y no se ha demostrado equivalencia completa entre ambos intérpretes. El estado global de cobertura sigue siendo **D**, según `PAFET_SEMANTIC_COVERAGE.md`.
