#include <iostream>
using namespace std;

int main()
{

    char gender;
    float salary;
    cout << "Enter your gender (M or F): ";
    cin >> gender;
    cout << "Enter your salary -> \n";
    cin >> salary;


    float taxRate;
    if (gender == 'F')
    {
        if (salary >= 15000)
        {
            taxRate = 0.14;
        } else
        {
            taxRate = 0.12;
        }
    } else if (gender == 'M')
    {
        if (salary >= 14000)
        {
            taxRate = 0.15;
        } else {
            taxRate = 0.13;
        }
    } else {
        cout << "Invalid gender." << endl;
        return 1;
    }


    float tax = salary * taxRate;
    float netSalary = salary - tax;


    cout << "Tax Rate ->" << taxRate * 100 << "%" << endl;
    cout << "Tax Amount -> " << tax << endl;
    cout << "Net Salary -> " << netSalary << endl;

    return 0;
}
