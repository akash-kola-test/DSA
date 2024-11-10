#include <bits/stdc++.h>
using namespace std;

int bruteforce_1(int arr[], int n, int target_sum)
{
    int max_len = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            if (sum == target_sum)
            {
                max_len = max(max_len, j - i + 1);
            }
        }
    }

    return max_len;
}

int bruteforce_2(int arr[], int n, int target_sum)
{
    int max_len = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == target_sum)
            {
                max_len = max(max_len, j - i + 1);
            }
        }
    }

    return max_len;
}

int better(int arr[], int n, int target_sum)
{
    unordered_map<int, int> index_running_sum;
    int sum = 0;
    int max_len = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum == target_sum)
        {
            max_len = (max_len, i + 1);
        }
        else if (index_running_sum.find(sum - target_sum) != index_running_sum.end())
        {
            int len = i - index_running_sum[sum - target_sum];
            max_len = max(max_len, len);
        }

        if (index_running_sum.find(sum) == index_running_sum.end())
        {
            index_running_sum[sum] = i;
        }
    }

    return max_len;
}

int optimal(int arr[], int n, int target_element)
{
    int left = 0, right = 0;
    int sum = 0;
    int max_len = 0;
    while (right < n)
    {
        sum += arr[right];

        while (sum > target_element && left <= right)
        {
            sum -= arr[left];
            left++;
        }

        if (sum == target_element)
        {
            max_len = max(max_len, right - left + 1);
        }

        right++;
    }

    return max_len;
}

int main()
{
    int n1 = 3;
    int target_sum1 = 1;
    int negatives_included_array[n1] = {-1, 1, 1};

    int n2 = 5;
    int target_sum2 = 10;
    int positivies_array[] = {2, 3, 5, 1, 9};

    int n3 = 4;
    int target_sum3 = 3;
    int zeroes_included_array[] = {2, 0, 0, 3};

    cout << "Bruteforce 1\n";
    cout << "negatives included array: " << bruteforce_1(negatives_included_array, n1, target_sum1) << "\n";
    cout << "positives only: " << bruteforce_1(positivies_array, n2, target_sum2) << "\n";
    cout << "zeroes included: " << bruteforce_1(zeroes_included_array, n3, target_sum3) << "\n";

    cout << "\n";
    cout << "Bruteforce 2\n";
    cout << "negatives included array: " << bruteforce_2(negatives_included_array, n1, target_sum1) << "\n";
    cout << "positives only: " << bruteforce_2(positivies_array, n2, target_sum2) << "\n";
    cout << "zeroes included: " << bruteforce_2(zeroes_included_array, n3, target_sum3) << "\n";

    cout << "\n";
    cout << "Better\n";
    cout << "negatives included array: " << better(negatives_included_array, n1, target_sum1) << "\n";
    cout << "positives only: " << better(positivies_array, n2, target_sum2) << "\n";
    cout << "zeroes included: " << better(zeroes_included_array, n3, target_sum3) << "\n";

    cout << "\n";
    cout << "Optimal\n";
    cout << "positives only: " << better(positivies_array, n2, target_sum2) << "\n";
    cout << "zeroes included: " << better(zeroes_included_array, n3, target_sum3) << "\n";
    return 0;
}
