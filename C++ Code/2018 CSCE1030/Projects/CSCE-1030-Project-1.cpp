#include <iostream>
#include <cmath>
using namespace std;

int main (){
    float Gravity;
    const float Grav_Constant = 6.673e-11;
    float Mass;
    float Radius;
    float Height;
    float Time;
    float Gravity_2;

    cout << "Computer Science and Engineering" << endl;
    cout << "CSCE 1030 - Computer Science I" <<  endl;
    cout << "Haskell Cappers hac0078 haskellcappers@my.unt.edu" << endl;
    cout << "Enter mass in kg: ";
    cin >> Mass;
    cout << "Enter radius in meters: ";
    cin >> Radius;
    Gravity = (Grav_Constant * Mass) / (Radius * Radius);
    cout. setf (ios :: fixed);
    cout. setf (ios :: showpoint);
    cout. precision(2);
    cout << "The acceleration due to gravity is " << Gravity << " meters per squared second." << endl;
    cout << "Enter height in feet ";
    cin >> Height;
    Gravity_2 = (Gravity * 3.28);
    Time = sqrt((2 * Height) / Gravity_2);
    cout. setf (ios :: fixed);
    cout. setf (ios :: showpoint);
    cout. precision(2);
    cout << "The object will reach the surface in " << Time << " seconds." << endl;

        return 0;
}
