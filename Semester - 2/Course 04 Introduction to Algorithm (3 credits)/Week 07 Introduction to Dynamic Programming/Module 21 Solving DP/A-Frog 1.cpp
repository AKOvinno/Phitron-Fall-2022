#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
int dp[N];

int main()
{
    int n, ans = 0;
    cin >> n;
    vector<int> ara(n);
    for(int i = 0; i < n; i++) {
        cin >> ara[i];
    }

    dp[1] = 0;
    dp[2] = dp[1] + abs(ara[1] - ara[0]);

    for(int i = 3; i <= n; i++) {
        int ans1 = dp[i-1] + abs(ara[i-1] - ara[i-2]);
        int ans2 = dp[i-2] + abs(ara[i-1] - ara[i-3]);
        dp[i] = min(ans1, ans2);
    }
    cout << dp[n] << "\n";

    return 0;
}
