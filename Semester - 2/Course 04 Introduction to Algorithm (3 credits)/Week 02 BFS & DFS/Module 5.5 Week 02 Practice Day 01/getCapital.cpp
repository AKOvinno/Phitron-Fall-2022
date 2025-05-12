#include<bits/stdc++.h>
using namespace std;
char getCapital(string str)
{
    if(str[0] >= 'A' && str[0] <= 'Z') return str[0];
    else if(str.size() <= 1 && (str[0] <= 'a' && str[0] >= 'z') ) {
        char ch = '0';
        return ch;
    }
    return getCapital(str.substr(1));
}
int main()
{
    string str;
    cin >> str;
    cout << getCapital(str) << "\n";
    return 0;
}

