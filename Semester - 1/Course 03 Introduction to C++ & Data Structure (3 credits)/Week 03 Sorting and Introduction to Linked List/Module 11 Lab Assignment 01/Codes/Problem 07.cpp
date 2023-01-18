#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cin >> a >> b;
    v.erase(v.begin() + a - 1, v.begin() + b);
    for (int x : v) {
        cout << x << " ";
    }
    return 0;
}
