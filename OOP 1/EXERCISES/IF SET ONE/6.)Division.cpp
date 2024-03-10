#include <iostream>
using namespace std;

int main(void)
{
    float num1, num2, result;

    cout << "Enter two numbers  -> \n\n";
    cin >> num1 >> num2;

    if (num2 != 0)
    {
        if (num1 > num2)
        {
            result = num1 / num2;
            cout << "Result-> " << result << "\n\n";
        } else {
            result = num2 / num1;
            cout << "Result-> " << result << "\n\n";
        }
    } else {
        cout << "!Cannot divide by zero!" << "\n\n";
    }

}
