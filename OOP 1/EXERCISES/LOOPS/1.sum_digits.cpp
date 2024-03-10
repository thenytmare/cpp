#include <iostream>
using namespace std;
int main()
{
    int originalNumber,number,digit,sum = 0;

    cout << "Enter a number -> ";
    cin >> number;

    originalNumber = number;
    while (number != 0)
    {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }


    cout << "\nThe sum of digits in the number " << originalNumber << " is " << sum <<"\n\n";
    cout <<"\n\n";

    return 0;
}
