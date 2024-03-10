#include <iostream>
using namespace std;

int main(void )
{
    int choice, quantity, totalCost;

    cout << "****Jamal and daughters pub****\n" << "Beer brand\t\tprice\n";
    cout << "1. Tusker -\t\t100/=\n";
    cout << "2. Pilsner -\t\t120/=\n";
    cout << "3. Smirnoff Ice -\t140/=\n";
    cout << "4. White Cap -\t\t90/=\n";
    cout << "Enter your choice (1-4) -> ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "How many bottles of Tusker do you want?\n";
            cin >> quantity;
            totalCost = 100 * quantity;
            cout << quantity << " bottles of Tusker will cost you " << totalCost << endl;
            break;
        case 2:
            cout << "How many bottles of Pilsner do you want?\n";
            cin >> quantity;
            totalCost = 120 * quantity;
            cout << quantity << " bottles of Pilsner will cost you " << totalCost << endl;
            break;
        case 3:
            cout << "How many bottles of Smirnoff Ice do you want?\n";
            cin >> quantity;
            totalCost = 140 * quantity;
            cout << quantity << " bottles of Smirnoff Ice will cost you " << totalCost << endl;
            break;
        case 4:
            cout << "How many bottles of White Cap do you want?\n";
            cin >> quantity;
            totalCost = 90 * quantity;
            cout << quantity << " bottles of White Cap will cost you " << totalCost << endl;
            break;
        default:
            cout << "!!! Invalid entry !!!" << endl;
            break;
    }


}
