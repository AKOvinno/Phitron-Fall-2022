#include <bits/stdc++.h>
using namespace std;

int n;
map<int, int> m;
vector<pair<int, int>> v;
long long f[111111];

int nextInt()
{
    int x = 0, p = 1;
    char c;
    do {
        c = getchar();
    } while (c <= 32);
    if (c == '-') {
        p = -1;
        c = getchar();
    }
    while (c >= '0' && c <= '9') {
        x = x * 10 + c - '0';
        c = getchar();
    }
    return x * p;
}

long long solve(int idx)
{
    if (idx == 0) return 1LL * v[idx].first * v[idx].second;
    if (f[idx] != -1) return f[idx];

    int pr = idx - 1;
    while (pr >= 0 && v[pr].first + 1 == v[idx].first) pr--;

    if (pr == -1)
        f[idx] = 1LL * v[idx].first * v[idx].second;
    else
        f[idx] = solve(pr) + 1LL * v[idx].first * v[idx].second;

    f[idx] = max(f[idx], solve(idx - 1));
    return f[idx];
}

int main()
{
    n = nextInt();
    while (n--) {
        int x = nextInt();
        m[x]++;
    }
    for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
        v.push_back(make_pair(it->first, it->second));
    }

    memset(f, -1, sizeof(f));
    cout << solve(v.size() - 1) << "\n";

    return 0;
}
