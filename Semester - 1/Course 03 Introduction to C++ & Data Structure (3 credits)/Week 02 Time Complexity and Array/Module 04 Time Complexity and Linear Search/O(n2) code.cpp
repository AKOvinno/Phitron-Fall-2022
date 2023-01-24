#include<bits/stdc++.h>
using namespace std;
// Time complexity O(n^2) and space complexity O(n)
int main()
{
     int n, i, j;
     cin >> n;
     vector <int> a(n);
     for(i = 0; i < n; i++) {
        cin >> a[i];
    }
     for(i = 0; i < n; i++) {
        string ans = "NO\n"; // space complexity O(1)
        for(j = 0; j < n; j++) {
            if(i == j)
                continue;
            if(a[i] == a[j])
                ans = "YES\n";
        }
        cout << "i = " << a[i] << " " << ans;
     }
     return 0;
}
