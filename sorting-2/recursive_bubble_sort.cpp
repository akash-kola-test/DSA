#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void recursive_bubble_sort(int arr[], int n)
{
    if (n == 1)
    {
        return;
    }
    bool swapped = false;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swapped = true;
            swap(&arr[i], &arr[i + 1]);
        }
    }
    if (!swapped)
    {
        return;
    }
    recursive_bubble_sort(arr, n - 1);
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

    recursive_bubble_sort(arr, n);

    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << "\n";
    return 0;
}