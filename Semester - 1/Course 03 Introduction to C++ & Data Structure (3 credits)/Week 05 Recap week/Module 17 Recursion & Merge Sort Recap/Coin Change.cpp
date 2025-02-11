#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
vector<int>coins = {1, 3, 4};
int coin_change(int n)
{
    if(n == 0) return 0;
    int ans = 1e9;
    for(int i = 0; i < coins.size(); i++) {
        if(n >= coins[i]) {
            ans = min(ans, 1+coin_change(n-coins[i]));
        }
        cout << "Ans: " << ans << "\n";
    }
    return ans;
}
int main()
{
    optimize();

    int n;
    cin >> n;
    cout << coin_change(n) << "\n";

    return 0;
}

