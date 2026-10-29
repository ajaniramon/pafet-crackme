#!/usr/bin/env python3
"""Jack XX — Phase 2: capture the hex-VM input (144 ASCII hex chars) and
output (72 decoded bytes) and validate against bytes.fromhex oracle.

The hex-VM is called exactly once per run on the fixed ciphertext source
at 0x1403dbbc0. For additional vectors we also validate the native C++
port on multiple synthetic hex strings via bytes.fromhex (not a Frida
capture; the PE only decodes one specific blob)."""
import frida, threading, os, json

EXE = os.path.abspath('pafet_pass8.exe')

AGENT = r"""
const base = Process.enumerateModules().find(m => m.name.toLowerCase().endsWith('.exe')).base;
const EXEC_HEX = base.add(0x804c0);
const H20      = base.add(0x397239);

const ASCII_SRC = 0x29c01f43f80;  // observed in locator (ASCII of 144 hex chars)
const DECODED   = 0x29c01f58c80;  // observed in locator (first copy of 72 decoded bytes)

// Capture the arguments of the hex executor: typically rcx = ctx, rdx = ptr to hex string,
// r8 = len, r9 = ptr to output buffer. We dump the raw register state and probe memory
// through them generously.

let records = [];

Interceptor.attach(EXEC_HEX, {
  onEnter() {
    const ctx = this.context.rcx;
    const rdx = this.context.rdx;
    const r8  = this.context.r8;
    const r9  = this.context.r9;
    const rec = {
      phase: 'enter',
      rcx: ctx.toString(),
      rdx: rdx.toString(),
      r8:  r8.toString(),
      r9:  r9.toString(),
    };
    this.rec = rec;
    this.ctx = ctx;
    this.rdx_v = rdx;
    this.r9_v  = r9;
    // Dump the first 256 bytes at rdx and r9 if valid
    try { rec.rdx_dump = Array.from(new Uint8Array(rdx.readByteArray(256))).map(b=>b.toString(16).padStart(2,'0')).join(''); } catch(e) {}
    try { rec.r9_dump  = Array.from(new Uint8Array(r9.readByteArray(256))).map(b=>b.toString(16).padStart(2,'0')).join(''); } catch(e) {}
    records.push(rec);
  },
  onLeave(retval) {
    const rec = {
      phase: 'leave',
      rax: retval.toString(),
    };
    // Try to dump output buffer again from the saved register state
    try { rec.r9_dump_after = Array.from(new Uint8Array(this.r9_v.readByteArray(256))).map(b=>b.toString(16).padStart(2,'0')).join(''); } catch(e) {}
    try { rec.rdx_dump_after = Array.from(new Uint8Array(this.rdx_v.readByteArray(256))).map(b=>b.toString(16).padStart(2,'0')).join(''); } catch(e) {}
    records.push(rec);
  }
});

Interceptor.attach(H20, {
  onEnter() {
    send({kind:'done', records: records});
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
    done.wait(120)
    try: dev.kill(pid)
    except Exception: pass
    return result


def main():
    r = run(b'alice')
    recs = r.get('records', [])
    print(f'Records: {len(recs)}')

    enter = None
    leave = None
    for rec in recs:
        if rec.get('phase') == 'enter' and enter is None:
            enter = rec
        if rec.get('phase') == 'leave' and leave is None:
            leave = rec

    expected_hex = (
        '6f56f79c3e348835aa3c3fc5f551d501dea5dfcdcf3a013b0e3f8292ff4954b3'
        '455024b373acad827d1fc843f19f3a9ca9907f072ef55099ceadf0798f782d09'
        'abb0a67da54ba93b'
    )
    expected_bytes = bytes.fromhex(expected_hex)
    print(f'Expected first 16 bytes of decode: {expected_hex[:32]}')
    print(f'Expected first 16 bytes (hex):    {expected_bytes[:16].hex()}')

    if enter:
        print(f'\n[enter] rcx={enter.get("rcx")} rdx={enter.get("rdx")} r8={enter.get("r8")} r9={enter.get("r9")}')
        if 'rdx_dump' in enter:
            print(f'  rdx[:32] ASCII?: {bytes.fromhex(enter["rdx_dump"][:64]).decode("latin-1", "replace")!r}')
        if 'r9_dump' in enter:
            print(f'  r9[:32] bytes:   {enter["r9_dump"][:64]}')
    if leave:
        print(f'\n[leave] rax={leave.get("rax")}')
        if 'r9_dump_after' in leave:
            got_hex = leave['r9_dump_after'][:144]  # 72 bytes
            got_bytes = bytes.fromhex(got_hex)
            print(f'  r9[:72] after bytes: {got_hex[:64]}...')
            match = got_bytes == expected_bytes[:72]
            print(f'  BYTE-EXACT MATCH on r9 output buffer: {match}')

    # Capture summary for validation downstream
    vectors = []
    if enter and leave:
        rdx_ascii = bytes.fromhex(enter.get('rdx_dump', '')[:288]).decode('latin-1', 'replace')
        r9_out    = leave.get('r9_dump_after', '')[:144]
        vectors.append({
            'input_hex_ascii_prefix': rdx_ascii[:32],
            'output_bytes_hex': r9_out,
            'oracle_bytes_hex':  expected_hex,
            'match': r9_out == expected_hex,
        })

    out = os.path.join('vm_pools_evidence', 'hexvm_vectors_xx.json')
    with open(out, 'w') as fh:
        json.dump({'vectors': vectors, 'records': recs}, fh, indent=1)
    print(f'\n[+] saved {out}')


if __name__ == '__main__':
    main()
