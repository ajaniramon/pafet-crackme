"""Scalar remap rebuild and thunk materialization from original PE tables."""
import struct
from .serial import MASK, PHI, mix, mid
from .serial_continuous import signed32


def thunk(address,target,codec,key_address,key):
    out=bytearray()
    if codec in (1,2):out+=b'\x4c\x8b\x1d'+struct.pack('<I',(key_address-address-7)&0xffffffff)
    value=target^key if codec==1 else (target-key)&MASK if codec==2 else target
    out+=b'\x48\xb8'+struct.pack('<Q',value)
    if codec==1:out+=b'\x4c\x31\xd8'
    elif codec==2:out+=b'\x4c\x01\xd8'
    elif codec==3:out+=b'\x48\xf7\xd0\x48\xf7\xd0'
    out+=b'\xff\xe0'
    seed=mix(key^address^0x5354554253545542)
    while len(out)<32:
        seed=mix(seed+len(out));out.append((seed>>24)&255)
    return bytes(out)


def rebuild(s):
    count=signed32(s.u(0x11e0,4));old=s.u(0x260)
    seed=mix((count*PHI)^s.u(0xac8)^s.u(0x348)^s.u(0x20)^old^s.u(0x320))|1
    s.put(0x320,seed)
    mask=((old>>17)^(seed>>32)^((count*0x9e3779b9)&0xffffffff)^seed)&0xffffffff
    s.put(0x4c8,mask,4)
    dynamic=s.u(0x1198,4)!=0;pool=s.u(0x1190)
    if dynamic:
        s.put(0x4c0,pool);key=mix(old^seed^0x48444c4b4559)|1
        s.m.add(pool,key.to_bytes(8,'little'),overwrite=True)
    else:
        s.put(0x4c0,int.from_bytes(s.pe.get_data(0x3e2340,8),'little')-s.pe.OPTIONAL_HEADER.ImageBase+s.runtime_base);key=0
    flags=s.runtime_base+0x43abd8;s.m.add(flags,b'\0'*4,overwrite=True)
    used=0
    for domain in range(4):
        shuffle=mix((((s.u(0x320,4)^0xa5a5a5a5)-((domain*0x61c88647)&0xffffffff))&0xffffffff)^0x4a495421)&0xffffffff
        s.put(0x320,mix(s.u(0x320)+1+domain)|1)
        order=list(range(62))
        for n in range(62,1,-1):
            shuffle=mix(((n*0x9e3779b9)&0xffffffff)^shuffle^0x4a495421)&0xffffffff
            other=shuffle%n;order[n-1],order[other]=order[other],order[n-1]
        for slot,alias in enumerate(order):
            s.put(0x6c8+2*(domain*62+slot),alias,2)
            s.put(0x4ce+2*(domain*62+alias),slot,2)
        preferred=s.pe.OPTIONAL_HEADER.ImageBase
        remap=int.from_bytes(s.pe.get_data(0x3e95a0+domain*8,8),'little')-preferred
        handlers=int.from_bytes(s.pe.get_data(0x3e2340+domain*8,8),'little')-preferred
        for slot,alias in enumerate(order):
            index=int.from_bytes(s.pe.get_data(remap+alias*2,2),'little')
            target=int.from_bytes(s.pe.get_data(handlers+index*8,8),'little')-preferred+s.runtime_base
            if dynamic:
                address=pool+32*(1+domain*62+slot)
                h=mid(domain^(((slot+1)*PHI)&MASK)^s.u(0x320))
                codec=((h>>42)^(h>>9))&3
                s.m.add(address,thunk(address,target,codec,pool,key),overwrite=True)
                target=address;used|=1<<codec
            encoded=((target-s.u(0x4c0))&0xffffffff)^mask
            s.m.add(s.u(0x4b8)+4*(domain*62+slot),encoded.to_bytes(4,'little'),overwrite=True)
    s.m.add(flags,used.to_bytes(4,'little'),overwrite=True)
    s.put(0x1178,mix(s.u(0x1178,4)^s.u(0x320)),4);s.put(0x328,s.u(0x328,4)+1,4)
    return dict(entries=248,dynamic=dynamic,codec_mask=used)
