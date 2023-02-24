#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    deque <int> dq;
    deque <int> sorted_dq;

    for(int i = 0; i < n; i++) {
        dq.push_back(a[i]);
    }

    for(int i = 0; i < n; i++) {
        if(dq.back() < dq.front()) {
            sorted_dq.push_back(dq.back());
            dq.pop_back();
        }
        else {
            sorted_dq.push_back(dq.front());
            dq.pop_front();
        }
    }

    while(!sorted_dq.empty()) {
        cout << sorted_dq.front() << " ";
        sorted_dq.pop_front();
    }

    return 0;
}
