#include <bits/stdc++.h>
using namespace std;

int optimal(int arr[], int n)
{
    int max_con_ones = 0;
    int con_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            con_count++;
            max_con_ones = max(con_count, max_con_ones);
        }
        else
        {
            con_count = 0;
        }
    }

    return max_con_ones;
}

int main()
{

    int arr[] = {1, 1, 0, 1, 1, 1, 0, 0, 1, 1};
    int n = 10;

    cout << optimal(arr, n) << "\n";

    return 0;
}