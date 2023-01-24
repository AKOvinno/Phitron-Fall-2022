#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m, n, i, j;
    cin >> m;
    vector <int> a(m);
    for(i = 0; i < m; i++) {
        cin >> a[i];
    }
    cin >> n;
    vector <int> a2(m);
    for(i = 0; i < n; i++) {
        cin >> a2[i];
    }
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            if(a[i] == a2[j]) {
                cout << a[i] << " ";
            }
        }
    }
    return 0;
}
