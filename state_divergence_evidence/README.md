# Native-state divergence evidence

Read [the causal analysis and reproduction](../docs/native-state-divergence.md).

- `drop_control/`: two native hardware/TF traces and independent entry snapshots.
- `second_rekey/`: first and second naturally occurring register-rekey calls.
- `frida/`: six new frames from the corrected pointed-array collector.
- `regression.json`: strict input validation, C++/Unicorn lockstep and Windows comparisons.

Entry files are model inputs. Native trace reads and after-states are comparison
data only. The independent replay does not open those observations. Complete
inputs fix the disagreement; counterfactual incomplete-coverage modes reproduce it.

Original XXVII artifacts remain unchanged. Their missing before-memory cannot
be recovered independently and is rejected by the strict input validator.
Temporary builds and pilot experiments are under ignored `build/`.
