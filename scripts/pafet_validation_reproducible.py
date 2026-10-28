#!/usr/bin/env python3
"""Validation script: deterministically verify the three claims:
  (A) Plaintext baseline = sha256 "956043bd298b7234" with empty stdin to oracle.
  (B) Plaintext bytes `35 10 36 6f ...` DO NOT exist in process memory before
      the FIRST cipher-VM call (0x1400c0510), DO exist after.
  (C) The u64 at rcx+0x28 of cipher-VM is `95 0e 04 ad 23 00 9b 22` on every
      call — a universal constant independent of user/serial (confirmed
      5 input pairs).

The script runs each test and reports PASS/FAIL."""
import subprocess, frida, time, sys, hashlib

EXE_ORACLE = r'C:\Users\Ramón\Desktop\pafet_oracle.exe'
EXE_PASS8  = r'C:\Users\Ramón\Desktop\pafet_pass8.exe'
EXPECTED_PT_SHA = '956043bd298b7234'
NEEDLE_8        = '35 10 36 6f bf f5 cb 69'
EXPECTED_U64    = '950e04ad23009b22'

def claim_a():
    """A: oracle with empty stdin produces plaintext whose first 8B sha256 is 956043bd298b7234"""
    proc = subprocess.Popen([EXE_ORACLE], stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    out, err = proc.communicate(input=b'\r\n\r\n', timeout=60)
    i = out.find(b'[+] Flag: ')
    if i < 0:
        return False, 'no [+] Flag in output'
    pt = out[i+10 : i+10+72]
    sha = hashlib.sha256(pt).hexdigest()[:16]
    return sha == EXPECTED_PT_SHA, f'sha={sha} expected={EXPECTED_PT_SHA}'

def claim_b():
    """B: scan all rw memory before/after FIRST cipher-VM call."""
    JS = '''
    Process.setExceptionHandler(d => { try { if (parseInt(d.context.rdi.toString(16).slice(-8),16)===0xe06d7363) return false; } catch(e){} return false; });
    const mods = Process.enumerateModules();
    let MAIN=null; for(const m of mods) if (/pafet.*\\.exe$/i.test(m.name)) { MAIN=m; break; }
    const CIPHER = MAIN.base.add(0xc0510);
    function scan() {
      let c = 0;
      for (const r of Process.enumerateRanges('rw-')) try { c += Memory.scanSync(r.base, r.size, '%s').length; } catch(e){}
      return c;
    }
    let n = 0;
    Interceptor.attach(CIPHER, {
      onEnter: function() { n++; if (n===1) send({kind:'enter', pre: scan()}); },
      onLeave: function(ret) { if (n===1) send({kind:'leave', post: scan()}); }
    });
    ''' % NEEDLE_8
    out = {'pre': None, 'post': None}
    def cb(msg, data):
        if msg['type']=='send':
            p = msg['payload']
            if p['kind']=='enter': out['pre'] = p['pre']
            elif p['kind']=='leave': out['post'] = p['post']
    proc = subprocess.Popen([EXE_ORACLE], stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    session = frida.attach(proc.pid)
    script = session.create_script(JS)
    script.on('message', cb)
    script.load()
    proc.stdin.write(b'\r\n\r\n'); proc.stdin.flush(); proc.stdin.close()
    try: proc.wait(timeout=60)
    except: proc.kill()
    ok = (out['pre'] == 0 and out['post'] >= 1)
    return ok, f'pre={out["pre"]}  post={out["post"]}'

def claim_c():
    """C: cipher writes 950e04ad23009b22 at rcx+0x28 regardless of input."""
    JS = '''
    Process.setExceptionHandler(d => { try { if (parseInt(d.context.rdi.toString(16).slice(-8),16)===0xe06d7363) return false; } catch(e){} return false; });
    const mods = Process.enumerateModules();
    let MAIN=null; for(const m of mods) if (/pafet.*\\.exe$/i.test(m.name)) { MAIN=m; break; }
    const CIPHER = MAIN.base.add(0xc0510);
    Interceptor.attach(CIPHER, {
      onEnter: function() { this.rcx = this.context.rcx; },
      onLeave: function(ret) {
        try {
          const b = this.rcx.add(0x28).readByteArray(8);
          send({kind:'wrote', hex: Array.from(new Uint8Array(b)).map(x=>x.toString(16).padStart(2,'0')).join('')});
        } catch(e) { send({kind:'wrote', hex:'ERR'}); }
      }
    });
    '''
    inputs = [('alice','serial01'), ('bob','S2'), ('', ''), ('ramon','test123')]
    all_values = []
    for user, serial in inputs:
        proc = subprocess.Popen([EXE_PASS8], stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
        session = frida.attach(proc.pid)
        script = session.create_script(JS)
        values = []
        def cb(msg, data):
            if msg['type']=='send' and msg['payload']['kind']=='wrote':
                values.append(msg['payload']['hex'])
        script.on('message', cb)
        script.load()
        proc.stdin.write(f'{user}\n{serial}\n'.encode()); proc.stdin.flush(); proc.stdin.close()
        try: proc.wait(timeout=60)
        except: proc.kill()
        all_values.append((user, serial, values))
    ok = all(all(v == EXPECTED_U64 for v in vs) and len(vs) > 0 for u, s, vs in all_values)
    return ok, '; '.join(f'{u!r}/{s!r}: {vs}' for u, s, vs in all_values)

print('=== CLAIM (A) Oracle plaintext baseline sha256 ===')
ok, info = claim_a()
print(f'  {"PASS" if ok else "FAIL"}: {info}')

print('\n=== CLAIM (B) Plaintext ABSENT before first cipher-VM call, PRESENT after ===')
ok, info = claim_b()
print(f'  {"PASS" if ok else "FAIL"}: {info}')

print('\n=== CLAIM (C) cipher-VM writes universal constant at rcx+0x28 ===')
ok, info = claim_c()
print(f'  {"PASS" if ok else "FAIL"}: {info}')
