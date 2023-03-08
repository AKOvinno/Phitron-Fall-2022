#include<bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 500;

class Queue
{
public:
    int a[MAX_SIZE];
    int l, r;

    Queue()
    {
        l = 0;
        r = -1;
    }
    // Time complexity O(1)
    void enqueue(int value)
    {
        if(r+1 >= MAX_SIZE) {
            cout << "Queue is full\n";
            return;
        }
        r++;
        a[r] = value;
    }
    // Time complexity O(1)
    void dequeue()
    {
        if(l > r) {
            cout << "Queue is empty\n";
            return;
        }
        l++;
    }
    // Time complexity O(1)
    int Front()
    {
        if(l > r) {
            cout << "Queue is empty\n";
            return -1;
        }
        return a[l];
    }
    // Time complexity O(1)
    int Size()
    {
        return r - l + 1;
    }
};
int main()
{
    Queue q;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);

    cout << "Size: " << q.Size() << "\n";

    cout << q.Front() << "\n";
    q.dequeue();
    cout << q.Front() << "\n";
    q.dequeue();
    cout << q.Front() << "\n";
    q.dequeue();

    cout << "Size: " << q.Size() << "\n";

    return 0;
}
