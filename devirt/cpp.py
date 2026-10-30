"""Emit direct C++ basic blocks from semantic IR, with no runtime opcode decoder."""
from .ir import PURE


def literal(value):
    return f'UINT64_C(0x{value:x})'


def expression(node):
    op = node['op']; a = node.get('args', [])
    if op == 'const': return literal(node['value'])
    if op == 'shr': return f'ir_shr({a[0]}, {a[1]}, {node.get("bits",64)})'
    if op in ('add', 'mul', 'xor', 'ne', 'ult'):
        return f'({a[0]} ' + {'add': '+', 'mul': '*', 'xor': '^', 'ne': '!=', 'ult': '<'}[op] + f' {a[1]})'
    if op == 'not': return f'~{a[0]}'
    if op in ('slt', 'sgt'):
        cmp = '<' if op == 'slt' else '>'
        return f'(({a[0]} ^ UINT64_C(0x8000000000000000)) {cmp} ({a[1]} ^ UINT64_C(0x8000000000000000)))'
    if op == 'sext':
        sign = 1 << (node['from_bits'] - 1); mask = (1 << node['from_bits']) - 1
        return f'(({a[0]} & {literal(sign)}) ? ({a[0]} | {literal(((1<<64)-1) ^ mask)}) : ({a[0]} & {literal(mask)}))'
    if op == 'reg.read': return f's.registers[{node["index"]}]'
    if op == 'index.read': return 's.index'
    if op == 'buffer.size': return f's.{node["buffer"]}.size()'
    if op == 'load8': return f's.{node["buffer"]}.at({a[0]})'
    if op == 'call': return f'{node["function"]}(s' + ''.join(', ' + x for x in a) + ')'
    raise ValueError(('unhandled expression', op))


def statement(node):
    op = node['op']; a = node.get('args', [])
    if op == 'unknown':
        return (f'[[maybe_unused]] const uint64_t {node["id"]} = ' if 'id' in node else '') + 'unknown_value();'
    if op == 'reg.write': return f's.registers[{node["index"]}] = {a[0]};'
    if op == 'index.write': return f's.index = {a[0]};'
    if op == 'buffer.copy': return f's.{node["dst_buffer"]} = s.{node["src_buffer"]};'
    if op == 'buffer.reverse': return f'std::reverse(s.{node["buffer"]}.begin(), s.{node["buffer"]}.end());'
    if op == 'store8': return f's.{node["buffer"]}.at({a[0]}) = uint8_t({a[1]});'
    expr = expression(node)
    if node.get('bits', 64) != 64: expr = f'({expr}) & {literal((1 << node["bits"]) - 1)}'
    return f'[[maybe_unused]] const uint64_t {node["id"]} = {expr};'


def emit(program, optimized=False):
    lines = ['// Generated from original PE bytecode. Do not edit; regenerate with python -m devirt.',
             f'// PE SHA-256: {program["pe_sha256"]}',
             '// Contract: decoded User-VM state and byte-buffer host effects; native protection state excluded.',
             '#include "runtime.hpp"', 'namespace pafet_devirt {']
    for name, function in program['functions'].items():
        params = ''.join(', uint64_t ' + p for p in function['parameters'])
        linkage = '' if name == 'host_4' else '[[maybe_unused]] static '
        lines += [f'// {function["role"]}; {function["evidence"]}', f'{linkage}uint64_t {name}(State& s{params}) {{']
        lines += ['    ' + statement(n) for n in function['body']]
        lines += [f'    return {function["return"]};', '}']
    lines += ['void execute_generated(State& s, const Trace& trace, size_t budget) {',
              '    goto B0;']
    for block in program['blocks']:
        lines += [f'B{block["pc"]}: {{ // incoming stack: {block["stack_in"]} uint64 values']
        lines += [f'    if (s.stack.size() != {block["stack_in"]}) throw std::runtime_error("edge stack shape");']
        if optimized:
            lines += [f'    if (s.steps > budget || budget - s.steps < {len(block["instructions"])}) throw std::runtime_error("block budget");']
        lines += [f'    [[maybe_unused]] const uint64_t s{i} = s.stack[{i}];' for i in range(block['stack_in'])]
        for ins in block['instructions']:
            lines += [f'    // pc {ins["pc"]}: {ins["encoded_hex"]} -> {ins["operation"]} {ins["operands"]}']
            if not optimized: lines += ['    if (s.steps >= budget) throw std::runtime_error("instruction budget");']
            lines += ['    ' + statement(n) for n in ins['effects']]
            if not optimized or ins is block['instructions'][-1]:
                lines += ['    s.stack = {' + ', '.join(ins['stack_after']) + '};',
                          f'    s.pc = {ins["fallthrough_pc"] or 0}; s.post_core_pc = s.pc;',
                          f'    s.opcode_pc = {ins["pc"]}; s.opcode = {ins["logical_opcode"]};']
                term = ins.get('control', {})
                if term.get('op') == 'jump': lines += [f'    s.pc = {term["target"]};']
                elif term.get('op') == 'branch':
                    test = '==' if term['zero'] else '!='
                    lines += [f'    s.pc = {term["condition"]} {test} 0 ? {term["target"]} : {term["fallthrough"]};']
                elif term.get('op') == 'return': lines += [f'    s.result = {term["value"]}; s.halted = true;']
                elif term.get('op') == 'unknown': lines += ['    throw std::runtime_error("Unknown control");']
                if optimized:
                    count = len(block['instructions'])
                    lines += [f'    s.steps += {count};']
                else: lines += ['    ++s.steps;']
                lines += ['    if (trace) trace(s);']
        last = block['instructions'][-1]; term = last.get('control', {})
        if term.get('op') == 'return': lines += ['    return;']
        elif term.get('op') == 'branch':
            test = '==' if term['zero'] else '!='
            lines += [f'    if ({term["condition"]} {test} 0) goto B{term["target"]};', f'    goto B{term["fallthrough"]};']
        elif term.get('op') == 'jump': lines += [f'    goto B{term["target"]};']
        elif term.get('op') != 'unknown': lines += [f'    goto B{last["fallthrough_pc"]};']
        lines += ['}']
    return '\n'.join(lines + ['}', '} // namespace pafet_devirt', ''])


def pseudocode(program):
    """A short semantic view: omit instrumentation and literal-encoding comments."""
    code = emit(program, optimized=True).splitlines()
    keep = []
    for line in code:
        stripped = line.strip()
        if any(x in line for x in ('s.steps', 'budget', 'trace(s)', 's.opcode', 's.pc =', 's.post_core_pc', 'edge stack shape')): continue
        if stripped.startswith('// pc '): continue
        line = line.replace('[[maybe_unused]] const uint64_t ', 'let ').replace('UINT64_C(', 'u64(')
        keep.append(line)
    return '// Readable control/effect view. Executable C++ is in user.optimized.cpp.\n' + '\n'.join(keep) + '\n'


def structured(program, predicates):
    """Structure the actual single-loop CFG after an explicit abstract-state proof.

    Fail if the graph does not have the proved shape. No output formula replaces
    the recovered instructions. The first-16-zero entry contract is enforced.
    """
    blocks = {b['pc']: b for b in program['blocks']}
    def successor(pc):
        last = blocks[pc]['instructions'][-1]; t = last.get('control', {})
        if t.get('op') == 'return': return None
        if t.get('op') == 'jump': return t['target']
        if t.get('op') == 'branch':
            possible = predicates.get(str(last['pc']))
            if possible is None or len(possible) != 1: return 'dynamic'
            take = (possible[0] == 0) == t['zero']
            return t['target'] if take else t['fallthrough']
        return last['fallthrough_pc']
    def chain(start, stop):
        result = []; pc = start
        while pc not in stop:
            if pc is None: return result, None
            if pc in result: raise ValueError('additional cycle in structured graph')
            if pc == 'dynamic': raise ValueError('additional dynamic branch')
            result.append(pc); pc = successor(pc)
        return result, pc
    dynamic = [pc for pc in blocks if successor(pc)=='dynamic']
    if len(dynamic) != 1: raise ValueError('expected exactly one data-dependent branch')
    header = dynamic[0]; t = blocks[header]['instructions'][-1]['control']
    prefix, end = chain(program['entry'], {header}); assert end == header
    options = []
    for start in (t['target'], t['fallthrough']): options.append(chain(start,{header}))
    body_index = next(i for i,(_,end) in enumerate(options) if end==header)
    exit_index = 1-body_index
    if options[exit_index][1] is not None: raise ValueError('exit does not return')
    body, _ = options[body_index]; suffix, _ = options[exit_index]
    # Reuse the IR-generated host bodies, excluding the generic goto executor.
    lines = emit(program, optimized=True).split('void execute_generated',1)[0].splitlines()
    lines += ['// Structured CFG under the analyzer contract; initial registers 0..15 must be zero.',
              'void execute_generated(State& s, const Trace& trace, size_t budget) {',
              '    for (unsigned i=0;i<16;++i) if (s.registers[i]) throw std::runtime_error("structured entry contract");']
    def fragment(pc, indent, dynamic_header=False):
        b=blocks[pc]; out=[indent+'{ // recovered block '+str(pc)]
        out += [indent+f'    if (s.stack.size() != {b["stack_in"]}) throw std::runtime_error("edge stack shape");',
                indent+f'    if (s.steps > budget || budget-s.steps < {len(b["instructions"])}) throw std::runtime_error("block budget");']
        out += [indent+f'    [[maybe_unused]] const uint64_t s{i}=s.stack[{i}];' for i in range(b['stack_in'])]
        for ins in b['instructions']: out += [indent+'    '+statement(n) for n in ins['effects']]
        last=b['instructions'][-1]; term=last.get('control',{})
        out += [indent+'    s.stack={'+', '.join(last['stack_after'])+'};',
                indent+f'    s.post_core_pc={last["fallthrough_pc"]}; s.opcode_pc={last["pc"]}; s.opcode={last["logical_opcode"]};']
        if dynamic_header:
            test='==' if term['zero'] else '!='
            expr=f'({term["condition"]} {test} 0)'
            out += [indent+f'    const bool taken={expr};',
                    indent+f'    s.pc=taken ? {term["target"]} : {term["fallthrough"]};',
                    indent+f'    loop_exit={"taken" if exit_index==0 else "!taken"};']
        else:
            nxt=successor(pc)
            out += [indent+f'    s.pc={nxt if nxt is not None else last["fallthrough_pc"]};']
            if term.get('op')=='return': out += [indent+f'    s.result={term["value"]}; s.halted=true;']
        out += [indent+f'    s.steps+={len(b["instructions"])}; if(trace) trace(s);',indent+'}']
        return out
    for pc in prefix: lines += fragment(pc,'    ')
    lines += ['    while (true) {', '        bool loop_exit=false;']
    lines += fragment(header,'        ',True)
    lines += ['        if (loop_exit) break;']
    for pc in body: lines += fragment(pc,'        ')
    lines += ['    }']
    for pc in suffix: lines += fragment(pc,'    ')
    lines += ['}', '} // namespace pafet_devirt', '']
    shape={'prefix_blocks':prefix,'loop_header':header,'loop_body_blocks':body,'exit_blocks':suffix,
           'proved_predicates':predicates,'contract':'First 16 logical registers zero; host contracts as in abstract analyzer.',
           'covered_blocks':len(prefix)+1+len(body)+len(suffix)}
    return '\n'.join(lines), shape
