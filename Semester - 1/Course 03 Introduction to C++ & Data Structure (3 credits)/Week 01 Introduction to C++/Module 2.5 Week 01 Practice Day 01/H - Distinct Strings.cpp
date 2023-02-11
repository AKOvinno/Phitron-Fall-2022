#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    int fact = 1, i;
    for(i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main()
{
    int distinct;
    string s;
    cin >> s;
    vector<int>a(26);
    for(int i = 0; i < 26; i++) {
        a[i] = 0;
    }
    for(int i = 0; s[i] != '\0'; i++) {
        a[s[i]-97]++;
    }
    distinct = factorial(s.length());
    for(int i = 0; i < 26; i++) {
        if(a[i] > 0) {
            distinct /= factorial(a[i]);
        }
    }
    cout << distinct << "\n";
    return 0;
}
