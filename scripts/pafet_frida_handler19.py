#!/usr/bin/env python3
"""Hook handler 19 directly (0x140397107). On enter and on leave, dump the full
content of Ctx.field_0x38 (a std::string MSVC: data ptr/SSO, size at +0x10,
capacity at +0x18). Also dump the cipher output buffer referenced inside
(rsp+0x30 and rsp+0x40 after the cipher-VM call)."""
import subprocess, frida, time, sys

EXE = r'C:\Users\Ramón\Desktop\pafet_oracle.exe'

JS = r'''
Process.setExceptionHandler(d => { try { if (parseInt(d.context.rdi.toString(16).slice(-8),16)===0xe06d7363) return false; } catch(e){} return false; });

const mods = Process.enumerateModules();
let MAIN=null; for(const m of mods) if (/pafet.*\.exe$/i.test(m.name)) { MAIN=m; break; }
const BASE = MAIN.base;
const H19   = BASE.add(0x397107);
const H19_RET = BASE.add(0x397234);
const CIPHER = BASE.add(0xc0510);

function hex(ptr, n) {
  try {
    const b = ptr.readByteArray(n);
    return Array.from(new Uint8Array(b)).map(x=>x.toString(16).padStart(2,'0')).join('');
  } catch(e) { return null; }
}

function readStdString(stringPtr) {
  // MSVC std::string layout:
  //   [0..0x0F] either SSO buffer or ptr
  //   [0x10]    size
  //   [0x18]    capacity
  try {
    const size = stringPtr.add(0x10).readU64().valueOf();
    const cap  = stringPtr.add(0x18).readU64().valueOf();
    const data_ptr = (cap >= 16n) ? stringPtr.readPointer() : stringPtr;
    const content = hex(data_ptr, Math.min(Number(size), 128));
    return {size: Number(size), cap: Number(cap), data_ptr: data_ptr.toString(), content: content};
  } catch(e) { return {err: e.toString()}; }
}

// Hook handler 19 entry
let h19_n = 0;
Interceptor.attach(H19, {
  onEnter: function() {
    h19_n++;
    const rdi = this.context.rdi;
    this.n = h19_n;
    this.rdi = rdi;
    const stringPtr = rdi.add(0x38);
    this.pre_str = readStdString(stringPtr);
    // Also capture [rdi+0x30] which seems to be another ptr
    try { this.pre_field30 = hex(rdi.add(0x30).readPointer(), 128); } catch(e) {}
    send({kind:'h19_enter', n: h19_n, rdi: rdi.toString(),
          pre_string: this.pre_str, pre_field30: this.pre_field30});
  },
  onLeave: function(ret) {
    const stringPtr = this.rdi.add(0x38);
    const post_str = readStdString(stringPtr);
    send({kind:'h19_leave', n: this.n, post_string: post_str});
  }
});

// Hook cipher-VM entry/exit — capture stack buffer regions used by handler 19:
// The handler sets:
//    lea rcx, [rbp+0x20]     // local scratch (zero-init)
//    lea r8,  [rsp+0x58]     // struct composed earlier
// After cipher returns, handler reads [rsp+0x30] and [rsp+0x40].
// Those are relative to rsp AT the moment of call, so AT the cipher's own
// rsp they're [rsp+0x08]..[rsp+0x18] (shadow space + 1).
let c_n = 0;
Interceptor.attach(CIPHER, {
  onEnter: function() {
    c_n++;
    this.c_n = c_n;
    this.rsp = this.context.rsp;
    // At cipher entry: caller's [rsp+0x30], [rsp+0x40] correspond to
    // (cipher's rsp) + 0x30+8, +0x40+8 — the +8 is the call's return-address
    // on the stack. Easier: dump 128B at rsp from +0 to +128.
    this.c_pre = hex(this.rsp, 128);
    this.c_rcx = this.context.rcx;
    this.c_r8  = this.context.r8;
    this.pre_rcx128 = hex(this.c_rcx, 128);
  },
  onLeave: function(ret) {
    const c_post = hex(this.rsp, 128);
    const post_rcx128 = hex(this.c_rcx, 128);
    send({kind:'cipher', n: this.c_n,
          rsp: this.rsp.toString(),
          rcx: this.c_rcx.toString(),
          r8:  this.c_r8.toString(),
          pre_stack: this.c_pre,  post_stack: c_post,
          pre_rcx:   this.pre_rcx128, post_rcx: post_rcx128});
  }
});

console.log('[*] handler19 + cipher hooks ready');
'''

events = []
def cb(msg, data):
    if msg['type']=='send':
        events.append(msg['payload'])

proc = subprocess.Popen([EXE], stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
session = frida.attach(proc.pid)
script = session.create_script(JS)
script.on('message', cb)
script.load()
print(f'[*] attached pid={proc.pid}')
proc.stdin.write(b'\r\n\r\n'); proc.stdin.flush(); proc.stdin.close()
try: proc.wait(timeout=90)
except: proc.kill()

# Save
import json
out_path = r'C:\Users\Ramón\Desktop\pafet_handler19_trace.json'
with open(out_path, 'w') as f:
    json.dump(events, f, indent=2)
print(f'[*] events={len(events)} saved to {out_path}')

# Compact print
for e in events:
    k = e['kind']
    if k == 'h19_enter':
        s = e['pre_string']
        print(f'\n=== H19 #{e["n"]} ENTER (rdi={e["rdi"]}) ===')
        print(f'    pre_string.size={s.get("size","?")} cap={s.get("cap","?")} data_ptr={s.get("data_ptr","?")}')
        print(f'    pre_string.content[:128]={s.get("content","")}')
    elif k == 'h19_leave':
        s = e['post_string']
        print(f'=== H19 #{e["n"]} LEAVE ===')
        print(f'    post_string.size={s.get("size","?")} cap={s.get("cap","?")} data_ptr={s.get("data_ptr","?")}')
        print(f'    post_string.content[:128]={s.get("content","")}')
    elif k == 'cipher':
        print(f'  cipher #{e["n"]} rsp={e["rsp"]} rcx={e["rcx"]} r8={e["r8"]}')
        # Only show first 64 bytes of each
        print(f'    pre_rcx64:  {(e["pre_rcx"] or "")[:128]}')
        print(f'    post_rcx64: {(e["post_rcx"] or "")[:128]}')
