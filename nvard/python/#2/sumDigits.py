#!usr/bin/env python3
def sumOfNum(num):
    num = str(num)
    summ = 0
    for i in num:
        summ += int(i)
    return summ
num = int(input("Enter number : "))
print("The sum of number is equal ", sumOfNum(num))
