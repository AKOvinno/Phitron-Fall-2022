#include<bits/stdc++.h>
using namespace std;

template <class T>
class node
{
public:
    T data;
    node* nxt;
    node* prv;
};

template <class T>
class DoublyLinkedList
{
public:
    node<T>* head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }
    // Creates a new node with the given data
    node<T>* CreateNewNode(T value)
    {
        node<T>* newnode = new node<T>;
        newnode -> data = value;
        newnode -> nxt = NULL;
        newnode -> prv = NULL;
        sz++;
        return newnode;
    }
    // Inserts a node with given data at head
    void InsertAtHead(T value)
    {
        node<T>* newnode = CreateNewNode(value);
        if(head == NULL) {
            head = newnode;
            return;
        }
        head -> prv = newnode;
        newnode -> nxt = head;
        head = newnode;
        return;
    }
    void DeleteAtHead()
    {
        if(head == NULL)
            return;
        node<T>* current = head;
        head = head -> nxt;
        delete current;
        if(head != NULL)
            head -> prv = NULL;
        sz--;
        return;
    }
    void Traverse()
    {
        node<T>* a = head;
        int i = 0;
        cout << "Doubly Linked-List Traversing: ";
        while(a != NULL) {
            i++;
            cout << a -> data << " ";
            a = a -> nxt;
        }
        cout << "\n";
        return;
    }
    int getSize()
    {
        return sz;
    }
};
// Stack using doubly linked list
template <class T>
class Stack
{
public:
    DoublyLinkedList <T> dl;
    Stack()
    {

    }
    T top()
    {
        if(dl.getSize() == 0) {
            cout << "Stack is empty!\n";
            T a;
            return a;
        }
        return dl.head -> data;
    }
    void push(T val)
    {
        dl.InsertAtHead(val);
    }
    void pop()
    {
        if(dl.getSize() == 0) {
            cout << "Stack is empty!\n";
            return;
        }
        dl.DeleteAtHead();
    }
    int getSize()
    {
        return dl.getSize();
    }
};
int main()
{
    // reverse a stack using another stack
    Stack <int> a;
    a.push(4);
    a.push(6);
    a.push(3);
    a.push(7);
    cout << "Before Reverse: ";
    a.dl.Traverse();
    Stack <int> tmp;
    while(a.getSize() > 0) {
        tmp.push(a.top());
        a.pop();
    }
    swap(a, tmp);
    cout << "After Reverse: ";
    a.dl.Traverse();
    return 0;
}

