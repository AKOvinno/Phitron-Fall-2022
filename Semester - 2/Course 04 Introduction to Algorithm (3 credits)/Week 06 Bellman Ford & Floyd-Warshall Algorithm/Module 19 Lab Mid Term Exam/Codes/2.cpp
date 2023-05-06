#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
const int INF = 1e9;

vector< pair<int, int> >adj_list[N];
int d[N];

int main()
{

    int n, m;
    cin >> n >> m;
    int prev[N];
    for(int i = 1 ; i <=  n ; i++) {
        d[i] = INF;
        prev[i] = -1;
    }
    for(int i = 0 ; i < m ; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj_list[u].push_back({ v, w });
    }

    int src = 1;
    d[src] = 0;

    bool negative_cycle = false;
    int last_relaxed_node;

    for(int i = 1 ; i <= n ; i++) {
        last_relaxed_node = -1;
        for(int node = 1 ; node <= n ; node++) {
            for(pair<int, int> adj_node: adj_list[node]) {
                int u = node;
                int v = adj_node.first;
                int w = adj_node.second;

                if(d[u] + w < d[v]) {
                    d[v] = d[u] + w;
                    prev[v] = u;
                    last_relaxed_node = v;
                    if(i == n) {
                        negative_cycle = true;
                    }
                }
            }
        }
    }

    if(negative_cycle == true) {
        cout<<"YES"<<"\n";
        vector<int> cycle;
        int node = last_relaxed_node;
        for(int i = 0 ; i < n ; i++) {
            node = prev[node];
        }
        int start_node = node;
        cycle.push_back(start_node);
        node = prev[node];
        while(node != start_node) {
            cycle.push_back(node);
            node = prev[node];
        }
        cycle.push_back(start_node);
        reverse(cycle.begin(), cycle.end());
        for(int node: cycle) {
            cout<<node<<" ";
        }
        cout<<"\n";
    }
    else {
        cout<<"NO"<<"\n";
    }
    return 0;
}
