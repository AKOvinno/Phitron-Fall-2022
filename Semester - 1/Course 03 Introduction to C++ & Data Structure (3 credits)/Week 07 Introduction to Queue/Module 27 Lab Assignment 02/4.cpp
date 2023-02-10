#include <bits/stdc++.h>
using namespace std;

int prec(char ch)
{
    if (ch == '+' || ch == '-')
    {
        return 0;
    }
    else if (ch == '*' || ch == '/')
    {
        return 1;
    }
    return -1;
}

int evaluate(int a, int b, char op)
{
    if (op == '+')
    {
        return a + b;
    }
    else if (op == '-')
    {
        return a - b;
    }
    else if (op == '*')
    {
        return a * b;
    }
    else if (op == '/')
    {
        return a / b;
    }
    return -1;
}

int main()
{
    string s;
    cin >> s;
    stack<char> st;
    stack<int> values;
    string ans = "";
    for (int i = 0; i < s.size(); i++)
    {
        char now = s[i];
        if (isdigit(now))
        {
            int num = 0;
            while (i < s.size() && isdigit(s[i]))
            {
                num = num * 10 + (s[i] - '0');
                i++;
            }
            i--;
            values.push(num);
        }
        else if (now == '(')
        {
            st.push(now);
        }
        else if (now == ')')
        {
            while (st.top() != '(')
            {
                char op = st.top();
                st.pop();
                int b = values.top();
                values.pop();
                int a = values.top();
                values.pop();
                values.push(evaluate(a, b, op));
            }
            st.pop();
        }
        else
        {
            while (st.size() && prec(st.top()) >= prec(now))
            {
                char op = st.top();
                st.pop();
                int b = values.top();
                values.pop();
                int a = values.top();
                values.pop();
                values.push(evaluate(a, b, op));
            }
            st.push(now);
        }
    }
    while (st.size())
    {
        char op = st.top();
        st.pop();
        int b = values.top();
        values.pop();
        int a = values.top();
        values.pop();
        values.push(evaluate(a, b, op));
    }
    cout << values.top() << "\n";
    return 0;
}
