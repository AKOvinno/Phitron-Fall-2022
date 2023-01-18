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
private:
    node* head;
    int size;
public:
    LinkedList()
    {
        head = NULL;
        size = 0;
    }

    void InsertAtHead(int value)
    {
        node* newNode = new node();
        newNode->data = value;
        newNode->nxt = head;
        head = newNode;
        size++;
    }

    int getSize()
    {
        return size;
    }

    int getValue(int index)
    {
        if (index >= size) return -1;
        node* current = head;
        for (int i = 0; i < index; i++)
        {
            current = current->nxt;
        }
        return current->data;
    }

    void printReverse(node* current)
    {
        if (current == NULL) return;
        printReverse(current->nxt);
        cout << current->data << " ";
    }

    void printReverse()
    {
        printReverse(head);
        cout<<endl;
    }

    void Traverse()
    {
        node* current = head;
        while (current != NULL)
        {
            cout << current->data << " ";
            current = current->nxt;
        }
        cout << endl;
    }

    void swapFirst()
    {
        if (size < 2) return;
        node* firstNode = head;
        node* secondNode = head->nxt;
        firstNode->nxt = secondNode->nxt;
        secondNode->nxt = firstNode;
        head = secondNode;
    }
};

int main()
{
    LinkedList l;
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(5);
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(6);
    l.InsertAtHead(30);
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(20);
    l.InsertAtHead(30);

    cout<<l.getValue(2)<<"\n";

    cout<<l.getValue(6)<<"\n";

    l.printReverse();
    l.Traverse();
    l.swapFirst();
    l.Traverse();
    l.printReverse();

    return 0;
}
