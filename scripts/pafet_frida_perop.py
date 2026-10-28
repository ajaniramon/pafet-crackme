#!/usr/bin/env python3
"""Hook each main-VM handler 10..19 and capture:
 - rdi (Ctx base), rbp pointer and context around them
 - Ctx [+0x00..0x60]: known fields where user, serial, plaintext live
Run with 2 inputs that differ only in username vs only in serial. Diff reveals
which Ctx fields depend on which input."""
import subprocess, frida, time, sys, json

EXE = r'C:\Users\Ramón\Desktop\pafet_pass8.exe'

# For the comparison we care about two runs:
INPUT_A = ('alice', 'serial01')
INPUT_B = ('alice', 'serial02')  # same user, serial differs by last char
INPUT_C = ('bob',   'serial01')  # same serial, user differs

JS = r'''
Process.setExceptionHandler(d => { try { if (parseInt(d.context.rdi.toString(16).slice(-8),16)===0xe06d7363) return false; } catch(e){} return false; });
const mods = Process.enumerateModules();
let MAIN=null; for(const m of mods) if (/pafet.*\.exe$/i.test(m.name)) { MAIN=m; break; }
const BASE = MAIN.base;
const DISP = BASE.add(0x396990);
function hex(ptr, n) { try { const b = ptr.readByteArray(n); return Array.from(new Uint8Array(b)).map(x=>x.toString(16).padStart(2,'0')).join(''); } catch(e) { return null; } }

// Read a std::string pointed to by [ptr]
function readStringAt(stringPtr) {
  try {
    const size = stringPtr.add(0x10).readU64().valueOf();
    const cap = stringPtr.add(0x18).readU64().valueOf();
    const data_ptr = (cap >= 16n) ? stringPtr.readPointer() : stringPtr;
    return {size: Number(size), content: hex(data_ptr, Math.min(Number(size), 128))};
  } catch(e) { return {err: e.toString()}; }
}

let seq = 0;
Interceptor.attach(DISP, {
  onEnter: function() {
    seq++;
    const c = this.context;
    const op = c.rdx.toUInt32() & 0xFF;
    if (op < 6 || op > 22) return;
    this.op = op;
    this.n = seq;
    this.rdi = c.rcx;  // rcx becomes rdi inside the function
  },
  onLeave: function() {
    if (this.op === undefined) return;
    const rdi = this.rdi;
    // Capture Ctx fields that we know about
    const fields = {};
    for (let off = 0; off < 0x60; off += 8) {
      try { fields['f'+off.toString(16)] = rdi.add(off).readPointer().toString(); } catch(e) {}
    }
    // Try to also read string content for fields that look like std::string ptrs
    const strings = {};
    for (const off of [0, 8, 0x18, 0x20, 0x30, 0x38, 0x40, 0x48, 0x50]) {
      try {
        const sp = rdi.add(off).readPointer();
        // If it looks like a valid pointer
        if (sp.compare(ptr('0x10000')) > 0 && sp.compare(ptr('0x7fffffff00000000')) < 0) {
          const s = readStringAt(sp);
          if (s.size && s.size > 0 && s.size < 256) strings['s'+off.toString(16)] = s;
        }
      } catch(e) {}
    }
    send({kind:'op', n: this.n, op: this.op, fields: fields, strings: strings});
  }
});
'''

def run_once(user, serial):
    proc = subprocess.Popen([EXE], stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    try: session = frida.attach(proc.pid)
    except Exception as e: print(f'FAIL {e}'); proc.kill(); return []
    script = session.create_script(JS)
    events = []
    def cb(msg, data):
        if msg['type']=='send' and msg['payload']['kind']=='op':
            events.append(msg['payload'])
    script.on('message', cb)
    script.load()
    try: proc.stdin.write(f'{user}\n{serial}\n'.encode()); proc.stdin.flush(); proc.stdin.close()
    except: pass
    try: proc.wait(timeout=90)
    except subprocess.TimeoutExpired: proc.kill()
    return events

results = {}
for label, (u, s) in [('A', INPUT_A), ('B', INPUT_B), ('C', INPUT_C)]:
    print(f'\n[*] Run {label}: user={u!r} serial={s!r}')
    evts = run_once(u, s)
    results[label] = evts
    print(f'   captured {len(evts)} ops')

# Save all
import json
out_path = r'C:\Users\Ramón\Desktop\pafet_perop_diff.json'
with open(out_path, 'w') as f:
    json.dump(results, f)

# Diff analysis: for each (op#, op), compare Ctx strings across A/B/C
print('\n[*] Diff analysis — strings that CHANGE between runs:')
if 'A' in results and 'B' in results and 'C' in results:
    maxN = min(len(results['A']), len(results['B']), len(results['C']))
    for i in range(maxN):
        a = results['A'][i]; b = results['B'][i]; c = results['C'][i]
        if a['op'] != b['op'] or a['op'] != c['op']: continue
        for key in a['strings']:
            if key not in b['strings'] or key not in c['strings']: continue
            sa = a['strings'][key]['content']; sb = b['strings'][key]['content']; sc = c['strings'][key]['content']
            if sa != sb and sa != sc:
                print(f'   op#{i+1}(opcode={a["op"]}) field {key}: A={sa[:48]} B={sb[:48]} C={sc[:48]}')
            elif sa != sb:
                print(f'   op#{i+1}(opcode={a["op"]}) field {key} SERIAL-ONLY: A={sa[:48]} B={sb[:48]}')
            elif sa != sc:
                print(f'   op#{i+1}(opcode={a["op"]}) field {key} USER-ONLY: A={sa[:48]} C={sc[:48]}')
