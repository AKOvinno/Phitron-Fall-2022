#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    string s;
    long long int mod = 1e9+7;

    vector<vector<long long int>> dp(n+1,vector<long long int> (n+1,0));
    dp[0][0] = 1;

    for(long long int i=0;i<n;i++)
    {
        cin>>s;

        for(long long int j=0;j<n;j++)
        {
            if(s[j] != '*')
            {
                if(i>0)
                {
                dp[i][j] += dp[i-1][j];
                dp[i][j] %= mod;
                }
                if(j>0)
                {
                dp[i][j] += dp[i][j-1];
                dp[i][j] %= mod;
                }
            }
            else
            {
                dp[i][j] = 0;
            }
        }
    }

    if (n > 0) {
        cout << dp[n-1][n-1] % mod;
    }
    else {
        cout << -1;
    }

    return 0;
}
