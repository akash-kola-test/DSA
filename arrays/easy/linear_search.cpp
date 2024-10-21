#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int target = 3;

    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            cout << i << "\n";
        }
    }
}
