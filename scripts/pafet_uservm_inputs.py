"""Coverage contract for input-only User-VM frames, independent of expectations."""
import struct


class IncompleteCapture(ValueError):
    pass


def intervals(vector):
    ctx=int(vector.get('native_before',vector['regs'])['rcx'],16)
    rsp=int(vector.get('native_before',vector['regs'])['rsp'],16)
    spans=[(ctx,len(bytes.fromhex(vector['ctx_hex'])))]
    if vector.get('stack_hex'):spans.append((rsp,len(bytes.fromhex(vector['stack_hex']))))
    if vector.get('stack_below_hex'):spans.append((rsp-0x800,len(bytes.fromhex(vector['stack_below_hex']))))
    spans += [(int(at,0),len(bytes.fromhex(info['before_hex']))) for at,info in vector.get('extra',{}).items()]
    return spans


def missing_ranges(address,size,spans):
    result=[];cursor=address;end=address+size
    for lo,n in sorted(spans):
        hi=lo+n
        if hi<=cursor or lo>=end:continue
        if lo>cursor:result.append((cursor,min(lo,end)))
        cursor=max(cursor,min(hi,end))
        if cursor==end:break
    if cursor<end:result.append((cursor,end))
    return result


def require_complete(vector):
    ctx=bytes.fromhex(vector['ctx_hex']);spans=intervals(vector);failures=[]
    for offset,size,role in [(0x1158,0x1000,'encoded register banks'),(0x1160,0x2000,'encoded virtual stack')]:
        pointer=struct.unpack_from('<Q',ctx,offset)[0]
        missing=missing_ranges(pointer,size,spans)
        if missing:failures.append({'role':role,'pointer':hex(pointer),'size':size,
                                   'missing':[[hex(a),hex(b)] for a,b in missing]})
    if failures:raise IncompleteCapture(failures)
    return True
