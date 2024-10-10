#include <bits/stdc++.h>
using namespace std;

int main()
{
    // take an input as age and print if that age is adult or not
    int age;
    cout << "Enter your age = ";
    cin >> age;

    if (age >= 18)
    {
        cout << "You are an adult" << "\n";
    }
    else
    {
        cout << "You are not an adult" << "\n";
    }

    /*
    A school has following rules for grading system:
    a. Below 25 - F
    b. 25 to 44 - E
    c. 45 to 49 - D
    d. 50 to 59 - C
    e. 60 to 79 - B
    f. 80 to 100 - A
    Ask user to enter marks and print the corresponding grade
    */

    int marks;
    cout << "Please enter your marks = ";
    cin >> marks;

    if (marks < 25)
    {
        cout << "F" << "\n";
    }
    else if (marks < 45)
    {
        cout << "E" << "\n";
    }
    else if (marks < 50)
    {
        cout << "D" << "\n";
    }
    else if (marks < 60)
    {
        cout << "C" << "\n";
    }
    else if (marks < 80)
    {
        cout << "B" << "\n";
    }
    else if (marks <= 100)
    {
        cout << "A" << "\n";
    }

    /*
    Take the age from the user and decide accordingly
     1. If age < 18
         print -> not eligible for job
     2. If age >= 18
         print -> eligible for job
     3. If age >= 55 and age <= 57
         print -> eligible for job, but retirement soon
     4. If age > 57
         print -> retirement time
    */

    int user_age;
    cout << "Enter your age for job eligibility check = ";
    cin >> user_age;

    if (user_age < 18)
    {
        cout << "not eligible for job";
    }
    else if (user_age <= 54)
    {
        cout << "eligible for job";
    }
    else if (user_age <= 57)
    {
        cout << "eligible for job, but retirement soon";
    }
    else
    {
        cout << "retirement time";
    }

    return 0;
}