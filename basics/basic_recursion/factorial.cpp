#include <bits/stdc++.h>
using namespace std;

void paramaterized_factorial(int n, int factorial)
{
    if (n == 0)
    {
        cout << factorial << "\n";
        return;
    }

    paramaterized_factorial(n - 1, factorial * n);
}

int functional_factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n * functional_factorial(n - 1);
}

int main()
{
    int n;
    cout << "Enter n = ";
    cin >> n;

    paramaterized_factorial(n, 1);

    cout << functional_factorial(n) << "\n";
}