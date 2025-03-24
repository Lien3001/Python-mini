#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;
void getInput(int * arrTests, int testCount)
{
    for (int i = 0; i < testCount; i++)
    {
        cout << "Enter the grade for test "<< i + 1 << ": ";
        cin >> arrTests[i];

        while (cin.fail() || arrTests[i] < 0 || arrTests[i] > 100)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error: Please enter a number between 0 and 100: ";
            cin >> arrTests[i];
        }
    }
}

double getAverage(int * arrTests, int testCount)
{
    int sum {0};
    for (int i = 0; i < testCount; i++)
        sum += arrTests[i];
    return (double)sum / testCount;
}

void displayGrades(string name, int * arrTests, int testCount)
{
    cout << name <<"'s Grades:" << endl;
    cout << "======================================================" << endl;
    cout << "|  Test 1  |  Test 2  |  Test 3  | Test 4  |  Test 5  |" << endl;
    for (int i = 0; i < testCount; i++)
        cout << left << setw(5) << '|' << arrTests[i] << "    ";
    cout  << '|' << endl;
    cout << "======================================================" << endl;
    cout << "Average grade: " << fixed << setprecision(2) << getAverage(arrTests, testCount) << endl;
}

void searchTests (int * arrTests, int testCount)
{
    int arrFound[testCount];
    int foundCount = 0;
    int mark;
    cout << "Enter mark to search for: ";
    cin >> mark;
    while(cin.fail() || mark < 0 || mark > 100)
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Error - Please enter a number between 0 and 100: ";
        cin >> mark;
    }
    for (int i = 0; i < testCount; i++)
    {
        if (arrTests[i] == mark)
        {
             arrFound[foundCount] = i;
             foundCount++;
        }
    }
    if (foundCount == 0)
    {
        cout << "Grade not found" << endl;
    }
    else
    {
        cout << "Grade " << mark << " was recorded for test(s): ";
        for (int i = 0; i < foundCount; i++)
            cout << arrFound[i] + 1 << ' ';
        cout  << endl;
    }

}


int main()
{
    const int TESTS = 5;
    string student_name;

    int arrTests[TESTS];
    int arrFound[TESTS];
    int foundCount = 0;

    cout << "Enter student name and surname: ";
    getline(cin, student_name);

    getInput(arrTests, TESTS);
    cout  << endl;

    displayGrades(student_name, arrTests, TESTS);
    cout << endl;

    searchTests(arrTests, TESTS);
    cout << endl;
    return 0;
}
