#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, moves = 0;
    int i;
    cin >> n;
    vector <long long int> ara(n);
    for(i = 0; i < n; i++) {
        cin >> ara[i];
    }
    for(i = 0; i < n-1; i++) {
        if(ara[i] > ara[i+1]) {
            moves += (ara[i] - ara[i+1]);
            ara[i+1] = ara[i];
        }
    }
    cout << moves << "\n";
    return 0;
}
