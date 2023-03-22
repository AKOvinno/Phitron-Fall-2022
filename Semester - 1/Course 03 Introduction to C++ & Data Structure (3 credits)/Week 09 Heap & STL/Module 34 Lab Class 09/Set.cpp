#include<bits/stdc++.h>
using namespace std;

int main()
{
    set <int> st;
    // O(log n)
    st.insert(5);
    st.insert(3);
    st.insert(4);
    st.insert(7);
    st.insert(3);
    st.insert(4);
    // Print O(n)
    cout << "Printing Set: " << "\n";
    for(auto i: st) {
        cout << i << " ";
    }
    cout << "\n";
    // O(1)
    cout << "Size: " << st.size() << "\n";
    // O(n)
    cout << "Printing Set: " << "\n";
    for(auto it = st.begin(); it != st.end(); it++) {
        cout << *it << " ";
    }
    cout << "\n";

    // Erase O(log n)
    st.erase(5);
    cout << "Printing Set after erasing: " << "\n";
    for(auto i: st) {
        cout << i << " ";
    }
    cout << "\n";
    // Find O(log n)
    if(st.find(7) != st.end()) {
        cout << "7 found\n";
    }
    else {
        cout << "7 not found\n";
    }
    if(st.find(5) != st.end()) {
        cout << "5 found\n";
    }
    else {
        cout << "5 not found\n";
    }
    return 0;
}
