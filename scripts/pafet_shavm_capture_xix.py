#!/usr/bin/env python3
"""Jack XIX — Phase 2: capture SHA-VM output for N usernames.

Hook EXEC_SHA (0x14027aba0) onEnter+onLeave. On leave, scan the stack
+ a wide window around rcx (the executor's ctx pointer at enter) for
the expected SHA-256(user) prefix. If found, confirm byte-exact 32-byte
match.
"""
import frida, threading, os, json, hashlib

EXE = os.path.abspath('pafet_pass8.exe')

AGENT = r"""
const base = Process.enumerateModules().find(m => m.name.toLowerCase().endsWith('.exe')).base;
const EXEC_SHA = base.add(0x27aba0);
const H20      = base.add(0x397239);

let captures = [];

Interceptor.attach(EXEC_SHA, {
  onEnter() {
    this.ctx = this.context.rcx;
    this.rsp = this.context.rsp;
  },
  onLeave() {
    // Scan a wide window around the executor's ctx for a 32-byte sequence
    // whose first byte could be a SHA output. We don't know which 32-byte
    // chunk is the hash, so we snapshot several candidate windows and
    // let the Python side scan them for the expected prefix.
    const windows = {};
    try {
      // Wide ctx dump
      windows['ctx_0_2048'] = Array.from(new Uint8Array(this.ctx.readByteArray(2048)))
        .map(x => x.toString(16).padStart(2,'0')).join('');
    } catch(e) {}
    try {
      // Dump nearby heap pages (ctx is a pointer; neighbors often hold outputs)
      windows['ctx_minus_512_plus_2048'] = Array.from(new Uint8Array(
        this.ctx.sub(512).readByteArray(2560))).map(x => x.toString(16).padStart(2,'0')).join('');
    } catch(e) {}
    try {
      // Stack dump 1 KB around rsp (sometimes outputs land on stack)
      windows['stack_rsp_1k'] = Array.from(new Uint8Array(
        this.rsp.readByteArray(1024))).map(x => x.toString(16).padStart(2,'0')).join('');
    } catch(e) {}
    captures.push({ctx: this.ctx.toString(), rsp: this.rsp.toString(), windows});
  }
});

Interceptor.attach(H20, {
  onEnter() {
    send({kind:'done', captures});
  }
});
send({kind:'ready'});
"""


def run(user):
    dev = frida.get_local_device()
    pid = dev.spawn([EXE], stdio='pipe')
    done = threading.Event()
    result = {}
    def on_msg(m, _):
        if m['type'] == 'send' and m['payload'].get('kind') == 'done':
            result.update(m['payload']); done.set()
    dev.on('output', lambda p, f, d: None)
    sess = dev.attach(pid)
    scr = sess.create_script(AGENT)
    scr.on('message', on_msg)
    scr.load()
    dev.resume(pid)
    dev.input(pid, user + b'\r\nserial01\r\n')
    done.wait(90)
    try: dev.kill(pid)
    except Exception: pass
    return result


def find_hash_in_hex(hex_blob, expected_hash_hex):
    """Return list of offsets where expected_hash_hex appears in hex_blob."""
    offs = []
    start = 0
    while True:
        i = hex_blob.find(expected_hash_hex, start)
        if i < 0: break
        if i % 2 == 0:  # aligned on a byte boundary
            offs.append(i // 2)
        start = i + 1
    return offs


USERNAMES = [b'alice', b'bob', b'ramon', b'pafet', b'test',
             b'hola', b'admin', b'root', b'_', b'',
             b'nikjoo', b'nima']


def main():
    out_dir = os.path.join('vm_pools_evidence')
    os.makedirs(out_dir, exist_ok=True)
    results = []

    for u in USERNAMES:
        expected = hashlib.sha256(u).hexdigest()
        print(f'\n=== user={u!r}  expected sha256 = {expected} ===', flush=True)
        try:
            r = run(u)
        except Exception as e:
            print(f'  ERROR: {e}')
            results.append({'user': u.decode('latin-1'), 'error': str(e)})
            continue
        captures = r.get('captures', [])
        print(f'  captures: {len(captures)}')
        found_any = False
        for ci, c in enumerate(captures):
            for win_name, hex_blob in c.get('windows', {}).items():
                offs = find_hash_in_hex(hex_blob, expected)
                if offs:
                    print(f'  cap#{ci} window={win_name} hash_found at byte_offsets={offs[:3]}')
                    found_any = True
        status = 'PASS' if found_any else 'FAIL'
        print(f'  [{status}]')
        results.append({
            'user': u.decode('latin-1'),
            'expected_sha256': expected,
            'found_in_memory': found_any,
            'num_captures': len(captures),
        })

    out = os.path.join(out_dir, 'shavm_vectors_xix.json')
    with open(out, 'w') as fh:
        json.dump({'results': results}, fh, indent=2)

    passed = sum(1 for r in results if r.get('found_in_memory'))
    total = len(results)
    print(f'\n=== SUMMARY === {passed}/{total} byte-exact SHA-256(user) found in RW memory after SHA-VM leave')


if __name__ == '__main__':
    main()
