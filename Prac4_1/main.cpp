#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main()
{
    const int DAYS = 7;

    double arrTemps[DAYS], highest, lowest;
    double * pTemps = arrTemps;
    int counter = 0;
    int* pCount = &counter;

    cout << "Simulated temperatures for the week:" << endl;
    cout <<setw(6) << left << "Day" << "Temperature"<< endl;

    srand(time(0));
    for (int i = 0; i < DAYS; i++)
    {
        (*(pTemps + i)) = (double)(rand() %(350 - 150 + 1) + 150)/10;
        *pCount = *pCount + 1;
    }

    for (int j = 0; j < *pCount; j++)
    {
        cout <<setw(6) << left << j + 1 << fixed<< setprecision(1)<< (*(pTemps + j))<< endl;
    }
    cout << endl;

    highest = (*(arrTemps));
    lowest = (*(arrTemps));

    for (int k = 1; k < *pCount; k++)
    {
        if (highest <(*(arrTemps + k)))
            highest = (*(arrTemps + k));
        if (lowest >(*(arrTemps + k)))
            lowest = (*(arrTemps + k));
    }

    cout << "The highest temperature recorded is " << fixed << setprecision(1) << highest << endl;
    cout << "The lowest temperature recorded is " << fixed<< setprecision(1) << lowest << endl;
    return 0;
}
