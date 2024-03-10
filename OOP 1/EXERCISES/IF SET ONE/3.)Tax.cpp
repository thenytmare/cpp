#include <iostream>
using namespace std;

int main(void)
{
    double grosspay, taxRate, total_tax, net_salary;

    cout << "Enter gross pay -> \n";
    cin >> grosspay;

    if (grosspay >= 40000)
    {
        taxRate = 0.30;
    } else if (grosspay >= 30000)
    {
        taxRate = 0.25;
    } else if (grosspay >= 20000)
    {
        taxRate = 0.15;
    } else if (grosspay >= 10000)
    {
        taxRate = 0.10;
    } else {
        taxRate = 0.0;
        cout << "**No tax**";
    }

    total_tax = grosspay * taxRate;
    net_salary = grosspay - total_tax;

    cout << "Tax Amount: " << total_tax << endl;
    cout << "Net Pay: " << net_salary << endl << endl;

}
