#!/usr/bin/env python3
"""Using pafet_pass8 (SHA256 skip only), capture the std::string at Ctx+0x38
just before opcode 20 (final CMO{ check). Vary username and serial separately
and compare the resulting plaintexts.

If the plaintext changes between credentials, the derivation IS input-dependent
and the oracle's "constant universal" conclusion was wrong (oracle also altered
flow beyond just the SHA256 skip)."""
import subprocess, frida, time, sys, hashlib, threading

EXE = r'C:\Users\Ramón\Desktop\pafet_pass8.exe'

INPUTS = [
    ('alice',   'serial01'),
    ('alice',   'serial02'),
    ('alice',   'serial03'),      # single-byte serial change
    ('alicE',   'serial01'),      # single-byte username change
    ('aliceX',  'serial01'),      # extend username
    ('alice',   'serial011'),     # extend serial
    ('A',       '0'),
    ('AA',      '0'),              # extend user
    ('A',       '00'),             # extend serial
    ('',        ''),
]

JS = r'''
Process.setExceptionHandler(d => { try { if (parseInt(d.context.rdi.toString(16).slice(-8),16)===0xe06d7363) return false; } catch(e){} return false; });

const mods = Process.enumerateModules();
let MAIN=null; for(const m of mods) if (/pafet.*\.exe$/i.test(m.name)) { MAIN=m; break; }
const BASE = MAIN.base;
const H20   = BASE.add(0x397239);
const DISP  = BASE.add(0x396990);

function hex(ptr, n) { try { const b = ptr.readByteArray(n); return Array.from(new Uint8Array(b)).map(x=>x.toString(16).padStart(2,'0')).join(''); } catch(e) { return null; } }

// Read std::string pointed to by Ctx+0x38 (handler 20 does: mov r14, [rdi+0x38];
// cmp [r14+0x10], 4). So Ctx+0x38 is itself a POINTER to a std::string object.
function readStdString(stringPtr) {
  try {
    const size = stringPtr.add(0x10).readU64().valueOf();
    const cap  = stringPtr.add(0x18).readU64().valueOf();
    const data_ptr = (cap >= 16n) ? stringPtr.readPointer() : stringPtr;
    const content = hex(data_ptr, Math.min(Number(size), 256));
    return {size: Number(size), cap: Number(cap), data_ptr: data_ptr.toString(), content: content};
  } catch(e) { return {err: e.toString()}; }
}

Interceptor.attach(H20, {
  onEnter: function() {
    // handler20: mov r14, [rdi+0x38]  — [rdi+0x38] is a pointer to std::string
    const stringPtr = this.context.rdi.add(0x38).readPointer();
    const info = readStdString(stringPtr);
    send({kind:'before_check', info: info, string_at: stringPtr.toString()});
  }
});
'''

def run_once(user, serial):
    proc = subprocess.Popen([EXE], stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    try: session = frida.attach(proc.pid)
    except Exception as e: print(f'FAIL {e}'); proc.kill(); return None
    script = session.create_script(JS)
    result = {'content': None, 'stdout': None}
    def cb(msg, data):
        if msg['type']=='send' and msg['payload']['kind']=='before_check':
            info = msg['payload']['info']
            result['content'] = info.get('content')
            result['size'] = info.get('size')
    script.on('message', cb)
    script.load()
    try:
        proc.stdin.write(f'{user}\n{serial}\n'.encode()); proc.stdin.flush(); proc.stdin.close()
    except: pass
    try: out, _ = proc.communicate(timeout=90); result['stdout'] = out
    except subprocess.TimeoutExpired: proc.kill()
    return result

print('[*] Capturing plaintext at opcode 20 entry (BEFORE CMO{ check), with pass8-only patching')
results = []
for user, serial in INPUTS:
    print(f'\n--- user={user!r} serial={serial!r} ---')
    r = run_once(user, serial)
    if r is None or r['content'] is None:
        print('    (no capture)')
        continue
    sha = hashlib.sha256(bytes.fromhex(r['content'])).hexdigest()[:16] if r['content'] else '???'
    print(f'    size={r.get("size","?")}')
    print(f'    sha16={sha}')
    print(f'    plaintext[0..72]: {r["content"][:144]}')
    results.append((user, serial, r['content'], r.get('size')))

# Diff analysis
print('\n[*] Diff matrix:')
if len(results) >= 2:
    baseline_content = results[0][2]
    for user, serial, content, size in results:
        same = (content == baseline_content)
        tag = 'SAME' if same else 'DIFFERENT'
        print(f'   {user!r:<10} {serial!r:<10} size={size}  {tag}')
    all_same = all(r[2] == baseline_content for r in results)
    print(f'\n   OVERALL: {"ALL SAME (input-independent)" if all_same else "VARIES WITH INPUT (key-dependent)"}')
