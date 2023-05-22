#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int happiness[N][4], dp[N][4];

int fun(int day, int current_task)
{
    if(day == 1) {
        return happiness[day][current_task];
    }
    if(dp[day][current_task] != -1) {
        return dp[day][current_task];
    }
    int max_profit = 0;
    for(int last_task = 1; last_task <= 3; last_task++) {
        if(last_task != current_task) {
            int candidate_profit = fun(day - 1, last_task) + happiness[day][current_task];
            max_profit = max(max_profit, candidate_profit);
        }
    }
    dp[day][current_task] = max_profit;
    return max_profit;
}

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= 3; j++) {
            cin >> happiness[i][j];
        }
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= 3; j++) {
            dp[i][j] = -1;
        }
    }
    int ans_1 = fun(n, 1);
    int ans_2 = fun(n, 2);
    int ans_3 = fun(n, 3);

    cout << max({ans_1, ans_2, ans_3}) << "\n";
    return 0;
}
