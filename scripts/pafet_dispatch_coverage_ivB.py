#!/usr/bin/env python3
"""Jack IV-B: locate the 883 user-VM handler entries that bypass the resolver.

Previously: resolver 0x14003ebb0 captured 979 calls; 1862 total handler
entries observed; 883 dispatched outside the resolver. Hypotheses:
- tail-calls between handlers (handler A -> jmp handler_B)
- a second dispatcher parallel to the resolver
- cached fast-paths
- trampolines entering handlers from elsewhere

This script:
1. Loads the 35 known handler VAs from vm_pools_evidence/usuario_vm_handlers_full.json
2. Hooks each handler entry via Frida; logs returnAddress
3. Classifies entries: inside dispatcher (0x14003f540..0x140048925) = via
   resolver; outside = hidden entry
4. Groups hidden entries by returnAddress; disasm those sites statically
   to confirm the call/jmp mechanism

Dispatcher range from arch recon: 0x14003f540..0x140048925 (37861 B).
"""
import frida, threading, os, json, pefile, capstone

EXE = os.path.abspath('pafet_pass8.exe')
HANDLERS_JSON = 'vm_pools_evidence/usuario_vm_handlers_full.json'
DISP_LO = 0x14003f540
DISP_HI = 0x140048925

def load_handlers():
    data = json.load(open(HANDLERS_JSON))
    vas = sorted({int(va, 16) for va in data['unique_handlers']})
    return vas

AGENT_TEMPLATE = r"""
const base = Process.enumerateModules().find(m => m.name.toLowerCase().endsWith('.exe')).base;
send({kind:'ready', base: base.toString()});

const HANDLERS = __HANDLERS__;
const H20 = base.add(0x397239);

let events = [];
let perHandler = {};
let maxLog = 20000;
let total = 0;

let errCount = 0;
let errSample = null;
for (const va of HANDLERS) {
  const addr = base.add(va - 0x140000000);
  const vaCapture = va;
  Interceptor.attach(addr, {
    onEnter() {
      total++;
      if (total > maxLog) return;
      try {
        const ra_num = this.returnAddress.sub(base).toInt32();
        events.push({h: vaCapture, ra: ra_num});
        perHandler[vaCapture] = (perHandler[vaCapture] || 0) + 1;
      } catch (e) {
        errCount++;
        if (!errSample) errSample = '' + e;
      }
    }
  });
}

Interceptor.attach(H20, {
  onEnter() {
    send({kind:'reach_h20', events_len: events.length, total: total,
          errCount: errCount, errSample: errSample});
    const chunk = 100;
    let sent = 0;
    for (let i = 0; i < events.length; i += chunk) {
      send({kind:'batch', events: events.slice(i, i+chunk)});
      sent++;
    }
    send({kind:'drained', sent_batches: sent, events_len: events.length});
    send({kind:'done', total: total, perHandler: perHandler});
  }
});
"""

def run():
    handlers = load_handlers()
    print(f'[*] Hooking {len(handlers)} known handlers')
    agent = AGENT_TEMPLATE.replace(
        '__HANDLERS__',
        '[' + ', '.join(hex(v) for v in handlers) + ']'
    )
    dev = frida.get_local_device()
    pid = dev.spawn([EXE], stdio='pipe')
    done = threading.Event()
    collected = []
    result = {}
    drained = [False]
    def on_msg(m, _):
        if m['type'] != 'send': return
        p = m['payload']
        k = p.get('kind')
        if k == 'batch':
            collected.extend(p['events'])
        elif k == 'reach_h20':
            print(f'[frida] reach_h20: events_len={p["events_len"]} total={p["total"]} errCount={p.get("errCount")} errSample={p.get("errSample")}')
        elif k == 'drained':
            print(f'[frida] drained: sent_batches={p["sent_batches"]} events_len={p["events_len"]}')
            drained[0] = True
        elif k == 'done':
            result['total'] = p['total']
            result['perHandler'] = p['perHandler']
            print(f'[frida] done: total={p["total"]}')
            done.set()
    dev.on('output', lambda p,f,d: None)
    sess = dev.attach(pid)
    scr = sess.create_script(agent)
    scr.on('message', on_msg)
    scr.load()
    dev.resume(pid)
    dev.input(pid, b'alice\r\nserial01\r\n')
    done.wait(120)
    # Give extra time for any late batches
    import time
    time.sleep(2)
    try: dev.kill(pid)
    except: pass
    return collected, result

def classify(events):
    """Separate events by whether returnAddress is inside or outside dispatcher."""
    from collections import Counter
    via_dispatcher = []
    hidden = []
    for e in events:
        # ra is int (rva from base)
        ra_va = 0x140000000 + e['ra']
        if DISP_LO <= ra_va < DISP_HI:
            via_dispatcher.append(e)
        else:
            hidden.append(e)
    # Group hidden by ra_va + target handler
    hidden_sites = Counter((0x140000000 + e['ra'], e['h']) for e in hidden)
    return {
        'total_events': len(events),
        'via_dispatcher': len(via_dispatcher),
        'hidden': len(hidden),
        'hidden_unique_ra_count': len(set(0x140000000 + e['ra'] for e in hidden)),
        'top_hidden_sites': hidden_sites.most_common(20),
    }

def disasm_sites(sites):
    """For each (return_va, target_handler), disasm 16 bytes before return_va."""
    pe = pefile.PE('pafet.bin', fast_load=True)
    IMG = 0x140000000
    text = next(s for s in pe.sections if s.Name.rstrip(b'\x00')==b'.text')
    text_va = IMG + text.VirtualAddress
    tdata = text.get_data()
    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_64)
    out = []
    for (ra_va, tgt), count in sites:
        off = (ra_va - 16) - text_va
        if off < 0:
            out.append({'ra_va': hex(ra_va), 'target': hex(tgt), 'count': count, 'err': 'oob'})
            continue
        chunk = tdata[off:off+16]
        # Disasm up to ra_va; the instruction we want is right before ra_va
        last = None
        for ins in md.disasm(chunk, ra_va - 16):
            if ins.address < ra_va:
                last = ins
        if last:
            out.append({
                'ra_va': hex(ra_va),
                'target_handler': hex(tgt),
                'count': count,
                'caller_insn': f'{last.address:x}  {last.mnemonic} {last.op_str}',
                'in_dispatcher': DISP_LO <= last.address < DISP_HI,
            })
        else:
            out.append({'ra_va': hex(ra_va), 'target_handler': hex(tgt), 'count': count, 'caller_insn': None})
    return out

def main():
    events, result = run()
    print(f'[*] Captured {result.get("total")} handler entries (collected: {len(events)})')
    summary = classify(events)
    print(f'[*] Via dispatcher: {summary["via_dispatcher"]} / {summary["total_events"]}')
    print(f'[*] Hidden: {summary["hidden"]} / {summary["total_events"]}')
    print(f'[*] Unique hidden return-address sites: {summary["hidden_unique_ra_count"]}')
    print(f'[*] Top hidden sites (returnAddress, target_handler, count):')
    sites_disasm = disasm_sites(summary['top_hidden_sites'])
    for s in sites_disasm:
        print(f'    ra={s["ra_va"]} -> handler={s.get("target_handler")} x{s["count"]}  insn={s.get("caller_insn")}  in_disp={s.get("in_dispatcher")}')
    # Save
    out = {
        'summary': {k:v for k,v in summary.items() if k != 'top_hidden_sites'},
        'top_hidden_sites_disasm': sites_disasm,
        'perHandler': result.get('perHandler'),
    }
    with open('vm_pools_evidence/hidden_dispatch_ivB.json', 'w') as fh:
        json.dump(out, fh, indent=2)
    print(f'[+] saved vm_pools_evidence/hidden_dispatch_ivB.json')

if __name__ == '__main__':
    main()
