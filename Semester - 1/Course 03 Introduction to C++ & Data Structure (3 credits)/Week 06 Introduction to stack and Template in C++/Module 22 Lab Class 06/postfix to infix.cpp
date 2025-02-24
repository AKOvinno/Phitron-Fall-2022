#include<bits/stdc++.h>
using namespace std;
int prec(char ch)
{
    if(ch == '+' || ch == '-') {
        return 0;
    }
    return 1;
}
int main() {
    string s;
    cin >> s;
    stack<string> result;

    for (int i = 0; i < s.size(); i++) {
        char now = s[i];

        if (now >= 'a' && now <= 'z') {
            // Push operand as a string
            result.push(string(1, now));
        }
        else {
            // Operator encountered
            string op1 = result.top();
            result.pop();
            string op2 = result.top();
            result.pop();

            // Form infix expression
            string temp;
            temp += (op2+now+op1);
            result.push(temp);
        }
    }

    // The final expression will be at the top of the stack
    cout << result.top() << "\n";

    return 0;
}
