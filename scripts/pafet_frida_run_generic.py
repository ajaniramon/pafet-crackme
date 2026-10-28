#!/usr/bin/env python3
"""Generic Frida runner — takes JS path as argv."""
import frida, os, sys, time, json
HERE = os.path.dirname(os.path.abspath(__file__))
EXE  = os.path.join(HERE, 'pafet_pass8.exe')
JS   = sys.argv[1] if len(sys.argv) > 1 else os.path.join(HERE, 'pafet_frida.js')
device = frida.get_local_device()
captured = []
def on_message(message, data):
    if message['type'] == 'send':
        print('[js]', message['payload'])
        captured.append(message['payload'])
    elif message['type'] == 'error':
        print('[js-err]', message.get('description',''), message.get('stack',''))
def on_output(target_pid, fd, data):
    text = data.decode('latin-1','replace') if data else ''
    print('[app.fd'+str(fd)+']', repr(text))
pid = device.spawn([EXE], stdio='pipe')
print('[*] pid =', pid)
device.on('output', on_output)
sess = device.attach(pid)
with open(JS, 'r', encoding='utf-8') as f: code = f.read()
script = sess.create_script(code)
script.on('message', on_message)
script.load()
device.resume(pid)
time.sleep(2)
try: device.input(pid, b'\r\n\r\n')
except Exception as e: print('input failed:', e)
end = time.time() + 90
while time.time() < end:
    time.sleep(1)
    try: device.get_process(pid)
    except Exception:
        print('[*] process ended'); break
try: sess.detach()
except: pass
try: device.kill(pid)
except: pass
if captured:
    out_name = os.path.basename(JS).replace('.js','_cap.json')
    with open(os.path.join(HERE, out_name), 'w') as f:
        json.dump(captured, f, indent=2, default=str)
    print(f'[+] captured -> {out_name}')
