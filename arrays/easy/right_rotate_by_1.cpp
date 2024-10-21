#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    
    int temp = arr[n - 1];
    for(int i = n - 1; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }
    arr[0] = temp;

    for(auto it : arr) {
        cout << it << " ";
    }
    cout << "\n";

    return 0;
}