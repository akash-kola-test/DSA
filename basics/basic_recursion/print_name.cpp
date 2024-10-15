#include <bits/stdc++.h>
using namespace std;

void print_name(int i, int n)
{
    if (i > n)
        return;
    cout << "Akash" << "\n";
    print_name(i + 1, n);
}

int main()
{
    int n;
    cout << "Enter no.of times you want to print name = ";
    cin >> n;

    print_name(1, n);

    return 0;
}