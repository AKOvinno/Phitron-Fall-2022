#include<bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 500;

class Queue
{
public:
    int a[MAX_SIZE];
    int l, r; // Here, l is left and r is right mainly l is start and r is end

    Queue()
    {
        l = 0; // here l will be indicating the front value
        r = -1; // here r will be increasing for insertion
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
        // increasing l because that represent the front value index
        // increasing l means now it will indicate the next value after front
        l++;
    }
    // Time complexity O(1)
    int Front()
    {
        if(l > r) {
            cout << "Queue is empty\n";
            return -1;
        }
        // returning a[l] because l indicates the index of front value
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
