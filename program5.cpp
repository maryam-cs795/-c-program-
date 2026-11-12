#include <iostream>
using namespace std;

int main()
{
    int speed, previous, license, registered;
    float fine = 0;

    cout << "Enter speed: ";
    cin >> speed;

    cout << "Previous violations? (1=Yes, 0=No): ";
    cin >> previous;

    cout << "Valid license? (1=Yes, 0=No): ";
    cin >> license;

    cout << "Registered vehicle? (1=Yes, 0=No): ";
    cin >> registered;

    if (speed <= 60)
        fine = 0;
    else if (speed <= 80)
        fine = 2000;
    else if (speed <= 100)
        fine = 5000;
    else
        fine = 10000;

    if (previous == 1)
        fine += fine * 0.25;

    if (license == 0)
        fine += 5000;

    if (registered == 0)
        fine += 10000;

    cout << "Total Fine = Rs. " << fine << endl;

    if (license == 1 && registered == 1)
        cout << "Vehicle Can Continue";
    else
        cout << "Vehicle Cannot Continue";

    return 0;
}