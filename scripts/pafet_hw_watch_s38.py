#!/usr/bin/env python3
"""HW watchpoint on the first byte of the 72-byte s38 heap buffer.
Procedure:
 1. Hook `operator new` (0x1403a4080). Record allocations >= 64 B during cipher-VM.
 2. Hook cipher-VM exit. Scan allocations for the plaintext prefix.
 3. For the matching allocation, set a HW breakpoint on its address.
 4. Re-run and catch the native RIP that writes to it.

Simpler first version: just record alloc trace + find plaintext in it."""
import subprocess, frida, sys

EXE = r'C:\Users\Ramón\Desktop\pafet_pass8.exe'

JS = r'''
Process.setExceptionHandler(d => { try { if (parseInt(d.context.rdi.toString(16).slice(-8),16)===0xe06d7363) return false; } catch(e){} return false; });
const mods = Process.enumerateModules();
let MAIN=null; for(const m of mods) if (/pafet.*\.exe$/i.test(m.name)) { MAIN=m; break; }
const BASE = MAIN.base;
const CIPHER = BASE.add(0xc0510);
const OP_NEW = BASE.add(0x3a4080);
function hex(ptr, n) { try { const b = ptr.readByteArray(n); return Array.from(new Uint8Array(b)).map(x=>x.toString(16).padStart(2,'0')).join(''); } catch(e) { return null; } }

let inCipher = 0;
let allocsThisCipher = [];
let cipherNum = 0;

Interceptor.attach(CIPHER, {
  onEnter: function() {
    inCipher++;
    if (inCipher === 1) { cipherNum++; allocsThisCipher = []; }
  },
  onLeave: function() {
    inCipher--;
    if (inCipher === 0) {
      // Scan allocations for the plaintext prefix (we expect 'fd2077a1' for user='alice' serial='serial01')
      const PT_PREFIX = '35 10 36 6f bf f5 cb 69';  // user='' baseline
      const ALICE_PREFIX = 'fd 20 77 a1 01 ac df ae';
      const found = [];
      for (const alloc of allocsThisCipher) {
        try {
          const b = ptr(alloc.addr).readByteArray(Math.min(alloc.size, 128));
          const bytes = new Uint8Array(b);
          const hexstr = Array.from(bytes).map(x=>x.toString(16).padStart(2,'0')).join('');
          if (hexstr.includes('fd2077a101acdfae') || hexstr.includes('3510366fbff5cb69')) {
            found.push({addr: alloc.addr, size: alloc.size, hex: hexstr.slice(0, 160)});
          }
        } catch(e) {}
      }
      send({kind:'cipher_done', cipherNum: cipherNum, n_allocs: allocsThisCipher.length,
            allocs: allocsThisCipher.slice(0, 20),  // first 20 for brevity
            found: found});
    }
  }
});

Interceptor.attach(OP_NEW, {
  onEnter: function() { if (inCipher > 0) this.size = this.context.rcx.toUInt32(); },
  onLeave: function(retval) {
    if (this.size !== undefined && inCipher > 0 && this.size >= 32) {
      allocsThisCipher.push({size: this.size, addr: retval.toString()});
    }
  }
});
'''

def run(user, serial):
    proc = subprocess.Popen([EXE], stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    try: session = frida.attach(proc.pid)
    except Exception as e: print(f'FAIL {e}'); proc.kill(); return
    script = session.create_script(JS)
    def cb(msg, data):
        if msg['type']=='send' and msg['payload']['kind']=='cipher_done':
            p = msg['payload']
            print(f'  cipher #{p["cipherNum"]}: {p["n_allocs"]} allocs; found={len(p["found"])}', flush=True)
            for f in p['found']:
                print(f'    MATCH @ {f["addr"]} size={f["size"]}  hex={f["hex"][:80]}...', flush=True)
    script.on('message', cb)
    script.load()
    try: proc.stdin.write(f'{user}\n{serial}\n'.encode()); proc.stdin.flush(); proc.stdin.close()
    except: pass
    try: proc.wait(timeout=120)
    except subprocess.TimeoutExpired: proc.kill()

print('=== user=alice serial=serial01 ===')
run('alice', 'serial01')
