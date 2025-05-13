#include<bits/stdc++.h>
using namespace std;

const int N = 2e5;
int visited[N];
vector<int>adj_list[N];
stack<int>q;

bool dfs(int node)
{
    visited[node] = 1;
    for(int adj_node : adj_list[node]) {
        // if we get unvisited node then apply dfs
        if(visited[adj_node] == 0) {
            bool got_cycle = dfs(adj_node);
            if(got_cycle) return true;
        }
        else if(visited[adj_node] == 1) { // it's a paused node & cycle detected
            return true;
        }
        else if(visited[adj_node] == 2) { // it's a done node continue
            continue; // no need to write this condition
        }
    }
    visited[node] = 2;
    q.push(node);
    return false;
}
int main()
{
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
    }
    bool cycle_exists = false;
    for(int i = 1; i <= n; i++) {
        if(visited[i] == 0) {
            cycle_exists = dfs(i);
            if(cycle_exists) break;
        }
    }
    if(cycle_exists) cout << "IMPOSSIBLE\n";
    else {
        while(!q.empty()) {
            cout << q.top() << " ";
            q.pop();
        }
    }
    cout << "\n";
    return 0;
}
