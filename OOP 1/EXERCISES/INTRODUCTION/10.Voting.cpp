#include <iostream>
using namespace std;

int main(void)
{
    int age;
    cout << "Enter your age -> /n";
    cin >> age;

    if (age >= 18)
    {
        cout << "You can vote " << endl;
    }
    else
    {
        cout << "You are too young to vote " << endl << endl;
    }

}
