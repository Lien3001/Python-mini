#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double base, height, area, volume, diagonal;
    cout << "Pyramid calculator";
    cout << "Enter the base (cm): ";
    cin >> base;
    cout << "Enter the height (cm): ";
    cin >> height;

    cout << endl;

    area = pow(base, 2) + 2 * base * sqrt(pow(base,2)/2 + pow(height, 2));
    volume = (pow(base, 2) * height)/ 3;
    diagonal = sqrt(5 * pow(base,2)/ 4 + pow(height,2));

    cout << "Area of the pyramid: " << area << endl;
    cout << "Space diagonal of the pyramid is: " << diagonal << endl;
    cout << "Volume of the pyramid: " << volume << endl;

    return 0;
}
