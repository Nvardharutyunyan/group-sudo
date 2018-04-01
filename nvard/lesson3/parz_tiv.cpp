#include <iostream>
#include <math.h>
bool parz(int n, int i = 2) {
    if (i <= sqrt(n)) {
        if (n % i != 0) {
            parz(n, ++i);
        } else {
            return false;
        }
    } else {
        return true;
    }
}
int main() {
    int n;
    std::cout << "Enter number!\n";
    std::cin >> n;
    if (parz(n)) {
        std::cout << "Your number prime!\n";
    } else {
        std::cout << "Your number isn't prime!\n";
    }

    return 0; 
}
