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
    void build_binary()
    {
        node* allnode[6];
        for(int i = 0; i < 6; i++) {
            allnode[i] = CreateNewNode(i);
        }
        allnode[0]->left = allnode[1];
        allnode[0]->right = allnode[2];

        allnode[1]->left = allnode[5];
        allnode[1]->parent = allnode[0];

        allnode[2]->left = allnode[3];
        allnode[2]->right = allnode[4];
        allnode[2]->parent = allnode[0];

        allnode[5]->parent = allnode[1];
        allnode[3]->parent = allnode[2];
        allnode[4]->parent = allnode[2];

        root = allnode[0];
        return;
    }
    void Preorder(node *a)
    {
        if(a == NULL) {
            return;
        }
        cout << a->id << " ";
        Preorder(a->left);
        Preorder(a->right);
    }
};
int main()
{
    BinaryTree bt;
    bt.build_binary();
    cout << "DFS pre order Traversal: ";
    bt.Preorder(bt.root);
    return 0;
}
