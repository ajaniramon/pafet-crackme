> **Auditoría posterior:** consultar [PAFET_CRYPTO_AUDIT.md](PAFET_CRYPTO_AUDIT.md).
> Las capturas y primitivas se reproducen, pero el cargador nativo presenta
> devoluciones inconsistentes en la ruta completa de derivación de clave.
> No se ha validado la aceptación del ejecutable original. El supuesto de
> padding usado por el MITM no es una condición necesaria del descifrador.

# Pafet: cipher recovery, 2026-10-28

The cipher stage is standard three-key Triple DES (EDE), ECB mode, applied
**three times with the same 24-byte key**. The VM layers hide this standard
computation. The original SHA-256 username preimage and valid credentials
have not been recovered.

## Reproducible implementation

Install `pycryptodome`, then run:

```sh
python scripts/pafet_des3_offline.py --self-test --parity-test
python scripts/pafet_des3_offline.py alice serial01
```

The script is standalone and does not need Windows or the binary.

## Actual key and ciphertext

The main dispatcher loads **144 ASCII hex characters** from VA
`0x1403dbbc0`, then decodes them to the fixed 72-byte ciphertext:

```text
6f56f79c3e348835aa3c3fc5f551d501dea5dfcdcf3a013b0e3f8292ff4954b3
455024b373acad827d1fc843f19f3a9ca9907f072ef55099ceadf0798f782d09
abb0a67da54ba93b
```

Username transformation remains the already recovered reverse scan:

```python
f_user = bytes(((c ^ 0x5a) + 7 + 3*i) & 255
               for i, c in enumerate(reversed(username)))
```

The serial mask is the RC4 zero-key stream. In particular, its first 16 bytes
are `de188941a3375d3a8a061e67576e926d`; it does **not** repeat every 8 bytes.
The binary string decoder at `0x140380840` returns an empty string for slot 7,
which is the key passed to the RC4 wrapper by main handler 11. Using the
equivalent one-byte zero RC4 key reproduces the observed stream, including
the formerly mismatching 9-byte serial capture.

```python
s20 = ARC4.new(b'\0').encrypt(serial)
key = (f_user + s20)[:24].ljust(24, b'\0')
```

The zero padding is actual key content: handlers 13-15 truncate to 24 bytes
and append zeroes as required. It is not merely unused string capacity.

Each cipher invocation is:

```python
data = D_k1(E_k2(D_k3(data)))
data = permissive_unpad(data)
```

The main VM invokes this **three times**. Splitting the key into three
8-byte DES keys also permits the degenerate all-zero key, which PyCryptodome's
DES3 constructor rejects.

`permissive_unpad` removes `data[-1]` bytes when that value is in 1..8 and
does not exceed the data length. It does not check the other padding bytes.
This was tested directly against the binary's unpad VM with nine inputs,
including valid padding, inconsistent padding, a padding length larger
than the input, zero, nine, and the empty string.

**Implementation limit:** if an intermediate trim produces a length that
is not divisible by 8, the full-output script raises `NotImplementedError`.
The original reads the rest of the final block from string slack beyond
the logical length. This is memory-dependent; silently padding it with zeroes
would not be a general reconstruction. None of the ten recorded credential
cases exercise this path. `--prefix-only` computes the exact first block
without depending on the tail.

## Independent observations matched

All **10 final SHA-256 prefixes** published in `PAFET_FULL_STATE.md` match,
including `alice/serial011` after correcting the RC4 stream. Additionally:

| Credentials | Pass 1 prefix | Pass 2 prefix | Pass 3 prefix |
|---|---|---|---|
| alice / serial01 | 88f312f8161b3676 | 6f181551dbeace85 | fd2077a101acdfae |
| alice / serial02 | 139089e3749b2de2 | 81844cd800c0e85b | fb5009a95e91bbb4 |
| bob / serial01 | 37729bcc5a4c0d82 | 4005cd65fa1ad606 | e6e976ec62cf3fba |

The complete 72-byte empty-input output also matches the recorded baseline.

## Execution of original cipher instructions

Wine could not start because this environment disallows the socket required
by wineserver. A local Linux PE harness was built instead: it loads the
original image, supplies MS x64 ABI memory/timing/API stubs, and handles
the VM's C++ exceptions using the PE's unwind and FH4 metadata. It invokes
main handler 19 three times directly, supplying the recovered 24-byte key
and decoded ciphertext. Heap allocation and clock services are stubbed;
security cookie checks are bypassed. This is not a complete Windows run
of the unpatched challenge and does not test the username gate.

These four successful native executions matched the standalone model
byte-for-byte across all 72 output bytes:

| Credentials | SHA-256 of output, first 16 hex characters |
|---|---|
| alice / serial01 | 66b0ab3df07fc783 |
| alice / rerial02 | 68bdf732c113e1eb |
| alice / serial02 | 68bdf732c113e1eb |
| alice / serial03 | 68bdf732c113e1eb |

The native key-schedule routine was also executed directly; its 16 subkeys
for `464340464ead7dfb` match the standard DES schedule exactly.

An initial frame-pointer restoration error was corrected by recovering the
enclosing wrapper's frame-base offset from its prologue. The original DES
instructions then completed the serial03 case as well. The harness is still
specific to this PE and does not implement the complete Windows CRT.
Reproducible sources and build instructions are in `scripts/native/`.

## Parity experiment

Changing `serial02` to `rerial02` toggles only bit 0 of the **first** serial
byte. The native output remains identical. DES discards the low parity bit
of every key byte, so the effect is not specific to the last serial byte.

The standalone implementation tests all 64 single-bit mutations of the
8-byte serial: the eight low-bit mutations preserve the entire first-pass
DES3 result, while the other 56 change it. This 64-case sweep is an offline
model test, not 64 separate executions of the PE.

## Entropy search correction

`pafet_find_ciphertext.py` filters empirical entropy of 72-byte windows
using `>7.5`, but the maximum possible value is `log2(72)`, about 6.17.
Scanning the same named sections at stride 8 with `>5.5` yields:

| Section | Windows above 5.5 |
|---|---:|
| .text | 1140 |
| .rdata | 8585 |
| .data | 2606 |

The relevant ciphertext is hex-encoded, so tracing handler 16's input
reveals it directly without an entropy search. Avalanche under a changed
key did not establish the absence of ciphertext or of standard crypto.

## Continuation: verified boundaries and bounded key searches

The original ZIP downloaded from
<https://crackmes.one/crackme/6adecaa45fa39ab0d4ac1e70>
contains `Pafet_Challenge.exe`, byte-identical to this repository's `pafet.bin`.
Its SHA-256 is:

```text
fe85e59225387fba4923f3bc6103914fe7b85ba3dc0514c9e37382818fb44d1a
```

The posted description provides no username or serial-format hint.

### SHA-256 core and padding

The original compression wrapper at `0x140298930`, initialized with the
standard IV and externally padded message blocks, matches `hashlib.sha256`
for the empty string, `alice`, `testuser`, and 55 lowercase `a` bytes.
The blocks prepared by the actual username SHA VM also match standard
SHA-256 padding for those four inputs. For the latter experiment, stream
construction is skipped and execution stops at the first compression call;
this does not claim a complete Windows run of the formatting and gate.

### Partial blocks

With key `464340464ead7dfb28c25b6d0b0000000000000000000000` and one-byte
input `00`, the original crypto instructions return byte `29` with zero
string slack and `d9` when bytes after the terminator are filled with `a5`.
Thus zero-filling incomplete blocks is not a general model of the binary.

The first block remains independent of this issue: ECB processes each block
independently, and three trims of at most eight bytes cannot remove the
first block of the original 72-byte ciphertext. The new `plaintext_prefix`
function and `--prefix-only` CLI therefore compute its exact eight bytes.
This was also cross-checked with 25 inputs against the original outer VMs
using independently validated DES primitive replacements.

### Searches completed without a match

The public SecLists `xato-net-10-million-passwords-1000000.txt` and
`Pwdb_top-1000000.txt` lists contain 1,641,046 unique combined entries.
None matches the username SHA-256 target.

Two further bounded thematic searches made 2,883,744 suffix comparisons
and 1,982,310 composite-name comparisons, respectively, without a SHA match.
These counts describe comparisons, not globally distinct candidate strings.

`scripts/pafet_mitm.py` implements a meet-in-the-middle search under the
hypothesis that the author used conventional padding before each of the
three encryptions. Under that hypothesis the outer final plaintext block
is eight `08` bytes. User lengths 8 and 16 allow separation of the username
and serial components when the serial is at most eight bytes.
Independent synthetic tests verify both layouts. Searching 484,122 eligible
user candidates (479,716 of length 8 and 4,406 of length 16) and 1,207,355
eligible serial candidates produced no candidate pair, in 40.86 seconds.
This misses other lengths and does not establish how the author actually
padded during encryption.

`scripts/pafet_prefix_scan.c` uses OpenSSL DES to test the exact first block
for each username and twelve fixed serial hypotheses, including empty,
`serial01`, `12345678`, and `1337-C0DE-FACE-B00B` (the author's published
serial for an earlier, different challenge). It made **19,687,811 key tests**
over the combined dictionary, with no `CMO{` prefix, in 31.77 CPU seconds.
Its two captured-prefix regression vectors pass.

**Current status:** original credentials and flag remain unrecovered.
The VM computation is reproducible for the recorded cases, and its first
block is searchable without the VM or heap-dependent partial tails.
