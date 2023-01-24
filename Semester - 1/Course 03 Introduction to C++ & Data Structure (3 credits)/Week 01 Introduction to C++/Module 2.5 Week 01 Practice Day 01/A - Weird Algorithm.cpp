#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);

    long long int num;
    cin >> num;

    for (int i = 0; num != 0; i++) {
        if(num == 1) {
            cout << num << "\n";
            return 0;
        }
        else {
            cout << num << " ";
        }
        if(num % 2 == 0) {
            num /= 2;
        }
        else {
            num = num * 3 + 1;
        }
    }

    return 0;
}
