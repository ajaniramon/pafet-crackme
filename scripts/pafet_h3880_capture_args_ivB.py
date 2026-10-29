#!/usr/bin/env python3
"""Jack IV-B: capture 0x140003880 full state INCLUDING register args rdx/r8/r9.

The previous emulation of 0x140003880 (vm_pools_evidence/
usuario_vm_h3880_fullctx_8k_alice.json) only captured rcx. All other
registers default to 0 in Unicorn replay. If the real caller passed
non-zero rdx/r8/r9, the emulated path to the final `mov [buf2 + r14*8], rsi`
diverges, since rsi is derived from rdx (the 2nd arg).

This script hooks 0x140003880 with Frida on pafet_pass8.exe, captures
rdx/r8/r9 in addition to the full ctx/buf1/buf2 state, so we can reproduce
3/3 captures and prove the earlier 1/3 was a parameter-collection gap, not
a semantic blocker.
"""
import frida, threading, os, json

EXE = os.path.abspath('pafet_pass8.exe')

AGENT = r"""
const base = Process.enumerateModules().find(m => m.name.toLowerCase().endsWith('.exe')).base;
send({kind:'ready', base: base.toString()});

const H3880 = base.add(0x3880);

function hex(buf) {
  if (!buf) return null;
  return Array.from(new Uint8Array(buf)).map(b => b.toString(16).padStart(2,'0')).join('');
}
function safePtr(p) { try { return p.readPointer(); } catch(e){ return null; } }
function safeHex(p,n) { try { return hex(p.readByteArray(n)); } catch(e){ return null; } }

let captured = [];
let maxCaps = 5;
let idx = 0;

Interceptor.attach(H3880, {
  onEnter(args) {
    if (idx >= maxCaps) { idx++; return; }
    const rcx = this.context.rcx;
    const rdx = this.context.rdx;
    const r8  = this.context.r8;
    const r9  = this.context.r9;
    // ctx[0x190] and ctx[0x198] frequently hold buffer pointers; log them
    const buf1_ptr = safePtr(rcx.add(0x1a0));
    const buf2_ptr = safePtr(rcx.add(0x1160));
    const ev = {
      i: idx,
      rcx: rcx.toString(),
      rdx: rdx.toString(),
      r8:  r8.toString(),
      r9:  r9.toString(),
      buf1_ptr: buf1_ptr ? buf1_ptr.toString() : null,
      buf2_ptr: buf2_ptr ? buf2_ptr.toString() : null,
      entry_ctx: safeHex(rcx, 0x2000),
      entry_buf1: buf1_ptr ? safeHex(buf1_ptr, 0x1000) : null,
      entry_buf2: buf2_ptr ? safeHex(buf2_ptr, 0x4000) : null,
    };
    this.ev = ev;
    this.rcx = rcx;
    this.buf1_ptr = buf1_ptr;
    this.buf2_ptr = buf2_ptr;
    idx++;
  },
  onLeave(retval) {
    if (!this.ev) return;
    const ev = this.ev;
    ev.rax_ret = retval.toString();
    ev.exit_ctx = safeHex(this.rcx, 0x2000);
    ev.exit_buf1 = this.buf1_ptr ? safeHex(this.buf1_ptr, 0x1000) : null;
    ev.exit_buf2 = this.buf2_ptr ? safeHex(this.buf2_ptr, 0x4000) : null;
    captured.push(ev);
  }
});

const H20 = base.add(0x397239);
Interceptor.attach(H20, {
  onEnter() {
    for (const c of captured) send({kind:'cap', ev: c});
    send({kind:'done', total: idx});
  }
});
"""

def main():
    dev = frida.get_local_device()
    pid = dev.spawn([EXE], stdio='pipe')
    done = threading.Event()
    caps = []
    def on_msg(m, _):
        if m['type'] != 'send': return
        p = m['payload']
        if p.get('kind') == 'cap':
            caps.append(p['ev'])
        elif p.get('kind') == 'done':
            print(f'[frida] done, saw {p["total"]} entries, captured {len(caps)}')
            done.set()
    dev.on('output', lambda p,f,d: None)
    sess = dev.attach(pid)
    scr = sess.create_script(AGENT)
    scr.on('message', on_msg)
    scr.load()
    dev.resume(pid)
    dev.input(pid, b'alice\r\nserial01\r\n')
    done.wait(120)
    try: dev.kill(pid)
    except: pass

    out = {'user': 'alice', 'captures': caps}
    outpath = 'vm_pools_evidence/h3880_fullctx_ext_ivB.json'
    with open(outpath, 'w') as fh:
        json.dump(out, fh)
    print(f'[+] saved {outpath} ({os.path.getsize(outpath)} bytes)')
    for i, c in enumerate(caps):
        buf1_diff = c['entry_buf1'] != c['exit_buf1'] if c.get('entry_buf1') else '?'
        buf2_diff = c['entry_buf2'] != c['exit_buf2'] if c.get('entry_buf2') else '?'
        print(f'  cap#{i} rcx={c["rcx"]} rdx={c["rdx"]} r8={c["r8"]} r9={c["r9"]}')
        print(f'         buf1_changed={buf1_diff}  buf2_changed={buf2_diff}')

if __name__ == '__main__':
    main()
