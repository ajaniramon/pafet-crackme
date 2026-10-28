#!/usr/bin/env python3
"""Which candidate functions actually run during cipher #3?
Count hits per candidate per cipher #."""
import subprocess, frida, sys
from collections import Counter

EXE = r'C:\Users\Ramón\Desktop\pafet_pass8.exe'

JS = r'''
Process.setExceptionHandler(d => { try { if (parseInt(d.context.rdi.toString(16).slice(-8),16)===0xe06d7363) return false; } catch(e){} return false; });
const mods = Process.enumerateModules();
let MAIN=null; for(const m of mods) if (/pafet.*\.exe$/i.test(m.name)) { MAIN=m; break; }
const BASE = MAIN.base;
const CIPHER = BASE.add(0xc0510);

let cipherDepth = 0;
let cipherNum = 0;

Interceptor.attach(CIPHER, {
  onEnter: function() { cipherDepth++; if (cipherDepth === 1) cipherNum++; },
  onLeave: function() { cipherDepth--; }
});

const CANDIDATES = [
  {addr: BASE.add(0x16d950), name: 'fn_16d950'},
  {addr: BASE.add(0x169d10), name: 'fn_169d10'},
  {addr: BASE.add(0x168f10), name: 'fn_168f10'},
  {addr: BASE.add(0x16cd80), name: 'fn_16cd80'},
  {addr: BASE.add(0x16ca90), name: 'fn_16ca90'},
  {addr: BASE.add(0x16fa50), name: 'fn_16fa50'},
  {addr: BASE.add(0x176950), name: 'fn_176950'},
  {addr: BASE.add(0x3c976c), name: 'fn_3c976c'},
];

for (const c of CANDIDATES) {
  Interceptor.attach(c.addr, {
    onEnter: function() {
      if (cipherDepth === 0) return;
      send({kind:'hit', fn: c.name, cipher: cipherNum});
    }
  });
}
'''

def run(user, serial):
    proc = subprocess.Popen([EXE], stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    try: session = frida.attach(proc.pid)
    except Exception as e: print(f'FAIL {e}'); proc.kill(); return
    script = session.create_script(JS)
    counts = Counter()
    def cb(msg, data):
        if msg['type']=='send':
            p = msg['payload']
            counts[(p['cipher'], p['fn'])] += 1
    script.on('message', cb)
    script.load()
    try: proc.stdin.write(f'{user}\n{serial}\n'.encode()); proc.stdin.flush(); proc.stdin.close()
    except: pass
    try: proc.wait(timeout=120)
    except subprocess.TimeoutExpired: proc.kill()
    return counts

print('=== alice/serial01 ===')
counts = run('alice', 'serial01')
# Group by cipher#
by_cipher = {}
for (cipher, fn), n in counts.items():
    by_cipher.setdefault(cipher, {})[fn] = n
for cipher in sorted(by_cipher):
    print(f'cipher #{cipher}: {by_cipher[cipher]}')
