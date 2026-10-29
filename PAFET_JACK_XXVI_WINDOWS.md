# JACK XXVI — continuación nativa en Windows

Continuación de `3a2cc9a`, el 29 de octubre de 2026. **La Hex-VM sigue abierta.**
Se elimina el bloqueo de captura por falta de Windows y se explica la primera
divergencia de B. No hay todavía ejecutor propio completo ni comparación de los
72 bytes finales.

## Reproducción

Python 3.10, Frida 17.24.3, dependencias Python de XXVI y Visual Studio 2022
Community con herramientas C++. No se modifican archivos PE.

```powershell
python scripts/pafet_hexvm_diff_xxvi.py
python scripts/pafet_hexvm_capture_xxvi.py
python scripts/pafet_hexvm_windows_audit_xxvi.py
```

El primer comando compila el candidato con MSVC `/O2 /std:c++17 /W4 /WX` y lo
contrasta con instrucciones de `pafet.bin` bajo Unicorn. El segundo ejecuta el
`pafet_pass8.exe` preexistente, con sus dos bytes de diferencia en `0x395efb` y
`0x395efc`; no equivale a ejecutar el PE intacto. El tercero compara muestras
nativas con el ejecutable C++ y comprueba relaciones entre excepciones, catches
y salida. Todos abortan ante errores o discrepancias.

Las evidencias nuevas se guardan aparte de las históricas:

- `jack_xxvi_evidence/windows_differential.json`: 512 handlers, 256 drains,
  256 adaptadores de slots, 64 bloques `0x2d409a` y 256 colas de decoder.
- `jack_xxvi_evidence/windows_capture.json`: run_id, hashes del PE/agente/colector,
  contexto, thread ID, profundidad, tablas efectivas, estados y eventos.
- `jack_xxvi_evidence/windows_audit.json`: 128 handlers, 126 drains no vacíos y
  128 commits de decoder nativos coinciden con C++; dos drains vacíos conservan
  el estado sin cambios. Se comprueban 86 payloads entregados al catch y los
  128 bytes del buffer inmediato de salida.

## Captura nativa y límites

Run guardado: `13500778-5a1d-4297-b32e-f15c5aa36009`, entrada `alice/serial01`.
Se registran 287727 pushes y handlers, 291964 entradas/salidas del dispatcher,
567 remaps, 86 throws, 172 fronteras de catch y 16 lecturas de slots.
El collector no instala un manejador que suprima excepciones. Windows ejecuta
el unwind MSVC real.

El contexto se descubre desde los argumentos de queue/dispatcher y se valida
su igualdad por invocación. La última instantánea válida se toma antes de la
limpieza en `0x815bf`: leer el contexto en `EXECUTOR.onLeave` también es incorrecto,
porque su pila ya puede haberse reutilizado. En onLeave sólo se lee el buffer
externo de salida y el retorno.

Se cuentan todos los callbacks observados, pero sólo se guardan los primeros
128 eventos frecuentes de cada clase, más remaps, throws, catches y slots.
Las lagunas entre ticks de la muestra son intencionales. La recepción del
payload final se confirma con ACK del host antes de continuar el target.
Lecturas fallidas, contexto distinto o timeout invalidan la captura.
Esto no demuestra que los hooks observen todas las instrucciones ni elimina
posibles efectos temporales de Frida. No se ha realizado un control de estados
internos sin hooks. Las cifras varían entre procesos; no se exige igualdad de
contadores con la captura histórica.

## Divergencia de B resuelta

El PC `0x295b7f` entra en `0x14008621b`, comprueba el estado en `rsp+0xa4` y llama
al decoder `0x140080000`. La cola de éste, `0x140080426..0x1400804b7`, implementa:

```text
if (uint32(counter_actualizado) & 31) == 0:
    A = fmix64(sign_extend_32(counter_actualizado) XOR A XOR B)
B = fmix64(B XOR uint32(indice_siguiente) XOR uint8(opcode))
enqueue(0x36da17)
```

`counter_actualizado` es el campo de instrucciones `ctx+0x928`, no el contador
de pushes `ctx+0x4c0`. El índice es R14 después de incrementar. El opcode
decodificado es el byte bajo de R8, que también se guarda en `ctx+0x11a4`.

En el primer commit nativo se observa índice 1 y opcode 1. Para la discrepancia
histórica, `fmix64(0xee0926be8b4db586) == 0x632c971c07011acc`, exactamente el valor
antes inexplicado. La captura nueva tiene otras semillas y valida la misma
fórmula con sus propios valores.

El core incorpora `commit_decoded_instruction`, separado del decoder completo.
Se comprueba contra 256 ejecuciones x64 sintéticas, incluidos contadores con
signo y refresco periódico de A, y contra 128 fronteras de una ejecución Windows.
No se omiten ficticiamente los efectos anteriores del decoder: lectores,
cookie, remap, cambios de banco, relojes y decodificación siguen pendientes.

## Excepciones y salida inmediata

La metadata FH4 identifica el catch `0x3ca648` y continuación `0x88990`.
En los 86 throws observados el payload de ocho bytes se añade a la cola entre
ambas fronteras; hay exactamente 86 pushes sin retorno normal. Esto comprueba
la entrega nativa del payload, sin implementar aún un unwind propio.

El desensamblado `output_stores.asm` muestra:

```text
value = read_slot(index)
[r15 + index*8] = value
```

Se repite 16 veces. Los 16 retornos capturados, empaquetados como uint64 little
endian, coinciden byte por byte con el buffer externo de 128 bytes antes de
cleanup y al salir del executor. No es una comparación contra un ejecutor
propio completo ni demuestra cómo se construyen los 72 bytes finales.

## Siguiente frontera

Reconstruir el prefijo de `0x80000` y sus dependencias (`0x49b70`, `0x4e0d0`,
`0x4b250`, `0x4c110` y remap/thunks), conservando el diferencial de la cola.
Seguir también al consumidor del buffer externo de 16 uint64. El mapa de
72 PCs conserva `0x295b7f` como PARCIAL y no lo cuenta como bloque completo.

## Cierre funcional posterior

La siguiente fase ha completado el ejecutor literal, la inicialización, los destinos indirectos y la relación con los 72 bytes finales. Resultados y límites en [PAFET_JACK_XXVI_CLOSURE.md](PAFET_JACK_XXVI_CLOSURE.md). Este documento conserva los resultados de la primera continuación.
