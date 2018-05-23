#!usr/bin/env python3
def palindrom(word):
    if len(word) < 2:
        return True
    if word[0] != word[-1]:
        return False
    return palindrom(word[1:-1])
word = input ("Input the word : ")
if palindrom(word) == True :
    print("The string is palindrome!")
else :
    print("The string is not palindrome!")
