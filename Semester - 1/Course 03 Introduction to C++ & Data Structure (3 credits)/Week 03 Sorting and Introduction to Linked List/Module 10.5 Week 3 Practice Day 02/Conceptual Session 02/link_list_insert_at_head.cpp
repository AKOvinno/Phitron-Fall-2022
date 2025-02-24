/**
* author: asif_102
* created: 2023-01-11 22:21:19
**/
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int value;
    Node* next; // next node address

    Node(int value) {
        this->value = value;
        this->next = NULL;
    }
};

void insertAtHead(Node*& head, int value){
    Node *newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void display(Node* head){
    if(head == NULL) return;

    while(head != NULL){
        cout << head->value << " ";
        head = head->next;
    }
}

int main() {
    // Node* a = new Node(10);
    // Node* b = new Node(20);
    // Node* c = new Node(30);

    // a->next = b;
    // b->next = c;

    // cout << a->value << " " << a->next->value << " " << a->next->next->value;

    Node* head = NULL;
    insertAtHead(head, 10);
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);
    insertAtHead(head, 50);
    insertAtHead(head, 60);
    
    display(head);

    return 0;
}