#include <iostream>
using namespace std;

void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - (i - 1); j++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= 2 * (i - 1); j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= n - (i - 1); j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

int main()
{
    int t;
    cout << "enter no.of test cases = ";
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cout << "Enter input for current test case = ";
        cin >> n;
        pattern(n);
    }
}
