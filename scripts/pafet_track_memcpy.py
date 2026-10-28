#!/usr/bin/env python3
"""Hook ALL memcpy / string-copy functions during cipher-VM #3 and filter for
size ≈ 72. Dump src/dst/size and src content."""
import subprocess, frida, sys

EXE = r'C:\Users\Ramón\Desktop\pafet_pass8.exe'

JS = r'''
Process.setExceptionHandler(d => { try { if (parseInt(d.context.rdi.toString(16).slice(-8),16)===0xe06d7363) return false; } catch(e){} return false; });
const mods = Process.enumerateModules();
let MAIN=null; for(const m of mods) if (/pafet.*\.exe$/i.test(m.name)) { MAIN=m; break; }
const BASE = MAIN.base;
const CIPHER = BASE.add(0xc0510);

function hex(ptr, n) { try { const b = ptr.readByteArray(n); return Array.from(new Uint8Array(b)).map(x=>x.toString(16).padStart(2,'0')).join(''); } catch(e) { return null; } }

let cipherNum = 0;
let inCipher = 0;

Interceptor.attach(CIPHER, {
  onEnter: function() { inCipher++; if (inCipher === 1) cipherNum++; },
  onLeave: function() { inCipher--; }
});

// Memcpy wrapper is at 0x1403a2ff0 (basic rep movsb pattern) — may be another
// memcpy. The main one we saw is 0x1403a6720 (memset) and 0x1403a6070 (memcpy).
// Let's hook both: 0x1403a6070 is the real memcpy
const MEMCPY = BASE.add(0x3a6070);  // Guess based on prior analysis

Interceptor.attach(MEMCPY, {
  onEnter: function() {
    if (inCipher === 0) return;
    const dst = this.context.rcx;
    const src = this.context.rdx;
    const n = this.context.r8.toUInt32();
    if (n < 60 || n > 128) return;
    // Capture src and dst bytes
    const src_data = hex(src, Math.min(n, 72));
    const dst_before = hex(dst, Math.min(n, 72));
    // Look for the known plaintext prefix in src
    if (src_data && src_data.indexOf('fd2077a101acdfae') === 0) {
      send({kind:'PLAINTEXT_MEMCPY', cipher: cipherNum, rip: this.returnAddress.toString(),
            dst: dst.toString(), src: src.toString(), n: n, src_data: src_data});
    } else {
      send({kind:'other_memcpy', cipher: cipherNum, n: n, src_prefix: src_data?.slice(0, 32)});
    }
  }
});
console.log('[*] memcpy hook installed');
'''

def run(user, serial):
    proc = subprocess.Popen([EXE], stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    try: session = frida.attach(proc.pid)
    except Exception as e: print(f'FAIL {e}'); proc.kill(); return
    script = session.create_script(JS)
    plaintext_memcpy_count = {'n': 0}
    def cb(msg, data):
        if msg['type']=='send':
            p = msg['payload']
            if p['kind']=='PLAINTEXT_MEMCPY':
                plaintext_memcpy_count['n'] += 1
                print(f'  !!! PLAINTEXT MEMCPY #{plaintext_memcpy_count["n"]} cipher#{p["cipher"]} src={p["src"]} dst={p["dst"]} n={p["n"]} returnAddr={p["rip"]}', flush=True)
                print(f'      src data: {p["src_data"][:64]}', flush=True)
            else:
                pass  # too noisy
    script.on('message', cb)
    script.load()
    try: proc.stdin.write(f'{user}\n{serial}\n'.encode()); proc.stdin.flush(); proc.stdin.close()
    except: pass
    try: proc.wait(timeout=120)
    except subprocess.TimeoutExpired: proc.kill()
    print(f'Total plaintext memcpy events: {plaintext_memcpy_count["n"]}')

print('=== user=alice serial=serial01 ===')
run('alice', 'serial01')
