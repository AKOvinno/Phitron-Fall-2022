#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Ashfaq Kadir Ovinno";
    cout << "Length = " << str.length() << endl;
    cout << "Size = " << str.size() << endl;

    str.resize(6);
    cout << "After Resized = " << str << endl;

    str.clear();
    cout << str << str.size() << endl;

    if(str.empty())
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
