# PAFET technical documentation

Start with the [repository README](../README.md), then
[JACK XVII: semantic devirtualizer and audited status](jack-xvii.md).
Historical JACK reports preserve the investigation; the current code and bounded
primary evidence define current claims.

| Document | Scope |
| --- | --- |
| [01-overview.md](01-overview.md) | Executable identities, VM boundaries and reconstruction layers |
| [02-pipeline.md](02-pipeline.md) | Crypto/controller data flow; limitations in current README/crypto audit |
| [03-user-vm.md](03-user-vm.md) | Recovered User program, logical effects and native-mechanism gaps |
| [04-serial-vm.md](04-serial-vm.md) | RC4 behavior, verified initialization region and unknown ISA |
| [05-sha-vm.md](05-sha-vm.md) | SHA behavior, verified initialization region and unknown ISA |
| [06-hex-vm.md](06-hex-vm.md) | Literal corpus execution versus partial reduced semantics |
| [07-des3.md](07-des3.md) | Cipher study; see crypto audit for native memory-tail limits |
| [08-recompilation.md](08-recompilation.md) | Earlier functional demonstrator, not complete four-VM devirtualization |
| [09-bytecode.md](09-bytecode.md) | Current bytecode identities and materialization/lifting boundaries |
| [10-dispatch-topology.md](10-dispatch-topology.md) | Native routing versus logical CFG |
| [11-reproduce.md](11-reproduce.md) | Current semantic pipeline and links to component reproduction |
| [12-methodology.md](12-methodology.md) | Evidence hierarchy, corrected claims and current validation method |
| [13-open-gaps.md](13-open-gaps.md) | Current mechanisms and technical experiments still needed |
| [14-real-bytecode-xxiii.md](14-real-bytecode-xxiii.md) | Detailed User materializer, operand and routing formulas |
| [14-tooling.md](14-tooling.md) | Earlier tooling inventory |
| [jack-xvii.md](jack-xvii.md) | New effect IR, compiler, validation chain and four-VM audit |
| [native-state-divergence.md](native-state-divergence.md) | First native mismatches, omitted stack arrays and the independently validated capture fix |
