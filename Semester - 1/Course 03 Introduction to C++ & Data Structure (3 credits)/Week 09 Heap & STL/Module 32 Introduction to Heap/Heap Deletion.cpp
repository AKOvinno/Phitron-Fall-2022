#include<bits/stdc++.h>
using namespace std;

class MaxHeap
{
public:
    vector <int> nodes;

    MaxHeap()
    {

    }
    // Time complexity O(log n)
    void up_heapify(int idx)
    {
        while(idx > 0 && nodes[idx] > nodes[(idx - 1) / 2]) {
            swap(nodes[idx], nodes[(idx - 1) / 2]);
            idx = (idx - 1) / 2;
        }
    }
    // Time complexity O(log n)
    void Insert(int x)
    {
        nodes.push_back(x);
        up_heapify(nodes.size() - 1);
    }
    // Time complexity O(n)
    void PrintHeap()
    {
        for(int i = 0; i < nodes.size(); i++) {
            cout << nodes[i] << " ";
        }
        cout << "\n";
    }
    // Time complexity O(log n)
    void down_heapify(int idx)
    {
        while(1) {
            int largest = idx;
            int l = 2 * idx + 1;
            int r = 2 * idx + 2;
            if(l < nodes.size() && nodes[largest] < nodes[l]) {
                largest = l;
            }
            if(r < nodes.size() && nodes[largest] < nodes[r]) {
                largest = r;
            }
            if(largest == idx) {
                break;
            }
            swap(nodes[idx], nodes[largest]);
            idx = largest;
        }
    }
    // Time complexity O(log n)
    void Delete(int idx)
    {
        if(idx >= nodes.size()) {
            return;
        }
        swap(nodes[idx], nodes[nodes.size() - 1]);
        nodes.pop_back();
        down_heapify(idx);
    }
    // Time complexity O(1)
    int getMax()
    {
        if(nodes.empty()) {
            cout << "Heap is empty!\n";
            return -1;
        }
        return nodes[0];
    }
    // Time complexity O(log n)
    int ExtractMax()
    {
        if(nodes.empty()) {
            cout << "Heap is empty!\n";
            return -1;
        }
        int ret = nodes[0];
        Delete(0);
        return ret;
    }
};

int main()
{
    MaxHeap heap;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        heap.Insert(num);
    }
    heap.PrintHeap();
    cout << "Max element = " << heap.getMax() << "\n";
    heap.PrintHeap();
    cout << "Max element = " << heap.ExtractMax() << "\n";
    cout << "Max element = " << heap.ExtractMax() << "\n";
    heap.PrintHeap();
    return 0;
}

