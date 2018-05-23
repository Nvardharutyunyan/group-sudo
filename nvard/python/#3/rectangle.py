#!/usr/bin/env python3
class Rectangle(object) :
    def __init__(self, latitude, longitude) :
        self.latitude = latitude
        self.longitude = longitude
    def __str__(self) :
            return 'Latitude` ' + str(self.latitude) + ', longitude` ' + str(self.longitude)
    def area(self) :
        return self.latitude * self.longitude
    def perimeter(self) :
        return 2 * (self.latitude + self.longitude)
r = Rectangle(2, 4)
print(r)
print ('Area`', r.area()) 
print('Perimeter`', r.perimeter())
