#include <iostream>
#ifndef VECTOR
#define VECtOR
class Vector {
    private:
        unsigned int _size;
        int *_arr;
    public:
        Vector(unsigned int size = 5);
        Vector( const Vector &arrayToCoppy);
        ~Vector();
        int& operator[](unsigned int index);
        int resize(unsigned int m);
        unsigned int getSize();
        void insert (unsigned int index, double a);
        int find(double value);
        void remove (unsigned int index);
        void print();
};
#endif
