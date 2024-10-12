#include <iostream>
using namespace std;

void pattern(int n)
{
    int spaces = 2 * n - 2;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n) stars -= ((i - n) * 2);
        for (int j = 1; j <= stars; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= spaces; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "* ";
        }

        if (i < n)
        {
            spaces -= 2;
        }
        else
        {
            spaces += 2;
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
