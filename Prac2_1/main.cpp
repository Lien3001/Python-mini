#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;
void displayMenu()
{
    cout << "Currency Conversion Tool" << endl;
    cout << "1. USD to ZAR" << endl;
    cout << "2. ZAR to USD" << endl;
    cout << "3. Quit" << endl;
    cout << endl;
    cout << "Choose an option: " << endl;
}
int main()
{
    const float USD_TO_ZAR = 18.37;
    const float ZAR_TO_USD = 0.054;
    int option, zarAmount, usdAmount;

    do
    {
        displayMenu();
        cin >> option;
        while (cin.fail() || option < 1 || option > 3)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>:: max(), '\n');
            cout << "Invalid - Please enter a number between 1 and 3: ";
            cin >> option;
        }

        cout << endl;

        switch (option)
        {
        case 1:
            cout << "Enter USD amount: $ ";
            cin >> usdAmount;
            while (cin.fail() || usdAmount < 0)
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid - please enter a positive numerical value" << endl;
                cout << "Enter USD amount: $ ";
                cin >> usdAmount;
            }
            cout << "The amount in ZAR is: R " << fixed << setprecision(2) << usdAmount * USD_TO_ZAR << endl;
            break;
        case 2:
            cout << "Enter ZAR amount: R ";
            cin >> zarAmount;
            while (cin.fail() || usdAmount < 0)
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid - please enter a positive numerical value" << endl;
                cout << "Enter ZAR amount: R";
                cin >> usdAmount;
            }
            cout << "The amount in USD is: $ " << fixed << setprecision(2) << zarAmount * ZAR_TO_USD << endl;
            break;
        case 3:
            cout << "Goodbye..." << endl;
        }
        cout << endl;
    } while (option != 3);


    return 0;
}
