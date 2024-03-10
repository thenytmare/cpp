#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int choice;
    float length, width, radius, base, height, area, perimeter,hyp;

    cout << "Choose a figure to find its area and perimeter->" << endl;
    cout << "1. Rectangle" << endl;
    cout << "2. Circle" << endl;
    cout << "3. Right-Angled Triangle" << endl;
    cout << "Enter your choice -> \n";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "Enter length of the rectangle -> \n";
            cin >> length;
            cout << "Enter width of the rectangle -> \n";
            cin >> width;

            area = length * width;
            perimeter = 2 * (length + width);

            cout << "The figure is a Rectangle\nLength-" << length <<"\nWidth-"<<width<< "\nArea-" << area;

            break;

        case 2:
            cout << "Enter radius of the circle -> ";
            cin >> radius;

            area = M_PI * radius * radius;
            perimeter = 2 * M_PI * radius;

            cout << "The figure is a Circle \nRadius ->" << radius << " \nArea ->" << area << "\nPerimeter -> " << perimeter << endl;
            break;

        case 3:
            cout << "Enter base of the right-angled triangle-> \n";
            cin >> base;
            cout << "Enter height of the right-angled triangle-> \n";
            cin >> height;

            hyp = sqrt(base * base + height * height);
            area = 0.5 * base * height;
            perimeter = base + height + hyp;

            cout << "The figure is a Right-Angled Triangle \n\nBase -> " << base << "\n\nHeight -> " << height << "\n\nArea-> " << area << "\n\nPerimeter-> " << perimeter << endl;
            break;

        default:
            cout << "Invalid choice. Please enter a valid choice " << endl;
            break;
    }

    return 0;
}
