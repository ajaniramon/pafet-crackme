#!/usr/bin/env python3
"""JACK XXV — Full hex-VM capture, batched JS-side to avoid message-queue drops.

The hex-VM runs in ~220ms end-to-end but fires ~600K VPC reads, ~3K VPC writes,
~3K queue pushes, and a comparable number of throws. Sending per-event blows out
the Frida message queue; we buffer in a JS array and transmit once at exec_leave.
"""
import frida, threading, os, sys, json

HERE = os.path.dirname(os.path.abspath(__file__))
EXE  = os.path.join(HERE, '..', 'pafet_pass8.exe')

AGENT = r"""
const base = Process.enumerateModules().find(m => m.name.toLowerCase().endsWith('.exe')).base;

const EXECUTOR   = base.add(0x804c0);
const QUEUE_PUSH = base.add(0x4c880);
const SEC_DISP   = base.add(0x4c720);
const VPC_READ   = base.add(0x49a30);
const VPC_WRITE  = base.add(0x49af0);
const ALLOC      = base.add(0x7fa70);
const OUTPUT_BLD = base.add(0x889e0);
const THROW_FUN  = base.add(0x3a5fa0);
const PANIC      = base.add(0x49330);

// All events as plain numeric arrays for compactness. We use a global
// monotonic counter 'tick' to preserve ordering across different event types.
let tick = 0;
let vpc_reads  = [];   // [tick, pc]
let vpc_writes = [];   // [tick, pc]
let pushes     = [];   // [tick, item, K_low, K_high, counter, len]
let secdisps   = [];   // [tick, K_low, K_high]
let allocs     = [];   // [tick, rax_low, rax_high]
let outputs    = [];   // [tick]
let throws     = [];   // [tick]
let panics     = [];   // [tick, edx]
let in_executor = false;
let ctx = null;
let ctx_enter_dump = null;
let ctx_leave_dump = null;
let output_enter_dump = null;
let output_leave_dump = null;
let exec_rax = null;
let doneScheduled = false;

function hexAt(addr, len) {
  try { return Array.from(new Uint8Array(ptr(addr).readByteArray(len))).map(b => b.toString(16).padStart(2,'0')).join(''); }
  catch(e) { return null; }
}

function splitU64(np) {
  // Return [low32, high32] as regular numbers.
  const s = np.toString(16).padStart(16,'0');
  const high = parseInt(s.slice(0,8), 16);
  const low  = parseInt(s.slice(8),  16);
  return [low, high];
}

Interceptor.attach(EXECUTOR, {
  onEnter() {
    in_executor = true;
    ctx = this.context.rcx;
    output_enter_dump = hexAt(this.context.rcx, 0x80);
    try {
      ctx_enter_dump = {
        K: ctx.add(0x4b0).readU64().toString(),
        A: ctx.add(0x230).readU64().toString(),
        B: ctx.add(0x940).readU64().toString(),
        counter: ctx.add(0x4c0).readU64().toString(),
        len: ctx.add(0x4b8).readU32(),
        pc_bank: hexAt(ctx.add(0x10d0), 0x100),
      };
    } catch(e) {}
  },
  onLeave(rv) {
    in_executor = false;
    exec_rax = rv.toString();
    output_leave_dump = hexAt(ctx, 0x80);
    try {
      ctx_leave_dump = {
        K: ctx.add(0x4b0).readU64().toString(),
        A: ctx.add(0x230).readU64().toString(),
        B: ctx.add(0x940).readU64().toString(),
        counter: ctx.add(0x4c0).readU64().toString(),
        len: ctx.add(0x4b8).readU32(),
      };
    } catch(e) {}
    if (!doneScheduled) {
      doneScheduled = true;
      setTimeout(() => send({
        kind:'done',
        counts: {
          vpc_reads: vpc_reads.length, vpc_writes: vpc_writes.length,
          pushes: pushes.length, secdisps: secdisps.length,
          allocs: allocs.length, outputs: outputs.length,
          throws: throws.length, panics: panics.length,
          tick: tick
        },
        ctx_enter: ctx_enter_dump, ctx_leave: ctx_leave_dump,
        output_enter: output_enter_dump, output_leave: output_leave_dump,
        exec_rax: exec_rax,
        vpc_reads: vpc_reads, vpc_writes: vpc_writes,
        pushes: pushes, secdisps: secdisps,
        allocs: allocs, outputs: outputs,
        throws: throws, panics: panics,
      }), 500);
    }
  }
});

Interceptor.attach(VPC_READ, {
  onLeave(rv) {
    if (!in_executor) return;
    vpc_reads.push([tick++, rv.toInt32() & 0xffffffff]);
  }
});

Interceptor.attach(VPC_WRITE, {
  onEnter() {
    if (!in_executor) return;
    vpc_writes.push([tick++, this.context.rdx.toInt32() & 0xffffffff]);
  }
});

Interceptor.attach(QUEUE_PUSH, {
  onEnter() {
    if (!in_executor) return;
    const rcx = this.context.rcx;
    const edx = this.context.rdx.toInt32() & 0xffffffff;
    try {
      const K  = splitU64(rcx.add(0x4b0).readU64());
      const A  = splitU64(rcx.add(0x230).readU64());
      const B  = splitU64(rcx.add(0x940).readU64());
      const cnt = parseInt(rcx.add(0x4c0).readU64().toString(16), 16);
      const len = rcx.add(0x4b8).readU32();
      // [tick, item, K_lo, K_hi, A_lo, A_hi, B_lo, B_hi, cnt, len]
      pushes.push([tick++, edx, K[0], K[1], A[0], A[1], B[0], B[1], cnt, len]);
    } catch(e) {
      pushes.push([tick++, edx, 0, 0, 0, 0, 0, 0, 0, 0]);
    }
  }
});

Interceptor.attach(SEC_DISP, {
  onEnter() {
    if (!in_executor) return;
    try {
      const K = splitU64(this.context.rcx.add(0x4b0).readU64());
      secdisps.push([tick++, K[0], K[1]]);
    } catch(e) { secdisps.push([tick++, 0, 0]); }
  }
});

Interceptor.attach(ALLOC, {
  onLeave(rv) {
    if (!in_executor) return;
    const r = splitU64(rv);
    allocs.push([tick++, r[0], r[1]]);
  }
});

Interceptor.attach(OUTPUT_BLD, {
  onEnter() {
    if (!in_executor) return;
    outputs.push([tick++]);
  }
});

Interceptor.attach(THROW_FUN, {
  onEnter() {
    if (!in_executor) return;
    throws.push([tick++]);
  }
});

Interceptor.attach(PANIC, {
  onEnter() {
    if (!in_executor) return;
    panics.push([tick++, this.context.rdx.toInt32()]);
  }
});

setTimeout(() => {
  if (!doneScheduled) {
    doneScheduled = true;
    send({kind:'done', timeout:true, counts:{
      vpc_reads:vpc_reads.length, vpc_writes:vpc_writes.length,
      pushes:pushes.length, secdisps:secdisps.length,
      allocs:allocs.length, outputs:outputs.length,
      throws:throws.length, panics:panics.length, tick:tick
    }});
  }
}, 60000);
"""

def main():
    dev = frida.get_local_device()
    pid = dev.spawn([EXE], stdio='pipe')
    done = threading.Event()
    result = {}
    def on_msg(m, _):
        if m['type']=='send' and m['payload'].get('kind')=='done':
            result.update(m['payload']); done.set()
        elif m['type']=='error':
            print('[err]', m.get('description'), file=sys.stderr)
    dev.on('output', lambda p, f, d: None)
    sess = dev.attach(pid)
    scr  = sess.create_script(AGENT)
    scr.on('message', on_msg)
    scr.load()
    dev.resume(pid)
    dev.input(pid, b'alice\r\nserial01\r\n')
    done.wait(80)
    try: dev.kill(pid)
    except: pass
    print('COUNTS:', result.get('counts', {}))
    print('exec_rax:', result.get('exec_rax'))
    print('ctx_enter:', result.get('ctx_enter'))
    print('ctx_leave:', result.get('ctx_leave'))
    print('output_enter:', result.get('output_enter', '')[:80])
    print('output_leave:', result.get('output_leave', '')[:160])
    out_dir = os.path.join(HERE, '..', 'vm_pools_evidence')
    os.makedirs(out_dir, exist_ok=True)
    out = os.path.join(out_dir, 'hexvm_full_trace_xxv.json')
    with open(out, 'w') as fh:
        json.dump(result, fh, indent=1)
    print(f'[+] saved {out}')


if __name__ == '__main__':
    main()
