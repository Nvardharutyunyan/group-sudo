#include <iostream>
int fact1(int n) {
   int i = 1, factorial = 1;
   if ( i <= n && n % 2 == 1 && i % 2 == 1) {
        factorial = factorial * i;
        ++i;
        return n * fact1(n - 2);
    }
}

int fact2(int n) {
   int i = 2, factorial = 1;
    if ((i <= n) && (n % 2 == 0)) {
        factorial = factorial * i;
        i = i + 2;
        return  n * fact2(n - 2);
   }
    else
        return 1;
}

int main() {
    int n;
    std::cout << "Enter natural number!\n";
    std::cin >> n;
    if (n % 2 == 1 && n > 0) {
        std::cout << n << "!! = " << fact1(n) << std::endl;
    }
    else if (n % 2 == 0 && n > 0) {
        std::cout << n << "!! = " << fact2(n) << std::endl;
    }
    else if (n < 0){
        std::cout << "Error! Your number isn't natural !" << std::endl;
    }
    else {
        std::cout << "Sorry, but I don't know !" << std::endl;
    }

    return 0;
}
