#include<bits/stdc++.h>

using namespace std;

int main()
{
    char ch[50];
    cin.getline(ch, 50);
    cout << ch << endl;

    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << endl;
    int ara[n];

    // taking input
    for(int i = 0; i < n; i++) {
        cin >> ara[i];
    }
    cout << endl;

    //printing output
    for(int i = 0; i < n; i++) {
        cout << i+1 << "th element is: " << ara[i] << endl;
    }
    return 0;
}
