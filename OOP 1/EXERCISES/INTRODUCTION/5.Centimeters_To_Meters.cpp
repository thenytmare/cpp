#include <iostream>
using namespace std;

int main(void)
 {
    float length_cm;
    cout << "Enter length in centimeters -> ";
    cin >> length_cm;

    float length_m = length_cm / 100;
    cout << length_cm << " cm = " << length_m << " meters." << endl;
    cout <<"n\n";


}
