#include <bits/stdc++.h>
using namespace std;

int bruteforce(int arr[], int n)
{
    for (int i = 1; i <= n + 1; i++)
    {
        bool number_found = false;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == i)
            {
                number_found = true;
            }
        }
        if (!number_found)
        {
            return i;
        }
    }

    return -1;
}

int better(int arr[], int n)
{
    int hash[n + 2] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    for (int i = 1; i <= n + 1; i++)
    {
        if (hash[i] == 0)
        {
            return i;
        }
    }

    return -1;
}

int optimal1(int arr[], int n)
{
    int n_plus_one = n + 1;
    int total_sum = (n_plus_one * (n_plus_one + 1)) / 2;
    int array_sum = 0;
    for (int i = 0; i < n; i++)
    {
        array_sum += arr[i];
    }

    return total_sum - array_sum;
}

int optimal2(int arr[], int n)
{
    int xor1 = 0;
    for (int i = 1; i <= n + 1; i++)
    {
        xor1 = xor1 ^ i;
    }

    int xor2 = 0;
    for (int i = 0; i < n; i++)
    {
        xor2 = xor2 ^ arr[i];
    }

    return xor1 ^ xor2;
}

int main()
{
    int arr[] = {1, 2, 4, 5};
    int n = 4;

    cout << bruteforce(arr, n) << "\n";
    cout << better(arr, n) << "\n";
    cout << optimal1(arr, n) << "\n";
    cout << optimal2(arr, n) << "\n";

    return 0;
}