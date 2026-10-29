#!/usr/bin/env python3
"""Jack V-B — Capture user-VM operand reads end-to-end via Frida.

Hooks:
  - operand reader 0x1400074d0 (onEnter: ctx+args, onLeave: rax=value)
  - resolver      0x14003ebb0  (onEnter: ch, op)
  - host 20       0x140397239  (end marker)

Correlates each operand read to the (ch, op) of the resolver call that
immediately precedes it (i.e. the current VM instruction).

Usage:
    python scripts/pafet_operand_capture_vB.py <user> [serial]
"""
import frida, threading, os, sys, json

EXE = os.path.abspath('pafet_pass8.exe')

AGENT = r"""
const mainExe = Process.enumerateModules().find(m => m.name.toLowerCase().endsWith('.exe'));
const base = mainExe.base;
send({kind:'ready', base: base.toString()});

const RESOLVER = base.add(0x3ebb0);   // 0x14003ebb0
const OPREADER = base.add(0x74d0);    // 0x1400074d0
const H20      = base.add(0x397239);  // 0x140397239

let events = [];       // chronological log
let curInstr = null;   // last resolver context: {ch, op, idx}
let instrIdx = 0;

Interceptor.attach(RESOLVER, {
  onEnter() {
    curInstr = {
      kind: 'resolver',
      idx: instrIdx++,
      ch: this.context.rdx.toInt32(),
      op: this.context.r8.toInt32(),
      ctx: this.context.rcx.toString(),
      r9: this.context.r9.toString(),
    };
    events.push(curInstr);
  }
});

Interceptor.attach(OPREADER, {
  onEnter() {
    // Snapshot args; some operand reader variants pass params in rcx/rdx/r8/r9
    this._ev = {
      kind: 'op_read',
      instr_idx: curInstr ? curInstr.idx : -1,
      ch:        curInstr ? curInstr.ch  : -1,
      op:        curInstr ? curInstr.op  : -1,
      rcx: this.context.rcx.toString(),
      rdx: this.context.rdx.toString(),
      r8:  this.context.r8.toString(),
      r9:  this.context.r9.toString(),
    };
  },
  onLeave(retval) {
    if (this._ev) {
      this._ev.rax = retval.toString();
      events.push(this._ev);
    }
  }
});

Interceptor.attach(H20, {
  onEnter() {
    const chunk = 200;
    for (let i=0; i<events.length; i+=chunk) {
      send({kind:'batch', events: events.slice(i, i+chunk)});
    }
    send({kind:'done', total: events.length});
  }
});
"""

def run(user_bytes, serial_bytes=b'serial01', timeout=180):
    dev = frida.get_local_device()
    pid = dev.spawn([EXE], stdio='pipe')
    done = threading.Event()
    collected = []
    def on_msg(m, _):
        if m['type'] != 'send': return
        p = m['payload']
        k = p.get('kind')
        if k == 'batch':
            collected.extend(p['events'])
        elif k == 'done':
            done.set()
        elif k == 'ready':
            print(f'[ready] base={p["base"]}')
    stdout_buf = []
    def on_output(p, fd, d):
        if p == pid and d: stdout_buf.append(d)
    dev.on('output', on_output)
    sess = dev.attach(pid)
    scr = sess.create_script(AGENT)
    scr.on('message', on_msg)
    scr.load()
    dev.resume(pid)
    dev.input(pid, user_bytes + b'\r\n' + serial_bytes + b'\r\n')
    done.wait(timeout)
    try: dev.kill(pid)
    except: pass
    return collected, b''.join(stdout_buf).decode('latin-1','replace')


def main():
    user = (sys.argv[1] if len(sys.argv) > 1 else 'alice').encode()
    serial = (sys.argv[2] if len(sys.argv) > 2 else 'serial01').encode()
    print(f'[*] user={user!r} serial={serial!r}')
    events, out = run(user, serial)
    print(f'[*] captured {len(events)} events')
    outfile = f'vm_pools_evidence/operands_{user.decode()}_vB.json'
    with open(outfile, 'w') as fh:
        json.dump({'user': user.decode(), 'serial': serial.decode(), 'events': events}, fh)
    print(f'[+] saved {outfile}')

    # Quick summary
    op_reads = [e for e in events if e.get('kind') == 'op_read']
    resolvers = [e for e in events if e.get('kind') == 'resolver']
    print(f'[*] resolver calls: {len(resolvers)}')
    print(f'[*] operand reads:  {len(op_reads)}')
    from collections import Counter
    rax_values = Counter(int(e['rax'],16) & 0xFFFF for e in op_reads)
    print(f'[*] unique operand values (u16 masked): {len(rax_values)}')
    # Check 0x5A
    if 0x5A in rax_values:
        print(f'[!] FOUND 0x5A in operands: {rax_values[0x5A]} occurrences')
        # Which (ch, op) consumes it?
        pairs_5a = Counter((e['ch'], e['op']) for e in op_reads if (int(e['rax'],16) & 0xFFFF) == 0x5A)
        print(f'    (ch, op) consuming 0x5A: {pairs_5a.most_common(10)}')
    else:
        print('[-] 0x5A not among u16 operands. Checking byte-level:')
        rax_bytes = Counter(int(e['rax'],16) & 0xFF for e in op_reads)
        if 0x5A in rax_bytes:
            print(f'[!] FOUND 0x5A in u8-masked operands: {rax_bytes[0x5A]} occurrences')
            pairs = Counter((e['ch'], e['op']) for e in op_reads if (int(e['rax'],16) & 0xFF) == 0x5A)
            print(f'    (ch, op) consuming 0x5A (u8): {pairs.most_common(10)}')
        else:
            print('[-] 0x5A not among u8 operand bytes either.')


if __name__ == '__main__':
    main()
