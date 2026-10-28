#!/usr/bin/env python3
"""OPERACIÓN E: trazar escrituras REALES al buffer de s18.

Plan:
 1. Hook handler 10 entry (0x140396b2e). Grab the output slot pointer.
 2. Hook 0x14003f540 (executor) entry: inside it, when operator new is called,
    log the allocated address.
 3. For each operator new, scan memory to check if the s18 bytes appear in
    that newly-allocated region after the executor returns.
 4. Captura TODAS las llamadas a 'operator new' durante la ejecución del executor.
 5. Si identificamos EL buffer que termina teniendo los bytes de s18, hemos
    localizado el heap exacto. Luego instrumentamos para capturar quién escribe.
"""
import subprocess, frida, sys, json

EXE = r'C:\Users\Ramón\Desktop\pafet_pass8.exe'

JS = r'''
Process.setExceptionHandler(d => { try { if (parseInt(d.context.rdi.toString(16).slice(-8),16)===0xe06d7363) return false; } catch(e){} return false; });
const mods = Process.enumerateModules();
let MAIN=null; for(const m of mods) if (/pafet.*\.exe$/i.test(m.name)) { MAIN=m; break; }
const BASE = MAIN.base;
const EXEC = BASE.add(0x3f540);
const H10 = BASE.add(0x396b2e);
const OP_NEW = BASE.add(0x3a4080);

function hex(ptr, n) { try { const b = ptr.readByteArray(n); return Array.from(new Uint8Array(b)).map(x=>x.toString(16).padStart(2,'0')).join(''); } catch(e) { return null; } }

let inExecutor = false;
let allocations = [];
let h10_output_slot = null;

// Hook handler 10 to capture output slot address
Interceptor.attach(H10, {
  onEnter: function() {
    // output slot = [rbp-0x40]. But rbp here is handler 10's rbp.
    // Handler 10 does `lea rax, [rbp-0x40]; mov [rbp-0x48], rax` later.
    // At function entry, rbp is CALLER's rbp (hasn't been set up yet).
    // The handler sets rbp from main-VM dispatcher's rbp.
    // Alternative: hook AFTER the function prologue sets up rbp.
    // Actually: at main-VM dispatcher entry, rbp is set. Handler 10 inherits.
    // Easier: hook the `call 0x14003f540` instruction directly.
  }
});

// Hook the call instruction at 0x140396bbb (just before calling the executor)
// This gives us the rsp+0x58 struct ptr and its [rbp-0x40] slot.
const CALL_SITE = BASE.add(0x396bbb);
Interceptor.attach(CALL_SITE, {
  onEnter: function() {
    const c = this.context;
    // At this point, r8 = &struct_ptr, rcx = &buf_local
    // struct_ptr[4] (at offset 0x20) = &[rbp-0x40] where the output goes
    try {
      const struct_ptr = c.r8;
      const slot_4 = struct_ptr.add(0x20).readPointer();
      h10_output_slot = slot_4;
      send({kind:'h10_setup', struct_ptr: struct_ptr.toString(), output_slot: slot_4.toString()});
    } catch(e) {}
  }
});

// Hook executor entry
Interceptor.attach(EXEC, {
  onEnter: function() {
    inExecutor = true;
    allocations = [];
  },
  onLeave: function() {
    inExecutor = false;
    // After return, check which allocations contain any s18-like data
    // (we don't know target bytes yet; just send all alloc info)
    send({kind:'exec_done', allocs: allocations});
    // Also read the output std::string descriptor at h10_output_slot
    if (h10_output_slot) {
      const desc = hex(h10_output_slot, 32);
      send({kind:'output_descriptor', slot: h10_output_slot.toString(), desc: desc});
      // Interpret: if cap >= 16, data_ptr = [slot]
      try {
        const size = h10_output_slot.add(0x10).readU64().valueOf();
        const cap  = h10_output_slot.add(0x18).readU64().valueOf();
        const data_ptr = (cap >= 16n) ? h10_output_slot.readPointer() : h10_output_slot;
        const content = hex(data_ptr, Math.min(Number(size), 64));
        send({kind:'s18_data', data_ptr: data_ptr.toString(), size: Number(size), cap: Number(cap), content: content});
      } catch(e) {}
    }
  }
});

// Hook operator new
Interceptor.attach(OP_NEW, {
  onEnter: function() {
    if (!inExecutor) return;
    this.size = this.context.rcx.toUInt32();
  },
  onLeave: function(retval) {
    if (this.size === undefined) return;
    allocations.push({size: this.size, addr: retval.toString()});
  }
});

console.log('[*] hooks ready');
'''

def run(user, serial='0'):
    proc = subprocess.Popen([EXE], stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    try: session = frida.attach(proc.pid)
    except Exception as e: print(f'FAIL {e}'); proc.kill(); return {}
    script = session.create_script(JS)
    results = {'user': user}
    def cb(msg, data):
        if msg['type']=='send':
            p = msg['payload']
            k = p['kind']
            if k not in results:
                results[k] = p
            elif isinstance(results[k], list):
                results[k].append(p)
            else:
                results[k] = [results[k], p]
    script.on('message', cb)
    script.load()
    try: proc.stdin.write(f'{user}\n{serial}\n'.encode()); proc.stdin.flush(); proc.stdin.close()
    except: pass
    try: proc.wait(timeout=60)
    except subprocess.TimeoutExpired: proc.kill()
    return results

for u in ['alice', 'bob', 'ab', 'a', 'AA']:
    print(f'\n=== user={u!r} ===')
    r = run(u)
    print(f'  h10_setup: {r.get("h10_setup", {})}')
    print(f'  s18_data: {r.get("s18_data", {})}')
    exec_done = r.get('exec_done')
    if exec_done:
        if isinstance(exec_done, list):
            for e in exec_done[:2]:
                print(f'  allocs ({len(e["allocs"])}): {e["allocs"][:5]}')
        else:
            print(f'  allocs ({len(exec_done["allocs"])}): {exec_done["allocs"][:5]}')
    desc = r.get('output_descriptor', {})
    if desc:
        print(f'  descriptor: {desc}')
