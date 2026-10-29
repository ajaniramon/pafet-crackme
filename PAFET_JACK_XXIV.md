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
python scripts/pafet_lift_xxiv.py --observed-families 1,5,26,32 --entry 0x14003bea0 --entry 0x14039df30 --entry 0x140048960 --entry 0x1403a3dc0
python scripts/pafet_capture_native_xxiv.py
```

En Linux/WSL con GCC, pefile, capstone y unicorn:

```sh
python3 scripts/pafet_native_diff_xxiv.py
python3 scripts/pafet_directed_xxiv.py --no-build
python3 scripts/pafet_fresh_diff_xxiv.py --no-build
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

Próximo cierre: validar esos frames nuevos, agregar la cobertura del cuerpo
con los casos dirigidos, documentar rutas no cubiertas y revisar la
dependencia de lanzamiento de excepciones de los handlers anidados.

Los resultados incrementales están en `jack_xxiv_evidence/`. El original
`pafet.bin` debe conservar SHA-256
`fe85e59225387fba4923f3bc6103914fe7b85ba3dc0514c9e37382818fb44d1a`.
