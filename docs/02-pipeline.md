# 02 — Cryptographic/controller data flow

This describes demonstrated data dependencies, not a complete native execution
schedule or a claim that the four VMs are completely devirtualized. See the
[current README](../README.md#cryptographic-pipeline-and-the-unrecovered-flag)
and [crypto audit](../PAFET_CRYPTO_AUDIT.md) for primary evidence and limitations.

For byte-oriented inputs:

```text
f_user(u)[i] = ((u[len(u)-1-i] XOR 0x5a) + 7 + 3*i) mod 256
serial(s)    = RC4(key={0x00}).encrypt(s)
digest       = SHA256(u)
key          = (f_user(u) || serial(s))[:24], right-padded with zero bytes
K1,K2,K3     = key[0:8], key[8:16], key[16:24]
F(X)         = D_K1(E_K2(D_K3(X)))       # ECB, 8-byte blocks
P1           = trim(F(ciphertext))
P2           = trim(F(P1))
P3           = trim(F(P2))
```

The embedded 144-character source is materialized into a 72-byte ciphertext by
the Hex virtual program and C++ stream/string callbacks. This is not universally
equivalent to a strict hex decoder. Sixteen encoded-slot reads produce a
separate 128-byte register buffer. See [Hex-VM](06-hex-vm.md).

The User bytecode controls copy/reverse/index/rewrite/publish host operations;
`0x140048960` is that native host, not the User dispatcher. The real output store
is `0x140048a3a`. The five selected wrappers translated in XXIV are DROP,
block-transfer and STORE_REG bodies, not one byte-writer per output position.
See [User-VM](03-user-vm.md).

## Gate and shape check

The stored username digest is:

```text
9419f86b97bd379906be72ea80517c075a499d0db0a37499132c2d203cc21420
```

A matching digest is required by the original gate. The final plaintext is
checked for the CMO brace shape. A gate bypass permits analysis; it neither
finds a username preimage nor validates original credentials.

## Memory and input limits

`trim` uses the final byte as a removal count if it is 1..8 and fits the buffer;
it does not check equal padding bytes. If an intermediate trim leaves a partial
DES block, native code can read beyond logical string length, making the tail
memory-dependent. Offline/C++ models reject that case. Arbitrary-input full
pipeline equivalence is therefore not demonstrated.

The audited native SHA path preserves supplied string bytes. The older XXI
console demonstrator right-trims input and uses older User/Hex behavioral
replacements. Its input handling and stage integration must not be silently
identified with current native mechanisms. Rekeying validates a controlled
chosen instance; the original flag remains unknown.
