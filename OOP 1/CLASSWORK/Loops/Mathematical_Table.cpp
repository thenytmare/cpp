#include<iostream>
using namespace std;
int main()
{
	int i,j;

	for(i = 1;i <= 5;i++)
	{
		for(j = 1;j <= 20;j++)

			cout<<"\n"<<i<<" * "<<j<<" = "<<(i * j);
		cout<<"\n";
	}

	cout<<"\n\n";
	return 0;
}
