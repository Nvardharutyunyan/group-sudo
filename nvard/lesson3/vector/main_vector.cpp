#include <iostream>
#include "vector.h"
//#include "vector.cpp"
int main () {
    Vector v;
    for (int i = 0; i < 5; ++i) {
        v[i] = i;
    }
    v.print();
    std::cout << "Vector after insert`\n";
    v.insert(6,15);
    v.insert(8,35);
    v.print();
    std::cout << "Vector after remove`\n";
    v.remove(8);
    v.print();
    std::cout << "Index of the 15 = " << v.find(15) << '\n';
    std::cout <<v.find(60) << "` number 60 \n";
    v.resize(12);
    std::cout << "Vector after resize`\n";
    v.print();
    std::cout << "Operator[]` v[8] = " << v[1] << '\n';
    return 0;
}
                        
