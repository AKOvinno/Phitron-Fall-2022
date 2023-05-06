#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int h[N];
int dp[N];

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> h[i];
    }
    //handle base case
    dp[1] = 0;
    //loop through the states
    for(int i = 2; i <= n; i++) {
        //solve from smaller sub-problems
        int ans1 = dp[i-1] + abs(h[i] - h[i-1]);
        //edge or corner case
        if(i == 2) {
            dp[i] = ans1;
            continue;
        }
        int ans2 = dp[i-2] + abs(h[i] - h[i-2]);
        dp[i] = min(ans1, ans2);
    }
    cout << dp[n] << "\n";
    return 0;
}
