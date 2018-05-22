#!usr/bin/env python3
lst = [[1, 5, 6, 2],[3, 4],[5, 6, 45]]
print(lst)
def sum1(lst) :
    my_sum = 0
    for n in lst :
        my_sum += sum(n)
    return my_sum
print("The sum of numbers of the invested list : ", sum1(lst))
