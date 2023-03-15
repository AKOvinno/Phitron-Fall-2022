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
    void BFS()
    {
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
    bt.build_binary();
    bt.BFS();
    return 0;
}
