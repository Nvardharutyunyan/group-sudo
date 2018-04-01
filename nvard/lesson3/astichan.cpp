#include <iostream>
int i = 1;
int pow(int n, int k) {
    if (i <= k) {
       return n* pow(n,k-1);
       i++;
    }
}

int main() {
    int k;
    double n;
    std::cout << "Enter base of number! : ";
    std::cin >> n;
    std::cout << "Enter the degree of the number! : ";
    std::cin >> k;
    if (k >= 0) {
        std::cout << n << " ^ " << k << "  = " << pow(n,k) << "\n";
    }
    else if (k < 0) {
        std::cout << "I can't count!\n";
    }
    return 0;
}

