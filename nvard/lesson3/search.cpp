#include <iostream>
#include <stdlib.h>
int main() {
    int size, tiv;
    std::cout << "Nermuceq zangvaci chapy ` ";
    std::cin >> size;
    int a[size];
    for (int i = 0; i < size; i++) {
        a[i] = rand() % 100 + 1;
        std::cout << a[i] << ", ";
    }
    std::cout << "\nNermuceq voreve tiv ` ";
    std::cin >> tiv;
    int count = 0;
        for (int i = 0; i < size; i++) {
            if (a[i] == tiv) {
                count++;
                std::cout << "Dzer nermucac tivy zangvaci " << i + 1 << "-rd elementn e. \n";
            }
        }
        if (count <= 0) {
            std::cout << "Dzer nermucac tivy zangvacum chka.\n";
        }

    return 0;
}
