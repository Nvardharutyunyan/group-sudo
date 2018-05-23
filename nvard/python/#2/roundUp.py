#!usr/bin/env python3
import math
lst = [1.2, 3.6, 4.1, 5.5]
print(lst)
def sumRoundUp(lst) :
    summ = 0
    for n in lst:
        n = math.ceil(n)
        summ += n
    return summ
print("The sum of the list numbers (numbers are rounded up)` ", sumRoundUp(lst))
