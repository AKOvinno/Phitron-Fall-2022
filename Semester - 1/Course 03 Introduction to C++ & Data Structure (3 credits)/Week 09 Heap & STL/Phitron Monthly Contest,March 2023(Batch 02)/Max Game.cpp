#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> q;
    vector <int> List;
    while(q--) {
        int n;
        cin >> n;
        if(n == 1) {
            int num;
            cin >> num;
            List.push_back(num);
        }
        else if(n == 2) {
            sort(List.begin(), List.end());
            cout << List[List.size()-1] << "\n";
            List.pop_back();
        }
    }
    return 0;
}
