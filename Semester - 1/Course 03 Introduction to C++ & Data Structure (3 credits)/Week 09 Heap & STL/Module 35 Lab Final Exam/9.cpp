#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> previous_index;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        if (previous_index.count(s) > 0) {
            cout << previous_index[s] << "\n";
        } else {
            cout << -1 << "\n";
        }
        previous_index[s] = i;
    }
    return 0;
}
