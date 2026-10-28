/* Target-specific wrapper observations; never original acceptance.
   SHA compression and stream formatting are explicit test adapters. */
static uint64_t(MS *wa_sha_real)(void*,uint32_t,void*);
static uint64_t(MS *wa_serial_real)(void*,void*,void*);
static uint64_t(MS *wa_inner_real)(void*,uint32_t,void*);
static unsigned wa_sha_calls,wa_copy_n,wa_blocks,wa_hex_n,wa_serial_calls,wa_xors,wa_key_reads,wa_empty_updates;
static char wa_hex[65];
static void wa_patch14(uint64_t address,void *target){
    uint8_t *p=(void*)address;memcpy(p,"\xff\x25\0\0\0\0",6);memcpy(p+6,&target,8);
}
static void *wa_trampoline(uint64_t address,size_t n,void *wrapper){
    uint8_t *p=mmap(NULL,4096,7,MAP_PRIVATE|MAP_ANONYMOUS,-1,0);
    memcpy(p,(void*)address,n);wa_patch14((uint64_t)p+n,(void*)(address+n));wa_patch14(address,wrapper);return p;
}
static void MS wa_fail(void *ctx,uint32_t reason){
    (void)ctx;printf("WRAPPER-GUARD-FAIL %08x\n",reason);fflush(stdout);exit(79);
}
static void MS wa_compress(void *state,const uint8_t *block){
    (void)state;printf("WRAPPER-SHA-BLOCK %u ",++wa_blocks);
    for(int i=0;i<64;i++)printf("%02x",block[i]);puts("");
}
static uint64_t MS wa_sha_host(void *ctx,uint32_t op,void *arg){
    uint64_t c=(uint64_t)ctx;
    if(++wa_sha_calls>10000)exit(80);
    if(op==38){
        uint64_t index=(int32_t)d(q(c+0x58));uint8_t value=*(uint8_t*)(q(c+0x50)+index);
        if(index!=wa_hex_n/2||wa_hex_n>=64)exit(81);
        sprintf(wa_hex+wa_hex_n,"%02x",value);wa_hex_n+=2;return 0;
    }
    if(op==39){
        void *out=(void*)q(c+0x68),*s=newstr((void*)wa_hex,wa_hex_n);
        memcpy(out,s,32);*((uint8_t*)out+32)=1;return 0;
    }
    uint64_t ret=wa_sha_real(ctx,op,arg);
    if(op==2)print_str("WRAPPER-SHA-INPUT",(void*)q(c+0x10));
    if(op==4)printf("WRAPPER-SHA-LENGTH %lu\n",ret);
    if(op==9)printf("WRAPPER-SHA-COPY %u %02x\n",wa_copy_n++,(unsigned)(ret&255));
    return ret;
}
static uint64_t MS wa_inner_host(void *ctx,uint32_t op,void *arg){
    uint64_t c=(uint64_t)ctx;uint64_t ret=wa_inner_real(ctx,op,arg);
    if(op==4)printf("WRAPPER-KEY-LENGTH %lu\n",ret);
    if(op==5)printf("WRAPPER-KEY-DIVISOR %lu\n",q(q(c+0x20)));
    if(op==9)++wa_key_reads;
    if(op==10)++wa_empty_updates;
    if(op==22){
        uint64_t i=q(q(c+0x40)),n=q(q(c+0x48));
        if(i>=n){printf("WRAPPER-SERIAL-OOB %lu %lu\n",i,n);exit(82);}
        ++wa_xors;
    }
    return ret;
}
static uint64_t MS wa_serial_adapter(void *ctx,void *oparg,void *arg){
    uint64_t c=(uint64_t)ctx;unsigned op=d((uint64_t)oparg);++wa_serial_calls;
    printf("WRAPPER-SERIAL-OP %u\n",op);
    if(op==1){print_str("WRAPPER-SERIAL-INPUT",(void*)q(c+8));print_str("WRAPPER-SERIAL-KEY",(void*)q(c+0x18));}
    return wa_serial_real(ctx,oparg,arg);
}
static int wrapper_audit(int argc,char **argv){
    if(argc<3||(strcmp(argv[1],"--wrapper-sha")&&strcmp(argv[1],"--wrapper-serial")))return -1;
    if(getenv("PROBE_TICK"))probe_tick=strtoull(getenv("PROBE_TICK"),NULL,0);
    patch(BASE+0x2338d0,wa_fail);patch(BASE+0x1ed830,wa_fail);patch(BASE+0x26e250,wa_fail);
    const char *fault=getenv("WRAPPER_FAULT");
    if(fault){uint64_t rva=strtoull(fault,NULL,0);if(rva<0x3d0000||rva>=0x3f0000)return 2;*(uint8_t*)(BASE+rva)^=1;printf("WRAPPER-FAULT %lx\n",rva);}
    if(!strcmp(argv[1],"--wrapper-sha")){
        /* Only unsupported stream lifetime regions are bypassed here. */
        memset((void*)(BASE+0x283270),0x90,0x9d);
        memset((void*)(BASE+0x28342b),0x90,0x5e);
        patch(BASE+0x298930,wa_compress);
        wa_sha_real=wa_trampoline(BASE+0x2834d0,18,wa_sha_host);
        void *in=strhex(argv[2]),*out=alloc(48);
        ((void*(MS*)(void*,void*))(BASE+0x2831c0))(out,in);
        print_str("WRAPPER-SHA-OUTPUT",out);
        print_str("WRAPPER-SHA-INPUT-AFTER",in);
        printf("WRAPPER-SHA-SUMMARY blocks=%u hex_bytes=%u host_calls=%u\n",wa_blocks,wa_hex_n,wa_sha_calls);return 0;
    }
    if(!strcmp(argv[1],"--wrapper-serial")){
        wa_serial_real=wa_trampoline(BASE+0x39d740,19,wa_serial_adapter);
        /* The original LEA RCX,[RIP-base] at +10 needs relocation. */
        uint8_t *it=mmap(NULL,4096,7,MAP_PRIVATE|MAP_ANONYMOUS,-1,0);
        memcpy(it,(void*)(BASE+0x232e20),10);it[10]=0x48;it[11]=0xb9;
        uint64_t ibase=BASE;memcpy(it+12,&ibase,8);
        wa_patch14((uint64_t)it+20,(void*)(BASE+0x232e31));
        wa_patch14(BASE+0x232e20,wa_inner_host);wa_inner_real=(void*)it;
        uint64_t *ctx=alloc(128);for(int i=0;i<8;i++)ctx[i]=(uint64_t)newstr((void*)"",0);
        ctx[2]=(uint64_t)strhex(argv[2]);
        ((uint64_t(MS*)(void*,uint32_t,void*))(BASE+0x396990))(ctx,11,NULL);
        print_str("WRAPPER-SERIAL-OUTPUT",(void*)ctx[4]);
        print_str("WRAPPER-SERIAL-ORIGINAL",(void*)ctx[2]);
        printf("WRAPPER-SERIAL-SUMMARY adapter_calls=%u key_reads=%u empty_updates=%u xor_writes=%u\n",wa_serial_calls,wa_key_reads,wa_empty_updates,wa_xors);return 0;
    }
    return 2;
}
