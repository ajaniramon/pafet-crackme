#!/usr/bin/env python3
"""Target the exact derivation formula for s18 (user) and s20 (serial).
Capture s18 and s20 at opcode 15 (after derivation is complete) for a
battery of controlled inputs: user varying by 1 byte, serial varying by 1 byte."""
import subprocess, frida, time, sys, json

EXE = r'C:\Users\Ramón\Desktop\pafet_pass8.exe'

# Precise battery: single-byte perturbations.
INPUTS = [
    ('A', '0'),
    ('B', '0'),
    ('C', '0'),
    ('a', '0'),
    ('AA', '0'),
    ('AB', '0'),
    ('BA', '0'),
    ('BB', '0'),
    ('A', '1'),
    ('A', '2'),
    ('A', '9'),
    ('A', '10'),
    ('A', '11'),
    ('A', 'B'),
    ('A', ''),
    ('', '0'),
    ('', ''),
    ('AAAAAAAA', '0'),      # 8-char user
    ('AAAAAAAAA', '0'),     # 9-char user (test SSO boundary at 15)
    ('AAAAAAAAAAAAAAA', '0'),  # 15 chars (last SSO)
    ('AAAAAAAAAAAAAAAA', '0'), # 16 chars (heap)
    ('A', '00000000'),
    ('A', '000000001'),
    ('A', 'ABCDEFGH'),
    ('A', 'ABCDEFGHI'),
]

JS = r'''
Process.setExceptionHandler(d => { try { if (parseInt(d.context.rdi.toString(16).slice(-8),16)===0xe06d7363) return false; } catch(e){} return false; });
const mods = Process.enumerateModules();
let MAIN=null; for(const m of mods) if (/pafet.*\.exe$/i.test(m.name)) { MAIN=m; break; }
const BASE = MAIN.base;
const DISP = BASE.add(0x396990);
function hex(ptr, n) { try { const b = ptr.readByteArray(n); return Array.from(new Uint8Array(b)).map(x=>x.toString(16).padStart(2,'0')).join(''); } catch(e) { return null; } }

function readStringAt(stringPtr) {
  try {
    const size = stringPtr.add(0x10).readU64().valueOf();
    const cap = stringPtr.add(0x18).readU64().valueOf();
    const data_ptr = (cap >= 16n) ? stringPtr.readPointer() : stringPtr;
    return hex(data_ptr, Math.min(Number(size), 128));
  } catch(e) { return null; }
}

let seen15 = false;
Interceptor.attach(DISP, {
  onEnter: function() {
    const op = this.context.rdx.toUInt32() & 0xFF;
    if (op !== 15) return;
    if (seen15) return;
    seen15 = true;
    this.rdi = this.context.rcx;
    this.capture = true;
  },
  onLeave: function() {
    if (!this.capture) return;
    const rdi = this.rdi;
    const out = {};
    for (const off of [8, 0x18, 0x20, 0x30, 0x38]) {
      try {
        const sp = rdi.add(off).readPointer();
        if (sp.compare(ptr('0x10000')) > 0 && sp.compare(ptr('0x7fffffff00000000')) < 0) {
          out['s'+off.toString(16)] = readStringAt(sp);
        }
      } catch(e) {}
    }
    send({kind:'cap', state: out});
  }
});
'''

def run_once(user, serial):
    proc = subprocess.Popen([EXE], stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    try: session = frida.attach(proc.pid)
    except Exception as e: print(f'FAIL {e}'); proc.kill(); return {}
    script = session.create_script(JS)
    result = {}
    def cb(msg, data):
        if msg['type']=='send' and msg['payload']['kind']=='cap':
            result.update(msg['payload']['state'])
    script.on('message', cb)
    script.load()
    try: proc.stdin.write(f'{user}\n{serial}\n'.encode()); proc.stdin.flush(); proc.stdin.close()
    except: pass
    try: proc.wait(timeout=60)
    except subprocess.TimeoutExpired: proc.kill()
    return result

results = []
for u, s in INPUTS:
    print(f'--- user={u!r} serial={s!r} ---')
    r = run_once(u, s)
    print(f'  s8  (user)        : {r.get("s8","")}')
    print(f'  s18 (user_tf)     : {r.get("s18","")}')
    print(f'  s20 (serial_tf)   : {r.get("s20","")}')
    results.append({'user': u, 'serial': s, **r})

with open(r'C:\Users\Ramón\Desktop\pafet_derive.json', 'w') as f:
    json.dump(results, f, indent=2)

print('\n[*] Testing s20 = serial XOR 0xde188941a3375d3a hypothesis:')
KEY = bytes.fromhex('de188941a3375d3a')
for r in results:
    s = r['serial'].encode()
    expected = bytes(a^b for a,b in zip(s + b'\x00'*8, KEY[:len(s) or 1]))
    s20 = r.get('s20', '')
    # Compare on same length as serial
    sl = len(s)
    if s20 and sl:
        obs = bytes.fromhex(s20)[:sl]
        exp_b = bytes(a^b for a,b in zip(s, KEY[:sl]))
        match = obs == exp_b
        print(f'   {r["user"]!r:<20} {r["serial"]!r:<20}: s20={s20[:16]} vs exp={exp_b.hex()}  match={match}')
    elif s20:
        print(f'   {r["user"]!r:<20} {r["serial"]!r:<20}: s20={s20} (empty serial, s20 len={len(bytes.fromhex(s20))})')
