# JACK XXVII — User-VM cookie capture and bounded replay diagnosis

**Result: partial; the six-frame native comparison is not closed.** This operation
adds process-cookie capture and reproduces a separate memory discrepancy without
changing the C++ translation. It stops at the first failing fresh frame, as scoped.
The Hex-VM, other User-VM wrappers and OS exception machinery are outside this operation.

## Starting point and question

Work starts from `f74c63d73f3e75a174a1ee7427540dd1f4e4e620` on `main`,
after JACK XXVI and the README audit. [JACK XXIV](PAFET_JACK_XXIV.md)
records six fresh native frames for User-VM entry `0x14003bea0`: memory matches,
but `alice/0` differs in RCX because the replay loads the PE's default security
cookie rather than the initialized process value.

The bounded objective was to capture that missing input and obtain six matching
native returns, or preserve a reproducer if another discrepancy prevented closure.

## Historical control

[historical_cookie_control.json](jack_xxvii_evidence/historical_cookie_control.json)
replays all six preserved XXIV frames against the original x64 in Unicorn,
restoring entry GPRs, entry RSP and captured TLS, but leaving the on-disk cookie.

- Context and captured external memory match in all six frames.
- Only `alice/0` differs in a return register: RCX is
  `0x2b992ddfa2320000`, while Windows recorded `0xcabbb0220f20000`.
- The replay value is the default image cookie `0x2b992ddfa232` rotated by 16,
  consistent with the translated fast path of `__security_check_cookie` at
  `0x1403a3dc0`.

The historical capture lacks the process cookie. Inferring it from the expected
RCX and then reporting a passing comparison would not independently validate the fix;
this operation does not do that.

## New capture and replay

[pafet_cookie_capture_xxvii.py](scripts/pafet_cookie_capture_xxvii.py) extends the
existing XXIV collector without modifying it. It captures the first two handler
invocations in each of three independent Windows processes, with usernames
`alice`, `ramon` and `aaaaaaaaaaaaaaaaaaaaaaa` (23 bytes).

In addition to the existing entry GPRs, context, stack, TLS and external regions,
each frame records eight bytes at **runtime image base + `0x40d020`**, before and
after the handler. The cookie is stable across those boundaries. The collector
checks that the return-to-caller probe ran and that every selected external
region has an after-image. See [capture_provenance.json](jack_xxvii_evidence/capture_provenance.json)
and [cookie_frames.json.gz](jack_xxvii_evidence/cookie_frames.json.gz).

The oracle is `pafet_pass8.exe`, the existing two-byte SHA-gate variant, rather
than the unmodified challenge. Capture verifies equal file sizes and differences
only at file offsets `0x395efb` and `0x395efc`. Provenance records both PE hashes,
collector hashes, generated agent hash, Frida version and the compressed capture hash.
Collector source hashes describe the bytes used in this Windows checkout;
legacy text files may have different line endings in another checkout.

[pafet_cookie_diff_xxvii.py](scripts/pafet_cookie_diff_xxvii.py) restores the actual
entry RSP, all 16 captured GPRs and GS:58/TLS. It overlays the captured cookie in
both image mappings used by the historical Unicorn harness: preferred and runtime
bases. It then reuses XXIV's instruction lockstep between the C++ translation and
the original x64 in Unicorn, followed by comparison against the captured Windows
return. No expected output register or context byte is copied into the replay.

The native comparison covers all 16 return GPRs, the 8 KiB context and the selected
external regions. It does not compare the complete native scratch stack. Native
initial RFLAGS/XMM are unavailable in these captures; C++/Unicorn lockstep compares
their shared emulated state, not independently captured Windows flags/XMM.

## Observed results and stop condition

[first_divergence.json](jack_xxvii_evidence/first_divergence.json) preserves the
completed cases and first failure:

| Fresh frame | C++ / original-x64 lockstep | Windows return GPRs | Windows context / external memory |
| --- | --- | --- | --- |
| alice/0 | 820 instructions match | 16/16 match | Match |
| alice/1 | 282 instructions match | 16/16 match | Match |
| ramon/0 | 282 instructions match | 16/16 match | Match |
| ramon/1 | 16,582 instructions match | 16/16 match | Context differs in 764 bytes; all six selected external regions match |
| long_a23/0, long_a23/1 | Not run after the first failure | Not evaluated | Not evaluated |

Omitting the cookie also passes the first three fresh frames: those frames do
not establish cookie sensitivity. Consequently, this operation **does not claim
that restoring the cookie has closed the historical RCX discrepancy**.

For `ramon/1`, the replay's entry context exactly matches its captured before-image.
The failing return differs at context offsets `0x38..0x3f` and in the region starting
at `0x1800`. A diagnostic replay records the first executed write to a byte that
differs at the final boundary:

```text
0x140004ef1  mov qword ptr [rax + r10*8], rdx
destination: context + 0x1800
native return bytes: d3c67ce2899c2895
replay return bytes: 514515f9c1d43bfe
```

This is a localized **replay write associated with a final mismatch**, not proof
of the first instruction where Windows and the replay diverged. Native intermediate
states were not captured. The root cause remains unresolved; there is no evidence
here to attribute it to the translator, cookie, relocation, memory capture or another
input. Both software engines agree instruction by instruction on their supplied state.

The harness intentionally raises an assertion and returns a nonzero exit status
at this frame. It neither skips the failing frame nor continues to claim six successes.

## Reproduction

Use the checked-in corpus for the deterministic reproducer. From the repository
root, on Linux or WSL with Python 3 and `g++` available:

```bash
python3 -m venv jack_xxvii_evidence/build/venv
. jack_xxvii_evidence/build/venv/bin/activate
python -m pip install -r jack_xxiii_evidence/requirements.txt
python scripts/pafet_cookie_diff_xxvii.py --historical-control
python scripts/pafet_cookie_diff_xxvii.py
```

The first control exits successfully. The second command builds
`jack_xxvii_evidence/build/libpafet_xxiv.so` from the existing XXIV sources, then
reproduces the documented `ramon/1` assertion and updates `first_divergence.json`.
To reuse that local build:

```bash
python scripts/pafet_cookie_diff_xxvii.py --no-build
```

The implementation was built with WSL GCC and exercised using the installed
Unicorn, Capstone and pefile dependencies. The two commands above were also run
against the resulting library; the documented assertion persisted.

For a **new** native corpus, use Windows x64 with the repository's existing
`pafet_pass8.exe` and Python/Frida:

```powershell
python -m pip install frida==17.24.3
python scripts/pafet_cookie_capture_xxvii.py
```

This overwrites the XXVII capture and provenance; preserve the checked-in corpus
if retaining this exact reproducer. New processes randomize VM state and addresses,
so their first two invocations need not exercise the same paths. A new capture is
not a deterministic reproduction of the frame above.

## Remaining work

Capture native intermediate inputs/states around the table transformation reached
by `ramon/1`, then establish the earliest actual divergence. After that is resolved,
complete the six-frame comparison and obtain a fresh frame that demonstrably exercises
the cookie-sensitive return path, with a failing missing-cookie control and a passing
captured-cookie replay. Queue exceptions and universal User-VM equivalence remain open.

No VM implementation or historical evidence was changed in this operation.
