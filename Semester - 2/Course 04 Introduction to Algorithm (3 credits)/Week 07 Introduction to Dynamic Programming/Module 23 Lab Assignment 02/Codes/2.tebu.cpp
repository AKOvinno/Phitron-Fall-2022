#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, N, c;
    long long tmp, dp[4];

    cin >> T;
    for(int tc=1; tc <= T; ++tc) {
        cin >> N;
        c = 0;
        for(int i=0; i<4; ++i)
            dp[i] = 0;
        for(int i=0; i<N; ++i) {
            cin >> tmp;
            dp[c] = tmp + max( dp[(c+2)%4], dp[(c+1)%4] );
            c = (c+1)%4;
        }
        tmp = max( dp[(c+2)%4], dp[(c+3)%4] );
        cout << "Case " << tc << ": " << tmp << "\n";
    }
    return 0;
}
