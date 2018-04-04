#include <iostream>
 
int main() {
    int num;
    std::cout << "Enter tree height:";
    std::cin >> num;

    for(int i = 1; i <= num; i++) {
        std::cout << std::endl;
        for(int j = i; j >= 1; j--) {
        std::cout << " ";
         }
        for(int k = num; k >= i; k--) {
        std::cout << "*";
         }
    } 
    return 0;
}
