# PAFET — controlador lógico completo y slice de validación

Fecha: 2026-10-28. **Resultado global D: cobertura incompleta del ejecutable.** Esta ampliación cierra el programa lógico principal bajo contratos explícitos, sin nueva restricción útil sobre las credenciales. No hay flag ni ejecución completa aceptada por el original. No se ejecutó DES, SHA ni búsqueda de credenciales en esta ampliación.

## Pregunta y alcance

La primera auditoría había observado 409 PCs, pero no podía excluir que otros bloques del controlador inspeccionasen credenciales o introdujesen otra condición. Ahora se extrae y decodifica el programa completo y se sigue la dependencia de sus ramas y retornos. La prueba se refiere al **programa lógico** ejecutado por `0x14038d9d0`, no a cada instrucción nativa de sus guardas, materializadores, callbacks o VMs anidadas.

Original: `pafet.bin`, SHA-256 `fe85e59225387fba4923f3bc6103914fe7b85ba3dc0514c9e37382818fb44d1a`. El archivo no cambia; el cargador trabaja sobre una copia instrumentada y adaptada a Linux. El blob cifrado original comienza en `0x1403dca10`. El main original pone a cero 24 locales de 64 bits (`0x1403967c6..0x1403967d5`, tamaño `0xc0`) antes de entrar a la VM. El replay sólo inicializa esos registros: leer cualquier otro sin escritura previa es un error de la prueba. Esta inicialización se comprobó tras detectar una lectura de registro 21 antes de una escritura en el bytecode; no se la descartó como ruido.

## Extracción y decodificación contrastadas

En el primer callback abstracto, con el contexto VM ya válido, el modo `SEMANTIC_DUMP_WIRE` llama al materializador original `0x140385b30(ctx,0,id)`, resuelve el inicio mediante `0x140380ad0(id)` y abre el segmento mediante `0x140383e20(ctx,start,start+25)`. Conserva los 26 bytes `code XOR shadow` y termina inmediatamente. Abrir el segmento sin materializar el bloque no basta: los bloques aún no cargados pueden parecer ceros.

Hay 105 bloques de 26 bytes. El bloque cero queda fijo; los otros 104 usan una permutación Feistel de 8 bits con cycle walking. El script incluye las cuatro semillas y contrasta los 256 valores de la permutación y los 105 destinos con las instrucciones originales en Unicorn. La correspondencia es biyectiva sobre los 105 inicios.

Cuatro extracciones —dos valores fijos de QPC y dos retornos host no usados— coinciden en sus 2730 bytes: SHA-256 `bbf827ceae0c0103dfdef84c677c7a7f83c26a3fd2b78466a7fb0d4ba46ff256`. Esto es extracción **forzada** de todos los bloques, no cobertura dinámica natural de los 105.

Los opcodes se remapean mediante la tabla del PE `0x1403e18a0`; los operandos tienen mezclas posicionales diferentes para U8/U16/U32. Sus fórmulas están implementadas en `operand()`. Se contrastan todos los operandos estáticos en ambos modos de campos vivos: **716 casos** con los lectores originales. En este componente, el segment opener se sustituye por no-op porque los bytes canónicos ya se suministran. El pool tiene 21 constantes; se contrastan las cuatro variantes originales de CONST, los 21 índices y dos índices fuera de rango: **92 casos**, con adaptadores de lectura de índice y push explícitos.

Todos los bloques terminan en salto incondicional o retorno. Se recuperan **482 instrucciones y 1131 bytes de relleno posterior a esos terminales**. Cada destino de salto es un ID válido de bloque y se resuelve a su entrada; no puede saltar al relleno bajo este conjunto de instrucciones. Los únicos tipos presentes son `1,4,5,8,21,22,24,26,27,28,29,31,32,41,44,58`. El límite 62 del dispatcher no implica 62 tipos usados en esta función.

## Contratos y prueba de dependencias

El modelo conserva los efectos nativos relevantes ya inspeccionados:

| Fuente | Contrato utilizado | Límite de la prueba |
|---|---|---|
| Host 8 | `sha_fail` en {0,1}; 0 significa igualdad | No se ejecutan SHA ni streams; su wrapper completo sigue pendiente |
| Host 14 | `padding_needed` en {0,1} | Se resume el predicado nativo de tamaño |
| Host 20 | `shape_ok` en {0,1} | Se resume el predicado nativo ya probado, no se suministra una flag real |
| Hosts 17/18 | Escribir entero de 32 bits / leerlo con signo | El contador nativo se modela según sus cuerpos; el programa produce 0,1,2,3 |
| Otros retornos host | Valor arbitrario de 64 bits | Cada HOST correspondiente está seguido inmediatamente por DROP en el código estático |
| Efectos de callbacks | Inicialización, I/O, KDF y cifrado según la frontera nativa conocida | Las guardas y rutas interiores de esos callbacks no se prueban universalmente |

El replay propaga conjuntos de dependencias por pila, registros y aritmética, conservando todos los operandos de cada expresión. Un retorno host ajeno a predicados recibe una marca propia; se rechaza si llega a una rama, argumento host o retorno observable. El DROP inmediato permite excluir **cualquier valor** de esos retornos en el programa lógico, sin depender de que cero y `UINT64_MAX` sean muestras suficientes.

Los tres booleanos se enumeran exhaustivamente; el contador no es una entrada libre porque siempre se escribe antes de leerlo. Para cada combinación se contrastan además dos valores de reloj y dos retornos no usados: **32 proyecciones del intérprete original**. Se comparan todos los PCs, opcodes, operandos y valores de push/pop, además de secuencia host y retorno: **8248 despachos, 6368 operandos dinámicos y 8976 eventos de pila**, todos coincidentes. Es equivalencia en ese dominio contractual, no prueba de la semántica de todos los handlers para entradas arbitrarias.

| PC lógico condicional | Dependencia relevante | Valores en el dominio | Efecto |
|---:|---|---|---|
| 458, 666, 2356, 2548 | Ninguna | Siempre 0 | Ramas constantes en el modelo |
| 1078 | Contador interno | 0 y 1 en la condición | Bucle de exactamente tres pasadas |
| 1829 | `sha_fail` | 0 y 1 | Rechazo previo a KDF o continuación |
| 1858 | `shape_ok` | 0 y 1 | Mensaje/flag o rechazo |
| 2366 | `padding_needed` | 0 y 1 | Añadir ceros a la clave o continuar |

Se alcanzan 409 instrucciones distintas; las otras **73** quedan inalcanzables bajo los contratos anteriores. El listado preserva y marca esas 73 en lugar de eliminarlas del artefacto. No se les atribuye inalcanzabilidad universal si un runtime corrupto, una excepción u otro estado rompe los contratos.

## Qué queda excluido y qué no

En este programa lógico no hay instrucciones de carga/almacenamiento de memoria de las credenciales: GET/SET operan en registros locales, y los efectos externos pasan por HOST. Antes del SHA sólo se invocan inicialización, mensajes y lectura. No aparece una transformación intermedia adicional, una segunda comparación de usuario/serial ni un acceso directo a sus bytes.

Las propiedades observables se comprueban expresamente: con fallo SHA se ejecutan hosts 0..9 y se retorna 1 antes de KDF; sin fallo SHA se prepara la clave con relleno opcional, se fija el contador a 0 y se hacen exactamente tres llamadas al host 19; los setters posteriores escriben 1,2,3; host 20 decide entre 21/22 y retorno 0 o 23 y retorno 1. El programa lógico no ofrece una nueva reducción del espacio de credenciales.

**No quedan excluidos** accesos o ramas de las guardas nativas, diferencias de materialización bajo estado Windows, dependencias internas de las VMs de usuario/serial/SHA, excepciones, ni la divergencia conocida del retorno del cargador de investigación. La extracción estable en cuatro configuraciones no demuestra una invariante para todos los estados de esas regiones. La dependencia histórica de slack tampoco desaparece por levantar el controlador.

## Falsación y siguiente experimento

La conclusión sobre el programa lógico se falsaría si un original pertinente ejecutase otro bloque/opcode, si un lector original produjese operandos diferentes de los decodificados, si una proyección con los mismos contratos discrepase en pila/control/retorno o si un callback modificase un estado lógico no incluido en el contrato. Las aserciones detectan las tres primeras situaciones en el dominio ejercitado; la última exige auditoría de interfaces y runtime original.

El siguiente experimento prioritario es capturar en Windows los temporales, tamaño y puntero de salida al salir de la VM de usuario y al volver a main 10 para N=15,16,17, y compararlos con el cargador Linux. Resolvería si la divergencia es de ABI/FH4 o del modelo de retorno. Después procede un slice de las VMs wrapper de SHA/serial resumiendo las primitivas ya conocidas. No se justifica seguir desvirtualizando DES ni reconstruir de nuevo este controlador.

No hay entorno Windows disponible en esta ejecución y el cargador Linux no reproduce todo CRT/FH4; por eso no se presenta aquel experimento como realizado ni se eleva la conclusión global a C. Merece la pena continuar **sobre esas fronteras concretas**, sin evidencia positiva aún de una pista oculta.

## Reproducción y artefactos

Desde el repositorio, con Python, `pefile`, `capstone`, `unicorn`, Linux x86-64 y GCC:

```sh
cd scripts/native
python prepare_native.py
gcc -O2 -o native_probe native_probe.c native_context.S
cd ../..
python scripts/pafet_controller_slice.py --native scripts/native/native_probe --out controller_evidence_new
python scripts/pafet_semantic_probe.py --native scripts/native/native_probe --opcode-projection > semantic_regression_new.json
```

El segundo comando de pruebas es la regresión de los componentes/control anteriores sin `--tail-validation`: no ejecuta DES. `controller_evidence/` conserva el bytecode canónico, listado completo, JSON, dos trazas crudas, regresión y manifest. `semantic_evidence/` y `audit_evidence/` conservan snapshots históricos, con hashes de aquellas versiones de los fuentes. Los nombres de traza que incluyen “success” sólo significan decisiones abstractas favorables.
