#include<bits/stdc++.h>
using namespace std;

template<class T>
struct Node
{
	T data;
	Node<T> *next;
	Node<T> *prev;
	Node(T data) : data(data), next(NULL), prev(NULL) {}
};

template<class T>
class Deque
{
	Node<T> *head;
	Node<T> *tail;
public:
	Deque() : head(NULL), tail(NULL) {}

	void push_front(T data) //push_front operation
	{
    	Node<T> *newNode = new Node<T>(data);
    	if (head == NULL)
    	{
        	head = tail = newNode;
    	}
    	else
    	{
        	newNode->next = head;
        	head->prev = newNode;
        	head = newNode;
    	}
	}

	void push_back(T data) //push_back operation
	{
    	Node<T> *newNode = new Node<T>(data);
    	if (head == NULL)
    	{
        	head = tail = newNode;
    	}
    	else
    	{
        	tail->next = newNode;
        	newNode->prev = tail;
        	tail = newNode;
    	}
	}

	void pop_front() // pop_front operation
	{
    	if (head == NULL)
    	{
        	return;
    	}
    	Node<T> *temp = head;
    	head = head->next;
    	if (head != NULL)
    	{
        	head->prev = NULL;
    	}
    	delete temp;
	}

	void pop_back() //pop_back operation
	{
    	if (head == NULL)
    	{
        	return;
    	}
    	Node<T> *temp = tail;
    	tail = tail->prev;
    	if (tail != NULL)
    	{
        	tail->next = NULL;
    	}
    	delete temp;
	}

	T front()
	{
    	return head->data;
	}

	T back()
	{
    	return tail->data;
	}

	bool is_empty()
	{
    	return head == NULL;
	}
};

int main()
{
	Deque<int> dq;
	dq.push_front(1);
	dq.push_back(2);
	dq.push_front(3);
	dq.push_back(4);
	while (!dq.is_empty())
	{
    	cout << dq.front() << " ";
    	dq.pop_front();
	}
	return 0;
}
