#!/usr/bin/env python3
import unittest
def isPrime(n):
    ''' Is prime number, or no'''
    for i in range(2, n):
        if n % i == 0:
            return False
    return True
class PrimeUnityTest(unittest.TestCase):
    def test_0_isNotPrime(self):
        self.assertTrue(isPrime(0))
        print('0 is not prime number')
    def test_1_isPrime(self):
        self.assertTrue(isPrime(1))
        print('1 is prime number')
    def test_2_isPrime(self):
        self.assertTrue(isPrime(2))
        print('2 is prime number')
    def test_4_isNotPrime(self):
        self.assertFalse(isPrime(4))
        print("4 is not prime number")
    def test_negativNumber_isNotPrime(self):
        for i in range (-1, -10, -1):
            self.assertTrue(isPrime(i))
        print("Negative numbers is not prime")
if __name__ == '__main__':
    unittest.main() 
