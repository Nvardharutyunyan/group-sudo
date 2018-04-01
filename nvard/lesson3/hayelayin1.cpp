#include <iostream>
int hayelayin(int i, int n) {
        if (n / 10 != 0 || n % 10 != 0) {
                i = n % 10;
                std::cout <<i;
                n /= 10;
                hayelayin (i,n);
        }
}

int main () {
        std::cout <<"Enter natural number: ";
        int n;
        std::cin >>n;
        if (n >= 0) {
                hayelayin(1,n);
                std::cout << "\n";
        } else {
                std::cout <<"Your number isn't natural\n";
        }
        return 0;}

