#include <bits/stdc++.h>
using namespace std;

const int maxN = 1010;
char grid[maxN][maxN];
bool visited[maxN][maxN];
pair<int, int> parent[maxN][maxN];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
char dir[4] = {'U', 'L', 'D', 'R'};

void bfs(int x, int y, int n, int m) {
	queue<pair<int, int>> q;

	q.push({x, y});
	visited[x][y] = true;
	parent[x][y] = {-1, -1};

	while (!q.empty()) {
    	pair<int, int> u = q.front();
    	q.pop();
    	for (int i = 0; i < 4; i++) {
        	int dx_, dy_;
        	dx_ = u.first + dx[i];
        	dy_ = u.second + dy[i];
        	if (dx_ >= 0 && dx_ < n && dy_ >= 0 && dy_ < m && !visited[dx_][dy_] && grid[dx_][dy_] != '#' && grid[dx_][dy_] != 'M') {
            	visited[dx_][dy_] = true;
            	q.push({dx_, dy_});
            	parent[dx_][dy_] = u;
        	}
    	}
	}
}

int main()
{
	int n, m;
	cin >> n >> m;

	int start_x, start_y;

	for (int i = 0; i < n; i++) {
    	for (int j = 0; j < m; j++) {
        	cin >> grid[i][j];
        	if (grid[i][j] == 'A') {
            	start_x = i;
            	start_y = j;
        	}
        	if(grid[i][j] == 'A' && n == 1 && m == 1) {
                cout << "YES\n";
                cout << "0\n";
                return 0;
        	}
    	}
	}
	bfs(start_x, start_y, n, m);
	bool found = false;
	pair<int, int> end_point = {-1, -1};

	for (int i = 0; i < n; i++) {
    	if (grid[i][0] == '.' && visited[i][0]) {
        	end_point = {i, 0};
        	found = true;
        	break;
    	} else if (grid[i][m-1] == '.' && visited[i][m-1]) {
        	end_point = {i, m-1};
        	found = true;
        	break;
    	}
	}

	for (int j = 0; j < m; j++) {
    	if (grid[0][j] == '.' && visited[0][j]) {
        	end_point = {0, j};
        	found = true;
        	break;
    	} else if (grid[n-1][j] == '.' && visited[n-1][j]) {
        	end_point = {n-1, j};
        	found = true;
        	break;
    	}
	}

	if (found) {
    	cout << "YES\n";
    	vector<pair<int, int>> path;
    	path.push_back(end_point);
    	int x = end_point.first;
    	int y = end_point.second;
    	while (parent[x][y] != make_pair(-1, -1)) {
        	pair<int, int> p = parent[x][y];
        	x = p.first, y = p.second;
        	path.push_back({x, y});
    	}
    	reverse(path.begin(), path.end());
    	cout << path.size()-1 << "\n";
    	for(auto it : path) {
        	int px = it.first, py = it.second;
        	for(int i = 0; i < 4; i++) {
            	if(px + dx[i] == x && py + dy[i] == y) {
                	cout << dir[i];
                	break;
            	}
        	}
        	x = px, y = py;
    	}
    	cout << "\n";
	}
	else {
    	cout << "NO" << "\n";
	}
	return 0;
}
