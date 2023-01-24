#include<bits/stdc++.h>
using namespace std;
/*
time complexity = O(n)
memory complexity = O(n)
*/
int main()
{
    int n, k;
    cin >> n >> k;
    vector <int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        if(a[i] == k) {
            cout << "YES\n";
            break;
        }
    }
    for(int i = 0; i < n; i++) {
        if(a[i] == k) {
            cout << i+1 << " ";
        }
    }
    cout << "\n";
    return 0;
}
