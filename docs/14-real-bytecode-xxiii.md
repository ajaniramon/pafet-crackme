# JACK XXIII — Formato real y límites del decoder

> La especificación fue recuperada del historial. La validación actual con
> trece capturas Windows se detalla en `../PAFET_JACK_XXIII.md`; las
> referencias a las capturas Linux anteriores son históricas.

Referencia: `e871c5d53a816c4a163423243d3347f3a8fd82dc`. Este documento corrige
las afirmaciones de los documentos 03, 09, 10 y 13 sobre el bytecode. Las
evidencias y el alcance de ejecución están en `PAFET_JACK_XXIII.md`.

## Tres niveles diferentes

1. Blob original: 1752 bytes en VA `0x1403e5020`.
2. Unidades de materialización: 73 segmentos de 24 bytes, permutados.
3. Instrucciones lógicas: longitud variable; una unidad de 24 bytes contiene
   varias instrucciones y puede terminar con bytes que no son instrucciones
   alcanzables. No hay un opcode de 24 bytes ni un bloque constante de 24
   bytes consumido por LOAD_CONST.

El decoder independiente lee el PE, materializa sus bytes y produce IR. No
lee una secuencia de instrucciones capturada. Su CFG conservador desde PC 0
contiene **339 instrucciones, 73 segmentos físicos y los dos sucesores de
cada condicional**. Las ejecuciones estudiadas recorren 334 PCs diferentes.

## Materialización

`scripts/pafet_materialize_xxiii.py` y `src/pafet_original_vm_xxiii.cpp`
transcriben las operaciones de `0x140007610`. `permute8` usa las cuatro seeds
anteriores, pero su retorno correcto es `(left_final<<4)|right_final`. El
script VI intercambiaba esos nibbles. Se contrastaron los 256 retornos con las
instrucciones originales de `0x140002080`.

Para solicitud lógica b>0 se itera la permutación sobre b-1 hasta obtener
un valor menor que 72, con el límite original de 64 iteraciones; el segmento
físico empieza en `(valor+1)*24`. La solicitud 0 empieza en cero. La tabla
correcta es biyectiva sobre las 73 posiciones. El fallback original también
está modelado.

Para cada intervalo de hasta 24 bytes:

- Copia bytes desde el blob original a ese intervalo.
- Aplica las tres pasadas de máscara. Importa el truncamiento a u32 en
  `mov eax,ecx` de `0x1400077e6`; sustituirlo por un fmix64 genérico cambia
  el resultado.
- Aplica la transformación secuencial con estado de `0x140007940`.
- XOR con el buffer compañero de `ctx+0xa8`.
- Aplica, cuando `ctx+0x130 != 0`, la máscara por ventanas. Los índices de
  ventanas `ctx+0x12c` y su sucesor quedan excluidos de esa máscara.
- Marca el bitmap opcional apuntado por `ctx+0x140` e incrementa `ctx+0xcb8`.

El puerto escalar sustituye las cuatro instrucciones PXOR vectorizadas por
XOR de bytes equivalentes. Para los intervalos válidos de este blob el
tamaño es como máximo 24, mientras que la rama SSE exige al menos 64. La
supuesta capa SSE especial del último bloque no explica un bloque perdido.
La sombra y las ventanas sí constituyen dependencias de contexto explícitas.

Se han comparado los 1752 bytes después de cada llamada de 73 solicitudes,
en tres configuraciones: sombra cero, sombra no cero y sombra no cero con
ventanas activadas. Son 219 comprobaciones completas, no 219 prefijos. El
C++ coincide también con las tres salidas completas del modelo contrastado.
La extracción canónica utiliza sombra cero y máscara de ventanas desactivada:

```text
SHA-256 = a15f43b7d8afa2b3ea2b4cbb77c5ae740a9b4ccc240fbd49fcb9bd8492d5d815
```

Se recuperan todas las posiciones, incluidas las que no recorren las
ejecuciones normales. No se copia el bloque final de una traza. El antiguo
`user_bytecode_canonical_vi.bin` sólo coincide en 89/1752 posiciones con esta
extracción. La diferencia no es un único bloque.

El C++ `materialize_all` es un extractor de bytes, no un constructor de todo
el contexto nativo. No reproduce los objetos del bitmap ni el contador del
runtime. El test de las invocaciones Unicorn sí comprueba el contador y las
marcas del bitmap junto a los bytes, para acotar el contrato de extracción.

## Opcode y operandos

Sea P la tabla de 256 bytes en RVA `0x3dfcb0`. El código que llama al
remapeador obtiene el opcode lógico así:

```text
logical_opcode = P[code[opcode_pc] XOR 0x33] XOR 0xeb
operand_pc = opcode_pc + 1
```

`0x1400074d0` es principalmente un **remapeador de aliases**, no el lector
del byte de opcode. Su ruta ordinaria actualiza la codificación del PC y
devuelve una entrada u16 de la tabla de aliases del contexto; no avanza el
PC lógico. Las rutas especiales para 60 y 61 sí leen un u16 adicional.

Para un operando que empieza en p:

```text
x = (p * 0x7af13fd3) mod 2^32

u8:  value = code[p] XOR 0xad

u16: packed = code[p] | (code[p+1]<<8)
     value = ((packed XOR x XOR (x>>13) XOR 0xffff9a10) * 0x1a8d) mod 2^16

u32: packed = code[p] | (code[p+2]<<8) | (code[p+1]<<16) | (code[p+3]<<24)
     value = ((packed XOR x XOR (x>>13) XOR 0xb2089a10) * 0x0d936053) mod 2^32
```

Lectores nativos: u32 `0x140007040`, u16 `0x1400071e0`, u8
`0x140007370`. El nombre anterior `operand8` para `0x140007040` era erróneo.
Cada lector consume su anchura; las fórmulas usan su PC de entrada, no el PC
del opcode ni el PC ya avanzado.

## Instrucciones del programa original

| Opcode lógico | Operación | Operandos | Tamaño total |
|---:|---|---|---:|
| 1 | LOAD_CONST | u32 slot | 5 |
| 4 | LOAD_REG | u16, índice efectivo low8 | 3 |
| 5 | STORE_REG | u16, índice efectivo low8 | 3 |
| 8 | ADD | — | 1 |
| 21 | NEQ | — | 1 |
| 22 | SLT con signo | — | 1 |
| 24 | SGT con signo | — | 1 |
| 26 | JUMP | u32 bloque lógico | 5 |
| 27 | JZ, consume condición | u32 bloque lógico | 5 |
| 28 | JNZ, consume condición | u32 bloque lógico | 5 |
| 29 | RETURN, consume resultado | — | 1 |
| 31 | DROP | — | 1 |
| 32 | CALL host | u16 operación, u8 número de argumentos | 4 |
| 41 | XOR | — | 1 |
| 44 | NOT | — | 1 |

Las operaciones binarias toman y del tope, x del siguiente elemento y
apilan x op y. ADD envuelve en 64 bits. SLT/SGT comparan int64. CALL limita
el número de argumentos a 32 y restaura el orden original antes del host.
El retorno host se apila aunque inmediatamente siga DROP.

Los trece valores de LOAD_CONST proceden de tablas en RVA `0x3dd520`,
`0x3dd560` y `0x3dd5d0`. Se aplica XOR, suma o resta según k mod 3. Un índice
fuera de 0..12 se limita a 0. No se extraen constantes de bloques de 24
bytes. La constante 90 del slot 12 y el XOR literal 0x5A del host son usos
diferentes; `xor dl,0x5a` existe en `.text` en `0x140048a2c`.

## Transferencias y terminación

Un operando de salto identifica un **bloque lógico**; `0x140002330` lo
convierte a un offset físico con la misma permutación. El núcleo del handler
prepara una transferencia mediante `0x140006300` y la cola `0x140006010`.
El PC observado al final del núcleo sigue siendo el de fin de operandos.
El dispatcher aplica la transferencia antes del siguiente fetch. Por ello
la IR conserva ambos `post_core_pc` y `next_opcode_pc`.

Ejemplo: opcode en 19, operando en 20 que decodifica bloque 1. Al terminar
el núcleo PC=24; el siguiente opcode se lee en 72 y su handler entra con
PC=73. Actualizar el PC observado del núcleo a 72 sería una reproducción
incorrecta de ese límite de ejecución.

RETURN termina el programa lógico con un valor extraído de la pila. El
wrapper exterior, las excepciones y sus guardas de integridad constituyen
otro nivel de control. No están sustituidos por una supuesta instrucción
HALT de opcode 0.

## Canal, aliases y destinos: dependencia dinámica

No hay un canal estático por bloque o por instrucción. Para las
continuaciones inline observadas:

```text
mid(x) = ((x XOR (x>>33))*M1 XOR (((x XOR (x>>33))*M1)>>33))*M2   [mod 2^64]
channel = (mid((u32(ctx+0xc)*PHI_MUL) XOR (logical_opcode*PHI) XOR q(ctx+0xe0)) >> 33) & 3
PHI_MUL = 0xd6e8feb86659fd93; PHI = 0x9e3779b97f4a7c15
M1 = 0xff51afd7ed558ccd; M2 = 0xc4ceb9fe1a85ec53
```

Las cuatro rutas raíz del dispatcher pasan canales constantes distintos:

| Retorno del CALL nativo | Canal |
|---|---:|
| `0x140041187` | 3 |
| `0x140042be5` | 1 |
| `0x140042cb2` | 2 |
| `0x1400479f3` | 0 |

La elección de esa ruta raíz requiere el control nativo del dispatcher.
En 20 de las 17.910 entradas raíz nuevas, extender la fórmula inline al
dispatcher predice otro canal. El decoder no oculta esas diferencias:
`runtime_selection` exige el caller nativo para una selección raíz.
Se contrastan todas las continuaciones inline y las cuatro rutas raíz
observadas. No se ha portado el mecanismo completo que elige esas rutas.

Ruta ordinaria del remapeador:

```text
alias = u16(ctx + 0xf64 + 2*(channel*62 + logical_opcode))
table = q(ctx+0xf40)
trampoline = (sign_extend_i32(table[channel*62+alias])
              XOR sign_extend_i32(u32(ctx+0xf50))) + q(ctx+0xf48)
```

Para logical_opcode 60/61, el remapeador lee un u16 adicional e indexa
`channel*62 + 62 + decoded_u16`. La API exige ese operando y una instantánea
de contexto suficiente. Estas rutas no aparecen en el programa recuperado
y el intérprete lógico las rechaza como instrucciones no implementadas.

`runtime_selection` no inventa memoria de la tabla indirecta: si falta su
entrada i32 devuelve el trampoline como pendiente. Las capturas comparan
por separado el retorno real del resolver, R9 de la continuación y la
entrada real a la dirección nativa. El catálogo conserva cada observación,
incluidos los destinos múltiples de un mismo par.
En `long_a23` hay más de un destino por par en los 248 pares observados;
el máximo es diez. Por ello tampoco basta con conservar una tabla estática
canal/alias→dirección obtenida una vez al inicio o al final.

## Bloque lógico 54

Se materializa en el segmento físico 16, PC 384. Contiene:

```text
384 LOAD_REG 3
387 LOAD_CONST 7       # valor 5
392 ADD
393 DROP
394 JUMP 5
```

Su entrada está en el brazo tomado de JNZ en PC 480. La interpretación
abstracta mantiene desconocidos los retornos host que dependen de datos y
obtiene condición {0} para ese JNZ. Bajo los contratos documentados quedan
334 instrucciones alcanzables y este bloque no se ejecuta. Un control que
cambia sólo C3 en el modelo activa el brazo y alcanza las 339; no se ha
alterado ni ejecutado un PE modificado para ese control.

Esto descarta la explicación «faltan sus bytes porque requiere el SHA
correcto» para la extracción. La conclusión de inalcanzabilidad depende del
programa lógico, sus valores iniciales y los contratos host, no de una
prueba universal sobre todas las guardas nativas todavía sin portar.
