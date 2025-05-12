#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
int visited[N];
int level[N]; // declaring level array
vector<int>adj_list[N];
/*
Output: 0 1 2 5 3 4

0 --- 1 ----- 2 ---- 3
         |       |
         |       |
        5 ----- 4
# of node = 6
# of edge = 6
list of adj nodes ->

6 6

0 1
2 3
1 2
1 5
2 4
5 4
*/
void bfs(int src)
{
    queue<int>q;
    visited[src] = 1;
    level[src] = 0; // source level starting from 0
    q.push(src);
    while(!q.empty()) {
        int head = q.front();
        q.pop();

        for(int adj_node : adj_list[head]) {
            if(visited[adj_node] == 0) {
                visited[adj_node] = 1;
                level[adj_node] = level[head] + 1; // node's level is it's parent level + 1
                q.push(adj_node);
            }
        }
    }
}
int main()
{
    int nodes, edges;
    cin >> nodes >> edges;
    for(int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    int src = 0;
    bfs(src);
    for(int i = 0; i < nodes; i++) {
        cout << "Node " << i << ": " << level[i] << "\n";
    }
    return 0;
}
