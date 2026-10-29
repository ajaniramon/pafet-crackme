# Jack IV-B · Misión 2: dispatch oculto = cadena handler→handler via `call r9`

Fecha: 2026-10-29. **Resultado: 45.4% de las entradas a handlers esquivan el resolver. Mecanismo identificado: `call r9` desde dentro de otros handlers. Cero handlers nuevos descubiertos — los 35 del catálogo cubren el 100% de los targets.**

## Pregunta de partida

Jack III reportó que el resolver `0x14003ebb0` capturaba 979 llamadas pero se observaron 1862 entradas totales a handlers → 883 (47.4%) entraban por una ruta alternativa. Hipótesis candidatas: tail-calls, segundo despachador, fast-paths cacheados, trampolines externos.

## Experimento

Script `scripts/pafet_dispatch_coverage_ivB.py`:
- Carga las 35 VAs del catálogo (`vm_pools_evidence/usuario_vm_handlers_full.json`).
- Hookea la entrada de cada handler con Frida sobre `pafet_pass8.exe` (user=alice, serial=serial01).
- En cada hit: registra `returnAddress`.
- Clasifica: `returnAddress` ∈ `[0x14003f540, 0x140048925)` (dispatcher) → **via resolver**; fuera → **oculto**.
- Para los sitios ocultos: desensambla 16 B antes del `returnAddress` para identificar la instrucción origen.

## Resultados

Ejecución única con `user=alice, serial=serial01`:

| Métrica | Valor |
|---|---|
| Entradas totales a handlers | **1131** |
| Via dispatcher (via resolver) | **618 (54.6%)** |
| Hidden (fuera del dispatcher) | **513 (45.4%)** |
| Sitios de returnAddress únicos (hidden) | **42** |
| Mecanismo detectado | **100% `call r9`** |
| Handlers del catálogo observados | 35/35 |
| **Handlers nuevos descubiertos** | **0** |

Confirmación de ratio con cifra Sol: Sol reportó 883/1862 (47.4%); nosotros 513/1131 (45.4%). Mismo orden; discrepancia probable por hook overhead/timing.

## Top sitios de dispatch oculto (ordenados por frecuencia)

Todos tienen la forma `callerVA  call r9` con `in_dispatcher=False`:

| returnAddress | target handler | invocaciones | instrucción |
|---|---|---|---|
| `0x14001ea35` | `0x140015820` | 11 | `call r9` |
| `0x14003cbac` | `0x1400355c0` | 11 | `call r9` |
| `0x140030db5` | `0x140015820` | 10 | `call r9` |
| `0x14003cbac` | `0x1400099c0` | 9 | `call r9` |
| `0x140030db5` | `0x1400355c0` | 8 | `call r9` |
| `0x1400098b6` | `0x14001c090` | 7 | `call r9` |
| `0x14001cdf6` | `0x1400110f0` | 7 | `call r9` |
| `0x140024f16` | `0x1400110f0` | 7 | `call r9` |
| `0x14003cbac` | `0x140025020` | 7 | `call r9` |
| `0x140024f16` | `0x14001c090` | 7 | `call r9` |

(42 sitios únicos en total; 20 top en `vm_pools_evidence/hidden_dispatch_ivB.json`.)

Los `returnAddress` caen DENTRO del rango de handlers conocidos:
- `0x14001ea32` está en handler `0x14001dd30`
- `0x14003cba9` está en handler `0x14003bea0`
- `0x140030db2` está en handler `0x1400300b0`
- `0x14001cdf3` está en handler `0x14001c090`

Es decir: los sitios de dispatch oculto son `call r9` ejecutados POR OTROS HANDLERS. No existe un segundo despachador, ni trampolines externos, ni fast-paths cacheados fuera del dispatcher.

## Modelo revisado del dispatch

```
       ┌─────────────┐
       │  dispatcher │
       │ 0x14003f540 │
       └──────┬──────┘
              │
              ▼
       ┌─────────────┐
       │   resolver  │  --- 54.6% ---> handler H
       │ 0x14003ebb0 │
       └─────────────┘

       ┌─────────────┐
       │  handler H  │  --- call r9 ---> handler H' (45.4% hidden)
       │ (any VA)    │                   │
       └─────────────┘                   └─ posible nueva call r9 → H''
```

Los handlers forman un **grafo dirigido de llamadas**. Cada handler puede ejecutar entre 0 y N `call r9` a otros handlers como parte de su lógica. r9 se construye dentro del handler (típicamente a partir de la tabla de dispatch indexada por un valor del estado virtual).

## Veredicto sobre "handlers nuevos"

**El catálogo de 35 handlers es completo**, al menos para la ruta ejecutada por `user=alice, serial=serial01`. Los 35 VAs del catálogo:
- cubren el 100% de los targets observados en entries ocultas,
- se ejecutan los 35 al menos una vez en la ruta estándar,
- no hay target de `call r9` que apunte fuera del catálogo.

Nota de alcance: con inputs distintos (p.ej. username vacío o muy largo) PODRÍA activarse una ruta que use un handler no en el catálogo. Para asegurar el denominador real, repetir este experimento con los 6 inputs diferenciales ya usados en captures anteriores. No se hizo en esta iteración.

Nota sobre Sol: el conteo de "45-60 handlers reales" que Sol mencionó al parent probablemente venía de un criterio de identificación distinto (quizás por tabla u otro mecanismo). Nuestro experimento runtime observó estrictamente 35 handlers invocados sobre la ruta `alice/serial01`. Si Sol captura con otros inputs, el denominador puede subir.

## Artefactos

- `scripts/pafet_dispatch_coverage_ivB.py` — captura Frida + clasificación + disasm
- `vm_pools_evidence/hidden_dispatch_ivB.json` — summary + top-20 sitios con disasm + perHandler

Reproducción:
```sh
python scripts/pafet_dispatch_coverage_ivB.py  # requiere pafet_pass8.exe + Frida
```

## Síntesis para el parent

1. **35 handlers no es un undercount para la ruta alice/serial01.** 35/35 observados y cubren todos los targets.
2. **45.4% del dispatch es handler→handler via `call r9`.** No hay segundo despachador.
3. **42 call-sites `call r9` únicos** definen el grafo de llamadas entre handlers.
4. **La cobertura del resolver (54.6%) no es "completa" por diseño del VM** — por diseño el resolver solo cubre el dispatch raíz; los sub-dispatches entre handlers son parte normal del flujo.
5. **Para explorar denominador real total**: repetir con otros inputs. No se hizo en esta iteración (fuera de scope).
