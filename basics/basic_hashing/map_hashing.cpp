#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    unordered_map<int, int> mymap;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mymap[arr[i]]++;
    }

    int q;
    cin >> q;
    while(q--) {
        int number;
        cin >> number;
        cout << mymap[number] << "\n";
    }

    return 0;
}