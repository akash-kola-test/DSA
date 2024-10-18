#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void recursive_insertion_sort(int arr[], int i, int n)
{
    if (i == n)
    {
        return;
    }
    int j = i;
    while (j > 0 && arr[j] < arr[j - 1])
    {
        swap(&arr[j], &arr[j - 1]);
        j--;
    }
    recursive_insertion_sort(arr, i + 1, n);
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

    recursive_insertion_sort(arr, 1, n);

    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << "\n";
    return 0;
}