#include <iostream>
#include <limits>

using namespace std;

int inputNames(string * pNames, int MAX)
{
    char option;
    int names{0};

    cout << "Enter the names of a number of students, not more than 10" << endl;
    do
    {
        if (names != 0)
        {
            cin.ignore();
        }

        cout << "Enter name: ";
        getline(cin, (*(pNames + names)));
        names++;
        cout << "Would you like to enter another name (y/n): ";
        cin >> option;
        while (tolower(option) != 'y' && tolower(option)!= 'n')
        {
            cout << "Please enter y or n: ";
            cin >> option;
        }
    } while (tolower(option) == 'y' && names < MAX);
    return names;
}

void displayNames(string * pNames, int * counter)
{
    cout << endl;
    cout << "List of students in the order of presentation" << endl;
    for (int i = 0; i < * counter; i++)
    {
        cout << i + 1 << ". " << (*(pNames + i)) << endl;
    }
}

void swapNames(string * pNames, int * pCount)
{
    string temp;
    int you, swapw;
    cout << endl;
    cout << "Enter the number of your name on the list: ";
    cin >> you;
    while (cin.fail() || you > *pCount + 1 || you < 1)
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid - please enter a number between 1 and " << *pCount + 1 << ": ";
        cin >> you;
    }
    cout << "Enter the number of the student to swap with: ";
    cin >> swapw;
    while (cin.fail() || swapw > *pCount + 1 || swapw < 1)
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid - please enter a number between 1 and " << *pCount + 1 << ": ";
        cin >> swapw;
    }
    temp = (*(pNames + you - 1));
    (*(pNames + you - 1)) = (*(pNames + swapw - 1));
    (*(pNames + swapw - 1)) = temp;
}
int main()
{
    const int MAX = 10;
    string arrNames[MAX];
    string * pNames = arrNames;
    int counter = inputNames(arrNames, MAX);
    int *pCount = & counter;


    displayNames(pNames, pCount);

    swapNames(pNames, pCount);

    displayNames(pNames, pCount);

    return 0;
}
