#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j;
    cin >> n;
    vector <int> a(n);
    for(i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(i = 0, j = n-1; i < n && i < j; i++, j--) {
        swap(a[i], a[j]);
    }
    for(i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
