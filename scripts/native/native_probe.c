#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <sys/mman.h>
#include <unistd.h>
#include <sys/syscall.h>
#include <asm/prctl.h>
#include <signal.h>
#include <ucontext.h>
#include "native_meta.h"
#define BASE 0x140000000ULL
#define MS __attribute__((ms_abi))
typedef struct {uint64_t g[16],rip,flags;uint8_t xmm[16][16];} Context;
extern void capture_exception(void),capture_catch_return(void);
static Context pending[128];static int depth;static uint64_t heapnext=0x60000000;
static uint64_t exceptions;static uint64_t lastreport;
static uint64_t probe_tick=1;
static uint8_t *debug_out;
static uint64_t q(uint64_t p){return *(uint64_t*)p;}
static uint32_t d(uint64_t p){return *(uint32_t*)p;}
static void *alloc(size_t n){if(n>0x1000000||heapnext+n>=0x70000000){fprintf(stderr,"bad alloc %zx\n",n);exit(2);}void *p=(void*)heapnext;heapnext+=(n+15)&~15ULL;return p;}
static void MS stub_free(void *p){(void)p;}
static void * MS stub_new(size_t n){return alloc(n);}
static void * MS stub_memset(void *p,int v,size_t n){return memset(p,v,n);}
static void * MS stub_memcpy(void *p,const void *s,size_t n){return memmove(p,s,n);}
static uint64_t MS stub_qpc(void){return probe_tick;}
static uint64_t MS stub_qpf(void){return 10000000;}
static void * MS stub_va(void *p,size_t n,uint32_t type,uint32_t perm){(void)p;(void)type;(void)perm;return alloc(n);}
static uint64_t MS stub_one(void){return 1;}
static uint64_t MS stub_zero(void){return 0;}
static void * MS stub_pcfile(void *p,void **out){(void)p;*out=(void*)BASE;return *out;}
static uint64_t MS stub_qpc_import(uint64_t *p){*p=probe_tick;return 1;}
static uint64_t MS stub_qpf_import(uint64_t *p){*p=10000000;return 1;}
static uint64_t MS stub_module(void *p){(void)p;return BASE;}
static void * MS stub_heap_alloc(void *heap,uint32_t flags,size_t n){(void)heap;(void)flags;return alloc(n);}
static void * MS stub_identity(void *p){return p;}
static void *tls_value;static void * MS stub_tls_get(uint32_t i){(void)i;return tls_value;}
static uint64_t MS stub_tls_set(uint32_t i,void *p){(void)i;tls_value=p;return 1;}
static void(MS *real_sha_block)(void*,const uint8_t*);
static size_t sha_expected,sha_seen;
static void MS trace_sha_block(void *state,const uint8_t *block){
    printf("ACTUAL-SHA-BLOCK ");for(int i=0;i<64;i++)printf("%02x",block[i]);puts("");
    real_sha_block(state,block);
    if(++sha_seen==sha_expected){printf("ACTUAL-SHA-DIGEST ");for(int i=0;i<8;i++)printf("%08x",((uint32_t*)state)[i]);puts("");exit(0);}
}
static void MS log_sha_block(void *state,const uint8_t *block){(void)state;printf("ACTUAL-SHA-BLOCK ");for(int i=0;i<64;i++)printf("%02x",block[i]);puts("");exit(0);}
static void MS stub_unknown(void){uint8_t *pc=__builtin_return_address(0);const char *name="?";if(pc[-6]==0xff&&pc[-5]==0x15){uint64_t va=(uint64_t)pc+*(int32_t*)(pc-4);for(size_t i=0;i<sizeof(imports)/sizeof(imports[0]);i++)if(BASE+imports[i].rva==va)name=imports[i].name;}fprintf(stderr,"Unknown API %s caller=%p\n",name,pc);exit(3);}
static void patch(uint64_t addr,void *fn){uint8_t *p=(void*)addr;p[0]=0x48;p[1]=0xb8;memcpy(p+2,&fn,8);p[10]=0xff;p[11]=0xe0;}
static uint64_t perm(uint64_t value,const uint8_t *t,int n,int bits){uint64_t out=0;for(int i=0;i<n;i++)out=(out<<1)|((value>>(bits-t[i]))&1);return out;}
static void MS fast_schedule(const uint8_t *key,uint64_t *ks){
    uint64_t k=0;for(int i=0;i<8;i++)k=(k<<8)|key[i];k=perm(k,(void*)(BASE+0x3ec908),56,64);uint32_t c=k>>28,d=k&0xfffffff;
    const uint8_t *rot=(void*)(BASE+0x3ec0b0);
    for(int i=0;i<16;i++){int r=rot[i];c=((c<<r)|(c>>(28-r)))&0xfffffff;d=((d<<r)|(d>>(28-r)))&0xfffffff;ks[i]=perm(((uint64_t)c<<28)|d,(void*)(BASE+0x3ed458),48,56);}
}
static void MS fast_des(const uint8_t *in,uint8_t *out,const uint64_t *ks,uint8_t enc){
    uint64_t block=0;for(int i=0;i<8;i++)block=(block<<8)|in[i];block=perm(block,(void*)(BASE+0x3def60),64,64);uint32_t l=block>>32,r=block;
    for(int i=0;i<16;i++){
        uint64_t e=perm(r,(void*)(BASE+0x3eead0),48,32)^ks[enc?i:15-i];uint32_t f=0;const uint8_t *s=(void*)(BASE+0x3f1150);
        for(int j=0;j<8;j++){int v=(e>>(42-6*j))&63;int row=((v&32)>>4)|(v&1),col=(v>>1)&15;f=(f<<4)|s[j*64+row*16+col];}
        f=perm(f,(void*)(BASE+0x3ea790),32,32);uint32_t next=l^f;l=r;r=next;
    }
    block=perm(((uint64_t)r<<32)|l,(void*)(BASE+0x3e03b0),64,64);for(int i=7;i>=0;i--){out[i]=block;block>>=8;}
}
static Rf *find_rf(uint64_t pc){if(pc<BASE||pc>=BASE+0x460000)return NULL;uint32_t r=pc-BASE;size_t lo=0,hi=sizeof(rfs)/sizeof(rfs[0]);while(lo<hi){size_t m=(lo+hi)/2;if(rfs[m].start<=r)lo=m+1;else hi=m;}return lo&&r<rfs[lo-1].end?&rfs[lo-1]:NULL;}
Context *handle_exception(Context *c){
    uint64_t *params=(void*)c->g[9];uint64_t obj=params[1],info=params[2];
    uint64_t cta=BASE+d(info+12);uint32_t ty=d(BASE+d(cta+4)+4);
    Context v=*c;uint64_t pc=q(v.g[4]);v.g[4]+=8;
    for(int i=0;i<64;i++){
        Rf *rf=find_rf(pc);
        if(rf){
            if(rf->fn&&rf->type==ty){
                /* Catch continuations inherit the enclosing wrapper's frame
                   pointer; reconstruct it from its unwind frame offset. */
                uint64_t frame_sp=v.g[4];uint8_t *uw=(void*)(BASE+rf->unwind);uint64_t caller_sp=frame_sp;int up=4;
                while(up<4+uw[2]*2){int op=uw[up+1]&15,in=uw[up+1]>>4;up+=2;
                    if(op==0)caller_sp+=8;
                    else if(op==1){if(in==0){caller_sp+=*(uint16_t*)(uw+up)*8;up+=2;}else{caller_sp+=*(uint32_t*)(uw+up);up+=4;}}
                    else if(op==2)caller_sp+=in*8+8;
                    else if(op==4||op==8)up+=2;else if(op==5||op==9)up+=4;
                }
                Rf *caller_rf=find_rf(q(caller_sp));
                if(caller_rf&&caller_rf->bp_offset>=0)v.g[5]=caller_sp+8+caller_rf->bp_offset;
                if(depth>=127){fprintf(stderr,"EH overflow\n");exit(4);}
                v.rip=rf->cont;pending[depth++]=v;
                if(rf->off){if(rf->adj&8)*(uint64_t*)(v.g[4]+rf->off)=obj;else memcpy((void*)(v.g[4]+rf->off),(void*)obj,32);}
                static Context target;target=v;target.rip=rf->fn;target.g[2]=v.g[4];target.g[4]-=0x108;*(uint64_t*)target.g[4]=(uint64_t)capture_catch_return;
                ++exceptions;
                if(exceptions-lastreport>=100000){lastreport=exceptions;fprintf(stderr,"exceptions=%lu heap=%lx\n",exceptions,heapnext-0x60000000);}
                return &target;
            }
            uint8_t *raw=(void*)(BASE+rf->unwind);uint64_t sp=v.g[4];int pos=4,count=raw[2];
            while(pos<4+count*2){
                int op=raw[pos+1]&15,info=raw[pos+1]>>4;pos+=2;
                if(op==0){v.g[info]=q(sp);sp+=8;}
                else if(op==1){if(info==0){sp+=*(uint16_t*)(raw+pos)*8;pos+=2;}else{sp+=*(uint32_t*)(raw+pos);pos+=4;}}
                else if(op==2)sp+=info*8+8;
                else if(op==3)sp=v.g[raw[3]&15]-(raw[3]>>4)*16;
                else if(op==4){uint64_t off=*(uint16_t*)(raw+pos)*8;pos+=2;v.g[info]=q(v.g[4]+off);}
                else if(op==5){uint64_t off=*(uint32_t*)(raw+pos);pos+=4;v.g[info]=q(v.g[4]+off);}
                else if(op==8){uint64_t off=*(uint16_t*)(raw+pos)*16;pos+=2;memcpy(v.xmm[info],(void*)(v.g[4]+off),16);}
                else if(op==9){uint64_t off=*(uint32_t*)(raw+pos);pos+=4;memcpy(v.xmm[info],(void*)(v.g[4]+off),16);}
                else{fprintf(stderr,"unknown unwind %d\n",op);exit(5);}
            }
            v.g[4]=sp;
        }
        pc=q(v.g[4]);v.g[4]+=8;
    }
    fprintf(stderr,"No catch for type %x\n",ty);exit(6);
}
Context *handle_catch_return(void){if(depth<=0){fprintf(stderr,"bad catch depth\n");exit(7);}return &pending[--depth];}
static void on_signal(int sig,siginfo_t *info,void *ctx){ucontext_t *u=ctx;fprintf(stderr,"SIGNAL %d at %p RIP=%llx RSP=%llx RBP=%llx exceptions=%lu heap=%lx\n",sig,info->si_addr,(unsigned long long)u->uc_mcontext.gregs[REG_RIP],(unsigned long long)u->uc_mcontext.gregs[REG_RSP],(unsigned long long)u->uc_mcontext.gregs[REG_RBP],exceptions,heapnext-0x60000000);if(debug_out){fprintf(stderr,"SUBKEYS ");for(int i=0;i<128;i++)fprintf(stderr,"%02x",debug_out[i]);fputc('\n',stderr);}_exit(128+sig);}
static void *newstr(const uint8_t *b,size_t n){uint8_t *p=alloc(48);if(n<16){memcpy(p,b,n);if(getenv("POISON_TAIL"))memset(p+n+1,0xa5,15-n);*(uint64_t*)(p+24)=15;}else{uint8_t *buf=alloc((n|15)+1);memcpy(buf,b,n);if(getenv("POISON_TAIL"))memset(buf+n+1,0xa5,(n|15)-n);*(void**)p=buf;*(uint64_t*)(p+24)=n|15;}*(uint64_t*)(p+16)=n;return p;}
static void print_str(const char *label,void *str){size_t n=q((uint64_t)str+16);uint8_t *b=q((uint64_t)str+24)>=16?*(void**)str:str;printf("%s ",label);for(size_t i=0;i<n;i++)printf("%02x",b[i]);puts("");fflush(stdout);}
static void *strhex(const char *hex){size_t n=strlen(hex)/2;uint8_t *b=alloc(n+1);for(size_t i=0;i<n;i++){char t[]={hex[2*i],hex[2*i+1],0};b[i]=strtoul(t,NULL,16);}return newstr(b,n);}
static uint64_t(MS *real_user_dispatch)(void*,uint32_t,void*);
static uint64_t MS trace_user_dispatch(void *ctx,uint32_t op,void *arg){
    uint64_t index=op==4?q(q((uint64_t)ctx+16)):0;
    uint64_t r=real_user_dispatch(ctx,op,arg);
    if(op==4)printf("USER-INDEX %lu\n",index);
    if(op==0||op==1||op==6){printf("USER-OP %u\n",op);print_str("WORKING",*(void**)ctx);if(op==6)print_str("OUTPUT",*(void**)((char*)ctx+24));}
    return r;
}
static void(MS *real_des_block)(const uint8_t*,uint8_t*,const uint64_t*,uint8_t);
static void MS trace_des_block(const uint8_t *in,uint8_t *out,const uint64_t *ks,uint8_t enc){
    uint8_t copy[8];memcpy(copy,in,8);real_des_block(in,out,ks,enc);
    fprintf(stderr,"DES-TRACE %u ",enc);for(int i=0;i<8;i++)fprintf(stderr,"%02x",copy[i]);fputc(' ',stderr);for(int i=0;i<8;i++)fprintf(stderr,"%02x",out[i]);
    for(int i=0;i<16;i++)fprintf(stderr," %012lx",ks[i]);fputc('\n',stderr);
}
/* Control-flow experiment only: abstract native host calls while retaining
   the original outer VM. These returns are NOT credential validation. */
static unsigned semantic_calls;
static int semantic_sha_fail,semantic_pad,semantic_shape,semantic_counter;
static uint64_t semantic_unused_value;
static uint64_t(MS *semantic_real_lookup)(void*,uint32_t,uint32_t);
static uint64_t(MS *semantic_real_read_byte)(void*);
static unsigned semantic_lookup_calls;
static uint64_t semantic_live_value(uint64_t vm,int i){
    uint64_t mask=q(vm+0x58)^(uint64_t)(i+1)*q(vm+0x60)^((uint64_t)*(uint8_t*)(vm+0xe8+i)*q(vm+0x68));
    uint64_t v=q(vm+0x78+i*8);return *(uint8_t*)(vm+0x70)?v-mask:v^mask;
}
static uint64_t MS semantic_read_byte(void *ctx){
    uint64_t vm=(uint64_t)ctx,pc=semantic_live_value(vm,1);
    uint64_t value=semantic_real_read_byte(ctx);
    if(*(uint8_t*)(vm+0xf60)==58)printf("SEMANTIC-ARG58 %lu %lu\n",pc,value&255);
    return value;
}
static uint64_t MS semantic_lookup(void *ctx,uint32_t table,uint32_t index){
    uint64_t result=semantic_real_lookup(ctx,table,index),vm=(uint64_t)ctx;
    if(++semantic_lookup_calls>8192){fprintf(stderr,"SEMANTIC opcode budget exceeded\n");exit(8);}
    printf("SEMANTIC-OP %lu %u %u %u %lx\n",semantic_live_value(vm,1),*(uint8_t*)(vm+0xf60),table,index,result);
    if(*(uint8_t*)(vm+0xf60)==58){
        printf("SEMANTIC-THUNK58 ");for(int i=0;i<32;i++)printf("%02x",((uint8_t*)result)[i]);puts("");
        uint8_t *b=(void*)result;uint64_t target=0;
        if(b[0]==0x48&&b[1]==0xb8)target=q(result+2);
        if(b[0]==0x4c&&b[1]==0x8b&&b[2]==0x1d&&b[7]==0x48&&b[8]==0xb8){
            uint64_t key=q(result+7+*(int32_t*)(b+3)),imm=q(result+9);
            if(b[17]==0x4c&&b[18]==0x31&&b[19]==0xd8)target=key^imm;
            if(b[17]==0x4c&&b[18]==0x01&&b[19]==0xd8)target=key+imm;
        }
        printf("SEMANTIC-TARGET58 %lx\n",target);
    }
    return result;
}
static int semantic_user_length,semantic_user_index;
static uint64_t semantic_user_value;
static uint64_t MS semantic_user_host(void *ctx,uint32_t op,void *arg){
    (void)ctx;uint64_t ret=0;
    if(++semantic_calls>2048){fprintf(stderr,"SEMANTIC user call budget exceeded\n");exit(8);}
    if(op==2)semantic_user_index=*(int64_t*)arg;
    if(op==3)ret=semantic_user_index<semantic_user_length;
    if(op==4)ret=semantic_user_value;
    if(op==5)ret=semantic_user_index;
    printf("SEMANTIC-USER %u %lu index=%d\n",op,ret,semantic_user_index);fflush(stdout);
    return ret;
}
static uint64_t MS semantic_host(void *ctx,uint32_t op,void *arg){
    (void)ctx;uint64_t ret=semantic_unused_value;
    if(++semantic_calls>128){fprintf(stderr,"SEMANTIC call budget exceeded\n");exit(8);}
    if(op==8)ret=semantic_sha_fail;
    if(op==14)ret=semantic_pad;
    if(op==17)semantic_counter=*(int32_t*)arg;
    if(op==18)ret=(int64_t)semantic_counter;
    if(op==20)ret=semantic_shape;
    printf("SEMANTIC-HOST %u %lu counter=%d\n",op,ret,semantic_counter);fflush(stdout);
    if(getenv("SEMANTIC_LIVE")){
        uint64_t vm=q(0x30002060);printf("SEMANTIC-LIVE");
        for(int i=0;i<6;i++){
            printf(" %lu",semantic_live_value(vm,i));
        }printf(" %u\n",*(uint8_t*)(vm+0xf60));fflush(stdout);
    }
    return ret;
}
int main(int argc,char **argv){
    struct sigaction sa={.sa_sigaction=on_signal,.sa_flags=SA_SIGINFO};sigemptyset(&sa.sa_mask);sigaction(SIGSEGV,&sa,NULL);sigaction(SIGILL,&sa,NULL);sigaction(SIGBUS,&sa,NULL);
    void *image=mmap((void*)BASE,0x460000,PROT_READ|PROT_WRITE|PROT_EXEC,MAP_PRIVATE|MAP_ANONYMOUS|MAP_FIXED_NOREPLACE,-1,0);if(image==MAP_FAILED){perror("image mmap");return 1;}
    FILE *f=fopen("native_image.bin","rb");if(!f){perror("image");return 1;}size_t nr=fread(image,1,0x460000,f);if(nr<0x440000){fprintf(stderr,"short image\n");return 1;}fclose(f);
    if(mmap((void*)0x60000000,0x10000000,7,MAP_PRIVATE|MAP_ANONYMOUS|MAP_FIXED_NOREPLACE,-1,0)==MAP_FAILED){perror("heap mmap");return 1;}
    void *teb=mmap((void*)0x30000000,0x10000,3,MAP_PRIVATE|MAP_ANONYMOUS|MAP_FIXED_NOREPLACE,-1,0);if(teb==MAP_FAILED){perror("teb");return 1;}*(uint64_t*)0x30000058=0x30001000;*(uint64_t*)0x30001000=0x30002000;
    if(syscall(SYS_arch_prctl,ARCH_SET_GS,teb)){perror("gs");return 1;}
    for(size_t i=0;i<sizeof(imports)/sizeof(imports[0]);i++){
        const char *n=imports[i].name;void *fn=stub_unknown;
        if(!strcmp(n,"VirtualAlloc"))fn=stub_va;
        else if(!strcmp(n,"VirtualFree")||!strcmp(n,"CloseHandle"))fn=stub_one;
        else if(!strcmp(n,"RtlPcToFileHeader"))fn=stub_pcfile;
        else if(!strcmp(n,"RaiseException"))fn=capture_exception;
        else if(!strcmp(n,"QueryPerformanceCounter"))fn=stub_qpc_import;
        else if(!strcmp(n,"QueryPerformanceFrequency"))fn=stub_qpf_import;
        else if(!strcmp(n,"GetModuleHandleW"))fn=stub_module;
        else if(!strcmp(n,"IsDebuggerPresent"))fn=stub_zero;
        else if(!strcmp(n,"EnterCriticalSection")||!strcmp(n,"LeaveCriticalSection")||!strcmp(n,"DeleteCriticalSection"))fn=stub_zero;
        else if(!strcmp(n,"InitializeCriticalSectionEx")||!strcmp(n,"InitializeCriticalSectionAndSpinCount"))fn=stub_one;
        else if(!strcmp(n,"HeapAlloc"))fn=stub_heap_alloc;
        else if(!strcmp(n,"HeapFree")||!strcmp(n,"GetProcessHeap"))fn=stub_one;
        else if(!strcmp(n,"EncodePointer")||!strcmp(n,"DecodePointer"))fn=stub_identity;
        else if(!strcmp(n,"GetLastError")||!strcmp(n,"SetLastError"))fn=stub_zero;
        else if(!strcmp(n,"FlsGetValue")||!strcmp(n,"TlsGetValue"))fn=stub_tls_get;
        else if(!strcmp(n,"FlsSetValue")||!strcmp(n,"TlsSetValue"))fn=stub_tls_set;
        else if(!strcmp(n,"FlsAlloc")||!strcmp(n,"TlsAlloc"))fn=stub_zero;
        else if(!strcmp(n,"GetCurrentThreadId")||!strcmp(n,"GetCurrentProcessId"))fn=stub_one;
        *(void**)(BASE+imports[i].rva)=fn;
    }
    patch(BASE+0x3a4080,stub_new);patch(BASE+0x3a3de0,stub_free);patch(BASE+0x3a6720,stub_memset);patch(BASE+0x3a6070,stub_memcpy);patch(BASE+0x3a1474,stub_qpc);patch(BASE+0x3a1490,stub_qpf);
    *(uint8_t*)(BASE+0x3a49a0)=0xc3;*(uint8_t*)(BASE+0x3a3dc0)=0xc3;
    memset((void*)(BASE+0x1ecf9e),0x90,0x0f);
    memset((void*)(BASE+0x298cf4),0x90,0x0f);
    if(argc>3&&!strcmp(argv[1],"--user-control")){
        semantic_user_length=atoi(argv[2]);semantic_user_value=strtoull(argv[3],NULL,0);
        if(semantic_user_length<0||semantic_user_length>65)return 2;
        patch(BASE+0x48960,semantic_user_host);
        uint64_t *ctx=alloc(128);for(int i=0;i<8;i++)ctx[i]=(uint64_t)newstr((void*)"",0);
        ((uint64_t(MS*)(void*,uint32_t,void*))(BASE+0x396990))(ctx,10,NULL);
        puts("SEMANTIC-USER-RETURN");return 0;
    }
    if(argc>4&&!strcmp(argv[1],"--script-control")){
        if(getenv("PROBE_TICK"))probe_tick=strtoull(getenv("PROBE_TICK"),NULL,0);
        if(getenv("PROBE_VOID_RETURN"))semantic_unused_value=strtoull(getenv("PROBE_VOID_RETURN"),NULL,0);
        if(getenv("SEMANTIC_OPS")){
            uint8_t *tr=mmap(NULL,4096,7,MAP_PRIVATE|MAP_ANONYMOUS,-1,0);
            memcpy(tr,(void*)(BASE+0x335150),12);patch((uint64_t)tr+12,(void*)(BASE+0x33515c));
            semantic_real_lookup=(void*)tr;patch(BASE+0x335150,semantic_lookup);
            uint8_t *rd=mmap(NULL,4096,7,MAP_PRIVATE|MAP_ANONYMOUS,-1,0);
            memcpy(rd,(void*)(BASE+0x3858a0),15);patch((uint64_t)rd+15,(void*)(BASE+0x3858af));
            semantic_real_read_byte=(void*)rd;patch(BASE+0x3858a0,semantic_read_byte);
        }
        semantic_sha_fail=atoi(argv[2]);semantic_pad=atoi(argv[3]);semantic_shape=atoi(argv[4]);
        patch(BASE+0x396990,semantic_host);
        int ret=((int(MS*)(void))(BASE+0x3967a0))();
        printf("SEMANTIC-RETURN %d\n",ret);return 0;
    }
    if(getenv("FAST_DES")){patch(BASE+0x1ece80,fast_schedule);patch(BASE+0x17f610,fast_des);}
    if(getenv("LOG_SHA_BLOCK")){memset((void*)(BASE+0x283270),0x90,0x9d);patch(BASE+0x298930,log_sha_block);}
    if(getenv("LOG_SHA_ALL")){
        memset((void*)(BASE+0x283270),0x90,0x9d);
        uint8_t *tr=mmap(NULL,4096,7,MAP_PRIVATE|MAP_ANONYMOUS,-1,0);memcpy(tr,(void*)(BASE+0x298930),19);patch((uint64_t)tr+19,(void*)(BASE+0x298930+19));real_sha_block=(void*)tr;patch(BASE+0x298930,trace_sha_block);
    }
    if(getenv("TRACE_USER")){
        uint8_t *tr=mmap(NULL,4096,7,MAP_PRIVATE|MAP_ANONYMOUS,-1,0);memcpy(tr,(void*)(BASE+0x48960),13);patch((uint64_t)tr+13,(void*)(BASE+0x48960+13));real_user_dispatch=(void*)tr;patch(BASE+0x48960,trace_user_dispatch);
    }
    if(getenv("TRACE_DES")){
        uint8_t *tr=mmap(NULL,4096,7,MAP_PRIVATE|MAP_ANONYMOUS,-1,0);memcpy(tr,(void*)(BASE+0x17f610),20);patch((uint64_t)tr+20,(void*)(BASE+0x17f610+20));real_des_block=(void*)tr;patch(BASE+0x17f610,trace_des_block);
    }
    if(argc>1&&!strcmp(argv[1],"--strings")){
        int ids[]={0,7};for(int i=0;i<2;i++){
            const uint8_t *v=((const uint8_t*(MS*)(uint32_t))(BASE+0x380840))(ids[i]);
            printf("STRING-%d ",ids[i]);for(size_t j=0;v[j];j++)printf("%02x",v[j]);puts("");
        }return 0;
    }
    if(argc>3&&!strcmp(argv[1],"--derive")){
        uint64_t *ctx=alloc(128);for(int i=0;i<8;i++)ctx[i]=(uint64_t)newstr((void*)"",0);
        ctx[1]=(uint64_t)strhex(argv[2]);ctx[2]=(uint64_t)strhex(argv[3]);
        typedef uint64_t(MS *Main)(void*,uint32_t,void*);Main mainop=(Main)(BASE+0x396990);
        mainop(ctx,10,NULL);print_str("USER-TRANSFORM",(void*)ctx[3]);
        mainop(ctx,11,NULL);print_str("SERIAL-TRANSFORM",(void*)ctx[4]);
        mainop(ctx,12,NULL);print_str("CONCAT",(void*)ctx[5]);
        mainop(ctx,13,NULL);print_str("TRUNCATE",(void*)ctx[6]);
        uint64_t pad=mainop(ctx,14,NULL);printf("NEEDS-PAD %lu\n",pad);
        if(pad)mainop(ctx,15,NULL);print_str("KEY",(void*)ctx[6]);return 0;
    }
    if(argc>2&&!strcmp(argv[1],"--sha-hex")){
        sha_expected=(strlen(argv[2])/2+9+63)/64;void *in=strhex(argv[2]),*out=alloc(48);((void*(MS*)(void*,void*))(BASE+0x2831c0))(out,in);print_str("SHA-HEX",out);return 0;
    }
    if(argc>3&&!strcmp(argv[1],"--cipher")){
        if(strlen(argv[2])!=48)return 2;uint8_t key[24];for(int i=0;i<24;i++){char t[]={argv[2][i*2],argv[2][i*2+1],0};key[i]=strtoul(t,NULL,16);}
        size_t n=strlen(argv[3])/2;uint8_t *b=alloc((n|15)+16);for(size_t i=0;i<n;i++){char t[]={argv[3][i*2],argv[3][i*2+1],0};b[i]=strtoul(t,NULL,16);}
        void *s30=newstr(key,24),*s38=newstr(b,n);uint8_t *ctx=alloc(128);*(void**)(ctx+0x30)=s30;*(void**)(ctx+0x38)=s38;
        int loops=argc>4?atoi(argv[4]):1;
        for(int j=0;j<loops;j++){
            ((void(MS*)(void*,uint32_t,void*))(BASE+0x396990))(ctx,19,NULL);
            size_t len=q((uint64_t)s38+16);uint8_t *buf=q((uint64_t)s38+24)>=16?*(void**)s38:s38;
            printf("STAGE %d ",j+1);for(size_t i=0;i<len;i++)printf("%02x",buf[i]);puts("");
        }return 0;
    }
    if(argc>2&&!strcmp(argv[1],"--sha-block")){
        const char *msg=argv[2];size_t n=strlen(msg);if(n>55)return 2;
        uint8_t *block=alloc(64);memcpy(block,msg,n);block[n]=0x80;uint64_t bits=n*8;for(int i=0;i<8;i++)block[63-i]=bits>>(i*8);
        uint32_t iv[]={0x6a09e667,0xbb67ae85,0x3c6ef372,0xa54ff53a,0x510e527f,0x9b05688c,0x1f83d9ab,0x5be0cd19};uint32_t *st=alloc(32);memcpy(st,iv,32);
        ((void(MS*)(void*,void*))(BASE+0x298930))(st,block);
        printf("SHA-BLOCK ");for(int i=0;i<8;i++)printf("%08x",st[i]);puts("");return 0;
    }
    if(argc>2&&!strcmp(argv[1],"--sha")){
        void *in=newstr((uint8_t*)argv[2],strlen(argv[2])),*out=alloc(48);
        ((void*(MS*)(void*,void*))(BASE+0x2831c0))(out,in);
        size_t len=q((uint64_t)out+16);uint8_t *buf=q((uint64_t)out+24)>=16?*(void**)out:out;
        printf("SHA ");for(size_t i=0;i<len;i++)putchar(buf[i]);puts("");return 0;
    }
    if(argc>2&&!strcmp(argv[1],"--unpad")){
        size_t n=strlen(argv[2])/2;uint8_t *b=alloc(n);
        for(size_t i=0;i<n;i++){char tmp[]={argv[2][i*2],argv[2][i*2+1],0};b[i]=strtoul(tmp,NULL,16);}
        void *in=newstr(b,n),*out=newstr((void*)"",0);uint64_t *obj=alloc(64);obj[0]=BASE+0x3f1ae8;obj[1]=(uint64_t)in;obj[2]=(uint64_t)out;obj[3]=(uint64_t)alloc(8);obj[7]=(uint64_t)obj;
        void *st=alloc(192);((void(MS*)(void*,uint32_t,void*))(BASE+0x15faf0))(st,16,obj);
        size_t len=q((uint64_t)out+16);uint8_t *buf=q((uint64_t)out+24)>=16?*(void**)out:out;
        printf("UNPAD ");for(size_t i=0;i<len;i++)printf("%02x",buf[i]);puts("");return 0;
    }
    const char *user=argc>1?argv[1]:"alice",*serial=argc>2?argv[2]:"serial01";
    uint8_t mat[24]={0},mask[]={0xde,0x18,0x89,0x41,0xa3,0x37,0x5d,0x3a,0x8a,0x06,0x1e,0x67,0x57,0x6e,0x92,0x6d,0xc7,0x1a,0x7f,0xa3,0xf0,0xcc,0xeb,0x97};size_t ul=strlen(user),sl=strlen(serial);
    for(size_t i=0;i<ul&&i<24;i++)mat[i]=((uint8_t)user[ul-1-i]^0x5a)+7+3*i;
    for(size_t i=0;i<sl&&ul+i<24;i++)mat[ul+i]=(uint8_t)serial[i]^mask[i];
    if(argc>3&&!strcmp(argv[3],"--keys")){
        uint8_t *key=alloc(24),*out=alloc(128);debug_out=out;memcpy(key,mat,24);
        ((void (MS *)(void*,void*))(BASE+0x1ece80))(key,out);
        printf("SUBKEYS ");for(int i=0;i<128;i++)printf("%02x",out[i]);puts("");
    }else{
        uint8_t ct[72];const char *hex=(void*)(BASE+0x3dbbc0);
        for(int i=0;i<72;i++){char t[]={hex[2*i],hex[2*i+1],0};ct[i]=strtoul(t,NULL,16);}
        void *s30=newstr(mat,24),*s38=newstr(ct,72);uint8_t *ctx=alloc(128);*(void**)(ctx+0x30)=s30;*(void**)(ctx+0x38)=s38;
        int loops=argc>3?atoi(argv[3]):1;
        for(int it=0;it<loops;it++)((void (MS *)(void*,uint32_t,void*))(BASE+0x396990))(ctx,19,NULL);
        uint64_t n=*(uint64_t*)((char*)s38+16);uint8_t *buf=*(uint64_t*)((char*)s38+24)>=16?*(void**)s38:s38;
        printf("S38 ");for(uint64_t i=0;i<n;i++)printf("%02x",buf[i]);puts("");
    }
    fprintf(stderr,"DONE exceptions=%lu heap=%lx\n",exceptions,heapnext-0x60000000);return 0;
}
