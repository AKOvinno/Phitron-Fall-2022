#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    set<int> first_set;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        first_set.insert(num);
    }

    cin >> m;
    set<int> second_set;
    for (int i = 0; i < m; i++) {
        int num;
        cin >> num;
        second_set.insert(num);
    }

    set<int> union_set;
    set_union(first_set.begin(), first_set.end(), second_set.begin(), second_set.end(), inserter(union_set, union_set.begin()));

    for (int num : union_set) {
        cout << num << " ";
    }
    cout << "\n";

    return 0;
}
