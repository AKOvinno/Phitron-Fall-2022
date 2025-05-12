#include <bits/stdc++.h>
using namespace std;

const int N = 2002;
int n, m;
int maze[N][N];
bool visited[N][N];
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

bool is_valid(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m && maze[x][y] != -1 && !visited[x][y];
}

void dfs(int x, int y) {
    visited[x][y] = true;
    for (int i = 0; i < 4; i++) {
        int new_x = x + dx[i];
        int new_y = y + dy[i];
        if (is_valid(new_x, new_y)) {
            dfs(new_x, new_y);
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string row;
        cin >> row;
        for (int j = 0; j < m; j++) {
            if(row[j] == '#') maze[i][j] = -1;
        }
    }

    int rooms = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (maze[i][j] == 0 && !visited[i][j]) {
                dfs(i, j);
                rooms++;
            }
        }
    }

    cout << rooms << "\n";
    return 0;
}

