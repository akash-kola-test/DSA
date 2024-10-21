#include<bits/stdc++.h>
using namespace std;


void bruteforce(int arr[], int n, int d) {
    for(int i = 0; i < (d % n); i++) {
        int temp = arr[n - 1];
        for(int i = n - 2; i >= 0; i--) {
            arr[i + 1] = arr[i];
        }
        arr[0] = temp;
    }
}


void better(int arr[], int n, int d) {
    d = d % n;
    vector<int> v;
    for(int i = n - d; i < n; i++) {
        v.emplace_back(arr[i]);
    }
    for(int i = n - d - 1; i >= 0; i--) {
        arr[i + d] = arr[i];
    }
    for(int i = 0; i < d; i++) {
        arr[i] = v[i];
    }
}


void optimal(int arr[], int n, int d) {
    d = d % n;
    reverse(arr + (n - d), arr + n);
    reverse(arr, arr + (n - d));
    reverse(arr, arr + n);
}


int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    int d = 3;
    
    int temp1[n];
    copy(arr, arr + n, temp1);
    bruteforce(temp1, n, d);
    for(auto it : temp1) {
        cout << it << " ";
    }
    cout << "\n";
    
    int temp2[n];
    copy(arr, arr + n, temp2);
    better(temp2, n, d);
    for(auto it : temp2) {
        cout << it << " ";
    }
    cout << "\n";

    int temp3[n];
    copy(arr, arr + n, temp3);
    optimal(temp3, n, d);
    for(auto it : temp3) {
        cout << it << " ";
    }
    cout << "\n";

    return 0;
}