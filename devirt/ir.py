"""Explicit, width-aware IR with ordered state effects and block stack parameters.

Values are SSA within each basic block. Registers, byte buffers and the host
index are explicit mutable state; stack values cross edges as block parameters.
There is no native-address/opcode dispatch in the IR evaluator.
"""
from dataclasses import dataclass, field

MASK = (1 << 64) - 1
PURE = {'const', 'add', 'mul', 'xor', 'not', 'ne', 'slt', 'sgt', 'ult', 'sext', 'shr'}


class UnknownSemantics(RuntimeError):
    pass


def signed(x, bits=64):
    x &= (1 << bits) - 1
    return x - (1 << bits) if x >> (bits - 1) else x


def arithmetic(op, args, bits=64, from_bits=8):
    mask = (1 << bits) - 1
    if op == 'add': value = args[0] + args[1]
    elif op == 'mul': value = args[0] * args[1]
    elif op == 'xor': value = args[0] ^ args[1]
    elif op == 'not': value = ~args[0]
    elif op == 'ne': value = int(args[0] != args[1])
    elif op == 'slt': value = int(signed(args[0]) < signed(args[1]))
    elif op == 'sgt': value = int(signed(args[0]) > signed(args[1]))
    elif op == 'ult': value = int(args[0] < args[1])
    elif op == 'sext': value = signed(args[0], from_bits)
    elif op == 'shr':
        if not 0 <= args[1] < bits: raise ValueError('IR shift count outside its defined domain')
        value = args[0] >> args[1]
    else: raise UnknownSemantics(op)
    return value & mask


@dataclass
class State:
    source: bytes = b''
    registers: list = field(default_factory=lambda: [0] * 256)
    stack: list = field(default_factory=list)
    working: bytearray = field(default_factory=bytearray)
    output: bytearray = field(default_factory=bytearray)
    index: int = 0
    pc: int = 0
    post_core_pc: int = 0
    result: int = 0
    halted: bool = False


def evaluate(nodes, values, state, functions):
    for node in nodes:
        op = node['op']
        args = [values[a] for a in node.get('args', [])]
        result = None
        if op == 'const': result = node['value']
        elif op in PURE: result = arithmetic(op, args, node.get('bits', 64), node.get('from_bits', 8))
        elif op == 'reg.read': result = state.registers[node['index']]
        elif op == 'reg.write': state.registers[node['index']] = args[0]
        elif op == 'index.read': result = state.index
        elif op == 'index.write': state.index = args[0]
        elif op == 'buffer.copy': setattr(state, node['dst_buffer'], bytearray(getattr(state, node['src_buffer'])))
        elif op == 'buffer.reverse': getattr(state, node['buffer']).reverse()
        elif op == 'buffer.size': result = len(getattr(state, node['buffer']))
        elif op == 'load8':
            buf = getattr(state, node['buffer'])
            if args[0] >= len(buf): raise IndexError('IR load8 outside accessible byte buffer')
            result = buf[args[0]]
        elif op == 'store8':
            buf = getattr(state, node['buffer'])
            if args[0] >= len(buf): raise IndexError('IR store8 outside accessible byte buffer')
            buf[args[0]] = args[1] & 255
        elif op == 'call':
            function = functions[node['function']]
            local = dict(zip(function['parameters'], args))
            if len(local) != len(function['parameters']): raise ValueError('host arity')
            evaluate(function['body'], local, state, functions)
            result = local[function['return']]
        else: raise UnknownSemantics(node.get('reason', op))
        if 'id' in node:
            if result is None: raise ValueError(('value absent', node))
            values[node['id']] = result & ((1 << node.get('bits', 64)) - 1)


def execute(program, state, trace=None, budget=200000):
    blocks = {b['pc']: b for b in program['blocks']}
    optimized = 'optimization' in program
    steps = 0
    while not state.halted:
        block = blocks[state.pc]
        if optimized and steps + len(block['instructions']) > budget: raise RuntimeError('IR block budget exceeded')
        if len(state.stack) != block['stack_in']: raise ValueError('IR edge stack shape')
        values = {f's{i}': x for i, x in enumerate(state.stack)}
        for ins in block['instructions']:
            if steps >= budget: raise RuntimeError('IR instruction budget exceeded')
            evaluate(ins['effects'], values, state, program['functions'])
            boundary = not optimized or ins is block['instructions'][-1]
            if boundary: state.stack = [values[a] for a in ins['stack_after']]
            state.post_core_pc = ins['fallthrough_pc']
            term = ins.get('control')
            state.pc = ins['fallthrough_pc']
            if term:
                if term['op'] == 'jump': state.pc = term['target']
                elif term['op'] == 'branch':
                    take = (values[term['condition']] == 0) == term['zero']
                    state.pc = term['target'] if take else term['fallthrough']
                elif term['op'] == 'return': state.result = values[term['value']]; state.halted = True
                else: raise UnknownSemantics(term.get('reason', 'unknown control'))
            steps += 1
            if trace and boundary: trace(steps, ins, state)
    return steps


def optimize(program):
    """Block-local constant folding and register forwarding; ordered effects stay.

    No host call, read, write or unknown operation is discarded. Pure dead values
    are removed only when not needed by a later effect or a block's output state.
    The optimized form intentionally has no per-instruction trace contract.
    """
    import copy
    result = copy.deepcopy(program)
    folded = removed = 0
    for block in result['blocks']:
        constants = {}; registers = {}
        for ins in block['instructions']:
            for node in ins['effects']:
                op = node['op']
                if op == 'reg.read' and node['index'] in registers:
                    source = registers[node['index']]
                    if source in constants:
                        name = node['id']
                        node.clear(); node.update(id=name, op='const', bits=64, value=constants[source])
                        folded += 1
                elif op == 'reg.write': registers[node['index']] = node['args'][0]
                elif op in PURE - {'const'} and all(a in constants for a in node.get('args', [])):
                    value = arithmetic(op, [constants[a] for a in node['args']], node.get('bits', 64), node.get('from_bits', 8))
                    name = node['id']; bits = node.get('bits', 64)
                    node.clear(); node.update(id=name, op='const', bits=bits, value=value); folded += 1
                elif op == 'unknown' or (op == 'call' and any(w in ('all','registers') for w in node.get('writes',[]))): registers.clear()
                if node['op'] == 'const': constants[node['id']] = node['value'] & ((1 << node.get('bits',64)) - 1)
        live = set(block['instructions'][-1]['stack_after'])
        for ins in block['instructions']:
            term = ins.get('control', {})
            live.update(term[k] for k in ('condition', 'value') if k in term)
        for ins in reversed(block['instructions']):
            kept = []
            for node in reversed(ins['effects']):
                if node['op'] in PURE and node['id'] not in live:
                    removed += 1; continue
                live.update(node.get('args', [])); kept.append(node)
            ins['effects'] = list(reversed(kept))
    result['optimization'] = {'constant_folds': folded, 'dead_pure_values_removed': removed,
        'contract': 'Block exit state, host effects, control and result; no instruction trace.'}
    return result
