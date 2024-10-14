#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter a number to check if it's prime or not = ";
    cin >> n;

    int factor_count = 0;

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            factor_count++;
            if (n / i != i)
            {
                factor_count++;
            }
        }
    }

    if (factor_count > 2)
    {
        cout << "false";
    }
    else
    {
        cout << "true";
    }

    cout << "\n";

    return 0;
}