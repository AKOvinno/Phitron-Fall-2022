#include<bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;
    int odd = 0, even = 0;
    for(int i = 0; i < n.size(); i++) {
        if(i % 2 == 0) {
            odd += n[i] - 48;
        }
        else {
            even += n[i] - 48;
        }
    }
    if((odd - even) % 11 == 0) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
    return 0;
}
