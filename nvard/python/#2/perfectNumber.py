#!usr/bin/env python3
def perfect(number) :
    for n in range(2, number + 1) :
        summ = 0
        for divisor in range(1, n) :
            if not n % divisor :
                summ += divisor
        if summ == n :
            return True
    else :
        return False
number = int(input("Enter the number : "))
if perfect(number) == True :
    print (number, "is a perfect number")
else :
    print (number, "is not a perfect number")
