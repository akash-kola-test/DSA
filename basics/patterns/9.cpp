#include <iostream>
using namespace std;

void pattern1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if (j >= n - (i - 1) && j <= n + (i - 1))
            {
                cout << "* ";
                continue;
            }
            cout << "  ";
        }
        cout << "\n";
    }
}


void pattern2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if (j >= n - (n - i) && j <= n + (n - i))
            {
                cout << "* ";
                continue;
            }
            cout << "  ";
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
        pattern1(n);
        pattern2(n);
    }
}
