#!/usr/bin/env python3
"""Capture the 24-byte canonical bytecode of each user-VM block.

Hook: materializer entry (0x140007610) + leave. On leave, snapshot the
24-byte slice [buf+block_idx*24..+24], which is the materialized bytecode
for that block. Also captures the exact pos the materializer was told to
write (rdx on entry; may be obfuscated).

Runs multiple times with the same input and compares to detect stability.
"""
import frida, json, os, threading, hashlib
EXE = os.path.abspath('pafet_pass8.exe')

AGENT = r"""
const mainExe = Process.enumerateModules().find(m => m.name.toLowerCase().endsWith('.exe'));
const base = mainExe.base;
const MAT = base.add(0x7610);
const H20 = base.add(0x397239);

function hex(b){return Array.from(new Uint8Array(b)).map(x=>x.toString(16).padStart(2,'0')).join('');}

let blocks = {};
let order = [];

Interceptor.attach(MAT, {
  onEnter() {
    this.ctx = this.context.rcx;
    this.rdx = this.context.rdx;
    this.block_idx = this.context.r8.toInt32();
  },
  onLeave() {
    try {
      const buf_p = this.ctx.add(0x1b0).readPointer();
      const buf_sz = this.ctx.add(0x1b8).readU32();
      if (this.block_idx >= 73 || this.block_idx < 0) return;
      // Capture both: the 24 bytes starting at block_idx*24 AND the whole buffer
      const slice = hex(buf_p.add(this.block_idx*24).readByteArray(24));
      const key = String(this.block_idx);
      if (!(key in blocks)) {
        blocks[key] = slice;
        order.push({idx: this.block_idx, slice: slice});
      } else if (blocks[key] !== slice) {
        // Block got re-materialized with different content
        order.push({idx: this.block_idx, slice: slice, note: 're-mat-differ'});
      }
    } catch(e) {}
  }
});

Interceptor.attach(H20, {
  onEnter() {
    send({kind: 'done', blocks: blocks, order_len: order.length,
          unique_blocks: Object.keys(blocks).length});
  }
});
send({kind: 'ready'});
"""

def run(user=b'alice', serial=b'serial01', timeout=90):
    dev = frida.get_local_device()
    pid = dev.spawn([EXE], stdio='pipe')
    done = threading.Event()
    result = {}
    def on_msg(m, _):
        if m['type']=='send' and m['payload'].get('kind')=='done':
            result.update(m['payload'])
            done.set()
    dev.on('output', lambda p,f,d: None)
    sess = dev.attach(pid)
    scr = sess.create_script(AGENT)
    scr.on('message', on_msg)
    scr.load()
    dev.resume(pid)
    dev.input(pid, user+b'\r\n'+serial+b'\r\n')
    done.wait(timeout)
    try: dev.kill(pid)
    except: pass
    return result

if __name__ == '__main__':
    # Run twice and compare
    print('=== Run 1 (alice) ===')
    r1 = run()
    print(f'  unique_blocks: {r1.get("unique_blocks")}  total_entries: {r1.get("order_len")}')
    print('=== Run 2 (alice) ===')
    r2 = run()
    print(f'  unique_blocks: {r2.get("unique_blocks")}  total_entries: {r2.get("order_len")}')
    stable = r1.get('blocks', {}) == r2.get('blocks', {})
    print(f'Blocks identical across runs: {stable}')

    blocks = r1.get('blocks', {})
    if blocks:
        canonical = bytearray(1752)
        for k, v in blocks.items():
            idx = int(k)
            canonical[idx*24:idx*24+24] = bytes.fromhex(v)
        print(f'Assembled canonical bytecode: {len(canonical)} B, sha256={hashlib.sha256(canonical).hexdigest()}')
        with open('vm_pools_evidence/user_bytecode_canonical_vi.bin', 'wb') as fh:
            fh.write(bytes(canonical))
        print('[+] saved vm_pools_evidence/user_bytecode_canonical_vi.bin')
        # Preview first few blocks
        print('First 5 blocks:')
        for i in range(5):
            print(f'  block {i}: {canonical[i*24:i*24+24].hex()}')
        # Also save as json for cross-check
        with open('vm_pools_evidence/user_blocks_vi.json', 'w') as fh:
            json.dump({'blocks': {k: v for k, v in sorted(blocks.items(), key=lambda x: int(x[0]))},
                       'stable_across_runs': stable,
                       'sha256_canonical': hashlib.sha256(bytes(canonical)).hexdigest()}, fh, indent=2)
        print('[+] saved vm_pools_evidence/user_blocks_vi.json')
