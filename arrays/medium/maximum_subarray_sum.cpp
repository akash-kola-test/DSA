#include <bits/stdc++.h>
using namespace std;

int bruteforce(int arr[], int n);
int slightly_better(int arr[], int n);
int optimal(int arr[], int n);
vector<int> get_maximum_subarray_sum_subarray(int arr[], int n);

int main()
{
    int n = 9;
    int arr[n] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << bruteforce(arr, n) << "\n";
    cout << slightly_better(arr, n) << "\n";
    cout << optimal(arr, n) << "\n";

    auto output = get_maximum_subarray_sum_subarray(arr, n);
    for (auto it : output)
    {
        cout << it << " ";
    }
    cout << "\n";

    return 0;
}

int bruteforce(int arr[], int n)
{
    int max_subarray_sum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            if (max_subarray_sum < sum)
            {
                max_subarray_sum = sum;
            }
        }
    }
    return max_subarray_sum;
}

int slightly_better(int arr[], int n)
{
    int max_subarray_sum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (max_subarray_sum < sum)
            {
                max_subarray_sum = sum;
            }
        }
    }
    return max_subarray_sum;
}

int optimal(int arr[], int n)
{
    int max_subarray_sum = arr[0];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (max_subarray_sum < sum)
        {
            max_subarray_sum = sum;
        }
        sum = sum >= 0 ? sum : 0;
    }
    return max_subarray_sum;
}

vector<int> get_maximum_subarray_sum_subarray(int arr[], int n)
{
    vector<int> output;
    int max_subarray_sum = arr[0];
    int sum = 0;
    int start = 0;
    int subarray_start = -1;
    int subarray_end = -1;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum == 0)
        {
            start = i;
        }
        if (sum > max_subarray_sum)
        {
            max_subarray_sum = sum;
            subarray_start = start;
            subarray_end = i;
        }
        sum = sum >= 0 ? sum : 0;
    }

    for (int i = subarray_start; i <= subarray_end; i++)
    {
        output.emplace_back(arr[i]);
    }

    return output;
}