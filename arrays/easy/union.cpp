#include<bits/stdc++.h>
using namespace std;


pair<int, int*> bruteforce(int arr1[], int arr2[], int n1, int n2) {
    set<int> s;
    for(int i = 0; i < n1; i++) {
        s.emplace(arr1[i]);
    }
    for(int i = 0; i < n2; i++) {
        s.emplace(arr2[i]);
    }

    int* output = new int[s.size()];
    int index = 0;
    for(auto it : s) {
        output[index] = it;
        index++;
    }

    return make_pair(s.size(), output);
}


pair<int, int*> optimal(int arr1[], int arr2[], int n1, int n2) {
    int i = 0, j = 0;
    int prev = -1;
    vector<int> output;
    while(i < n1 && j < n2) {
        if(arr1[i] <= arr2[j]) {
            if(output.size() == 0 || prev != arr1[i]) {
                output.emplace_back(arr1[i]);
                prev = arr1[i];
                i++;
            } else {
                i++;
            }
        } else {
            if(output.size() == 0 || prev != arr2[j]) {
                output.emplace_back(arr2[j]);
                prev = arr2[j];
                j++;
            } else {
                j++;
            }
        }
    }

    while(i < n1) {
        if(output.size() == 0 || prev != arr1[i]) {
            output.emplace_back(arr1[i]);
            prev = arr1[i];
        }
        i++;
    }

    while(j < n2) {
        if(output.size() == 0 || prev != arr2[j]) {
            output.emplace_back(arr2[j]);
            prev = arr2[j];
        }
        j++;
    }

    int *output_array = new int[output.size()];
    for(int i = 0; i < output.size(); i++) {
        output_array[i] = output[i];
    }

    return make_pair(output.size(), output_array);
}


int main() {
    int arr1[] = {1, 1, 2, 2, 3, 5, 6};
    int arr2[] = {2, 3, 3, 4, 5, 5, 6};
    int n1 = 7;
    int n2 = 7;

    auto bruteforce_output = bruteforce(arr1, arr2, n1, n2);
    for(int i = 0; i < bruteforce_output.first; i++) {
        cout << bruteforce_output.second[i] << " ";
    }
    cout << "\n";
    delete[] bruteforce_output.second;

    auto optimal_output = optimal(arr1, arr2, n1, n2);
    for(int i = 0; i < optimal_output.first; i++) {
        cout << optimal_output.second[i] << " ";
    }
    cout << "\n";
    delete[] optimal_output.second;


    return 0;
}
