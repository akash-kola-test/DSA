#include<bits/stdc++.h>
using namespace std;


int counter = 0;


void my_function() {
    if(counter == 10) {
        return;
    }
    cout << counter << "\n";
    counter++;
    my_function();
}


int main() {
    my_function();
    return 0;
}