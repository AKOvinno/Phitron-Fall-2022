#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[50];
    cin.getline(a, 50);
    cout << a << endl;

    int num[5];
    for(int i = 0; i < 5; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
