#include <iostream>
using namespace std;
int main()
{
    int originalNumber, number, digit, sum = 0, even = 0, odd = 0, sum_even = 0, sum_odd = 0, total = 0;

    cout << "Enter a number -> ";
    cin >> number;

    originalNumber = number;


    do
    {
        digit = number % 10;

        if (digit % 2 == 0)
        {
            even++;
            sum_even += digit;
        }
        else
        {
            odd++;
            sum_odd += digit;
        }
        total++;
        number /= 10;
        sum = sum_even + sum_odd;

    }while (number != 0);

    cout << "The number " << originalNumber << " has " << total << " digits, of which " << even << " are even and " << odd << " are odd." << "\n";
    cout << "The sum of even digits is " << sum_even << ", the sum of odd digits is " << sum_odd << ", and the sum of all digits is " << sum << "\n";

    cout << "\n\n";

    return 0;
}
