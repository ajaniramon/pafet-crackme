"""PAFET x64 entry contract. No observation/expected-result files are inputs.

Profiles describe discovered layouts, not an ABI inferred from a VM's name.
Preflight proves declared coverage; runtime read-before-write checks establish
closure only for the executed path. Future pointer dependencies remain unknown.
"""
import hashlib
import json
import pathlib
import struct

ORIGINAL_SHA256='fe85e59225387fba4923f3bc6103914fe7b85ba3dc0514c9e37382818fb44d1a'
VARIANT_SHA256='80a751350c8ed61ab25de6c8e81c2ec1c838af2126fe1eafbf1f89d0518407e7'
PAGE=4096
PROFILES={
    'user-v1': {'context_bytes':0x2000,'arrays':[(0x1158,0x1000,'encoded register banks'),(0x1160,0x2000,'encoded virtual stack')]},
    'native-x64-v1': {'context_bytes':0,'arrays':[]},
}


class ContractError(ValueError):
    def __init__(self,kind,message,**details):
        self.kind=kind;self.details=details
        super().__init__(message)
    def report(self):return {'classification':self.kind,'message':str(self),'details':self.details}


def require(test,message,kind='incomplete-input',**details):
    if not test:raise ContractError(kind,message,**details)


def unhex(value,label):
    try:return bytes.fromhex(value)
    except (ValueError,TypeError):raise ContractError('malformed-input','Invalid hex bytes',field=label)


class Memory:
    """Byte-accurate initialization coverage; equal aliases merge, conflicts fail."""
    def __init__(self):self.pages={};self.valid={};self.alias_bytes=0
    def add(self,address,data,label='input',overwrite=False):
        require(isinstance(address,int) and 0<=address<1<<64 and len(data)>0,'Invalid memory extent','malformed-input',label=label)
        require(address+len(data)<=1<<64,'Memory extent overflows','malformed-input',label=label)
        cursor=0
        while cursor<len(data):
            at=address+cursor;page=at&~(PAGE-1);offset=at-page;n=min(PAGE-offset,len(data)-cursor)
            if page not in self.pages:
                require(len(self.pages)<32768,'Input memory exceeds contract limit','malformed-input')
                self.pages[page]=bytearray(PAGE);self.valid[page]=bytearray(PAGE)
            old=self.pages[page][offset:offset+n];mask=self.valid[page][offset:offset+n];new=data[cursor:cursor+n]
            if not overwrite and any(mask):
                bad=next((i for i,(a,b,k) in enumerate(zip(old,new,mask)) if k and a!=b),None)
                require(bad is None,'Overlapping snapshots disagree','contradictory-memory',address=hex(at+(bad or 0)),label=label)
                self.alias_bytes+=sum(mask)
            self.pages[page][offset:offset+n]=new;self.valid[page][offset:offset+n]=b'\1'*n;cursor+=n
    def covered(self,address,size):
        cursor=0
        while cursor<size:
            at=address+cursor;page=at&~(PAGE-1);offset=at-page;n=min(PAGE-offset,size-cursor)
            if page not in self.valid or 0 in self.valid[page][offset:offset+n]:return False
            cursor+=n
        return size>=0
    def read(self,address,size,label='required memory'):
        require(self.covered(address,size),'Required before-memory is absent',address=hex(address),size=size,label=label)
        chunks=[]
        for at in self._chunks(address,size):
            page=at&~(PAGE-1);offset=at-page;n=min(PAGE-offset,address+size-at)
            chunks.append(bytes(self.pages[page][offset:offset+n]))
        return b''.join(chunks)
    @staticmethod
    def _chunks(address,size):
        at=address
        while at<address+size:yield at;at=min((at&~(PAGE-1))+PAGE,address+size)
    def mark(self,address,size):
        for at in self._chunks(address,size):
            page=at&~(PAGE-1);offset=at-page;n=min(PAGE-offset,address+size-at)
            self.valid.setdefault(page,bytearray(PAGE))[offset:offset+n]=b'\1'*n


def subtract(lo,hi,allowed):
    cursor=lo
    for a,b in sorted(allowed):
        if b<=cursor or a>=hi:continue
        if a>cursor:yield cursor,min(a,hi)
        cursor=max(cursor,min(b,hi))
    if cursor<hi:yield cursor,hi


def validate_entry(entry,pe):
    """Validate inputs only. Accept older pinned User entries with explicit limits."""
    require(isinstance(entry,dict),'Entry must be an object','malformed-input')
    state=entry.get('state',{});gprs=state.get('gprs')
    require(isinstance(gprs,list) and len(gprs)==16,'Exactly 16 initial GPRs are required')
    for i,n in enumerate(gprs):require(isinstance(n,int) and 0<=n<1<<64,'Invalid GPR','malformed-input',register=i)
    for name,bits in [('rip',64),('flags',32),('mxcsr',32)]:
        value=state.get(name);require(isinstance(value,int) and 0<=value<1<<bits,'Missing/invalid initial register',register=name)
    require(len(unhex(state.get('xmm'),'XMM'))==256,'Exactly 16 initial XMM registers are required')
    require(state['flags']&0x10100==0,'Debugger TF/RF must be normalized explicitly','malformed-input')
    base=entry.get('base');gs=entry.get('gs_base')
    require(isinstance(base,int) and base>0 and base%PAGE==0,'Invalid runtime image base','malformed-input')
    require(isinstance(gs,int) and gs>0,'GS/TEB base is required')
    meta=entry.get('contract',{});profile=meta.get('profile','user-v1')
    require(profile in PROFILES,'Unsupported state profile','unsupported-profile',profile=profile)
    new=bool(meta);spec=PROFILES[profile]
    require(not new or meta.get('version')==1,'Unsupported contract version','unsupported-profile')
    if new:
        selectors=meta.get('selectors',{})
        require(all(isinstance(selectors.get(n),int) and 0<=selectors[n]<65536 for n in ('SegCs','SegSs','SegDs','SegEs','SegFs','SegGs')),'Missing segment-selector provenance')
    regions=entry.get('regions');require(isinstance(regions,list) and regions,'No captured memory regions')
    memory=Memory()
    for i,region in enumerate(regions):memory.add(region.get('address'),unhex(region.get('hex'),'region '+str(i)),str(region.get('labels',[])))
    image=pe.get_memory_mapped_image(ImageBase=base);image_size=pe.OPTIONAL_HEADER.SizeOfImage
    writable=[]
    for section in pe.sections:
        if section.Characteristics&0x80000000:
            lo=base+section.VirtualAddress;hi=lo+section.Misc_VirtualSize
            memory.read(lo,hi-lo,'writable PE '+str(section.Name));writable.append((lo&~4095,(hi+4095)&~4095))
    iat=pe.OPTIONAL_HEADER.DATA_DIRECTORY[12];iat_range=(base+iat.VirtualAddress,base+iat.VirtualAddress+iat.Size)
    if new and iat.Size:memory.read(iat_range[0],iat.Size,'initialized IAT')
    # A captured writable section may vary; captured readonly code/data may not
    # silently replace the PE. IAT is a named loader-populated exception.
    for region in regions:
        at=region['address'];data=unhex(region['hex'],'region')
        for a,b in subtract(max(at,base),min(at+len(data),base+len(image)),writable+[iat_range]):
            require(data[a-at:b-at]==image[a-base:b-base],'Captured readonly PE bytes disagree with original relocated image','code-overlay',address=hex(a))
    rsp=gprs[4];native_return=entry.get('native_return')
    require(isinstance(native_return,int),'Initial return address is required')
    require(struct.unpack('<Q',memory.read(rsp,8,'entry return slot'))[0]==native_return,'Return address contradicts entry stack','contradictory-memory')
    stop=entry.get('stop',native_return);require(isinstance(stop,int) and stop!=state['rip'],'A nonempty execution boundary is required','malformed-input')
    if 'stop_any' in entry:
        stops=entry['stop_any'];require(isinstance(stops,list) and stops and len(stops)==len(set(stops)) and all(isinstance(s,int) and base<=s<base+image_size and s!=state['rip'] for s in stops),'Invalid alternative boundaries','malformed-input')
    require(base<=state['rip']<base+image_size,'Entry RIP is outside the verified PE','malformed-input')
    stack=meta.get('stack')
    if stack:
        require(stack.get('committed') is True and stack['address']<=rsp<stack['address']+stack['size'],'Invalid committed stack descriptor','malformed-input')
        memory.read(stack['address'],stack['size'],'complete declared committed stack')
    else:
        require(not new,'New captures must declare the committed stack range')
        require(any('committed native stack' in label for r in regions for label in r.get('labels',[])),'Legacy capture has no native-stack provenance')
    memory.read(gs,0x1000,'TEB');tls=struct.unpack('<Q',memory.read(gs+0x58,8))[0]
    if tls:
        memory.read(tls,8,'TLS array slot 0');slot=struct.unpack('<Q',memory.read(tls,8))[0]
        if slot:memory.read(slot,8,'TLS slot-zero root')
    arrays=[]
    if spec['context_bytes']:
        ctx=entry.get('context');require(ctx==gprs[1],'User profile requires its demonstrated RCX context','contradictory-memory')
        memory.read(ctx,spec['context_bytes'],'User context window')
        for offset,size,role in spec['arrays']:
            address=struct.unpack('<Q',memory.read(ctx+offset,8))[0];memory.read(address,size,role)
            arrays.append({'address':address,'size':size,'role':role})
        require(entry.get('known_arrays')==arrays,'Pointed-array descriptors contradict the User profile','contradictory-memory')
    else:require(not entry.get('known_arrays'),'Generic profile cannot inherit User array descriptors','unsupported-profile')
    for region in meta.get('required_regions',[]):memory.read(region['address'],region['size'],region['role'])
    for pointer in meta.get('pointer_roots',[]):
        require(struct.unpack('<Q',memory.read(pointer['field'],8,'pointer field'))[0]==pointer['address'],'Declared pointer root contradicts before-memory','contradictory-memory')
        memory.read(pointer['address'],pointer['size'],'declared pointer target')
    cookie=struct.unpack('<Q',memory.read(base+0x40d020,8,'runtime security cookie'))[0]
    # Populate initialized readonly PE memory, excluding uncaptured IAT bytes.
    initialized=Memory()
    spans=[(base,min(len(image),pe.OPTIONAL_HEADER.SizeOfHeaders))]
    spans += [(base+s.VirtualAddress,s.Misc_VirtualSize) for s in pe.sections if not s.Characteristics&0x80000000]
    for lo,size in spans:
        for a,b in subtract(lo,lo+size,[iat_range]):
            if a<b:initialized.add(a,image[a-base:b-base],'PE initialized readonly')
    for region in regions:initialized.add(region['address'],unhex(region['hex'],'region'),'captured initial state',overwrite=True)
    report={'profile':profile,'legacy_transport':not new,'declared_inputs_valid':True,'array_count':len(arrays),
            'captured_pages':len(memory.pages),'consistent_alias_bytes':memory.alias_bytes,'runtime_base':hex(base),
            'cookie':hex(cookie),'cookie_differs_from_static_default':cookie!=0x2b992ddfa232,
            'path_completeness':'Not a universal closure proof; every executed read/fetch must be initialized or previously written.',
            'unavailable':['FS base unless explicitly captured','arbitrary transitive pointer closure','unvisited host/exception dependencies']}
    return memory,initialized,report


def load_verified(path,digest):
    data=pathlib.Path(path).read_bytes()
    require(hashlib.sha256(data).hexdigest()==digest,'Artifact hash mismatch','integrity',path=str(path))
    return data


def load_frames(folder):
    """Manifest inventory is authoritative; directory globbing is not evidence."""
    folder=pathlib.Path(folder)
    require((folder/'manifest.json').is_file(),'Capture manifest is required','empty-corpus')
    manifest=json.loads((folder/'manifest.json').read_bytes())
    frames=manifest.get('frames');require(isinstance(frames,list) and frames,'No native frames in manifest','empty-corpus')
    stems=[r['stem'] for r in frames];require(len(stems)==len(set(stems)),'Duplicate frame stems','integrity')
    if manifest.get('schema')=='pafet-capture-v2':
        require(manifest.get('status') in ('complete','blocked'),'Missing capture status','integrity')
        if manifest['status']=='complete':require(len(frames)==manifest['requested_frames'] and all(r['status']=='complete' for r in frames),'Incomplete capture marked complete','integrity')
    actual={p.name.split('.')[0] for p in folder.glob('*.entry.json.gz')}
    require(actual==set(stems),'Manifest and entry inventory disagree','integrity',manifest=stems,found=sorted(actual))
    require({p.name.split('.')[0] for p in folder.glob('*.trace.json.gz')}==set(stems),'Trace inventory disagrees','integrity')
    for row in frames:
        require(pathlib.Path(row['stem']).name==row['stem'],'Invalid frame path','integrity')
        for kind in ('entry','trace'):
            if kind+'_sha256' in row:load_verified(folder/(row['stem']+'.'+kind+'.json.gz'),row[kind+'_sha256'])
    return manifest
