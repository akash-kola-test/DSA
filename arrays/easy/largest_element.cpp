#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 4, 2, 4, 6, 3};

    int largest = arr[0];
    for (int i = 1; i < 6; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    cout << largest << "\n";
    return 0;
}