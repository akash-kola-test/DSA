#include <iostream>
using namespace std;

void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
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
