"""Minimal FH4 catch metadata reader used to build the Pafet native probe."""
from pathlib import Path
import pefile,struct
BASE=0x140000000

class MetadataReader:
    def __init__(self):
        self.pe=pefile.PE(str(Path(__file__).resolve().parents[2] / 'pafet.bin'))
        self.eh_cache={}
        self.rf=list(self.pe.DIRECTORY_ENTRY_EXCEPTION)
    def unsigned(self,data,pos):
        first=data[pos];n=1
        while n<5 and first&1:first>>=1;n+=1
        if n==5:return int.from_bytes(data[pos+1:pos+5],'little'),pos+5
        return int.from_bytes(data[pos:pos+n],'little')>>n,pos+n
    def handlers(self,e):
        start=e.struct.BeginAddress
        if start in self.eh_cache:return self.eh_cache[start]
        out=[];self.eh_cache[start]=out
        rva=e.struct.UnwindData;raw=self.pe.get_data(rva,256)
        if not (raw[0]>>3)&1:return out
        at=4+((raw[2]+1)&~1)*2
        handler=struct.unpack_from('<I',raw,at)[0]
        if handler!=0x3a4768:return out
        info=struct.unpack_from('<I',raw,at+4)[0]
        data=self.pe.get_data(info,64);header=data[0];pos=1
        if header&4:_,pos=self.unsigned(data,pos)
        if header&8:pos+=4
        if not header&16:return out
        trymap=struct.unpack_from('<I',data,pos)[0]
        data=self.pe.get_data(trymap,1024);n,pos=self.unsigned(data,0)
        for _ in range(n):
            lo,pos=self.unsigned(data,pos);hi,pos=self.unsigned(data,pos);ch,pos=self.unsigned(data,pos)
            hm=struct.unpack_from('<I',data,pos)[0];pos+=4
            hd=self.pe.get_data(hm,1024);nh,hp=self.unsigned(hd,0)
            for j in range(nh):
                h=hd[hp];hp+=1;adj=0;ty=0;objoff=0
                if h&1:adj,hp=self.unsigned(hd,hp)
                if h&2:ty=struct.unpack_from('<I',hd,hp)[0];hp+=4
                if h&4:objoff,hp=self.unsigned(hd,hp)
                fn=struct.unpack_from('<I',hd,hp)[0];hp+=4
                cont=[]
                for k in range((h>>4)&3):
                    if h&8:c=struct.unpack_from('<I',hd,hp)[0];hp+=4
                    else:c,hp=self.unsigned(hd,hp);c+=start
                    cont.append(BASE+c)
                out.append((ty,adj,objoff,BASE+fn,cont))
        return out
