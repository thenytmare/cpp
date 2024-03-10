#include<iostream>
using namespace std;
int main()
{
    int num,power,ans = 1,counter = 0;

    cout <<"Enter an integer -> ";
    cin >>num;
    cout <<"Enter the exponent -> ";
    cin >>power;

  do
    {
        ans = ans * num;
        counter++;

    }while(counter < power);

    cout <<"results = "<< ans;
    return 0;
}
