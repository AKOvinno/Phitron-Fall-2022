#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int value;
	Node* nxt;
	Node* prv;
};

class LinkedList{
private:
	Node* head;
	Node* tail;
	int size;

public:
	LinkedList()
	{
    	head = NULL;
    	tail = NULL;
    	size = 0;
	}
	Node* CreateNewNode(int value)
	{
    	Node* new_node = new Node;
    	new_node->value = value;
    	new_node->nxt = head;
    	new_node->prv = NULL;
    	return new_node;
	}

	void insertHead(int value)
	{
    	Node* new_node = new Node;
    	new_node->value = value;
    	new_node->nxt = head;
    	new_node->prv = NULL;

    	if (head != NULL)
        	head->prv = new_node;
    	else
        	tail = new_node;

    	head = new_node;
    	size++;
	}

	void insertTail(int value)
	{
    	Node* new_node = new Node;
    	new_node->value = value;
    	new_node->nxt = NULL;
    	new_node->prv = tail;

    	if (tail != NULL)
        	tail->nxt = new_node;
    	else
        	head = new_node;

    	tail = new_node;
    	size++;
	}

	void insertMid(int value)
	{
    	Node* newNode = CreateNewNode(value);
    	if (head == NULL) {
        	head = newNode;
        	tail = newNode;
    	}
    	else {
        	Node* slow = head;
        	Node* fast = head->nxt;
        	while (fast != NULL && fast->nxt != NULL) {
            	slow = slow->nxt;
            	fast = fast->nxt->nxt;
        	}
        	newNode->prv = slow;
        	newNode->nxt = slow->nxt;
        	if (slow->nxt != NULL) {
            	slow->nxt->prv = newNode;
        	}
        	slow->nxt = newNode;
        	if (fast == NULL) {
            	tail = newNode;
        	}
    	}
    	size++;
	}

	void print()
	{
    	Node* current = head;

    	while (current != NULL) {
        	cout << current->value << " ";
        	current = current->nxt;
    	}

    	cout << "\n";
	}
};

int main()
{
    LinkedList a;
    LinkedList b;

    a.insertHead(1);
    a.insertTail(5);
    a.insertMid(3);
    a.insertHead(0);
    a.insertTail(10);
    a.print(); // prints  0 1 3 5 10

    b.insertHead(10);
    b.insertTail(50);
    b.insertMid(30);
    b.insertHead(9);
    b.insertTail(100);
    b.print(); // prints  9 10 30 50 100

    return 0;
}
