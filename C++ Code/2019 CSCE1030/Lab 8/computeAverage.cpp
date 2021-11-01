/*Function: ComputeAverage
  Parameters: grades array, the rows and the minimun scroe
  Return: the average score fro each student
  Description: This array takes the user enter grades and finds the average for each of the students
*/
#include "Lab8_HEADER.h"
void computeAverage(float grades[][COLS], int ROWS, float minimum[]){
    for(int row = 0; row < ROWS; row++){
        float sum = 0;
        for(int col = 0; col < COLS; col++){
            sum += grades[row][col];
        }
        sum -= minimum[row];
        grades[row][COLS - 1] = sum / (COLS - 2);
    }
}