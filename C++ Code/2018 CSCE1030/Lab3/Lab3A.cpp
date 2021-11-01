/* Author: Haskell Cappers (haskellcappers@my.unt.edu)
   Date: 09/13/2018
   Instructor: Dr. Joseph Helsing
   Description: This code take the height and two bases of a trapezoid and calculats the area for it.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main (){
	int Base_1, Base_2, Height;
	float Area;

	cout << "What is the first measurment of the base? ";
	cin >> Base_1;
	cout << "What is the second measurment of the base? ";
	cin >> Base_2;
	cout << "What is the height of the trapezoid? ";
	cin >> Height;
	Area = ((Base_1 + Base_2) / 2) * Height;
	cout << "The area of the trapezoid is " << Area << endl;

	return 0;
}


