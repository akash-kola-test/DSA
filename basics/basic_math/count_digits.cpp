#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cout << "Enter a number to count it's digits = ";
    cin >> a;

    int copy = a;

    int count = 0;
    while (a > 0)
    {
        count++;
        a = a / 10;
    }

    cout << count << "\n";

    cout << int(log10(copy) + 1) << "\n";

    return 0;
}