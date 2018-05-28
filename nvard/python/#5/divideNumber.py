#!/usr/bin/env python3
print('Numeratr is equal ', a) 
a = (input('Input numerator for a division : '))
b = (input('Input denumerator for a division : '))
try:
    print('Division result : ', int(a) / int(b))
except ZeroDivisionError :
    print('ZeroDivisionError! Can not divide by zero!')
except ValueError :
    print('ValueError! Your numbers must be integers!')

