#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int id;
    node *left;
    node *right;
    node *parent;
};
// Manually node insertion in Binary Search Tree
class BinaryTree
{
public:
    node *root;

    BinaryTree()
    {
        root = NULL;
    }
    node *CreateNewNode(int id)
    {
        node *newnode = new node;
        newnode -> id = id;
        newnode -> left = NULL;
        newnode -> right = NULL;
        newnode -> parent = NULL;
        return newnode;
    }
    void Insertion(int id)
    {
        node *newnode = CreateNewNode(id);
        if(root == NULL) {
            root = newnode;
            return;
        }
        queue <node*> q;
        q.push(root);
        while(!q.empty()) {
            node* a = q.front();
            q.pop();
            if(a->left != NULL) {
                q.push(a->left);
            }
            else {
                a->left = newnode;
                newnode->parent = a;
                return;
            }
            if(a->right != NULL) {
                q.push(a->right);
            }
            else {
                a->right = newnode;
                newnode->parent = a;
                return;
            }
        }
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
                l = a->left->id;
                q.push(a->left);
            }
            if(a->right != NULL) {
                r = a->right->id;
                q.push(a->right);
            }
            if(a->parent != NULL) {
                p = a->parent->id;
            }
            cout << "Node ID: " << a->id << "\tParent = " << p << "\tLeft Child = " << l << "\tRight Child = " << r << "\n";
        }
    }
};
int main()
{
    BinaryTree bt;

    bt.Insertion(0);
    bt.Insertion(1);
    bt.Insertion(2);
    bt.Insertion(3);
    bt.Insertion(4);
    bt.Insertion(5);

    bt.BFS();

    return 0;
}

