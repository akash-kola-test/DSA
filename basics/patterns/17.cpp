#include <iostream>
using namespace std;

void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        char ch = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        ch = 'A' + (i - 2);
        for (int j = 1; j <= (i - 1); j++)
        {
            cout << ch << " ";
            ch--;
        }
        for (int j = 1; j <= n - i; j++)
        {
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
        pattern(n);
    }
}
