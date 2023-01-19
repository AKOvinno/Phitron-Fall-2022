#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st, st2, st3;
    cin >> st >> st2 >> st3;

    string st4 = st + st2 + st3;

    cout << st << endl;
    cout << st2 << endl;
    cout << st3 << endl;
    cout << st4 << endl;

    cout << st4.capacity() << endl;
    cout << st.capacity() << endl;
    cout << st2.capacity() << endl;
    cout << st3.capacity() << endl;

    cout << st4.max_size()<< endl;
    cout << st.max_size() << endl;
    cout << st2.max_size() << endl;
    cout << st3.max_size() << endl;

    string st_cons(10, 'A'); // it's a constructor
    cout << st_cons << endl;

    return 0;
}
