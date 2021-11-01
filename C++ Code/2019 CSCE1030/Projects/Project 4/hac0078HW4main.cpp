#include "Hac0078HW4func.h"

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
