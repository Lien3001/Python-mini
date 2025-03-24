#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <iomanip>

using namespace std;
int readFromFile(string * arrNames, int * arrHours, int MAX)
{
    int counter = 0;
    string line;
    ifstream inFile;
    inFile.open("internet_hours.txt");
    if (inFile.fail())
    {
        cout << "File could not be read" << endl;
        exit(404);
    }
    else
    {
        while (!(inFile.eof()))
        {
            inFile >> (line);
            arrNames[counter] = line.substr(0, line.find(":"));
            arrHours[counter] = stoi(line.substr(line.find(":") + 1));
            counter++;
        }
    }

    inFile.close();
    return counter;
}

void displayInfo(string * arrNames, int * arrHours, int counter)
{
    cout << "List of Internet hours per employee per week" << endl;
    for (int i = 0; i < counter; i++)
    {
        cout << setw(25) << left << arrNames[i] << arrHours[i]<< endl;
    }
}

int calcTotal(int hours)
{
    int sum {0};
    for (int i = 0; i < 7; i++)
    {
        sum += hours % 10;
        hours = hours/10;
    }
    return sum;
}
void displayTotalHours(string * arrNames, int * arrHours, int counter)
{
    cout << endl;
    cout << "List of total hours per employee" << endl;
    int total, grandTotal {0};
    for (int i = 0; i < counter; i++)
    {
        total = calcTotal(arrHours[i]);
        cout << left << setw(5) << i + 1 << setw(25) << arrNames[i] << total << endl;
        grandTotal += total;
    }
    cout << endl;
    cout << "Total number of Internet hours of all employees: " << grandTotal << endl;
}
void writeToFile(string * arrNames, int * arrHours, int counter)
{
    ofstream outFile ("warnings.txt");
    int total;
    outFile << "Employees exceeding the allowed number of internet hours per week"<< endl;
    outFile << left << setw(20) <<  "Names" << "Total hours" << endl;
    for (int i = 0; i < counter; i++)
    {
        total = calcTotal(arrHours[i]);
        if (total > 20)
        {
            outFile << left << setw(20) <<  arrNames[i] << total << endl;
        }
    }
    outFile.close();

}
void addData()
{
    cout << endl;
    char option;
    string name, message;
    string hours;
    bool hoursCorrect;
    ofstream outFile("internet_hours.txt", ios::app);
    cout << "Would you like to add data (y/n): ";
    cin >> option;
    while (toupper(option) != 'Y' && toupper(option) != 'N')
    {
        cout << "Invalid - please enter y or n: ";
        cin >> option;
    }
    cout << endl;
    while (toupper(option) == 'Y')
    {

        cout << "Enter the name of the employee: ";
        cin >> name;
        cout << "Enter the internet hours for 7 days as one string (7 digits): ";
        cin >> hours;

        do
        {
            hoursCorrect = true;
            if (hours.length() != 7)
            {
                hoursCorrect = false;
                message = "Incorrect number of digits";
            }
            else
            {
                for (int i = 0; i < 7; i++)
                {
                    if (!(isdigit(hours[i])))
                    {
                         hoursCorrect = false;
                         message = "All the characters are not digits";
                    }

                }

            }
            if (hoursCorrect == false)
            {
                cout << message;
                cout << "Enter the internet hours for 7 days as one string (7 digits): ";
                cin >> hours;
            }
        } while (hoursCorrect = false);

        outFile << name <<":" << hours << endl;
            cout << "Would you like to add data (y/n): ";
        cin >> option;
        while (toupper(option) != 'Y' && toupper(option) != 'N')
        {
            cout << "Invalid - please enter y or n: ";
            cin >> option;
        }
        cout << endl;
    }
    outFile.close();
}

void displayOptions()
{
    cout << "Internet hours system" << endl;
    cout << "1. Read data from file" << endl;
    cout << "2. Display Data" << endl;
    cout << "3. Display total internet hours" << endl;
    cout << "4. Write data to warnings.txt file" << endl;
    cout << "5. Add more data to internet hours text file" <<endl;
    cout << "6. Exit" << endl;
}


int main()
{
    const int MAX = 50;
    string arrNames[MAX];
    int arrHours[MAX], option;
    int counter;

    do
    {
        displayOptions();
        cout << endl;
        cout << "Your option: ";
        cin >> option;
        cout << endl;

        switch (option)
        {
        case 1:
            counter = readFromFile(arrNames, arrHours, MAX);
            cout << endl;
            break;
        case 2:
            displayInfo(arrNames, arrHours, counter);
            cout << endl;
            break;
        case 3:
            displayTotalHours(arrNames, arrHours, counter);
            cout << endl;
            break;
        case 4:
            writeToFile(arrNames, arrHours, counter);
            cout << endl;
            break;
        case 5:
            addData();
            cout << endl;
            break;
        default :
            cout << "Goodbye" << endl;
        }
    } while (option != 6);

    return 0;
}
