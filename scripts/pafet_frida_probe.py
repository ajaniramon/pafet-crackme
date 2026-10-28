#!/usr/bin/env python3
"""Spawn pafet_pass8.exe with the probe JS, feed empty creds, capture everything."""
import sys, time, frida

MODE = sys.argv[1] if len(sys.argv) > 1 else 'probe-only'
EXE = r'C:\Users\Ramón\Desktop\pafet_pass8.exe'

msgs = []
def on_message(msg, data):
    print(f'[MSG] {msg}')
    msgs.append(msg)

pid = frida.spawn([EXE])
print(f'[*] spawned pid={pid}')
session = frida.attach(pid)
with open(r'C:\Users\Ramón\Desktop\pafet_frida_probe.js', 'r') as f:
    jsrc = f.read()
# Inject MODE into script
jsrc = f'globalThis.MODE = "{MODE}";\n' + jsrc
script = session.create_script(jsrc)
script.on('message', on_message)
script.load()
print('[*] script loaded, resuming')
frida.resume(pid)

# Feed empty stdin by waiting a bit
try:
    time.sleep(10)
except KeyboardInterrupt:
    pass

try:
    # Is process still alive?
    import psutil
    p = psutil.Process(pid)
    status = p.status()
    print(f'[*] process status: {status}')
    if status != psutil.STATUS_DEAD:
        p.terminate()
except Exception as e:
    print(f'[*] process gone: {e}')

print(f'\n[*] total messages: {len(msgs)}')
