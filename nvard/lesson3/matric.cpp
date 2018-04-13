#include <iostream>
#include <stdlib.h>

int main () {
    int n ;
    std::cout << "Nermucir zangvaci chapy : ";
    std::cin >> n;
    int a [n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = rand() % 20 + 1;
            std::cout << a[i][j] << ' ';
        }
        std::cout << '\n';
    }
    int i, j, ankyunagic_1 = 0;
    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            if (i == j) {
                ankyunagic_1 += a[i] [j];
            }
        }
     }
    int ankyunagic_2 = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i + j == n - 1) {
                ankyunagic_2 += a[i][j];
            }
        }
    }
    int verev_1 = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i < j) {
                verev_1 += a[i][j];
            }
        }
    }
    int verev_2 = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i + j <= n - 2) {
                verev_2 += a[i][j];
            }
        }
    }
    int nerqev_1 = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i > j) {
                nerqev_1 += a[i][j];
            }
        }
    }
    int nerqev_2 = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i + j >= n) {
                nerqev_2 += a[i][j];
            }
        }
    }
    int erankyun_verev = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i < j && i + j <= n - 2) {
                erankyun_verev += a[i][j];
            }
        }
    }
    int erankyun_aj = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i < j && i + j >= n) {
                erankyun_aj += a[i][j];
            }
        }
   }
    int erankyun_nerqev = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i > j && i + j >= n) {
                erankyun_nerqev += a[i][j];
            }
        }
    }
    int erankyun_dzax = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i > j && i + j <= n - 2) {
                erankyun_dzax += a[i][j];
            }
        }
    }



    std::cout << " Arajin ankyunagci tarreri gumarn e " << ankyunagic_1;
    std::cout << "\n Erkrord ankyunagci tarreri gumarn e " << ankyunagic_2;
    std::cout << "\n Arajin ankyunagcic verev tarreri gumarn e " << verev_1;
    std::cout << "\n Erkrord ankyunagcic verev tarreri gumarn e " << verev_2;
    std::cout << "\n Arajin ankyunagcic nerqev tarreri gumarn e " << nerqev_1;
    std::cout << "\n Erkrord ankyunagcic nerqev tarreri gumarn e " << nerqev_2;
    std::cout << "\n Verevi erankyunu tarreri gumarn e " << erankyun_verev;
    std::cout << "\n Aj erankyunu tarreri gumarn e " << erankyun_aj;
    std::cout << "\n Nerqevi erankyunu tarreri gumarn e " << erankyun_nerqev;
    std::cout << "\n Dzax erankyunu tarreri gumarn e " << erankyun_dzax << "\n";

        return 0;
}
