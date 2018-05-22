#!usr/bin/env python3
import math
lst = [1.2, 3.6, 4.1, 5.5]
print(lst)
def sumRoundDown(lst) :
    summ = 0
    for n in lst:
        n = math.floor(n)
        summ += n
    return summ
print("The sum of the list numbers (numbers are rounded down)` ", sumRoundDown(lst))
