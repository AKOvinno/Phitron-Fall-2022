#include<bits/stdc++.h>
using namespace std;

int minOperations(int n) {
    vector<int> dp(n + 1, 0);

    for (int i = 2; i <= n; i++) {
        dp[i] = 1 + dp[i - 1];

        if (i % 2 == 0) {
            dp[i] = min(dp[i], 1 + dp[i / 2]);
        }

        if (i % 3 == 0) {
            dp[i] = min(dp[i], 1 + dp[i / 3]);
        }
    }
    return dp[n];
}

int main() {
    int n;
    cin >> n;
    int ans = minOperations(n);
    cout << ans << "\n";
    return 0;
}

