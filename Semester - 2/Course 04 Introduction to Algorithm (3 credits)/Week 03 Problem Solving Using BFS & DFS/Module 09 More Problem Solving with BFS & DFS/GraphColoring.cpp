// Problem Link: https://cses.fi/problemset/task/1668
#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
int visited[N];
int color[N];
vector<int>adj_list[N];
bool dfs(int node)
{
    visited[node] = 1;
    for(int adj_node: adj_list[node]) {
        if(visited[adj_node] == 0) {
            // assign different color to adj_node
            if(color[node] == 1) color[adj_node] = 2;
            else color[adj_node] = 1;
            bool is_bi_colorable = dfs(adj_node);
            if(!is_bi_colorable) {
                return false;
            }
        }
        else {
            // check if color is same or different
            if(color[node] == color[adj_node]) {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    bool is_impossible;
    int nodes, edges;
    cin >> nodes >> edges;
    for(int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    for(int i = 1; i <= nodes; i++) {
        if(visited[i] == 0) {
            color[i] = 1;
            is_impossible = dfs(i);
        }
    }
    if(is_impossible) {
            for(int i = 1; i <= nodes; i++) {
            cout << color[i] << " ";
        }
    }
    else {
        cout << "IMPOSSIBLE\n";
        return 0;
    }

    return 0;
}
