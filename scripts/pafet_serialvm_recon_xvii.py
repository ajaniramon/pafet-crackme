#!/usr/bin/env python3
"""Jack XVII Phase 1-2: dynamic recon of serial-VM.

Hooks:
  - executor  0x14022a120  (entry+exit): count invocations, dump args, scan ctx
  - dispatcher 0x140264a60 (entry): see how it calls into executor
  - host 20 (base+0x397239): end-of-run marker

For each executor invocation, snapshot:
  - rcx (ctx), rdx, r8, r9  at entry
  - rax at exit
  - 1KB ctx snapshot entry+exit (byte-diff reveals which fields change)

Also scan all RW memory for the expected g_serial(serial01) output after
the executor returns: expected = ARC4(key=b'\\0')(b'serial01').
"""
import frida, threading, os, json, sys
from Crypto.Cipher import ARC4

HERE = os.path.dirname(os.path.abspath(__file__))
EXE = os.path.join(HERE, '..', 'pafet_pass8.exe')

AGENT = r"""
const base = Process.enumerateModules().find(m => m.name.toLowerCase().endsWith('.exe')).base;
const EXECUTOR   = base.add(0x22a120);  // serial-VM executor
const DISPATCHER = base.add(0x264a60);  // serial-VM dispatcher
const H20        = base.add(0x397239);

function hex(buf) {
  if (!buf) return null;
  return Array.from(new Uint8Array(buf)).map(x => x.toString(16).padStart(2,'0')).join('');
}
function safe(fn, def) { try { return fn(); } catch(e) { return def; } }

let exec_calls = [];
let disp_calls = [];
let callN = 0;

Interceptor.attach(EXECUTOR, {
  onEnter() {
    callN++;
    const ctx = this.context.rcx;
    this.callN = callN;
    this.ctx = ctx;
    this.rdx = this.context.rdx.toString();
    this.r8  = this.context.r8.toString();
    this.r9  = this.context.r9.toString();
    this.rsp = this.context.rsp.toString();
    // Dump 1KB of ctx at entry
    this.ctx_entry = safe(() => hex(ctx.readByteArray(1024)), null);
    // Return address
    this.retaddr = this.returnAddress.sub(base).toString();
  },
  onLeave(retval) {
    const ctx_exit = safe(() => hex(this.ctx.readByteArray(1024)), null);
    exec_calls.push({
      n: this.callN,
      rax: retval.toString(),
      args: {rcx: this.ctx.toString(), rdx: this.rdx, r8: this.r8, r9: this.r9, rsp: this.rsp},
      retaddr_rel: this.retaddr,
      ctx_entry: this.ctx_entry,
      ctx_exit: ctx_exit,
    });
  }
});

Interceptor.attach(DISPATCHER, {
  onEnter() {
    disp_calls.push({
      n: disp_calls.length,
      rcx: this.context.rcx.toString(),
      rdx: this.context.rdx.toString(),
      r8:  this.context.r8.toString(),
      retaddr_rel: this.returnAddress.sub(base).toString(),
    });
  }
});

Interceptor.attach(H20, {
  onEnter() {
    // Scan all RW memory for the serial-VM output pattern
    // Caller will tell us what to look for via send/recv
    send({kind:'done', exec_calls: exec_calls, disp_calls: disp_calls});
  }
});
send({kind:'ready', base: base.toString()});
"""


def run(user, serial, timeout=120):
    dev = frida.get_local_device()
    pid = dev.spawn([EXE], stdio='pipe')
    result = {}
    done = threading.Event()
    def on_msg(m, _):
        if m['type'] != 'send': return
        p = m['payload']
        if p.get('kind') == 'ready':
            print(f"[ready] base={p['base']}", flush=True)
        elif p.get('kind') == 'done':
            result.update(p); done.set()
    dev.on('output', lambda p,f,d: None)
    sess = dev.attach(pid)
    scr = sess.create_script(AGENT)
    scr.on('message', on_msg)
    scr.load()
    dev.resume(pid)
    dev.input(pid, user + b'\r\n' + serial + b'\r\n')
    done.wait(timeout)
    try: dev.kill(pid)
    except: pass
    return result


def diff_ctx(entry_hex, exit_hex):
    """Return list of (offset, byte_before, byte_after) for differing bytes."""
    if not entry_hex or not exit_hex: return []
    a = bytes.fromhex(entry_hex)
    b = bytes.fromhex(exit_hex)
    diffs = []
    for i in range(min(len(a), len(b))):
        if a[i] != b[i]:
            diffs.append((i, a[i], b[i]))
    return diffs


def main():
    out_dir = os.path.join(HERE, '..', 'vm_pools_evidence')
    os.makedirs(out_dir, exist_ok=True)

    user = b'alice'
    serial = b'serial01'
    expected_output = ARC4.new(b'\0').encrypt(serial)
    print(f'=== Serial-VM recon: user={user!r}, serial={serial!r} ===')
    print(f'Expected g_serial(serial01) = {expected_output.hex()}')

    r = run(user, serial)
    exec_calls = r.get('exec_calls', [])
    disp_calls = r.get('disp_calls', [])

    print(f'\nExecutor 0x14022a120 invocations: {len(exec_calls)}')
    print(f'Dispatcher 0x140264a60 invocations: {len(disp_calls)}')

    if disp_calls:
        print(f'\n=== Dispatcher calls (first 5) ===')
        for d in disp_calls[:5]:
            print(f'  n={d["n"]} rcx={d["rcx"]} rdx={d["rdx"]} retaddr=+{d["retaddr_rel"]}')

    if exec_calls:
        print(f'\n=== Executor calls (first 3 summary) ===')
        for e in exec_calls[:3]:
            diffs = diff_ctx(e['ctx_entry'], e['ctx_exit'])
            print(f'  n={e["n"]} rax={e["rax"]} rdx={e["args"]["rdx"]} r8={e["args"]["r8"]} r9={e["args"]["r9"]}')
            print(f'    retaddr=+{e["retaddr_rel"]}  ctx_diffs={len(diffs)} offsets changed')
            if diffs and len(diffs) < 50:
                offs = sorted(set(d[0] for d in diffs))
                print(f'    changed offsets: {[hex(o) for o in offs[:30]]}')

    # Try to find the expected RC4 output across any ctx snapshot
    print(f'\n=== Searching for g_serial({serial.decode()}) = {expected_output.hex()} in ctx snapshots ===')
    found_in = []
    for e in exec_calls:
        for label, snap in (('entry', e['ctx_entry']), ('exit', e['ctx_exit'])):
            if snap and expected_output.hex() in snap:
                off = snap.index(expected_output.hex()) // 2
                found_in.append((e['n'], label, off))
    if found_in:
        print(f'  FOUND in {len(found_in)} snapshots:')
        for n, label, off in found_in[:10]:
            print(f'    exec call #{n} at {label}, ctx offset 0x{off:x}')
    else:
        print(f'  NOT found in any ctx snapshot of the 1KB window.')
        print(f'  (This is expected if the serial buffer lives in a heap region outside the ctx.)')

    out_path = os.path.join(out_dir, 'serialvm_runtime_recon_xvii.json')
    with open(out_path, 'w') as fh:
        json.dump({
            'user': user.decode('latin-1'),
            'serial': serial.decode('latin-1'),
            'expected_g_serial_hex': expected_output.hex(),
            'executor_invocations': len(exec_calls),
            'dispatcher_invocations': len(disp_calls),
            'executor_calls': exec_calls[:20],  # cap for file size
            'dispatcher_calls': disp_calls[:20],
            'output_found_in_ctx': found_in,
        }, fh, indent=1)
    print(f'\n[+] saved {out_path}')


if __name__ == '__main__':
    main()
