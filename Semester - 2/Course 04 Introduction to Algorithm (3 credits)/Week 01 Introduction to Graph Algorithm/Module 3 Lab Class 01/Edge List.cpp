/*
Graph Representation
==================
Topic: Edge List (Weighted)

0 ------ 1
         /   \
        2 --- 3

[
    [0, 1] - 2
    [1, 2] - 4
    [1, 3] - 9
    [2, 3] - 1
]

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int nodes = 4;
    vector <vector<int> > edge_list;

    // O(E) -> O(n^2)
    edge_list.push_back({0, 1, 2});
    edge_list.push_back({1, 2, 4});
    edge_list.push_back({1, 3, 9});
    edge_list.push_back({2, 3, 1});

    for(int i = 0; i < edge_list.size(); i++) {
        cout << edge_list[i][0] << " --- " << edge_list[i][1] << " | " << edge_list[i][2] << "\n";
    }

    return 0;
}


