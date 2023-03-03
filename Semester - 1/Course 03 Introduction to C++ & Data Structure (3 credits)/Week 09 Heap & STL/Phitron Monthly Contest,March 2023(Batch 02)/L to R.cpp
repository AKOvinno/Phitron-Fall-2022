#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector <int> ara(n);
    for(int i = 0; i < n; i++) {
        cin >> ara[i];
    }
    int q;
    cin >> q;
    while(q--) {
        int l, r, multi = 1;
        cin >> l >> r;
        for(int i = l; i < r; i++) {
            multi *= ara[i-1];
        }
        cout << multi << "\n";
    }
    return 0;
}
