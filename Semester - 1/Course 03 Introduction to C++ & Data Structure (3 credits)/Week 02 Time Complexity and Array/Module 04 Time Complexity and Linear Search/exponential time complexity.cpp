#include<bits/stdc++.h>
using namespace std;

/*
time complexity = O(2^n)
space complexity = O(n) // because the recursive function is keeping total n things all together

using save[n]
time complexity = O(n)
space complexity = O(n)
*/
int called = 0;
int save[100];
 int fib(int n)
 {
     if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    if(save[n] != 0)
        return save[n];
    int x = fib(n-1);
    called++;
    int y = fib(n-2);
    called++;
    save[n] = x + y;
    return x + y;
 }
int main()
{
    int n;
    cin >> n;
    cout << "Fib = " << fib(n) << "\n";
    cout << "Called = " << called << "\n";
    return 0;
}
