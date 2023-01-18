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
    node* head;
    LinkedList()
    {
        head = NULL;
    }
    //Creates a new node with data = value and nxt = NULL
    node* CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->nxt = NULL;
        return newnode;
    }
    void InsertAtHead()
    {
        node *a = CreateNewNode(value);
        if(head == NULL) {
            head = a;
            return;
        }
    }
    void Traverse()
    {

    }
    void SearchDistinctValue()
    {

    }
    void SearchAllValue(int value)
    {

    }
};

int main()
{
    LinkedList l;

    l.InsertAtHead(10);
    l.InsertAtHead(30);
    l.InsertAtHead(20);
    l.InsertAtHead(30);

    l.Traverse();

    l.SearchDistinctValue();
    l.SearchDistinctValue(5);

    l.SearchAllValue(10);

    return 0;
}

