#!/usr/bin/env python3
try:
    a = [0, 3, 4, 5]
    b = [10, 0, 15, '5']
    for i in range(len(a)):
        result = a[i] / b[i]
        print(result)
except IndexError as error:
    print(error)
except ZeroDivisionError as error :
    print(error)
except TypeError as error :
    print(error) 
