#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    cin >> n;
    vector <int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int even_mul = 1;
    for(i = 1; i < n; i+=2) {
        even_mul *= a[i];
    }
    cout << even_mul << "\n";
    return 0;
}
