#!/usr/bin/env python3
"""Jack XV: capture IR+atomic_pairs for 20+ SSO usernames (len <= 14).

Reuses the AGENT_SIMPLE from Jack XI; produces user_vm_ir_<label>_xv.json
compatible with run_ir_with_user_dynamic.
"""
import frida, threading, os, json, sys

HERE = os.path.dirname(os.path.abspath(__file__))
EXE = os.path.join(HERE, '..', 'pafet_pass8.exe')

AGENT_SIMPLE = r"""
const base = Process.enumerateModules().find(m => m.name.toLowerCase().endsWith('.exe')).base;
const RESOLVER = base.add(0x3ebb0);
const OPREADER = base.add(0x74d0);
const H20      = base.add(0x397239);
const ATOMIC_WRITERS = [0x3bea0, 0x15820, 0x25020, 0x14a00, 0x216d0];

let callN = 0;
let ctx = null;
let last_bytes = null;
let transitions = [];
let program = [];
let last_ch = -1;
let last_op = -1;

function poll_buffer(ch, op, src) {
  if (!ctx) return;
  try {
    const p = ctx.add(0x5e8).readPointer();
    const b = Array.from(new Uint8Array(p.readByteArray(128)))
      .map(x => x.toString(16).padStart(2,'0')).join('');
    if (b !== last_bytes) {
      transitions.push({ call: callN, ch, op, bytes: b, src });
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
  onLeave() { poll_buffer(last_ch, last_op, 'resolver_leave'); }
});

Interceptor.attach(OPREADER, {
  onLeave() { poll_buffer(last_ch, last_op, 'opreader_leave'); }
});

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


def capture(user_bytes, serial=b'serial01', timeout=120):
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
    out = []
    for i in range(len(u)):
        c = u[len(u) - 1 - i]
        out.append(((c ^ 0x5A) + 7 + 3 * i) & 0xFF)
    return bytes(out)


def identify_atomic_pairs(transitions, user, expected_output):
    L = len(user)
    if L == 0:
        return [], 0
    atomic_pairs = []
    prev_buf = bytes(64)
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
            if i == len(atomic_pairs) and curr[i] == expected_output[i]:
                atomic_pairs.append([t['ch'], t['op'], i])
            if len(atomic_pairs) == L:
                return atomic_pairs, L
        prev_buf = curr_full
    return atomic_pairs, len(atomic_pairs)


def main():
    out_dir = os.path.join(HERE, '..', 'vm_pools_evidence')
    os.makedirs(out_dir, exist_ok=True)

    # 25 SSO inputs: variety of lengths, cases, numbers, symbols
    INPUTS = [
        ('bob_len3',       b'bob'),
        ('pafet_len5',     b'pafet'),
        ('nikjoo_len6',    b'nikjoo'),
        ('hacker_len6',    b'hacker'),
        ('admin_len5',     b'admin'),
        ('test_len4',      b'test'),
        ('root_len4',      b'root'),
        ('vsec_len4',      b'vsec'),
        ('osiris_len6',    b'osiris'),
        ('arshi_len5',     b'arshi'),
        ('mozilla_len7',   b'mozilla'),
        ('A_len1',         b'A'),
        ('AA_len2',        b'AA'),
        ('AB_len2',        b'AB'),
        ('aB_len2',        b'aB'),
        ('0_len1',         b'0'),
        ('9_len1',         b'9'),
        ('und_len1',       b'_'),
        ('CAPS_len4',      b'CAPS'),
        ('123_len3',       b'123'),
        ('MixCase_len7',   b'MixCase'),
        ('xyz9_len4',      b'xyz9'),
        ('ABCDEFGH_len8',  b'ABCDEFGH'),
        ('a1b2c3_len6',    b'a1b2c3'),
        ('nikjoo2024_len10', b'nikjoo2024'),
        ('crackme_len7',   b'crackme'),
        ('solver_len6',    b'solver'),
    ]

    results = []
    for label, u in INPUTS:
        print(f'=== {label} user={u!r} len={len(u)} ===', flush=True)
        try:
            r = capture(u)
        except Exception as e:
            print(f'  ERROR: {e}')
            results.append({'label': label, 'error': str(e)})
            continue
        program = r.get('program', [])
        transitions = r.get('transitions', [])
        expected = f_user_oracle(u)
        atomic_pairs, found = identify_atomic_pairs(transitions, u, expected)
        print(f'  resolver={len(program)} transitions={len(transitions)} '
              f'atomic={found}/{len(u)}')

        program_full = []
        for i, p in enumerate(program):
            next_op = program[i + 1]['op'] if i + 1 < len(program) else 0
            program_full.append({
                'idx': p['idx'], 'ch': p['ch'], 'op': p['op'],
                'operands': [], 'next_op_encoded': next_op,
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
        out_path = os.path.join(out_dir, f'user_vm_ir_{label}_xv.json')
        with open(out_path, 'w') as fh:
            json.dump(out, fh, indent=1)
        results.append({'label': label, 'instr': len(program),
                        'atomic_found': found, 'atomic_exp': len(u)})

    print('\n=== SUMMARY ===')
    ok_cnt = 0
    for r in results:
        if 'error' in r:
            print(f'  {r["label"]}: ERROR {r["error"]}')
        else:
            ok = r['atomic_found'] == r['atomic_exp']
            if ok: ok_cnt += 1
            print(f'  {r["label"]}: {r["instr"]} instr, '
                  f'{r["atomic_found"]}/{r["atomic_exp"]} atomic [{"OK" if ok else "PARTIAL"}]')
    print(f'\n  Fully captured: {ok_cnt}/{len(results)}')


if __name__ == '__main__':
    main()
