#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i;

    cout << "Using for loop\n";
    for(i = 1; i <= 10; i++) {
        cout << i << " ";
    }

    cout << endl << "Using while loop\n";
    i = 1;
    while (i <= 10) {
        cout << i << " ";
        i++;
    }

    cout << endl << "Using do while loop\n";
    i = 1;
    do {
        cout << i << " ";
        i++;
    } while (i <= 10);

    return 0;
}
