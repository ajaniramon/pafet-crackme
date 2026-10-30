"""JACK XXXI: semantic extensions to the pinned two-instruction baseline.

Native observations are never inputs to this module. Rekey preserves logical
values while migrating their physical encodings, including inactive bank data.
"""
from .serial_continuous import SerialVMState, rol, signed32
from .serial import MASK, PHI, MUL, mix
from .serial_regions_xxxi import REGIONS


class ExtendedSerialVMState(SerialVMState):
    regions = REGIONS
    @classmethod
    def from_initial_capture(cls, entry, pe):
        state = super().from_initial_capture(entry, pe)
        state.gs_base = entry['gs_base']
        tls_array = int.from_bytes(state.read(state.gs_base + 0x58, 8), 'little')
        tls = int.from_bytes(state.read(tls_array, 8), 'little')
        state.read(tls + 0xb34, 4)
        state.roots.append(dict(address=tls+0xb34, size=4, role='rekey TLS callback flag'))
        state.rekeys = 0
        state.parents = []
        state.rekey_proofs = []
        import capstone
        callsite = entry['state']['rip'] - entry['base']
        md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_64)
        call = next(md.disasm(state.pe.get_data(callsite, 15), callsite))
        if (call.mnemonic, call.op_str) != ('call', 'rax'):
            state.fail('Unknown outer CALL boundary')
        state.outer_return_rva = callsite + call.size
        return state

    def decode_next(self):
        parent = self.body
        super().decode_next()
        self.parents.append(parent)

    def execute_opcode(self, opcode):
        if opcode != 4:
            return super().execute_opcode(opcode)
        self.noise_prefix()
        pc, operand = self.read_u16_operand()
        reg = operand & 255
        bank = (self.u(0x1f4, 4) + reg) & 1
        at = self.u(0x180) + 8 * (bank * 256 + reg)
        mask = ((self.u(0xb65 + reg, 1) * self.u(0x1a0)) & MASK) ^ ((reg * self.u(0x238)) & MASK) ^ self.u(0x230)
        encoded = int.from_bytes(self.read(at, 8), 'little')
        value = (encoded - mask) & MASK if self.u(0x1f8, 1) else encoded ^ mask
        tag = self.advance()
        self.put(0xb65 + reg, tag, 1)
        mask = ((tag * self.u(0x1a0)) & MASK) ^ ((reg * self.u(0x238)) & MASK) ^ self.u(0x230)
        encoded = (value + mask) & MASK if self.u(0x1f8, 1) else value ^ mask
        self.m.add(at, encoded.to_bytes(8, 'little'), overwrite=True)
        self.push(value)
        return dict(opcode=4, mnemonic='LOAD_REG_U16', operand=operand, register=reg, value=value, next_pc=pc+2)

    def budget_exhausted(self):
        spec = self.spec()
        label = int.from_bytes(self.pe.get_data(spec['budget_label_rva'], 4), 'little')
        self.set_control(0, label)
        self.record('thread_budget_return', spec['return_rva'])
        self.unwind_to_outer()

    def continuation(self):
        super().continuation()
        if self.phase == 'return_handoff':
            self.unwind_to_outer()

    def unwind_to_outer(self):
        # Every tail is statically checked to contain only native stack restores,
        # one direct jump and RET. They cannot alter the declared virtual state.
        for parent in reversed(self.parents):
            if not self.regions[parent]['unwind_tail']:
                self.fail('Unproved parent return tail')
            self.record('parent_return', self.regions[parent]['return_rva'])
        self.parents.clear()
        self.phase = 'outer_dispatch'
        self.record('outer_dispatch', self.outer_return_rva)

    def _step(self):
        if self.phase == 'outer_dispatch':
            self.fail('Outer dispatcher loop is not modeled')
        return super()._step()

    def advance_register_epoch(self):
        epoch = (self.u(0x200, 4) + 1) & 0xffffffff
        self.put(0x200, epoch, 4)
        if epoch >= self.u(0x1fc, 4):
            self.put(0x200, 0, 4)
            self.rekey()

    def rekey(self):
        """Scalar reduction of original RVA 1ef7c0, not an x64 interpreter."""
        before = self.logical_state()
        self.record('rekey_entry', 0x1ef7c0)
        old = {offset: self.u(offset) for offset in
               (0x230, 0x238, 0x1a0, 0x240, 0x248, 0x1a8, 0xd0, 0xd8, 0xe0, 0x10)}
        epoch, reg_add, ctl_add = self.u(0x1f4, 4), self.u(0x1f8, 1), self.u(0xe8, 1)
        sp = signed32(self.control(2) & 0xffffffff)
        pointer_key, salt = self.u(0x228), self.u(0x340)
        seed = mix((((epoch + 1) & 0xffffffff) * MUL) ^
                   (signed32(self.u(0x11e0, 4)) * PHI) ^
                   mix((signed32(epoch) * PHI - 0x76f411471069a4cc) ^ salt) ^
                   mix(pointer_key ^ 0x504e5452) ^ (pointer_key << 3) ^
                   self.u(0x11e8) ^ self.u(0x20) ^ pointer_key ^ salt ^ self.u(0x348)) or PHI
        self.put(0x1f4, epoch + 1, 4)
        self.put(0x228, seed)
        self.put(0x1f8, mix(seed ^ 0x464f524d) & 1, 1)
        for offset, domain, odd in ((0x230, 0, False), (0x238, 0x4c495645, True),
                                   (0x1a0, 0x544b5231, True), (0x240, 0x53544b4b, False),
                                   (0x248, 0x53544b53, True), (0x1a8, 0x544b5232, True),
                                   (0xd0, 0x4354524c, False), (0xd8, 0x43545253, True),
                                   (0xe0, 0x43545254, True)):
            self.put(offset, mix(seed ^ domain) | int(odd))
        self.put(0xe8, mix(seed ^ 0x4354464d) & 1, 1)
        self.put(0x1fc, ((seed >> 17) & 63) + 48, 4)
        digest = self.u(0x1c0)
        for reg in range(256):
            tag = self.u(0xb65 + reg, 1)
            mask = ((tag * old[0x1a0]) & MASK) ^ ((reg * old[0x238]) & MASK) ^ old[0x230]
            at = self.u(0x180) + 8 * ((((epoch + reg) & 1) << 8) + reg)
            encoded = int.from_bytes(self.read(at, 8), 'little')
            value = (encoded - mask) & MASK if reg_add else encoded ^ mask
            tag = self.advance()
            self.put(0xb65 + reg, tag, 1)
            mask = ((tag * self.u(0x1a0)) & MASK) ^ ((reg * self.u(0x238)) & MASK) ^ self.u(0x230)
            encoded = (value + mask) & MASK if self.u(0x1f8, 1) else value ^ mask
            at = self.u(0x180) + 8 * ((((epoch + 1 + reg) & 1) << 8) + reg)
            self.m.add(at, encoded.to_bytes(8, 'little'), overwrite=True)
            digest ^= encoded
        for index in range(max(0, min(sp, 1023))):
            mask = ((self.u(0xd65 + index, 1) * old[0x1a8]) & MASK) ^ (((index + 1) * old[0x248]) & MASK) ^ old[0x240]
            at = self.u(0x188) + 8 * index
            value = rol(int.from_bytes(self.read(at, 8), 'little') ^ mask, -(mask >> 58))
            tag = self.advance()
            self.put(0xd65 + index, tag, 1)
            mask = ((tag * self.u(0x1a8)) & MASK) ^ (((index + 1) * self.u(0x248)) & MASK) ^ self.u(0x240)
            encoded = rol(value, mask >> 58) ^ mask
            self.m.add(at, encoded.to_bytes(8, 'little'), overwrite=True)
            digest ^= encoded
        for index in range(14):
            mask = ((self.u(0x160 + index, 1) * old[0xe0]) & MASK) ^ (((index + 1) * old[0xd8]) & MASK) ^ old[0xd0]
            encoded = self.u(0xf0 + 8 * index)
            value = (encoded - mask) & MASK if ctl_add else encoded ^ mask
            self.set_control(index, value)
            digest ^= self.u(0xf0 + 8 * index)
        self.put(0x10, mix(seed ^ 0x54524559) | 1)
        for index in range(min(self.u(0x394, 4), 32)):
            for offset in (0x398 + 8 * index, 0x39c + 8 * index):
                self.put(offset, self.u(offset, 4) ^ old[0x10] ^ self.u(0x10), 4)
        tls_array = int.from_bytes(self.read(self.gs_base + 0x58, 8), 'little')
        tls = int.from_bytes(self.read(tls_array, 8), 'little')
        if int.from_bytes(self.read(tls + 0xb34, 4), 'little'):
            self.fail('Rekey TLS callback is not modeled')
        self.put(0x170, self.u(0x170) + 1)
        self.put(0x1178, mix((((self.u(0x1f4, 4) + 1) & 0xffffffff) * PHI) ^ self.u(0x1178, 4) ^ seed), 4)
        self.put(0x1c0, mix(digest ^ seed))
        self.put(0x348, mix(seed ^ self.u(0x348)))
        self.put(0x208, self.u(0x208) + 1)
        self.rekeys += 1
        after = self.logical_state()
        if before != after:
            self.fail('Rekey changed logical register/control/stack values')
        import hashlib
        import json
        self.rekey_proofs.append(dict(logical_values_preserved=True,
                                     sha256=hashlib.sha256(json.dumps(before, sort_keys=True).encode()).hexdigest(),
                                     registers=256, controls=14, active_stack_cells=len(before['stack']),
                                     register_formats=[reg_add, self.u(0x1f8, 1)],
                                     control_formats=[ctl_add, self.u(0xe8, 1)],
                                     queue_entries=min(self.u(0x394, 4), 32)))
        self.record('rekey_exit', 0x1f015b)

    def logical_state(self):
        """Pure projection; unlike native-style reads, never refreshes tags."""
        registers = []
        for reg in range(256):
            mask = ((self.u(0xb65+reg, 1) * self.u(0x1a0)) & MASK) ^ ((reg * self.u(0x238)) & MASK) ^ self.u(0x230)
            at = self.u(0x180) + 8 * ((((self.u(0x1f4, 4) + reg) & 1) << 8) + reg)
            value = int.from_bytes(self.read(at, 8), 'little')
            registers.append((value - mask) & MASK if self.u(0x1f8, 1) else value ^ mask)
        stack = []
        for index in range(max(0, min(signed32(self.peek(2) & 0xffffffff), 1023))):
            mask = ((self.u(0xd65+index, 1) * self.u(0x1a8)) & MASK) ^ (((index+1) * self.u(0x248)) & MASK) ^ self.u(0x240)
            encoded = int.from_bytes(self.read(self.u(0x188)+8*index, 8), 'little')
            stack.append(rol(encoded ^ mask, -(mask >> 58)))
        queue = [[self.u(0x398+8*i, 4) ^ (self.u(0x10) & 0xffffffff),
                  self.u(0x39c+8*i, 4) ^ (self.u(0x10) & 0xffffffff)]
                 for i in range(min(self.u(0x394, 4), 32))]
        return dict(registers=registers, controls=[self.peek(i) for i in range(14)], stack=stack, queue=queue)
