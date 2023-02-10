#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    int n, sum = 0;
    cin >> n;
    vector<int>a(n);
    for(int i = 0; i < n-1; i++) {
        cin >> a[i];
        sum += a[i];
    }
    for(int i = 1; i <= n; i++) {
        sum -= i;
    }
    cout << -1*sum << "\n";
    return 0;
}
