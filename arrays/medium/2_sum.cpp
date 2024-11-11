#include <bits/stdc++.h>
using namespace std;

bool bruteforce(int arr[], int n, int target);
bool better(int arr[], int n, int target);
bool optimal(int arr[], int n, int target);

int main()
{
    int n = 5;
    int arr[n] = {2, 6, 5, 8, 11};
    int target = 14;

    cout << bruteforce(arr, n, target) << "\n";
    cout << better(arr, n, target) << "\n";
    cout << optimal(arr, n, target) << "\n";

    return 0;
}

bool bruteforce(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                return true;
            }
        }
    }

    return false;
}

bool better(int arr[], int n, int target)
{
    unordered_set<int> elements;
    for (int i = 0; i < n; i++)
    {
        if (elements.find(target - arr[i]) != elements.end())
        {
            return true;
        }
        elements.emplace(arr[i]);
    }
    return false;
}

bool optimal(int arr[], int n, int target)
{
    int left = 0;
    int right = n - 1;
    sort(arr, arr + n);
    while (left <= right)
    {
        if (arr[left] + arr[right] == target)
        {
            return true;
        }
        else if (arr[left] + arr[right] < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    return false;
}