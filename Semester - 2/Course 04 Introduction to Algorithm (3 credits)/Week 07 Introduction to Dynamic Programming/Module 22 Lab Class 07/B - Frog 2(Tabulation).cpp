#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5, INF = 2e9;
int h[N], dp[N];

int main()
{
    int n, k;
    cin >> n >> k;

    for(int i = 1; i <= n; i++) {
        cin >> h[i];
    }
    for(int i = 1; i <= n; i++) {
        dp[i] = -1;
    }
    dp[1] = 0;
    for(int i = 2; i <= n; i++) {
            dp[i] = INF;
        for(int j = 1; j <= k; j++) {
            int from_stone = i - j;
            if(from_stone <= 0) {
                break;
            }
            int candidate_ans = dp[from_stone] + abs(h[i] - h[from_stone]);
            dp[i] = min(dp[i], candidate_ans);
        }
    }
    cout << dp[n] << "\n";
    return 0;
}
