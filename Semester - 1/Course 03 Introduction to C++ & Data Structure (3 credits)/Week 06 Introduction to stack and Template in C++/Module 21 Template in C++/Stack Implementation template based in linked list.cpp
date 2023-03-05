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
};
int main()
{
    Stack <double> st;
    st.push(3.5);
    st.push(3.6);
    st.push(7.8);
    cout << st.top() << "\n";
    st.pop();
    cout << st.top() << "\n";
    st.pop();
    cout << st.top() << "\n";
    st.pop();
    cout << st.top() << "\n";

    Stack <char> st2;
    st2.push('O');
    st2.push('V');
    st2.push('I');
    cout << st2.top() << "\n";
    st2.pop();
    cout << st2.top() << "\n";
    st2.pop();
    cout << st2.top() << "\n";
    st2.pop();
    cout << st2.top() << "\n";
    return 0;
}

