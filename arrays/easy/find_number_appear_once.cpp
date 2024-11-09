#include <bits/stdc++.h>
using namespace std;

int bruteforce(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool found_pair = false;
        for (int j = 0; j < n; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                found_pair = true;
            }
        }
        if (!found_pair)
        {
            return arr[i];
        }
    }

    return -1;
}

int better1(int arr[], int n)
{
    int max_element = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max_element < arr[i])
        {
            max_element = arr[i];
        }
    }

    int hash[max_element + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    for (int i = 1; i < max_element + 1; i++)
    {
        if (hash[i] == 1)
        {
            return i;
        }
    }

    return -1;
}

int better2(int arr[], int n)
{
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    for (auto it : freq)
    {
        if (it.second == 1)
        {
            return it.first;
        }
    }
    return -1;
}

int optimal(int arr[], int n)
{
    int xor1 = 0;
    for (int i = 0; i < n; i++)
    {
        xor1 ^= arr[i];
    }

    return xor1;
}

int main()
{
    int n = 5;
    int arr[n] = {4, 1, 2, 1, 2};

    cout << bruteforce(arr, n) << "\n";
    cout << better1(arr, n) << "\n";
    cout << better2(arr, n) << "\n";
    cout << optimal(arr, n) << "\n";

    return 0;
}