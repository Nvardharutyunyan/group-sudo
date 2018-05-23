#!usr/bin/env python3
def sumOfNum_R(number):
  if number == 0:
    return 0
  else:
    return (number % 10) + sumOfNum_R(number // 10)
num = int(input("Enter the number : "))
if num < 0 :
    print ("Your number is not natural!")
else :
    print("The sum of number is equal ", sumOfNum_R(num))
