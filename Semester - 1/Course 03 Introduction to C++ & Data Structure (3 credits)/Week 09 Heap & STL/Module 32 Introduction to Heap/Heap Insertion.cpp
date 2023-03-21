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
    return 0;
}
