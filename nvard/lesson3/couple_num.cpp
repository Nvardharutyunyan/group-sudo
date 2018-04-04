#include <iostream>
 
int main() {
    int first_num, last_num;
    
    std::cout << "Enter first number:";
    std::cin >> first_num;
    std::cout << "Enter last number:";
    std::cin >> last_num;
    
    if (first_num > last_num) {
        std::cout << "Error!";
    }
    int sum = 0;
    for(int num = first_num; num <= last_num; num++) {
        if(num % 2 == 1) {
            continue;
        }
        sum += num;
    }
    std::cout << "SUM couple numbers:" << sum << "\n";
    return 0;
}
