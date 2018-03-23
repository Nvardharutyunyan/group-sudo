#include <iostream>
#include <string>
void fun1(){
	std::cout << "Your points equal !\n";
}
void fun2() {
	std::cout << "Winner first player!\n";
}
void fun3() {
	std::cout << "Winner second player!\n";
}

int main() {
	int b;
	std::string a;
	std::cout << "Payer 1 :: ";
	std::cout << "Enter your option !\n";
	std::cin >> a;
	std::cout << "Player 2 :: ";
	std::cout << "Enter your option!\n";
	std::cin >> b;

	if ((a == "stone" && b == 1) || (a == "scissors" && b == 2) || (a == "paper" && b == 3)) {
		fun1();
	}


	if((a == "stone" && b == 2) || (a == "scissors" && b == 3) || (a == "paper" && b == 1)){
		fun2();
	}


	if((b == 1 && a == "scissors") || (b == 2 && a == "paper") || (b == 3 && a == "stone")){
		fun3();
        }
	
    return 0;
}
