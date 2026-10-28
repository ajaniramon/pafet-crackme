#!/usr/bin/env python3
"""Dump 256 bytes around rsp, 64 at rcx, 128 at r8-deref and 128 at r9 for each
cipher-VM call (entry and exit). The diff reveals exactly where the 72-byte
plaintext is written."""
import subprocess, frida, time, sys, hashlib

EXE = r'C:\Users\Ramón\Desktop\pafet_oracle.exe'
WAIT = 90

JS = r'''
Process.setExceptionHandler(function (details) {
  try { const rdiLo = parseInt(details.context.rdi.toString(16).slice(-8), 16);
    if (rdiLo === 0xe06d7363) return false;
  } catch(e) {}
  return false;
});

const mods = Process.enumerateModules();
let MAIN=null;
for(const m of mods) if (/pafet.*\.exe$/i.test(m.name)) { MAIN=m; break; }
const BASE = MAIN.base;
const CIPHER = BASE.add(0xc0510);

function dumpHex(ptr, n) {
  try {
    const b = ptr.readByteArray(n);
    return Array.from(new Uint8Array(b)).map(x=>x.toString(16).padStart(2,'0')).join('');
  } catch(e) { return null; }
}

let callN = 0;
Interceptor.attach(CIPHER, {
  onEnter: function () {
    callN++;
    const c = this.context;
    this.n = callN;
    this.rsp = c.rsp; this.rcx = c.rcx; this.r8 = c.r8; this.r9 = c.r9;
    this.pre_stack = dumpHex(c.rsp, 384);
    this.pre_rcx = dumpHex(c.rcx, 128);
    try {
      const r8v = c.r8.readPointer();
      this.pre_r8d = dumpHex(r8v, 128);
      this.r8_val = r8v.toString();
    } catch(e) { this.pre_r8d = null; }
    this.pre_r9 = dumpHex(c.r9, 128);
    send({kind:'enter', n: callN, rsp: c.rsp.toString(), rcx: c.rcx.toString(),
          r8: c.r8.toString(), r8_val: this.r8_val, r9: c.r9.toString(),
          pre_stack: this.pre_stack, pre_rcx: this.pre_rcx, pre_r8d: this.pre_r8d, pre_r9: this.pre_r9});
  },
  onLeave: function (retval) {
    const post_stack = dumpHex(this.rsp, 384);
    const post_rcx = dumpHex(this.rcx, 128);
    let post_r8d = null;
    try { const r8v = this.r8.readPointer(); post_r8d = dumpHex(r8v, 128); } catch(e) {}
    const post_r9 = dumpHex(this.r9, 128);
    send({kind:'leave', n: this.n, post_stack, post_rcx, post_r8d, post_r9, ret: retval.toString()});
  }
});
console.log('[*] cipher-VM diff hook ready');
'''

calls = {}
def on_message(msg, data):
    if msg['type']=='send':
        p = msg['payload']
        n = p['n']
        if n not in calls: calls[n] = {}
        calls[n].update(p)

proc = subprocess.Popen([EXE], stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
try: session = frida.attach(proc.pid)
except Exception as e: print(f'[FAIL] {e}'); proc.kill(); sys.exit(1)
script = session.create_script(JS)
script.on('message', on_message)
script.load()
print(f'[*] attached pid={proc.pid}')
try: proc.stdin.write(b'\r\n\r\n'); proc.stdin.flush(); proc.stdin.close()
except: pass
try: proc.wait(timeout=WAIT)
except subprocess.TimeoutExpired: proc.kill()

NEEDLE = '3510366fbff5cb69'
# Analyze diffs
for n in sorted(calls.keys()):
    c = calls[n]
    print(f'\n=== Call #{n} ===  rsp={c["rsp"]}  rcx={c["rcx"]}  r8={c["r8"]} r8_val={c.get("r8_val","?")}  r9={c["r9"]}')
    for region in ('stack', 'rcx', 'r8d', 'r9'):
        pre  = c.get(f'pre_{region}')
        post = c.get(f'post_{region}')
        if pre is None or post is None: continue
        if pre == post:
            found_in = NEEDLE in post
            print(f'  {region}: UNCHANGED  needle_present={found_in}')
            if found_in:
                offset = post.index(NEEDLE)
                print(f'     ↳ needle @ byte offset 0x{offset//2:x} of {region}')
            continue
        # Compute diff
        changed_bytes = []
        for i in range(0, min(len(pre), len(post)), 2):
            if pre[i:i+2] != post[i:i+2]:
                changed_bytes.append(i//2)
        print(f'  {region}: {len(changed_bytes)} bytes changed')
        found_in_post = NEEDLE in post
        found_in_pre  = NEEDLE in pre
        if found_in_post and not found_in_pre:
            offset = post.index(NEEDLE)
            print(f'  !! needle @ byte offset 0x{offset//2:x} of post_{region} (introduced by this call)')
            print(f'     ctx: {post[max(0,offset-32):offset+64]}')
        if changed_bytes:
            print(f'     first changed @ 0x{changed_bytes[0]:x}  last @ 0x{changed_bytes[-1]:x}  count={len(changed_bytes)}')
