#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int get_pivot_index(int arr[], int low, int high)
{
    int pivot = low;
    int i = low;
    int j = high;
    while (i < j)
    {
        while (arr[i] <= arr[pivot] && i <= high)
        {
            i++;
        }

        while (arr[j] > arr[pivot] && j >= low)
        {
            j--;
        }
        if (i < j)
        {
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[j], &arr[pivot]);
    return j;
}

void quick_sort(int arr[], int low, int high)
{
    if (low >= high)
    {
        return;
    }

    int pivot_index = get_pivot_index(arr, low, high);
    quick_sort(arr, low, pivot_index - 1);
    quick_sort(arr, pivot_index + 1, high);
}

int main()
{
    int arr[] = {4, 6, 2, 5, 7, 9, 1, 3};

    int low = 0;
    int high = 7;

    quick_sort(arr, 0, 7);

    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << "\n";
    return 0;
}