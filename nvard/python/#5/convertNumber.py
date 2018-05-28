#!/usr/bin/env python3
string = input('Input text for a convert! ')
try:
    integer = int(string)
    print('Conversion result : ', integer)
except ValueError :
    print('Could not convert to a number!')
