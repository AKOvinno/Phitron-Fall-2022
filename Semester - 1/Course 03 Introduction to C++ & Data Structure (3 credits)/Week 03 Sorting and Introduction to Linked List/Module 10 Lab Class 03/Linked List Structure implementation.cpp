#include<bits/stdc++.h>
using namespace std;

// Creation of node type object
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

    // constructor
    LinkedList()
    {
        head = NULL;
    }
    // Creates a new node with data = value and next = NULL
    node* CreateNewNode(int value)
    {
        node* newnode = new node;
        newnode -> data = value;
        newnode -> nxt = NULL;
        return newnode;
    }
    void InsertAtTail(int value)
    {
        node* newnode = CreateNewNode(value);
        if(head == NULL) {
            head = newnode;
            return;
        }
        node* temp = head;
        while(temp -> nxt != NULL) {
            temp = temp -> nxt;
        }
        temp -> nxt = newnode;
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
    // prints the linked list
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
    // Search for a single value
    int SearchDistinctValue(int value)
    {
        node* a = head;
        int index = 0;
        while(a != NULL) {
            if(a -> data == value) {
                return index;
            }
            a = a -> nxt;
            index++;
        }
        return -1;
    }
    // Search all possible occurrence
    void SearchAllValue(int value)
    {
        node* a = head;
        int index = 0;
        while(a != NULL) {
            if(a -> data == value) {
                cout << value << " is found at index " << index << "\n";
            }
            a = a -> nxt;
            index++;
        }
    }
};
int main()
{
    LinkedList l;

    l.InsertAtHead(10);
    l.InsertAtHead(30);
    l.InsertAtHead(20);
    l.InsertAtHead(30);
    l.InsertAtTail(100);
    l.InsertAtTail(200);
    l.InsertAtTail(5);

    l.Traverse();
    cout << "10 is found at " << l.SearchDistinctValue(10)+1 << "\n";
    cout << "5 is found at " << l.SearchDistinctValue(5) << "\n";
    cout << "30 is found at " << l.SearchDistinctValue(30) << "\n";
    l.SearchAllValue(30);
    return 0;
}
