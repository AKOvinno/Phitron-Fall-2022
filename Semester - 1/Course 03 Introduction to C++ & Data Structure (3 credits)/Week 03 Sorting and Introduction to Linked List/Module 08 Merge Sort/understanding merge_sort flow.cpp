#include<bits/stdc++.h>
using namespace std;

vector <int> merge_sort(vector <int> a)
{
    // Base Case
    if(a.size() <= 1) {
        cout << "Now size is less than or equal 1.\n";
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
    cout << "Printing b: ";
    for(int i = 0; i < mid; i++) {
        cout << b[i] << " ";
    }
    cout << "\n";

    for(int i = mid; i < a.size(); i++) {
        c.push_back(a[i]);
    }
    cout << "Printing c: ";
    for(int i = 0; i < c.size(); i++) {
        cout << c[i] << " ";
    }
    cout << "\n";
    cout << "Calling merge_sort b again: \n";
    vector <int> sorted_b = merge_sort(b);
    cout << "Calling merge_sort c again: \n";
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
        cout << "Printing after merging: ";
        for(int k = 0; k < sorted_a.size(); k++) {
            cout << sorted_a[k] << " ";
        }
        cout << "\n";
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
    vector <int> ans = merge_sort(a);
    for(int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";
    return 0;
}
