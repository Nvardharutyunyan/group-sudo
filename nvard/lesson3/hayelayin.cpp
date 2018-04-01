#include <iostream>
void funk(int n) {
    int a, b, c, d, e, f;
    f = n % 10;
    e = n % 100 / 10;
    d = n % 1000 / 100;
    c = n % 10000 / 1000;
    b = n % 100000 / 10000;
    a = n / 100000;
    if (n > 99999 && n < 10000000) {
        std::cout << f << e << d << c << b << a << "\n";
    } else if (n > 9999 && n < 1000000) {
        std::cout << f << e << d << c << b << "\n";
    } else if (n > 999 && n < 100000) {
        std::cout << f << e << d << c << "\n";
    } else if (n > 99 && n < 10000) {
        std::cout << f << e << d << "\n";
    } else if (n > 9 && n < 1000) {
        std::cout << f << e << "\n";
    } else if (n >= 0 && n < 10) {
        std::cout << f << "\n";
    }
}
int main() {
    int n;
    std::cout << "Enter natural number!\n";
    std::cin >> n;
    if (n >=0 && n < 1000000) {
        funk(n);
    } else if (n < 0) {
        std::cout << "Your number isn't natural!\n";
    } else if (n > 999999) {
        std::cout << "Your number more great!\n";
    }
    return 0;
}
