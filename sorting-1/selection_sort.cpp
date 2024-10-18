#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int minimum = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[minimum])
            {
                minimum = j;
            }
        }
        swap(&arr[minimum], &arr[i]);
    }
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

    selection_sort(arr, n);

    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << "\n";
    return 0;
}