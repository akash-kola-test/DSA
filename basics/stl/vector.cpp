#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(10);
    v.emplace_back(20);

    vector<pair<int, int>> paired_vector;
    paired_vector.push_back({1, 2});
    paired_vector.emplace_back(1, 2);

    vector<pair<int, pair<int, int>>> nested_paired_vector;
    nested_paired_vector.push_back({1, {2, 3}});
    nested_paired_vector.emplace_back(1, make_pair(2, 4));

    vector<int> initialized(5, 100);

    vector<int> initial_sized_vector(5);

    vector<int> copied_vector(initialized);

    for (int i = 0; i < 5; i++)
    {
        cout << copied_vector[i] << " ";
    }
    cout << "\n";

    copied_vector[0] = 20;

    vector<int>::iterator it = copied_vector.begin();
    cout << *it << "\n";

    for (vector<int>::iterator loop_it = copied_vector.begin(); loop_it != copied_vector.end(); loop_it++)
    {
        cout << *loop_it << " ";
    }
    cout << "\n";

    cout << copied_vector.back() << "\n";

    for (auto it = copied_vector.begin(); it != copied_vector.end(); it++)
    {
        cout << *it << " ";
    }
    cout << "\n";

    for (auto it : copied_vector)
    {
        cout << it << " ";
    }
    cout << "\n";

    copied_vector.erase(copied_vector.begin() + 1);

    copied_vector.erase(copied_vector.begin() + 1, copied_vector.begin() + 3);

    for (auto it : copied_vector)
    {
        cout << it << " ";
    }
    cout << "\n";

    copied_vector.insert(copied_vector.begin(), 200);
    copied_vector.insert(copied_vector.begin() + 2, 2, 30);

    copied_vector.insert(copied_vector.begin(), v.begin(), v.end());

    for (auto it : copied_vector)
    {
        cout << it << " ";
    }
    cout << "\n";

    vector<int> empty_vector;
    cout << empty_vector.empty() << "\n";

    return 0;
}