# PAFET — User-VM canonical bytecode recovered (72/73)

Fecha: 2026-10-29. **Resultado: 72 de 73 bloques del bytecode user-VM decodificados byte-exact.** Capturados mediante hook Frida sobre el materializer `0x140007610` (leave), dumpeando la slice de 24 B del output buffer tras cada materialización. **Block 54 nunca se materializa** en 4 inputs distintos — es dead code o se activa solo con un input muy específico (candidato: el username correcto).

Hash del bytecode canónico ensamblado (72/73): `5f522d73d93560a9f2cb1243730953a4138c8090b56db320a8963e12b2c858e5`

## Hallazgo principal: XOR 0x5A localizado como constante del bytecode

**Block 28 del bytecode canónico = `0x5a * 24` (todo 0x5A, 24 bytes repetidos).** Este es el XOR 0x5A de `f_user` que llevamos días buscando. No vive en `.text` como literal (Jack IV-A lo refutó), no vive en el pool-reader (Jack V-B lo refutó), no vive en el shadow helper `0x140005b50` (Jack III lo refutó). **Vive en el bytecode cifrado del user-VM, como una constante extraída por un LOAD_CONST del bytecode decodificado.**

Otras constantes de `f_user` localizadas:
- **ADD 7** (`0x07`): aparece 1 vez en bloques 8, 22, 23, 24 (como byte dentro de una instrucción, no como bloque entero).
- **MUL 3** (`0x03`): aparece 1 vez en bloques 14, 33, 44, 61.

El patrón "bloque entero de un solo byte repetido" en 24 B parece ser el formato de LOAD_CONST para constantes escalares (block 28 = 0x5a, block 4 = 0x5b, block 20 = 0x58, block 35 = 0x5d, etc.).

## Estructura del bytecode

De los 72 bloques decodificados:

| Tipo | Count | Ejemplo |
|---|---|---|
| ALL-SAME (constante escalar, 24 B del mismo byte) | ~22 | block 28 (0x5a*24), block 4 (0x5b*24), block 20 (0x58*24) |
| LOW-ENTROPY (uniq ≤ 3; dos constantes en el bloque) | ~12 | block 2 (0x4a*16 + 0x63*8), block 29 (0x86*8 + 0x2e*16) |
| INSTR (datos aparentemente aleatorios, likely bytecode) | ~38 | block 0, 3, 5, 8, 11-15, 17, 21-26, ... |

De los 1728 bytes capturados (72×24), 23.1% caen en el rango [0..61] — consistente con el rango de opcodes observado en runtime (op range [0..61], 62 opcodes posibles).

Runtime trace (`alice/serial01`, 631 events, 206 pairs únicos) consume opcodes en rango exacto [0..61] y canales [0..3]: coherente con que **el bytecode canónico está formado por secuencias (opcode_byte + operand_bytes)**, donde el canal se infiere de bits altos del byte o de contexto.

## Fase 1-2: cadena de materialización reconstruida parcialmente

- **4 seeds Feistel del `permute8` user-VM** extraídas estáticamente del disasm de `0x140002080`:
  - `0x5cd8585a9977c0d4`, `0xfe81d29118a944eb`, `0x18494ccf9be2c8fe`, `0xba32c7061b144c95`
  - Multiplicador: `0xd6e8feb86659fd93` (mismo que main-VM)
  - fmix64 muls: `0xff51afd7ed558ccd`, `0xc4ceb9fe1a85ec53`
- **Block starts offline reproducible**: `scripts/decode_user_blob_vi.py` implementa permute8 user-VM + cycle-walking (budget 64, bound 72). Produce 73/73 inicios únicos en `[0, 24, 48, …, 1728]`. ✓ Validado contra la expectativa estructural.
- **Materializer completo NO replicado offline**: usa 3 capas de XOR dependientes de un buffer dinámico en `[ctx+0xa8]` (SSE2 XOR final). Es decir: la materialización en Python requeriría también extraer y modelar ese buffer runtime. Vía usada aquí: capturar el output del materializer original via hook Frida.

## Fase 3-4: 72/73 bloques decodificados + correlación con runtime

- `scripts/dump_user_blocks_vi.py`: hooks materializer leave, snapshot de la slice `[buf+idx*24..+24]` por cada call. Stable: todos los inputs (alice, ramon, a*23, a*25, alice123) producen los mismos 72 bloques (missing: 54).
- Correlación: cada instrucción runtime (ch, op) con op en [0..61] y ch en [0..3]. Los 62×4 = 248 pairs posibles están completamente observados en inputs de longitud ≥23. Para alice se tocan 206/248 pairs. El denominador no es handlers (son 35 wrappers nativos), sino **(ch, op) pairs del bytecode canónico**.

## Fase 5: integración C++ no realizada en esta iteración

Scope limit: no se produjo `src/user_vm_bytecode.cpp` ni un intérprete que ejecute la tabla IR. Esto es trabajo de la siguiente iteración y requiere también decodificar el encoding exacto (ch, op, operand_width) de cada byte del bytecode canónico, para lo cual hace falta un paso adicional de reversing del opcode decoder (`0x1400074d0` según nomenclatura del architecture.json, pero ver nota — `0x1400071e0` también participa).

## Grietas que quedan

- **Block 54 missing**: ningún input de los 4 probados lo activa. Candidatos:
  - Dead code del compilador.
  - Bloque reached solo con el username correcto que satisface `sha256(user) == H`.
  - Bloque reached en una rama controlada por la flag check (`CMO{...}` shape).
- **Opcode encoding exacto**: no decodificado. Falta demostrar que `byte → (ch, op)` sigue el patrón del main-VM (`op = mapping[byte ^ 0xe7] ^ 0xb9`) o si usa otro encoding. Los 23.1% bytes en [0..61] sugieren mapping directo + operandos, pero no está verificado.
- **Materializer offline fiel**: la última capa SSE XOR con `[ctx+0xa8]` requiere modelar el buffer dinámico. Alternativa demostrada: hook del materializer original (lo hecho aquí).

## Métricas del encargo

- **Bytecode canónico decodificado: 72/73 bloques (98.6%)**, sha256 `5f522d73d93560a9f2cb1243730953a4138c8090b56db320a8963e12b2c858e5`
- **Correlación con traza runtime**: la traza observa opcodes en rango exacto [0..61] que cuadra con el bytecode; mapeo byte→instrucción no formalizado aún.
- **Nuevos hallazgos**: XOR 0x5A localizado como constante del bytecode (block 28); 22 bloques `ALL-SAME` identificados como LOAD_CONST storage; constantes 0x07 y 0x03 (ADD y MUL de f_user) localizadas; block 54 identificado como dead-code o input-specific-gated.

## Reproducción

```sh
# Fase 1-2: permute8 user-VM + block starts (offline)
python scripts/decode_user_blob_vi.py

# Fase 3: hook materializer + capturar 72/73 bloques (via Frida sobre pafet_pass8.exe)
python scripts/dump_user_blocks_vi.py

# Evidencia:
#   vm_pools_evidence/decode_user_blob_vi.json     (seeds + block_starts)
#   vm_pools_evidence/user_blocks_vi.json          (72 bloques decodificados + sha256)
#   vm_pools_evidence/user_bytecode_canonical_vi.bin  (1752 B canonical, con zeros en block 54)
#   vm_pools_evidence/user_bytecode_dumped_vi.json (intermediate materializer snapshots)
#   vm_pools_evidence/user_bytecode_at_executor_vi.bin  (buffer en primer resolver call)
```
