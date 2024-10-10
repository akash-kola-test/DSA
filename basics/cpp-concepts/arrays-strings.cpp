#include<bits/stdc++.h>
using namespace std;

int main() {
    // arrays

    int arr[5];

    cout << "Enter array elements = ";
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

    cout << arr[3] << "\n";

    // 2D array
    int two_d_arr[3][5];

    two_d_arr[1][3] = 10;
    cout << two_d_arr[1][3] << "\n";

    // strings
    string s = "akash";
    int len = s.size();
    s[len - 1] = 'a';
    cout << s[len - 1] << "\n";

    return 0;
}