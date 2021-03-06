#include <iostream>
#include "vector.h"

Vector::Vector(unsigned int size) {
    _size = 2 * size;
    _arr = new int [_size];
}
Vector::Vector(const Vector& arrayToCopy) : _size(arrayToCopy._size) {
    this->_arr = new int[_size];
    for (unsigned int i = 0; i < _size; ++i) {
        _arr[i] = arrayToCopy._arr[i];
    }
}
Vector::~Vector(){
    delete [] _arr;
}
int& Vector::operator[](unsigned int index) {
    if (index > _size) {
        int a = -1; 
        std::cout << "Error! Your index more, than size of array.\n";
        return a;
    }
    return _arr[index];
}
int Vector::resize(unsigned int m) {
    m = 2 * m;
    if (m < _size) {
        for (unsigned int i = m; i < _size; ++i) {
            _arr[i] = 0;
        }
        return 0;
    } else if (m == _size) {
        return -1;
    }
    int *arr = new int[m];
    for (int i = 0; i < _size; ++i) {
        arr[i] = _arr[i];
    }
    delete [] _arr;
    _arr = arr;
    _size = m;
    return 0;
}
unsigned int Vector::getSize() {
    return _size;
}
void Vector::insert (unsigned int index, double a) {
    if (index < _size) {
        for (unsigned int i = _size- 1; i > index; --i) {
            _arr[i] = _arr[i - 1];
        }
        _arr[index] = a;
    } else {
        std::cout << "Your index more,than your size!\n";
    }
}
int Vector::find(double value) {
    for (unsigned int i = 0; i < _size; ++i) {
        if (_arr[i] == value) {
            return i;
        }
    }
    std::cout << "Vector  hasn't this value!";
    return -1;
}
void Vector::remove (unsigned int index) {
    if (index < _size) {
        for (unsigned int i = index; i < _size - 1; ++i) {
             _arr[i] = _arr[i+1];
        }
        _arr[_size - 1] = 0;
    }
}
void Vector::print() {
    for (int i = 0; i < _size; ++i) {
        std::cout << _arr[i] << ' ';
    }
    std::cout << std::endl;
}

