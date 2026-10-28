#!/usr/bin/env python3
import frida, os, time, json

HERE = os.path.dirname(os.path.abspath(__file__))
EXE  = os.path.join(HERE, 'pafet_pass8.exe')
JS   = os.path.join(HERE, 'pafet_frida_dispatch.js')
LOG  = os.path.join(HERE, 'dispatch_run.log')

log = open(LOG, 'w', buffering=1, encoding='utf-8', errors='replace')
def say(*a):
    s = ' '.join(str(x) for x in a); print(s, flush=True); log.write(s+'\n')

captured = {'attest_script': None, 'attest_cipher': None, 'seqs': []}
device = frida.get_local_device()
def on_message(message, data):
    if message['type'] == 'send':
        p = message['payload']
        if isinstance(p, dict):
            k = p.get('kind')
            if k == 'attest_script': captured['attest_script'] = p.get('rax')
            elif k == 'attest_cipher': captured['attest_cipher'] = p.get('rax')
            elif k == 'vm_seq': captured['seqs'].append(p)
            say('[js]', k, p)
        else:
            say('[js]', p)
    elif message['type'] == 'error':
        say('[js-err]', message.get('description',''), message.get('stack',''))

def on_output(target_pid, fd, data):
    text = data.decode('latin-1','replace') if data else ''
    say('[app.fd' + str(fd) + ']', repr(text))

pid = device.spawn([EXE], stdio='pipe')
say('[*] pid =', pid)
device.on('output', on_output)
sess = device.attach(pid)
code = open(JS, 'r', encoding='utf-8').read()
script = sess.create_script(code)
script.on('message', on_message)
script.load()
device.resume(pid)
say('[*] resumed')

# feed empty creds after prompts
time.sleep(2)
try: device.input(pid, b'\r\n\r\n')
except Exception as e: say('input failed:', e)

end = time.time() + 90
while time.time() < end:
    time.sleep(1)
    try: device.get_process(pid)
    except Exception:
        say('[*] process ended')
        break

try: sess.detach()
except: pass
try: device.kill(pid)
except: pass

say('\n=== SUMMARY ===')
say(f'  attest_script observed = {captured["attest_script"]}')
say(f'  attest_cipher observed = {captured["attest_cipher"]}')
say(f'  attest_script predicted (offline) = 0x2b148ef5a8e14739')
say(f'  attest_cipher predicted (offline) = 0xd27c8baa606262fa')
say(f'  VM sequences captured: {len(captured["seqs"])}')
for i, s in enumerate(captured['seqs']):
    seq = s.get('seq', [])
    say(f'  depth={s.get("depth")}  len={len(seq)}  seq={seq}')

# Save full log too
with open(os.path.join(HERE, 'dispatch_captured.json'), 'w') as f:
    json.dump(captured, f, indent=2, default=str)
say('[+] saved dispatch_captured.json')
