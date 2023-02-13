#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int q;
    cin >> q;
    while(q--) {
        int low = 0, high = n-1, mid, k, found = 0;
        cin >> k;
        while(low <= high) {
            mid = (low + high) / 2;
            if(a[mid] == k) {
                cout << "YES\n";
                found = 1;
                break;
            }
            else if(a[mid] < k) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
            if( !found )
                cout << "NO\n";
    }
    return 0;
}
