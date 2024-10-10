#include<bits/stdc++.h>
using namespace std;

// pass by value
void doSomething(int num) {
    cout << num << "\n";
    num += 5;
    cout << num << "\n";
    num += 5;
    cout << num << "\n";
}

// pass by reference with pointer
void doSomethingAndModifyWithPointer(int* num) {
    cout << *num << "\n";
    *num += 5;
    cout << *num << "\n";
    *num += 5;
    cout << *num << "\n";
}

// pass by reference with reference
void doSomethingAndModify(int& num) {
    cout << num << "\n";
    num += 5;
    cout << num << "\n";
    num += 5;
    cout << num << "\n";
}

int main() {

    int num = 10;
    doSomething(num);
    cout << "Finally value is: " << num << "\n";

    doSomethingAndModify(num);
    cout << "Again, Finally value is: " << num << "\n";

    doSomethingAndModifyWithPointer(&num);
    cout << "Again, Finally value is: " << num << "\n";

    return 0;
}
