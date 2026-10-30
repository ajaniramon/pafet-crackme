# 01 — Executable and research architecture

`pafet.bin` is the original Windows x64 PE, preferred image base `0x140000000`.
Its SHA-256 is
`fe85e59225387fba4923f3bc6103914fe7b85ba3dc0514c9e37382818fb44d1a`.
The current [README](../README.md) and [status matrix](../jack_xvii_evidence/status_matrix.json)
define demonstrated scope; older reports preserve intermediate interpretations.

## Boundaries

| Preferred-image VA | Role |
| --- | --- |
| `0x14003f540` | User-VM dispatcher/executor body |
| `0x14003ebb0` | User-VM resolver |
| `0x140007610` | User-VM bytecode materializer |
| `0x1400074d0` | User-VM alias remapper |
| `0x140007040`, `0x1400071e0`, `0x140007370` | u32/u16/u8 operand readers |
| `0x140048960` | User-VM native host callback boundary |
| `0x14022a120` | Serial-VM executor |
| `0x14027aba0` | SHA-VM executor |
| `0x1400804c0` | Hex-VM executor |

PAFET's controller combines a username transform, serial transform, username
digest and ciphertext materialization. The digest gates acceptance; transformed
inputs construct a 24-byte key for repeated 3DES-EDE decryption and trimming.
See [the pipeline](02-pipeline.md). No original accepted credentials or flag are
known.

## Four distinct reconstruction problems

User has a recovered 1,752-byte program and semantic compiler. Serial/SHA have
functional RC4/SHA-256 replacements and newly verified initialization regions,
but unrecovered virtual instruction mechanisms. Hex has an autonomous literal
executor for a finite corpus and a partial compact semantic core. Shared helpers
and the common blob-seed recurrence do not establish a shared ISA.

VM contexts are not all one global `.data` structure. Hex's internal context is
stack-resident; executor-entry ABI objects and captured memory windows must be
separated from actual virtual contexts. User's encoded registers, stack and
control slots have distinct banks, tags and mask formulas. See
[User](03-user-vm.md), [Hex](06-hex-vm.md) and [JACK XVII](jack-xvii.md).

## PE identity and provenance

`pafet_pass8.exe` is the existing research variant used by Windows collectors;
it differs at file offsets `0x395efb` and `0x395efc` in the SHA gate. Its VM
instructions are unchanged, but it is not the original acceptance oracle.
Other patched/rekeyed binaries have their own identity and scope.

PE `.pdata` describes unwind fragments, which need not correspond to an entire
semantic wrapper body. Native VA, logical opcode, virtual PC, channel, alias,
thunk and basic block are different identities and must not be counted together.
