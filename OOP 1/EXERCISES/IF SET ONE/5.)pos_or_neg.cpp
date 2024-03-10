#include <iostream>
using namespace std;

int main(void)
{
    int number;

    cout << "Enter a number -> ";
    cin >> number;

    if (number < 0)
    {
        cout << "NEGATIVE" << "\n\n";
    } else if (number > 0)
    {
        cout << "POSITIVE" << "\n\n";
    } else {
        cout << "ZERO" << "\n\n";
    }


}
