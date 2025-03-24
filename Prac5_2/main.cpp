#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

void displayList(string arrDishes[], double arrPrices[], int number)
{
    cout << "\nList of dishes" << endl;
    for (int k = 0; k < number ; k++)
    {
        cout << left << setw(4) << (k + 1) << left << setw(20) << arrDishes[k] << setw(15) << right << fixed << setprecision(2) << arrPrices[k] << endl;
    }
}

void removeDishes(string * arrDishes, double * arrPrices, int &number)
{
    char option;
    int dish;
    cout << endl;
    cout << "Do you want to remove a dish (y or n): ";
    cin >> option;
    while (tolower(option)!= 'y' && tolower(option)!= 'n')
    {
        cout << "Invalid input - please enter y for yes and n for no: ";
        cin >> option;
    }
    while (tolower(option) == 'y')
    {
        cout << "Enter the number of the dish: ";
        cin >> dish;
        while (cin.fail() || dish < 1 || dish > number + 1)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input - please enter a number between 1 and " << number + 1 << ": ";
            cin >> dish;
        }


        for (int i = dish - 1; i < number - 1; i++)
        {
            arrDishes[i] = arrDishes[i+1];
            arrPrices[i] = arrPrices[i+1];
        }


        --number;
        cout << endl;
        displayList(arrDishes, arrPrices, number);
        cout << endl;
        cout << "Do you want to remove another dish (y or n): ";
        cin >> option;
        while (tolower(option)!= 'y' && tolower(option)!= 'n')
        {
            cout << "Invalid input - please enter y for yes and n for no: ";
            cin >> option;
        }
    }

}

void addDishes(string * arrDishes, double * arrPrices, int &number, int MAX)
{
    char option;
    string dish;
    double price;
    int position;
    cout << endl;
    cout << "Do you want to add a dish (y or n): ";
    cin >> option;
    while (tolower(option)!= 'y' && tolower(option)!= 'n')
    {
        cout << "Invalid input - please enter y for yes and n for no: ";
        cin >> option;
    }
    while (tolower(option) == 'y' && number < MAX)
    {
        cout << "Enter the name of the dish: ";
        cin.ignore();
        getline(cin,dish);
        cout << "Enter price of dish: ";
        cin >> price;
        while (cin.fail() || price < 0)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input - please enter a positive price: ";
            cin >> price;
        }

        cout << "Enter the position on the list: ";
        cin >> position;
        while (cin.fail() || position < 1 || position > number + 2)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input - please enter a number between 1 and " << number + 2 << ": ";
            cin >> position;
        }

        for (int i = number + 1; i > position -1; i--)
        {
            arrDishes[i] = arrDishes[i-1];
            arrPrices[i] = arrPrices[i-1];
        }
        arrDishes[position -1] = dish;
        arrPrices[position-1] = price;

        ++number;
        cout << endl;
        displayList(arrDishes, arrPrices, number);
        cout << endl;
        cout << "Do you want to add another dish (y or n): ";
        cin >> option;
        while (tolower(option)!= 'y' && tolower(option)!= 'n')
        {
            cout << "Invalid input - please enter y for yes and n for no: ";
            cin >> option;
        }
        displayList(arrDishes, arrPrices, number);
    }

}
int main()
{
    const int MAX = 20;
    string arrDishes [MAX] = {"Green salad", "Crumbed mushrooms", "Buffalo wings", "Chicken Schnitzel", "Fried Fish", "Calamari combo","Chicken burger", "Beef burger",  "Rump steak", "Pork ribs"};
    double arrPrices [MAX] = { 65.50, 65.75, 70.00, 125.99, 85.00, 95.75, 85.00, 99.00, 145.75, 110.55 };
    int number = 10; // number of elements currently in the arrays
    int choice;
    do
    {
        cout << "\n Options" << endl << endl;
        cout << " 1. Display list of dishes" << endl << endl;
        cout << " 2. Remove dishes" << endl << endl;
        cout << " 3. Add dishes" << endl << endl;
        cout << " 4. Quit" << endl << endl;
        cout << " Your choice (1/2/3/4): ";
        cin >> choice;
        switch (choice)
        {
            case 1: displayList(arrDishes, arrPrices, number );
                    break;
            case 2: // call function to remove dishes
                    removeDishes(arrDishes, arrPrices, number);
                    break;
            case 3: // call function to add dishes
                    addDishes(arrDishes, arrPrices, number, MAX);
                    break;
        }
    }
    while (choice != 4);

    cout << "\nDone!" << endl;
    return 0;
}
