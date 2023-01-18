#include<bits/stdc++.h>
using namespace std;

int mergeSort(int arr[], int temp[], int left, int right, int k)
{
    int i, j, mid, counter = 0;
    if (right > left)
    {
        mid = (right + left) / 2;

        counter = mergeSort(arr, temp, left, mid, k);
        counter += mergeSort(arr, temp, mid + 1, right, k);

        i = left;
        j = mid + 1;
        int index = left;
        while (i <= mid && j <= right)
        {
            if (arr[i] <= arr[j])
            {
                temp[index++] = arr[i++];
            }
            else
            {
                temp[index++] = arr[j++];
                counter += (mid - i + 1);
            }
        }
        while (i <= mid)
        {
            temp[index++] = arr[i++];
        }
        while (j <= right)
        {
            temp[index++] = arr[j++];
        }
        for (int i = left; i <= right; i++)
        {
            arr[i] = temp[i];
        }
    }

    int count = 0;
    i = 0, j = right;
    while (i < j)
    {
        if (arr[i] + arr[j] == k)
        {
            count++;
            i++;
            j--;
        }
        else if (arr[i] + arr[j] < k)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    int temp[n];
    cout << mergeSort(arr, temp, 0, n - 1, k) << "\n";
    return 0;
}
