#include<bits/stdc++.h>
using namespace std;

int main()
{
    int distinct = 0;
    string s;
    cin >> s;
    vector<int>a(26);
    for(int i = 0; i < 26; i++) {
        a[i] = 0;
    }
    for(int i = 0; s[i] != '\0'; i++) {
        a[s[i]-96]++;
    }
    for(int i = 0; i < 26; i++) {
        if(a[i] > 0) {
            distinct++;
        }
    }
    cout << distinct << "\n";
    return 0;
}
