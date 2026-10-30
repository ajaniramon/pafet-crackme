"""Original PE -> materialized User-VM bytecode -> explicit logical effect IR."""
import hashlib
import pathlib
import sys
import pefile

ROOT = pathlib.Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'scripts'))
from pafet_decode_xxiii import Decoder, OPS

ORIGINAL_SHA256 = 'fe85e59225387fba4923f3bc6103914fe7b85ba3dc0514c9e37382818fb44d1a'


def value(name, op, args=(), bits=64, **extra):
    return dict(id=name, op=op, args=list(args), bits=bits, **extra)


def host_functions():
    """Explicit host memory effects; source locations are semantic evidence anchors."""
    zero = value('zero', 'const', value=0)
    specs = {
        0: ([], [dict(op='buffer.copy', src_buffer='source', dst_buffer='working'), zero], 'zero', ['working']),
        1: ([], [dict(op='buffer.reverse', buffer='working'), zero], 'zero', ['working']),
        2: (['arg0'], [dict(op='index.write', args=['arg0']), zero], 'zero', ['index']),
        3: ([], [value('i', 'index.read'), value('n', 'buffer.size', buffer='working'), value('more', 'ult', ['i', 'n'])], 'more', []),
        4: ([], [value('i', 'index.read'), value('b', 'load8', ['i'], bits=8, buffer='working'),
                 value('key', 'const', bits=8, value=0x5a), value('x', 'xor', ['b', 'key'], bits=8),
                 value('seven', 'const', bits=8, value=7), value('a', 'add', ['x', 'seven'], bits=8),
                 value('three', 'const', value=3), value('delta', 'mul', ['i', 'three'], bits=8),
                 value('byte', 'add', ['a', 'delta'], bits=8),
                 dict(op='store8', buffer='working', args=['i', 'byte']),
                 value('ret', 'sext', ['byte'], from_bits=8)], 'ret', ['working']),
        5: ([], [value('i', 'index.read')], 'i', []),
        6: ([], [dict(op='buffer.copy', src_buffer='working', dst_buffer='output'), zero], 'zero', ['output']),
    }
    roles = ['copy_input', 'reverse_bytes', 'set_index', 'has_byte', 'rewrite_byte', 'get_index', 'publish_output']
    return {f'host_{i}': {'parameters': params, 'body': body, 'return': ret, 'writes': writes,
                        'role': roles[i], 'evidence': '0x140048960; writer 0x140048a28..0x140048a3e',
                        'contract': 'Logical byte buffers; MSVC allocation/capacity and native scratch GPRs excluded.'}
            for i, (params, body, ret, writes) in specs.items()}


def discover(decoder):
    pending = [0]; nodes = {}; edges = []
    while pending:
        pc = pending.pop()
        if pc in nodes: continue
        if not 0 <= pc < len(decoder.code): raise ValueError(('invalid bytecode target', pc))
        logical = decoder.table[decoder.code[pc] ^ 0x33] ^ 0xeb
        try: node = decoder.decode(pc)
        except ValueError:
            # Operand widths of an unproved instruction cannot be guessed.
            if logical in OPS: raise
            nodes[pc] = dict(opcode_pc=pc, logical_opcode=logical, encoded_opcode=decoder.code[pc],
                             operation='UNKNOWN', operands=[], reader_events=[], fallthrough_pc=None)
            continue
        node['encoded_hex'] = decoder.code[pc:node['fallthrough_pc']].hex()
        nodes[pc] = node
        successors = []
        if logical in (26, 27, 28):
            if node['operands'][0] >= len(decoder.targets): raise ValueError('invalid logical block')
            successors.append(decoder.targets[node['operands'][0]])
        if logical not in (26, 29): successors.append(node['fallthrough_pc'])
        for target in successors:
            edges.append(dict(source=pc, target=target)); pending.append(target)
    # An edge into an operand is an error, not a second instruction interpretation.
    occupied = {}
    for pc, node in nodes.items():
        for byte in range(pc, node['fallthrough_pc'] or pc + 1):
            if byte in occupied: raise ValueError(('overlapping instructions', pc, occupied[byte]))
            occupied[byte] = pc
    return nodes, edges


def stack_delta(node):
    op = node['logical_opcode']
    if op in (1, 4): return 0, 1
    if op in (5, 27, 28, 29, 31): return 1, -1
    if op == 44: return 1, 0
    if op in (8, 21, 22, 24, 41): return 2, -1
    if op == 32:
        count = min(node['operands'][1], 32)
        return count, 1 - count
    return 0, 0


def lift_decoder(decoder, pe_hash='synthetic'):
    nodes, edges = discover(decoder)
    successors = {pc: [] for pc in nodes}
    for edge in edges: successors[edge['source']].append(edge['target'])
    heights = {0: 0}; pending = [0]
    while pending:
        pc = pending.pop(); required, delta = stack_delta(nodes[pc]); height = heights[pc]
        if height < required: raise ValueError(('static stack underflow', pc))
        for target in successors[pc]:
            new = height + delta
            if target in heights:
                if heights[target] != new: raise ValueError(('inconsistent stack at join', target))
            else: heights[target] = new; pending.append(target)
    leaders = {0}
    for pc, node in nodes.items():
        if node['logical_opcode'] in (26, 27, 28): leaders.update(successors[pc])
    blocks = []; assigned = set(); functions = host_functions()
    for leader in sorted(leaders):
        if leader in assigned: continue
        pc = leader; block = dict(pc=leader, stack_in=heights[leader], instructions=[])
        stack = [f's{i}' for i in range(heights[leader])]
        while True:
            if pc in assigned: raise ValueError(('duplicate block member', pc))
            assigned.add(pc); n = nodes[pc]; op = n['logical_opcode']; args = n['operands']
            ins = dict(pc=pc, logical_opcode=op, operation=n['operation'], encoded_hex=n.get('encoded_hex', f'{n["encoded_opcode"]:02x}'),
                       operands=args, reader_events=n['reader_events'], fallthrough_pc=n['fallthrough_pc'], effects=[])
            out = f'v{pc}'; ins['result_id'] = out; effect = ins['effects']; term = None
            if op == 1:
                effect.append(value(out, 'const', value=decoder.constants[args[0] if args[0] < 13 else 0])); stack.append(out)
            elif op == 4: effect.append(value(out, 'reg.read', index=args[0] & 255)); stack.append(out)
            elif op == 5: effect.append(dict(op='reg.write', index=args[0] & 255, args=[stack.pop()]))
            elif op == 31: stack.pop()
            elif op == 44: effect.append(value(out, 'not', [stack.pop()])); stack.append(out)
            elif op in (8, 21, 22, 24, 41):
                y, x = stack.pop(), stack.pop()
                effect.append(value(out, {8: 'add', 21: 'ne', 22: 'slt', 24: 'sgt', 41: 'xor'}[op], [x, y])); stack.append(out)
            elif op in (26, 27, 28):
                target = decoder.targets[args[0]]
                term = dict(op='jump', target=target) if op == 26 else dict(op='branch', condition=stack.pop(), zero=op == 27, target=target, fallthrough=n['fallthrough_pc'])
            elif op == 32:
                count = min(args[1], 32); inputs = stack[len(stack)-count:] if count else []
                if count: del stack[-count:]
                name = f'host_{args[0]}'
                if name not in functions or len(functions[name]['parameters']) != count:
                    effect.append(dict(id=out,op='unknown', reason=f'unproved host call {args}', reads=['all'], writes=['all']))
                else: effect.append(value(out, 'call', inputs, function=name, writes=functions[name]['writes']))
                stack.append(out)
            elif op == 29: term = dict(op='return', value=stack.pop())
            else:
                effect.append(dict(op='unknown', reason=f'logical opcode {op}: encoding/semantics unproved', reads=['all'], writes=['all']))
                term = dict(op='unknown', reason='unknown instruction length and successors')
            ins['stack_after'] = list(stack)
            if term: ins['control'] = term
            block['instructions'].append(ins)
            if term or n['fallthrough_pc'] in leaders: break
            pc = n['fallthrough_pc']
        blocks.append(block)
    if assigned != set(nodes): raise ValueError('CFG nodes omitted by block formation')
    return {'schema': 'pafet-effect-ir-v1', 'vm': 'User', 'entry': 0, 'pe_sha256': pe_hash,
            'bytecode_sha256': hashlib.sha256(decoder.code).hexdigest(), 'bytecode_bytes': len(decoder.code),
            'constants': decoder.constants, 'logical_block_offsets': decoder.targets,
            'instructions': len(nodes), 'blocks': blocks, 'edges': edges, 'functions': functions,
            'unknown_instructions': [pc for pc, n in nodes.items() if n['operation'] == 'UNKNOWN'],
            'contract': {'values': 'uint64; explicit wrapping widths; signed comparisons are int64',
                         'registers': 256, 'flags': 'No separate logical flags used by this program; conditions are stack values.',
                         'memory': 'source/working/output byte buffers, explicit index and host side effects',
                         'control': 'post_core_pc is operand end; queued target is next_opcode_pc',
                         'excluded': ['native register/stack encoding', 'alias scheduling', 'native guard effects', 'OS exceptions', 'MSVC allocation/capacity state']}}


def lift(path):
    path = pathlib.Path(path); digest = hashlib.sha256(path.read_bytes()).hexdigest()
    if digest != ORIGINAL_SHA256: raise ValueError('expected original pafet.bin; refuse research variants')
    decoder = Decoder(pefile.PE(str(path)))
    return lift_decoder(decoder, digest), decoder.code
