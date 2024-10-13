#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    s.insert(30);
    s.insert(1);
    s.emplace(40);

    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}