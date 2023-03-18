#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int value;
    node* left;
    node* right;
};
class BST
{
public:
    node *root;

    BST()
    {
        root = NULL;
    }
    node* CreateNewNode(int value)
    {
        node* newnode = new node;
        newnode -> value = value;
        newnode -> left = NULL;
        newnode -> right = NULL;
        return newnode;
    }
    void BFS()
    {
        if(root == NULL)
            return;
        queue <node*>q;
        q.push(root);
        while(!q.empty()) {
            node* a = q.front();
            q.pop();
            int p = -1, l = -1, r = -1;
            if(a->left != NULL) {
                l = a->left->value;
                q.push(a->left);
            }
            if(a->right != NULL) {
                r = a->right->value;
                q.push(a->right);
            }
            cout << "Node Value: " << a->value << "\tLeft Child = " << l << "\tRight Child = " << r << "\n";
        }
    }
    void Insert (int value)
    {
        node* newnode = CreateNewNode(value);
        if(root == NULL) {
            root = newnode;
            return;
        }
        node* cur = root;
        node* prv = NULL;
        while(cur != NULL) {
            if(newnode->value > cur->value) {
                prv = cur;
                cur = cur -> right;
            }
            else {
                prv = cur;
                cur = cur -> left;
            }
        }
        if(newnode->value > prv->value) {
            prv->right = newnode;
        }
        else {
            prv->left = newnode;
        }
    }
    bool Search(int value)
    {
        node* cur = root;
        while(cur != NULL) {
            if(value > cur->value) {
                cur = cur->right;
            }
            else if(value < cur->value) {
                cur = cur->left;
            }
            else {
                return true;
            }
        }
        return false;
    }
};
int main()
{
    BST bst;
    bst.Insert(5);
    bst.Insert(3);
    bst.Insert(2);
    bst.Insert(7);
    bst.Insert(6);
    bst.Insert(4);
    bst.Insert(1);

    bst.BFS();

    cout << bst.Search(10) << "\n";
    cout << bst.Search(7) << "\n";

    return 0;
}

