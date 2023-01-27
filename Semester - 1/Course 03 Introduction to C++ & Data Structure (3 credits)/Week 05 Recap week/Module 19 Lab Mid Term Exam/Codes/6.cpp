#include<bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node * nxt;
};

class LinkedList
{
public:
    node * head;
    int sz;
    LinkedList()
    {
        head = NULL;
        sz=0;
    }

    //Creates a new node with data = value and nxt= NULL
    node* CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->nxt = NULL;
        return newnode;
    }
    // gets the last element of the linked list
    int getLast()
    {
        if (head == NULL)
            return -1;

        node *a = head;
        while (a->nxt != NULL)
        {
            a = a->nxt;
        }
        return a->data;
    }
    // gets the average value of linked list
    double getAverage()
    {
        if (head == NULL)
            return -1;

        double sum = 0;
        node *a = head;
        while (a != NULL)
        {
            sum += a->data;
            a = a->nxt;
        }
        return sum / sz;
    }

    // Insert new value at Head
    void InsertAtHead(int value)
    {
        sz++;
        node *a = CreateNewNode(value);
        if(head == NULL)
        {
            head = a;
            return;
        }
        //If head is not NULL
        a->nxt = head;
        head = a;
    }

    //Prints the linked list
    void Traverse()
    {
        node* a = head;
        while(a!= NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }
};

int main()
{
    LinkedList l;

    l.InsertAtHead(7);
    l.InsertAtHead(4);
    l.InsertAtHead(6);
    l.InsertAtHead(2);
    l.InsertAtHead(3);

    cout << "Last Element: " << l.getLast() << "\n";
    cout << "Average: " << l.getAverage() << "\n";


    return 0;
}

