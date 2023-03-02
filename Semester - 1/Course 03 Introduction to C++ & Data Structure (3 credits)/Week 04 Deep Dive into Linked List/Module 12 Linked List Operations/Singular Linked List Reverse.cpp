#include<bits/stdc++.h>
using namespace std;

// Creation of node type object
class node
{
public:
    int data;
    node* nxt;
};
class LinkedList
{
public:
    node* head;

    // constructor
    LinkedList()
    {
        head = NULL;
    }
    // Creates a new node with data = value and next = NULL
    node* CreateNewNode(int value)
    {
        node* newnode = new node;
        newnode -> data = value;
        newnode -> nxt = NULL;
        return newnode;
    }
    // Insert new value at tail
    void InsertAtTail(int value)
    {
        node* newnode = CreateNewNode(value);
        if(head == NULL) {
            head = newnode;
            return;
        }
        node* temp = head;
        while(temp -> nxt != NULL) {
            temp = temp -> nxt;
        }
        temp -> nxt = newnode;
    }
    // Insert new value at Head
    void InsertAtHead(int value)
    {
        node *a = CreateNewNode(value);
        if(head == NULL) {
            head = a;
            return;
        }
        // If head is not NULL
        a -> nxt = head;
        head = a;
    }
    // prints the linked list
    void Traverse()
    {
        node *a = head;
        cout << "Linked List Traverse: ";
        while(a != NULL) {
            cout << a -> data << " ";
            a = a -> nxt;
        }
        cout << "\n";
    }
    void Reverse()
    {
        if(head == NULL) {
            return;
        }
        node* temp = head;
        while(temp -> nxt != NULL) {
            temp = temp -> nxt;
        }
        node* tail = temp;
        if(head == tail)
            return;
        node* prev = NULL;
        node* current = head;
        while(current != NULL) {
            node* next = current -> nxt;
            current -> nxt = prev;
            prev = current;
            current = next;
        }
        head = tail;
    }
};

int main()
{
    LinkedList l;

    l.InsertAtHead(10);
    l.InsertAtHead(20);
    l.InsertAtHead(30);
    l.InsertAtHead(40);
    l.InsertAtHead(50);
    l.Traverse();
    l.Reverse();
    l.Traverse();
    return 0;
}

