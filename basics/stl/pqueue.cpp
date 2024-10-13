#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> q;
    q.push(20);
    q.push(30);
    q.emplace(40);

    cout << q.top() << "\n";

    q.pop();

    cout << q.top() << "\n";

    cout << q.empty() << "\n";

    return 0;
}