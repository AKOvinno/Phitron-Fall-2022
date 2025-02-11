#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int fact(int n)
{
    if(n == 0) return 1;
    return n * fact(n-1);
}
int main()
{
    optimize();

    int n;
    cin >> n;
    cout << fact(n) << "\n";

    return 0;
}
