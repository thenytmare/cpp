#include<iostream>
using namespace std;
int main()
{
	int k,counter,terms;
	cout <<"Enter number of terms -> ";
	cin >>terms;

	k = 2;//Initialization
    counter = 1;
	do
	{
		cout << k <<"\n";
		k = k + 4;//updation
		counter++;
	}while(counter <= terms); //Condition

	cout <<"\n\n";
	return 0;
}
