#include<bits/stdc++.h>
using namespace std;

void swap_num_value(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swap_num_reference(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;

    cout << "Enter 1st number: ";
    cin >> a;
    cout << "Enter 2nd number: ";
    cin >> b;

    swap_num_value(a, b);
    cout << "This is pass by value: " << a << " " << b << endl;

    swap_num_reference(&a, &b);
    cout << "This is pass by reference: " << a << " " << b << endl;

    return 0;
}
