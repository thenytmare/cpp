#include<iostream>
#define PI 22/7.0
using namespace std;
int main(void)
{
    double radius,area,circumference;

    cout <<"The value is "<< 999.0 / 10 <<"\n\n";
    cout << "Enter the radius of the circle ->\n ";
    cin >>radius;

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    cout <<"The area of the circle is " << area <<endl;
    cout <<"The circumference of the circle is " << circumference;
    cout <<"\n\n";
}

