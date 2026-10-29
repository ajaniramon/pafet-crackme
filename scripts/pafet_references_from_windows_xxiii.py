#!/usr/bin/env python3
"""Project fresh Windows traces into the restored XXIII comparison format."""
import gzip,hashlib,json,pathlib
ROOT=pathlib.Path(__file__).resolve().parents[1];OUT=ROOT/'jack_xxiii_evidence'
def main():
    dest=OUT/'reference_traces';dest.mkdir(exist_ok=True)
    for path in sorted((OUT/'windows').glob('*.jsonl.gz')):
        label=path.name.split('.')[0];summary=json.loads(path.with_name(label+'.summary.json').read_text())
        records=[];output=None
        for line in gzip.open(path,'rt'):
            e=json.loads(line)
            if e['kind'] in ('handler_state','core_state'):
                records.append({k:e[k] for k in ('kind','step','pc','stack','registers')})
            elif e['kind']=='handler_enter':records.append({k:e[k] for k in ('kind','step','raw_op','entry')})
            elif e['kind']=='memory' and e['op']==6:records.append(e)
            elif e['kind']=='wrapper_output':output=e['hex']
        assert output is not None
        target=dest/path.name
        target.write_bytes(gzip.compress(('\n'.join(json.dumps(x,separators=(',',':')) for x in records)+'\n').encode(),mtime=0))
        summary.update({'comparison_output_hex':output,'stdout':'SOL-OUTPUT '+output+'\n',
            'reference_projection':{'source_gzip_sha256':hashlib.sha256(path.read_bytes()).hexdigest(),
                'scope':'Fresh Windows capture. Decoded PC, stack, 256 registers; native opaque state omitted.'}})
        (dest/(label+'.summary.json')).write_text(json.dumps(summary,indent=2)+'\n')
    print('Projected',len(list(dest.glob('*.summary.json'))),'Windows references')
if __name__=='__main__':main()
