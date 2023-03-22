#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> a;

    // Insert O(log n)
    a.insert(5);
    a.insert(7);
    a.insert(4);
    a.insert(3);
    a.insert(4);
    a.insert(7);

    // Print O(n)
    cout << "Printing the multiset: ";
    for(auto it: a) {
        cout << it << " ";
    }
    cout << "\n";

    // Size O(1)
    cout << "Size: " << a.size() << "\n";

    // Erase all occurrence O(log n)
    a.erase(4);
    // Print O(n)
    cout << "Printing the multiset: ";
    for(auto it: a) {
        cout << it << " ";
    }
    cout << "\n";

    // Erase a single occurrence
    a.erase(a.find(7));
    // Print O(n)
    cout << "Printing the multiset: ";
    for(auto it: a) {
        cout << it << " ";
    }
    cout << "\n";

    //find O(log n)
    if(a.find(5) != a.end()) {
        cout << "5 is found\n";
    }
    else {
        cout << "5 is not found\n";
    }
    if(a.find(4) != a.end()) {
        cout << "4 is found\n";
    }
    else {
        cout << "4 is not found\n";
    }
    cout << "\n";

    return 0;
}
