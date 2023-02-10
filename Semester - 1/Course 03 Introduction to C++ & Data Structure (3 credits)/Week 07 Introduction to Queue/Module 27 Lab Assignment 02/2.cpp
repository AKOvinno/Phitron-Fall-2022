#include<bits/stdc++.h>
using namespace std;

template <class T>
class Stack
{
	struct Node
	{
    	T data;
    	Node* next;
    	Node(T data) : data(data), next(nullptr) {}
	};

	Node* head;
	int size;

public:
	Stack() : head(nullptr), size(0) {}

	~Stack()
	{
    	while (head != nullptr)
    	{
        	Node* temp = head;
        	head = head->next;
        	delete temp;
    	}
	}

	void push(T element)
	{
    	Node* new_node = new Node(element);
    	new_node->next = head;
    	head = new_node;
    	size++;
	}

	T pop()
	{
    	if (head == nullptr)
    	{
        	cout << "Stack is empty" << endl;
        	return T();
    	}
    	T data = head->data;
    	Node* temp = head;
    	head = head->next;
    	delete temp;
    	size--;
    	return data;
	}

	T top()
	{
    	if (head == nullptr)
    	{
        	cout << "Stack is empty" << endl;
        	return T();
    	}
    	return head->data;
	}

	int get_size()
	{
    	return size;
	}
};

int main()
{
	Stack<int> s;

	s.push(2);
	s.push(4);
	s.push(6);
	s.push(8);

	cout << "The top element: " << s.top() << endl;
	s.pop();
	cout << "The top element after pop: " << s.top() << endl;
	s.push(10);
	cout << "The top element after push: " << s.top() << endl;

	return 0;
}
