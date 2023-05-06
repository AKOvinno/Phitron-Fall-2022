#include<bits/stdc++.h>
using namespace std;

vector<long long int> dp(1000000);

long long int maxloot(vector<int> &loot, int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return loot[0];
    if (n == 2)
        return max(loot[0], loot[1]);
    if (dp[n] != -1)
        return dp[n];
    long long int take = loot[n - 1] + maxloot(loot, n - 2);
    long long int leave = maxloot(loot, n - 1);
    return dp[n] = max(take, leave);
}

int main()
{
    int t;
    cin >> t;
    int p = 1;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> loot;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            loot.push_back(temp);
        }
        dp.assign(1000000, -1);

        cout << "Case " << p << ": " << maxloot(loot, n) << endl;
        p++;
        dp.clear();
    }
}
