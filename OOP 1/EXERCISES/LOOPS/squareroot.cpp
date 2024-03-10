#include<iostream>
using namespace std;
int main()
{
    int num,i;

    cout<<"Enter a number -> ";
    cin>>num;

    for(i=0;i*i<=num;i++)
    {
        if(i * i==num)
        {
            cout <<"The square root of "<< num << " is " << i<<"\n\n";
            break;
        }
    }

    return 0;

}
