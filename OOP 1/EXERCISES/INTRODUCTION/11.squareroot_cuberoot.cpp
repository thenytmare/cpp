#include <iostream>
#include <cmath>
using namespace std;

int main(void)
 {
    float number;

    cout << "Enter a number ->\n ";
    cin >> number;

    cout << "Square: " << pow(number, 2) << endl;
    cout << "Cube: " << pow(number, 3) << endl;
    cout << "Square Root: " << sqrt(number) << endl;
    cout << "Cube Root: " << cbrt(number) << endl << endl;

}
