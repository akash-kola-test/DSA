#include <bits/stdc++.h>
using namespace std;

int bruteforce(int arr[], int n);
int optimal(int arr[], int n);

int main()
{
    int n = 6;
    int arr[n] = {7, 1, 5, 3, 6, 4};

    cout << bruteforce(arr, n) << "\n";
    cout << optimal(arr, n) << "\n";

    return 0;
}

int bruteforce(int arr[], int n)
{
    int max_profit = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] - arr[i] > max_profit)
            {
                max_profit = arr[j] - arr[i];
            }
        }
    }
    return max_profit;
}

int optimal(int arr[], int n)
{
    int current_minimum = arr[0];
    int maximum_profit = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - current_minimum > maximum_profit)
        {
            maximum_profit = arr[i] - current_minimum;
        }

        current_minimum = min(arr[i], current_minimum);
    }

    return maximum_profit;
}