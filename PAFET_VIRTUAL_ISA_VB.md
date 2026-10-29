# PAFET V-B — ISA real reconstruido

Fecha: 2026-10-29. Reducción del catálogo "35 handlers nativos" a un ISA semántico con grupos de equivalencia por patrón de helpers invocados.

## Metodología

Para cada handler nativo (de los 35 observados en runtime con `user=alice`), construyo una firma usando tres dimensiones ortogonales:

1. **Canal del dispatcher**: `0..3`. Marca de qué "canal" se invoca el handler.
2. **Aridad de operandos**: cuántos reads al operand reader `0x1400074d0` hace el handler (0..3 observados).
3. **Conjunto de helpers invocados**: cuáles de los 12 helpers compartidos llama este handler.

Dos handlers con la misma firma en los tres ejes son **semánticamente equivalentes bajo esta aproximación**. Un afinado posterior requeriría byte-diff del disasm (ya hecho parcialmente por Jack-I ripper, que estimó 17-22 semánticas únicas).

## Resultados principales

### Agrupamiento por helper-call-set solo

Si uso **solo el conjunto de helpers invocados** (ignorando canal y arity), los 35 handlers caen en **10 grupos**:

| grupo | handlers | helpers invocados | notas |
|---|---|---|---|
| 00 | 9 | `{0x140003880, 0x140003a50}` | núcleo "state_tick + 3a50" |
| 01 | 4 | `{0x1400029a0, 0x140003a50, 0x140004930, 0x1400058a0, 0x140005b50, ...}` | panic + 3a50 + xor-mask writer (10 helpers) |
| 02 | 4 | `{0x140003a50}` | solo 3a50 — primitiva mínima |
| 03 | 4 | `{0x140003880, 0x140007040}` | state_tick + 7040 (otro helper) |
| 04 | 4 | `{0x1400036d0, 0x140003880, 0x1400071e0}` | state_tick + 36d0 + PC decoder |
| 05 | 4 | `{0x140002330, 0x140006010, 0x140006300, 0x140007040}` | otra familia |
| 06 | 2 | `{0x1400029a0, 0x140003880, 0x140003a50, ..., 0x140005b50, ...}` (16) | handlers "pesados" |
| 07 | 2 | `{0x1400028a0, 0x140003880, 0x140003a50}` | variante state_tick |
| 08 | 1 | 14 helpers | handler único: `0x140011f10` |
| 09 | 1 | 17 helpers | handler único: `0x140038fe0` |

### Agrupamiento combinado (canal + arity + helpers)

Si añado canal + arity, los 35 → **34 grupos** (uno por handler prácticamente). Esto es demasiado estricto: el canal del dispatcher es muy probablemente un **selector de modo** (p.ej. "procesa el byte N mod 4"), no una operación semánticamente distinta. Es decir, dos handlers del grupo 00 (uno en canal 0, otro en canal 2) ejecutan la MISMA operación pero sobre diferentes posiciones de byte.

### Veredicto del ISA real

**El user-VM tiene ~10 operaciones semánticas únicas**, con cuatro instancias por canal (3-9 handlers por operación-canal). Esto reduce drásticamente la complejidad: en vez de 35 handlers independientes, hay un ISA compacto de ~10 opcodes virtuales, cada uno proyectado por el dispatcher a 1-4 canales.

## Mapa handler → operación virtual (parcial)

| handler VA | canal | helpers invocados | grupo | hipótesis semántica |
|---|---|---|---|---|
| `0x140008b50`, `0x14001c090`, `0x1400241b0`, `0x140033930` | 0,1,2,3 | `{3880, 7040}` | 03 | **state_tick + unknown_op7040** (una por canal) |
| `0x14000a850`, `0x1400166b0`, `0x14002d5d0`, `0x140030ec0` | 0,1,2,3 | `{36d0, 3880, 71e0}` | 04 | **state_tick + PC decoding** (invoca PC decoder) |
| `0x1400099c0`, `0x140015820`, `0x140025020`, `0x1400355c0` | 0,1,2,3 | `{2330, 6010, 6300, 7040}` | 05 | **4-helper family** (sin state_tick; otra familia independiente) |
| `0x140014a00`, `0x14001dd30`, `0x1400300b0`, `0x14003bea0` | 0,1,2,3 | `{3a50}` | 02 | **3a50-only** (verificado byte-exact: contrato en PAFET_H3A50_NATIVE_IVA.md) |
| `0x1400110f0`, `0x140012dc0`, `0x140013be0`, `0x140018300`, ... | 0,1,2,3 | `{3880, 3a50}` | 00 | **state_tick + 3a50**: 9 handlers (más común) |
| `0x14000b670`, `0x1400216d0`, `0x140027b80`, `0x14003a160` | 0,1,2,3 | 10 helpers incl. panic + xor-mask | 01 | **handler "complejo" multi-helper** |
| `0x140011f10` | 0 | 14 helpers | 08 | **handler único canal 0** |
| `0x140038fe0` | 3 | 17 helpers | 09 | **handler único canal 3**, posiblemente op terminador |

## Lo que falta para cerrar el ISA

1. **Semántica efectiva de cada grupo**: solo `{3a50}` (grupo 02) y los helpers `0x140005b50`/`0x140003880` tienen contrato verificado byte-exact. Los otros grupos están sin desensamblar semánticamente.
2. **Correspondencia con operaciones VM clásicas**: no se ha asociado cada grupo a `VIRT_LOAD`, `VIRT_XOR`, `VIRT_ADD`, etc. Para eso faltan los **inmediatos reales** (que no vienen del operand reader `0x1400074d0`; territorio pendiente).
3. **Validación cross-input**: todos los agrupamientos están basados en una única traza (alice). Un input que dispare pairs no observados aquí podría romper la equivalencia.

## Datos cuantitativos (reproducibles)

- Instrucciones VM observadas: **629** (alice/serial01)
- (ch, op) únicos observados: **212** (de 248 posibles = 62×4)
- Handlers nativos ejecutados: **35** (coincide con catálogo)
- **Grupos semánticos por helper-call-set**: **10**
- Grupos combinados (canal+arity+helpers): 34
- Operand reads por instrucción: 0 (×1), 1 (×246), 2 (×185), 3 (×197)

## Artefactos

- `vm_pools_evidence/virtual_isa_vB.json` — tabla completa con firmas y grupos
- `vm_pools_evidence/operands_alice_vB.json` — base de operandos capturados
- `vm_pools_evidence/operands_ramon_vB.json` — base diferencial

## Nota sobre el XOR 0x5A

El operando `0x5A` NO aparece en los 1208 operand reads de `0x1400074d0`. Ver `PAFET_OPERANDS_VB.md`. Vive en otro vector (candidatos documentados allí).
