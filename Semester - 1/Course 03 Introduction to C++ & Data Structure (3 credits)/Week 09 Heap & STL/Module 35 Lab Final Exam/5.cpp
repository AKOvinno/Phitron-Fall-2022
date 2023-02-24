#include<bits/stdc++.h>
using namespace std;

class Queue {
private:
    int arr[100];
    int front;
    int rear;
public:
    Queue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int x) {
        if (rear == 99) {
            cout << "Queue is full\n";
            return;
        } else if (front == -1 && rear == -1) {
            front = 0;
            rear = 0;
        } else {
            rear++;
        }
        arr[rear] = x;
    }

    void dequeue() {
        if (front == -1) {
            cout << "Queue is empty\n";
            return;
        } else if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front++;
        }
    }

    int frontValue() {
        if (front == -1) {
            cout << "Queue is empty\n";
            return -1;
        } else {
            return arr[front];
        }
    }
};

int main() {
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    cout << q.frontValue() << "\n";
    q.dequeue();
    cout << q.frontValue() << "\n";
    q.dequeue();
    cout << q.frontValue() << "\n";
    q.enqueue(6);
    cout << q.frontValue() << "\n";
    q.dequeue();
    cout << q.frontValue() << "\n";
    q.dequeue();
    cout << q.frontValue() << "\n";
    q.dequeue();
    cout << q.frontValue() << "\n";
    q.dequeue();
    cout << q.frontValue() << "\n";
    return 0;
}
