#include <iostream>
#include "stack1.cpp"
int main() {
    unsigned int size;
    int x;
    std::cout << "Input size of the stack : ";
    std::cin >> size;
    Stack S(size);
    S.print();
    std::cout << '\n';
    while (!S.full()) {
        std::cout << "Push number in stack : ";
        std::cin >> x;
        S.push(x);
        S.print();
        std::cout << '\n';
    }
    if (S.full()) {
        std::cout << "\nThe top element is " << S.pop();
        std::cout << std::endl;
    }

    return 0;
}
