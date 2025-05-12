#include<bits/stdc++.h>
using namespace std;
int cnt[100] = {};
int fib(int n)
{
    if(n == 0) return 0;
    else if(n == 1) return 1;
    int first, second;
    if(cnt[n] != 0) {
        return cnt[n];
    }
    first = fib(n-1);
    second = fib(n-2);
    cnt[n] = first + second;
    return cnt[n];
}
int main()
{
    int n;
    cin >> n;
    cout << fib(n) << "\n";
    return 0;
}
