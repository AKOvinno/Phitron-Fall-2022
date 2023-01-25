#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, q, i, k;
    cout << "Enter array Size: ";
    cin >> n;
    vector <int> a(n);
    cout << "Enter array elements: ";
    for(i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    cout << "After Sorting: ";
    for(i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << "\nEnter number of queries: ";
    cin >> q;
    while(q--) {
        cout << "Enter the number: ";
        cin >> k;
        int low = 0, high = n-1, found = 0;
        while (low <= high) {
            int mid = (low + high) / 2;
            if(a[mid] < k) {
                low = mid + 1;
            }
            else if(a[mid] > k) {
                high = mid - 1;
            }
            else {
                cout << "YES and Index: " << mid+1 << "\n";
                found = 1;
                break;
            }
        }
        if( !found ) {
            cout << "NO\n";
        }
    }
    return 0;
}
