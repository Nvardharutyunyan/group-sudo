#include <iostream>
#include "queue.h"
Queue::Queue(unsigned int _size)
: _size(_size)
, _head(0)
, _tail(0) {
    _queuePtr = new int[_size];
}
Queue::Queue(const Queue &q)
: _size(q._size)
, _head(q._head)
, _tail(q._tail) {
    _queuePtr = new int[_size];
    for (int i = 0; i < _size; ++i) {
        _queuePtr[i] = q._queuePtr[i];
    }
}
Queue::~Queue() {
    delete [] _queuePtr;
}
int Queue::getSize() {
    return _size;
}
void Queue::enqueue(int newElem) {
    if (_head != getSize()) {
        _queuePtr[_tail++] = newElem;
    } else {
        std::cout << "Queue is full!\n";
    }
}
int Queue::dequeue() {
    if (!isEmpty()) {
        return _queuePtr[_head++] = 0;
    }
}
bool Queue::isEmpty() {
    return (_head == _tail);
}
void Queue::print() {
  //  if (isEmpty()) {
    //    std::cout << "Queue is empty\n";
      //  } else {
            for (int i = _tail; i >= _head; i--) {
                std::cout << _queuePtr[i] << " ";
            }
        //}
        std::cout << std::endl;
}

