#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter a number to check if it is palindrome or not = ";
    cin >> n;

    int copy = n;

    int rev_num = 0;

    while (n > 0)
    {
        int last_digit = n % 10;
        rev_num = rev_num * 10 + last_digit;
        n = n / 10;
    }

    if (copy == rev_num)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    return 0;
}
