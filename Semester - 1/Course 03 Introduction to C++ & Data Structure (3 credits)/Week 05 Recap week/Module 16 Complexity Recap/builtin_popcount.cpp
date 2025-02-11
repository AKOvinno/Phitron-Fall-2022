#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();

    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        // This function returns how many 1 available in its binary
        if(__builtin_popcount(i) == 2) {
            cout << i << " = " << __builtin_popcount(i) << "\n";
        }
    }

    return 0;
}

