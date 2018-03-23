#include <iostream>
#include <string>

void my_func() {
    int a, b, c;
    std::cout << "Good! Enter two number!\n";
    std::cin >> a;
    std::cin >> b;
    std::cout << "Ok! Enter a*b!\n";
    std::cin >> c;
    if (c == a*b) {
        std::cout << "Good!\n";
    } else {
        std::cout << "Gna bazmapatkman axyusaky sovorir!\n";
    }
}
void bye() {
    std::cout << "Bye!";
}
int main() {
    std::string name;
    int age;
    std::cout << "Hello! What is your name?\n";
    std::cin >> name;
    std::cout << "How old are you?\n";
    std::cin >> age;
    if (age > 10) {
        my_func();
    } else {
        bye();
    }
    return 0;
}

