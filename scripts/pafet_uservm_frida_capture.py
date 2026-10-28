#!/usr/bin/env python3
"""Frida-capture the user-VM materialized bytecode buffer by hooking the
handler-dispatch site 0x140041185 (one of the four `call rax` locations in
the user-VM dispatcher).

At that point, rcx points to the ctx. We dump:
  ctx+0x1b0: buffer pointer (materialized bytecode window)
  ctx+0x1b8: buffer size
  ctx+0x210: PC (byte offset within buffer)
  ctx+0xf40: handler jump-table pointer (248 int32 entries)
  ctx+0xf48: handler base address
  ctx+0xf50: handler XOR key
  ctx+0xf64: operand uint16[] table (248 entries)
  byte at [rsp+0x1099]: current opcode
"""
import frida, sys, os, threading, json

HERE = os.path.dirname(os.path.abspath(__file__))
EXE = os.path.join(os.path.dirname(HERE), 'pafet_pass8.exe')

AGENT = r"""
const mainExe = Process.enumerateModules().find(m => m.name.toLowerCase().endsWith('.exe'));
const base = mainExe.base;
const SITES = [0x140041185, 0x140042be3, 0x140042cb0, 0x1400479f1];
const H20   = 0x397239;  // host 20 entry
const DISP  = 0x3f540;   // dispatcher start, to capture ctx setup

function hex(buf) {
  return Array.from(new Uint8Array(buf)).map(b => b.toString(16).padStart(2,'0')).join('');
}

let state = {events: [], ctx_init: null};

Interceptor.attach(base.add(DISP), {
  onEnter(args) {
    try {
      state.ctx_init = {
        rcx: this.context.rcx.toString(),
        rdx: this.context.rdx.toString(),
        r8:  this.context.r8.toString(),
      };
    } catch(e){}
  }
});

for (const off of SITES.map(x => x - 0x140000000)) {
  Interceptor.attach(base.add(off), {
    onEnter(args) {
      try {
        const ctx = this.context.rcx; // the user-VM ctx at dispatch sites
        const buf_p = ctx.add(0x1b0).readPointer();
        const buf_sz = ctx.add(0x1b8).readU32();
        const pc = ctx.add(0x210).readU64().toNumber();
        const tbl_p = ctx.add(0xf40).readPointer();
        const base_h = ctx.add(0xf48).readPointer();
        const key = ctx.add(0xf50).readU64().toString();
        const op_p = ctx.add(0xf64);
        const sp = this.context.rsp;
        const opcode = sp.add(0x1099).readU8();
        const ebx = this.context.rbx.toInt32() & 0xff;
        let buf_snap = null;
        if (buf_sz > 0 && buf_sz < 0x10000) {
          try { buf_snap = hex(buf_p.readByteArray(Math.min(buf_sz, 256))); } catch(e){}
        }
        let tbl_snap = null;
        try { tbl_snap = hex(tbl_p.readByteArray(248*4)); } catch(e){}
        let op_tbl_snap = null;
        try { op_tbl_snap = hex(op_p.readByteArray(248*2)); } catch(e){}
        state.events.push({
          site: '0x' + off.toString(16),
          channel_ebx: ebx,
          opcode: opcode,
          pc: pc,
          buf_sz: buf_sz,
          buf_p: buf_p.toString(),
          buf_prefix256: buf_snap,
          tbl_p: tbl_p.toString(),
          tbl_snap: tbl_snap,
          base_h: base_h.toString(),
          key_xor: key,
          op_tbl_snap: op_tbl_snap,
        });
        if (state.events.length >= 500) {
          send({kind:'batch', events: state.events.slice()});
          state.events.length = 0;
        }
      } catch(e) {
        send({kind:'err', msg: '' + e});
      }
    }
  });
}

Interceptor.attach(base.add(H20), {
  onEnter(args) {
    send({kind:'batch', events: state.events.slice()});
    send({kind:'done'});
  }
});

send({kind:'ready', base: base.toString(), ctx_init: state.ctx_init});
"""


def run(user=b'alice', serial=b'serial01', timeout=120):
    dev = frida.get_local_device()
    pid = dev.spawn([EXE], stdio='pipe')
    events = []
    done = threading.Event()
    stdout = []

    def on_msg(m, _):
        if m['type'] != 'send': return
        p = m['payload']
        k = p.get('kind')
        if k == 'batch':
            events.extend(p.get('events', []))
        elif k == 'done':
            done.set()
        elif k == 'ready':
            print(f'[ready] base={p.get("base")}')
        elif k == 'err':
            print(f'[err] {p.get("msg")}')
    def on_output(p, fd, data):
        if p == pid and data:
            stdout.append(data)

    dev.on('output', on_output)
    try:
        sess = dev.attach(pid)
        scr = sess.create_script(AGENT)
        scr.on('message', on_msg)
        scr.load()
        dev.resume(pid)
        dev.input(pid, user + b'\r\n' + serial + b'\r\n')
        done.wait(timeout)
    finally:
        try: dev.kill(pid)
        except: pass
        dev.off('output', on_output)
    return events, b''.join(stdout).decode('latin-1', 'replace')


if __name__ == '__main__':
    events, stdout = run()
    print(f'[*] captured {len(events)} events')
    print(f'[*] stdout tail: {stdout[-200:]!r}')
    out = os.path.join(os.path.dirname(HERE), 'vm_pools_evidence', 'usuario_vm_runtime_capture.json')
    with open(out, 'w', encoding='utf-8') as fh:
        json.dump({'events': events, 'stdout_tail': stdout[-500:]}, fh, indent=1)
    print(f'[*] saved {out}')
    if events:
        e0 = events[0]
        print(f'\n[first event summary]')
        for k in ('site','channel_ebx','opcode','pc','buf_sz','buf_p','tbl_p','base_h','key_xor'):
            print(f'   {k:12s} = {e0.get(k)}')
        print(f'   buf prefix (first 128 chars hex): {str(e0.get("buf_prefix256"))[:128]}')
