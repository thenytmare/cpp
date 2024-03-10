#include <iostream>
using namespace std;
int main()
{
    int originalnumber,number, reversed = 0, remainder;

    cout << "Enter an integer -> ";
    cin >> number;

    originalnumber = number;

    do
    {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number /= 10;
    }
    while (number != 0);


    cout <<originalnumber<<" in reverse is "<< reversed << "\n";

    return 0;
}
