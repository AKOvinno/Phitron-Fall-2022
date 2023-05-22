#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int happiness[N][4], dp[N][4];

int main()
{
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= 3; j++) {
            cin >> happiness[i][j];
        }
    }
    for(int task = 1; task <= 3; task++) {
        dp[1][task] = happiness[1][task];
    }
    for(int day = 1; day <= n; day++) {
        for(int current_task = 1; current_task <= 3; current_task++) {
            int max_profit = 0;
            for(int last_task = 1; last_task <= 3; last_task++) {
                if(last_task != current_task) {
                    int current_profit = dp[day - 1][last_task] + happiness[day][current_task];
                    max_profit = max(max_profit, current_profit);
                }
            }
            dp[day][current_task] = max_profit;
        }
    }
    int ans = max({dp[n][1], dp[n][2], dp[n][3]});
    cout << ans << "\n";
    return 0;
}
