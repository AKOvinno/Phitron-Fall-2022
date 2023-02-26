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
    // Creating new node
    node* CreateNewNode(int value)
    {
        node* newnode = new node;
        newnode -> data = value;
        newnode -> nxt = NULL;
        sz++;
        return newnode;
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
    // Inserting value at any index
    void InsertAtAnyIndex(int index, int value)
    {
        if(index <= 0 || index > sz+1) {
            return;
        }
        if(index == 1) {
            InsertAtHead(value);
            return;
        }
        node* a = head;
        int current_index = 1;
        while(current_index != index -1) {
            a = a -> nxt;
            current_index++;
        }
        node* newnode = CreateNewNode(value);
        newnode -> nxt = a -> nxt;
        a -> nxt = newnode;
        return;
    }
    // Traversing Linked List
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
    int getSize()
    {
        return sz;
    }
    // deleting value at head
    void DeleteAtHead()
    {
        if(head == NULL) {
            return;
        }
        node* a = head;
        head = a -> nxt;
        delete a;
        sz--;
        return;
    }
    // deleting value at any index
    void DeleteAnyIndex(int index)
    {
        if(index <= 0 || index > sz+1) {
            return;
        }
        if(index == 1) {
            DeleteAtHead();
            return;
        }
        node* a = head;
        int current_index = 1;
        while(current_index != index - 1) {
            a = a -> nxt;
            current_index++;
        }
        node* b = a -> nxt;
        a -> nxt = b -> nxt;
        delete b;
        sz--;
        return;
    }
};

int main()
{
    LinkedList l;
    l.InsertAtHead(5);
    l.InsertAtHead(10);
    l.InsertAtHead(20);
    l.InsertAtHead(40);
    l.InsertAtHead(80);
    l.InsertAtHead(160);
    l.DeleteAtHead();
    l.Traverse();
    l.InsertAtAnyIndex(2, 1000);
    l.Traverse();
    cout << "Size: " << l.getSize() << "\n";
    l.DeleteAnyIndex(2);
    l.Traverse();
    cout << "Size: " << l.getSize() << "\n";
    return 0;
}
