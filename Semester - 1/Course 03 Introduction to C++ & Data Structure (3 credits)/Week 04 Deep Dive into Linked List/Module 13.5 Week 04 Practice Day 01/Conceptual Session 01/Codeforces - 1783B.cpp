#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int t = n*n;
        vector<int>ara;
        for(int i = 0; i < (t/2)+1; i++) {
            ara.push_back(n*n-i);
            ara.push_back(i+1);
        }
        ara.resize(n*n);
        int index_str = 0;
        int index_rev;
        for(int row = 1; row <= n; row++) {
            if(row % 2 == 1) {
                for(int i = index_str; i < n*row; i++) {
                    cout << ara[i] << " ";
                    index_str++;
                }
                cout << "\n";
            }
            else {
                index_str += n;
                index_rev = index_str-1;
                int cnt = n;
                while(cnt--) {
                    cout << ara[index_rev--] << " ";
                }
                cout << "\n";
            }
        }
    }

    return 0;
}

