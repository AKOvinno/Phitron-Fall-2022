#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
const int INF = 1e9;
vector<pair<int, int>>adj_list[N];
int d[N];
int main()
{
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        d[i] = INF;
    }
    for(int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj_list[u].push_back({v, w});
    }
    int src = 1;
    d[src] = 0;
    for(int i = 1; i <= n-1; i++) {
        for(int node = 1; node <= n; node++) {
            for(auto adj_node : adj_list[node]) {
                int u = node;
                int v = adj_node.first;
                int w = adj_node.second;
                // Relaxation
                if(d[u] + w < d[v]) {
                    d[v] = d[u] + w;
                }
            }
        }
    }
    for(int i = 1; i <= n; i++) {
        cout << d[i] << " ";
    }
    cout << "\n";
    return 0;
}

