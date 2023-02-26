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
    vector <int> counting_ara(n);
    for(int i = 0; i < n; i++) {
        counting_ara[i] = 0;
    }
    for(int i = 0; i < n; i++) {
        counting_ara[a[i]]++;
    }
    for(int i = 0; i < n; i++) {
        while(counting_ara[i] != 0) {
            cout << i << " ";
            counting_ara[i]--;
        }
    }
    return 0;
}
