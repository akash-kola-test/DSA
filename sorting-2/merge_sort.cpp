#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    vector<int> temp;
    int i = low;
    int j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            temp.emplace_back(arr[i]);
            i++;
        }
        else
        {
            temp.emplace_back(arr[j]);
            j++;
        }
    }
    while (i <= mid)
    {
        temp.emplace_back(arr[i]);
        i++;
    }
    while (j <= high)
    {
        temp.emplace_back(arr[j]);
        j++;
    }
    
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void merge_sort(int arr[], int low, int high)
{
    if (low == high)
    {
        return;
    }
    int mid = (low + high) / 2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);
    merge(arr, low, mid, high);
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

    merge_sort(arr, 0, n - 1);

    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << "\n";
    return 0;
}