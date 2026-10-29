#!/usr/bin/env python3
"""Hook user-VM materializer to dump the fully-materialized bytecode buffer.

Hooks the materializer end (0x140007bda, after the final SSE XOR loop
and right before the epilogue) and reads the whole [ctx+0x1b0] buffer
after each materialize call completes. The 73 blocks of 24 bytes each
emerge gradually; captures the final state right before the user-VM
executor consumes them.

Target: the plain bytecode we could not derive offline because the
materializer uses an external buffer at [ctx+0xa8] and multi-layer XOR.
Captured once per run; the resulting 1752 bytes are the canonical
bytecode.
"""
import frida
import json
import os
import threading
import struct

EXE = os.path.abspath('pafet_pass8.exe')

AGENT = r"""
const mainExe = Process.enumerateModules().find(m => m.name.toLowerCase().endsWith('.exe'));
const base = mainExe.base;
const MAT_ENTRY = base.add(0x7610);
const RESOLVER = base.add(0x3ebb0);
const H20 = base.add(0x397239);

// Save ctx pointer on each materializer entry; on leave, snapshot the full output buffer
let last_ctx = null;
let snapshots = [];
let mat_count = 0;
let mat_entries = [];

function safeHex(p, n) {
  try { return Array.from(new Uint8Array(p.readByteArray(n))).map(b=>b.toString(16).padStart(2,'0')).join(''); }
  catch(e){ return null; }
}

Interceptor.attach(MAT_ENTRY, {
  onEnter(args) {
    this.ctx = this.context.rcx;
    this.block_pos = this.context.rdx.toInt32();  // output offset
    this.block_idx = this.context.r8.toInt32();   // 0..72
    last_ctx = this.ctx;
    mat_count++;
    if (mat_entries.length < 3) {
      mat_entries.push({call: mat_count, block_pos: this.block_pos, block_idx: this.block_idx,
                        ctx: this.ctx.toString()});
    }
  },
  onLeave(retval) {
    // Dump the current state of the output buffer
    try {
      const buf_p = this.ctx.add(0x1b0).readPointer();
      const buf_sz = this.ctx.add(0x1b8).readU32();
      if (buf_sz === 1752) {
        const data = safeHex(buf_p, 1752);
        snapshots.push({call: mat_count, block_idx: this.block_idx,
                        block_pos: this.block_pos, data: data});
      }
    } catch(e) {}
  }
});

// Also snapshot right at the first resolver call (just before VM execution starts),
// so we capture the state of the buffer that the executor is actually going to run.
let resolver_fired = false;
Interceptor.attach(RESOLVER, {
  onEnter(args) {
    if (!resolver_fired) {
      resolver_fired = true;
      try {
        const ctx = this.context.rcx;
        const buf_p = ctx.add(0x1b0).readPointer();
        const buf_sz = ctx.add(0x1b8).readU32();
        if (buf_sz === 1752) {
          send({kind: 'at_executor', buf_sz: buf_sz,
                data: safeHex(buf_p, 1752)});
        }
      } catch(e) { send({kind: 'at_executor_err', err: ''+e}); }
    }
  }
});

Interceptor.attach(H20, {
  onEnter() {
    send({kind: 'summary', mat_calls: mat_count, snap_count: snapshots.length,
          first_entries: mat_entries});
    // Last snapshot = final materialized state
    if (snapshots.length > 0) {
      send({kind: 'final', snapshot: snapshots[snapshots.length - 1]});
    }
    // Also send all unique final snapshots (dedup)
    const uniq = new Map();
    for (const s of snapshots) uniq.set(s.data, {call: s.call, block_idx: s.block_idx});
    send({kind: 'uniq', count: uniq.size});
  }
});
send({kind: 'ready'});
"""

def run(user=b'alice', serial=b'serial01', timeout=90):
    dev = frida.get_local_device()
    pid = dev.spawn([EXE], stdio='pipe')
    done = threading.Event()
    at_executor = [None]
    final = [None]
    summary = [None]
    uniq = [None]

    def on_msg(m, _):
        if m['type'] != 'send': return
        p = m['payload']
        k = p.get('kind')
        if k == 'at_executor':
            at_executor[0] = p['data']
        elif k == 'final':
            final[0] = p['snapshot']
        elif k == 'summary':
            summary[0] = p
        elif k == 'uniq':
            uniq[0] = p
            done.set()
        elif k == 'ready':
            pass
        else:
            print(f'[msg] {p}')

    def on_output(p, fd, d): pass
    dev.on('output', on_output)
    sess = dev.attach(pid)
    scr = sess.create_script(AGENT)
    scr.on('message', on_msg)
    scr.load()
    dev.resume(pid)
    dev.input(pid, user + b'\r\n' + serial + b'\r\n')
    done.wait(timeout)
    try: dev.kill(pid)
    except: pass
    return at_executor[0], final[0], summary[0], uniq[0]


if __name__ == '__main__':
    print('=== Dumping user-VM materialized bytecode for alice/serial01 ===')
    at_exec, final, summary, uniq = run()
    print(f'summary: {summary}')
    print(f'uniq: {uniq}')
    if at_exec:
        print(f'at_executor data[:60]: {at_exec[:60]}')
        print(f'[+] Found 1752-byte buffer at resolver first call')
    if final:
        print(f'final snapshot: call={final["call"]} block_idx={final["block_idx"]}')
        print(f'final data[:60]: {final["data"][:60]}')

    os.makedirs('vm_pools_evidence', exist_ok=True)
    out = {'at_executor': at_exec, 'final': final, 'summary': summary, 'uniq': uniq}
    with open('vm_pools_evidence/user_bytecode_dumped_vi.json', 'w') as fh:
        json.dump(out, fh, indent=2)
    print('[+] saved vm_pools_evidence/user_bytecode_dumped_vi.json')

    if at_exec:
        # Save the binary separately
        data = bytes.fromhex(at_exec)
        with open('vm_pools_evidence/user_bytecode_at_executor_vi.bin', 'wb') as fh:
            fh.write(data)
        print(f'[+] saved vm_pools_evidence/user_bytecode_at_executor_vi.bin ({len(data)} bytes)')
