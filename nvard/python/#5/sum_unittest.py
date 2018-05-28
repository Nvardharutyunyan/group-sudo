#!/usr/bin/env python3
import unittest
def summ(num1, num2) :
    '''Function : Sum of two numbers'''
    return num1 + num2
class UnitTestSum(unittest.TestCase) :
    def testSumOfIntegers(self):
        self.assertEqual(summ(5, 16), 21, "Sum of 5 and 16 is equal 21")
    def testSumOfFloats(self) :
        self.assertEqual(summ(2.2, 5.5), 7.7, "Sum of 2.2 and 5.5 is equal 7.7")
    def testSumOfStrings(self) :
        self.assertEqual(summ('Stepan', 'akert'), 'Stepanakert', "Sum of strings 'Stepan' and 'akert' is equal 'Stepanakert'")
    def testSumOfNegativs(self):
        self.assertEqual(summ(-5, -16), -21, "Sum of -5 and -16 is equal -21")

if __name__ == '__main__' :
    unittest.main() 

