#include <iostream>
using namespace std;

int main(void)
{
    double celsius;
    cout << "Enter temperature in degrees Celsius -> ";
    cin >> celsius;

    double fahrenheit = (celsius * 9/5) + 32;
    cout << celsius << "°C = " << fahrenheit << "°F." << endl;
    cout <<"\n\n";


}
