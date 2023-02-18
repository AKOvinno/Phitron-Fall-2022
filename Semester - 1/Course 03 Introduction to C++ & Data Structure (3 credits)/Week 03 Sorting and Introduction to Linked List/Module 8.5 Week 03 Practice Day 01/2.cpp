#include<bits/stdc++.h>
using namespace std;
vector <int> merge_sort(vector <int> a)
{
    if(a.size() <= 1) {
        return a;
    }

    int mid = a.size() / 2;

    vector <int> b;
    vector <int> c;
    for(int i = 0; i < mid; i++) {
        b.push_back(a[i]);
    }
    for(int i = mid; i < a.size(); i++) {
        c.push_back(a[i]);
    }
    vector <int> sorted_b = merge_sort(b);
    vector <int> sorted_c = merge_sort(c);

    vector <int> sorted_a;
    int l = 0, r = 0;
    for(int i = 0; i < a.size(); i++) {
        if(sorted_b.size() == l) {
            sorted_a.push_back(sorted_c[r]);
            r++;
        }
        else if(sorted_c.size() == r) {
            sorted_a.push_back(sorted_b[l]);
            l++;
        }
        else if(sorted_b[l] <= sorted_c[r]) {
            sorted_a.push_back(sorted_b[l]);
            l++;
        }
        else {
            sorted_a.push_back(sorted_c[r]);
            r++;
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
    vector <int> sorted_a = merge_sort(a);
    for(int i = 0; i < n; i++) {
        cout << sorted_a[i] << " ";
    }
    cout << "\n";
    return 0;
}
