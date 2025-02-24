/**
* author: asif_102
* created: 2023-01-11 23:09:26
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

void insertAtTail(Node*& head, int value) {
    Node* newNode = new Node(value);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void display(Node* head) {
    if (head == NULL) return;

    while (head != NULL) {
        cout << head->value << " ";
        head = head->next;
    }
}

int main() {
    Node* head = NULL;
    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    insertAtTail(head, 40);
    insertAtTail(head, 50);
    insertAtTail(head, 60);

    display(head);
    return 0;
}