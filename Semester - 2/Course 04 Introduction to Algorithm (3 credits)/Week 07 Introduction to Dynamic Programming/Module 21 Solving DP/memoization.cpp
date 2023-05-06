#include<bits/stdc++.h>
using namespace std;

const int N = 101;
int dp[N];

int fib(int n)
{
    //base case
    if(n <= 2) return 1;
    // check if current state is already solved
    if(dp[n] != -1) return dp[n];
    // calculation from smaller sub-problems
    int ans = fib(n-1) + fib(n-2);
    dp[n] = ans;
    return ans;
}

int main()
{
    int n;
    cin >> n;

    memset(dp, -1, sizeof(dp)); // mark all states as unvisited

    cout << fib(n) << "\n";

    return 0;
}
