#include<bits/stdc++.h>
using namespace std;

bool isValidBracketSequence(const string& s)
{
    stack<char> st;
    for (char c : s)
    {
        if (c == '(' || c == '{' || c == '[')
        {
            st.push(c);
        }
        else if (c == ')')
        {
            if (st.empty() || st.top() != '(')
            {
                return false;
            }
            st.pop();
        }
        else if (c == '}')
        {
            if (st.empty() || st.top() != '{')
            {
                return false;
            }
            st.pop();
        }
        else if (c == ']')
        {
            if (st.empty() || st.top() != '[')
            {
                return false;
            }
            st.pop();
        }
    }
    return st.empty();
}
int main()
{
    string s;
    cin >> s;
    if (isValidBracketSequence(s)) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
    return 0;
}
