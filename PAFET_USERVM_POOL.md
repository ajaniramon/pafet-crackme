# PAFET — User-VM pool decodificado y clasificado

Fecha: 2026-10-28. **Resultado parcial: pool de la user-VM caracterizado al 100%; 12 slots son primitivas ALU, 0 constantes de credenciales.** Esta pieza cierra una de las cuatro VMs anidadas (usuario). Los pools de SHA / serial / hex y el blob cifrado del propio bytecode user-VM quedan fuera de este reporte.

## Pregunta y alcance

Tras cerrar el controlador principal en [PAFET_CONTROLLER_SLICE.md](PAFET_CONTROLLER_SLICE.md), la hipótesis pendiente era: si REVoid virtualizó una función que en el código fuente tenía el username, la clave o la flag como constante, acabaría oculta en el pool de alguna de las VMs anidadas, cifrada como cualquier operando.

Este trabajo verifica esa hipótesis **para la VM de usuario (`f_user`)**. Si el pool contiene algo que no sea aritmética básica, aparecería en la clasificación. Las otras tres VMs (SHA, serial, hex) requieren el mismo tratamiento para generalizar el veredicto.

## Mapa funcional de la user-VM

El executor `0x140048960` llama a estas rutinas aux (todas en `.text`):

| VA | Rol |
|---|---|
| `0x140048ac0` | permute8 — Feistel de 8 bits con cuatro seeds `0xff7a8b23...`, `0x5d2301e8...`, `0xbbeb9fb6...`, `0x1990147f...` y multiplicador `0xd6e8feb8...` |
| `0x140048c20` | permute8⁻¹ |
| `0x140048e10` | **pool-reader** — bounds check `cmp edx, 0xc` (12 slots) |
| `0x140049330` | shadow-state updater — cifra campos del ctx con magia DEAD/MEMT + fmix |
| `0x140049890` | wrapper |

Blob del bytecode: `0x1403E5020`, **1752 bytes** reales (la ventana 8 KB del commit anterior era conservadora). Attestation `0xc4344faf7ef3b8df` reproducida offline con stream fmix64 — es un hash de integridad, no una llave; descifrar el blob sigue requiriendo el materializador runtime de user-VM.

## Pool: tres tablas .rdata que cuadran exactamente

| VA | Contenido | Tipo |
|---|---|---|
| `0x1403E1240` | offsets `[0, 0x10, 0x1c, 0x28, 0x38, 0x44, 0x54, 0x64, 0x6c, 0x78, 0x7c, 0x80]` | `uint32[12]` |
| `0x1403E7110` | longitudes `[4, 3, 3, 4, 3, 4, 4, 2, 3, 1, 1, 1]` (sum=33) | `uint32[12]` |
| `0x1403E2500` | aux_tbl de 132 B | `uint32[33]` (= sum × 4) |

El cuadre `sum(longitudes)·4 = tamaño(aux_tbl)` es exacto.

## ABI del pool-reader `0x140048e10`

Resuelto por análisis de call-sites reales (tres `jmp` tail-call desde el wrapper `0x140049230`, invocado desde `0x1400602ac` y `0x14007293f`, ambos **fuera** del user-VM dispatcher):

```text
rcx = depth (0..3)
rdx = slot  (0..11)
r8  = lit1  (literal u64, equivale a OP0 LOAD_CONST)
r9  = lit2  (literal u64, equivale a OP1 LOAD_CONST)
→ rax = result
```

El retorno viene por `rax`, no por buffer. El `r14` que una iteración anterior interpretó como "puntero heap" era en realidad el `outbuf` que devuelve OP0 cuando `r9=0`. **El pool es una librería ALU compartida, no un almacén de constantes.**

El fallo `0x140398502 UC_ERR_READ_UNMAPPED` que bloqueaba la iteración anterior pertenece a otro subsistema (el dispatcher `0x14003f540` que materializa el blob 1752 B); irrelevante para el pool.

## Los 12 slots, caracterizados

Cada slot ejecuta un programa de `length` iteraciones de un mini-VM de 11 opcodes. Validado contra 9 pares de inputs por slot, con identidades matemáticas conocidas:

| slot | len | función | validación |
|---|---|---|---|
| 0 | 10 | `A + B` | `0xdeadbeef + 0xcafebabe = 0x1a9ac79ad` ✓ |
| 1 | 6 | `(A & B) << 1` (carry) | `f(0xff, 0xff) = 0x1fe` ✓ |
| 2 | 3 | `A & B` | `0xdead… & 0xcafe… = 0xcaacbaae` ✓ |
| 3 | 11 | `A − B` | `0xdead… − 0xcafe… = 0x13af0431` ✓ |
| 4 | 7 | `(¬A & B) << 1` (borrow) | `f(0, 0xff) = 0x1fe` ✓ |
| 5 | 4 | `¬A & B` | `¬0xdead… & 0xcafe… = 0x520010` ✓ |
| 6 | 9 | `A ^ B` | `0xdead… ^ 0xcafe… = 0x14530451` ✓ |
| 7 | 5 | `A & B` (dup de 2 vía RECURSE→8) | ≡ slot 2 ✓ |
| 8 | 3 | `A & B` (dup de 2) | ≡ slot 2 ✓ |
| 9 | 11 | `A + B` (dup de 0) | ≡ slot 0 ✓ |
| 10 | 12 | `A − B` (dup de 3) | ≡ slot 3 ✓ |
| 11 | 10 | `A ^ B` (dup de 6) | ≡ slot 6 ✓ |

Ejemplo de programa decodificado — slot 0 (`A + B`):

```text
COPY XOR RECURSE(→1) RECURSE(→2) COPY AND COPY SHL1 COPY ADD
```

Es un sumador Kogge-Stone usando RECURSE(1) = carry y RECURSE(2) = AND como primitivas. La integridad del bytecode decodificado coincide con el canónico en el 100 % de slots × iteraciones.

## Veredicto para user-VM

**Constantes sin explicación: 0.** El pool entero son primitivas ALU, con tres slots duplicados (probablemente para evitar aliasing en diferentes call-contexts). **No contiene username preimage, no contiene clave 3DES, no contiene flag text.**

Esto refuta la hipótesis "la constante oculta vive en el pool user-VM". No la refuta para los otros tres pools (SHA / serial / hex), ni para el blob cifrado 1752 B del bytecode user-VM: una constante camuflada como operando `LOAD_CONST` dentro del bytecode seguiría oculta hasta que ese blob se decodifique.

## Falsación y siguiente experimento

La clasificación se falsaría si: un slot ejecutado con otras `(depth, lit1, lit2)` produjera un valor incompatible con la función inferida; si el aux_tbl tuviera un uso extra no documentado por el pool-reader; o si una entrada del user-VM dependiera de un slot omitido en la caracterización.

El siguiente experimento prioritario es **decodificar el blob cifrado de 1752 B** en `0x1403E5020`. Requiere la cadena entera dispatcher `0x14003f540` + materializer propio de user-VM + permute8 user-VM + tabla de remapeo de opcodes. El fallo `0x140398502` arriba se trabaja desde ahí, no desde el pool.

Después procede repetir el procedimiento sobre SHA (executor `0x14027aba0`), serial (`0x14022a120`) y hex (`0x1400804c0`). El patrón esperado es idéntico (pool-reader + aux_tbl + attestation fmix64), con seeds y bounds propios por VM.

## Reproducción y artefactos

```sh
python scripts/pafet_uservm_pool_extract.py
python scripts/pafet_uservm_pool_characterize.py
# Evidencia:
#   vm_pools_evidence/usuario_pool_structure.json      (offsets, longitudes, raw words)
#   vm_pools_evidence/usuario_pool_decoded.json        (ABI, inputs/outputs por slot)
#   vm_pools_evidence/usuario_pool_characterization.json (función inferida + traza)
```

Rama: `vm-pools-dump`. El blob cifrado y los pools de SHA / serial / hex no están decodificados en este reporte.
