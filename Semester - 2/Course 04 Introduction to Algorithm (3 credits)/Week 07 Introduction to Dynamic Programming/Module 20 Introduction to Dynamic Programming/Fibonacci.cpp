#include<bits/stdc++.h>
using namespace std;

// Time Complexity: O(2^n)
int fibo(int n)
{
    if(n <= 2)
        return 1;
    else
        return fibo(n-1) + fibo(n-2);
}

int main()
{
    int n;
    cin >> n;
    cout << "Number: " << fibo(n) << "\n";
    return 0;
}
