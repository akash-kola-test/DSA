#include <bits/stdc++.h>
using namespace std;

int bruteforce(int arr[], int n)
{
    set<int> arr_unique_elements;
    for (int i = 0; i < n; i++)
    {
        arr_unique_elements.emplace(arr[i]);
    }
    int index = 0;
    for (auto it : arr_unique_elements)
    {
        arr[index] = it;
        index++;
    }
    return index;
}

int optimal(int arr[], int n)
{
    int low = 0;

    for (int j = 1; j < n; j++)
    {
        if (arr[j] != arr[low])
        {
            arr[++low] = arr[j];
        }
    }
    return low + 1;
}

int main()
{
    int arr[] = {1, 1, 2, 2, 2, 3, 3};
    int n = 7;

    int temp1[n];
    copy(arr, arr + n, temp1);
    cout << bruteforce(temp1, n) << "\n";
    for (auto it : temp1)
    {
        cout << it << " ";
    }
    cout << "\n";

    int temp2[n];
    copy(arr, arr + n, temp2);
    cout << optimal(temp2, n) << "\n";
    for (auto it : temp2)
    {
        cout << it << " ";
    }
    cout << "\n";

    return 0;
}