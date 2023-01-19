#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    cin >> n;
    int ara[n];
    for(i = 0; i < n; i++) {
        cin >> ara[i];
    }

    sort(ara, ara+n);
    for(i = 0; i < n; i++) {
        cout << ara[i] << " ";
    }
    return 0;
}
