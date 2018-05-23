#include <iostream>
#include "list.h"

List::List() 
	:_head(NULL)
	,_tail(NULL)
	,_size(0)
	{}
List::List(const List& list)
	:_head(list._head)
	,_tail(list._tail)
	,_size(lis._size)
	{
	Node* tmp = list._head;
	Node* prev = NULL;
	while(tmp) {
		Node* newNode = new Node;
		newNode->_value = tmp->_value;
		newNode->_next = NULL;
		prev ? prev->_next = newNode : 1;
		prev = newNode;
		tmp = tmp->_next;
	}
}

List::~List() {
	while (_head) {
		Node* tmp = _head;
		_head = _head->_next;
		delete tmp;
	}
}

int& List::operator[](unsigned int index) {
	if (_size < index) {
		std::cout << "Error: Index is out of range." << std::endl;
		int a = -1;
		return a;
	}
	Node* tmp = (Node*)shiftTo(index);
		return tmp->_value;
}

void* List::shiftTo(unsigned int& index) {
	Node* tmp = _head;
	for(int i=0; i<=index; ++i) {
		tmp = tmp->_next;
	}
}

void List::insert(int _value, unsigned int index = 0) {
	if (index > _size) {
		std::cout << "Error: Index is out of range." << std::endl;
		index = _size;
	}
	Node* node = new Node();
	node->_value = _value;
	Node* tmp = (Node*)shiftTo(index);
	node->_next = tmp->_next;
	tmp->_next = node;
}

void List::pushFront (int _value) {
	insert(_value, 0);
}

void List::pushEnd (int _value) {
	Node* node = new Node();
	node->_value = _value;
	node->_next = NULL;
	_tail->_next = node;
	_tail = node;
}

int List::find(int _value) {
	Node* tmp = _head;
	for (int i=0; i<=_size; ++i) {
		if (tmp->_value == _value) {
			return i;
		}
		return -1;
		}
	}

void List::remove(unsigned int index = 0) {
	if (index < _size) {
		if (index == 0) {
			Node* ptr = _head;
			_head = _head->_next;
			--_size;
		}
		if (index == _size) {
			Node* ptr = _tail;
			_tail = _tail->_next;
			delete ptr;
			--_size;
		}
	}
	std::cout << "Error!" << std::endl;
}

int List::deleteEl(void* el) {
	Node* node = (Node*) el;
	if(node != 0) {
		int _value = node->_value;
		delete node;
		--_size;
		node = (Node*) shiftTo(_size);
		return _value;
	}
	return -1;
}

int List::popFront() {
	return deleteEl(_head);
}

int List::popEnd() {
	return deleteEl(_tail);
}
