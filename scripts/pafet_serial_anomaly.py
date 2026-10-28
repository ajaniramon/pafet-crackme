#!/usr/bin/env python3
"""Capture s20 and s38 for serial variants to understand the anomaly."""
import subprocess, frida, sys

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
let got15 = false;
let got20 = false;
Interceptor.attach(DISP, {
  onEnter: function() {
    const op = this.context.rdx.toUInt32() & 0xFF;
    if (op === 15 && !got15) {
      got15 = true;
      this.rdi = this.context.rcx;
      this.want = 's30_and_s20';
    } else if (op === 20 && !got20) {
      got20 = true;
      this.rdi = this.context.rcx;
      this.want = 's38';
    }
  },
  onLeave: function() {
    if (!this.want) return;
    const rdi = this.rdi;
    try {
      if (this.want === 's30_and_s20') {
        const s20 = readStr(rdi.add(0x20).readPointer());
        const s30 = readStr(rdi.add(0x30).readPointer());
        send({kind:'s30', s20: s20, s30: s30});
      } else if (this.want === 's38') {
        const s38 = readStr(rdi.add(0x38).readPointer());
        send({kind:'s38', s38: s38});
      }
    } catch(e) {}
  }
});
'''

def run(user, serial):
    proc = subprocess.Popen([EXE], stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    try: session = frida.attach(proc.pid)
    except Exception as e: print(f'FAIL {e}'); proc.kill(); return {}
    script = session.create_script(JS)
    out = {}
    def cb(msg, data):
        if msg['type']=='send':
            p = msg['payload']
            out.update(p)
    script.on('message', cb)
    script.load()
    try: proc.stdin.write(f'{user}\n{serial}\n'.encode()); proc.stdin.flush(); proc.stdin.close()
    except: pass
    try: proc.wait(timeout=90)
    except subprocess.TimeoutExpired: proc.kill()
    return out

# All with user='alice', vary serial
SERIALS = ['serial01', 'serial02', 'serial03', '1', '2', '3', '12', 'x', '', '0']
for s in SERIALS:
    r = run('alice', s)
    print(f'  serial={s!r:12s}: s20={r.get("s20","?")}  s30={r.get("s30","?")}  s38[:16]={(r.get("s38") or "")[:32]}', flush=True)
