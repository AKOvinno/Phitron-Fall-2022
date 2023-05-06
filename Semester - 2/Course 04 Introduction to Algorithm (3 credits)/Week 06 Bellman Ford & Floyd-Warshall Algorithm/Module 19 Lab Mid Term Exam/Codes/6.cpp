#include<bits/stdc++.h>
using namespace std;

bool canFormPalindrome(string str)
{
    int freq[256] = {0};
    for(char c: str) {
        freq[c]++;
    }
    int oddCount = 0;
    for(int i = 0 ; i < 256 ; i++) {
        if(freq[i] % 2 != 0) {
            oddCount++;
        }
        if(oddCount > 1) {
            return false;
        }
    }
    return true;
}

int main()
{
    string str;
    cin >> str;
    if(canFormPalindrome(str)) {
        cout << "YES" << "\n";
    }
    else {
        cout << "NO" << "\n";
    }
    return 0;
}

