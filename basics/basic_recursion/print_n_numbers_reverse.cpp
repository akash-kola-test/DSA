#include <bits/stdc++.h>
using namespace std;

void print_number(int i, int n)
{
    if (i == 0)
        return;

    cout << i << "\n";
    print_number(i - 1, n);
}

int main()
{
    int n;
    cout << "Enter n = ";
    cin >> n;

    print_number(n, n);

    return 0;
}