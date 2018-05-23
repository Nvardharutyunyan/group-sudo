#ifndef LIST
#define LIST

class List {
	private:
		struct Node {
		    int _value;
		    int *_next;
		};
		unsigned int _size;
		Node* _head;
		Node* _tail;
		void* shiftTo(unsigned int&);
	public:
		List();
		List(const List&);
		~List();
		int& operator[](unsigned int);
		void insert(int, unsigned int);
		void pushFront(int _value);
		void pushEnd(int _value);
		void remove(unsigned int);
		int popFront();
		int popEnd();
		int find(int);
		int deleteEl(void*);	
};

#endif
