#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node* nxt;
    node* prv;
};
class DoublyLinkedList
{
public:
    node* head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }
    // Creates a new node with the given data
    node* CreateNewNode(int value)
    {
        node* newnode = new node;
        newnode -> data = value;
        newnode -> nxt = NULL;
        newnode -> prv = NULL;
        sz++;
        return newnode;
    }
    // Inserts a node with given data at head
    void InsertAtHead(int value)
    {
        node* newnode = CreateNewNode(value);
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
        node* current = head;
        head = head -> nxt;
        delete current;
        if(head != NULL)
            head -> prv = NULL;
        sz--;
        return;
    }
    void Traverse()
    {
        node* a = head;
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
class Stack
{
public:
    DoublyLinkedList dl;
    Stack()
    {

    }
    int top()
    {
        if(dl.getSize() == 0) {
            cout << "Stack is empty!\n";
            return -1;
        }
        return dl.head -> data;
    }
    void push(int val)
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
    Stack st;
    st.push(3);
    cout << st.top() << "\n";
    st.push(4);
    cout << st.top() << "\n";
    st.push(5);
    cout << st.top() << "\n";
    st.pop();
    cout << st.top() << "\n";
    st.pop();
    cout << st.top() << "\n";
    st.pop();
    cout << st.top() << "\n";
    st.pop();
    return 0;
}
