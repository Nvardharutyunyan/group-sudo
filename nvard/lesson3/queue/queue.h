#include <iostream>
#ifndef QUEUE
#define QUEUE

class Queue {
    private:
        unsigned int _size;
        int _head;
        int _tail;
        int *_queuePtr;
    public:
        Queue(unsigned int _size = 5);
        Queue(const Queue &);
        ~Queue();
        int getSize();
        int dequeue();
        void enqueue(int);
        bool isEmpty();
        void print();
};
#endif
