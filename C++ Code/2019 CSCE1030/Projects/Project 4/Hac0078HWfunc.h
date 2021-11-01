/* People that I worked with on this project include: 
    Andrew Marti
    Jordan Cortez
    Jason  Reyna
*/
#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

struct Relationship {
   // link lists structs
   //  dont need the struct till the very end
};

void intro(); // This function is only to display the defualt header
void initalboard(int **board, int size); //This function is to ask the user to enter the desired file they would like to use
void printboard(int **board, int size); //This function is to print the board of the user defined input file
void firstPass(int **board, int size); //This is the first pass where if changes the object numbers
void secondPasss(int **board, int size); //This is the second pass of changing the numbers
void objectcount(int **board, int size); //This is to count the number of objects that are in the gridto display the count