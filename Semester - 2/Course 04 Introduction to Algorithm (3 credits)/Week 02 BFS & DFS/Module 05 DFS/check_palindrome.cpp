#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str)
{
    // base case
    if(str.size() <= 1) return true;

    str = str.substr(1, str.size()-2); // smaller string

    return isPalindrome(str) && (str[0] == str.back()); // if first & last character is same & smaller string is palindrome then it's a palindrome
}

int main()
{
    string str;
    cin >> str;
    bool ans = isPalindrome(str);
    if(ans) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
