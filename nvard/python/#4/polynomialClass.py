#!/usr/bin/env python3
import math
class Polynomial(object) :
    def __init__(self, a, b, c) :
        self.a = a
        self.b = b
        self.c = c
    def __str__(self) :
        if self.b > 0 and self.c > 0 :
            return str(self.a) + 'x^2+' + str(self.b) + 'x+' + str(self.c) + '=0'
        elif self.b < 0 and self.c < 0 :
           return str(self.a) + 'x^2' + str(self.b) + 'x' + str(self.c) + '=0'
        if self.b < 0 :
            return str(self.a) + 'x^2' + str(self.b) + 'x+' + str(self.c) + '=0'
        elif self.c < 0 :
            return str(self.a) + 'x^2+' + str(self.b) + 'x' + str(self.c) + '=0'
    def __add__(self, other) :
        return Polynomial(self.a + other.a, self.b + other.b, self.c + other.c)
    def __sub__(self, other) :
        return Polynomial(self.a - other.a, self.b - other.b, self.c - other.c)
    def __mul__(self, other) :
        a = self.a * other.a
        b = self.a * other.b + self.b * other.a
        c = self.a * other.c + self.b * other.b + self.c * other.a
        d = self.b * other.c + self.c * other.b
        e = self.c * other.c
        return (str(a) + 'x^4+' + str(b) + 'x^3+' + str(Polynomial.__init__(self,c, d, e)))
    def solution(self, a, b, c) :
        d = self.b ** 2 - 4 * self.a * self.c
        if d > 0 :
            return 'x1 = ' + str((-self.b - math.sqrt(d)) / 2 * self.a) + ', x2 = ' + str((-self.b + math.sqrt(d)) / 2 * self.a)
        elif d == 0 :
            return 'x = ' + str(-self.b / 2 * self.a)
        else :
            return 'The polynomial have not solution!'
    def value(self, x) :
        return self.a * (x ** 2) + self.b * x + self.c
p1 = Polynomial(2, -10, 8)
print('p1=', p1)
print(p1.solution(2, -10, 8))
print('Polynomial for 6 value` ', p1.value(6), sep = '')
p2 = Polynomial(10, 4, 1)
print('p2 =', p2)
print('p1 + p2', p1 + p2)
print('p1 - p2', p1 - p2)
print('p1 * p2', p1 * p2)
