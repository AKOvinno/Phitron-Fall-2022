#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;
int n;
vector<string> grid;
vector<vector<int>> memo;

int countPaths(int i, int j) {
    if (i == n-1 && j == n-1) return 1;
    if (i >= n || j >= n || grid[i][j] == '*') return 0;
    if (memo[i][j] != -1) return memo[i][j];
    int paths = (countPaths(i+1, j) % mod + countPaths(i, j+1) % mod) % mod;
    memo[i][j] = paths;
    return paths;
}

int main() {
    cin >> n;
    grid.resize(n);
    memo.resize(n, vector<int>(n, -1));
    for (int i = 0; i < n; i++) cin >> grid[i];
    int ans = countPaths(0, 0);

    if (ans == 0) {
        cout << -1 << endl;
    } else {
        cout << ans << endl;
    }
    return 0;
}
