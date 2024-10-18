#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
    int min = INT32_MAX;
    int max = INT32_MIN;
    unordered_map<int, int> mymap;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mymap[arr[i]]++;
        if (mymap[arr[i]] > max)
        {
            max = arr[i];
        }
        if (mymap[arr[i]] < min)
        {
            min = arr[i];
        }
    }

    cout << max << "\n";
    cout << min << "\n";

    return 0;
}