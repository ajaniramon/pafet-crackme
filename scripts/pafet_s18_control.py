#!/usr/bin/env python3
"""Captura s18 para los 10 users de control especificados: a, b, aa, ab, ba, alice, Alice, 123, 12x, ''"""
import subprocess, frida, sys, json

EXE = r'C:\Users\Ramón\Desktop\pafet_pass8.exe'

JS = r'''
Process.setExceptionHandler(d => { try { if (parseInt(d.context.rdi.toString(16).slice(-8),16)===0xe06d7363) return false; } catch(e){} return false; });
const mods = Process.enumerateModules();
let MAIN=null; for(const m of mods) if (/pafet.*\.exe$/i.test(m.name)) { MAIN=m; break; }
const BASE = MAIN.base;
const DISP = BASE.add(0x396990);
function hex(ptr, n) { try { const b = ptr.readByteArray(n); return Array.from(new Uint8Array(b)).map(x=>x.toString(16).padStart(2,'0')).join(''); } catch(e) { return null; } }
function readStr(sp) {
  try {
    const size = sp.add(0x10).readU64().valueOf();
    const cap  = sp.add(0x18).readU64().valueOf();
    const data = (cap >= 16n) ? sp.readPointer() : sp;
    return hex(data, Math.min(Number(size), 128));
  } catch(e) { return null; }
}
let captured = false;
Interceptor.attach(DISP, {
  onEnter: function() {
    const op = this.context.rdx.toUInt32() & 0xFF;
    if (op !== 15 || captured) return;
    captured = true;
    this.rdi = this.context.rcx;
  },
  onLeave: function() {
    if (!this.rdi) return;
    try {
      const sp = this.rdi.add(0x18).readPointer();
      send({kind:'s18', value: readStr(sp)});
    } catch(e) { send({kind:'s18', value:'ERR'}); }
  }
});
'''

def run(user):
    proc = subprocess.Popen([EXE], stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    try: session = frida.attach(proc.pid)
    except Exception as e: print(f'FAIL {e}'); proc.kill(); return None
    script = session.create_script(JS)
    res = {'v': None}
    def cb(msg, data):
        if msg['type']=='send' and msg['payload']['kind']=='s18':
            res['v'] = msg['payload']['value']
    script.on('message', cb)
    script.load()
    try: proc.stdin.write(f'{user}\n0\n'.encode()); proc.stdin.flush(); proc.stdin.close()
    except: pass
    try: proc.wait(timeout=60)
    except subprocess.TimeoutExpired: proc.kill()
    return res['v']

controls = ['a', 'b', 'aa', 'ab', 'ba', 'alice', 'Alice', '123', '12x', '']
for u in controls:
    s = run(u)
    print(f'  user={u!r:12s} ({len(u):2d}c): s18 = {s}', flush=True)
