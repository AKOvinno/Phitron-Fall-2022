#include<bits/stdc++.h>
using namespace std;

class MaxHeap {
public:
    vector<int>nodes;

    MaxHeap()
    {

    }
    void up_heapify(int idx)
    {
        while(idx > 0 && nodes[idx] > nodes[(idx-1)/2])
        {
            swap(nodes[idx] , nodes[(idx-1)/2]);
            idx = (idx-1)/2;
        }
    }
    void down_heapify(int idx)
    {
        while(1)
        {
            int largest = idx;
            int l = 2*idx + 1;
            int r = 2*idx + 2;
            if(l<nodes.size() && nodes[largest] < nodes[l])
            {
                largest = l;
            }
            if(r<nodes.size() && nodes[largest] < nodes[r])
            {
                largest = r;
            }
            if(largest==idx)
                break;
            swap(nodes[idx] , nodes[largest]);
            idx = largest;
        }

    }

    void insert(int x)
    {
        nodes.push_back(x);
        up_heapify(nodes.size()-1);
    }
    void Delete(int idx)
    {
        if(idx >= nodes.size())
            return;
        swap(nodes[idx] , nodes[nodes.size()-1]);
        nodes.pop_back();
        down_heapify(idx);
    }
    int getMax()
    {
        if(nodes.empty())
        {
            cout<<"Heap is empty!\n";
            return -1;
        }
        return nodes[0];
    }
};

class MinHeap {
public:
    MaxHeap mx;

    void insert(int x) {
        mx.insert(INT_MAX - x);
    }

    void Delete(int idx) {
        mx.Delete(idx);
    }

    int getMin() {
        return INT_MAX - mx.getMax();
    }
};

int main() {
    MinHeap minHeap;

    minHeap.insert(4);
    minHeap.insert(7);
    minHeap.insert(9);
    minHeap.insert(1);
    minHeap.insert(10);

    cout << minHeap.getMin() << "\n"; // Output: 1

    minHeap.Delete(0);

    cout << minHeap.getMin() << "\n"; // Output: 4

    minHeap.insert(0);

    cout << minHeap.getMin() << "\n"; // Output: 0

    return 0;
}
