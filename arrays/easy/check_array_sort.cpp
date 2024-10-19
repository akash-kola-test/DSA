#include <bits/stdc++.h>
using namespace std;

bool is_array_sorted(int arr[], int n)
{
    bool is_sorted = true;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            return false;
        }
    }
    return is_sorted;
}

int main()
{
    int arr[] = {1, 2, 3, 5, 5, 6};

    cout << is_array_sorted(arr, 6) << "\n";

    return 0;
}