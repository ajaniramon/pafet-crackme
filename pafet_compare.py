#!/usr/bin/env python3
"""Compara un volcado de pafet_gate_flip.txt con el modelo offline.

Uso:
    python pafet_compare.py <carpeta_volcado> <username> <serial> [<otra_carpeta>]

Con una carpeta: compara cada etapa contra el modelo.
Con dos carpetas: además compara las dos ejecuciones entre sí (A original vs B pass8).
Necesita pycryptodome y scripts/pafet_des3_offline.py del repo (ajusta REPO si hace falta).
"""
import hashlib
import os
import sys

REPO = os.environ.get('PAFET_REPO', os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(REPO, 'scripts'))
from pafet_des3_offline import (  # noqa: E402
    decrypt_material, derive_key, f_user, g_serial, plaintext_prefix)

STAGES = ['fu', 'rs', 'key', 'out']


def load(folder):
    out = {}
    for name in STAGES:
        path = os.path.join(folder, name + '.bin')
        out[name] = open(path, 'rb').read() if os.path.exists(path) else None
    return out


def model(user, serial):
    key = derive_key(user, serial)
    m = {'fu': f_user(user), 'rs': g_serial(serial), 'key': key, 'out': None}
    try:
        m['out'] = decrypt_material(key)[-1]
    except NotImplementedError:
        m['out_prefix'] = plaintext_prefix(user, serial)
    return m


def show(label, got, exp):
    if got is None:
        print(f'  {label:4} NO VOLCADO')
        return None
    if exp is None:
        print(f'  {label:4} {got.hex()}  (sin modelo exacto)')
        return None
    ok = got == exp
    print(f'  {label:4} {"OK " if ok else "DIF"} got={got.hex()}')
    if not ok:
        print(f'  {"":4}     exp={exp.hex()}')
    return ok


def main():
    if len(sys.argv) < 4:
        sys.exit(__doc__)
    folder, user, serial = sys.argv[1], sys.argv[2].encode(), sys.argv[3].encode()
    other = sys.argv[4] if len(sys.argv) > 4 else None

    m = model(user, serial)
    a = load(folder)
    print(f'[{folder}] contra el modelo ({user!r}, {serial!r}, |u|={len(user)}):')
    results = [show(s, a[s], m[s]) for s in STAGES]
    if m['out'] is None and a['out']:
        ok = a['out'][:8] == m['out_prefix']
        print(f'  pref {"OK " if ok else "DIF"} primer bloque (cola no modelable)')
        results.append(ok)
    if a['out']:
        print(f'  sha256(out)[:16] = {hashlib.sha256(a["out"]).hexdigest()[:16]}')

    if other:
        b = load(other)
        print(f'\n[{folder}] vs [{other}]:')
        for s in STAGES:
            if a[s] is None or b[s] is None:
                print(f'  {s:4} falta en alguna')
            else:
                print(f'  {s:4} {"IGUAL" if a[s] == b[s] else "DISTINTO"}')

    if all(r is True for r in results if r is not None):
        print('\nVeredicto: coincide con el modelo en todo lo volcado.')
    else:
        print('\nVeredicto: HAY DIFERENCIAS. Guarda la carpeta y el log de x64dbg.')


if __name__ == '__main__':
    main()
