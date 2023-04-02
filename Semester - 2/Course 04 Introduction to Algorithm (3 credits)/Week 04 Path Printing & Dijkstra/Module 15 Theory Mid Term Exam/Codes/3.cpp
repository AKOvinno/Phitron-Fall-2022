#include<bits/stdc++.h>
using namespace std;
const int N = 2e5;

vector<int> adj_list[N];
int visited[N];

bool detect_cycle(int node, int parent)
{
    visited[node] = true;
    for(int adj_node: adj_list[node]) {
        if(!visited[adj_node]) {
            if(detect_cycle(adj_node, node)) {
                return true;
            }
        }
        else if(adj_node != parent) {
            return true;
        }
    }
    return false;
}

int main()
{
    int n, m;
    cin >> n >> m;

    for(int i = 0 ; i < m ; i++) {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    bool cycle_exists = false;

    for(int i = 1 ; i <= n ; i++) {
        if(!visited[i]) {
            if(detect_cycle(i, -1)) {
                cycle_exists = true;
                break;
            }
        }
    }

    if(cycle_exists) {
        cout<<"Cycle Exist\n";
    }
    else {
        cout<<"No Cycle\n";
    }
    return 0;
}

