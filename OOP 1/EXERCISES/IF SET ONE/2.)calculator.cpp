#include <iostream>
using namespace std;

int main(void)
{
    double num1, num2, result;
    char op;

    cout << "Enter two numbers -> ";
    cin >> num1 >> num2;

    cout << "Enter operator (+, -, *, /, %) -> ";
    cin >> op;

    if (op == '+')
    {
        result = num1 + num2;
    } else if (op == '-')
    {
        result = num1 - num2;
    } else if (op == '*')
    {
        result = num1 * num2;
    } else if (op == '/')
    {
        if (num2 != 0)
        {
            result = num1 / num2;
        } else {
            cout << "!!!Error cannot divide by zero!!!" << endl;
        }

    } else {
        cout << "Invalid operator. Please enter a valid operator." << endl;
    }

    cout << "Result: " << result << endl;


}
