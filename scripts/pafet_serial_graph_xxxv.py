"""Native-context-derived partial Serial CFG; no linear-sweep disassembly guesses."""
import gzip,hashlib,json,pathlib,sys
import pefile
ROOT=pathlib.Path(__file__).resolve().parents[1];sys.path.insert(0,str(ROOT))
from devirt.serial import MASK,materialize,starts
from pafet_state_contract import ORIGINAL_SHA256,Memory,require
OUT=ROOT/'jack_xxxv_evidence'
LENGTHS={1:5,4:3,5:3,26:5,31:1,32:4,41:1,58:2}
NAMES={1:'PUSH_POOL_U32',4:'LOAD_REG_U16',5:'STORE_REG_U16',26:'REQUEST_BRANCH_UNIT_U32',
       31:'DROP_U64',32:'HOST_CALL_U16_U8',41:'XOR_U64',58:'SIGN_EXTEND_LOW_U8'}


def read(path):return json.loads(gzip.decompress(path.read_bytes()))
def write(name,value):(OUT/name).write_bytes((json.dumps(value,indent=2)+'\n').encode())


def bindings(pe):
    preferred=pe.OPTIONAL_HEADER.ImageBase;result={}
    for domain in range(4):
        remap=int.from_bytes(pe.get_data(0x3e95a0+8*domain,8),'little')-preferred
        table=int.from_bytes(pe.get_data(0x3e2340+8*domain,8),'little')-preferred
        for opcode in range(62):
            slot=int.from_bytes(pe.get_data(remap+2*opcode,2),'little')
            body=int.from_bytes(pe.get_data(table+8*slot,8),'little')-preferred
            result.setdefault(body,{}).setdefault(opcode,[]).append(domain)
    return result


def native_entries(entry,oracle,body_map):
    m=Memory()
    for region in entry['regions']:m.add(region['address'],bytes.fromhex(region['hex']))
    ctx=entry['state']['gprs'][1];data=bytearray(m.read(ctx,0x11f0));events=[]
    def u(at,size=8):return int.from_bytes(data[at:at+size],'little')
    def control(index):
        mask=((u(0x160+index,1)*u(0xe0))&MASK)^(((index+1)*u(0xd8))&MASK)^u(0xd0)
        encoded=u(0xf0+8*index)
        return ((encoded-mask)&MASK if u(0xe8,1) else encoded^mask)&0xffffffff
    trace=oracle['trace']
    for index in range(len(trace)+1):
        pc=trace[index]['pc'] if index<len(trace) else trace[-1]['after']['rip']
        rva=pc-entry['base']
        if rva in body_map:
            opcode=u(0x4ad,1);domains=body_map[rva].get(opcode)
            require(domains is not None,'Native opcode/body binding disagrees','observation',rva=hex(rva),opcode=opcode)
            events.append(dict(pc=control(8),operand_pc=control(1),sp=control(2),opcode=opcode,
                               body_rva=hex(rva),domains=domains,trace_index=index,
                               terminal_entry=index==len(trace)))
        if index==len(trace):break
        for address,raw in trace[index]['writes']:
            chunk=bytes.fromhex(raw);lo=max(ctx,address);hi=min(ctx+len(data),address+len(chunk))
            if lo<hi:data[lo-ctx:hi-ctx]=chunk[lo-address:hi-address]
    return events


def main():
    raw=(ROOT/'pafet.bin').read_bytes();require(hashlib.sha256(raw).hexdigest()==ORIGINAL_SHA256,'Wrong original PE','integrity')
    pe=pefile.PE(data=raw);body_map=bindings(pe);positions=starts()
    validation=json.loads((OUT/'validation.json').read_bytes())
    require(validation['status']=='PASS','Validation incomplete','coverage')
    corpus=json.loads((OUT/'corpus.json').read_bytes())
    nodes={};observed={};per_case=[];executed=set();implemented=set();dynamic={}
    for row in validation['rows']:
        folder=ROOT/row['case'];entry=read(folder/'frame_00.entry.json.gz');oracle=read(folder/'frame_00.trace.json.gz')
        events=native_entries(entry,oracle,body_map)
        per_case.append(dict(case=row['case'],status=row['status'],trace_sha256=corpus['artifacts'][(folder/'frame_00.trace.json.gz').relative_to(ROOT).as_posix()],entries=events))
        for event in events:
            pc=event['pc'];unit=positions.index(pc//26*26)
            n=nodes.setdefault(pc,dict(pc=pc,opcode=event['opcode'],mnemonic=NAMES.get(event['opcode'],'UNKNOWN'),
                                      logical_unit=unit,physical_unit_start=positions[unit],observations=[]))
            require(n['opcode']==event['opcode'],'Different opcode at one PC','observation')
            n['observations'].append(dict(case=row['case'],trace_index=event['trace_index'],body_rva=event['body_rva'],
                                           domains=event['domains'],terminal_entry=event['terminal_entry'],capture_complete=row['status']!='REJECTED_INCOMPLETE'))
        for a,b in zip(events,events[1:]):
            key=(a['pc'],b['pc']);observed.setdefault(key,[]).append(dict(case=row['case'],from_trace_index=a['trace_index'],to_trace_index=b['trace_index'],capture_complete=row['status']!='REJECTED_INCOMPLETE'))
        if row['level_C']:
            observed_pcs=[e['pc'] for e in events]
            proof_pcs=[s['virtual_pc'] for s in row['steps']]
            require(observed_pcs[:len(proof_pcs)]==proof_pcs,'Native/candidate logical trace mismatch','observation')
            for step in row['steps']:
                executed.add(step['virtual_pc']);implemented.add(step['opcode'])
                dynamic.setdefault(step['opcode'],set()).add(int(step['native_body'],16))
    edges=[dict(source=a,target=b,kind='observed_successor',confidence='direct Windows context observation',provenance=proofs) for (a,b),proofs in sorted(observed.items())]
    for pc,node in sorted(nodes.items()):
        node['executed_in_verified_candidate']=pc in executed
        if pc not in executed:continue
        op=node['opcode'];length=LENGTHS[op];node['instruction_length']=length
        unit=node['logical_unit'];lo,code=materialize(pe.get_data(0x3e9c10,2678),unit)
        offset=pc-lo
        require(offset+length<=len(code),'Instruction crosses unproved materialization unit','static-analysis')
        decoded=pe.get_data(0x3ecf00+(code[offset]^0xdd),1)[0]^0x63
        require(decoded==op,'Static header differs from native decoded opcode','static-analysis',pc=pc)
        node['materialized_bytes']=code[offset:offset+length].hex()
        node['static_source']='Pinned original PE materializer and recovered opcode semantics'
        if op==26:
            operand_pc=pc+1;b=code[offset+1:offset+5];packed=b[1]<<24|b[3]<<16|b[0]<<8|b[2]
            h=operand_pc*0x84e97925&0xffffffff;label=((h^(h>>13)^packed^0xba1c4fa3)*0x77167b7b)&0xffffffff
            require(label<103,'Static branch label invalid','static-analysis')
            target=positions[label];kind='deferred_branch';condition='Valid armed/taken request commits normally; exception/failure routes are separate'
            node.update(consumption_pc=pc+length,target_unit=label,target_pc=target)
        else:
            target=pc+length;kind='static_sequential';condition='Recovered normal continuation'
            if op==32:condition='Verified callback functions 0/1, non-reentrant frame/return contract'
        edges.append(dict(source=pc,target=target,kind=kind,confidence='static reconstruction under explicit contract',condition=condition,
                          provenance=['devirt/serial_signextend.py','devirt/serial_hostcall.py','devirt/serial_branch.py','devirt/serial_continuous.py']))
    inventory=[]
    for unit,start in enumerate(positions):
        headers=sorted(pc for pc,n in nodes.items() if n['logical_unit']==unit)
        inventory.append(dict(logical_unit=unit,physical_start=start,physical_end=start+26,encrypted_blob_rva=hex(0x3e9c10+start),
                              confirmed_headers=headers,classification='Contains observed headers; remaining bytes unclassified' if headers else 'Unexplored; code/data classification unknown'))
    graph=dict(schema='pafet-serial-partial-cfg-v1',original_sha256=ORIGINAL_SHA256,nodes=[nodes[k] for k in sorted(nodes)],edges=edges,
               physical_bytes=2678,materialization_units=103,unit_bytes=26,inventory=inventory,
               termination_evidence=dict(naturally_observed=False,static_guard='Outer decoder PC >= ctx[0x1d8]',
                                         runtime_work_label='0xfe1ab',static_effect='Helper 0x1ee510 sets logical control 10 to 1',
                                         decoder_rva='0x229c70',job_rva='0x22c8f6',cleanup_and_final_return_verified=False),
               scope='Partial CFG. A physical backward edge is not proof of a loop. Unknown nodes have no invented successors; a terminal handler entry is not a completed opcode.')
    write('virtual_cfg.json',graph);write('native_logical_entries.json',per_case)
    lines=['digraph SerialVM {','  rankdir=LR;']
    for pc,n in sorted(nodes.items()):
        lines.append(f'  pc{pc} [label="{pc}: {n["mnemonic"]} (0x{n["opcode"]:02x})",shape={"box" if pc in executed else "octagon"}];')
    for e in edges:
        color='blue' if e['kind']=='observed_successor' else 'orange' if e['kind']=='deferred_branch' else 'gray'
        style='solid' if e['kind']=='observed_successor' else 'dashed'
        lines.append(f'  pc{e["source"]} -> pc{e["target"]} [label="{e["kind"]}",color={color},style={style}];')
    (OUT/'virtual_cfg.dot').write_bytes(('\n'.join(lines+['}'])+'\n').encode())
    write('progress.json',dict(maximum_consecutive_instructions=validation['maximum_verified_prefix'],implemented_opcodes=sorted(implemented),
          dynamically_verified_body_bindings={hex(k):list(map(hex,sorted(v))) for k,v in sorted(dynamic.items())},
          distinct_virtual_pcs_observed=len(nodes),distinct_pcs_executed_in_candidate=len(executed),
          explored_materialization_units=sorted({n['logical_unit'] for n in nodes.values()}),known_branch_destinations=sorted({e['target'] for e in edges if e['kind']=='deferred_branch'}),
          pending_outer_states=7,generated_kernel_coverage='61/64 baseline; new corpus coverage evaluated separately',
          total_program_instructions=None,instructions_to_termination=None,global_devirtualization_percentage=None,
          reason='Only a finite prefix CFG is observed. Global reachable code, loops, iteration counts, call effects and termination remain unresolved.',
          physical_bytes_are_not_instruction_count=True,source_sha256=hashlib.sha256(pathlib.Path(__file__).read_bytes()).hexdigest()))
    print('PASS:',len(executed),'verified executed PCs;',len(nodes),'native-observed PCs; partial CFG and 103-unit inventory emitted')


if __name__=='__main__':main()
