/*Function: ComputeMinimum
  Parameters: grades array, the rows and the minimun scroe
  Return: the minimum score for each student
  Description: This array takes the user enter grades and finds the minimum for each of the students
*/
#include "Lab8_HEADER.h"
void computeMinimum(float grades[][COLS], int ROWS, float minimum[]){
    for(int row = 0; row < ROWS; row++){
        minimum[row] = grades[row][0];
        for(int col = 0; col < COLS - 1; col++){
            if(minimum[row] < grades[row][col - 1]){
                minimum[row]= grades[row][col];
            }
        }
    }
}
