# PAFET — Desvirtualización de la user-VM: arquitectura observada y bloqueo técnico

Fecha: 2026-10-28. **Resultado: ÉXITO PARCIAL — arquitectura de la VM reconstruida estáticamente, bytecode canónico NO extraído.**

El blob de 1752 bytes en `0x1403E5020` es **ejecutable, no sólo un sello de integridad**. La user-VM tiene una arquitectura de despacho dirigido por tabla con 62 opcodes × 4 canales = 248 handlers. La atestación de 1752 bytes está reproducida offline; los pools (ya cerrados en [PAFET_USERVM_POOL.md](PAFET_USERVM_POOL.md)) son biblioteca ALU compartida. La extracción byte-a-byte del bytecode canónico requiere capturar en tiempo de ejecución el buffer materializado del contexto; el intento Frida de esta iteración no disparó los ganchos (dispatcher no alcanzado con credenciales de prueba).

## Qué cambia respecto a iteraciones anteriores

| Dato | Iteración previa | Esta iteración |
|---|---|---|
| Función `0x140048960` | "Executor del user-VM" | **Thunk de 7 vías de acceso a `std::string`**, no es un executor |
| Dispatcher real | `0x14003f540` (4227 B) | **`0x14003f540` (0x93e5 = 37861 B, confirmado por .pdata)** |
| Blob 1752 B | "Sólo atestación" | **Ejecutable; cargado por chunks de 24 B vía materializador** |
| Material. VA | — | **`0x140007610..0x140007ba1` (prolog + body, 1920 B total)** |
| Resolver de handlers | — | **`0x14003ebb0` — `handler = (table[ch*62+op] ^ key) + base`** |
| Lector de operandos | — | **`0x1400074d0` — tabla u16 en ctx+0xf64**; **`0x1400071e0` — lectura 16-bit del buffer con decode** |

## Cadena de materialización reconstruida (estática)

### Fase 1 — atestación del blob (único punto donde el blob se lee para integridad)

```
0x14003f6e5: movabs rax, 0xf7002e5d6b6ed339    ; seed inicial
0x14003f6ef: xor ebx, ebx                       ; contador = 0
0x14003f6f1: lea rdi, [rip + 0x3a5928]          ; rdi = 0x1403E5020 (blob)
0x14003f6f8: mov esi, 0x6d8                      ; 1752 iteraciones
0x14003f700: movzx ecx, byte ptr [rdi]           ; byte del blob
0x14003f703: xor rcx, rbx                         ; XOR contador
0x14003f706: xor rcx, rax                         ; XOR estado acumulado
0x14003f709: call 0x140002040                     ; fmix64
0x14003f70e: inc rbx; lea rdi,[rdi+1]; sub rsi,1
0x14003f719: jne 0x14003f700
0x14003f71b: ; rax contiene atestación
...
0x14003feb6: movabs rax, 0xc4344faf7ef3b8df      ; esperado
0x14003feeb: je 0x14003feff                       ; abort si no coincide
```

Atestación reproducida offline con el mismo bucle: `0xc4344faf7ef3b8df` ✓ (ver `scripts/pafet_uservm_bc.py`). Este lector del blob **no almacena** los bytes; sólo verifica integridad.

### Fase 2 — asignación de buffers del contexto (ctx)

El dispatcher reserva en su stack frame:
- 4 KB en `[rsp+0x1780]` (zeroed)
- 8 KB en `[rsp+0x2780]` (zeroed)
- 256/512/512/1024/496/496 B adicionales
- 1752 B en `[rsp+...]` (zeroed al final de la función — scratch del bytecode)

### Fase 3 — lector del bytecode (único lector real del blob)

**Encontrado estáticamente en `0x14000769a` por un byte-level scan de referencias RIP-relativas a `0x1403E5020`.** El linear-sweep de Capstone lo perdió por desincronización. El código:

```
0x140007695: cmp ebp, r15d
0x140007698: jae 0x1400076cb              ; salir si ebp>=r15d
0x14000769a: lea r9, [rip + 0x3dd97f]     ; r9 = 0x1403E5020 (blob)
0x1400076a1: add r9, r8                    ; r9 += r8 (offset en bytes)
0x1400076b0: movzx eax, byte ptr [r9]      ; eax = blob[r9]
0x1400076b4: lea r9, [r9+1]
0x1400076b8: mov rcx, qword ptr [r14 + 0x1b0] ; dest = ctx[0x1b0]
0x1400076bf: mov byte ptr [r8 + rcx], al       ; dest[r8] = al
0x1400076c3: inc r8d
0x1400076c6: cmp r8d, r15d
0x1400076c9: jb 0x1400076b0                     ; loop
```

Esto está **dentro de la función `0x140007631..0x140007ba1` (1392 B)**. Esa función:
1. Toma un `block_id` en r8d, bounds check `cmp r8d, 0x49` → `block_id` ∈ [0,72]. **73 bloques × 24 bytes = 1752 B exactos**.
2. Calcula el rango `[block_id*24 .. block_id*24+24)` dentro del blob.
3. Copia esos 24 bytes al buffer destino en `ctx[0x1b0]`.
4. Luego, tras el loop, inicializa un stream de constantes `0x9e3779b97f4a7c15`, `0x2545f4914f6cdd1d`, `0xd6e8feb86659fd93`, `0xff51afd7ed558ccd`, `0xc4ceb9fe1a85ec53` → **permutación/descifrado del chunk recién copiado** (lo mismo que el main-VM: Feistel permute + decoding posicional).

**El blob tiene 73 bloques de 24 bytes.** Esto es la pieza clave que la iteración anterior no identificó.

### Fase 4 — despacho VM (patrón repetido 4 veces)

En el dispatcher, el patrón de ejecución es:

```asm
movzx r8d, byte ptr [rsp + 0x1099]  ; opcode byte (0..61)
cmp r8d, 0x3e                        ; max 62 opcodes
jae ERROR
mov edx, <channel>                   ; 0..3 (constante en cada sitio)
call 0x1400074d0                     ; lee operando → eax
mov r8d, eax                         ; r8 = operando (u16)
mov edx, <channel>
call 0x14003ebb0                     ; resuelve handler → rax
mov r8, rdi                          ; r8 = (otro arg)
mov edx, ebx                         ; ebx = 3 o 0x80000003
call rax                             ; ejecuta handler(ctx, edx, r8)
```

Los 4 sitios encontrados: **0x140041185 (ch=3), 0x140042be3 (ch=1), 0x140042cb0 (ch=2), 0x1400479f1 (ch=0 vía `xor edx,edx`)**.

### Fase 5 — resolver de handlers `0x14003ebb0`

```asm
mov eax, edx                       ; eax = channel (0..3)
imul rdx, rax, 0x3e                ; rdx = channel * 62
mov eax, r8d                       ; r8d = opcode byte
add rdx, rax                       ; rdx = channel*62 + opcode (0..247)
mov rax, qword ptr [rcx + 0xf40]   ; rax = jump-table ptr (en ctx)
movsxd rax, dword ptr [rax + rdx*4] ; rax = i32 entrada
movsxd rdx, dword ptr [rcx + 0xf50] ; rdx = XOR key
xor rax, rdx                        ; rax ^= key
add rax, qword ptr [rcx + 0xf48]   ; rax += base
ret                                 ; devuelve function pointer
```

**Fórmula**: `handler = (table[channel*62 + opcode] XOR key) + base`.

- `ctx+0xf40`: puntero a la tabla de 248 × int32 (992 B)
- `ctx+0xf48`: dirección base para desenmascarar
- `ctx+0xf50`: clave XOR

Estos tres campos son **asignados en runtime** por el dispatcher (no están en `.rdata`); dependen del estado del ctx tras el setup inicial.

### Fase 6 — lector de operandos `0x1400074d0` y PC `0x1400071e0`

El lector de operandos tiene tres rutas según el valor del opcode:
- `opcode == 0x3d` (= 61): operando de tabla en `ctx[0xf64 + (ch*62+op+62)*2]` tras actualizar PC vía `0x1400071e0`.
- `opcode == 0x3c` (= 60): similar.
- default: lee de tabla `ctx[0xf64 + (ch*62+op)*2]` con enmascaramiento de la lectura por sombra.

El lector de PC `0x1400071e0`:
1. Lee los dos bytes `[ctx[0x1b0] + pc], [ctx[0x1b0] + pc + 1]`.
2. Si `pc+1 >= ctx[0x1b8]` (fin del buffer actual), aborta con `call 0x1400029a0(edx = 0x52445532)`.
3. Compone `raw_u16 = (byte1 << 8) | byte0`.
4. **Decodifica**:
   ```c
   uint32_t temp = pc * 0x7af13fd3;
   uint32_t mixed = raw_u16 ^ (temp >> 13) ^ temp ^ 0xffff9a10;
   uint16_t operand = (mixed * 0x1a8d) & 0xffff;
   ```
5. Devuelve `operand`.

Decodificador **invertible** (gcd(0x1a8d, 2¹⁶) = 1):
- `modinv(0x1a8d, 2¹⁶) = 0x3845`
- `modinv(0x7af13fd3, 2³²) = 0x3d26705b`
- Para codificar un operando canónico `op` en posición `pc`:
  ```c
  uint32_t temp = pc * 0x7af13fd3;
  uint16_t mixed = (op * 0x3845) & 0xffff;
  uint16_t raw = mixed ^ (temp >> 13) ^ (temp & 0xffff) ^ 0x9a10;  // low 16 bits
  // byte0 = raw & 0xff; byte1 = (raw >> 8) & 0xff;
  ```

## Bytecode: 73 bloques × 24 B

- **Tamaño total**: 1752 B exactos.
- **Chunks**: 73 (bounded por `cmp r8d, 0x49` en el materializador).
- **Materialización**: on-demand, un chunk a la vez, en el buffer `ctx[0x1b0]`.
- **Buffer size `ctx[0x1b8]`**: crece conforme se materializan más chunks.
- **PC `ctx[0x210]`**: índice byte-a-byte en el buffer.
- Cada operando lee 2 bytes (dos avances de PC); cada opcode usa 1 byte.

Esto es **diferente del main-VM** (105 bloques × 26 B = 2730 B).

## Validación offline reproducida

| Pieza | Prueba | Script |
|---|---|---|
| Atestación `0xc4344faf7ef3b8df` | Reproducida sobre el blob extraído | `scripts/pafet_uservm_bc.py` |
| Material. permute8 (seeds listadas) | Firma Feistel estándar de REVoid | `scripts/pafet_uservm_architecture.py` |
| Inversa del decodificador de operandos | `0x1a8d · 0x3845 ≡ 1 (mod 2¹⁶)` ✓, `0x7af13fd3 · 0x3d26705b ≡ 1 (mod 2³²)` ✓ | `scripts/pafet_uservm_architecture.py` |
| Boundaries de funciones | Desde `.pdata` runtime function entries | `scripts/pafet_uservm_architecture.py` |

Artefactos:
- `vm_pools_evidence/usuario_vm_architecture.json` — mapa de funciones, offsets de ctx, constantes del decodificador, inversas, sitios de despacho.
- `scripts/pafet_uservm_blob_xref.py` — enumeración exhaustiva (byte-level) de referencias rip-rel al blob.
- `scripts/pafet_uservm_architecture.py` — extractor estático reproducible.
- `scripts/pafet_uservm_frida_capture.py` — ganchos Frida (no fructíferos con `alice/serial01` en esta corrida; ver bloqueo abajo).

## Lo que NO está hecho — bytecode canónico

**No se ha extraído el bytecode canónico de los 73 bloques.** Requiere capturar en tiempo de ejecución:
- El buffer en `ctx[0x1b0]` después de cada materialización (73 chunks).
- La tabla de handlers en `ctx[0xf40..0xf40+992]` (248 × i32).
- La `xor_key` en `ctx[0xf50]` y la base en `ctx[0xf48]`.
- La tabla de operandos en `ctx[0xf64..0xf64+496]` (248 × u16).

Con todo lo anterior, se podría reconstruir el programa completo (opcode, operando decodificado, handler VA) y clasificar handlers por semántica. Sin esos datos, el decodificador posicional de operandos y la tabla de handlers son opacos aunque las fórmulas de reversión están cerradas.

## Diagnóstico técnico EXACTO del bloqueo

**Primer punto que no se atraviesa**: capturar el estado del ctx en el sitio de despacho `0x140041185`.

- **VA**: `0x140041185` (uno de los cuatro sitios `call rax` del dispatcher real).
- **Registros esperados en ese punto**: `rcx` = ctx (user-VM), `rdx` = `ebx` (3 o 0x80000003), `r8` = `rdi` (operando o aux).
- **Memoria a volcar en ese momento**:
  - `[ctx+0x1b0]` → buffer bytecode (variable size, hasta 1752 B tras 73 materializaciones).
  - `[ctx+0x1b8]` → size actual del buffer (u32).
  - `[ctx+0x210]` → PC (u64).
  - `[ctx+0xf40]` → tabla handlers (992 B).
  - `[ctx+0xf48]`, `[ctx+0xf50]` → base y key (u64 cada uno).
  - `[ctx+0xf64]` → tabla operandos (hasta 496 B).
  - `[rsp+0x1099]` → opcode byte actual (u8).
- **Experimento intentado**: Frida `Interceptor.attach` sobre los 4 sitios + sobre el dispatcher 0x14003f540 + sobre host-20. Lanzado contra `pafet_pass8.exe` con `alice`/`serial01`. **Resultado: 0 eventos capturados**, pero el proceso llegó a imprimir `"[!] Wrong credentials"` desde host 20 (= el dispatcher ejecutó al menos una vez).
- **Causa probable del fallo del hook**: timing — Frida pudo haberse enganchado después de que el dispatcher ya pasó por los sitios, o el stack-frame en runtime no coincide con la expectativa de `[rsp+0x1099]` (el frame de pafet_pass8 vs pafet.bin puede ser idéntico, pero la condición de `cmp r8d, 0x3e` ignora las entradas inválidas).
- **Mitigación directa**: enganchar `0x14003ebb0` (resolver de handlers) en vez de los `call rax`. El resolver se invoca una vez por instrucción VM; dump `rcx` (ctx) y leer todos los campos arriba. Este cambio no está probado aún.

## Candidatos y auditoría de secretos — alcance limitado

Sin bytecode decodificado, **no se puede auditar operandos `LOAD_CONST`-estilo** del user-VM. Lo que sí se ha verificado:
- El pool de 12 slots (biblioteca ALU, ya cerrado en PAFET_USERVM_POOL.md) **no contiene credenciales**.
- La atestación de 1752 bytes **no es una llave**: `fmix64` sobre el blob da el valor hardcoded `0xc4344faf7ef3b8df`, lo que verifica integridad pero no deriva nada.
- Los 1752 bytes del blob **tienen entropía 7.86 bits/byte** (ver `scripts/pafet_uservm_bc.py`); heurísticas crudas (sha256(frag) = H, DES3-key→CMO{, f_user⁻¹) sobre los bytes cifrados dan **0 hits** — pero este resultado NO extrapola a los bytes decodificados.

**Conclusión acotada**: ningún secreto se ha encontrado en el pool ni en el blob tratado como ciphertext. **La posibilidad de un operando `LOAD_CONST`-estilo con una constante relevante en el bytecode decodificado sigue abierta**.

## Siguiente paso concreto para desbloquear

1. Modificar `scripts/pafet_uservm_frida_capture.py` para enganchar `0x14003ebb0` (no los `call rax`). En `onEnter`, volcar los campos del ctx listados arriba a un JSON por invocación.
2. Ejecutar con `alice`/`serial01` sobre `pafet_pass8.exe` (SHA bypassed) o `pafet.bin` con el fallback de x64dbg usado para `pafet_gate_flip`.
3. Reconstruir el bytecode canónico ensamblando los 73 chunks (buffer completo cuando `ctx[0x1b8]` llegue a 1752).
4. Decodificar operandos vía el inverso del paso 6.
5. Enumerar los 248 handlers por VA y categorizarlos.
6. Buscar operandos de valor "sospechoso" (ASCII imprimible, patrón de hash, etc.).

## Reproducción

```sh
python -m pip install pefile capstone unicorn frida pycryptodome
python scripts/pafet_uservm_bc.py                        # confirma blob + atestación
python scripts/pafet_uservm_blob_xref.py                 # exhaustivo rip-rel al blob
python scripts/pafet_uservm_architecture.py              # arquitectura + constantes
python scripts/pafet_uservm_frida_capture.py             # dinámico (actualmente 0 hits)
```

## Falsación

La reconstrucción se falsaría si:
- Un lector adicional del blob apareciese fuera del dispatcher (ya enumerados exhaustivamente por byte-level scan: solo dos sitios).
- El materializador aplicase una transformación distinta al chunk tras copiarlo (hay evidencia de constantes de permutación Feistel estándar; sin ejecutar, no se descarta otra operación custom).
- El decodificador de operandos no fuese `(x * 0x1a8d) & 0xffff` (verificado por el patrón `imul eax, edx, 0x1a8d; movzx eax, ax`).
- Más de 4 sitios de despacho existiesen (confirmado el conteo exacto por desensamblado completo del dispatcher).

## Rama y commits

Trabajo en rama `main` (mergeada desde `vm-pools-dump`), **sin operaciones de Git realizadas** por este fork — Ramón commitea y pushea los artefactos.

Archivos añadidos (sin tocar `pafet.bin` ni archivos pre-existentes):
- `PAFET_USERVM_DEVIRTUALIZATION.md` (este informe)
- `scripts/pafet_uservm_architecture.py`
- `scripts/pafet_uservm_blob_xref.py`
- `scripts/pafet_uservm_frida_capture.py`
- `vm_pools_evidence/usuario_vm_architecture.json`
- `vm_pools_evidence/usuario_vm_runtime_capture.json` (vacío — ver bloqueo arriba)
