#!/usr/bin/env python3
import frida, sys, os, time, threading

HERE = os.path.dirname(os.path.abspath(__file__))
EXE  = os.path.join(HERE, 'pafet_pass8.exe')
JS   = os.path.join(HERE, 'pafet_frida.js')
LOG  = os.path.join(HERE, 'frida_run.log')

log = open(LOG, 'w', buffering=1, encoding='utf-8', errors='replace')

def say(*a):
    s = ' '.join(str(x) for x in a)
    print(s, flush=True)
    log.write(s + '\n')

device = frida.get_local_device()

def on_detached(reason, crash):
    say('[*] detached:', reason)

DUMP_DIR = os.path.join(HERE, 'frida_dumps')
os.makedirs(DUMP_DIR, exist_ok=True)

def on_message(message, data):
    if message['type'] == 'send':
        payload = message['payload']
        if isinstance(payload, dict) and payload.get('kind') == 'page_dump' and data is not None:
            page = payload['page']; label = payload['label']
            fn = os.path.join(DUMP_DIR, f'{label}_{page}.bin')
            with open(fn, 'wb') as f: f.write(data)
            say(f'[dump] {label} {page} prot={payload["prot"]} inExe={payload["inExe"]} -> {fn}')
        else:
            say('[js]', payload)
    elif message['type'] == 'error':
        say('[js-err]', message.get('description',''), message.get('stack',''))
    else:
        say('[js-?]', message)

say('[*] spawning', EXE)
pid = device.spawn([EXE], stdio='pipe')
say('[*] pid =', pid)

session = device.attach(pid)
session.on('detached', on_detached)

with open(JS, 'r', encoding='utf-8') as f:
    code = f.read()
script = session.create_script(code)
script.on('message', on_message)
script.load()
say('[*] script loaded')

def pump_output():
    while True:
        try:
            # Nothing explicit — Frida captures console.log via message.
            time.sleep(0.5)
        except Exception:
            return

# Resume to let the packer run
device.resume(pid)
say('[*] resumed, waiting for prompts')

# Feed empty creds after a few seconds (program takes ~35s overall)
def feed_stdin():
    # It is a Windows console-reading binary; we need the stdio pipe exposed by
    # frida.spawn. Access via internal API: session.pid; the device holds it.
    # Frida exposes stdio via Device.input / 'output' message. Register handler.
    pass

# Frida sends process stdout/stderr via output signal on the device
def on_output(target_pid, fd, data):
    if target_pid != pid: return
    text = data.decode('latin-1', errors='replace') if data else ''
    say('[app.fd' + str(fd) + ']', repr(text))

device.on('output', on_output)

# Write empty-line credentials via device.input()
# fd 0 is stdin
try:
    for i in range(2):
        time.sleep(1.0)
    say('[*] sending user+serial empty lines to stdin')
    device.input(pid, b'\r\n\r\n')
except Exception as e:
    say('[-] input() failed:', e)

# Give the stalker-instrumented run plenty of headroom:
end = time.time() + 600
while time.time() < end:
    time.sleep(1.0)
    try:
        device.get_process(pid)
    except Exception:
        say('[*] process gone')
        break

say('[*] timebox exhausted; shutting down')
try: session.detach()
except Exception: pass
try: device.kill(pid)
except Exception: pass
log.close()
