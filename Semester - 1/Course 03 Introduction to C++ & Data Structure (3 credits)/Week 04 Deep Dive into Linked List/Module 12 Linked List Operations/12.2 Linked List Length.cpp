#include<bits/stdc++.h>
using namespace std;

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
    LinkedList()
    {
        head = NULL;
    }
    // Time complexity O(1)
    node* CreateNewNode(int value)
    {
        node* newnode = new node;
        newnode -> data = value;
        newnode -> nxt = NULL;
        return newnode;
    }
    // Time complexity O(1)
    void InsertAtHead(int value)
    {
        node* newnode = CreateNewNode(value);
        if(head == NULL) {
            head = newnode;
            return;
        }
        newnode -> nxt = head;
        head = newnode;
        return;
    }
    // Time complexity O(n)
    void Traverse()
    {
        node* newnode = head;
        cout << "Traversing Linked List: ";
        while(newnode != NULL) {
            cout << newnode -> data << " ";
            newnode = newnode -> nxt;
        }
        cout << "\n";
        return;
    }
    // This function works on O(n)
    int getSize()
    {
        node* a = head;
        int sz = 0;
        while(a != NULL) {
            sz++;
            a = a -> nxt;
        }
        return sz;
    }
};
int main()
{
    LinkedList l;
    l.InsertAtHead(10);
    l.InsertAtHead(5);
    l.InsertAtHead(20);
    l.Traverse();
    cout << "Size of the Linked List: " << l.getSize() << "\n";
    return 0;
}
