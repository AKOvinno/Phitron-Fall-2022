#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x = 100;
    int* ptr = &x;

    cout << x << "\n";
    cout << ptr << "\n";
    cout << *ptr << "\n";

    x = 10;

    cout << x << "\n";
    cout << ptr << "\n";
    cout << *ptr << "\n";

    return 0;
}
