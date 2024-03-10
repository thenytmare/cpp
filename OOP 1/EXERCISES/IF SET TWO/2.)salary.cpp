#include<iostream>
using namespace std;
int main(void)
{
    float salary ,tax,net_salary;
    cout << "Enter salary amount -> \n";
    cin >> salary;


    if(salary >= 20000)
    {
        tax = salary * 0.15;
    }
    else if(salary >= 10000)
    {
    tax = salary *0.1;
    }

    else
    {
    tax = 0;
    }

    net_salary = salary - tax;

    cout << "Tax amount = " << tax <<endl;
    cout << "Net salary = "<< net_salary << endl;




}

