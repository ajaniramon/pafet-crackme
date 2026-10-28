#!/usr/bin/env python3
"""Dump 4KB at rcx of cipher-VM pre/post. The cipher may be writing the plaintext
into a buffer at a higher offset within the Ctx structure."""
import subprocess, frida, time, sys

EXE = r'C:\Users\Ramón\Desktop\pafet_oracle.exe'

JS = r'''
Process.setExceptionHandler(d => { try { if (parseInt(d.context.rdi.toString(16).slice(-8),16)===0xe06d7363) return false; } catch(e){} return false; });
const mods = Process.enumerateModules();
let MAIN=null; for(const m of mods) if (/pafet.*\.exe$/i.test(m.name)) { MAIN=m; break; }
const CIPHER = MAIN.base.add(0xc0510);
function dumpHex(ptr, n) { try { const b = ptr.readByteArray(n); return Array.from(new Uint8Array(b)).map(x=>x.toString(16).padStart(2,'0')).join(''); } catch(e){return null;} }
let callN = 0;
Interceptor.attach(CIPHER, {
  onEnter: function() {
    callN++;
    if (callN > 1) return;  // only first call
    this.n = callN;
    this.rcx = this.context.rcx;
    this.pre = dumpHex(this.rcx, 4096);
  },
  onLeave: function(ret) {
    if (this.n !== 1) return;
    const post = dumpHex(this.rcx, 4096);
    send({kind:'first', pre: this.pre, post: post});
  }
});
'''

got = {}
def cb(msg, data):
    if msg['type']=='send' and msg['payload']['kind']=='first':
        got.update(msg['payload'])

proc = subprocess.Popen([EXE], stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
session = frida.attach(proc.pid)
script = session.create_script(JS)
script.on('message', cb)
script.load()
proc.stdin.write(b'\r\n\r\n'); proc.stdin.flush(); proc.stdin.close()
try: proc.wait(timeout=60)
except: proc.kill()

NEEDLE = '3510366fbff5cb69'
pre = got.get('pre','')
post = got.get('post','')
if pre and post:
    pre_hit = pre.find(NEEDLE)
    post_hit = post.find(NEEDLE)
    print(f'[*] rcx+0..4096: PRE  needle_offset = {pre_hit}  (bytes {pre_hit//2 if pre_hit>=0 else "-"})')
    print(f'[*] rcx+0..4096: POST needle_offset = {post_hit}  (bytes {post_hit//2 if post_hit>=0 else "-"})')
    # Show changed byte ranges
    nbytes_pre = len(pre)//2
    nbytes_post = len(post)//2
    changes = []
    for i in range(min(nbytes_pre, nbytes_post)):
        if pre[i*2:i*2+2] != post[i*2:i*2+2]: changes.append(i)
    print(f'[*] {len(changes)} bytes changed between pre and post')
    # Compress runs
    if changes:
        runs = []
        rs, re = changes[0], changes[0]
        for x in changes[1:]:
            if x <= re+2: re = x
            else: runs.append((rs, re)); rs, re = x, x
        runs.append((rs, re))
        for rs, re in runs[:30]:
            print(f'    [0x{rs:x} .. 0x{re:x}] ({re-rs+1} bytes)  pre: {pre[rs*2:(re+1)*2][:40]}...  post: {post[rs*2:(re+1)*2][:40]}...')
else:
    print('[*] no data captured')
