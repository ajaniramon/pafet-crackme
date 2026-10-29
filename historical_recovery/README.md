# Procedencia de la recuperación

El historial de `01a1827a-c7d8-779d-a1e1-ed78693e0073`, turno
`01a186e6-50f2-7730-bc09-a3e3d17b154e`, conservaba las altas y diferencias
de las fuentes de JACK XXIII. Se recuperaron mediante lectura del historial,
sin enviar mensajes a aquella sesión y sin operaciones de Git.

`recovered_changes.json` conserva esas diferencias completas para las
fuentes específicas de la operación. La base restante procede de la copia
local `C:/Users/Ramón/Desktop/pafet_crackme`, cuyo PE coincide con el hash
del repositorio público y del encargo original.

Los archivos `*.original.*` son entregas históricas recuperadas, anteriores
a esta sesión. Sus cifras de 43.826 operaciones y sus trazas Linux no se
presentan como evidencia recuperada: los dos ZIP históricos no aparecieron.

No pudo recuperarse la base del colector Linux `native_xxiii/build_blind.py`
ni algunos headers que había copiado desde otra investigación. Se conservan
sus diferencias en el JSON de cambios. Por ese motivo, los scripts antiguos
`pafet_build_probe_xxiii.py`, `pafet_long_store_xxiii.py` y
`pafet_dispatch_audit_xxiii.py` necesitan esas dependencias históricas y no
forman parte del circuito de reproducción actual.

La recuperación usa un colector Windows nuevo y conserva tanto las trazas
completas como sus proyecciones de comparación. El informe principal y
`jack_xxiii_evidence/verification.json` contienen exclusivamente las métricas
regeneradas. Las versiones históricas del verificador y del empaquetador se
guardan aquí porque exigían los datos Linux perdidos.
