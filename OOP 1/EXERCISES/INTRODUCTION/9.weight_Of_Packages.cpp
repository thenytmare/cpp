#include <iostream>
using namespace std;

int main()
{
    float weight_grams;
    cout << "Enter weight of the package in grams -> \n";
    cin >> weight_grams;

    float weight_kg = weight_grams / 1000;
    float packages_for_kg = 1.0 / weight_kg;

    cout << "The weight of the package is " << weight_kg << " kilograms." << endl;
    cout << "It takes " << packages_for_kg << " such packages to form one kilogram." << endl << endl;

    return 0;
}
