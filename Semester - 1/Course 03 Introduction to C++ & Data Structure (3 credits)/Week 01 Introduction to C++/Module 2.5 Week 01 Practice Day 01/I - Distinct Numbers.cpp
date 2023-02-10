#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    vector<int>a(n);
    for(i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    vector<int>b;
    for(i = 0; i < n; i++) {
        if(a[i] != a[i+1])
            b.push_back(a[i]);
    }
    cout << b.size() << "\n";
    return 0;
}
