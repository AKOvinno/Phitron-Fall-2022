#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *x = new int[n]; // will take memory from heap
    for(int i = 0; i < n; i++) {
        cin >> x[i];
    }
    cout << x << "\n";
    for(int i = 0; i < n; i++) {
        cout << x[i] << "\n";
    }
    delete[] x; // third bracket for array
    // nothing for single variable like delete x;
    return 0;
}
