#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st = "Ovinno";
    //string :: reverse_iterator it; instead of auto
    for(auto it = st.rbegin(); it != st.rend(); it++) {
        cout << *it << " ";
    }
    return 0;
}

