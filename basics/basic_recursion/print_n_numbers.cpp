#include <bits/stdc++.h>
using namespace std;

void print_number(int i, int n)
{
    if (i > n)
        return;

    cout << i << "\n";
    print_number(i + 1, n);
}

int main()
{
    int n;
    cout << "Enter n = ";
    cin >> n;

    print_number(1, n);

    return 0;
}