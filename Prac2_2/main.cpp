#include <iostream>
#include <limits>
#include <cmath>
#include <time.h>
#include <stdlib.h>

using namespace std;

int getGuess()
{
    int guess;
    cout << "Enter your guess: ";
    cin >> guess;
    while (cin.fail() || guess < 1 || guess > 50)
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Please enter a number between 1 and 50: ";
        cin >> guess;
    }
    return guess;
}
int main()
{
    const int MAX = 50;
    const int MIN = 1;
    const int MAX_GUESSES = 5;
    char keep_going;
    int correct_guess, guess, guess_count{0}, difference;

    do
    {
         srand(time(0));
        guess_count = 0;
        correct_guess = rand() % (MAX - MIN + 1) + MIN;

        do
        {
            guess = getGuess();
            guess_count ++;

            difference = abs(correct_guess - guess);
            if (difference == 10)
            {
                cout << "Almost warm!" << endl;

            }
            else if (difference == 5)
            {
                cout << "Almost hot!" << endl;
            }
            else if (difference == 1)
            {
                cout << "Almost there!" << endl;
            }
            else if (difference > 10)
            {
                cout << "Cold" << endl;
            }
            else if (difference > 5)
            {
                cout << "Warm" << endl;
            }
            else
            {
                cout << "Hot" << endl;
            }
        } while (guess != correct_guess && guess_count <= MAX_GUESSES);

        if (guess != correct_guess)
        {
            cout << "The correct number was " << correct_guess << endl;
        }
        else
            cout << "YOU WON!" << endl;

        cout << endl;
        cout << "Would you like to play another game (Y/N): ";
        cin >> keep_going;

        while (cin.fail() || (toupper(keep_going) != 'Y' && toupper(keep_going) != 'N'))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>:: max(), '\n');
            cout << "INVALID - Please enter Y or N: ";
            cin >> keep_going;
        }
    } while (toupper(keep_going) == 'Y');




    return 0;
}
