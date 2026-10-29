# JACK XXIV — reconstrucción nativa de un handler completo

Base: JACK XXIII recuperado, publicado en main como
`8b96567e27f401c389d5cd6dadc564e2a309bbce` el 29 de octubre de 2026.

Estado incremental: el cuerpo completo de `0x14003bea0` ya tiene una
traducción C++ por instrucciones, junto con el cierre directo de sus
helpers y varios destinos del dispatch anidado. No se declara todavía el
criterio de éxito total: faltan cerrar la auditoría de ramas y dependencias.
Se conservan sin cambios las fuentes y pruebas de XXIII.

El trabajo empieza por reconstruir el CFG de `0x14003bea0` y su cierre de
llamadas directas a partir del PE, sin usar `.pdata` como límite. Se medirá
por separado el cuerpo del handler, sus dependencias y las transferencias
indirectas. Las rutas terminales de error no se sustituirán por retornos.

## Reanudar

Desde la raíz del repositorio:

```powershell
python scripts/pafet_audit_xxiv.py
python scripts/pafet_lift_xxiv.py --observed-families 1,5,26,32 --entry 0x14003bea0 --entry 0x14039df30 --entry 0x140048960 --entry 0x1403a3dc0 --entry 0x140014a00 --entry 0x140030ec0
python scripts/pafet_capture_native_xxiv.py
```

En Linux/WSL con GCC, pefile, capstone y unicorn:

```sh
python3 scripts/pafet_native_diff_xxiv.py
python3 scripts/pafet_directed_xxiv.py --no-build
python3 scripts/pafet_fresh_diff_xxiv.py --no-build
python3 scripts/pafet_coverage_xxiv.py
python3 scripts/pafet_native_diff_xxiv.py --no-build --handler 14a00
python3 scripts/pafet_directed_xxiv.py --no-build --handler 14a00
python3 scripts/pafet_coverage_xxiv.py --handler 14a00
python3 scripts/pafet_continue_xxiv.py --per-wrapper 6 --budget 3000000
python3 scripts/pafet_continued_diff_xxiv.py --no-build
python3 scripts/pafet_continued_diff_xxiv.py --no-build --directed
python3 scripts/pafet_coverage_xxiv.py --handler 15820
python3 scripts/pafet_coverage_xxiv.py --handler 25020
python3 scripts/pafet_coverage_xxiv.py --handler 216d0
```

Si las dependencias Python no están instaladas en WSL, esta máquina dispone
de ellas en
`/mnt/c/Users/Ramón/Documents/Codex/2026-10-29/https-github-com-ajaniramon-pafet-crackme/work/deps`.
Pasar ese directorio como `PYTHONPATH`. Los sources y las evidencias se
guardan en el repositorio del escritorio; las copias de checkpoint están en
`.jack_xxiv_backups/` y en la carpeta outputs de esta conversación.

## Evidencia incremental

- CFG del cuerpo: 821 instrucciones, 3593 bytes, 13 call sites. La función
  contiene un retorno normal y dos llamadas a la ruta de envenenamiento de
  contexto; sus terminaciones se estudian separadamente.
- Seis vectores históricos completos pasan en lockstep: cada GPR, RIP,
  flags aritméticos arquitecturalmente definidos, XMM y cada byte escrito.
- Se han contrastado estados de entrada dirigidos para guardas, salidas
  tempranas, presupuesto 0/1, cursor fuera de rango y codificación aditiva.
- La guarda de error no se simula devolviendo: se ejecuta su
  envenenamiento hasta el mismo fallo de memoria observado en Unicorn.
- El mantenimiento de registros lee GS:58. El harness histórico no llevaba
  ese TLS: ambos motores fallan en la misma lectura. Se conservó el fallo
  y se añadieron fixtures TLS explícitos con contador 0 y no nulo, con las
  dos codificaciones. Los tres casos continúan y pasan.
- Se encontró un estado que activa la reconstrucción de trampolines.
  Su ejecución de 111159 instrucciones coincide hasta el retorno.
- La LUT original sólo produce valores 0..61, lo que hace inalcanzable
  la rama para opcode >=62 bajo ese contrato de datos original. La rama
  opaca del polinomio de paridad necesita quedar acompañada de su prueba.
- Se han capturado seis frames nuevos en Windows, con los dieciséis GPRs
  de entrada, memoria externa y TLS. Se añadió una sonda en el retorno al
  caller: el RSP de Frida onLeave aún señala el slot de retorno y no debe
  confundirse con el RSP después del RET.

- El CFG resuelve ahora la tabla de saltos MSVC del host `0x140048960`
  (siete casos, acotados por su `cmp/ja`) y toma los límites de `.text`
  del PE. Se traducen `setcc`, `movups`, `int n` y el camino rápido de
  `__security_check_cookie` (`0x1403a3dc0`), añadido como entrada explícita.
- Frames nuevos: los seis pasan el lockstep por instrucción y la memoria;
  cinco coinciden además en los dieciséis GPRs de retorno. En `alice` 0
  sólo difiere RCX, que vale `rol(__security_cookie,16)`: el replay usa el
  cookie por defecto del PE (`0x2b992ddfa232` en `0x14040d020`) y el colector
  no captura el del proceso. Falta recapturar leyendo `imagen+0x40d020`.
- Los dieciséis casos dirigidos, regenerados con el lift nuevo, pasan;
  `table_remap` recorre la última arista pendiente en 111159 pasos.
- Cobertura del cuerpo: 32 aristas observadas y 2 inalcanzables de 34;
  777 instrucciones observadas y 44 inalcanzables de 821. Las 44 son el
  bloque del opcode >=62 y dos `int3` tras llamadas a `0x1400029a0`, cuyo
  CFG cerrado no tiene `ret` ni saltos indirectos. No cubre la maquinaria
  de excepciones del sistema.

- Segundo núcleo DROP, `0x140014a00` (820 instrucciones, 3586 bytes): el
  cuerpo es un 98% idéntico al de `0x14003bea0` y comparte todos sus callees.
  Sus seis vectores históricos pasan en lockstep. Los casos dirigidos usan el
  mismo layout de contexto y las pruebas se anclan en sus propias
  direcciones, verificando que la LUT, el `xor bpl,0xeb` y el `cmp bpl,0x3e`
  son los mismos. Cobertura: 32 aristas observadas y 2 inalcanzables de 34;
  776 instrucciones observadas y 44 inalcanzables de 820.
- Nuevo caso dirigido `skip_state` en ambos handlers: el valor de
  `ctx+0xce0` se busca con el modelo C++ hasta que `cmp r8b,1`, tras el
  polinomio de paridad, se cumple. Los diecisiete casos pasan en los dos.

- Transferencias de bloque `0x140015820` y `0x140025020` (gemelos al 98%,
  864 instrucciones cada uno). No hay frames capturados de ellos. Las
  entradas se obtienen dejando seguir al programa original: cada frame
  fresco de Windows entra en `0x14003bea0` con su dirección de retorno real
  y el resolver original decodifica los opcodes siguientes y llama a los
  envoltorios con sus `(ctx, modo, canario)` reales. En cada entrada raíz se
  guarda el estado completo (`continued_entries.json.gz`) y se reproduce en
  lockstep hasta el retorno: 4/4 y 3/3 pasan, y nueve casos dirigidos
  (guardas y `resume_slot`) también.
- Su núcleo lee un operando de 32 bits codificado (`0x140007040`), lo valida
  como índice de bloque menor que 73 (`0x140002330`, pánicos `BLKI`/`BLKP`) y
  encola trabajo pendiente en `ctx+0x3b0` (`0x140006010`, contador en
  `ctx+0x5b8`, pánico `JOPF` si se llena). Tras encolar, el contador vale
  1..64, así que el handler siempre vuelve al resolver: las 697
  instrucciones de continuación en línea son inalcanzables. La prueba está
  mecanizada en `pafet_coverage_xxiv.py` y supone el ABI Win64 para RBX/RDI
  y que la pila no solapa el contexto.
- Cobertura de ambos: 7 aristas observadas y 27 inalcanzables de 34; 167
  instrucciones observadas y 697 inalcanzables de 864.
- `0x140006010` puede lanzar una excepción C++ (`0x1403a5fa0`) en lugar de
  retornar; esa ruta no se ha ejercitado.

- STORE_REG `0x1400216d0` (863 instrucciones): lee un operando de 16 bits
  (`0x1400071e0`, pánico `RDU2` si `pc+1` no cabe), saca el valor con el
  helper de DROP `0x140003a50` y lo guarda codificado en el banco de
  registros `ctx+0x1158`. No encola trabajo: su continuación en línea está
  viva. Se tradujo el envoltorio anidado `0x140030ec0` (familia 4) que
  detenía su replay. La continuación recoge ahora 38 entradas raíz (18, 17
  y 3); las 38 pasan en lockstep.
- Sobre su primera entrada se aplican los diecisiete casos dirigidos, con
  nonces buscados en el propio snapshot, y `cursor_at_last_operand`
  (pc 1750): con pc 1751 o 1752 el lector de 16 bits entra en pánico antes
  de llegar a las comprobaciones de fin de programa. Los veinticuatro casos
  dirigidos continuados pasan; un fallo sólo se acepta si C++ y x64 fallan
  en la misma instrucción.
- Cobertura de `0x1400216d0`: 32 aristas observadas y 2 inalcanzables de
  34; 819 instrucciones observadas y 44 inalcanzables de 863.

Los cinco envoltorios propuestos en XXIII tienen ya el cuerpo traducido,
en lockstep y con cobertura completa (observada o demostrada):

| Envoltorio | Núcleo | Aristas | Instrucciones |
|---|---|---:|---:|
| `0x14003bea0` | DROP | 32 + 2 / 34 | 777 + 44 / 821 |
| `0x140014a00` | DROP | 32 + 2 / 34 | 776 + 44 / 820 |
| `0x140015820` | transferencia | 7 + 27 / 34 | 167 + 697 / 864 |
| `0x140025020` | transferencia | 7 + 27 / 34 | 167 + 697 / 864 |
| `0x1400216d0` | STORE_REG | 32 + 2 / 34 | 819 + 44 / 863 |

Cobertura local del cuerpo de cada envoltorio; no de todos los helpers,
entradas ni de la maquinaria de excepciones del sistema.

Próximo cierre: recapturar el cookie del proceso para `alice` 0 y
ejercitar la ruta de excepción C++ de `0x140006010`.

Los resultados incrementales están en `jack_xxiv_evidence/`. El original
`pafet.bin` debe conservar SHA-256
`fe85e59225387fba4923f3bc6103914fe7b85ba3dc0514c9e37382818fb44d1a`.
