#include<bits/stdc++.h>
using namespace std;

int main()
{
//    int a= 10, b = 20, c = 30;
//    cout << "Maximum: " << max(max(a, b), c) << endl;
//    cout << "Minimum: " << min(min(a,b), c) << endl;

    int n;
    cout << "Enter the number of array elements: ";
    cin >> n;
    int ara[n];
    for(int i = 0; i < n; i++) {
        cin >> ara[i];
    }
    int minimum = ara[0];
    for(int i = 0; i < 5; i++) {
        minimum = min(ara[i], minimum);
    }
    cout << "Minimum no. of Array: " << minimum << endl;

    int maximum = ara[0];
    for(int i = 0; i < 5; i++) {
        maximum = max(maximum, ara[i]);
    }
    cout << "Maximum no. of Array: " << maximum << endl;
    return 0;
}
