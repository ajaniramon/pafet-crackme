#!/usr/bin/env python3
"""Jack XI — Unified capture: IR (resolver sequence) + atomic byte-writer pairs
for a given username. Produces a JSON compatible with run_ir_with_user_dynamic.

The atomic byte-writer pairs are detected by watching the output buffer at
[*ctx+0x5e8]; whenever a new input byte becomes present (NOT a reversed-ASCII
copy), the (ch, op) just executed is recorded as the atomic writer for that
byte position.

Output JSON structure:
  {
    "user": "...",
    "serial": "...",
    "atomic_pairs": [[ch, op, byte_index], ...],  # byte_index is 0..len(user)-1
    "program": [{idx, ch, op, operands, next_op_encoded}, ...]
  }
"""
import frida, threading, os, json, sys

HERE = os.path.dirname(os.path.abspath(__file__))
EXE = os.path.join(HERE, '..', 'pafet_pass8.exe')

AGENT = r"""
const base = Process.enumerateModules().find(m => m.name.toLowerCase().endsWith('.exe')).base;
const RESOLVER = base.add(0x3ebb0);
const OPREADER = base.add(0x74d0);
const H20      = base.add(0x397239);

let callN = 0;
let ctx = null;
let last_bytes = null;
let transitions = [];
let program = [];
let last_op_rax = -1;

Interceptor.attach(RESOLVER, {
  onEnter() {
    callN++;
    const r_ctx = this.context.rcx;
    const r_ch  = this.context.rdx.toInt32();
    const r_op  = this.context.r8.toInt32();
    if (!ctx) ctx = r_ctx;
    this.callN = callN;
    this.ch = r_ch;
    this.op = r_op;
    try {
      const p = ctx.add(0x5e8).readPointer();
      const b = Array.from(new Uint8Array(p.readByteArray(64)))
        .map(x => x.toString(16).padStart(2,'0')).join('');
      if (b !== last_bytes) {
        transitions.push({
          call: callN,
          ch:   r_ch,
          op:   r_op,
          bytes_before: last_bytes || '',
          bytes_after:  b,
        });
        last_bytes = b;
      }
    } catch(e) {}
  },
  onLeave(retval) {
    // retval of resolver is the handler; op_read returns the NEXT opcode
    // but we need the operand reader's rax, not the resolver's. The threaded
    // code property uses op_read's return. We capture it separately below.
  }
});

// Capture operand reader to collect operands and the next_op_encoded
let pending_operand = null;
Interceptor.attach(OPREADER, {
  onEnter(args) { this.active = true; },
  onLeave(retval) {
    if (this.active) {
      last_op_rax = retval.toInt32();
    }
  }
});

Interceptor.attach(H20, {
  onEnter() {
    send({kind:'done', transitions: transitions, total: callN});
  }
});
"""


# Simpler: we don't actually need operand reader hook for THIS fork's goal.
# We just need the IR (ch, op per resolver call) + atomic transitions.
# Build the IR trace by hooking only the resolver.

AGENT_SIMPLE = r"""
const base = Process.enumerateModules().find(m => m.name.toLowerCase().endsWith('.exe')).base;
const RESOLVER = base.add(0x3ebb0);
const OPREADER = base.add(0x74d0);
const H20      = base.add(0x397239);

// Known atomic-writer handler VAs (observed in alice): poll on entry+leave
// of these specifically — they are where the output bytes are produced.
const ATOMIC_WRITERS = [0x3bea0, 0x15820, 0x25020, 0x14a00, 0x216d0];

let callN = 0;
let ctx = null;
let last_bytes = null;
let transitions = [];
let program = [];

// Record the (ch, op) context from the most recent resolver call.
let last_ch = -1;
let last_op = -1;

function poll_buffer(ch, op, src) {
  if (!ctx) return;
  try {
    const p = ctx.add(0x5e8).readPointer();
    const b = Array.from(new Uint8Array(p.readByteArray(128)))
      .map(x => x.toString(16).padStart(2,'0')).join('');
    if (b !== last_bytes) {
      transitions.push({
        call: callN,
        ch: ch, op: op,
        bytes: b, src: src,
      });
      last_bytes = b;
    }
  } catch(e) {}
}

Interceptor.attach(RESOLVER, {
  onEnter() {
    callN++;
    const r_ctx = this.context.rcx;
    last_ch = this.context.rdx.toInt32();
    last_op = this.context.r8.toInt32();
    if (!ctx) ctx = r_ctx;
    program.push({idx: callN - 1, ch: last_ch, op: last_op});
    poll_buffer(last_ch, last_op, 'resolver_enter');
  },
  onLeave() {
    poll_buffer(last_ch, last_op, 'resolver_leave');
  }
});

// Dense polling on the operand reader (~1200 triggers vs 629 resolver)
Interceptor.attach(OPREADER, {
  onLeave() {
    poll_buffer(last_ch, last_op, 'opreader_leave');
  }
});

// Dense polling at the entry+leave of each known atomic-writer handler
for (const rva of ATOMIC_WRITERS) {
  try {
    Interceptor.attach(base.add(rva), {
      onEnter() { poll_buffer(last_ch, last_op, 'writer_enter_' + rva.toString(16)); },
      onLeave() { poll_buffer(last_ch, last_op, 'writer_leave_' + rva.toString(16)); }
    });
  } catch(e) {}
}

Interceptor.attach(H20, {
  onEnter() {
    send({kind:'done', program: program, transitions: transitions});
  }
});
send({kind:'ready'});
"""


def capture(user_bytes, serial=b'serial01', timeout=180):
    dev = frida.get_local_device()
    pid = dev.spawn([EXE], stdio='pipe')
    done = threading.Event(); result = {}
    def on_msg(m, _):
        if m['type'] == 'send' and m['payload'].get('kind') == 'done':
            result.update(m['payload']); done.set()
    dev.on('output', lambda p, f, d: None)
    sess = dev.attach(pid)
    scr = sess.create_script(AGENT_SIMPLE)
    scr.on('message', on_msg)
    scr.load()
    dev.resume(pid)
    dev.input(pid, user_bytes + b'\r\n' + serial + b'\r\n')
    done.wait(timeout)
    try: dev.kill(pid)
    except Exception: pass
    return result


def f_user_oracle(u):
    """f_user(c, i) = ((c XOR 0x5A) + 7 + 3*i) & 0xFF, c reversed"""
    out = []
    for i in range(len(u)):
        c = u[len(u) - 1 - i]
        out.append(((c ^ 0x5A) + 7 + 3 * i) & 0xFF)
    return bytes(out)


def identify_atomic_pairs(transitions, user, expected_output):
    """Detect atomic byte-writer pairs across the transition stream.

    Original strict rule (one byte diff per transition) misses inputs whose
    writes land between two consecutive resolver polls (common with
    repeated-byte inputs like 'a'*23 where the pipeline runs faster).

    Relaxed rule:
      - For each transition, iterate through diffs in position order.
      - For each diff that equals the next expected atomic byte, record
        the current (ch, op) as the atomic writer for that position.
      - This assumes contiguous writes within a single transition were
        made under the same (ch, op) context (sequential-handler
        hypothesis). Validity is checked downstream when the native
        interpreter runs the resulting atomic_pairs sequence byte-exact
        against the oracle.
    """
    L = len(user)
    if L == 0:
        return [], 0

    atomic_pairs = []
    prev_buf = bytes(64)  # initial zero
    for t in transitions:
        bytes_hex = t.get('bytes', '')
        if not bytes_hex:
            continue
        curr_full = bytes.fromhex(bytes_hex)
        if len(curr_full) < L:
            continue
        curr = curr_full[:L]
        prev = prev_buf[:L]
        diffs = [i for i in range(L) if prev[i] != curr[i]]
        for i in sorted(diffs):
            # Only accept writes that advance the sequential byte position
            # and match the oracle. This guards against intermediate
            # non-atomic states (e.g. reversed-ASCII copy stage).
            if i == len(atomic_pairs) and curr[i] == expected_output[i]:
                atomic_pairs.append([t['ch'], t['op'], i])
            if len(atomic_pairs) == L:
                return atomic_pairs, L
        prev_buf = curr_full

    return atomic_pairs, len(atomic_pairs)


def main():
    out_dir = os.path.join(HERE, '..', 'vm_pools_evidence')
    os.makedirs(out_dir, exist_ok=True)

    INPUTS = [
        ('empty', b''),
        ('a_len1', b'a'),
        ('alice_len5', b'alice'),
        ('ramon_len5', b'ramon'),
        ('alice123_len8', b'alice123'),
        ('ramonbarcelona_len14', b'ramonbarcelona'),
        ('a_x23', b'a' * 23),
        ('a_x24', b'a' * 24),
        ('a_x25', b'a' * 25),
    ]

    results = {}
    for label, u in INPUTS:
        print(f'\n=== Capturing {label} (user={u!r}, len={len(u)}) ===', flush=True)
        try:
            r = capture(u)
        except Exception as e:
            print(f'  ERROR: {e}', flush=True)
            results[label] = {'error': str(e)}
            continue

        program = r.get('program', [])
        transitions = r.get('transitions', [])
        print(f'  resolver calls: {len(program)}')
        print(f'  buffer transitions: {len(transitions)}')

        expected = f_user_oracle(u)
        atomic_pairs, found = identify_atomic_pairs(transitions, u, expected)
        print(f'  expected f_user: {expected.hex()}')
        print(f'  atomic byte-writer pairs identified: {len(atomic_pairs)} / {len(u)}')
        for ap in atomic_pairs:
            print(f'    byte {ap[2]}: (ch={ap[0]}, op={ap[1]})')

        # Compute next_op_encoded from the program sequence
        # Since we don't capture op_reader separately, derive it from the sequence
        # of consecutive resolver (ch, op) pairs: next_op_encoded of instr i = op of instr i+1.
        program_full = []
        for i, p in enumerate(program):
            next_op = program[i + 1]['op'] if i + 1 < len(program) else 0
            program_full.append({
                'idx': p['idx'],
                'ch': p['ch'],
                'op': p['op'],
                'operands': [],
                'next_op_encoded': next_op,
            })

        out = {
            'user': u.decode('latin-1'),
            'len': len(u),
            'serial': 'serial01',
            'expected_f_user_hex': expected.hex(),
            'atomic_pairs': atomic_pairs,
            'atomic_pairs_found': found,
            'program': program_full,
            'transitions_count': len(transitions),
        }
        out_path = os.path.join(out_dir, f'user_vm_ir_{label}_xi.json')
        with open(out_path, 'w') as fh:
            json.dump(out, fh, indent=1)
        print(f'  saved {out_path}')
        results[label] = {
            'instructions': len(program),
            'atomic_found': found,
            'atomic_expected': len(u),
        }

    print('\n=== SUMMARY ===')
    for label, info in results.items():
        if 'error' in info:
            print(f'  {label}: ERROR {info["error"]}')
        else:
            ok = 'OK' if info['atomic_found'] == info['atomic_expected'] else 'PARTIAL'
            print(f'  {label}: {info["instructions"]} instr, '
                  f'{info["atomic_found"]}/{info["atomic_expected"]} atomic pairs [{ok}]')


if __name__ == '__main__':
    main()
