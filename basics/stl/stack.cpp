#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    st.push(20);
    st.push(40);
    st.emplace(50);

    cout << st.top() << "\n";
    st.pop();
    cout << st.top() << "\n";

    cout << st.empty() << "\n";

    return 0;
}