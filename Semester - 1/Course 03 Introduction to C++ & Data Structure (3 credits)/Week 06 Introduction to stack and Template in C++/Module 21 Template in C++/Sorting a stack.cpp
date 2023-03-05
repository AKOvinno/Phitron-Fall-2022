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
        node<T> *current = head;
        while(current != NULL) {
            cout << current -> data << " ";
            current = current -> nxt;
        }
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
    // time complexity O(n^2)
    Stack <int> st;
    st.push(5);
    st.push(2);
    st.push(7);
    st.push(8);
    st.push(3);
    st.push(1);
    Stack <int> tmp;
    while(st.getSize() > 0) {
        int t = st.top();
        st.pop();
        while(tmp.getSize() > 0) {
            if(tmp.top() < t) {
                break;
            }
            st.push(tmp.top());
            tmp.pop();
        }
        tmp.push(t);
    }
    swap(st, tmp);
    while(st.getSize() > 0) {
        cout << st.top() << "\n";
        st.pop();
    }
    return 0;
}


