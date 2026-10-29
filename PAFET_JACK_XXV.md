# JACK XXV — hex-VM: notas (trabajo detenido)

Base: rama `jack-xxv-hexvm`, sobre JACK XXIV. Trabajo detenido antes de la
reconstrucción: no hay mapa de bloques, ni ejecución completa, ni pruebas
diferenciales. Lo que sigue se obtuvo leyendo el PE; no es una
reconstrucción validada.

## Llamada

- Único llamador: el handler del controlador principal en `0x140396f92`
  (función `0x140396990`), llamada en `0x14039706c`.
- Construye un `std::string` con los 144 caracteres de `0x1403dbbc0` y un
  objeto función con tabla en `0x1403f1ba0` (seis callbacks `0x14039dXX0`).
- Argumentos: `rcx` = estado de salida (0x80 bytes a cero en `rbp+0x20`),
  `edx` = `0x10`, `r8` = objeto función.

## Ejecutor `0x1400804c0`

- 6512 instrucciones (33 KB), un único `ret`, ningún salto indirecto,
  cuatro `call rax`. Marco de pila de unos 18 KB; contexto de la VM en
  `rsp+0x180`.
- Flujo de control aplanado: los bloques calculan el estado siguiente con
  aritmética ofuscada y lo encolan con `0x14004c880`.
- Bucle externo en `0x140081540`: si el slot vivo 10 (`0x140049ee0`) vale 0
  o el flag del slot 6 (`0x1400498d0`) está activo, vacía la cola
  (`0x14004c720`) y salta al siguiente bloque. Si no, construye la salida
  (`0x1400889e0`, LUT en `0x1404195d0`, `0x140049d90`) y retorna.
- PC virtual en un slot vivo codificado (lectura `0x140049a30`, escritura
  `0x140049af0`; banco en `ctx+0x10d0`). Desde `0x140081739` un árbol de
  comparaciones sobre ese valor salta a los bloques.
- Pide 0x1f20 bytes con `PAGE_EXECUTE_READWRITE` (`0x14007fa70`) y lee
  `steady_clock::now()` dos veces (`0x14004bc10`).

## Cola y dispatcher secundario

- `0x14004c880` es idéntico a la cola de la user-VM `0x140006010` (contador
  de pushes `ctx+0x4c0`, cola `ctx+0x2b0`, longitud `ctx+0x4b8`). El primer
  push lanza una excepción C++ (`0x1403a5fa0`).
- `0x14004c720` vacía hasta 8 entradas LIFO:
  `sel = (K * 0x9e3779b97f4a7c15 + item) >> 61`, `K = fmix64(K ^ item)`,
  llama `ctx[0x9b8 + 8*sel]`.
- La tabla es una rotación de la tabla estática `0x1403dbca0`:
  `tabla[i] = estática[(K & 7) + i & 7]`. Sus 8 handlers
  (`0x14004c490…0x14004c6a0`) sólo mezclan `K = ctx+0x4b0`, `A = ctx+0x230`
  y `B = ctx+0x940` con `fmix64`, sumas y XOR; no tocan los datos hex.

## Biblioteca compartida con la user-VM

| hex-VM | user-VM | Función | Similitud |
|---|---|---|---:|
| `0x14004c880` | `0x140006010` | cola de trabajo pendiente | 1.000 |
| `0x14007fb70` | `0x14003ebe0` | remapeo de tablas | 0.991 |
| `0x140049330` | `0x1400029a0` | pánico | 1.000 |
| `0x14004c3c0` | `0x140005b50` | codificador de slots vivos | 1.000 |

El dispatcher y los handlers son propios de la hex-VM.

## Host

`scripts/pafet_hexvm_host_xxv.py` ejecuta el handler original en Unicorn
con stubs de importaciones registrados. Se detiene en la primera excepción
C++ de la cola.

## Pendiente

Capturas en Windows del ejecutor, de `0x14004c720`, de los handlers y del
buffer ejecutable, para reutilizar el lockstep de XXIV.
