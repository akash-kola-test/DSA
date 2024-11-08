#include <bits/stdc++.h>
using namespace std;

vector<int> bruteforce(int arr1[], int arr2[], int n1, int n2)
{
    vector<int> output;
    int visited[n2] = {0};
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j] && visited[j] == 0)
            {
                output.emplace_back(arr1[i]);
                visited[j] = 1;
                break;
            }
            if (arr1[i] < arr2[j])
            {
                break;
            }
        }
    }
    return output;
}

vector<int> optimal(int arr1[], int arr2[], int n1, int n2)
{
    vector<int> output;
    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] == arr2[j])
        {
            output.emplace_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr2[j] < arr1[i])
        {
            j++;
        }
    }

    return output;
}

int main()
{
    int n1 = 8;
    int arr1[n1] = {1, 2, 2, 3, 3, 4, 5, 6};
    int n2 = 7;
    int arr2[n2] = {2, 3, 3, 5, 6, 6, 7};

    auto bruteforce_output = bruteforce(arr1, arr2, n1, n2);
    for (auto it : bruteforce_output)
    {
        cout << it << " ";
    }
    cout << "\n";

    auto optimal_output = optimal(arr1, arr2, n1, n2);
    for (auto it : optimal_output)
    {
        cout << it << " ";
    }
    cout << "\n";

    return 0;
}