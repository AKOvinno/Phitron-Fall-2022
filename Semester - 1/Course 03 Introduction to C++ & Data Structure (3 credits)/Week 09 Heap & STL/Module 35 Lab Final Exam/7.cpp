#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int value;
    node* Left;
    node* Right;
};

class BST{
public:
    node *root;
    BST()
    {
        root = NULL;
    }
    void Insert(int value)
    {
        node* newnode = new node;
        newnode->value = value;
        newnode->Left = NULL;
        newnode->Right = NULL;

        if(root == NULL)
        {
            root = newnode;
            return;
        }

        node* cur = root;
        while(true)
        {
            if(value > cur->value)
            {
                if(cur->Right == NULL)
                {
                    cur->Right = newnode;
                    return;
                }
                cur = cur->Right;
            }
            else
            {
                if(cur->Left == NULL)
                {
                    cur->Left = newnode;
                    return;
                }
                cur = cur->Left;
            }
        }
    }
    bool Search(int value)
    {
        node* cur = root;
        while(cur != NULL)
        {
            if(value > cur->value)
            {
                cur = cur->Right;
            }
            else if(value < cur->value)
            {
                cur = cur->Left;
            }
            else{
                return true;
            }
        }
        return false;
    }
};

int main()
{
    BST bst;
    bst.Insert(10);
    bst.Insert(20);
    bst.Insert(25);
    bst.Insert(50);
    bst.Insert(8);
    bst.Insert(9);
    cout<<bst.Search(10)<<"\n"; //1
    cout<<bst.Search(9)<<"\n"; //1
    cout<<bst.Search(20)<<"\n"; //1
    cout<<bst.Search(60)<<"\n"; //0
    return 0;
}

