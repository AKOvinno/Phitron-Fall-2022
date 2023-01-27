#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string word, int start, int end) {
    if (start >= end) {
        return true;
    }
    if (word[start] != word[end]) {
        return false;
    }
    return isPalindrome(word, start + 1, end - 1);
}

int main() {
    string word;
    cin >> word;
    if (isPalindrome(word, 0, word.length() - 1)) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}
