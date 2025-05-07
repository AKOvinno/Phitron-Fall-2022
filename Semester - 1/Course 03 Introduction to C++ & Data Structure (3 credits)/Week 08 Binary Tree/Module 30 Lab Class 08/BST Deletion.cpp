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
    void Insert (int value) // O(h)
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
    bool Search(int value) // O(h)
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
    void Delete(int value) // O(h)
    {
        node* cur = root;
        node* prv = NULL;
        while(cur != NULL) {
            if(value > cur-> value) {
                prv = cur;
                cur = cur->right;
            }
            else if(value < cur->value) {
                prv = cur;
                cur = cur->left;
            }
            else {
                break;
            }
        }
        if(cur == NULL) {
            cout << "Value is not present in BST\n";
            return;
        }
        //Case 1: both child is NULL
        if(cur->left == NULL && cur->right == NULL) {
            if(prv->left != NULL && prv->left->value == cur->value) {
                prv->left = NULL;
            }
            else {
                prv->right = NULL;
            }
            delete cur;
            return;
        }
        //Case 2: node has only one child
        if(cur->left == NULL && cur->right != NULL) {
            if(prv->left != NULL && prv->left->value == cur->value) {
                prv->left = cur->right;
            }
            else {
                prv->right = cur->right;
            }
            delete cur;
            return;
        }
        if(cur->left != NULL && cur->right == NULL) {
            if(prv->left != NULL && prv->left->value == cur->value) {
                prv->left = cur->left;
            }
            else {
                prv->right = cur->left;
            }
            delete cur;
            return;
        }
        //Case 3: node has two child
        node *tmp = cur->right;
        while(tmp->left != NULL) {
            tmp = tmp->left;
        }
        int saved = tmp->value;
        Delete(saved); // It will be deleted by case 1 or 2
        cur->value = saved;
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
    //Case 1
    cout << "After Deletion: \n";
    bst.Delete(6);
    bst.BFS();
    //Case 2
    cout << "After Deletion: \n";
    bst.Delete(2);
    bst.BFS();
    //Case 3
    cout << "After Deletion: \n";
    bst.Delete(5);
    bst.BFS();
    return 0;
}

