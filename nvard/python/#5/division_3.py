#!/usr/bin/env python3
try:
    num = int(input("Input number : "))
except ValueError:
    print("ValueError! Number must be integer!")
else:
    if num % 3 == 0 :
        print('That is wonderful!')
    else :
        raise NameError("The number must be divide by 3!")
