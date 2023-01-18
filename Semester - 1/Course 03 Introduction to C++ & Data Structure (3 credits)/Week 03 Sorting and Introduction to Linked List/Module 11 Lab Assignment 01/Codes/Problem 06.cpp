#include <bits/stdc++.h>
using namespace std;

int binarySearchFirst(int a[], int n, int k) {
    int left = 0, right = n-1, result = -1;
    while (left <= right) {
        int mid = left + (right-left)/2;
        if (a[mid] == k) {
            result = mid;
            right = mid-1;
        } else if (a[mid] < k) {
            left = mid+1;
        } else {
            right = mid-1;
        }
    }
    return result;
}

int binarySearchLast(int a[], int n, int k) {
    int left = 0, right = n-1, result = -1;
    while (left <= right) {
        int mid = left + (right-left)/2;
        if (a[mid] == k) {
            result = mid;
            left = mid+1;
        } else if (a[mid] < k) {
            left = mid+1;
        } else {
            right = mid-1;
        }
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int k;
    cin >> k;
    int first = binarySearchFirst(a, n, k);
    int last = binarySearchLast(a, n, k);
    if (last - first > 0) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
    return 0;
}
