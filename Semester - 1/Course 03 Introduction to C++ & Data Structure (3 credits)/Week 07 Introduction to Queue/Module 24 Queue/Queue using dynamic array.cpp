#include<bits/stdc++.h>
using namespace std;

class Queue
{
public:
    int *a;
    int array_cap;
    int l, r;
    int sz;

    Queue()
    {
        a = new int[1];
        array_cap = 1;
        l = 0;
        r = -1;
        sz = 0;
    }
    void remove_circular()
    {
        int *tmp = new int[array_cap];
        int idx = 0;
        for(int i = 1; i < array_cap; i++) {
            tmp[idx] = a[i];
            idx++;
        }
        for(int i = 0; i <= r; i++) {
            tmp[idx] = a[i];
            idx++;
        }
        swap(tmp, a);
        l = 0;
        r = array_cap - 1;
        delete [] tmp;
    }
    void increase_size()
    {
        if(l > r) {
            remove_circular();
        }
        int *tmp = new int[array_cap * 2];
        for(int i = 0; i < array_cap; i++) {
            tmp[i] = a[i];
        }
        swap(a, tmp);
        array_cap = array_cap * 2;
        delete [] tmp;
    }
    // Time complexity O(1)
    void enqueue(int value)
    {
        if(sz == array_cap) {
            increase_size();
        }
        r++;
        if(r == array_cap) {
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
        if(l == array_cap) {
            l = 0;
        }
        sz--;
    }
    // Time complexity O(1)
    int Front()
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
    Queue q;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);
    q.enqueue(9);
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.enqueue(10);
    q.enqueue(11);
    q.enqueue(12);
    q.enqueue(13);
    while(q.Size() != 0) {
        cout << q.Front() << " ";
        q.dequeue();
    }
    return 0;
}

