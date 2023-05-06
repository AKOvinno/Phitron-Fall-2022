#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9;
const int MAXN = 100005;
int dist[MAXN];
vector<pair<int,int>> adj[MAXN];

bool bellman_ford(int n, int m, int src)
{
    for(int i = 1; i <= n; i++) {
        dist[i] = INF;
    }

    dist[src] = 0;

    for(int i = 1; i < n; i++) {
        for(int u = 1; u <= n; u++) {
            for(auto edge : adj[u]) {
                int v = edge.first;
                int w = edge.second;
                if(dist[u] != INF && dist[u] + w < dist[v]) {
                    dist[v] = dist[u] + w;
                }
            }
        }
    }

    for(int u = 1; u <= n; u++) {
        for(auto edge : adj[u]) {
            int v = edge.first;
            int w = edge.second;
            if(dist[u] != INF && dist[u] + w < dist[v]) {
                return true;
            }
        }
    }

    return false;
}
int main()
{
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back(make_pair(v, w));
    }

    if(bellman_ford(n, m, 1))
        {
        cout << "YES" << "\n";
    }
    else {
        cout << "NO" << "\n";
    }
    return 0;
}
