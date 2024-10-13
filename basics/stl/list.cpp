#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> li;
    li.push_back(20);
    li.emplace_back(30);

    li.push_front(40);
    li.emplace_front(50);

    for (auto i : li)
    {
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}