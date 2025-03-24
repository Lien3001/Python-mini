#include <iostream>

using namespace std;

int main()
{
    int num;
    char character;

    cout << "ASCII and character conversion" << endl;
    cout << "Enter a character: ";
    cin >> character;
    num = character;
    cout << "The ASCII value is: " << num << endl;
    cout << "========================" << endl;
    cout << "Enter the ASCII value: ";
    cin >> num;
    character = num;
    cout << "The character is: " << character << endl;
    return 0;
}
