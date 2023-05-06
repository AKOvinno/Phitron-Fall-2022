#include<bits/stdc++.h>
using namespace std;

int tribonacciTab(int n)
{
    vector<int> dp(n + 1);
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }
    return dp[n];
}

int main()
{
    int n;
    cin >> n;
    int tribN = tribonacciTab(n);
    cout << tribN << "\n";
    return 0;
}

