#include<bits/stdc++.h>
using namespace std;
int digitSum(int n)
{
    if(!n) return 0;
    return digitSum(n/10) + n%10;
}
int main()
{
    int num;
    cin >> num;
    cout << digitSum(num);
    return 0;
}


