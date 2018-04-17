#include <iostream>
class Stack {
    private:
        unsigned int size;
        int *arr;
        int top = -1;
    public:
        Stack(unsigned int size):size(size) {
            arr = new int [size];
        }
        ~Stack() {
            delete []arr;
        }
        bool empty() {
            return (top == -1);
        }
        bool full() {
            return (top == size - 1);
        }
        void push(int x) {
            if (!full()) {
                arr[++top] = x;
            }
        }
        int pop() {
            if (!empty()) {
                return arr[top--];
            }
        }
        void print() {
            if (top == -1) {
                std::cout << "Stack is empty! \n";
            }
            else if (top == size -1) {
                std::cout << "Stack is full! \n";
            }
            for (int i = 0; i < size; i++) {
                std::cout << arr[i] << ' ';
            }
        }
};
