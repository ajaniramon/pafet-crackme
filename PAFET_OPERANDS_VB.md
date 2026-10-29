# PAFET V-B — Operandos capturados del operand reader

Fecha: 2026-10-29.

## Resultado

- **Capturadas 1208 lecturas del operand reader (`0x1400074d0`) por ejecución**, para dos inputs: `alice/serial01` y `ramon/serial01`.
- **Los 1208 valores devueltos son enteros `0..61`.** El operand reader NO entrega LOAD_CONST generales: entrega **índices del espacio de opcodes** (62 valores). Esto refuta la hipótesis de que `0x1400074d0` sea el que materializa el inmediato `0x5A` de `f_user`.
- **Diferencial alice vs ramon** (misma longitud 5): secuencia idéntica de 1208 reads pero **1182/1208 posiciones difieren en el valor devuelto**. El patrón de dispatch (cuántas lecturas, en qué orden) es input-invariante; el VALOR que se lee depende del input porque el bytecode usa los operandos como índices computados.
- **`0x5A` NO aparece ni como u16 ni como byte** en los 1208 operand reads de alice. Confirma que el XOR 0x5A de `f_user` no se materializa aquí. Vive en otro vector (candidatos: inline en handlers, derivación aritmética en runtime, o `std::string` buffer directo, no accesible por `0x1400074d0`).

## Operandos observados

62 valores únicos, todos `0..61`. Distribución (frecuencia):

```
0x003a (58)  x41    0x001e (30)  x41    0x000e (14)  x30    0x002e (46)  x28
0x002c (44)  x28    0x0012 (18)  x26    0x0008 ( 8)  x26    0x0003 ( 3)  x26
0x0016 (22)  x26    0x0007 ( 7)  x25    0x0013 (19)  x25    0x000c (12)  x24
0x001f (31)  x23    0x0026 (38)  x23    0x0030 (48)  x23    (... hasta 61)
```

Max = 61 (`0x3d`). Cardinal 62. **Esto encaja exactamente con el espacio de opcodes del user-VM** (62 opcodes × 4 canales ya documentado). Interpretación: `0x1400074d0` resuelve el próximo opcode del bytecode (o un índice derivado), no un LOAD_CONST.

## Interpretación revisada

El operand reader `0x1400074d0` es parte del **decoder del siguiente opcode**, no del data flow de inmediatos. Por invocación de resolver, se llama entre 0 y 3 veces:

| arity | instrucciones |
|---|---|
| 0 operand reads | 1 |
| 1 operand read | 246 |
| 2 operand reads | 185 |
| 3 operand reads | 197 |

(629 instrucciones VM, suma 629.)

Los operandos están asociados al próximo despacho, no al valor del byte del input (que es lo que realmente transforma `f_user`). Los 1208 reads INTERPRETAN parte del bytecode como opcodes/channels adicionales, no inmediatos de datos.

## Dónde vive `0x5A` entonces

Opciones (NO investigadas por este fork; sugeridas para Sol o siguiente ciclo):

1. **Operando inmediato leído por otro helper** (p.ej. `0x140007040`, `0x1400036d0`, `0x1400071e0` o similar). Patrón esperado: una función que lee un byte de un puntero del ctx y devuelve `rax` sin pasar por `0x1400074d0`.
2. **Derivación aritmética en runtime**: por ejemplo `0x5A = (0xA5 >> 1) ^ 1` o cualquier otra identidad computable con constantes ya observadas. Los operandos u16 observados incluyen 0x3a, 0x1e, 0x0e, 0x2e. Ninguno es 0x5A directo.
3. **Leído directamente del blob cifrado** mediante acceso byte-by-byte sin pasar por el operand reader. Esto implicaría otro camino en el materializer.

## Artefactos

- `scripts/pafet_operand_capture_vB.py` — Frida capture (resolver + operand reader)
- `scripts/pafet_xor5a_hunt_vB.py` — intento de localizar transiciones del output buffer (0 hits en ctx+0x38, confirma que el buffer final se construye post-VM)
- `vm_pools_evidence/operands_alice_vB.json` — 1837 events (629 resolver + 1208 operand)
- `vm_pools_evidence/operands_ramon_vB.json` — 1845 events (637 resolver + 1208 operand), diferencial
- `vm_pools_evidence/xor5a_hunt_vB.json` — 0 output-buffer transitions durante el VM
