#!/usr/bin/env python3
"""Jack V-B — Hunt the real XOR 0x5A of f_user by instrumenting the
output buffer. Approach: track every byte written to the output buffer
(ctx+0x1b0) by hooking memory writes via Frida MemoryAccessMonitor.

If the output byte N transitions from 0 to f_user(user[-1-N]) in a single
instruction, that instruction is the one applying ((c ^ 0x5A) + 7 + 3*i).
We can then inspect the handler responsible.
"""
import frida, threading, os, sys, json

EXE = os.path.abspath('pafet_pass8.exe')

AGENT = r"""
const mainExe = Process.enumerateModules().find(m => m.name.toLowerCase().endsWith('.exe'));
const base = mainExe.base;
send({kind:'ready', base: base.toString()});

const RESOLVER = base.add(0x3ebb0);
const H20      = base.add(0x397239);

// Known f_user output for alice/serial01 is 5 bytes: 46 43 40 46 4e
// We need to find the pointer where those bytes end up. Approach:
// 1) Resolve the ctx of the user-VM (= resolver's rcx), then read ctx+0x1b0 (buf_p).
//    But the buf_p changes across invocations because 0x140005b50 writes to many
//    different shadow buffers. We need the FINAL output buffer.
// 2) Hook host 20 (ctx has final output in ctx+0x38 as per architecture docs).
//    Grab the pointer at host 20 and then... we're too late to trace back.
//
// Better approach: set a memory watchpoint on the output buffer ONCE we know it.
// Alternative: hook each resolver call and record (ctx+0x38 string state). Record
// the first time the output buffer transitions from empty to non-empty.
//
// Simpler yet: at every resolver entry, read the std::string at ctx+0x38
// (the final output). Record when each byte first appears. The retaddr of
// the resolver call that triggered the byte write identifies the dispatch
// site; the subsequent handler is the writer.

let state = {output_bytes: [], seen: {}, writers: []};

function safeReadStr(p) {
  try {
    const size = p.add(0x10).readU64().toNumber();
    const cap  = p.add(0x18).readU64().toNumber();
    if (size === 0 || size > 1024) return null;
    const data = cap >= 16 ? p.readPointer() : p;
    return Array.from(new Uint8Array(data.readByteArray(size)));
  } catch(e) { return null; }
}

let instr_idx = 0;
let last_output = null;

Interceptor.attach(RESOLVER, {
  onEnter() {
    const ctx = this.context.rcx;
    const ch  = this.context.rdx.toInt32();
    const op  = this.context.r8.toInt32();
    // Read the output buffer std::string at ctx+0x38
    // (Need to deref: ctx holds pointers to std::string objects)
    try {
      const outStr = ctx.add(0x38).readPointer();
      const bytes = safeReadStr(outStr);
      if (bytes) {
        // Compare with last
        if (last_output === null || bytes.length !== last_output.length) {
          last_output = bytes.slice();
          state.writers.push({
            instr_idx: instr_idx,
            retaddr_rel: this.returnAddress.sub(base).toString(),
            ch: ch, op: op,
            new_bytes: bytes.map(b => b.toString(16).padStart(2,'0')).join(''),
            event: 'length_change',
          });
        } else {
          // Same length: check byte diffs
          const diffs = [];
          for (let i = 0; i < bytes.length; i++) {
            if (bytes[i] !== last_output[i]) diffs.push([i, last_output[i], bytes[i]]);
          }
          if (diffs.length > 0) {
            state.writers.push({
              instr_idx: instr_idx,
              retaddr_rel: this.returnAddress.sub(base).toString(),
              ch: ch, op: op,
              diffs: diffs.map(d => `[${d[0]}] 0x${d[1].toString(16)} -> 0x${d[2].toString(16)}`),
            });
            last_output = bytes.slice();
          }
        }
      }
    } catch(e) {}
    instr_idx++;
  }
});

Interceptor.attach(H20, {
  onEnter() {
    send({kind:'done', writers: state.writers, total_instrs: instr_idx});
  }
});
"""

def run(user_bytes=b'alice', serial=b'serial01', timeout=180):
    dev = frida.get_local_device()
    pid = dev.spawn([EXE], stdio='pipe')
    done = threading.Event()
    result = {}
    def on_msg(m, _):
        if m['type'] != 'send': return
        p = m['payload']
        if p.get('kind') == 'done':
            result.update(p); done.set()
        elif p.get('kind') == 'ready':
            print(f'[ready] base={p["base"]}')
    dev.on('output', lambda p,f,d: None)
    sess = dev.attach(pid)
    scr = sess.create_script(AGENT)
    scr.on('message', on_msg)
    scr.load()
    dev.resume(pid)
    dev.input(pid, user_bytes + b'\r\n' + serial + b'\r\n')
    done.wait(timeout)
    try: dev.kill(pid)
    except: pass
    return result


def main():
    print('[*] Hunting XOR 0x5A via output-buffer transitions for alice/serial01')
    res = run(b'alice', b'serial01')
    writers = res.get('writers', [])
    total = res.get('total_instrs', 0)
    print(f'[*] total instrs: {total}; output-buffer transitions: {len(writers)}')
    outfile = 'vm_pools_evidence/xor5a_hunt_vB.json'
    with open(outfile, 'w') as fh:
        json.dump({'alice_writers': writers, 'total_instrs': total}, fh, indent=2)
    print(f'[+] saved {outfile}')
    print('\nFirst 20 transitions:')
    for w in writers[:20]:
        print(f'  instr#{w["instr_idx"]:4d} ch={w["ch"]} op={w["op"]:3d}  retaddr=0x14{w["retaddr_rel"][2:]} {w.get("new_bytes") or w.get("diffs","?")}')


if __name__ == '__main__':
    main()
