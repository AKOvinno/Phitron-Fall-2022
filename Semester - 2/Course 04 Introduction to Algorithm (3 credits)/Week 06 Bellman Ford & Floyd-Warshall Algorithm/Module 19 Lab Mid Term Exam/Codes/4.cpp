#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
const int INF = 1e9;

vector<pair<int, int>> adj_list[N];
int d[N], visited[N], parent[N];
int nodes, edges;

void dijkstra(int src) {
    for(int i = 1 ; i <= nodes ; i++) {
        d[i] = INF;
        visited[i] = 0;
        parent[i] = -1;
    }
    d[src] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, src});

    while(!pq.empty()) {
        int selected_node = pq.top().second;
        pq.pop();

        if(selected_node == nodes) {
            break;
        }

        if(visited[selected_node])
            continue;
        visited[selected_node] = 1;

        for(auto adj_entry: adj_list[selected_node]) {
            int adj_node = adj_entry.first;
            int edge_cst = adj_entry.second;

            if(d[selected_node] + edge_cst < d[adj_node]) {
                d[adj_node] = d[selected_node] + edge_cst;
                pq.push({d[adj_node], adj_node});
                parent[adj_node] = selected_node;
            }
        }
    }
}

int main() {

    cin >> nodes >> edges;

    for(int i = 0 ; i < edges ; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj_list[u].push_back({ v, w });
        adj_list[v].push_back({ u, w });
    }

    int src = 1;
    dijkstra(src);

    if(d[nodes] == INF) {
        cout << "-1" << "\n";
    }
    else {
        vector<int> path;
        int current = nodes;
        while(current != -1) {
            path.push_back(current);
            current = parent[current];
        }
        reverse(path.begin(), path.end());

        for(int node: path) {
            cout << node << " ";
        }
        cout << "\n";
    }

    return 0;
}
