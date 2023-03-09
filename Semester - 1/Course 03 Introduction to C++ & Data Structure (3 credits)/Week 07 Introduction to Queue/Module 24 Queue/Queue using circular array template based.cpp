#include<bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 5;
template <class T>
class Queue
{
public:
    T a[MAX_SIZE];
    int l, r;
    int sz;

    Queue()
    {
        l = 0;
        r = -1;
        sz = 0;
    }
    // Time complexity O(1)
    void enqueue(T value)
    {
        if(sz == MAX_SIZE) {
            cout << "Queue is full\n";
            return;
        }
        r++;
        if(r == MAX_SIZE) {
            r = 0;
        }
        a[r] = value;
        sz++;
    }
    // Time complexity O(1)
    void dequeue()
    {
        if(sz == 0) {
            cout << "Queue is empty\n";
            return;
        }
        l++;
        if(l == MAX_SIZE) {
            l = 0;
        }
        sz--;
    }
    // Time complexity O(1)
    T Front()
    {
        if(sz == 0) {
            cout << "Queue is empty\n";
            return -1;
        }
        return a[l];
    }
    // Time complexity O(1)
    int Size()
    {
        return sz;
    }
};
int main()
{
    Queue <char> q;
    q.enqueue('a');
    q.enqueue('b');
    q.enqueue('c');
    q.enqueue('d');
    q.enqueue('e');
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.enqueue('x');
    q.enqueue('y');
    q.enqueue('z');
    while(q.Size() != 0) {
        cout << q.Front() << " ";
        q.dequeue();
    }
    return 0;
}

