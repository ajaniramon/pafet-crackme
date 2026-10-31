"""JACK XXXVI: long continuous Serial execution against two independent oracles.

Order of evidence for each capture:
1. The candidate runs alone from the single Windows entry (no Unicorn, no trace).
2. Windows oracle: its recorded native trace checks every candidate boundary it
   covers, through the captured terminal (the 18th handler entry).
3. Emulated continuation oracle: original x64 from the same entry, executed by
   the existing input-only replay (pafet_state_replay.Replay), is stopped at each
   later candidate boundary and the declared roots are compared byte for byte.
   This continuation is NOT a Windows observation; its fidelity rests on the
   replay's Level-A agreement with Windows over the captured prefixes.
"""
import argparse,copy,gzip,hashlib,json,pathlib,time
import pefile
from .serial_loop import LoopSerialVMState
from .serial_continuous_validate import ROOT,read,compare_events,digest
from pafet_state_contract import load_verified,require,ContractError

OUT=ROOT/'jack_xxxvi_evidence'


def candidate(entry,limit,full_events=1200):
    s=LoopSerialVMState.from_initial_capture(entry,pefile.PE(str(ROOT/'pafet.bin')))
    s.full_events=full_events
    steps=[];failure=None
    try:
        for _ in range(limit):
            result=s.step();result.pop('ir',None);s.ir.clear()
            steps.append(copy.deepcopy(result))
        s.prepare_next_instruction()
    except ValueError as error:failure=str(error)
    return s,steps,failure


def windows_prefix(entry,events,oracle):
    """Return events covered by the Windows trace (through its terminal)."""
    events=[e for e in events if 'regions' in e]
    total=len(oracle['trace']);first=compare_events(entry,events,oracle)['boundaries']
    cut=next((i for i,row in enumerate(first) if row['boundary_found'] and row['native_instructions']==total),None)
    require(cut is not None,'Windows terminal is not a candidate boundary','coverage')
    return cut+1,compare_events(entry,events[:cut+1],oracle)


class EmulatedContinuation:
    """Original x64 from the entry; advanced only to requested boundaries."""
    def __init__(self,entry,exceptions=False):
        import unicorn
        from unicorn.x86_const import UC_X86_REG_RIP
        from pafet_state_replay import Replay
        self.replay=Replay(entry);self.uc=self.replay.uc;self.rip=UC_X86_REG_RIP
        self.count=0
        def tick(uc,address,size,data):self.count+=1
        self.uc.hook_add(unicorn.UC_HOOK_CODE,tick)
        self.base=entry['base'];self.error=None;self.eh=None
        if exceptions:
            from pafet_eh_stub import CxxDelivery
            self.eh=CxxDelivery(self.uc,self.base,self.replay.initialized.mark)

    def advance(self,rva,budget):
        import unicorn
        target=self.base+rva
        if self.uc.reg_read(self.rip)==target:return True
        start=self.count;hit=[]
        def stop(uc,address,size,data):
            if address==target and self.count>start:
                # Stopped before executing it: do not count it yet.
                hit.append(address);self.count-=1;uc.emu_stop()
        hook=self.uc.hook_add(unicorn.UC_HOOK_CODE,stop,begin=target,end=target)
        try:
            while not hit:
                if self.count-start>budget:raise RuntimeError('boundary budget exhausted')
                if self.eh is not None and self.eh.pending:
                    # Throw entry already compared (or not a boundary): deliver.
                    self.eh.deliver()
                    if self.uc.reg_read(self.rip)==target:hit.append(target)
                    continue
                self.uc.emu_start(self.uc.reg_read(self.rip),0,count=budget)
                if self.eh is not None and self.eh.pending:
                    self.count-=1
                    # The stub hook stops first at the throw entry; it is
                    # also the boundary when the candidate recorded cxx_throw.
                    if self.uc.reg_read(self.rip)==target:hit.append(target)
                elif not hit:raise RuntimeError('emulation stopped without a boundary')
        except Exception as error:
            self.error=dict(kind=getattr(error,'kind',type(error).__name__),message=str(error),
                            rip=hex(self.uc.reg_read(self.rip)),native_instructions=self.count)
            return False
        finally:
            self.uc.hook_del(hook)
            # Replay's coverage hooks log every access; keep memory bounded.
            self.replay.reads.clear();self.replay.writes.clear()
        return bool(hit) and self.uc.reg_read(self.rip)==target

    def read(self,at,size):return bytes(self.uc.mem_read(at,size))


def compare_continuation(entry,events,start,budget=5_000_000):
    native=EmulatedContinuation(entry,exceptions=True);rows=[];first=None
    for index,event in enumerate(events):
        found=native.advance(event['boundary_rva'],budget)
        row=dict(event=index,name=event['name'],native_rva=hex(event['boundary_rva']),pc=event['pc'],sp=event['sp'],
                 native_instructions=native.count,boundary_found=found,different_bytes=0)
        if not found:
            first=first or dict(classification='boundary',event=index,name=event['name'],native=native.error)
            rows.append(row);break
        if 'digest' in event:
            import hashlib
            h=hashlib.sha256()
            for at,size in event['layout']:h.update(native.read(at,size))
            if h.digest()!=event['digest']:
                row['different_bytes']=None
                first=first or dict(classification='model-digest',event=index,name=event['name'],pc=event['pc'],
                                    native_instructions=native.count)
        else:
          for slot,(at,data) in enumerate(event['regions']):
            expected=native.read(at,len(data))
            if expected!=data:
                offset=next(i for i,(x,y) in enumerate(zip(data,expected)) if x!=y)
                row['different_bytes']+=sum(x!=y for x,y in zip(data,expected))
                first=first or dict(classification='model',event=index,name=event['name'],role=event['roles'][slot],
                                    address=hex(at+offset),context_offset=hex(at+offset-entry['state']['gprs'][1]),
                                    candidate=data[offset],native=expected[offset],native_instructions=native.count)
        rows.append(row)
        if first:break
    return dict(all_events_match=first is None and len(rows)==len(events),first_divergence=first,
                compared_events=len(rows),windows_events=start,native_instructions=native.count,
                rows=[r for r in rows if r['event']>=start-1][-50:],deliveries=native.eh.deliveries[-20:] if native.eh else [],
                delivery_count=len(native.eh.deliveries) if native.eh else 0),native


def negative_controls(entry,events,cut):
    """Corrupt one emulated-only boundary (full bytes, then digest); the
    oracle must flag exactly that event. Synthetic, not failure-path coverage."""
    from .serial_loop import DigestEvent
    out=[]
    full=next((i for i in range(cut,len(events)) if 'regions' in events[i]),None)
    digest=next((i for i in range(cut,len(events)) if 'digest' in events[i]),None)
    for kind,index in (('full-bytes',full),('digest',digest)):
        if index is None:continue
        changed=list(events[:index+1]);e=changed[index]
        if kind=='full-bytes':
            e=copy.deepcopy(e);at,data=e['regions'][0];e['regions'][0]=(at,bytes([data[0x20]^1]).join([data[:0x20],data[0x21:]]))
        else:
            e=DigestEvent(e.name,e.boundary_rva,e.pc,e.sp,bytes([e.digest[0]^1])+e.digest[1:],e.layout)
        changed[index]=e
        result,_=compare_continuation(entry,changed,cut)
        require(not result['all_events_match'] and result['first_divergence']['event']==index,'Corruption escaped the emulated oracle','negative-control')
        out.append(dict(kind=kind,event=index,first_divergence=result['first_divergence']))
    return out


def frontier(native,budget=2_000_000):
    """After the last boundary, run on to see where original x64 leaves the PE."""
    import unicorn
    from unicorn.x86_const import UC_X86_REG_RIP
    uc=native.uc;base=native.base;last=[]
    def watch(uc,address,size,data):
        if not base<=address<base+0x500000:uc.emu_stop()
        last.append(address)
        if len(last)>64:del last[0]
    hook=uc.hook_add(unicorn.UC_HOOK_CODE,watch)
    try:uc.emu_start(uc.reg_read(UC_X86_REG_RIP),0,count=budget);status='stopped'
    except Exception as error:status=type(error).__name__+': '+str(error)
    uc.hook_del(hook)
    inside=[hex(a-base) for a in last if base<=a<base+0x500000]
    return dict(status=status,rip=hex(uc.reg_read(UC_X86_REG_RIP)),last_pe_rvas=inside[-8:],extra_native_instructions=native.count)


def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--output',type=pathlib.Path,default=OUT/'validation.json')
    ap.add_argument('--limit',type=int,default=4000);ap.add_argument('--case',action='append')
    ap.add_argument('--negative',action='store_true',help='also run oracle negative controls')
    args=ap.parse_args()
    corpus=json.loads((OUT/'corpus.json').read_bytes())
    for path,sha in corpus['artifacts'].items():load_verified(ROOT/path,sha)
    rows=[]
    for case in corpus['cases']:
        if args.case and pathlib.Path(case['path']).name not in args.case:continue
        folder=ROOT/case['path'];entry=read(folder/'frame_00.entry.json.gz')
        manifest=json.loads((folder/'manifest.json').read_bytes())
        began=time.time();state,steps,failure=candidate(entry,args.limit)
        # Observations are opened only after the whole candidate run.
        oracle=read(folder/'frame_00.trace.json.gz')
        row=dict(case=case['path'],run_id=manifest['run_id'],user=bytes.fromhex(manifest['user_hex']).decode(),
                 capture_status=manifest['status'],executed=len(steps),candidate_failure=failure,
                 candidate_seconds=round(time.time()-began,1),epochs=getattr(state,'epochs',0),rekeys=state.rekeys,
                 remaps=len(state.remaps),callbacks=len(state.callback_log),exceptions=getattr(state,'throws',0),
                 jobs=sorted({hex(j) for j in state.jobs}),job_instances=len(state.jobs),
                 callback_functions=sorted({c['function'] for c in state.callback_log}),queue_callbacks=sorted({c['target'] for c in state.callbacks}),
                 trace=[dict(step=i+1,pc=s['virtual_pc'],opcode=s['opcode'],mnemonic=s['mnemonic'],domain_body=s['native_body'],
                             boundary_pc=s['boundary_pc'],boundary_sp=s['boundary_sp'],
                             **{k:s[k] for k in ('function','result','taken','target_pc','operand','value') if k in s and not isinstance(s[k],list)})
                        for i,s in enumerate(steps)],
                 callback_log=state.callback_log[:64],callback_log_tail=state.callback_log[-64:])
        events=state.events
        require(all('regions' in e for e in events[:min(len(events),1200)]),'Windows window needs full events','coverage')
        if manifest['status']=='complete':
            cut,windows=windows_prefix(entry,events,oracle)
            row['windows']=dict(all_events_match=windows['all_events_match'],first_divergence=windows['first_divergence'],
                                events=cut,native_instructions=len(oracle['trace']),
                                executed_steps_closed=sum(1 for e in events[:cut] if e['name']=='opcode_core'))
        else:
            cut=0;row['windows']=dict(all_events_match=False,status='REJECTED_INCOMPLETE capture; not a Windows proof')
        began=time.time();emulated,native=compare_continuation(entry,events,max(cut,1))
        row['emulated']={k:v for k,v in emulated.items()};row['emulated_seconds']=round(time.time()-began,1)
        cores=[i for i,e in enumerate(events) if e['name']=='opcode_core']
        matched=emulated['compared_events'] if emulated['all_events_match'] else (emulated['first_divergence']['event'])
        # A step is verified when its core and every continuation boundary up
        # to the next step's core (or the run's end) match.
        verified=0
        for k,at in enumerate(cores):
            end=cores[k+1] if k+1<len(cores) else len(events)
            if end<=matched or (k+1==len(cores) and emulated['all_events_match']):verified=k+1
        # A core ending in a C++ throw has no opcode_core event; when every
        # boundary matched, every executed step is verified.
        if emulated['all_events_match'] and row['windows'].get('all_events_match',True) is not False:verified=len(steps)
        row['verified_steps']=verified
        if emulated['all_events_match'] and failure:row['native_frontier']=frontier(native)
        if args.negative:row['negative_controls']=negative_controls(entry,events,max(cut,1))
        rows.append(row)
        print(folder.name,'executed',len(steps),'verified',verified,'windows',row['windows'].get('all_events_match'),
              'emulated',emulated['all_events_match'],emulated['first_divergence'],'failure',failure,flush=True)
    report=dict(rows=rows,source_sha256={p:hashlib.sha256((ROOT/p).read_bytes()).hexdigest() for p in
                ['devirt/serial_loop.py','devirt/serial_loop_validate.py','devirt/serial_regions_xxxvi.py','devirt/serial_branch.py',
                 'devirt/serial_continuous.py','devirt/serial_alu.py','scripts/pafet_state_replay.py','scripts/pafet_state_contract.py']},
                scope='Candidate from one Windows entry. Windows trace covers through the 18th handler entry; later boundaries are compared with original x64 emulated from that same entry (not Windows observations). Finite declared-memory equivalence.')
    args.output.write_bytes((json.dumps(report,indent=1)+'\n').encode())


if __name__=='__main__':main()
