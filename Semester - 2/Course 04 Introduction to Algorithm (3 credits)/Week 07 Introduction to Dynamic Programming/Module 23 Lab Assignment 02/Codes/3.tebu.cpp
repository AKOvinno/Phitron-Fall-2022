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

    f[0] = 1LL * v[0].first * v[0].second;

    for (int i = 1; i < v.size(); i++) {
        int pr = i - 1;
        while (pr >= 0 && v[pr].first + 1 == v[i].first) pr--;

        if (pr == -1)
            f[i] = 1LL * v[i].first * v[i].second;
        else
            f[i] = f[pr] + 1LL * v[i].first * v[i].second;

        f[i] = max(f[i], f[i - 1]);
    }

    cout << f[v.size() - 1] << "\n";

    return 0;
}
