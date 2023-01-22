#include<bits/stdc++.h>
using namespace std;

void erase_first_last(string &s)
{
    s.erase(s.begin());
    s.pop_back();
}

int main()
{
    string s;
    getline(cin, s);
    erase_first_last(s);
    cout << s << endl;
    return 0;
}
