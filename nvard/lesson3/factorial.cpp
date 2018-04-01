#include <iostream>
int fact(int n) {
    int i = 1;
    int factorial = 1;
    if (i <= n) {
        factorial = factorial * i;
            ++i;
            return n * fact(n - 1);
    }
    if (n == 0 || n == 1) {
        return 1;
    }
}

int main() {
    int n;
    std::cout << "Enter natural number!\n";
    std::cin >> n;
    if (n >=0) {
        std::cout << "n! = " << fact(n) << "\n";
    }
    else {
        std::cout << "Error! Your number isn't natural. " << std::endl;
    }

    return 0;
}
