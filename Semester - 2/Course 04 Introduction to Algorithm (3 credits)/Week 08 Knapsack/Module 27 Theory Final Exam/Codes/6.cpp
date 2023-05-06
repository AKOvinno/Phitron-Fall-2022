#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
int n, ax, ay, bx, by, cx, cy;
bool vis[N][N];

bool can_reach(int x, int y)
{
    if (x == ax || y == ay || abs(x - ax) == abs(y - ay)) return false;
    return true;
}
bool dfs(int x, int y)
{
    if (x == cx && y == cy) return true;
    vis[x][y] = true;
    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            int nx = x + i, ny = y + j;
            if (nx < 1 || nx > n || ny < 1 || ny > n || vis[nx][ny]) continue;
            if (can_reach(nx, ny)) {
                if (dfs(nx, ny)) return true;
            }
        }
    }
    return false;
}
bool bfs()
{
    queue<pair<int, int>> q;
    q.push(make_pair(bx, by));
    vis[bx][by] = true;
    while (!q.empty()) {
        pair<int, int> p = q.front();
        q.pop();
        int x = p.first, y = p.second;
        if (x == cx && y == cy) return true;
        for (int i = -1; i <= 1; i++) {
            for (int j = -1; j <= 1; j++) {
                int nx = x + i, ny = y + j;
                if (nx < 1 || nx > n || ny < 1 || ny > n || vis[nx][ny]) continue;
                if (can_reach(nx, ny)) {
                    q.push(make_pair(nx, ny));
                    vis[nx][ny] = true;
                }
            }
        }
    }
    return false;
}
int main()
{
    cin >> n >> ax >> ay >> bx >> by >> cx >> cy;
    if (dfs(bx, by) || bfs()) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
    return 0;
}
