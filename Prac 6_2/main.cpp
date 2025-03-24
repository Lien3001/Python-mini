#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;
void inputScores(double * pArr, double MAX)
{
    for (int i = 0; i < MAX; i++)
    {
        cout << "Enter score from judge " << i + 1 << ": ";
        cin >> (*(pArr + i));

        while (cin.fail() | (*(pArr + i)) < 0 | (*(pArr + i)) > 10)
        {
            cout << "Invalid - Enter a number between 0 and 10" << endl;
            cout << "Enter score from judge " << i + 1 << ": ";
            cin >> (*(pArr + i));
        }
    }
}

void displayScores(double * pArr, double MAX)
{
    cout << endl;
    cout << "Scores from 8 judges" << endl;
    cout << "=====================" << endl;
    for (int i = 0; i < MAX; i++)
    {
        cout << "#" << left << setw(6) << i + 1 << fixed << setprecision(1) << (*(pArr + i)) << endl;
    }
}

double findLowestScore(double * pArr, double MAX)
{
    double lowest = (*(pArr));
    for (int i = 1; i < MAX; i++)
    {
        if (lowest > (*(pArr + i)))
            lowest = (*(pArr + i));
    }
    return lowest;
}
double findHighestScore(double * pArr, double MAX)
{
    double highest = (*(pArr));
    for (int i = 1; i < MAX; i++)
    {
        if (highest < (*(pArr + i)))
            highest = (*(pArr + i));
    }
    return highest;
}
double calculateFinalScore(double * pArr, double MAX)
{
    double score = 0;
    for (int i = 0; i < MAX; i++)
    {
        score += (*(pArr + i));
    }
    score -= findLowestScore(pArr, MAX);
    score -= findHighestScore(pArr, MAX);
    return score / (MAX - 2);
}
int main()
{
    const int MAX = 8;
    double arrGymnast[MAX];
    double * pGymnast = arrGymnast;

    double ave;
    double * pAve = &ave;

    inputScores(pGymnast, MAX);
    displayScores(pGymnast, MAX);
    cout << endl;
    cout << "The final score is " << fixed << setprecision(1) << calculateFinalScore(pGymnast, MAX) << endl;

    return 0;
}
