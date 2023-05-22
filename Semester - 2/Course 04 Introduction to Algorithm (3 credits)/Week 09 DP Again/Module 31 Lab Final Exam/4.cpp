#include<bits/stdc++.h>
using namespace std;
const int maxN = 2e5+1;

int N, x, a;
pair<int, int> p[maxN];

int find(int val)
{
    int l = 1, r = N;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (p[m].first == val) {
            return p[m].second;
        }
        else if (p[m].first < val) {
            l = m + 1;
        }
        else {
            r = m - 1;
        }
    }
    return 0;
}

int main()
{
    cin >> N >> x;
    for (int i = 1; i <= N; i++) {
        cin >> a;
        p[i] = make_pair(a, i);
    }
    sort(p+1, p+N+1);

    for (int i = 1; i <= N; i++) {
        int other = find(x - p[i].first);
        if (other != 0 && other != p[i].second) {
            cout << p[i].second << " " << other << '\n';
            return 0;
        }
    }
    cout << "IMPOSSIBLE\n";
    return 0;
}
