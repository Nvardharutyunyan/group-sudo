#!/usr/bin/env python3
class Complex(object) :
    def __init__(self, real, imag) :
        self.real = real
        self.imag = imag
    def __str__(self) :
        if self.real !=0 and self.imag > 0 :
            return str(self.real) + '+' + str(self.imag) + 'i'
        if self.real != 0 and self.imag <  0 :
            return str(self.real) + str(self.imag) + 'i'
        if self.imag == 0 :
            return str(self.real)
        if self.real == 0 :
            return str(self.imag) + 'i'
    def __add__(self, other) :
        return Complex(self.real + other.real, self.imag + other.imag)
    def __sub__(self, other) :
        return Complex(self.real - other.real, self.imag - other.imag)
    def __mul__(self, other) :
        return Complex(self.real * other.real - self.imag * other.imag, self.imag * other.real + self.real * other.imag)
    def __truediv__(self, other) :
        return Complex((self.real * other.real + self.imag * other.imag) / (other.real ** 2 + other.imag ** 2), (self.imag * other.real - self.real * other.imag) / (other.real ** 2 + other.imag ** 2))
    def __iadd__(self, other):
        self.real += other.real
        self.imag += other.imag
        return Complex(self.real, self.imag)
    def __isub__(self, other):
        self.real -= other.real
        self.imag -= other.imag
        return Complex(self.real, self.imag)
    def __imul__(self, other):
        self.real = self.real * other.real - self.imag * other.imag
        self.imag = self.real * other.imag + self.imag * other.real
        return Complex(self.real, self.imag)
    def __idiv__(self, other):
        self.rael = (self.real * other.rael + self.imag * other.imag) / (other.real ** 2 + other.imag ** 2)
        self.imag = (self.imag * other.real - self.real * other.imag) / (other.real ** 2 + other.imag ** 2)
        return Complex(self.real, self.imag)
    def __abs__(self):
        self.real = (self.real ** 2) ** 0.5
        self.imag = (self.imag ** 2) ** 0.5
        return self 
    def __eq__(self, other) :
       return (self.real == other.real) and  (self.imag == other.imag)
    def __ne__(self, other):
        return (self.real != other.real and self.imag != other.imag)
    def absolute(obj) :
        return (obj.real ** 2 + obj.imag ** 2) ** 0.5
    def __lt__(self, other):
        return self.absolute() < other.absolute()
    def __gt__(self, other):
        return self.absolute() > other.absolute()
    def __le__(self, other):
        return self.absolute() <= other.absolute()
    def __ge__(self, other):
        return self.absolute() >= other.absolute()
    def inverse(self):
        return Complex(self.real / (self.real ** 2 + self.imag ** 2), (self.imag / (self.real ** 2 + self.imag ** 2) * -1))

a = Complex(2, 4)
b = Complex(5, 8)
c = Complex(0, 10)
d = Complex(25, 0)
e = Complex(2, 4)
print('a`', a)
print('b`', b)
print('c`', c)
print('d`', d)
print('e`', e)
print ('a + b`', a + b) 
print('a - b`', a - b)
print('a * b`', a * b)
print('a / b`', a / b)
a += b
print('a += b`', a)
a -= b
print('a -= b`', a)
a *= b
print('a *= b`', a)
a /= b
print('a /= b`', a)
print('Absalute a`', a.inverse())
print('a >= e`', a >= e)
print('a <= c`', a <= c)
print('c < d`', c < d)
print('b > e`', b > e)
