#include <iostream>
#include "queue.h"
int main() {
    Queue q(10);
    q.enqueue(12);
    q.print();
    std::cout << "Function enqueue`\n";
    for (int i = 1; i < 9; ++i) {
        q.enqueue(i);
    }
    q.print();
    std::cout << "Size of queue " << q.getSize() << '\n';
    q.dequeue();
    q.dequeue();
    q.print();
    return 0;
}
