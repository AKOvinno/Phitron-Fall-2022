#include<bits/stdc++.h>
using namespace std;
int square (int x)
{
    return x*x;
}
void print(int x)
{
    cout << x << endl;
}

int main()
{
    int a;
    cout << "Enter input: ";
    cin >> a;
    cout << "The square of input is: "<< square(a) << endl;
    print(10);
    return 0;
}
