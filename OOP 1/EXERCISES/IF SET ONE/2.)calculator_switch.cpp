#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    double num1, num2, result;
    char op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Enter operator (+, -, *, /, %): ";
    cin >> op;

    switch (op)
    {
        case '+':
            result = num1 + num2;
            break;

        case '-':
            result = num1 - num2;
            break;

        case '*':
            result = num1 * num2;
            break;

        case '/':
            if (num2 != 0)
            {
                result = num1 / num2;
            } else {
                cout << "Error! Division by zero." << endl;

            }
            break;

        default:
            cout << "Invalid operator. Please enter a valid operator." << endl;
    }

    cout << "Result: " << result << endl;

    return 0;
}
