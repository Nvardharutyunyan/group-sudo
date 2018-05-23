#!/usr/bin/env python3
word = input("Write the word : ")
palindrom = 1
length = len(word)
for i in word :
    if i == word[length -1] :
        length -= 1
    else :
        palindrom = 0
if palindrom == 1 :
    print ("Word is palindrom")
else :
    print ("Word is not palindrom")        
