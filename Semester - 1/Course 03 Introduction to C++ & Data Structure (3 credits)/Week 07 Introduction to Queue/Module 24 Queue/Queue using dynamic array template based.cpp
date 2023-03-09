#include<bits/stdc++.h>
using namespace std;

template <class T>
class Queue
{
public:
    T *a;
    int array_cap;
    int l, r;
    int sz;

    Queue()
    {
        a = new T[1];
        array_cap = 1;
        l = 0;
        r = -1;
        sz = 0;
    }
    void remove_circular()
    {
        if(l > r) {
            T *tmp = new T[array_cap];
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
    }
    void increase_size()
    {
        remove_circular();
        T *tmp = new T[array_cap * 2];
        for(int i = 0; i < array_cap; i++) {
            tmp[i] = a[i];
        }
         swap(a, tmp);
        array_cap = array_cap * 2;
        delete [] tmp;
    }
    // Time complexity O(1)
    void enqueue(T value)
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
    T Front()
    {
        if(sz == 0) {
            cout << "Queue is empty\n";
            T a;
            return a;
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


