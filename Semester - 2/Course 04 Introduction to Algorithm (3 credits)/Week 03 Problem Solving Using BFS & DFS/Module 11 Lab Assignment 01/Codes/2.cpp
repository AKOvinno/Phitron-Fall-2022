#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;

int visited[N];
int level[N];

vector<int>adj_list[N];
void bfs(int src)
{
    queue<int>q;
    visited[src] = 1;
    level[src] = 0;
    q.push(src);
    while(!q.empty()) {
        int head = q.front();
        q.pop();
        for(int adj_node: adj_list[head]) {
            if(visited[adj_node] == 0) {
                visited[adj_node] = 1;
                level[adj_node] = level[head] + 1;
                q.push(adj_node);
            }
        }
    }
}
int main() {
    int nodes = 6, edges = 7;

    adj_list[0].push_back(1);
    adj_list[1].push_back(0);

    adj_list[0].push_back(3);
    adj_list[3].push_back(0);

    adj_list[0].push_back(4);
    adj_list[4].push_back(0);

    adj_list[1].push_back(2);
    adj_list[2].push_back(1);

    adj_list[1].push_back(5);
    adj_list[5].push_back(1);

    adj_list[2].push_back(4);
    adj_list[4].push_back(2);

    adj_list[4].push_back(5);
    adj_list[5].push_back(4);

    int src = 0;
    bfs(src);
    for(int i = 0 ; i < nodes ; i++) {
        cout<<"node "<<i<<" -> level: "<<level[i]<< "\n";
    }
    return 0;
}
