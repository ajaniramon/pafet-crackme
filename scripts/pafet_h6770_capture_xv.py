#!/usr/bin/env python3
"""Jack XV Mission B: capture runtime vectors for 0x140006770 helper.

The helper is a pure leaf fmix64 chain reading ctx[0xd8/0xce8/0xf10/0x688/
0x1e8..0x210/0x279/0x200/0x28/0x30] and writing ctx[0x28/0x210/0x279/
0xce0 (xor)/0xd8]. No external bufs.

Capture: on entry, dump ctx[0..0x1000] + rdx + r8d.
         on leave, dump ctx[0..0x1000] + rax.
Save as JSON with hex-encoded ctx snapshots.
"""
import frida, threading, os, json

HERE = os.path.dirname(os.path.abspath(__file__))
EXE = os.path.join(HERE, '..', 'pafet_pass8.exe')

AGENT = r"""
const base = Process.enumerateModules().find(m => m.name.toLowerCase().endsWith('.exe')).base;
const H6770 = base.add(0x6770);
const H20   = base.add(0x397239);

const CTX_SIZE = 0x1000;

function hex(bytes) {
  return Array.from(new Uint8Array(bytes)).map(x => x.toString(16).padStart(2,'0')).join('');
}

let vectors = [];
let max_vectors = 5;

Interceptor.attach(H6770, {
  onEnter(args) {
    if (vectors.length >= max_vectors) { this.skip = true; return; }
    this.ctx_ptr = this.context.rcx;
    this.rdx     = this.context.rdx.toString();
    this.r8      = this.context.r8.toInt32();
    this.ctx_in  = null;
    try {
      this.ctx_in = hex(this.ctx_ptr.readByteArray(CTX_SIZE));
    } catch(e) { this.ctx_in = 'ERR:' + e; }
  },
  onLeave(retval) {
    if (this.skip) return;
    let ctx_out = null;
    try { ctx_out = hex(this.ctx_ptr.readByteArray(CTX_SIZE)); }
    catch(e) { ctx_out = 'ERR:' + e; }
    vectors.push({
      ctx_ptr: this.ctx_ptr.toString(),
      rdx: this.rdx, r8: this.r8,
      rax_return: retval.toString(),
      ctx_in: this.ctx_in,
      ctx_out: ctx_out,
    });
  }
});

Interceptor.attach(H20, {
  onEnter() {
    send({kind: 'done', vectors: vectors});
  }
});
send({kind: 'ready'});
"""


def capture(user_bytes, label, max_vectors=5):
    dev = frida.get_local_device()
    pid = dev.spawn([EXE], stdio='pipe')
    done = threading.Event()
    result = {}
    def on_msg(m, _):
        if m['type'] == 'send' and m['payload'].get('kind') == 'done':
            result.update(m['payload']); done.set()
    dev.on('output', lambda p, f, d: None)
    sess = dev.attach(pid)
    scr = sess.create_script(AGENT.replace('max_vectors = 5', f'max_vectors = {max_vectors}'))
    scr.on('message', on_msg)
    scr.load()
    dev.resume(pid)
    dev.input(pid, user_bytes + b'\r\nserial01\r\n')
    done.wait(120)
    try: dev.kill(pid)
    except Exception: pass
    print(f'{label}: {len(result.get("vectors", []))} vectors captured')
    return result.get('vectors', [])


def main():
    all_vectors = []
    for label, u in [('alice', b'alice'), ('ramon', b'ramon'), ('pafet', b'pafet')]:
        v = capture(u, label, max_vectors=5)
        for vec in v:
            vec['_label'] = label
            all_vectors.append(vec)
    out = os.path.join(HERE, '..', 'vm_pools_evidence', 'h6770_vectors_xv.json')
    with open(out, 'w') as fh:
        json.dump({'vectors': all_vectors}, fh)
    print(f'\nTotal: {len(all_vectors)} vectors -> {out}')


if __name__ == '__main__':
    main()
