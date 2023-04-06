/*

Graph Representation
==================
Topic: Adjacency List

0 ------ 1
         /   \
        2 --- 3

# total nodes = 4
# total edge = 4
# Undirected + Unweighted

matrix -> no. of nodes * no of nodes
            -> 4*4
matrix[i][j] = 1
    if and only if (i -> j)

0 -> 1
1 -> 0
1 -> 2
2 -> 1
1 -> 3
3 -> 1
2 -> 3
3 -> 2

Input:
0 1
1 0
1 2
2 1
1 3
3 1
2 3
3 2
*/

#include<bits/stdc++.h>
using namespace std;

// Time complexity = O(n^2)
// Space complexity = O(n^2)

int main()
{
    int nodes = 4;
    vector <int> adj_list[nodes];

    // O(E) -> if no. of edge if low
    // O(E * 2) = (E) // Worst Case = O(n^2)
    adj_list[0] = {1};
    adj_list[1] = {0, 2, 3};
    adj_list[2] = {1, 3};
    adj_list[3] = {1, 2};

    // O(2 * E) = O(E) // Worst Case = O(n^2)
    // Space Complexity O(1)
    for(int i = 0; i < nodes; i++) {
        cout << i << " -> ";
        for(int j = 0; j < adj_list[i].size(); j++) {
            cout << adj_list[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
