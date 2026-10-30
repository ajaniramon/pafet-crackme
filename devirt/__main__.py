"""python -m devirt --pe pafet.bin --out jack_xvii_evidence/generated"""
import argparse
import hashlib
import json
import pathlib
from .uservm import ROOT, lift
from .ir import optimize
from .cpp import emit, pseudocode, structured


def generate(pe, out):
    out = pathlib.Path(out); out.mkdir(parents=True, exist_ok=True)
    program, code = lift(pe); optimized = optimize(program)
    from pafet_abstract_xxiii import analyze
    from .uservm import Decoder
    import pefile
    abstract = analyze(Decoder(pefile.PE(str(pe))))
    structured_code, shape = structured(optimized, abstract['predicate_values'])
    artifacts = {'user.bytecode.bin': code,
                 'user.ir.json': json.dumps(program, indent=2).encode() + b'\n',
                 'user.optimized.ir.json': json.dumps(optimized, indent=2).encode() + b'\n',
                 'user.cpp': emit(program).encode(),
                 'user.optimized.cpp': emit(optimized, optimized=True).encode(),
                 'user.pseudo.txt': pseudocode(optimized).encode(),
                 'user.structured.cpp': structured_code.encode(),
                 'user.structured.json': json.dumps(shape,indent=2).encode()+b'\n'}
    for name, data in artifacts.items(): (out/name).write_bytes(data)
    manifest = {'pe_sha256': program['pe_sha256'], 'instructions': program['instructions'],
                'basic_blocks': len(program['blocks']), 'logical_edges': len(program['edges']),
                'unknown_instructions': program['unknown_instructions'], 'optimization': optimized['optimization'],
                'artifacts': {name: hashlib.sha256(data).hexdigest() for name, data in artifacts.items()},
                'sources': {p.relative_to(ROOT).as_posix(): hashlib.sha256(p.read_bytes()).hexdigest()
                            for p in sorted((ROOT/'devirt').iterdir()) if p.suffix in ('.py','.hpp','.cpp')},
                'reused_sources': {p.relative_to(ROOT).as_posix():hashlib.sha256(p.read_bytes()).hexdigest() for p in
                    [ROOT/'scripts'/name for name in ('pafet_decode_xxiii.py','pafet_materialize_xxiii.py',
                                                     'decode_user_blob_vi.py','pafet_abstract_xxiii.py')]},
                'scope': program['contract']}
    (out/'manifest.json').write_bytes(json.dumps(manifest, indent=2).encode() + b'\n')
    return program, optimized, manifest


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--pe', type=pathlib.Path, default=ROOT/'pafet.bin')
    ap.add_argument('--out', type=pathlib.Path, default=ROOT/'jack_xvii_evidence/generated')
    args = ap.parse_args(); _, _, manifest = generate(args.pe, args.out)
    print(json.dumps({k: manifest[k] for k in ('instructions', 'basic_blocks', 'logical_edges', 'unknown_instructions', 'optimization')}, indent=2))


if __name__ == '__main__': main()
