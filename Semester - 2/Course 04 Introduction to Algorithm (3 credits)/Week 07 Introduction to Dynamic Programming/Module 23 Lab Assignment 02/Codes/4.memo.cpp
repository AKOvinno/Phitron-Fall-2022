#include<bits/stdc++.h>
using namespace std;

vector<int> dp(101, -1);
int tribonacciMemo(int n)
{
    if (n <= 0)
        return 0;
    if (n == 1 || n == 2)
        return 1;
    if (dp[n] != -1)
        return dp[n];
    dp[n] = tribonacciMemo(n - 1) + tribonacciMemo(n - 2) + tribonacciMemo(n - 3);
    return dp[n];
}

int main()
{
    int n;
    cin >> n;
    int tribN = tribonacciMemo(n);
    cout << tribN << "\n";
    return 0;
}

