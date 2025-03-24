#include <iostream>

using namespace std;

int main()
{
    int age;
    char gender;

    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your gender (M/F): ";
    cin >> gender;

    cout << endl;

    if (toupper(gender) == 'M' || toupper(gender) == 'F')
        if (age >= 18)
            cout << "You are eligible to vote.";
        else
            cout << "You are NOT eligible to vote.";
    else
        cout << "You are NOT eligible to vote.";


    return 0;
}
