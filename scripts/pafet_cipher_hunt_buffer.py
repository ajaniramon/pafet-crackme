#!/usr/bin/env python3
"""Find the exact buffer where cipher-VM writes the plaintext.
Strategy: at ENTER of 1st cipher call, record all rw ranges whose first bytes.
At LEAVE, scan all rw ranges for the needle and report its container range,
the module/section/heap it belongs to, and its exact offset."""
import subprocess, frida, time, sys

EXE = r'C:\Users\Ramón\Desktop\pafet_oracle.exe'

JS = r'''
Process.setExceptionHandler(d => { try { if (parseInt(d.context.rdi.toString(16).slice(-8),16)===0xe06d7363) return false; } catch(e){} return false; });
const mods = Process.enumerateModules();
let MAIN=null; for(const m of mods) if (/pafet.*\.exe$/i.test(m.name)) { MAIN=m; break; }
const CIPHER = MAIN.base.add(0xc0510);

function scanAll() {
  const hits = [];
  for (const r of Process.enumerateRanges('rw-')) {
    try {
      const found = Memory.scanSync(r.base, r.size, '35 10 36 6f bf f5 cb 69');
      for (const f of found) {
        hits.push({
          hit_addr: f.address.toString(),
          range_base: r.base.toString(),
          range_size: r.size,
          offset_in_range: f.address.sub(r.base).toInt32(),
          prot: r.protection
        });
      }
    } catch(e) {}
  }
  return hits;
}

let callN = 0;
Interceptor.attach(CIPHER, {
  onEnter: function() {
    callN++;
    if (callN !== 1) return;
    this.rcx = this.context.rcx;
    send({kind:'enter', rcx: this.rcx.toString(), pre_hits: scanAll()});
  },
  onLeave: function(ret) {
    if (callN !== 1) return;
    const post = scanAll();
    // For each hit, dump 128 bytes of context
    const samples = [];
    for (const h of post) {
      try {
        const p = ptr(h.hit_addr).sub(16);
        const b = p.readByteArray(128);
        samples.push({addr: h.hit_addr, context: Array.from(new Uint8Array(b)).map(x=>x.toString(16).padStart(2,'0')).join('')});
      } catch(e) {}
    }
    send({kind:'leave', rcx: this.rcx.toString(), post_hits: post, samples: samples});
  }
});
'''

got = {}
def cb(msg, data):
    if msg['type']=='send':
        got[msg['payload']['kind']] = msg['payload']

proc = subprocess.Popen([EXE], stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
session = frida.attach(proc.pid)
script = session.create_script(JS)
script.on('message', cb)
script.load()
proc.stdin.write(b'\r\n\r\n'); proc.stdin.flush(); proc.stdin.close()
try: proc.wait(timeout=60)
except: proc.kill()

print('=== 1st cipher-VM call: location of plaintext ===\n')
if 'leave' in got:
    rcx = got['leave']['rcx']
    print(f'cipher-VM rcx = {rcx}')
    for i, h in enumerate(got['leave']['post_hits']):
        print(f'\nHit #{i+1}:')
        print(f'  needle @ {h["hit_addr"]}')
        print(f'  containing range: base={h["range_base"]} size={h["range_size"]} prot={h["prot"]}')
        print(f'  offset within range: 0x{h["offset_in_range"]:x} ({h["offset_in_range"]})')
        # distance from rcx
        try:
            dist = int(h['hit_addr'],16) - int(rcx,16)
            print(f'  distance from rcx: {hex(dist)} ({dist:+})')
        except: pass
    for s in got['leave']['samples']:
        print(f'\nContext around {s["addr"]} (-16..+112):')
        hex_s = s['context']
        for i in range(0, len(hex_s), 32):
            print(f'  {hex_s[i:i+32]}')
else:
    print('(no leave data)')
