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
    // Time Complexity O(n)
    void InsertAtAnyIndex(int index, int value)
    {
        if(index < 1 || index > sz + 1) {
            return;
        }
        if(index == 1) {
            InsertAtHead(value);
            return;
        }
        node* newnode = CreateNewNode(value);
        node* current = head;
        int current_index = 1;
        while(current_index != index-1) {
            current = current -> nxt;
            current_index++;
        }
        newnode -> nxt = current -> nxt;
        newnode -> prv = current;
        current -> nxt = newnode;
        return;
    }
    // Time complexity O(n)
    void Traverse()
    {
        node* a = head;
        cout << "Doubly Linked-List Traversing: ";
        while(a != NULL) {
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
int main()
{
    DoublyLinkedList dl;
    dl.InsertAtHead(10);
    dl.InsertAtHead(20);
    dl.InsertAtHead(30);
    dl.InsertAtHead(40);
    dl.InsertAtHead(50);
    dl.Traverse();
    dl.InsertAtAnyIndex(4, 100);
    dl.Traverse();
    cout << "Size: " << dl.getSize() << "\n";
    return 0;
}

