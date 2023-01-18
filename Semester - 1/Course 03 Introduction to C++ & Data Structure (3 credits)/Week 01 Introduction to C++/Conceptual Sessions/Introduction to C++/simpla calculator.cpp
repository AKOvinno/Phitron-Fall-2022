#include<bits/stdc++.h>

using namespace std;

int main()
{
    char ch;
    cout << "Enter operation: ";
    cin >> ch;
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if(ch == '+') {
        cout << "The sum is: " << a+b << endl;
    }
    else if(ch == '-') {
        cout << "The subtraction is: "<< a-b << endl;
    }
    else if(ch == '*') {
        cout << "The multiplication is: " << a*b << endl;
    }
    else if(ch == '/') {
        cout << "The division is: " << a/b << endl;
    }
    return 0;
}
