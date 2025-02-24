#include<bits/stdc++.h>
using namespace std;

vector <int> merge_sort(vector <int> a)
{
    // Base Case
    if(a.size() <= 1) {
        return a;
    }
    // dividing the array into 2 parts
    int mid = a.size() / 2;
    vector <int> b;
    vector <int> c;

    // assigning the 2 parts into new vectors
    for(int i = 0; i < mid; i++) {
        b.push_back(a[i]);
    }
    for(int i = mid; i < a.size(); i++) {
        c.push_back(a[i]);
    }
    vector <int> sorted_b = merge_sort(b);
    vector <int> sorted_c = merge_sort(c);

    vector <int> sorted_a;
    int index1 = 0;
    int index2 = 0;
    for(int i = 0; i < a.size(); i++) {
        // if there is no element in sorted b
        if(index1 == sorted_b.size()) {
            sorted_a.push_back(sorted_c[index2]);
            index2++;
        }
        // if there is no element in sorted c
        else if(index2 == sorted_c.size()) {
            sorted_a.push_back(sorted_b[index1]);
            index1++;
        }
        // comparing two vector and pushing lowest
        else if(sorted_b[index1] < sorted_c[index2]) {
            sorted_a.push_back(sorted_b[index1]);
            index1++;
        }
        else {
            sorted_a.push_back(sorted_c[index2]);
            index2++;
        }
    }
    return sorted_a;
}

int main()
{
    int n;
    cin >> n;
    vector <int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int k;
    cin >> k;
    vector <int> ans = merge_sort(a);
    int start = 0, finish = ans.size() - 1;
    bool found = false;
    while(start < finish) {
        if(ans[start]+ans[finish] == k) {
            found = true;
            break;
        }
        else if(ans[start]+ans[finish] > k) {
            finish--;
        }
        else {
            start++;
        }
    }
    if(found) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}


