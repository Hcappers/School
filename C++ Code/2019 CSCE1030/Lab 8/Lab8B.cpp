/* Author: Haskell Cappers    (haskellcappers@my.unt.edu)
Date: 28Mar2019
Instructor Dr. Helsing 
Description: averaging the grades and displaying in the array.
*/
#include "Lab8_HEADER.h"
int main(){
    const int ROWS = 3; // 3 students
    float grades[ROWS][COLS]; // oast column is for averge of grades
    float minimum[ROWS]; // array to store minimum grades for each student

    for(int row = 0; row < ROWS; row++){
        for(int cols = 0; cols < COLS; cols++){
            cout << "Enter QUIZ #" << cols + 1 << " for student #" << row + 1 << ": ";
            cin >> grades[row][cols];
        }
    }

    computeAverage(grades, ROWS, minimum);
    computeMinimum(grades, ROWS, minimum);

    for(int row = 0; row < ROWS; row++){
        for(int col = 0; col < COLS; col++){
            cout << grades[row][col] << " ";
        }
        cout << endl;
    }


    return 0;
}