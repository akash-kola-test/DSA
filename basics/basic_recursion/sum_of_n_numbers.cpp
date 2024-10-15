#include <bits/stdc++.h>
using namespace std;

void paramaterized_sum(int n, int sum)
{
    if (n == 0)
    {
        cout << sum << "\n";
        return;
    }

    paramaterized_sum(n - 1, sum + n);
}

int functional_sum(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return n + functional_sum(n - 1);
}

int main()
{
    int n;
    cout << "Enter n = ";
    cin >> n;

    paramaterized_sum(n, 0);

    cout << functional_sum(n) << "\n";
}