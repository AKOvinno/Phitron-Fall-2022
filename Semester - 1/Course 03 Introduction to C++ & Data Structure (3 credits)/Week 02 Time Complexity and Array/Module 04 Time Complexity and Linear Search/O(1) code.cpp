#include<bits/stdc++.h>
using namespace std;

/*
    Time Complexity = O(1)
    Space Complexity = O(1)
*/

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int maxi = max ({a, b, c});
    int mini = min ({a, b, c});
    int sum = a + b + c;
    int mul = a * b * c;

    cout << maxi << "\n";
    cout << mini << "\n";
    cout << sum << "\n";
    cout << mul << "\n";

    return 0;
}
