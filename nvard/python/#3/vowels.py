#!/usr/bin/env python3
word = input ("Input the word : ")
vowel = ['A', 'E', 'I', 'O', 'U']
list = [i for i in word if i.upper() in vowel]
list = ('').join(list)
print(list)
