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
//void firstPass(int **board, int size); //This is the first pass where if changes the object numbers
//void secondPasss(int **board, int size); //This is the second pass of changing the numbers
//void objectcount(int **board, int size); //This is to count the number of objects that are in the gridto display the count


int main(){
    //This is for the size of the board
    const int SIZE =  8;
    int **board;

    // This group of lines of code are for allocating the memory and setting the pointer for the 2D dynamic array. 
  board = new int* [SIZE];
  for (int i = 0; i  < SIZE; i++){
      board[i]= new int [SIZE];
  }
    intro();
    initalboard(board,SIZE);
    printboard(board, SIZE);
    //cout << "Image contains " << objectcount(board, SIZE) << " objects" << endl;



return 0;
}

void intro(){
    cout << "****************************************************************" << endl;
    cout << "             Computer Science and Engineering                   " << endl;
    cout << "              CSCE 1030 - Computer Science 1                    " << endl;
    cout << "Haskell Cappers   --   hac0078    --  haskellcappers@my.unt.edu " << endl;
    cout << "****************************************************************" << endl;
    cout << endl;
}

void initalboard(int **board, int size){
    ifstream in_s; // To let the user choose what file they want for the game board
    char infile[64]; // This is a 1D array for the input file.
    char c; // This is so the fucntion can grab type of grid
    string line, temp;

    cout << "Please enter the filename of the designated board: ";
    cin >> infile;
    in_s.open(infile);

    // This is an error checking prosses for the input file.
    while(in_s.fail()){
        cout << "The file you tired to open failed. Please try again: ";
        cin >> infile;
        in_s.open(infile);
    }

   int row = 0;
    while(getline(in_s, line)){
       int col = 0;
        stringstream ss(line);
        while(getline(ss, temp, ',')){
            board[row][col] = atoi(temp.c_str());
            col++;
        }
        row++;
    }
}

void printboard(int **board, int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

/*void firstPass(int **board, int size){
    int label =  1;
}

void secondPass(int **board, int size){

}

void objectPass(int **board, int size){
    int count = 0;
    for(int row = 0; row < size; row++){
        for(int colms = 0; colms < size; colms++){
        }
    }
}*/