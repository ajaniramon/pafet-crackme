#!/usr/bin/env python3
"""Pafet: comprueba que el SHA-256 del PE sobre el username coincide con
hashlib.sha256(user_bytes).hexdigest() del modelo.

Hookea el memcmp del gate (base+0x396afb, justo tras `call memcmp`) interceptando
la funcion memcmp de la CRT y filtrando por size==32. El primer buffer es el
digest calculado por el PE, el segundo es la constante target.

Casos frontera que medimos:
  - longitudes 55..64 (atraviesan el padding del ultimo bloque SHA)
  - bytes no ASCII (crudos; probamos tambien UTF-8 de un codepoint ancho)
  - longitud 0 y 1

Requisitos: pip install frida pycryptodome
Uso: python pafet_sha_oracle.py
"""
import hashlib
import os
import sys
import threading

import frida

HERE = os.path.dirname(os.path.abspath(__file__))

AGENT_JS = r"""
const mainExe = Process.enumerateModules().find(m => m.name.toLowerCase().endsWith('.exe'));
const base = mainExe.base;

function hex(buf) {
  return Array.from(new Uint8Array(buf)).map(b => b.toString(16).padStart(2, '0')).join('');
}

function hookMemcmp(name) {
  const addr = Module.findExportByName(name, 'memcmp');
  if (!addr) return false;
  Interceptor.attach(addr, {
    onEnter(args) {
      const sz = args[2].toInt32();
      if (sz !== 32) return;
      try {
        const a = hex(args[0].readByteArray(32));
        const b = hex(args[1].readByteArray(32));
        send({ kind: 'memcmp32', a: a, b: b });
      } catch (e) {
        send({ kind: 'memcmp32-err', err: '' + e });
      }
    }
  });
  send({ kind: 'hooked', module: name, addr: addr.toString() });
  return true;
}

// MSVC CRT puede ser ucrtbase, msvcrt, vcruntime o msvcr140. Probamos todos.
let ok = false;
for (const m of ['ucrtbase.dll', 'msvcrt.dll', 'vcruntime140.dll', 'msvcr140.dll']) {
  if (hookMemcmp(m)) ok = true;
}
send({ kind: 'ready', base: base.toString(), ok: ok });
"""


def run_case(exe, user, serial=b'serial01', timeout=60):
    dev = frida.get_local_device()
    pid = dev.spawn([exe], stdio='pipe')
    captured = []
    done = threading.Event()
    stdout_buf = []

    def on_message(msg, _data):
        if msg['type'] != 'send':
            return
        p = msg['payload']
        k = p.get('kind')
        if k == 'memcmp32':
            captured.append((p['a'], p['b']))
            done.set()

    def on_output(p, fd, data):
        if p == pid and data:
            stdout_buf.append(data)

    dev.on('output', on_output)
    try:
        session = dev.attach(pid)
        script = session.create_script(AGENT_JS)
        script.on('message', on_message)
        script.load()
        dev.resume(pid)
        dev.input(pid, user + b'\r\n' + serial + b'\r\n')
        done.wait(timeout)
    finally:
        try:
            dev.kill(pid)
        except Exception:
            pass
        dev.off('output', on_output)
    return captured, b''.join(stdout_buf).decode('latin-1', 'replace')


def main():
    exe = os.path.join(HERE, 'pafet_pass8.exe')
    cases = [
        ('empty', b''),
        ('1B', b'a'),
        ('L54', b'a' * 54),
        ('L55', b'a' * 55),       # padding con ultimo bit en el bloque
        ('L56', b'a' * 56),       # frontera: 1 bloque extra
        ('L57', b'a' * 57),
        ('L63', b'a' * 63),
        ('L64', b'a' * 64),       # exactamente 1 bloque
        ('L65', b'a' * 65),       # 2 bloques
        ('nonascii-latin1', bytes(range(0x80, 0x90))),  # 16 bytes 0x80..0x8F
        ('nonascii-high',    bytes(range(0xA0, 0xB0))),  # 16 bytes 0xA0..0xAF
        ('utf8-eñe',    'niñoñoño'.encode('utf-8')),
        ('utf8-emoji',  '🙂hola'.encode('utf-8')),
        ('nulls',       b'ABC\x00DEF\x00\x00'),         # NULs en medio
        ('all255',      bytes([255] * 10)),
    ]

    print(f'[*] Exe: {exe}')
    results = []
    for name, user in cases:
        caps, out = run_case(exe, user)
        expected = hashlib.sha256(user).hexdigest()
        pe_digest = caps[0][0] if caps else None
        pe_target = caps[0][1] if caps else None
        match = (pe_digest == expected)
        status = 'OK ' if match else ('NO MEMCMP' if not caps else 'DIF')
        print(f'[{name:16}] |u|={len(user):3} {status} pe={pe_digest}  py={expected}')
        if caps and len(caps) > 1:
            print(f'                    (otros memcmp 32B: {len(caps)-1})')
        results.append((name, user.hex(), expected, pe_digest, pe_target, match))

    bad = [r for r in results if r[5] is False]
    print(f'\n[*] {len(results)} casos, {len(bad)} con diferencias')
    if results:
        # Target debe ser siempre la constante del gate:
        targets = {r[4] for r in results if r[4]}
        print(f'[*] Target (constante) distintos valores observados: {len(targets)}')
        for t in sorted(targets):
            print(f'    {t}')


if __name__ == '__main__':
    main()
