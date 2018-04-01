#include <iostream>
#include <string>
int i = 2, j = 1;
void tpel_zuyg(int n) {
    if (i <= n && i % 2 == 0 ) {
        std::cout << i << " ";
        i += 2;
        tpel_zuyg(n);
    }
}
void tpel_kent(int n) {
    if (j <= n && j % 2 == 1 ) {
        std::cout << j << " ";
        j += 2;
        tpel_kent(n);
    }
}

int main() {
    int n;
    std::string word;
    std::cout << "Enter natural number!\n";
    std::cin >> n;
    if (n > 0) {
        std::cout << "Print odd or pair numbers?\n";
        std::cin >> word;
        if (word == "odd") {
            tpel_kent(n);
            std::cout << "\n";
        }
        else if (word == "pair") {
            tpel_zuyg(n);
            std::cout << "\n";
        }
    }
    else if (n <= 0) {
        std::cout << "Your number isn't natural!\n";
    }
    return 0;
}
