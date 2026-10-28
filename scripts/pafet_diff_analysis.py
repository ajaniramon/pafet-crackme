#!/usr/bin/env python3
"""Analyze the 6 captured plaintexts to find the structure of the cipher.
Compare pairs that change only one variable."""

CAPTURES = [
    ('alice',   'serial01', 'fd2077a101acdfae1a7349c88533c26caa5fa363ba51f3d5cfbff1ad0a56c985'),
    ('alice',   'serial02', 'fb5009a95e91bbb44cb22dbd3a1f2eab509e2b3fe09ad5f323ea99ce195e5dec'),
    ('alice',   'ABCDEFGH', 'c49c9dffd921f09ad4a879e84be9b4d99210ca6f2792d710a373675bb996449c'),
    ('bob',     'serial01', 'e6e976ec62cf3fba80f7c987a374659af661235d3ef4f1b2e6681fa0fa2687b1'),
    ('carol',   'serial01', '36e3e3491c9bb26f73ba302c4a1f9ec5215e1b39bd2d07ccec7aa4d31c6dbf2b'),
    ('',        '',         '3510366fbff5cb69f9ae3d6d21437b3f19d8374fca2495c463fccc9db989391f'),
]

def xor_hex(a, b):
    return bytes(x^y for x,y in zip(bytes.fromhex(a), bytes.fromhex(b)))

print('[*] Pairwise XORs:')
for i in range(len(CAPTURES)):
    for j in range(i+1, len(CAPTURES)):
        u1,s1,p1 = CAPTURES[i]
        u2,s2,p2 = CAPTURES[j]
        diff = xor_hex(p1, p2)
        # Count leading zeros (same bytes)
        lead = 0
        for b in diff:
            if b == 0: lead += 1
            else: break
        print(f'   ({u1!r:<10},{s1!r:<10}) XOR ({u2!r:<10},{s2!r:<10})  lead_zeros={lead}  diff[:16]={diff[:16].hex()}')

# Key question: if serial2 is a swap of just one byte of serial1, how much changes?
# ('serial01' vs 'serial02' only differs in last digit)
p1 = bytes.fromhex(CAPTURES[0][2])  # alice, serial01
p2 = bytes.fromhex(CAPTURES[1][2])  # alice, serial02
print(f'\n[*] alice/s01 vs alice/s02: {sum(1 for a,b in zip(p1,p2) if a!=b)} byte positions differ')
# If few differ → stream cipher-like.  If all differ → block/hash-like.

# Compare 'serial01' vs 'ABCDEFGH' (completely different serials, same user)
p3 = bytes.fromhex(CAPTURES[2][2])  # alice, ABCDEFGH
print(f'    alice/s01 vs alice/ABCDEFGH: {sum(1 for a,b in zip(p1,p3) if a!=b)} byte positions differ')

# bob vs alice (same serial)
p4 = bytes.fromhex(CAPTURES[3][2])
print(f'    alice/s01 vs bob/s01: {sum(1 for a,b in zip(p1,p4) if a!=b)} byte positions differ')

# Also look at: is the plaintext simply user+serial processed somehow?
print(f'\n[*] alice/s01 first 16 bytes: {p1[:16].hex()}  as ascii: {p1[:16].decode("latin-1", errors="replace")!r}')
# any correlation with the inputs? e.g., sha256(user+serial) as plaintext?
import hashlib
for u, s, p in CAPTURES:
    pt_bytes = bytes.fromhex(p)
    sha = hashlib.sha256((u+s).encode()).digest()
    match = (sha[:8] == pt_bytes[:8])
    print(f'   {u!r:<10},{s!r:<10}: sha256(u+s)[:8]={sha[:8].hex()}  plaintext[:8]={pt_bytes[:8].hex()}  match={match}')
