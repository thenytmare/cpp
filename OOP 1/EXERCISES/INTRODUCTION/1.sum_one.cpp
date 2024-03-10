#include<iostream>
using namespace std;
int main(void)
{
    int sum,product,average,num1,num2,num3;
    cout <<"Enter three numbers -> \n";

    cin >>num1;
    cin >>num2;
    cin >>num3;

    sum = num1+num2+num3;
    product = num1*num2*num3;
    average = sum/3;

    cout <<"\nThe sum of the three numbers is "<< sum <<"\nThe product of the three numbers is "<< product <<"\nThe average of the three numbers is "<< average;
    cout <<"\n\n";

}
