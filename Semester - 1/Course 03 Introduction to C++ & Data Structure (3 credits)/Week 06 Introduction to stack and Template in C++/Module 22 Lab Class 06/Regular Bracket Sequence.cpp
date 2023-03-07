#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack <char > st;
    string bracket;
    cin >> bracket;
    for(int i = 0; i < bracket.size(); i++) {
        if(bracket[i] == '(' || bracket[i] == '{' || bracket[i] == '[') {
                st.push(bracket[i]);
        }
        else if(bracket[i] == ')') {
            if(st.empty() || st.top() != '(') {
                cout << "Not Valid!\n";
                return 0;
            }
            st.pop();
        }
        else if(bracket[i] == '}') {
            if(st.empty() || st.top() != '{') {
                cout << "Not Valid!\n";
                return 0;
            }
            st.pop();
        }
        else if(bracket[i] == ']') {
            if(st.empty() || st.top() != '[') {
                cout << "Not Valid!\n";
                return 0;
            }
            st.pop();
        }
    }
    if(st.empty()) {
        cout << "Valid!\n";
    }
    else {
        cout << "Not valid!\n";
    }
    return 0;
}
