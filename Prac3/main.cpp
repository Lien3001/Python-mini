#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

double validateInput(string prompt, double limit)
{
    double value;
    cout << prompt;
    cin >> value;
    while (cin.fail() || value <= limit)
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '/n');
        cout << "Invalid - please enter a numerical value larger than " << limit << endl;
        cin >> value;
    }
    return value;
}
double calculateCharges(int days, double day_rate, double meds, double service)
{
    double total {0};
    total = (days * day_rate) +meds +service;
    return total;
}
double calculateCharges(double meds, double service)
{
    double total {0};
    total = meds +service;
    return total;
}
void displayCharges(string type, double total)
{
    cout << "====================================" << endl;
    cout << "Total charges for " << type << ": R " << fixed << setprecision(2) << total << endl;
    cout << "===================================="<< endl;
}

int main()
{

    double meds, services, total, day_rate;
    char type, go;
    int days;
    do
    {
        cout << "Was the patient in-patient(i) or out-patient(o)? ";
        cin >> type;
        while (toupper(type) != 'O' && toupper(type) != 'I')
        {
            cout << endl;
            cout << "Invalid input. Please enter i for in-patient and o for out-patient: ";
            cin >> type;
        }
        cout << endl;
        switch (toupper(type))
        {
        case 'I':
            days = (int)validateInput("Enter number of days spent in the hospital: ", 0);
            day_rate = validateInput("Enter the daily rate: ", 0.0);
            meds = validateInput("Enter the hospital medication charges: ", 0.0);
            services = validateInput("Enter the charges for hospital services: ", 0.0);
            total = calculateCharges(days, day_rate, meds, services);
            cout << endl;
            displayCharges("in-patient", total);
            cout << endl;
            break;
        case 'O':
            meds = validateInput("Enter the hospital medication charges: ", 0.0);
            services = validateInput("Enter the charges for hospital services: ", 0.0);
            total = calculateCharges(meds, services);
            cout << endl;
            displayCharges("out-patient", total);
            cout << endl;
            break;
        }
        cout << endl;
        cout << "Would you like to enter another patient's charges? (y/n): ";
        cin >> go;
        while (tolower(go)!= 'y' && tolower(go)!='n')
        {
            cout << "Invalid input. Please enter y for yes and n for no: ";
            cin >> go;
        }
        cout << endl;
    } while (tolower(go) == 'y');

    cout << "Thank you for using hospital charges calculator!" << endl;
    return 0;
}
