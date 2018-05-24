#!/usr/bin/env python3
import math
class Shape(object) :
    def __eq__(self, other) :
        return self.area() == other.area()
    def __lt__(self, other) :
        return self.circum() < other.circum()
class Rectangle(Shape) :
    def __init__(self, length, width) :
        self.length = length
        self.width = width
    def __str__(self) :
            return ' is a rectangle, her area is ' + str(self.area()) + ' !'
    def area(self) :
        return self.length * self.width
    def circum(self) :
        return 2 * (self.length + self.width)
class Square(Rectangle) :
    def __init__(self, side) :
        Rectangle.__init__(self, side, side)
    def __str__(self) :
        return ' is a square, her side is ' + str(self.length) + ' !'
class Circle(Shape) :
    def __init__(self, radius) :
        self.radius = radius
    def __str__(self) :
        return ' is a square, her diameter is ' + str(2 * self.radius) + ' !'
    def __lt__(self, other) :
        return self.radius < other.radius
    def area(self) :
        return math.pi * (self.radius ** 2)
    def circum(self) :
        return 2 * math.pi * self.radius 

r = Rectangle (2,4)
s = Square(8)
c = Circle(5)
print ('(r)' + str(r), '(s)' + str(s), '(c)' + str(c), sep = '\n')
square1 = Square(3)
print(square1.circum())
square2 = Square(4)
print(square1 > square2)
rectangle1 = Rectangle(4, 4)
print(square2 == rectangle1)
circle1 = Circle(5)
print(square1 < circle1)
