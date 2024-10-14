#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter a number to check if it's armstrong number or not = ";
    cin >> n;

    int copy = n;
    int sum = 0;

    while (n > 0)
    {
        int last_digit = n % 10;
        sum += (last_digit * last_digit * last_digit);
        n = n / 10;
    }

    if (copy == sum)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    return 0;
}
