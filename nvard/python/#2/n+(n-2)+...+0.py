#!usr/bin/env python3
def sharq(number) :
    if number < 1 :
        return 0
    else:
        return (number + sharq(number - 2))
num = int(input("Enter the number : "))
if num < 0 :
    print ("Your number is not natural!")
else :
    print("The sum of row is equal", sharq(num))
