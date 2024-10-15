#include<bits/stdc++.h>
using namespace std;

bool check_palindrome(string s, int i) {
    int n = s.size();
    if(i > n / 2) return true;

    if(s[i] != s[n - i - 1]) return false;

    return check_palindrome(s, i + 1);
}

int main() {
    cout << check_palindrome("MADDAM", 0);
    return 0;
}