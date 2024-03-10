#include <iostream>
using namespace std;

int main(void)
{
    int choice, quantity,totalCost;

    cout << "****Jamal and daughters pub****\n" << "Beer brand\t\tprice\n";
    cout << "1. Tusker -\t\t100/=\n";
    cout << "2. pilsner -\t\t120/=\n";
    cout << "3. smirnoff ice-\t140/=\n";
    cout << "4. white cap -\t\t90/=\n";
    cout << "Enter your choice (1-4) -> \n";
    cin >> choice;


    if (choice == 1)
        {
            cout <<" How many bottles of Tusker do you want ?\n ";
            cin >> quantity;
            totalCost = 100 * quantity;
            cout << "\n"<< quantity << " bottles of Tusker will cost you " << totalCost <<"\n";

        }else if (choice == 2)
        {
            cout <<" How many bottles of pilsner do you want ?\n ";
            cin >> quantity;
            totalCost = 120 * quantity;
            cout << "\n" << quantity << " bottles of pilsner will cost you " << totalCost <<"\n";

        }else if (choice == 3)
        {
            cout <<" How many bottles of smirnoff ice do you want ?\n ";
            cin >> quantity;
            totalCost = 140 * quantity;
            cout << "\n" << quantity << " bottles of smirnoff ice will cost you " << totalCost <<"\n";

        }else if (choice == 4)
        {
            cout <<" How many bottles of white cap do you want ?\n ";
            cin >> quantity;
            totalCost = 90 * quantity;
            cout << "\n" << quantity << " bottles of whitecap will cost you " << totalCost <<"\n";


        }else{cout << "!!! invalid entry !!!";}

}
