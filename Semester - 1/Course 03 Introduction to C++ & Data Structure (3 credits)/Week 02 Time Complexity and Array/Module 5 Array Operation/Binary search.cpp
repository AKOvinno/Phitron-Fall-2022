#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, i;
    bool found;
    cin >> n >> k;
    vector <int> a(n);
    for(i = 0; i < n; i++) {
        cin >> a[i];
    }
    int low = 0, high = n-1;
    while(low <= high) {
        int mid = (low + high) / 2;
        cout << "Low = " << low << " High = "<< high << " Mid = "<< mid << "\n";
        if(a[mid] == k) {
            cout << "YES " << mid+1 << "\n";
            found = 1;
            break;
        }
        else if(a[mid] > k) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    if( !found ) {
        cout << "NO" << "\n";
    }
    return 0;
}
