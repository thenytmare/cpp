#include <iostream>
using namespace std;

int main(void)
{
    float meters, minutes;
    cout << "Enter distance in meters: ";
    cin >> meters;
    cout << "Enter time in minutes: ";
    cin >> minutes;

    double speed_kph = (meters / 1000) / (minutes / 60);
    cout << "Speed: " << speed_kph << " km/h." << endl << endl;


}
