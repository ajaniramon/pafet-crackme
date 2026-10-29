# JACK XXIII — reproducción y evidencias

Punto de entrada: `../PAFET_JACK_XXIII.md`. Especificación:
`../docs/14-real-bytecode-xxiii.md`.

La extracción y el intérprete nuevo usan el PE original. La validación
nativa local es de componentes con Unicorn o con un loader Linux adaptado;
no constituye ejecución íntegra ni aceptación Windows del crackme.

## Construir y ejecutar el intérprete C++

Desde la raíz, Linux x86-64 con GCC:

```sh
sh src/build_original_vm_xxiii.sh
jack_xxiii_evidence/build/original_vm_xxiii pafet.bin 616c696365
# OUTPUT 464340464e
# STEPS 1208
```

Windows, desde Developer Command Prompt x64 de MSVC:

```bat
src\build_original_vm_xxiii.bat
jack_xxiii_evidence\build\original_vm_xxiii.exe pafet.bin 616c696365
```

El `.bat` se entrega; esta sesión compiló y ejecutó con GCC. El CLI recibe
bytes en hex para evitar una afirmación sobre codificación de consola.
No imprime flags ni trata de superar el SHA. No lee una IR capturada.

## Dependencias Python

`requirements.txt` fija las versiones utilizadas. Crear un entorno Python
aislado e instalar ese archivo, cuando no estén ya disponibles:

```sh
python -m pip install -r jack_xxiii_evidence/requirements.txt
```

## Verificar los resultados guardados

```sh
python scripts/pafet_verify_xxiii.py
python scripts/pafet_package_xxiii.py --verify
```

Sólo Python estándar; no ejecutan instrucciones del PE. Verifican hashes,
denominadores, índices sin pérdida y consistencia de las evidencias.

## Repetir los tests diferenciales

```sh
python scripts/pafet_jack_xxiii_oracle_audit.py
python scripts/pafet_drop_core_test_xxiii.py
python scripts/pafet_writer_test_xxiii.py
python scripts/pafet_materialize_xxiii.py
python scripts/pafet_decode_xxiii.py
python scripts/pafet_cpp_vm_test_xxiii.py
python scripts/pafet_abstract_xxiii.py
python scripts/pafet_handler_cfg_xxiii.py
python scripts/pafet_verify_xxiii.py
```

Los dos primeros reutilizan los seis vectores originales de cada handler.
El puerto DROP usa el helper C++ `pafet_h3a50_native.cpp` ya reconstruido.
El test del escritor contrasta su código C++ con el cuerpo x64 original;
no usa la fórmula `f_user` como expected.

`pafet_materialize_xxiii.py` compara 256 permutaciones y las 219 llamadas de
materialización. Es la prueba que ejecuta Unicorn para validar la extracción.
El C++ vuelve a extraer directamente desde el PE. El decoder Python y el
intérprete C++ comparan estados contra las referencias guardadas.

Las referencias son **datos de comparación**, no el programa de entrada:
la única entrada de captura al intérprete C++ es el banco inicial de
registros no usados/no inicializados, además del username. La traza entera
del C++ se genera de nuevo en `build/`. El binario, banco inicial y trazas
temporales quedan excluidos de los paquetes de fuentes.

## Repetir las ocho capturas nativas dirigidas

Sólo Linux x86-64. Requiere mapear las direcciones fijas del loader. Sus
adaptaciones de imports, asignación, reloj, TLS y FH4 están en
`../native_xxiii/loader/`; los interceptores también modifican la imagen
privada de investigación. El archivo original nunca se escribe.

```sh
python scripts/pafet_build_probe_xxiii.py
sh src/build_original_vm_xxiii.sh
python scripts/pafet_long_store_xxiii.py
python scripts/pafet_dispatch_audit_xxiii.py
python scripts/pafet_cpp_vm_test_xxiii.py
```

Casos: `a` de longitudes 23/24/25; ASCII A..W/A..X/A..Y; `alice`; `ramon`.
`--only long_a23` selecciona un caso. `--skip-existing` evita repetir los que
ya tienen un reporte. No es una matriz de opcodes ni una búsqueda.

Cada store en `0x140048a3a` tiene observación previa y posterior al single-step.
Las capturas completas tienen muchos eventos de helpers; por eso se entregan
en un paquete separado. Las proyecciones de `reference_traces/` conservan los
campos usados para las comparaciones y, en los casos nuevos, stores, objetos
y límites de exportación. Sus summaries conservan el hash de la fuente.

Para reproducir el fallo anterior de frame sin editar el PE:

```sh
python scripts/pafet_build_probe_xxiii.py --legacy-frame-aliases
python scripts/pafet_long_store_xxiii.py --only long_a23
# Ver wrapper_stdout_output_hex / export_boundaries en el reporte generado.
python scripts/pafet_build_probe_xxiii.py
python scripts/pafet_long_store_xxiii.py --only long_a23
```

El primer comando desactiva el reconocimiento del alias RAX del stack en
los metadatos del loader. El experimento inicial equivalente quedó registrado
en `export_before_metadata_fix.json`; el segundo restablece el generador
corregido. Los resultados nativos no deben atribuirse a Windows/Wine.

## Archivos principales

| Archivo | Evidencia |
|---|---|
| `upstream_manifest.json` | HEAD, tree y archivos originales consultados |
| `oracle_attribution.json` | Doce replays completos, RAX y autoría de stores |
| `handler_cfg.json`, `handler_*.asm` | CFGs nativos de las cinco entradas |
| `drop_core_differential.json` | Dos núcleos x64; 12 contextos/pilas/RAX |
| `writer_differential.json` | 108 casos, registros, objetos y store real |
| `materializer_differential.json`, `bytecode_1752.bin` | 73/73 desde el PE |
| `original_program_ir.json` | CFG lógico conservador, 339 instrucciones |
| `decoded_a8_ir.json` | Ejecución lógica con operandos y dos fases de PC |
| `decoder_differential.json` | Validación del decoder Python |
| `cpp_vm_differential.json` | 13 ejecuciones, 43826 instrucciones |
| `abstract_program.json` | Condición de bloque 54 y control positivo del modelo |
| `dispatch_catalog.json.gz` | 34516 entradas nuevas, sin pérdida al agrupar |
| `dispatch_coverage.json` | Direcciones, aliases, raíces y denominadores |
| `directed_branches.json.gz` | Ramas nativas seleccionadas, no cobertura global |
| `long_store_differential.json` | Strings, direcciones y stores de ocho casos |
| `export_before_metadata_fix.json` | Fallo observado antes de corregir FH4 |
| `reference_traces/` | Proyecciones verificables de las trece ejecuciones |
| `native_long/` | Ocho trazas completas y sus reportes; paquete separado |
| `verification.json` | Comprobación final sin ejecución del PE |

El manifiesto del paquete lista hashes de las fuentes y evidencias incluidas.
Los logs nativos completos tienen además su propia lista de hashes. No se
incluyen productos de compilación, caches o disassemblies preliminares
truncados. Ningún script publica, crea commits o ejecuta Git.
