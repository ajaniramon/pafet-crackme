#!/usr/bin/env python3
"""Strict stage-by-stage comparison of supplied captures, never a Windows runner.
Missing stages, lengths or bytes remain unknown. Reuses the closed cipher model.
"""
import argparse,hashlib,json
from pathlib import Path
from pafet_des3_offline import f_user,g_serial,derive_key,des3_decrypt_ecb,unpad,CIPHERTEXT

STAGES=('input_username','input_serial','sha_hex','user_transform','serial_transform','key','cipher_1','cipher_2','plaintext')

def expected_model(user,serial):
    values={'input_username':user,'input_serial':serial,'sha_hex':hashlib.sha256(user).hexdigest().encode(),
            'user_transform':f_user(user),'serial_transform':g_serial(serial),'key':derive_key(user,serial)}
    data=CIPHERTEXT;unknown={}
    for stage in ('cipher_1','cipher_2','plaintext'):
        if len(data)%8:
            unknown[stage]='Requires captured physical tail: preceding logical size is not a multiple of 8'
            values[stage]=None
            # Later stages also depend on the unknown tail. Do not assume zero.
            for later in ('cipher_1','cipher_2','plaintext')[('cipher_1','cipher_2','plaintext').index(stage)+1:]:
                values[later]=None;unknown[later]='An earlier cipher stage is not determined'
            break
        data=unpad(des3_decrypt_ecb(data,values['key']));values[stage]=data
    return values,unknown

def load_stage(record,base):
    if not isinstance(record,dict):raise ValueError('stage record must be an object')
    if 'length' not in record or not isinstance(record['length'],int) or isinstance(record['length'],bool) or record['length']<0:raise ValueError('missing/invalid logical length')
    if ('hex' in record)==('file' in record):raise ValueError('provide exactly one of hex or file')
    if 'hex' in record:data=bytes.fromhex(record['hex'])
    else:
        path=(base/record['file']).resolve()
        if not path.is_relative_to(base.resolve()):raise ValueError('capture path escapes its directory')
        data=path.read_bytes()
    if len(data)!=record['length']:raise ValueError('dump size differs from declared logical length; separate slack dumps')
    digest=hashlib.sha256(data).hexdigest()
    if 'sha256' in record and digest!=record['sha256']:raise ValueError('dump hash mismatch')
    if 'capacity' in record and record['capacity']<record['length']:raise ValueError('capacity below logical length')
    return data,digest

def compare(capture,base,expected,unknown=None):
    unknown=unknown or {};rows=[];mismatches=[];gaps=[]
    for stage in STAGES:
        row={'stage':stage};record=capture.get('stages',{}).get(stage)
        if record is None:row.update(status='MISSING');gaps.append(stage)
        else:
            try:
                got,digest=load_stage(record,base);row.update(length=len(got),sha256=digest)
                want=expected.get(stage)
                if want is None:row.update(status='MODEL_UNDETERMINED',reason=unknown.get(stage,'No model bytes'));gaps.append(stage)
                elif got==want:row['status']='MATCH'
                else:
                    common=min(len(got),len(want));offset=next((i for i in range(common) if got[i]!=want[i]),common)
                    row.update(status='MISMATCH',first_byte_offset=offset,expected_length=len(want));mismatches.append(stage)
            except (ValueError,OSError,TypeError) as e:row.update(status='INVALID',reason=str(e));gaps.append(stage)
        rows.append(row)
    first=mismatches[0] if mismatches else None
    prefix_known=first is not None and all(r['status']=='MATCH' for r in rows[:STAGES.index(first)])
    # A late mismatch with earlier missing stages is not an exact first divergence.
    provenance=capture.get('provenance',{});required=('binary_sha256','gate_override','text_modifications','capture_tool')
    missing_provenance=[k for k in required if k not in provenance or provenance[k] is None]
    status='DIVERGENCE' if mismatches else ('INCOMPLETE' if gaps or missing_provenance else 'COMPLETE_BYTES_MATCH')
    return {'case_id':capture.get('case_id'),'comparison':status,'stages':rows,
            'earliest_observed_mismatch':first,'first_exact_divergence':first if prefix_known else None,
            'missing_or_undetermined_stages':gaps,'missing_provenance_fields':missing_provenance,
            'capture_provenance_independently_verified':False,
            'original_credential_acceptance_verified':False,
            'scope':'byte comparison against supplied artifacts; provenance claims alone do not prove an unmodified original execution'}

def self_test():
    # Artificial transport fixtures, not cryptographic credentials or flags.
    expected={s:bytes([i,0,128,255]) for i,s in enumerate(STAGES)}
    cap={'case_id':'synthetic-parser-only','provenance':{'binary_sha256':'synthetic','gate_override':'synthetic','text_modifications':'synthetic','capture_tool':'self-test'},'stages':{s:{'hex':b.hex(),'length':len(b)} for s,b in expected.items()}}
    import copy,tempfile
    with tempfile.TemporaryDirectory() as tmp:
        base=Path(tmp);assert compare(cap,base,expected)['comparison']=='COMPLETE_BYTES_MATCH'
        c=copy.deepcopy(cap);del c['stages']['input_username'];assert compare(c,base,expected)['comparison']=='INCOMPLETE'
        c['stages']['key']['hex']='ff000000';r=compare(c,base,expected);assert r['earliest_observed_mismatch']=='key' and r['first_exact_divergence'] is None
        c=copy.deepcopy(cap);c['stages']['key']['hex']='ff000000';assert compare(c,base,expected)['first_exact_divergence']=='key'
        c=copy.deepcopy(cap);c['stages']['input_serial']['length']=99;assert compare(c,base,expected)['stages'][1]['status']=='INVALID'
        c=copy.deepcopy(cap);c['stages']['key']['sha256']='0'*64;assert compare(c,base,expected)['stages'][5]['status']=='INVALID'
        c=copy.deepcopy(cap);c['stages']['key']={'file':'missing.bin','length':4};assert compare(c,base,expected)['stages'][5]['status']=='INVALID'
        c=copy.deepcopy(cap);c['stages']['key']={'file':'../outside.bin','length':4};assert compare(c,base,expected)['stages'][5]['status']=='INVALID'
        c=copy.deepcopy(cap);c['provenance']={};assert compare(c,base,expected)['comparison']=='INCOMPLETE'
        e=expected.copy();e['plaintext']=None;assert compare(cap,base,e)['comparison']=='INCOMPLETE'
    return {'synthetic_transport_tests_passed':10,'Windows_captures_compared':0,'cryptographic_model_executions':0,'original_acceptance_verified':False}

def main():
    ap=argparse.ArgumentParser(description=__doc__);ap.add_argument('capture',type=Path,nargs='?');ap.add_argument('--self-test',action='store_true');ap.add_argument('--out',type=Path);a=ap.parse_args()
    if a.self_test:r=self_test()
    else:
        if not a.capture:ap.error('capture required')
        c=json.loads(a.capture.read_text());intended=c['intended_inputs'];user=bytes.fromhex(intended['username_hex']);serial=bytes.fromhex(intended['serial_hex'])
        expected,unknown=expected_model(user,serial);r=compare(c,a.capture.parent,expected,unknown)
    text=json.dumps(r,indent=2)+'\n'
    if a.out:a.out.write_text(text)
    else:print(text,end='')
if __name__=='__main__':main()
