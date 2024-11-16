#include <bits/stdc++.h>
using namespace std;

vector<int> bruteforce(int arr[], int n);
vector<int> optimal(int arr[], int n);

int main()
{
    int n = 6;
    int arr[n] = {10, 22, 12, 3, 0, 6};

    for (auto it : bruteforce(arr, n))
    {
        cout << it << " ";
    }
    cout << "\n";

    for (auto it : optimal(arr, n))
    {
        cout << it << " ";
    }
    cout << "\n";

    return 0;
}

vector<int> bruteforce(int arr[], int n)
{
    vector<int> output;
    for (int i = 0; i < n; i++)
    {
        bool is_leader = true;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                is_leader = false;
                break;
            }
        }
        if (is_leader)
        {
            output.emplace_back(arr[i]);
        }
    }

    return output;
}

vector<int> optimal(int arr[], int n)
{
    vector<int> output;
    int maximum = arr[n - 1];
    output.emplace_back(maximum);
    for (int i = n - 2; i >= 0; i--)

    {
        if (arr[i] > maximum)
        {
            output.emplace_back(arr[i]);
            maximum = arr[i];
        }
    }

    reverse(output.begin(), output.end());
    return output;
}