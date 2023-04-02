#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

vector<int>adj_list[N];
int visited[N];

void bfs(int src)
{
    visited[src] = 1;

    queue<int>q;
    q.push(src);

    while(!q.empty()) {
        int head = q.front();
        q.pop();

        for(int adj_node: adj_list[head]) {
            if(visited[adj_node] == 0) {
                visited[adj_node] = 1;
                q.push(adj_node);
            }
        }
    }
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

    int src_node = 1, dest_node = n;

    bfs(src_node);

    if(visited[dest_node] == 1) {
        cout<<"YES\n";
    }
    else {
        cout<<"NO\n";
    }

    return 0;

}
