from keyboard import Keyboard
import time

kb = Keyboard()

# monitor key presses at 100 Hz
while True:
    key = kb.read_key()

    if not key == (None, None):
        print(f"{key}")

    time.sleep(0.01)