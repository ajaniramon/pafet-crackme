#!/usr/bin/env python3
"""Hook cipher-VM entry (0x1400c0510) and exit; at both, scan all writable
memory for the plaintext prefix. If prefix absent at entry but present at exit
→ cipher-VM is responsible for the write."""
import subprocess, frida, time, sys, hashlib

EXE = r'C:\Users\Ramón\Desktop\pafet_oracle.exe'
WAIT = 90

JS = r'''
Process.setExceptionHandler(function (details) {
  try { const rdiLo = parseInt(details.context.rdi.toString(16).slice(-8), 16);
    if (rdiLo === 0xe06d7363) return false;
  } catch(e) {}
  return false;
});

const mods = Process.enumerateModules();
let MAIN=null;
for(const m of mods) if (/pafet.*\.exe$/i.test(m.name)) { MAIN=m; break; }
const BASE = MAIN.base;
const CIPHER = BASE.add(0xc0510);

function scanAllRw() {
  const hits = [];
  const ranges = Process.enumerateRanges('rw-');
  for (const r of ranges) {
    try {
      const found = Memory.scanSync(r.base, r.size, '35 10 36 6f bf f5 cb 69');
      for (const f of found) hits.push({addr: f.address.toString()});
    } catch(e) {}
  }
  return hits;
}

let callN = 0;
Interceptor.attach(CIPHER, {
  onEnter: function () {
    callN++;
    this.n = callN;
    const entry_hits = scanAllRw();
    send({kind:'cipher_enter', n: callN, pre_count: entry_hits.length, pre_hits: entry_hits.slice(0,3)});
  },
  onLeave: function (retval) {
    const exit_hits = scanAllRw();
    send({kind:'cipher_leave', n: this.n, post_count: exit_hits.length, post_hits: exit_hits.slice(0,3), ret: retval.toString()});
  }
});
console.log('[*] cipher-VM boundary hook ready');
'''

def on_message(msg, data):
    if msg['type']=='send':
        p = msg['payload']
        if p['kind']=='cipher_enter':
            print(f'\n[CIPHER #{p["n"]} ENTER] prefix_count_in_memory={p["pre_count"]}')
            for h in p['pre_hits']: print(f'   pre: {h}')
        elif p['kind']=='cipher_leave':
            print(f'[CIPHER #{p["n"]} LEAVE] prefix_count_in_memory={p["post_count"]} ret={p["ret"]}')
            for h in p['post_hits']: print(f'   post: {h}')

proc = subprocess.Popen([EXE], stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
try: session = frida.attach(proc.pid)
except Exception as e: print(f'[FAIL] {e}'); proc.kill(); sys.exit(1)
script = session.create_script(JS)
script.on('message', on_message)
script.load()
print(f'[*] attached pid={proc.pid}')
try: proc.stdin.write(b'\r\n\r\n'); proc.stdin.flush(); proc.stdin.close()
except: pass
try: proc.wait(timeout=WAIT)
except subprocess.TimeoutExpired: proc.kill()
print(f'\n[*] rc={proc.returncode}')
