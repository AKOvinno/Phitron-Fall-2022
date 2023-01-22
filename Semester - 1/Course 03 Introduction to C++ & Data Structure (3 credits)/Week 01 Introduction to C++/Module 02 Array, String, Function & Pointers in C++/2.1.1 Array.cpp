#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, sum = 0;
    cin >> n;
    int a[n];

    for(i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(i = 0; i < n; i++) {
        sum += a[i];
    }
    cout << sum << endl;

    int x = 1;
    for(i = 0; i < n; i++) {
        x *= a[i];
    }
    cout << x << endl;

    return 0;
}
