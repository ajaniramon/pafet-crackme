#!/usr/bin/env python3
"""Replay fresh Windows frames without the historical extra RSP decrement."""
import argparse,gzip,importlib.util,json,struct
from unicorn.x86_const import *
from pafet_native_diff_xxiv import ROOT,OUT,NAMES,library,run_vector
def main():
    ap=argparse.ArgumentParser();ap.add_argument('--no-build',action='store_true');ap.add_argument('--transfer-only',action='store_true');args=ap.parse_args();lib=library(not args.no_build)
    spec=importlib.util.spec_from_file_location('fresh_setup',ROOT/'scripts/pafet_h3bea0_unicorn_xiii.py');old=importlib.util.module_from_spec(spec);spec.loader.exec_module(old)
    captures=json.loads(gzip.decompress((OUT/('fresh_transfer_vectors.json.gz' if args.transfer_only else 'fresh_native_vectors.json.gz')).read_bytes()));results=[]
    for label,cap in captures.items():
        for n,vector in enumerate(cap['vectors']):
            def precise(uc,v):
                for name in NAMES:uc.reg_write(globals()['UC_X86_REG_'+name.upper()],int(v['native_before'][name],16))
                rsp=int(v['native_before']['rsp'],16);uc.mem_write(rsp,struct.pack('<Q',old.SENTINEL))
                gs=0x50000000;uc.mem_map(gs,0x1000);uc.mem_write(gs+0x58,struct.pack('<Q',int(v['tls_array'],16)));uc.reg_write(UC_X86_REG_GS_BASE,gs)
            try:r=run_vector(lib,old,label,n,vector,int(cap['pe_base'],16),precise)
            except Exception as error:
                (OUT/'fresh_native_gap.json').write_text(json.dumps({'case':label,'vector':n,'failure':repr(error),'selection':'transfer' if args.transfer_only else 'unfiltered'},indent=2)+'\n');raise
            assert r['historical_capture_comparison']['ok'],(label,n,r['historical_capture_comparison'])
            diffs={name:(r['final_gprs'][name],vector['native_after_caller'][name]) for name in NAMES if int(r['final_gprs'][name],16)!=int(vector['native_after_caller'][name],16)}
            assert not diffs,(label,n,'native GPR return',diffs)
            r['all_16_native_return_gprs_match']=True
            results.append(r);print(label,n,r['steps'],'fresh native memory + all 16 GPRs agree; every emulated instruction agrees',flush=True)
            (OUT/('fresh_transfer_differential.json' if args.transfer_only else 'fresh_native_differential.json')).write_text(json.dumps({'cases':results,'all_match':True,'scope':'Actual entry RSP and all GPRs initialized from Windows frames; native before/after memory and all 16 GPRs; C++/Unicorn instruction lockstep. Native RFLAGS/XMM are not captured.'},indent=2)+'\n')
if __name__=='__main__':main()
