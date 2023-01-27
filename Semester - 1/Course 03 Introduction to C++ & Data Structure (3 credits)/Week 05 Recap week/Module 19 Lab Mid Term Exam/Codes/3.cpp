#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &v, int low, int high) {
    int pivotIndex = rand() % (high - low + 1) + low;
    swap(v[pivotIndex], v[high]);
    int pivot = v[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; j++) {
        if (v[j] >= pivot) {
            i++;
            swap(v[i], v[j]);
        }
    }
    swap(v[i + 1], v[high]);
    return i + 1;
}

void quickSort(vector<int> &v, int low, int high) {
    if (low < high) {
        int pivot = partition(v, low, high);
        quickSort(v, low, pivot - 1);
        quickSort(v, pivot + 1, high);
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    quickSort(v, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    return 0;
}
