/*

Graph Representation
==================
Topic: Adjacency Matrix

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

Time complexity -> O(n^2)
Space Complexity -> O(n^2)

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{

}
