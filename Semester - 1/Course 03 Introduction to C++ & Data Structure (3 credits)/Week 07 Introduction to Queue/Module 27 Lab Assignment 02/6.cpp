#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s)
{
    deque<char> dq;
    for(int i = 0; i < s.length(); i++)
    {
        dq.push_back(s[i]);
    }
    while(dq.size() > 1)
    {
        if(dq.front() != dq.back())
        {
            return false;
        }
        dq.pop_front();
        dq.pop_back();
    }
    return true;
}

int main()
{
    string s;
    cin >> s;
    if(checkPalindrome(s))
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
    return 0;
}
