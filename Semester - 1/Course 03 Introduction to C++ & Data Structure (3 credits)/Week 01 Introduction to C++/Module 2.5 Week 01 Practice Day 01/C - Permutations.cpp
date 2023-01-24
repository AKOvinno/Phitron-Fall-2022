#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);

    long long int num, i, j = 0;
    cin >> num;
    int ara[num];

    j = 0;
    for(i = 2; i <= num; i+=2) {
        ara[j] = i;
        j++;
    }

    for(i = 1; i <= num; i+=2) {
        ara[j] = i;
        j++;
    }
    for(i = 0; i < num-1; i++) {
        if(abs(ara[i] - ara[i+1]) == 1) {
            cout << "NO SOLUTION\n";
            return 0;
        }
    }
    for(i = 0; i < num; i++) {
        cout << ara[i] << " ";
    }
    cout << "\n";
    return 0;
}
