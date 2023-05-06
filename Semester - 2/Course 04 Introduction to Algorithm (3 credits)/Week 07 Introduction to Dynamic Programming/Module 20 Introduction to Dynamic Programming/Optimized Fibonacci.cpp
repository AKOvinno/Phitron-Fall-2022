#include<bits/stdc++.h>
using namespace std;

long long dp[101] = { };

long long fib(int n)
{
    //base case
    if(n <= 2) return 1;

    // check if fibo(n) is already calculated
    if(dp[n] != 0) return dp[n];

    dp[n] = fib(n-1) + fib(n-2);
    return dp[n];
}
int main()
{
    int n;
    cin >> n;
    cout << fib(n) << "\n";
    return 0;
}
