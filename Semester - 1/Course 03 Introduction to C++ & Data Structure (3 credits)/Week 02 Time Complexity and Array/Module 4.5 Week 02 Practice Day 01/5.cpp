#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, i, j;
    cin >> n;
    vector <int> a(n);
    for(i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> m;
    a.resize(n+m);
    for(i = n; i < n+m; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    vector <int> a_new;
    for(i = 0; i < a.size(); i++) {
        if(a[i] != a[i+1]) {
            a_new.push_back(a[i]);
        }
    }

    for(i = 0; i < a_new.size(); i++) {
        cout << a_new[i] << " ";
    }
    cout << "\n";
    return 0;
}
