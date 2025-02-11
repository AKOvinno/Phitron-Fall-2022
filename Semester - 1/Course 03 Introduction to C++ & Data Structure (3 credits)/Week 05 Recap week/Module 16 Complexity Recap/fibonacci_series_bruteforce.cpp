#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int fib(int n) // O(2^n)
    if(n <= 1) return n;
    return fib(n-1) + fib(n-2);
}
int main()
{
    optimize();

    int n;
    cin >> n;
    cout << fib(n) << "\n";

    return 0;
}

