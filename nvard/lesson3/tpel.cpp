#include <iostream>
int i = 0;
void tpel(int n) {
    if (i <= n ) {
        std::cout << i << " ";
        ++i;
        tpel(n);
    }
}

int main(){
    int n;
    std::cout << "Enter positive number!\n";
    std::cin >> n;
    tpel(n);
    std::cout << "\n";
    if (n < 0) {
        std::cout << "Your number isn't positive!\n";
    }
    return 0;
}

