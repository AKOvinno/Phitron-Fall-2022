#include<bits/stdc++.h>
using namespace std;

class Solution
{
 public:
  int networkDelayTime(vector<vector<int>>& times, int N, int K) {
    unordered_map<int, unordered_map<int, int>> edges;

    for (auto t : times) {
      edges[t[0]][t[1]] = t[2];
    }

    unordered_set<int> visited;

    auto cmp = [](pair<int, int> left, pair<int, int> right) {
      return left.first > right.first;
    };
    priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(cmp)> next(
        cmp);
    next.push(make_pair(0, K));

    while (!next.empty()) {
      int t = next.top().first;
      int n = next.top().second;
      next.pop();

      if (visited.find(n) != visited.end()) continue;

      visited.insert(n);
      if (visited.size() == N) return t;

      for (auto it : edges[n]) {
        next.push(make_pair(it.second + t, it.first));
      }
    }
    return -1;
  }
};

int main()
{
  int n, m, k;
  cout << "Nodes: ";
  cin >> n;
  cout << "Source Node: ";
  cin >> k;
  cout << "Number of edges: ";
  cin >> m;
  cout << "Times: \n";

  vector<vector<int>> times(m, vector<int>(3));
  for (int i = 0; i < m; i++) {
    cin >> times[i][0] >> times[i][1] >> times[i][2];
  }

  Solution s;
  int result = s.networkDelayTime(times, n, k);

  cout << result << "\n";

  return 0;
}
