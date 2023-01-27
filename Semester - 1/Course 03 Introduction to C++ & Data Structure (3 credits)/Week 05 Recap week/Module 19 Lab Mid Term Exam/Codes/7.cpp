#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node * nxt;
    node * prv;
};

class DoublyLinkedList
{
public:
    node *head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }

    //Creates a new node with the given data and returns it O(1)
    node * CreateNewNode(int data)
    {
        node *newnode = new node;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    //Inserts a node with given data at head O(1)
    void InsertAtHead(int data)
    {
        sz++;
        node *newnode = CreateNewNode(data);
        if(head == NULL)
        {
            head = newnode;
            return;
        }
        node *a = head;
        newnode->nxt = a;
        a->prv = newnode;
        head = newnode;
    }

    //Prints the linked list O(n)
    void Traverse()
    {
        node *a = head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }
    // swaps the values of given indexes
    void swap(int i, int j)
    {
        if (i >= sz || j >= sz) {
            cout << "Invalid" << endl;
            return;
        }
        if (i == j) return;
        node* a = head;
        node* b = head;
        for (int idx = 0; idx < i; idx++) {
            a = a->nxt;
        }
        for (int idx = 0; idx < j; idx++) {
            b = b->nxt;
        }
        int temp = a->data;
        a->data = b->data;
        b->data = temp;
    }
    // deletes the values that is zero
    void deleteZero()
{
    node *curr = head;
    while (curr)
    {
        if (curr->data == 0)
        {
            if (curr == head)
            {
                head = curr->nxt;
                if(curr->nxt != NULL) curr->nxt->prv = NULL;
            }
            else if (curr->nxt == NULL)
            {
                curr->prv->nxt = NULL;
            }
            else
            {
                curr->prv->nxt = curr->nxt;
                curr->nxt->prv = curr->prv;
            }
            sz--;
        }
        curr = curr->nxt;
        }
    }
};

int main()
{
    DoublyLinkedList dl;
    dl.InsertAtHead(7);
    dl.InsertAtHead(0);
    dl.InsertAtHead(0);
    dl.InsertAtHead(2);
    dl.InsertAtHead(0);

    cout << "Before swapping: ";
    dl.Traverse();
    dl.swap(1, 4);
    cout << "After swapping: ";
    dl.Traverse();

    dl.deleteZero();
    cout << "After deleting zero values: ";
    dl.Traverse();

    return 0;
}

