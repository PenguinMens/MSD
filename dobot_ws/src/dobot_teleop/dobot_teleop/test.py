from keyboard import Keyboard
import time

# monitor key presses at 100 Hz
class test():
    def __init__(self, i):
        self.i = i


arr = [1,2,3,4,5,6,7,8,9,0]
print(arr)
del arr[0]
print(arr)

arr2 = [test(1), test(2), test(3)]
for el in arr2:
    print(el.i)
for el in arr2:
    if(el.i == 2):
        arr2.remove(el)
        
for el in arr2:
    print(el.i)