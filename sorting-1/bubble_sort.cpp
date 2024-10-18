#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool swap_flag = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap_flag = true;
                swap(&arr[j], &arr[j + 1]);
            }
        }

        if(!swap_flag) {
            break;
        }
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

    bubble_sort(arr, n);

    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << "\n";
    return 0;
}