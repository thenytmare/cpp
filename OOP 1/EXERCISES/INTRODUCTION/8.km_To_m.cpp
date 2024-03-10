#include <iostream>
using namespace std;

int main(void)
{
    float distance_km;
    cout << "Enter distance in kilometers -> ";
    cin >> distance_km;

    double distance_m = distance_km * 1000;
    cout << distance_km << " kilometers = " << distance_m << " meters." << endl << endl;

}
