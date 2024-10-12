#include <iostream>
using namespace std;


void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

void pattern2(int n)
{
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= (n - 1) - i + 1; j++)
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
        pattern1(n);
        pattern2(n);
    }
}
