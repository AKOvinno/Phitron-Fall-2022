#include<bits/stdc++.h>
using namespace std;
const int N = 2e5;

vector<int>adj_list[N];
int visited[N];
int color[N];

bool is_bipartite(int src) {
    queue<int>q;
    visited[src] = 1;
    color[src] = 0;
    q.push(src);

    while(!q.empty()) {
        int head = q.front();
        q.pop();

        for(int adj_node: adj_list[head]) {
            if(visited[adj_node] == 0) {
                visited[adj_node] = 1;
                color[adj_node] = !color[head];
                q.push(adj_node);
            }
            else {
                if(color[adj_node] == color[head]) {
                    return false;
                }
            }
        }
    }
    return true;
}
int main() {
    int n, m;
    cin >> n >> m;
    for(int i = 0 ; i < m ; i++) {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    bool is_bip = true;
    for(int i = 0 ; i < n ; i++) {
        if(visited[i] == 0) {
            bool check_bip = is_bipartite(i);
            if(check_bip == false) {
                is_bip = false;
                break;
            }
        }
    }
    if(is_bip) {
        cout<<"YES"<<"\n";
    }
    else {
        cout<<"NO"<<"\n";
    }
    return 0;
}
