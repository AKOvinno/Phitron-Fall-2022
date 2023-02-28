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
    // Reverse the doubly linked list
    // Time complexity = O(2*n) = (n)
    void Reverse()
    {
        if(head == NULL)
            return;
        node* current = head;
        int current_index = 1;
        while(current_index != sz) {
            current = current -> nxt;
            current_index++;
        }
        node* tail = current;
        node* temp = head;
        while(temp != NULL) {
            swap(temp -> nxt, temp -> prv);
            temp = temp -> prv;
        }
        head = tail;
        return;
    }
    int getSize()
    {
        return sz;
    }
};
int main()
{
    DoublyLinkedList dl;
    dl.InsertAtHead(10);
    dl.InsertAtHead(20);
    dl.InsertAtHead(30);
    dl.InsertAtHead(40);
    dl.InsertAtHead(50);
    dl.Traverse();
    cout << "Traversing Doubly Linked List After Reverse: " << "\n";
    dl.Reverse();
    dl.Traverse();
    cout << "\nSize: " << dl.getSize() << "\n";
    return 0;
}

