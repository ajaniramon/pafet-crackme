#!/usr/bin/env python3
"""Jack XIII — Capture 0x140014a00 with external buffers.

Strategy:
  1. Hook entry of 0x140014a00: snapshot ctx (8 KB), stack (2 KB), regs.
  2. Hook calls to known helpers (0x140005b50, 0x140003a50) that run
     during the body: on each entry, snapshot the first argument (rcx)
     and the heap buffer it points to (4 KB window).
  3. Hook exit of 0x140014a00: snapshot final ctx + the same external
     buffers that were observed at entry.
  4. Save vectors with `extra_bufs: [{addr, size, before_hex, after_hex}, ...]`
     so Unicorn can mem_map them at their runtime addresses.

This mirrors the fix Jack III applied to 0x140003a50 but captures
MULTIPLE external buffers (xor-mask writer touches a different region
than state_tick).
"""
import frida, threading, os, json, sys, time

HERE = os.path.dirname(os.path.abspath(__file__))
REPO = os.path.dirname(HERE)
EXE = os.path.join(REPO, 'pafet_pass8.exe')
OUT = os.path.join(REPO, 'vm_pools_evidence', 'h14a00_vectors_xvi.json')

AGENT = r"""
const mainMod = Process.enumerateModules().find(m => m.name.toLowerCase().endsWith('.exe'));
const base = mainMod.base;
const H14A00  = base.add(0x14a00);  // byte-3 atomic writer
const H5B50 = base.add(0x5b50);   // xor-mask writer helper
const H3A50 = base.add(0x3a50);   // state_tick/qword writer helper
const H20   = base.add(0x397239); // host 20 (end-marker)

send({kind:'base', base: base.toString(), size: mainMod.size.toString()});

const EXTRA_BUF_SIZE = 0x1000;  // 4 KB per external buffer

// Reduce MAX to fit 2 MB handler-base dumps in a reasonable JSON size.
// After we validate N/N pass, we can raise this and recapture.

function hex(bytes) {
  const b = new Uint8Array(bytes);
  let s = '';
  for (let i = 0; i < b.length; i++) s += b[i].toString(16).padStart(2,'0');
  return s;
}
function safeHex(p, n) {
  try { return hex(p.readByteArray(n)); } catch(e) { return null; }
}
function safeHexChunked(p, n, chunk) {
  // Frida may fail on huge single reads. Read in `chunk`-byte pieces.
  chunk = chunk || 0x10000;  // 64 KB per read
  let out = '';
  let read = 0;
  while (read < n) {
    const want = Math.min(chunk, n - read);
    let piece;
    try { piece = hex(p.add(read).readByteArray(want)); }
    catch(e) { if (out.length === 0) return null; break; }
    if (!piece) break;
    out += piece;
    read += want;
  }
  return out.length ? out : null;
}

let vectors = [];
let current = null;         // active 0x140014a00 invocation
let extra_observed = {};    // addr -> {size, before_hex, before_captured_at}
let h14a00_count = 0;
const MAX = 3;              // smaller sample to keep JSON manageable with 2 MB dumps

Interceptor.attach(H14A00, {
  onEnter(args) {
    if (h14a00_count >= MAX) return;
    const ctx_ptr = this.context.rcx;
    const rsp     = this.context.rsp;
    const regs = {
      rcx: ctx_ptr.toString(),
      rdx: this.context.rdx.toString(),
      r8:  this.context.r8.toString(),
      r9:  this.context.r9.toString(),
      rbp: this.context.rbp.toString(),
      rsi: this.context.rsi.toString(),
      rdi: this.context.rdi.toString(),
      rbx: this.context.rbx.toString(),
      rsp: rsp.toString(),
    };
    const ctx_hex = safeHex(ctx_ptr, 0x2000);          // 8 KB ctx
    const stack_hex = safeHex(rsp, 0x800);             // 2 KB stack
    let stack_below = null;
    try { stack_below = safeHex(rsp.sub(0x800), 0x800); } catch(e) {}

    current = {
      regs,
      ctx_hex,
      stack_hex,
      stack_below_hex: stack_below,
      extra: {},
    };
    extra_observed = {};

    // Scan the whole ctx (8 KB) for pointer-like qwords and dump windows.
    // Use LARGER windows for pointers that look like handler-trampoline tables
    // (ctx[0xf48]) since the handler base is followed by hundreds of KB of
    // JIT-generated trampolines.
    const SMALL_WINDOW = 0x4000;    // 16 KB
    const BIG_WINDOW   = 0x200000;  // 2 MB for suspected handler tables
    const ctx_hi = ctx_ptr.add(0x2000);
    const seen = {};

    function dump_at(p, size, label) {
      if (p.isNull()) return;
      if (p.compare(ptr('0x100000')) < 0) return;
      if (p.compare(ptr('0x7FFFFFFFFFFF')) > 0) return;
      if (p.compare(ctx_ptr) >= 0 && p.compare(ctx_hi) < 0) return;
      const key_base = p.and(ptr('0xFFFFFFFFFFFFC000'));
      const key_s = key_base.toString();
      const prev = current.extra[key_s];
      if (prev && prev.size >= size) return;
      // Use Process.findRangeByAddress to clamp size to actual mapped region.
      try {
        const rng = Process.findRangeByAddress(key_base);
        if (rng) {
          const rng_end = rng.base.add(rng.size);
          const want_end = key_base.add(size);
          const effective_end = want_end.compare(rng_end) > 0 ? rng_end : want_end;
          const effective_size = effective_end.sub(key_base).toInt32();
          const reader = effective_size > 0x10000 ? safeHexChunked : safeHex;
          const bytes = reader(key_base, effective_size);
          if (bytes) {
            current.extra[key_s] = {size: bytes.length / 2, before_hex: bytes, src: label + '|' + rng.protection};
            return;
          }
        }
      } catch(e) {}
      // Fallback: original attempt
      const reader = size > 0x10000 ? safeHexChunked : safeHex;
      const bytes = reader(key_base, size);
      if (bytes) {
        current.extra[key_s] = {size: bytes.length / 2, before_hex: bytes, src: label + '|fallback'};
      }
    }

    // Handler trampoline base: ctx[0xf48]. Capture a LARGE window (256 KB).
    try { dump_at(ctx_ptr.add(0xf48).readPointer(), BIG_WINDOW, 'entry.ctx+f48.BIG'); } catch(e) {}

    // Handler table index: ctx[0xf40]
    try { dump_at(ctx_ptr.add(0xf40).readPointer(), SMALL_WINDOW, 'entry.ctx+f40'); } catch(e) {}

    // Generic ctx scan: for every qword that looks like a heap pointer,
    // capture a 16 KB window.
    for (let off = 0; off < 0x2000; off += 8) {
      try {
        const p = ctx_ptr.add(off).readPointer();
        dump_at(p, SMALL_WINDOW, 'ctx_scan+' + off.toString(16));
      } catch(e) {}
    }

  },
  onLeave(retval) {
    if (h14a00_count >= MAX || !current) return;
    h14a00_count++;
    const ctx_ptr = ptr(current.regs.rcx);
    const rsp     = ptr(current.regs.rsp);
    current.after = {
      rax: retval.toString(),
      ctx_hex: safeHex(ctx_ptr, 0x2000),
      stack_hex: safeHex(rsp, 0x800),
    };
    // Re-dump each extra buffer at its runtime address to get its AFTER state
    for (const addr_s of Object.keys(current.extra)) {
      const info = current.extra[addr_s];
      info.after_hex = safeHex(ptr(addr_s), info.size);
    }
    vectors.push(current);
    current = null;
    if (h14a00_count === MAX) {
      send({kind:'done', vectors});
    }
  }
});

function capture_extra(addr_ptr, size, src) {
  if (!current) return;
  if (addr_ptr.isNull()) return;
  const addr_s = addr_ptr.toString();
  // Dedup within the same invocation
  if (current.extra[addr_s]) return;
  // Skip if the buffer overlaps the already-captured ctx window
  const ctx_ptr = ptr(current.regs.rcx);
  const ctx_end = ctx_ptr.add(0x2000);
  if (addr_ptr.compare(ctx_ptr) >= 0 && addr_ptr.compare(ctx_end) < 0) return;
  // Skip if within the captured stack window [rsp-0x800, rsp+0x800]
  const rsp = ptr(current.regs.rsp);
  const stack_lo = rsp.sub(0x800);
  const stack_hi = rsp.add(0x800);
  if (addr_ptr.compare(stack_lo) >= 0 && addr_ptr.compare(stack_hi) < 0) return;
  // Capture
  const bytes = safeHex(addr_ptr, size);
  if (bytes) {
    current.extra[addr_s] = {size, before_hex: bytes, src};
  }
}

// H5B50 — the xor-mask writer. Jack III captures showed its args: rcx=ctx,
// but it also dereferences [ctx+0x1b0] (output buffer) and reads a splitmix-
// derived address. Capture rcx-pointed buffer plus [rcx+0x1b0] contents.
Interceptor.attach(H5B50, {
  onEnter(args) {
    if (!current) return;
    const r1 = this.context.rcx;
    const r8 = this.context.r8;
    const r9 = this.context.r9;
    capture_extra(r1, EXTRA_BUF_SIZE, 'h5b50.rcx');
    // r8/r9 are commonly literals here but might be pointers; capture if large
    try {
      if (r8.toInt32() !== r8.toUInt32() || r8.compare(ptr('0x100000')) > 0) {
        capture_extra(r8, EXTRA_BUF_SIZE, 'h5b50.r8');
      }
    } catch(e) {}
    try {
      if (r9.compare(ptr('0x100000')) > 0) {
        capture_extra(r9, EXTRA_BUF_SIZE, 'h5b50.r9');
      }
    } catch(e) {}
    // Also follow [rcx+0x1b0] -> buffer
    try {
      const p = r1.add(0x1b0).readPointer();
      capture_extra(p, EXTRA_BUF_SIZE, 'h5b50.ctx+1b0');
    } catch(e) {}
    try {
      const p = r1.add(0xa8).readPointer();
      capture_extra(p, EXTRA_BUF_SIZE, 'h5b50.ctx+a8');
    } catch(e) {}
    try {
      const p = r1.add(0x1160).readPointer();
      capture_extra(p, EXTRA_BUF_SIZE, 'h5b50.ctx+1160');
    } catch(e) {}
  }
});

Interceptor.attach(H3A50, {
  onEnter(args) {
    if (!current) return;
    const r1 = this.context.rcx;
    const r2 = this.context.rdx;
    const r8 = this.context.r8;
    capture_extra(r1, EXTRA_BUF_SIZE, 'h3a50.rcx');
    try {
      if (r2.compare(ptr('0x100000')) > 0) capture_extra(r2, EXTRA_BUF_SIZE, 'h3a50.rdx');
    } catch(e) {}
    try {
      if (r8.compare(ptr('0x100000')) > 0) capture_extra(r8, EXTRA_BUF_SIZE, 'h3a50.r8');
    } catch(e) {}
    try {
      const p = r1.add(0x1b0).readPointer();
      capture_extra(p, EXTRA_BUF_SIZE, 'h3a50.ctx+1b0');
    } catch(e) {}
    try {
      const p = r1.add(0x1160).readPointer();
      capture_extra(p, EXTRA_BUF_SIZE, 'h3a50.ctx+1160');
    } catch(e) {}
  }
});

Interceptor.attach(H20, {
  onEnter() {
    // Flush anything partial
    if (vectors.length > 0 || h14a00_count > 0) {
      send({kind:'done', vectors, h14a00_count});
    } else {
      send({kind:'done', vectors: [], h14a00_count: 0});
    }
  }
});
"""

def capture(user_bytes, serial=b'serial01', timeout=60):
    dev = frida.get_local_device()
    pid = dev.spawn([EXE], stdio='pipe')
    done = threading.Event()
    result = {}
    def on_msg(m, _):
        if m['type'] == 'send':
            p = m['payload']
            if p.get('kind') == 'base':
                result['pe_base'] = p['base']
                result['pe_size'] = p['size']
            elif p.get('kind') == 'done':
                result.update(p)
                done.set()
        elif m['type'] == 'error':
            print('[frida err]', m)
    dev.on('output', lambda p, f, d: None)
    sess = dev.attach(pid)
    scr = sess.create_script(AGENT)
    scr.on('message', on_msg)
    scr.load()
    dev.resume(pid)
    dev.input(pid, user_bytes + b'\r\n' + serial + b'\r\n')
    done.wait(timeout)
    try: dev.kill(pid)
    except: pass
    return result

def main():
    out = {}
    for label, u in [('alice', b'alice'), ('ramon', b'ramon')]:
        print(f'=== Capturing {label} ===', flush=True)
        r = capture(u, timeout=90)
        vecs = r.get('vectors', [])
        print(f'  captured {len(vecs)} 0x140014a00 invocations')
        if vecs:
            v0 = vecs[0]
            extra = v0.get('extra', {})
            print(f'  vec[0] extra bufs: {len(extra)} regions')
            for addr, info in list(extra.items())[:6]:
                print(f'    {addr} size={info["size"]} src={info["src"]}')
        out[label] = {
            'count': len(vecs),
            'vectors': vecs,
            'pe_base': r.get('pe_base'),
            'pe_size': r.get('pe_size'),
        }
    os.makedirs(os.path.dirname(OUT), exist_ok=True)
    with open(OUT, 'w') as fh:
        json.dump(out, fh)
    print(f'[+] saved {OUT}')
    print(f'    size: {os.path.getsize(OUT)} B')

if __name__ == '__main__':
    main()
