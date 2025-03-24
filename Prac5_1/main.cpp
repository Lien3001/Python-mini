#include <iostream>
#include <iomanip>

using namespace std;
void displayPWords(string * arrPWords, int count)
{
    cout << endl;
    for (int i = 0; i < count; i ++)
    {
        cout << i+1 <<". " << arrPWords[i] << endl;
    }
}
int checkWeakPWords(string * arrPWords, int count)
{

    int weak {0};
    string message;
    bool strong , special;
    int digits;
    cout << endl;
    for (int i = 0; i < count; i ++)
    {
        strong = true;
        message = "";
        special = false;
        digits = 0;
        if (arrPWords[i].length() < 8)
        {
            message += "Less than 8 characters\t";
            strong = false;
        }
        for (int j = 0; j < arrPWords[i].length(); j++)
        {
            if (ispunct(arrPWords[i][j]))
                special = true;
            if (isdigit(arrPWords[i][j]))
                digits ++;


        }
        if (digits < 3)
        {
            message += "Less than 3 digits\t";
            strong = false;
        }
        if (!special)
        {
            message += "No special characters\t";
            strong = false;
        }
        if (strong == true)
        {
            message = "Strong password";
        }
        else
            weak ++;
        cout << i+1 <<". " << left << setw(20)<< arrPWords[i] <<": " << message << endl;
    }
    return weak;
}
int main()
{
    const int MAX = 10;
    string arrPWords [MAX];
    int count = 0, weak;
    int num_weak = 0;

    cout << "Enter a password (X to quit input): ";
    cin >> arrPWords[count];

    while ((arrPWords[count].compare("X") != 0) && (arrPWords[count].compare("x") != 0) && (count < MAX))
    {
        count ++;
        cout << "Enter a password (X to quit input): ";
        cin >> arrPWords[count];
    }

  // call the displayPWords() function
    displayPWords(arrPWords, count);
  // call the checkWeakPWords()
    weak = checkWeakPWords(arrPWords, count);
  // display the  number of weak password
    cout << endl;
    cout << "Number of weak passwords: " << weak;
   return 0;
}
