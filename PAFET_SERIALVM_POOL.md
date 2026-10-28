# PAFET — Serial-VM pool: librería ALU replicada, 0 constantes no explicadas por RC4

Fecha: 2026-10-28. **Resultado: cierre del escondite "pool serial-VM" con evidencia.** El pool asociado al executor del serial-VM (`0x14022a120`) resulta ser otra instancia de la misma librería ALU que ya se caracterizó para user-VM. Esto refuta la hipótesis "el pool del serial-VM esconde una constante distinta de RC4". No dice nada sobre el bytecode cifrado del serial-VM ni sobre los pools de SHA, hex y user-VM blob (que quedan pendientes).

## Pregunta y alcance

Tras cerrar [PAFET_USERVM_POOL.md](PAFET_USERVM_POOL.md) con 0 constantes de credenciales, el otro escondite barato era: **¿esconde el pool del serial-VM alguna constante que no se explique por RC4?** RC4 solo necesita la tabla identidad `0..255` como arranque de la KSA; cualquier otra constante en el pool destacaría.

Este reporte responde esa pregunta sola. No examina el blob del bytecode cifrado del serial-VM, ni los pools de SHA (`0x14027aba0`) ni hex (`0x1400804c0`).

## Hallazgo estructural: la librería ALU está replicada en 20+ pools

Un barrido en `.rdata` encontró **26 tablas de offsets** con N=12 compartiendo exactamente la misma secuencia canonical `[0, 16, 28, 40, 56, 68, 84, 100, 108, 120, 124, 128]`. Un barrido paralelo en `.text` encontró **23 funciones con `cmp edx, 0xc`**, todas con la misma estructura:

```asm
lea r11, [rip + disp]        ; r11 = IMG_BASE (0x140000000)
cmp edx, 0xc
jae  bail
mov ecx, [r11 + rax*4 + <OFFSETS_DISP>]
mov eax, [r11 + rax*4 + <LENGTHS_DISP>]
...
xor r10d, [r11 + r9*4 + <AUX_TBL_DISP>]
```

Cada función hardcodea un triplete distinto `(OFFSETS, LENGTHS, AUX_TBL)` pero **sin variar la lógica**. Es decir, el PE replica 20+ veces la misma librería ALU, cada vez con un aux_tbl diferente (rotación de keystream splitmix por VM/módulo).

## Candidatos próximos al blob del serial-VM

El blob del bytecode del serial-VM está en `0x1403E9C10`. Los pool-readers cuyos displacements caen cerca de esa región:

| Pool-reader VA | offsets | lengths | aux_tbl | cuadre `sum·4=\|aux\|` |
|---|---|---|---|---|
| `0x14017fe40` | `0x1403E9550` | `0x1403EF520` | `0x1403E1030` | 132 B ✓ |
| `0x14026dd30` | `0x1403EAF90` | `0x1403E1C00` | `0x1403F0770` | 132 B ✓ |
| `0x140283e20` | `0x1403E4FD0` | `0x1403E5FD0` | `0x1403E9A00` | 132 B ✓ |
| `0x14033e960` | `0x1403E70E0` | `0x1403E32C0` | `0x1403E9650` | 132 B ✓ |
| **(ref) `0x140048e10` user-VM** | `0x1403E1240` | `0x1403E7110` | `0x1403E2500` | 132 B ✓ |

Todas las tablas de offsets siguen el patrón canonical, y todas las tablas de lengths son `[4, 3, 3, 4, 3, 4, 4, 2, 3, 1, 1, 1]` (sum=33 → 132 B). El aux_tbl difiere en contenido pero no en tamaño.

## Validación diferencial

Ejecución bajo Unicorn (`IsolatedPE` + call ABI `rcx=depth, rdx=slot, r8=lit1, r9=lit2 → rax`) de cada pool-reader con **6 tuplas no triviales** de entrada:

| probe | (depth, lit1, lit2) |
|---|---|
| 1 | `(0, 0xdeadbeef, 0xcafebabe)` |
| 2 | `(0, 0xffffffff, 0xffffffff)` |
| 3 | `(0, 0x123456789abcdef, 0xfedcba9876543210)` |
| 4 | `(1, 0xdeadbeef, 0xcafebabe)` — exercises RECURSE |
| 5 | `(2, 0x11112222, 0x33334444)` — RECURSE depth 2 |
| 6 | `(0, 0, 0xffffffffffffffff)` |

**Resultado: 0 mismatches en 288 comparaciones** (6 probes × 4 candidatos × 12 slots) contra el user-VM reference. Los 4 pool-readers de la región del blob serial-VM producen **idénticos** los 12 valores del user-VM pool para cualquier entrada.

Conclusión: los 4 candidatos son instancias de la **misma función semántica** que el user-VM. Los 12 slots siguen siendo (ADD, SUB, AND, XOR, carry, borrow + 5 duplicados), ya caracterizados en [PAFET_USERVM_POOL.md](PAFET_USERVM_POOL.md).

## Veredicto sobre la pregunta planteada

- **¿Hay en el pool del serial-VM alguna constante que no se explique por RC4? → NO.**
- El pool es la **misma librería ALU que user-VM**. 0 constantes de credenciales, 0 constantes derivadas de RC4 (ni la tabla identidad 0..255, ni un índice sospechoso, ni material de clave). El pool no es el escondite.
- Si RC4 tiene alguna peculiaridad en Pafet, no vive en el pool-reader del serial-VM. Vive, por eliminación, en el **bytecode cifrado del serial-VM** (`0x1403E9C10`, aún no decodificado).

## Falsación

La conclusión "0 constantes de credenciales en el pool serial-VM" se falsaría si:
- Un slot ejecutado con `(depth=3, lit1, lit2)` arbitrarios diera un valor incompatible con las funciones ALU inferidas, en cualquiera de los 4 candidatos.
- El aux_tbl se usara en una ruta de código no cubierta por el pool-reader (una tabla auxiliar leída por el executor directamente).
- El executor del serial-VM leyera operandos de una tabla distinta a las 3 identificadas.

Lo probado aquí: 6 tuplas no triviales × 4 candidatos × 12 slots con equivalencia exacta al user-VM pool. Resta probar `depth=3` y rutas de la tabla aux desde fuera del pool-reader.

## Siguiente paso recomendado

Repetir el mismo check sobre los pool-readers que caen cerca de los blobs de **SHA** (`0x1403E3F10`) y **hex** (`0x1403EC120`). Son escondites igualmente baratos:

- SHA: tiene constantes muy reconocibles (IV `6a09e667...`, 64 K `428a2f98...`); cualquier anomalía salta.
- hex: la tabla "0..9A..F" es trivial; cualquier otra cosa destaca.

Si los tres (serial, SHA, hex) resultan ser réplicas ALU como user-VM, los pools quedan descartados en bloque y el único escondite restante dentro del binario es el **bytecode cifrado del user-VM** (1752 B, 73 bloques × 24 B — tamaño confirmado por tres vías independientes: `cmp r8d, 0x49` del materializer, `mov r8d, 0x6D8` como argumento a memset, y la constante del encargo original). Esta pieza es la cara: requiere ejecutar en runtime el materializer `0x140007610` y el resolver `0x14003ebb0` para capturar handlers y operandos reales. Ver [vm_pools_evidence/usuario_vm_architecture.json](vm_pools_evidence/usuario_vm_architecture.json) para la arquitectura ya reconstruida.

## Reproducción y artefactos

```sh
python scripts/pafet_serialvm_pool_extract.py
# Evidencia:
#   vm_pools_evidence/serial_pool_candidates_decoded.json
```

Rama: `codex/serial-vm-pool`. No se modifica `pafet.bin`; el PE se lee solo en modo lectura via `pefile` y Unicorn.
