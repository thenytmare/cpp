#include <iostream>
using namespace std;

int main(void)
{
    double num1, num2, result;

    cout << "Enter two numbers -> ";
    cin >> num1 >> num2;

    if (num1 > num2)
    {
        result = num1 - num2;
        cout << "Result: " << result << endl;
    } else if (num2 > num1)
    {
        if (num2 != 0)
        {
            result = num1 / num2;
            cout << "Result: " << result << endl;
        } else {
            cout << "Error! cannot divide by zero." << endl;
        }
    } else {
        result = num1 + num2;
        cout << "Answer " << result << endl;
    }


}
