#!/usr/bin/env python3
"""Pafet: ejecuta una matriz de credenciales en Windows y compara cada etapa con el modelo.

Sin depurador: lanza pafet_pass8.exe con Frida, le escribe username/serial por stdin,
engancha la entrada del host 20 (base+0x397239) y vuelca los cuatro std::string del
contexto: f(u) (+0x18), r(s) (+0x20), clave (+0x30) y salida (+0x38).

Justificación de usar pass8: el volcado con x64dbg (original + gate forzado por
registro, sin escribir bytes) dio para alice/serial01 exactamente lo mismo que pass8.
Aun así, la primera fila es siempre ese caso de control; si no da 66b0ab3df07fc783,
el hook está contaminando y el script se detiene.

Requisitos (Windows x64): pip install frida pycryptodome
Uso, desde la raíz del repo:
    python pafet_matrix.py                       # matriz por defecto
    python pafet_matrix.py --fuzz 200            # + 200 casos aleatorios (longitudes 0..40)
    python pafet_matrix.py --exe pafet_pass8.exe --out resultados.json
    python pafet_matrix.py --sha                 # solo prueba el SHA del host 8 (bordes de padding, bytes raros)
"""
import argparse
import json
import os
import random
import string
import sys
import threading

import frida

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, os.path.join(HERE, 'scripts'))
from pafet_des3_offline import (  # noqa: E402
    decrypt_material, derive_key, f_user, g_serial, plaintext_prefix)

CONTROL = (b'alice', b'serial01', '66b0ab3df07fc783')

DEFAULT_MATRIX = [
    (b'abcdefghijklmn', b'serial01'),            # 14
    (b'abcdefghijklmno', b'serial01'),           # 15: último SSO
    (b'abcdefghijklmnop', b'serial01'),          # 16: primero en heap
    (b'abcdefghijklmnopq', b'serial01'),         # 17
    (b'abcdefghijklmnopqr', b'serial01'),        # 18
    (b'abcdefghijklmnopqrstuvw', b'serial01'),   # 23: 1 byte de serial en la clave
    (b'abcdefghijklmnopqrstuvwx', b'serial01'),  # 24: serial fuera de la clave
    (b'abcdefghijklmnopqrstuvwx', b'zzzzzzzz'),  # 24: debe dar la MISMA clave que la anterior
    (b'abcdefghijklmnopqrstuvwxyz0123', b'serial01'),  # 30: truncado
    (b'alice', b'serial01serial02serial03'),     # serial largo (RC4 > 8 bytes)
    (b'', b'serial01'),                          # username vacío
    (b'alice', b''),                             # serial vacío
    (b'a b\tc', b'serial01'),                    # espacios/tab
]

AGENT_JS = r"""
const mainExe = Process.enumerateModules().find(m => m.name.toLowerCase().endsWith('.exe'));
const base = mainExe.base;
const h20 = base.add(0x397239);
function hex(buf) {
  return Array.from(new Uint8Array(buf)).map(b => b.toString(16).padStart(2, '0')).join('');
}
function readStr(p) {
  const size = p.add(0x10).readU64().toNumber();
  const cap = p.add(0x18).readU64().toNumber();
  if (size > 4096) return { err: 'size absurdo ' + size };
  const data = cap >= 16 ? p.readPointer() : p;
  return { hex: size ? hex(data.readByteArray(size)) : '' };
}
Interceptor.attach(h20, {
  onEnter() {
    const ctx = this.context.rdi;
    const r = {};
    for (const [k, off] of [['fu', 0x18], ['rs', 0x20], ['key', 0x30], ['out', 0x38]]) {
      try { r[k] = readStr(ctx.add(off).readPointer()); }
      catch (e) { r[k] = { err: '' + e }; }
    }
    send({ kind: 'dump', data: r });
  }
});
send({ kind: 'ready', base: base.toString() });
"""


SHA_JS = r"""
const mainExe = Process.enumerateModules().find(m => m.name.toLowerCase().endsWith('.exe'));
const base = mainExe.base;
// 0x140396ac8: call 0x1402831c0 (wrapper SHA) ; 0x140396acd: instrucción siguiente.
// En ese punto rax apunta al std::string con el digest en hexadecimal.
Interceptor.attach(base.add(0x396acd), {
  onEnter() {
    try {
      const p = this.context.rax;
      const size = p.add(0x10).readU64().toNumber();
      const cap = p.add(0x18).readU64().toNumber();
      const d = cap >= 16 ? p.readPointer() : p;
      send({ kind: 'sha', size: size, text: size <= 256 ? d.readUtf8String(size) : null });
    } catch (e) { send({ kind: 'sha', err: '' + e }); }
  }
});
"""

SHA_CASES = [
    b'',
    b'a',
    b'a' * 55,           # último tamaño de un solo bloque SHA
    b'a' * 56,           # primero que necesita dos bloques
    b'a' * 63,
    b'a' * 64,
    b'a' * 65,
    b'a' * 119,
    b'a' * 120,
    bytes(range(0x80, 0x80 + 40)),       # bytes altos (no ASCII)
    'ñandú€'.encode('utf-8'),            # UTF-8 multibyte
    'ñandú'.encode('cp1252'),            # el mismo texto en ANSI
    b'ab\x00cd',                        # NUL interno
    b' padded ',                         # espacios al principio y al final
    b'tab\there',
    b'cr\rinside',                      # \r en mitad (modo texto del CRT)
    b'ctrlz\x1aafter',                  # 0x1A: EOF en modo texto de Windows
]


def run_sha_case(exe, user, timeout=30):
    dev = frida.get_local_device()
    pid = dev.spawn([exe], stdio='pipe')
    got = {}
    done = threading.Event()

    def on_message(msg, _data):
        if msg['type'] == 'send' and msg['payload'].get('kind') == 'sha':
            got.update(msg['payload'])
            done.set()
        elif msg['type'] == 'error':
            got['err'] = msg.get('description')
            done.set()
    try:
        session = dev.attach(pid)
        script = session.create_script(SHA_JS)
        script.on('message', on_message)
        script.load()
        dev.resume(pid)
        dev.input(pid, user + b'\r\n' + b'serial01\r\n')
        if not done.wait(timeout):
            got['timeout'] = True
    finally:
        try:
            dev.kill(pid)
        except Exception:
            pass
    return got


def sha_mode(exe):
    import hashlib
    bad = 0
    for i, u in enumerate(SHA_CASES, 1):
        got = run_sha_case(exe, u)
        exp = hashlib.sha256(u).hexdigest()
        if 'text' in got and got['text'] is not None:
            ok = got['text'].lower() == exp
            st = 'OK' if ok else 'DIFERENCIA'
            extra = '' if ok else f"\n        binario: {got['text']}\n        hashlib: {exp}"
            if ok and got['text'] != exp:
                st += ' (mayúsculas)'
        else:
            ok, st, extra = False, 'SIN DATO', f'  {got}'
        bad += not ok
        print(f'[{i:2}/{len(SHA_CASES)}] |u|={len(u):3} {u[:24]!r:30} {st}{extra}')
    print(f'\n[*] {len(SHA_CASES)} casos SHA, {bad} con diferencias o sin dato.')
    if bad == 0:
        print('[*] El host 8 calcula SHA-256 estándar sobre los bytes exactos que llegan por stdin.')


def run_case(exe, user, serial, timeout=120):
    dev = frida.get_local_device()
    pid = dev.spawn([exe], stdio='pipe')
    got = {}
    done = threading.Event()
    stdout = []

    def on_message(msg, _data):
        if msg['type'] == 'send' and msg['payload'].get('kind') == 'dump':
            got.update(msg['payload']['data'])
            done.set()
        elif msg['type'] == 'error':
            got['js_error'] = msg.get('description')
            done.set()

    def on_output(p, fd, data):
        if p == pid and data:
            stdout.append(data)

    dev.on('output', on_output)
    try:
        session = dev.attach(pid)
        script = session.create_script(AGENT_JS)
        script.on('message', on_message)
        script.load()
        dev.resume(pid)
        dev.input(pid, user + b'\r\n' + serial + b'\r\n')
        if not done.wait(timeout):
            got['timeout'] = True
    finally:
        try:
            dev.kill(pid)
        except Exception:
            pass
        dev.off('output', on_output)
    got['stdout'] = b''.join(stdout).decode('latin-1', 'replace')
    return got


def model(user, serial):
    key = derive_key(user, serial)
    m = {'fu': f_user(user).hex(), 'rs': g_serial(serial).hex(), 'key': key.hex()}
    try:
        m['out'] = decrypt_material(key)[-1].hex()
    except NotImplementedError:
        m['out'] = None
        m['out_prefix'] = plaintext_prefix(user, serial).hex()
    return m


def compare(user, serial, got):
    import hashlib
    m = model(user, serial)
    row = {'user': user.decode('latin-1'), 'serial': serial.decode('latin-1'),
           'len_u': len(user), 'len_s': len(serial)}
    if got.get('timeout') or got.get('js_error'):
        row['status'] = 'NO LLEGÓ A HOST 20' + (f" ({got.get('js_error')})" if got.get('js_error') else '')
        row['stdout'] = got.get('stdout', '')[-200:]
        return row
    verdict = []
    for k in ('fu', 'rs', 'key', 'out'):
        g = got.get(k, {})
        if 'err' in g:
            row[k] = 'ERR ' + g['err']
            verdict.append(False)
            continue
        gh = g.get('hex')
        if k == 'out' and m['out'] is None:
            ok = gh is not None and gh[:16] == m['out_prefix']
            row[k] = ('OK(prefijo)' if ok else 'DIF') + f' {gh}'
        else:
            ok = gh == m[k]
            row[k] = ('OK' if ok else 'DIF') + f' {gh}' + ('' if ok else f'  (modelo {m[k]})')
        verdict.append(ok)
        if k == 'out' and gh:
            row['out_sha16'] = hashlib.sha256(bytes.fromhex(gh)).hexdigest()[:16]
    row['status'] = 'OK' if all(verdict) else 'DIFERENCIA'
    return row


def fuzz_cases(n, seed):
    rnd = random.Random(seed)
    alphabet = (string.ascii_letters + string.digits + '-_.').encode()
    cases = []
    for _ in range(n):
        lu, ls = rnd.randint(0, 40), rnd.randint(0, 40)
        cases.append((bytes(rnd.choice(alphabet) for _ in range(lu)),
                      bytes(rnd.choice(alphabet) for _ in range(ls))))
    return cases


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--exe', default=os.path.join(HERE, 'pafet_pass8.exe'))
    ap.add_argument('--fuzz', type=int, default=0)
    ap.add_argument('--seed', type=int, default=1337)
    ap.add_argument('--out', default='pafet_matrix_results.json')
    ap.add_argument('--sha', action='store_true', help='solo pruebas del SHA del host 8')
    args = ap.parse_args()

    if args.sha:
        sha_mode(args.exe)
        return

    print('[*] Caso de control alice/serial01 ...')
    ctl = compare(CONTROL[0], CONTROL[1], run_case(args.exe, CONTROL[0], CONTROL[1]))
    print('   ', ctl['status'], ctl.get('out_sha16'))
    if ctl['status'] != 'OK' or ctl.get('out_sha16') != CONTROL[2]:
        sys.exit('[!] El control no reproduce 66b0ab3df07fc783: el hook contamina o algo cambió. Paro.')

    cases = DEFAULT_MATRIX + fuzz_cases(args.fuzz, args.seed)
    rows = [ctl]
    for i, (u, s) in enumerate(cases, 1):
        row = compare(u, s, run_case(args.exe, u, s))
        rows.append(row)
        flag = '' if row['status'] == 'OK' else '   <<<<<<'
        print(f"[{i:3}/{len(cases)}] |u|={len(u):2} |s|={len(s):2} {row['status']}{flag}")
        if row['status'] != 'OK':
            for k in ('fu', 'rs', 'key', 'out', 'stdout'):
                if k in row:
                    print(f'        {k}: {row[k]}')

    with open(args.out, 'w', encoding='utf-8') as fh:
        json.dump(rows, fh, indent=2, ensure_ascii=False)
    bad = [r for r in rows if r['status'] != 'OK']
    print(f'\n[*] {len(rows)} casos, {len(bad)} con diferencias. Detalle en {args.out}')

    pair = [r for r in rows if r['len_u'] == 24 and r.get('key', '').startswith('OK')]
    keys = {r['key'].split()[1] for r in pair}
    if len(pair) >= 2:
        print('[*] Username de 24 con seriales distintos ->',
              'MISMA clave (como predice el modelo)' if len(keys) == 1 else 'CLAVES DISTINTAS (¡el modelo [:24] falla!)')


if __name__ == '__main__':
    main()
