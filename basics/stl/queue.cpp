#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    q.push(20);
    q.push(30);
    q.emplace(40);

    cout << q.back() << "\n";
    cout << q.front() << "\n";

    q.pop();

    cout << q.back() << "\n";
    cout << q.front() << "\n";

    cout << q.empty() << "\n";

    return 0;
}