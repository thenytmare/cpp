#include<iostream>
using namespace std;
int main()
{
	int k;

	k = 1;//Initialization

	do
	{
		cout<<"\nk = "<<k;
		k *= 2 ;//updation
	}while(k <= 20); //Condition
        //cout<<"\nAs of now the value in k is  "<<k;

	cout<<"\n\n";
	return 0;
}
