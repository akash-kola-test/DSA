#include <bits/stdc++.h>
using namespace std;

void optimal(int arr[], int n);

int main()
{
    int n = 3;
    int arr[n] = {1, 3, 2};

    optimal(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}

void optimal(int arr[], int n)
{
    int longer_prefix_breakpoint = -1;
    for (int i = n - 1; i > 0; i--)
    {
        if (arr[i] > arr[i - 1])
        {
            longer_prefix_breakpoint = i - 1;
            break;
        }
    }

    if (longer_prefix_breakpoint == -1)
    {
        reverse(arr, arr + n);
        return;
    }
    for (int i = n - 1; i > longer_prefix_breakpoint; i--)
    {
        if (arr[longer_prefix_breakpoint] < arr[i])
        {
            swap(arr[longer_prefix_breakpoint], arr[i]);
            break;
        }
    }

    reverse(arr + longer_prefix_breakpoint + 1, arr + n);
}