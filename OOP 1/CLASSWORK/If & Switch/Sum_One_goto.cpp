#include<iostream>
using namespace std;
int main()
{
	double num_one,num_two,total;

	goto gashororo;
home:
	cout<<"Enter the first number -> ";
	cin>>num_one;
	goto hell;
gashororo:
	cout<<"Enter the second number-> ";
	cin>>num_two;
	goto home;

hell:
	total = num_one + num_two;

	cout<<"\nThe sum is "<<total<<"\n\n";

	return 0;
}
