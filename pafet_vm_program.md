# Pafet VM program — reconstructed listing (verified)

> **Historical report — superseded in part (2026-10-28).** The cipher has
> since been reconstructed. For corrected semantic/control-flow coverage see
> [PAFET_SEMANTIC_COVERAGE.md](PAFET_SEMANTIC_COVERAGE.md); for crypto see
> [PAFET_CRYPTO_AUDIT.md](PAFET_CRYPTO_AUDIT.md)
> and [PAFET_DES3_RECOVERY.md](PAFET_DES3_RECOVERY.md) for the corrected RC4
> stream, 24-byte key construction, three DES3 passes, parity and padding,
> native-loader limitations, and current unresolved credential recovery.
> The original observations below are retained as historical evidence.


**Validation anchors** (offline predicted == runtime observed, both sessions):

```
script-VM attestation sum  =  0x2b148ef5a8e14739  (both predicted and observed)
cipher-VM attestation sum  =  0xd27c8baa606262fa  (both predicted and observed)
```

The offline formula:
```
rax = ss
for i in 0..len:  rax = fmix64( rax ^ enc[i] ^ i )
```
with `fmix64` = MurmurHash3 fmix64 at Pafet VA `0x140002040`,
and `ss` extracted inline from each VM function:
  * script-VM `ss` @ VA `0x14038db75` = `0x2F74D9FA1BAA952A`
  * cipher-VM `ss` @ VA `0x1400c06b5` = `0x75BE7955E0AB34D0`

**Dispatcher**: at `0x140396990`, jump table of 24 int32 offsets at `0x140397380`.
Dispatch dec: `edx = opcode; rdx = image_base; rcx = [rdx + opcode*4 + 0x397380]; jmp rdx+rcx`.

**Observed virtual program** (empty credentials run, from Frida minimal hook on
0x140396990 — only reads `rdx` on each entry, no Stalker, no modifications):

```
step  opcode  handler_VA       semantics
   1       0  0x1403969f0      print slot0 (banner)
   2       1  0x140396a51      setup imm arg = 1
   3       2  0x140396a5b      setup imm arg = 2
   4       3  0x140396a65      setup imm arg = 3
   5       4  0x140396a6f      setup imm arg = 4
   6       5  0x140396a79      read slot1 ("Username: " prompt)
   7       6  0x140396aad      setup imm arg = 5
   8       7  0x140396ab7      read slot2 ("Serial  : " prompt)
   9       8  0x140396abd      sha256(username) == H           <-- check
  10      10  0x140396b2e      VM derivation (serial path)
  11      11  0x140396c36      VM derivation (username path)
  12      12  0x140396d87      concat -> slot5[0:24]
  13      13  0x140396ee2      length check / branch
  14      14  0x140396f62      pad -> slot6 (24-byte key)
  15      15  0x140396f78      read slot6
  16      16  0x140396f92      slot7 = blob hex (144 chars)
  17      17  0x1403970ed      VM hex->bytes (slot7 = 72 B)
  18      18  0x1403970fb      read slot8
  19      19  0x140397107      CALL cipher-VM 0x1400c0510     <-- decrypt
```

**Unreached handlers in the empty-creds run** (would appear with valid username
that passes the hash):

```
  --      9  0x140396b24      aux op
  --     20  0x140397239      "CMO{...}" prefix+suffix check -> "[+] Flag: ..."
  --     21  0x1403972ca      setup imm arg = 9
  --     22  0x1403972d1      setup imm arg = 10
  --     23  0x140397316      setup imm arg = 12
```

**Key insight**: the virtual program is **sequential** (`rdi=0` constant across
all 19 dispatches, straight increasing except skip 9 for empty creds). The 2730
bytes of script-VM bytecode are *not* a Turing-complete program — they encode a
linear macro: for each virtual step the bytecode holds (opcode, operand bytes).
The bytecode runner (`0x14038d9d0`) fetches that pair and invokes the dispatcher.

The attestation sum is a **tamper detector**: it is baked into the state after
the loop; any byte flip in `enc[]` changes the sum, which cascades into the
derived frame seeds (via XOR with ASCII tags `0x43414E59="CANY"` and
`0x4D454D54="MEMT"` at `0x14038dbed` / `0x14038dc0f`) and ultimately breaks the
cipher. This explains the "patch any table and output changes" observation.
