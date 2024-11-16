#include <bits/stdc++.h>
using namespace std;

void bruteforce(int arr[], int n);
void optimal(int arr[], int n);
void not_half(int arr[], int n);

int main()
{
    int n = 6;
    int arr[n] = {1, 2, -3, -1, -2, 3};

    int temp_arr1[n];
    memcpy(temp_arr1, arr, sizeof(int) * n);
    bruteforce(temp_arr1, n);
    for (int i = 0; i < n; i++)
    {
        cout << temp_arr1[i] << " ";
    }
    cout << "\n";

    int temp_arr2[n];
    memcpy(temp_arr2, arr, sizeof(int) * n);
    optimal(temp_arr2, n);
    for (int i = 0; i < n; i++)
    {
        cout << temp_arr2[i] << " ";
    }
    cout << "\n";

    int not_half_array[n] = {1, 2, -3, -1, -2, -3};
    not_half(not_half_array, n);
    for (int i = 0; i < n; i++)
    {
        cout << not_half_array[i] << " ";
    }
    cout << "\n";

    return 0;
}

void bruteforce(int arr[], int n)
{
    int positives[n / 2];
    int negatives[n / 2];

    int pos_index = 0;
    int neg_index = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            negatives[neg_index] = arr[i];
            neg_index++;
            continue;
        }
        positives[pos_index] = arr[i];
        pos_index++;
    }

    for (int i = 0; i < (n / 2); i++)
    {
        arr[2 * i] = positives[i];
        arr[2 * i + 1] = negatives[i];
    }
}

void optimal(int arr[], int n)
{
    int temp[n];
    memcpy(temp, arr, sizeof(int) * n);
    int pos = 0;
    int neg = 1;
    for (int i = 0; i <= n; i++)
    {
        if (temp[i] < 0)
        {
            arr[neg] = temp[i];
            neg += 2;
            continue;
        }
        arr[pos] = temp[i];
        pos += 2;
    }
}

void not_half(int arr[], int n)
{
    int neg_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            neg_count++;
        }
    }
    int positives[n - neg_count];
    int negatives[neg_count];

    int pos_index = 0;
    int neg_index = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            negatives[neg_index] = arr[i];
            neg_index++;
            continue;
        }
        positives[pos_index] = arr[i];
        pos_index++;
    }

    bool negatives_are_more = neg_index > pos_index;
    int lesser_one = negatives_are_more ? pos_index : neg_index;
    for (int i = 0; i < lesser_one; i++)
    {
        arr[2 * i] = positives[i];
        arr[2 * i + 1] = negatives[i];
    }

    int higher_one = negatives_are_more ? neg_index : pos_index;
    int upper_bound = negatives_are_more ? neg_count : n - neg_count;
    while (higher_one < upper_bound)
    {
        if (negatives_are_more)
        {
            arr[higher_one] = negatives[higher_one];
        }
        else
        {
            arr[higher_one] = positives[higher_one];
        }
        higher_one++;
    }
}

