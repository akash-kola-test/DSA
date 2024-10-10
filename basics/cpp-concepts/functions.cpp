#include<bits/stdc++.h>
using namespace std;

// void -> not returns anything
void printAkashName() {
    cout << "Akash" << "\n";
}

// parameterized + void
void printName(string name) {
    cout << name << "\n";
}

// return + parameterized
string getGreetingForName(string name) {
    return "Hello, " + name;
}

// non parameterized
string getGreetingMessage() {
    return "Hello, Friends";
}

int main() {
    printAkashName();

    printName("Akash Nani");

    cout << getGreetingForName("Akash") << "\n";

    cout << getGreetingMessage();

    return 0;
}