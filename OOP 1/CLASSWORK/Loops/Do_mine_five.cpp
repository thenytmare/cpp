#include<iostream>
using namespace std;
int main()
{
	int k,counter;

	k = 2;//Initialization
    counter = 1;
	do
	{
		cout << k <<"\n";
		k = k + 4;//updation
		counter++;
	}while(counter <= 20); //Condition

	cout<<"\n\n";
	return 0;
}
