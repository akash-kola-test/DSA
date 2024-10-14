#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter a number to print it's all divisors = ";
    cin >> n;

    vector<int> v;
    int count = 0;

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            count++;
            if ((n / i) != i)
            {
                v.push_back(n / i);
                count++;
            }
        }
    }

    if (count % 2 != 0)
    {
        for (int i = 0; i < count; i += 2)
        {
            cout << v[i] << " ";
        }
        for (int i = count - 2; i > 0; i -= 2)
        {
            cout << v[i] << " ";
        }
    }
    else
    {
        for (int i = 0; i < count - 1; i += 2)
        {
            cout << v[i] << " ";
        }
        for (int i = count - 1; i > 0; i -= 2)
        {
            cout << v[i] << " ";
        }
    }

    cout << "\n";

    return 0;
}
