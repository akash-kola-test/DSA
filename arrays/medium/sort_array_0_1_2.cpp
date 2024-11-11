#include <bits/stdc++.h>
using namespace std;

void bruteforce(int arr[], int n);
void better(int arr[], int n);
void optimal(int arr[], int n);

int main()
{
    int n = 6;
    int arr[n] = {2, 0, 2, 1, 1, 0};

    int arr1[n];
    memcpy(arr1, arr, n * sizeof(int));
    bruteforce(arr1, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << "\n";

    int arr2[n];
    memcpy(arr2, arr, n * sizeof(int));
    better(arr2, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << "\n";

    int arr3[n];
    memcpy(arr3, arr, n * sizeof(int));
    optimal(arr3, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << "\n";
}

void bruteforce(int arr[], int n)
{
    sort(arr, arr + n);
}

void better(int arr[], int n)
{
    int count_0 = 0;
    int count_1 = 0;
    int count_2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count_0++;
            continue;
        }
        if (arr[i] == 1)
        {
            count_1++;
            continue;
        }
        else
        {
            count_2++;
            continue;
        }
    }

    for (int i = 0; i < count_0; i++)
    {
        arr[i] = 0;
    }
    for (int i = count_0; i < count_0 + count_1; i++)
    {
        arr[i] = 1;
    }

    for (int i = count_0 + count_1; i < n; i++)
    {
        arr[i] = 2;
    }
}

void optimal(int arr[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            mid++;
            low++;
            continue;
        }
        if (arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);
            high--;
            continue;
        }

        // if arr[mid] == 1
        mid++;
    }
}
