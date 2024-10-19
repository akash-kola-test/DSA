#include <bits/stdc++.h>
using namespace std;

int bruteforce(int arr[], int n)
{
    int temp[n];
    copy(arr, arr + n, temp);
    sort(temp, temp + n);
    int largest = temp[n - 1];
    int second_largest = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (temp[i] != largest)
        {
            second_largest = temp[i];
            break;
        }
    }
    return second_largest;
}

int better(int arr[], int n)
{
    int largest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (largest < arr[i])
        {
            largest = arr[i];
        }
    }
    int second_largest = -1;
    for (int i = 0; i < n; i++)
    {
        if (second_largest < arr[i] && arr[i] != largest)
        {
            second_largest = arr[i];
        }
    }
    return second_largest;
}

int optimal(int arr[], int n)
{
    int largest = arr[0];
    int second_largest = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
            continue;
        }
        if (arr[i] > second_largest && arr[i] != largest)
        {
            second_largest = arr[i];
        }
    }
    return second_largest;
}

int main()
{

    int arr[] = {0, 2, 3, 1, 7, 7, 5};

    cout << bruteforce(arr, 7) << "\n";
    cout << better(arr, 7) << "\n";
    cout << optimal(arr, 7) << "\n";
    return 0;
}