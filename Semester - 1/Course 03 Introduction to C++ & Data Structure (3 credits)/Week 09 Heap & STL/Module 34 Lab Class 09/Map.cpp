#include<bits/stdc++.h>
using namespace std;

int main()
{
    map <string, int> mp;
    //insert O(log n)
    mp["goru"] = 1;
    mp["chagol"] = 2;
    mp["vera"] = 3;
    mp["cat"] = 2;
    mp["cat"] = 5;
    // value of a key O(log n)
    cout << "Value of the keys: " << "\n";
    cout << mp["goru"] << "\n";
    cout << mp["vera"] << "\n";
    cout << mp["cat"] << "\n";
    cout << mp["chagol"] << "\n";
    cout << mp["cat"] << "\n";

    // Print the map O(n)
    for(auto it: mp) {
        cout << "Key: " << it.first << " , Value: "<< it.second << "\n";
    }
    cout << "\n";

    map <int, int>mp2;
    mp2[69] = 1;
    mp2[57] = 4;
    mp2[89] = 4;
    mp2[1000000] = 10;

    // Print the map O(n)
    for(auto it: mp2) {
        cout << "Key: " << it.first << " , Value: "<< it.second << "\n";
    }

    // size of map O(1)
    cout << "Size: " << mp.size() << " " << mp2.size() << "\n";
    return 0;
}
