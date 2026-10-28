#!/usr/bin/env python3
"""Diff pre/post del buffer de 80B en TODAS las llamadas a 0x1401af6b0 durante cipher#3.
Para cada llamada: pre_bytes[64:72], post_bytes[64:72], invocation#, rcx/rdx/r8/r9 en entry.
Imprime solo las llamadas que modifican bytes 64-71. 3 inputs."""
import subprocess, frida, hashlib

EXE = r'C:\Users\Ramón\Desktop\pafet_pass8.exe'

JS = r'''
Process.setExceptionHandler(d => { try { if (parseInt(d.context.rdi.toString(16).slice(-8),16)===0xe06d7363) return false; } catch(e){} return false; });
const mods = Process.enumerateModules();
let MAIN=null; for(const m of mods) if (/pafet.*\.exe$/i.test(m.name)) { MAIN=m; break; }
const BASE = MAIN.base;
const CIPHER = BASE.add(0xc0510);
const FN = BASE.add(0x1af6b0);
const OP_NEW = BASE.add(0x3a4080);
const DISP = BASE.add(0x396990);

function readTail8(ptr) {
  try {
    const b = ptr.add(64).readByteArray(8);
    return Array.from(new Uint8Array(b)).map(x=>x.toString(16).padStart(2,'0')).join('');
  } catch(e) { return null; }
}

let cipherDepth = 0, cipherNum = 0;
Interceptor.attach(CIPHER, {
  onEnter: function() { cipherDepth++; if (cipherDepth === 1) cipherNum++; },
  onLeave: function() { cipherDepth--; }
});

let buf80 = null;
let fnCallCount = 0;
let fnEntryCount = 0;  // sanity: cuántas veces se LLAMA 0x1401af6b0 en cipher#3

Interceptor.attach(OP_NEW, {
  onEnter: function() { this.size = this.context.rcx.toUInt32(); },
  onLeave: function(retval) {
    if (this.size === 80 && cipherNum === 3 && buf80 === null) {
      buf80 = retval;
      send({kind:'alloc80', addr: retval.toString()});
    }
  }
});

Interceptor.attach(FN, {
  onEnter: function() {
    if (cipherNum !== 3) return;
    fnEntryCount++;
    if (buf80 === null) return;
    this.pre = readTail8(buf80);
    this.inv = fnEntryCount;
    this.rcx = this.context.rcx.toString(16);
    this.rdx = this.context.rdx.toString();
    this.r8 = this.context.r8.toString(16);
    this.r9 = this.context.r9.toString(16);
  },
  onLeave: function() {
    if (!this.pre) return;
    const post = readTail8(buf80);
    if (post && post !== this.pre) {
      fnCallCount++;
      send({kind:'modify', inv: this.inv, pre: this.pre, post: post,
            rcx: this.rcx, rdx: this.rdx, r8: this.r8, r9: this.r9});
    }
  }
});

let gotS38 = false;
Interceptor.attach(DISP, {
  onEnter: function() {
    const op = this.context.rdx.toUInt32() & 0xFF;
    if (op !== 20 || gotS38) return;
    gotS38 = true;
    this.rdi = this.context.rcx;
  },
  onLeave: function() {
    if (!this.rdi) return;
    try {
      const sp = this.rdi.add(0x38).readPointer();
      const size = sp.add(0x10).readU64().valueOf();
      const cap = sp.add(0x18).readU64().valueOf();
      const dp = (cap >= 16n) ? sp.readPointer() : sp;
      const b = dp.readByteArray(Math.min(Number(size), 72));
      const hex = Array.from(new Uint8Array(b)).map(x=>x.toString(16).padStart(2,'0')).join('');
      send({kind:'s38', content: hex});
    } catch(e) {}
    send({kind:'fn_entry_count', n: fnEntryCount, modified: fnCallCount});
  }
});
'''

def run(user, serial):
    proc = subprocess.Popen([EXE], stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    try: session = frida.attach(proc.pid)
    except Exception as e: return None
    script = session.create_script(JS)
    res = {'mods':[], 's38':None, 'alloc':None, 'fn_total':0, 'fn_modified':0, 'pid':proc.pid}
    def cb(msg, data):
        if msg['type']=='send':
            p = msg['payload']
            if p['kind']=='modify': res['mods'].append(p)
            elif p['kind']=='s38': res['s38']=p['content']
            elif p['kind']=='alloc80': res['alloc']=p['addr']
            elif p['kind']=='fn_entry_count': res['fn_total']=p['n']; res['fn_modified']=p['modified']
        elif msg['type']=='error':
            print('  ERR:', msg.get('description'), flush=True)
    script.on('message', cb)
    script.load()
    try: proc.stdin.write(f'{user}\n{serial}\n'.encode()); proc.stdin.flush(); proc.stdin.close()
    except: pass
    try: proc.wait(timeout=180)
    except subprocess.TimeoutExpired: proc.kill()
    return res

print(f'\n{"="*70}\nDIFF PRE/POST 0x1401af6b0 durante cipher#3\n{"="*70}')
INPUTS = [('alice','serial01'), ('alice','serial02'), ('bob','serial01')]
for user, serial in INPUTS:
    print(f'\n### {user}/{serial}')
    res = run(user, serial)
    if res is None:
        print('  FAILED'); continue
    s38sha = hashlib.sha256(bytes.fromhex(res['s38'])).hexdigest()[:16] if res['s38'] else None
    print(f'  pid={res["pid"]} s38sha={s38sha} alloc80={res["alloc"]}')
    print(f'  Total calls to 0x1401af6b0 in cipher#3: {res["fn_total"]}')
    print(f'  Calls that modified bytes 64-71: {res["fn_modified"]}')
    for m in res['mods'][:5]:
        print(f'    inv#{m["inv"]:5d}: pre={m["pre"]} → post={m["post"]} rcx={m["rcx"]} rdx={m["rdx"]} r8={m["r8"]} r9={m["r9"]}')
    if len(res['mods']) > 5:
        print(f'    ... {len(res["mods"])-5} more')
