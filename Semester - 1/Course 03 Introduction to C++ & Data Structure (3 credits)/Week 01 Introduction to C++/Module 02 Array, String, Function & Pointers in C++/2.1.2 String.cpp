#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s = "I am eating rice.";
    string s2 = "I am also eating dal.";

    string s3 = s + s2;

    cout << s3 << endl;

    cout << s.size() << endl; // returns the length of string in terms of bytes

    s.pop_back(); // deletes the last character of the string
    s.erase(s.begin() + 0); // deletes any character of the string
    cout << s << endl;

    return 0;
}
