#include <bits/stdc++.h>
using namespace std;

void reverse_array(int left, int right, int arr[])
{
    if (left >= right)
        return;

    int temp = arr[left];
    arr[left] = arr[right];
    arr[right] = temp;

    reverse_array(left + 1, right - 1, arr);
}

void reverse_array(int arr[], int i, int n) {
    if (i >= (n / 2))
        return;

    int temp = arr[i];
    arr[i] = arr[n - i - 1];
    arr[n - i - 1] = temp;

    reverse_array(arr, i + 1, n);
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    reverse_array(0, 4, arr);

    for (auto it : arr)
        cout << it << " ";
    cout << "\n";

    reverse_array(arr, 0, 5);

    for (auto it : arr)
        cout << it << " ";
    cout << "\n";

    return 0;
}