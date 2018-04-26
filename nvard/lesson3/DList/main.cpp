#include <iostream>
#include "DList.h"

int main() {
    List list;
    for(int i = 0; i < 4; ++i) {
        list.pushFront(i);
        list.pushEnd(i);
    }
    list.print();
    std::cout << "========================\n";
    std::cout << list.popEnd() << std::endl;
    std::cout << list.popEnd() << std::endl;
    std::cout << "========================\n";
	list.remove(3);
    return 0;
}
