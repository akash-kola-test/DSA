#include <bits/stdc++.h>
using namespace std;

int bruteforce(int arr[], int n);
int better(int arr[], int n);
int optimal(int arr[], int n);

int main()
{
    int n = 10;
    int arr[n] = {4, 4, 2, 4, 3, 4, 4, 3, 2, 4};

    cout << bruteforce(arr, n) << "\n";
    cout << better(arr, n) << "\n";
    cout << optimal(arr, n) << "\n";

    return 0;
}

int bruteforce(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count >= n / 2)
        {
            return arr[i];
        }
    }

    return -1;
}

int better(int arr[], int n)
{
    unordered_map<int, int> counter;
    for (int i = 0; i < n; i++)
    {
        counter[arr[i]]++;
    }
    for (auto it : counter)
    {
        if (it.second >= n / 2)
        {
            return it.first;
        }
    }

    return -1;
}

int optimal(int arr[], int n)
{
    int element = arr[0];
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (count == 0)
        {
            element = arr[i];
        }
        if (element == arr[i])
        {
            count++;
            continue;
        }
        count--;
    }

    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            count++;
        }
    }
    if (count >= n / 2)
    {
        return element;
    }

    return -1;
}