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
    int sz;
    LinkedList()
    {
        head = NULL;
        sz = 0;
    }
    node* CreateNewNode(int value)
    {
        node* newnode = new node;
        newnode -> data = value;
        newnode -> nxt = NULL;
        sz++;
        return newnode;
    }
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
    void Traverse()
    {
        node* newnode = head;
        cout << "Linked Traverse: ";
        while(newnode != NULL) {
            cout << newnode -> data << " ";
            newnode = newnode -> nxt;
        }
        cout << "\n";
        return;
    }
    void InsertAfterValue(int value, int data)
    {
        node* a = head;
        while(a != NULL) {
            if(a -> data == value) {
                break;
            }
            a = a -> nxt;
        }
        if(a == NULL) {
            cout << value << " doesn't exist in linked-list.\n";
            return;
        }
        node* newnode = CreateNewNode(data);
        newnode -> nxt = a -> nxt;
        a -> nxt = newnode;
        return;
    }
    int getSize()
    {
        return sz;
    }
    // Print the Reverse Order from node a to last
    void ReversePrint2(node* a)
    {
        if(a == NULL) {
            return;
        }
        ReversePrint2(a -> nxt);
        cout << a -> data << " ";
        return;
    }
    void ReversePrint()
    {
        ReversePrint2(head);
        return;
    }
    // Reverse a Linked List
    void ReverseLinkedList()
    {
        if(head->nxt == NULL) return;
        node* curr = head;
        node* prv = NULL;
        node* next = curr->nxt;
        while(next != NULL) {
            curr->nxt = prv;
            prv = curr;
            curr = next;
            next = next->nxt;
        }
        curr->nxt = prv;
        head = curr;
    }
};
int main()
{
    LinkedList l;
    l.InsertAtHead(15);
    l.InsertAtHead(10);
    l.InsertAtHead(5);
    l.InsertAtHead(420);
    l.InsertAtHead(11);
    l.InsertAfterValue(10, 100);
    l.Traverse();
    cout << "Printing Reverse: ";
    l.ReversePrint();
    cout << "\n";
    l.Traverse();
    cout<< "After Reversing - \n";
    l.ReverseLinkedList();
    l.Traverse();
    return 0;
}
