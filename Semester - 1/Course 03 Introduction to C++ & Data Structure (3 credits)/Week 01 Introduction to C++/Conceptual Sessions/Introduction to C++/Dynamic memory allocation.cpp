#include<bits/stdc++.h>
using namespace std;

int main()
{
    int *ptr = new int[5] {1, 2, 3};
    for(int i = 0; i < 5; i++) {
        cout << ptr[i] << endl;
    }
    delete ptr;
    cout << "After Deletion: " << endl;
    for(int i = 0; i < 5; i++) {
        cout << ptr[i] << endl;
    }
    return 0;
}
