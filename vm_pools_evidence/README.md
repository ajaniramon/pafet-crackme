# VM pools evidence — nested VMs (usuario/sha/serial/hex)

Fecha: 2026-10-28. Rama: `vm-pools-dump`.

## Alcance y límite

El encargo pedía **volcar los pools de constantes y el bytecode canónico decodificado** de las 4 VMs anidadas, reutilizando la maquinaria del controlador principal (`scripts/pafet_controller_slice.py` + `scripts/native/native_probe`).

**La maquinaria del controlador requiere Linux + GCC** (compila `native_probe.c`) y además sus hooks están hardcodeados al **main**: materializador `0x140385b30`, resolver `0x140380ad0`, segment opener `0x140383e20`, tabla opcode-remap `0x1403e18a0`, pool `0x3ea8b0/930/9e0`. Para cada VM anidada hay que localizar sus análogos y adaptar `native_probe` (y los hooks de Python). Esto es inviable en esta ronda sin un entorno Linux dedicado y tiempo de edición nativo.

En su lugar, se hace **recon + volcado crudo + heurísticas sobre los blobs cifrados**:

- `scripts/pafet_vm_recon.py` → desensambla los 7 puntos de entrada declarados en el encargo y lista las referencias a `.rdata`.
- `scripts/pafet_vm_pools_dump.py` → extrae los 4 blobs cifrados y aplica heurísticas (whitelist SHA/fmix, barrido f_user⁻¹, barrido DES3-key 24B, barrido SHA-preimage).

## Hallazgo del recon

Cada **executor** tiene una única `lea` a `.rdata` apuntando a su blob encrypted:

| VM       | Dispatcher / Executor | Blob encrypted VA | Entropía (8K ventana) |
|----------|-----------------------|-------------------|-----------------------|
| usuario  | 0x14003f540 / 0x140048960 | **0x1403e5020** (1752 B conocidos por `pafet_uservm_bc.py`) | 7.750 |
| sha      | 0x14027aba0           | **0x1403e3f10**   | 7.862 |
| serial   | 0x140264a60 → 0x14039d740 → 0x14022a120 | **0x1403e9c10** | 7.403 |
| hex      | 0x1400804c0           | **0x1403ec120**   | 7.485 |

Los pools (índices 21*u32 + dos tablas 21*u64, análogos a `0x3ea8b0/930/9e0`) **no aparecen por .rdata lea directa en los dispatchers**. En el main también están en funciones hijas (constant-clones `0x387750, 0x388a40, 0x38b210, 0x38c670`). Para localizar los pools de cada VM anidada hay que seguir las llamadas desde cada executor y buscar las referencias `[rip+disp]` dentro de cada constant-clone — no cubierto por este recon.

## Hallazgo del volcado crudo

Sobre los 4 blobs cifrados tal cual están en `.rdata`:

- **0 constantes conocidas en claro**: ni SHA-256 IV/K, ni fmix64 Murmur, ni la máscara `0xde188941a3375d3a`.
- **0 preimágenes de H** (`9419f86b97bd...`): no hay ningún subfragmento del blob cuyo `sha256` iguale el hash de username objetivo.
- **0 claves DES3 de 24B**: ningún bloque de 24 bytes del blob (en todos los offsets 0..N-24) descifra el primer bloque del ciphertext a `CMO{...`.
- `f_user⁻¹` sobre los primeros bytes da sólo coincidencias triviales de 1-3 chars (ruido estadístico esperado).

**Esto no demuestra ausencia de pistas** — demuestra que las pistas, si existen, están **dentro del bytecode descifrado**, no en los bytes cifrados tal cual.

## Entregables

- `scripts/pafet_vm_recon.py`
- `scripts/pafet_vm_pools_dump.py`
- `vm_pools_evidence/{usuario,sha,serial,hex}_blob_enc.bin` — 8 KB conservativos por VM (contienen el blob + bytes adyacentes de `.rdata`; el blob real es más corto, ver notas por VM).
- `vm_pools_evidence/report.json` — report estructurado con todas las métricas.

## Veredicto honesto

**Block con evidencia.** El encargo requiere decodificar el bytecode de cada VM anidada para extraer sus pools de constantes. La vía documentada (controller_slice + native_probe) sólo cubre el main y necesita adaptación por VM en entorno Linux. Sin esa adaptación:

- Los blobs cifrados no revelan por sí mismos pistas (whitelist filtra 0 constantes, ningún ataque crudo cuela).
- No puedo afirmar "las 4 pools están limpias" ni "hay algo oculto": sin descifrarlas, están **opaque**.

Para avanzar sin reimplementar DES/SHA: hay que (a) compilar `native_probe` en Linux con hooks por VM, o (b) emular cada executor con Unicorn capturando los bloques tras cada llamada al materializer de esa VM. Ninguna es trivial.

## Fuera de alcance (del encargo)

No se tocó hashcat ni fuerza bruta de credenciales. No se reimplementó DES/SHA/RC4. No se tocó main. Rama separada.
