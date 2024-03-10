#include<iostream>
#include<string>
using namespace std;
int main (void)
{
    float mark1,mark2,mark3,mark4,mark5,average;
    string merit;

    cout <<"Enter marks in 5 units -> \n";
    cin >> mark1 >> mark2 >> mark3 >> mark4 >> mark5;

    average = (mark1+mark2+mark3+mark4+mark5)/5;
    if ( average >=75 && average <= 100 )
    {
       merit ="Distinction " ;
    }else if ( average >=65 && average <=75 )
    {
       merit ="Credit ";
    }else if ( average >=50 && average <=65 )
    {
       merit ="pass ";
    }else if ( average >=0 && average <=50 )
    {
       merit ="Fail ";
    }else
    {
    cout << "invalid mark ";
    }

     cout << merit << endl;


}
