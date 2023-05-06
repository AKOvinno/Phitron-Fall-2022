#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1005;

int n, m;
char grid[MAXN][MAXN];
int room_cnt, longest_room;

void dfs(int x, int y, int& room_size)
{
    if (x < 0 || x >= n || y < 0 || y >= m)
    {
        return;
    }
    if (grid[x][y] == '#')
    {
        return;
    }
    if (grid[x][y] == '.')
    {
        grid[x][y] = '#';
        room_size++;
        dfs(x-1, y, room_size);
        dfs(x+1, y, room_size);
        dfs(x, y-1, room_size);
        dfs(x, y+1, room_size);
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == '.')
            {
                room_cnt++;
                int room_size = 0;
                dfs(i, j, room_size);
                longest_room = max(longest_room, room_size);
            }
        }
    }

    cout << "Rooms - " << room_cnt << "\n";
    cout << "Length of the longest room - " << longest_room << "\n";

    return 0;
}
