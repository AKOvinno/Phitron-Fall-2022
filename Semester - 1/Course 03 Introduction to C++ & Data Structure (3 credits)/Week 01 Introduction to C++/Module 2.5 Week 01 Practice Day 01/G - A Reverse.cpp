#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l, r, i, j;
    cin >> l >> r;
    string s;
    cin >> s;
    for(i = l, j = r; i < j; i++, j--) {
        char temp = s[i-1];
        s[i-1] = s[j-1];
        s[j-1] = temp;
    }
    cout << s;
    return 0;
}
