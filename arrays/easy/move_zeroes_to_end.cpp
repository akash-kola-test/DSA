#include<bits/stdc++.h>
using namespace std;


void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


void bruteforce(int arr[], int n) {
    vector<int> v;
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            v.emplace_back(arr[i]);
        }
    }
    int i = 0;
    for(auto it : v) {
        arr[i] = it;
        i++;
    }
    for(; i < n; i++) {
        arr[i] = 0;
    }
}


void optimal(int arr[], int n) {
    int non_zero_element = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) {
            non_zero_element = i;
            break;
        }
    }
    if(non_zero_element == -1) {
        return;
    }
    for(int i = non_zero_element + 1; i < n; i++) {
        if(arr[i] != 0) {
            swap(&arr[i], &arr[non_zero_element]);
            non_zero_element++;
        }
    }
}


int main() {
    int arr[] = {1, 2, 3, 0, 1, 0, 0, 4};
    int n = 8;

    int temp1[n];
    copy(arr, arr + n, temp1);
    bruteforce(temp1, n);
    for(auto it : temp1) {
        cout << it << " ";
    }
    cout << "\n";

    int temp2[n];
    copy(arr, arr + n, temp2);
    optimal(temp2, n);
    for(auto it : temp2) {
        cout << it << " ";
    }
    cout << "\n";
}