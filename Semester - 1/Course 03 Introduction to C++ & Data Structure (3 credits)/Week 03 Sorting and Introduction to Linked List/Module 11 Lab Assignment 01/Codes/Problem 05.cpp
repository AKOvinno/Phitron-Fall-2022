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
    int Size;
    LinkedList()
    {
        head = NULL;
        Size = 0;
    }
    node* CreateNewNode(int value)
    {
        node* newnode = new node;
        newnode -> data = value;
        newnode -> nxt = NULL;
        Size++;
        return newnode;
    }
    void InsertAtHead(int value)
    {
        node* a = CreateNewNode(value);
        if(head == NULL) {
            head = a;
            return;
        }
        a -> nxt = head;
        head = a;
    }
    void Traverse()
    {
        node* a = head;
        cout << "Linked List Traversing: ";
        while(a != NULL) {
            cout << a -> data << " ";
            a = a -> nxt;
        }
        cout << "\n";
        return;
    }
    int getValue(int index)
    {
        if(index > Size)
            return -1;
        node* a = head;
        int idx = 1;
        while(idx != index) {
            a = a -> nxt;
            idx++;
        }
        return a -> data;
    }
//    void printReverse()
//    {
//        node* current = head;
//        if(current == NULL)
//            return;
//        head = head -> nxt;
//        printReverse();
//        cout << current -> data << " ";
//    }
    void printReverse(node* current)
    {
        if(current == NULL)
            return;
        printReverse(current -> nxt);
        cout << current -> data << " ";
    }
    void printReverse()
    {
        printReverse(head);
        cout << "\n";
    }
    int getSize()
    {
        cout << "Size of the linked list is: " << Size << "\n";
        return 0;
    }
    void swapFirst()
    {
        if(Size < 2)
            return;
        node* a = head;
        node* b = head -> nxt;
        a -> nxt = b -> nxt;
        b -> nxt = a;
        head = b;
    }
};
int main()
{
    LinkedList l;
    l.InsertAtHead(5);
    l.InsertAtHead(10);
    l.InsertAtHead(15);
    l.InsertAtHead(20);
    l.InsertAtHead(25);
    l.swapFirst();
    l.Traverse();
    l.getSize();
    cout << "Value in index 2 is: " << l.getValue(2) << "\n";
    cout << "Printing in reverse order: ";
    l.printReverse();
    l.Traverse();
    return 0;
}
