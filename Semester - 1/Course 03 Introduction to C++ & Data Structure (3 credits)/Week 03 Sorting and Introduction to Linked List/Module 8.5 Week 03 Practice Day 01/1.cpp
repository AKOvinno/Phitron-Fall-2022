#include<bits/stdc++.h>
using namespace std;

vector <int> Merge(vector <int> a, vector <int> b)
{
    vector <int> sorted_c;
    int index1 = 0;
    int index2 = 0;
    for(int i = 0; i < a.size() + b.size(); i++) {
        if(a.size() == index1) {
            sorted_c.push_back(b[index2]);
            index2++;
        }
        else if(b.size() == index2) {
            sorted_c.push_back(a[index1]);
            index1++;
        }
        else if(a[index1] < b[index2]) {
            sorted_c.push_back(b[index2]);
            index2++;
        }
        else {
            sorted_c.push_back(a[index1]);
            index1++;
        }
    }
    return sorted_c;
}

int main()
{
    int n;
    cin >> n;
    vector <int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int m;
    cin >> m;
    vector <int> b(m);
    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }
    vector <int> c = Merge(a, b);
    for(int i = 0; i < n+m; i++) {
        cout << c[i] << " ";
    }
    cout << "\n";
    return 0;
}
