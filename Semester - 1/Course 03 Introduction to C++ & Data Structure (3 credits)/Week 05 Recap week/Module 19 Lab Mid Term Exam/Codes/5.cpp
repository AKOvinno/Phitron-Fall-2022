#include<bits/stdc++.h>
using namespace std;

int findMax(int arr[], int n) {
    if (n == 1) return arr[0];
    return max(arr[n-1], findMax(arr, n-1));
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << findMax(arr, n) << endl;
    return 0;
}
