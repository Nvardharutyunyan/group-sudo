#!usr/bin/env python3
def addTags(i, str1) :
    tag = ('<' + i + '>' + str1 + '</' + i + '>')
    return tag
i = input("Enter the letter for tag : ")
str1 = input("Input the string : ")
print(addTags(i, str1))
