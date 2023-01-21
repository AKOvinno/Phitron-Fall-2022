#include<bits/stdc++.h>
using namespace std;

int x = 5, y, z;

int func(int a, int b)
{
    return a + b;
}

namespace info
{
    int x = 10;
    int y = 5;
    int func(int a, int b)
    {
        return a * b;
    }
}

int main()
{
    int a = 4, b = 5;

    cout << info :: func(a, b) << "\n";
    return 0;
}
